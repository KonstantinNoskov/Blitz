// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueOverlay.generated.h"

class UTextBlock;
class UBorder;
class UImage;
/**
 * 
 */
UCLASS()
class BLITZ_API UDialogueOverlay : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

public:

	UPROPERTY(meta = (BindWidget))
	UImage* BackgroundImage;

	UPROPERTY(meta = (BindWidget))
	UImage* RightImage;

	UPROPERTY(meta = (BindWidget))
	UImage* LeftImage;

	UPROPERTY(meta = (BindWidget))
	UBorder* DialogueBorder;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* DialogueText;

	UPROPERTY(meta = (BindWidget))
	UBorder* CharacterNameBorder;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* CharacterNameText;
};
