// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InterviewDemoHUD.generated.h"

UCLASS()
class AInterviewDemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInterviewDemoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

