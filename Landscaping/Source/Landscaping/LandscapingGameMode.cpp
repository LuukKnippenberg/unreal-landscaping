// Copyright Epic Games, Inc. All Rights Reserved.

#include "LandscapingGameMode.h"
#include "LandscapingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandscapingGameMode::ALandscapingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
