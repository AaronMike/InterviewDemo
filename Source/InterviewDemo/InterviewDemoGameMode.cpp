// Copyright Epic Games, Inc. All Rights Reserved.

#include "InterviewDemoGameMode.h"
#include "InterviewDemoHUD.h"
#include "InterviewDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInterviewDemoGameMode::AInterviewDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInterviewDemoHUD::StaticClass();
}
