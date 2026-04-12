// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiDecorePlayerWithInRange.h"

#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTNode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

UAiDecorePlayerWithInRange::UAiDecorePlayerWithInRange()
{
	NodeName = TEXT("Player with in distance");
}

bool UAiDecorePlayerWithInRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

#pragma region Condtion fails
	AAIController* aiController = OwnerComp.GetAIOwner();

	if (!aiController) {
		return false;
	}

	ACharacter* playerCharture = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (playerCharture){
		return false;
	}
		
	APawn* aiPawn = aiController->GetPawn();

	if (!aiPawn) {
		return false;
	}
#pragma endregion

	UE_LOG(LogTemp, Display, TEXT("HHHHHHHHHHHH"));

	FVector aiLocation = aiPawn->GetActorLocation();
	FVector playerLoaction = playerCharture->GetActorLocation();

	float distance = FVector::Dist(playerLoaction, aiLocation);

	if (distance <= distanceRange) {
		UE_LOG(LogTemp, Display, TEXT("IN distance"));
			return true;
	}
	else
		return false;


}

FString UAiDecorePlayerWithInRange::GetStaticDescription() const
{
	return FString::Printf(TEXT("Player with in: %f"), distanceRange);
}
