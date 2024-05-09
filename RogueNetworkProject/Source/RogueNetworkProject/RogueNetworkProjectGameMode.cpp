// Copyright Epic Games, Inc. All Rights Reserved.

#include "RogueNetworkProjectGameMode.h"
#include "RogueNetworkProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARogueNetworkProjectGameMode::ARogueNetworkProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_MainCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
