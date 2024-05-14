// Fill out your copyright notice in the Description page of Project Settings.


#include "HackableCamera.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Components/InputComponent.h"

// Sets default values
AHackableCamera::AHackableCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bCameraControlEnabled = false;
	CameraRotationSpeed = 0.5f; // Adjust this value to control the rotation speed
	CameraRotationDamping = 0.9f; // Adjust this value to control the damping effect

	// Set up the default movement component
	PawnMovementComponent = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("PawnMovementComponent"));
	if (PawnMovementComponent)
	{
		PawnMovementComponent->UpdatedComponent = RootComponent;
	}

}

void AHackableCamera::EnableCameraControl(UHackingSystem* system)
{
	hackingSystem = system;
	bCameraControlEnabled = true;
	UE_LOG(LogTemp, Log, TEXT("you are hacking me"));
}

void AHackableCamera::DisableCameraControl()
{
	bCameraControlEnabled = false;
}

// Called when the game starts or when spawned
void AHackableCamera::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHackableCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCameraControlEnabled)
	{
		// Get the world rotation of the camera
		const FRotator WorldRotation = GetActorRotation();

		// Apply damping to rotation
		FRotator DampedRotation = FMath::Lerp(WorldRotation, TargetRotation, CameraRotationDamping);

		// Clamp pitch and yaw rotation to restrict the movement range in world space
		DampedRotation.Pitch = FMath::Clamp(DampedRotation.Pitch, WorldRotation.Pitch - 45.0f, WorldRotation.Pitch + 45.0f);
		DampedRotation.Yaw = FMath::Clamp(DampedRotation.Yaw, WorldRotation.Yaw - 45.0f, WorldRotation.Yaw + 45.0f);

		SetActorRotation(DampedRotation);
	}

}

void AHackableCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind input functions
	PlayerInputComponent->BindAxis("Turn", this, &AHackableCamera::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AHackableCamera::LookUp);
}

void AHackableCamera::Turn(float Value)
{
	if (bCameraControlEnabled)
	{
		// Limit the turn speed to make it feel restricted
		Value = FMath::Clamp(Value, -0.1f, 0.1f);

		AddControllerYawInput(Value * CameraRotationSpeed);
		TargetRotation.Yaw = GetControlRotation().Yaw;
	}
}

void AHackableCamera::LookUp(float Value)
{
	if (bCameraControlEnabled)
	{
		// Limit the look up/down speed to make it feel restricted
		Value = FMath::Clamp(Value, -0.1f, 0.1f);

		AddControllerPitchInput(Value * CameraRotationSpeed);
		TargetRotation.Pitch = GetControlRotation().Pitch;
	}
}

