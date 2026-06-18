// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"

#include "Ai/BBComponents/SetPlayerValueToBB.h"

// Sets default values for this component's properties
USetPlayerValueToBB::USetPlayerValueToBB()
{

}


// Called when the game starts
void USetPlayerValueToBB::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	if (GetOwner())
	{
		ownerCharture = Cast<AAIController>(GetOwner());
		ownerCharture->GetBlackboardComponent()->SetValueAsObject(playerBBKeyName, UGameplayStatics::GetPlayerCharacter(this, getPlayerId));
	}
}

