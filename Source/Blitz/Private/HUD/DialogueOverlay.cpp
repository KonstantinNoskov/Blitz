// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/DialogueOverlay.h"

#include "Components/Border.h"

void UDialogueOverlay::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
	if (DialogueBorder)
	{
		DialogueBorder->SetBrushColor(FLinearColor(0.f,0.f,0.f, .7f));
	}
}
