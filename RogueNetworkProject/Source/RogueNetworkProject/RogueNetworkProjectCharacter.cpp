// Copyright Epic Games, Inc. All Rights Reserved.

#include "RogueNetworkProjectCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ARogueNetworkCharacter

ARogueNetworkProjectCharacter::ARogueNetworkProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void ARogueNetworkProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	walkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	runSpeed = GetCharacterMovement()->MaxWalkSpeed * 2;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ARogueNetworkProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ARogueNetworkProjectCharacter::Move);

		//Sprint
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Started, this, &ARogueNetworkProjectCharacter::ToggleSprint);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &ARogueNetworkProjectCharacter::ToggleSprint);

		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &ARogueNetworkProjectCharacter::ToggleCrouch);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &ARogueNetworkProjectCharacter::ToggleCrouch);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ARogueNetworkProjectCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ARogueNetworkProjectCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ARogueNetworkProjectCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ARogueNetworkProjectCharacter::ToggleSprint()
{
	bIsSprinting = !bIsSprinting;
	switch (bIsSprinting)
	{
	case true:
		if (canSprint)
		{
			UE_LOG(LogTemp, Log, TEXT("Spring Has been toggled onn"));
			GetCharacterMovement()->MaxWalkSpeed = runSpeed;
			canCrouch = false;
		}
		break;
	case false:
		UE_LOG(LogTemp, Log, TEXT("Spring Has been toggled off"));
		GetCharacterMovement()->MaxWalkSpeed = walkSpeed;
		canCrouch = true; //doing this before shit
		break;
	}
}

void ARogueNetworkProjectCharacter::ToggleCrouch()
{
	if(canCrouch)
		bisCrouching = !bisCrouching;

	switch (bisCrouching)
	{
	case true:
		UE_LOG(LogTemp, Log, TEXT("You are crouching"));
		{
			if (canCrouch)
			{
				GetCapsuleComponent()->SetCapsuleHalfHeight(60.0f);
				GetCapsuleComponent()->SetWorldLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z));
				canSprint = false;
			}
		}
		break;
	case false:
		UE_LOG(LogTemp, Log, TEXT("You are NOT crouching"));

		// Perform a raycast to check if uncrouching is possible
		FVector StartLocation = GetActorLocation();
		FVector EndLocation = StartLocation + FVector(0.0f, 0.0f, 90 + UncrouchOffsett); // Add a small offset for the end location
		FHitResult HitResult;
		FCollisionQueryParams CollisionParams;
		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, CollisionParams);

		// Draw debug line for the raycast
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, bHit ? FColor::Red : FColor::Green, false, 2.0f, 0, 1.0f);

		// If there's no obstruction, perform the crouch
		if (!bHit)
		{
			GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
			canSprint = true;
		}
		else
		{
			// There's an obstruction, do not crouch
			UE_LOG(LogTemp, Log, TEXT("Cannot crouch, obstruction detected"));
			bisCrouching = true; // Reset the crouching flag
		}
		break;
	}
}