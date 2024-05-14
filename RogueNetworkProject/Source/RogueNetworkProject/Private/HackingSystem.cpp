// Fill out your copyright notice in the Description page of Project Settings.


#include "HackingSystem.h"

// Sets default values for this component's properties
UHackingSystem::UHackingSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHackingSystem::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}

void UHackingSystem::StartHacking()
{
	HandleHackingTransition();
}

void UHackingSystem::StopHacking()
{
	HandleHackingTransitionOut();
}

void UHackingSystem::HandleHackingTransition()
{
	//do some sort of transition first

	if (HackedCamera)
	{
		bIsHacking = true;
		// Enable player control of the hacked camera
		HackedCamera->EnableCameraControl(this);
		DisablePlayerControl(true);
	}
}

void UHackingSystem::HandleHackingTransitionOut()
{
	//do some sort of transition first

	if (HackedCamera)
	{
		bIsHacking = false;
		// Enable player control of the hacked camera
		HackedCamera->DisableCameraControl();
		DisablePlayerControl(false);
	}
}

void UHackingSystem::DisablePlayerControl(bool value)
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		if (playerrr)
		{
			//change input data base instead
			if (value == true)
			{
				//PlayerCharacter->DisableInput(PlayerController);
				PlayerController->Possess(HackedCamera);
			}
			else if (value == false)
			{
				//PlayerCharacter->EnableInput(PlayerController);
				PlayerController->Possess(playerrr);
			}
		}
	}
}


// Called every frame
void UHackingSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

