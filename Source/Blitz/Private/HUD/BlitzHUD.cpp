// Fill out your copyright notice in the Description page of Project Settings.


#include "Blitz/Public/HUD/BlitzHUD.h"

#include "Blueprint/UserWidget.h"
#include "HUD/DialogueOverlay.h"

void ABlitzHUD::BeginPlay()
{
	Super::BeginPlay();

	// Add Dialogue overlay
	AddDialogueOverlay();
}

void ABlitzHUD::AddDialogueOverlay()
{
	APlayerController* PlayerController = GetOwningPlayerController();

	if (PlayerController)
	{
		DialogueOverlay = CreateWidget<UDialogueOverlay>(PlayerController, DialogueOverlayClass);
		DialogueOverlay->AddToViewport();
	}
}


