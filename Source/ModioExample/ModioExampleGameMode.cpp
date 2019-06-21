// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ModioExampleGameMode.h"
#include "ModioExampleHUD.h"
#include "ModioExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModioExampleGameMode::AModioExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AModioExampleHUD::StaticClass();
}
