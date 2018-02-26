// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Studio2ProjectGameMode.h"
#include "Studio2ProjectPlayerController.h"
#include "Studio2ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudio2ProjectGameMode::AStudio2ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AStudio2ProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}