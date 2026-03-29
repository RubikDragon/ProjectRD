// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RDCustomUI.generated.h"

class UUserWidget;

/**
 * 
 */
UCLASS()
class PROJECTRD_API ARDCustomUI : public AHUD
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "RD|Display") TSubclassOf<UUserWidget> PlayerHudClass = nullptr;

protected:


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void SetUpWight(UUserWidget* wighet);


	UPROPERTY() UWorld* world;
	UPROPERTY() TObjectPtr<UUserWidget> PlayerHudWight = nullptr;
};
