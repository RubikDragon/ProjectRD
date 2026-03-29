// Fill out your copyright notice in the Description page of Project Settings.


#include "RDCustomUI.h"
#include "Blueprint/UserWidget.h"

void ARDCustomUI::BeginPlay()
{
	world = GetWorld();
	checkf(world, TEXT("Failed To finde world"));


	checkf(PlayerHudClass, TEXT("Failed To finde PlayerHud"));

	PlayerHudWight = CreateWidget<UUserWidget>(world, PlayerHudClass);
	SetUpWight(PlayerHudWight);
}

void ARDCustomUI::SetUpWight(UUserWidget* wighet)
{
	wighet->AddToViewport();
	wighet->SetVisibility(ESlateVisibility::Visible);
}
