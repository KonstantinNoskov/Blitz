// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlitzHUD.generated.h"

class UDialogueOverlay;
/**
 * 
 */
UCLASS()
class BLITZ_API ABlitzHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	TSubclassOf<UUserWidget> DialogueOverlayClass;
	
	UPROPERTY()
	UDialogueOverlay* DialogueOverlay;

	UFUNCTION()
	void AddDialogueOverlay();


};
