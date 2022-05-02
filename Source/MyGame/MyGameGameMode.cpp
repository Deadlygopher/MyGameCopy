// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGameGameMode.h"
#include "MyGamePlayerController.h"
#include "MyGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyGameGameMode::AMyGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMyGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}