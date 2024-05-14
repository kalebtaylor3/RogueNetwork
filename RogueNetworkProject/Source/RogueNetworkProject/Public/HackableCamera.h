
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HackableCamera.generated.h"


UCLASS()
class ROGUENETWORKPROJECT_API AHackableCamera : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHackableCamera();

	// Function to enable player control of the camera
	UFUNCTION(BlueprintCallable)
	void EnableCameraControl(UHackingSystem* system);

	// Function to disable player control of the camera
	UFUNCTION(BlueprintCallable)
	void DisableCameraControl();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Flag to indicate if player control is enabled
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Hacking)
	bool bCameraControlEnabled;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Hacking)
	UHackingSystem* hackingSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hacking)
	float CameraRotationSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hacking)
	float CameraRotationDamping;

private:

	// Camera rotation variables
	FRotator TargetRotation;

	// Movement component
	UPawnMovementComponent* PawnMovementComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	void Turn(float Value);

	void LookUp(float Value);

};
