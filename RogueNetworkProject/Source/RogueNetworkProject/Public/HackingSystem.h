// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HackableCamera.h"
#include "GameFramework/Character.h" // Include the header file for ACharacter
#include "EngineUtils.h"
#include "CharacterMovementComponent.generated.h"
#include "HackingSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROGUENETWORKPROJECT_API UHackingSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHackingSystem();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Reference to the currently hacked camera
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Hacking)
	AHackableCamera* HackedCamera;

	// Flag to indicate if hacking is in progress
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Hacking, meta = (AllowPrivateAccess = "true"))
	bool bIsHacking;

	UFUNCTION(BlueprintCallable)
	void StartHacking();

	// Function to stop the hacking process
	UFUNCTION(BlueprintCallable)
	void StopHacking();

	// Function to handle transition effect and enable player control
	UFUNCTION(BlueprintCallable)
	void HandleHackingTransition();

	void HandleHackingTransitionOut();

	UFUNCTION(BlueprintCallable)
	void DisablePlayerControl(bool value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hacking, meta = (AllowPrivateAccess = "true"))
	ACharacter* playerrr;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
