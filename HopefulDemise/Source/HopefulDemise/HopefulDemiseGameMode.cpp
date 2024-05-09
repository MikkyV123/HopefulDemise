// Copyright Epic Games, Inc. All Rights Reserved.

#include "HopefulDemiseGameMode.h"
#include "HopefulDemiseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHopefulDemiseGameMode::AHopefulDemiseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
