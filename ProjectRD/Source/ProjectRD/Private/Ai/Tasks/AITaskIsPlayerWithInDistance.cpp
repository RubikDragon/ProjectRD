// Fill out your copyright notice in the Description page of Project Settings.


#include "Ai/Tasks/AITaskIsPlayerWithInDistance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
//#include "BehaviorTree/Blackboard/BlackboardKey.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

UAITaskIsPlayerWithInDistance::UAITaskIsPlayerWithInDistance()
{
	NodeName = TEXT("Player is with in distance");

	// markes so blackbordKey can only be assepted as a Vector value
	BlackboardKey.AddBoolFilter(this, GET_MEMBER_NAME_CHECKED(UAITaskIsPlayerWithInDistance, BlackboardKey));
}

EBTNodeResult::Type UAITaskIsPlayerWithInDistance::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ai = OwnerComp.GetAIOwner();
	aiPawn = ai->GetPawn();

	if (!ai || !aiPawn) {

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (!player) {

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	playerLocation = player->GetActorLocation();
	aiLocation = aiPawn->GetActorLocation();

	distanceToPlayer = FVector::Dist(aiLocation, playerLocation);

	if (debug)
		UE_LOG(LogTemp, Display, TEXT("Ai distance form player is: %f"), distanceToPlayer);

	if (distanceToPlayer <= checkDistance) {
		ai->GetBlackboardComponent()->SetValueAsBool(BlackboardKey.SelectedKeyName, true);
	}
	else
	{
		ai->GetBlackboardComponent()->SetValueAsBool(BlackboardKey.SelectedKeyName, false);
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

FString UAITaskIsPlayerWithInDistance::GetStaticDescription() const
{
	return FString::Printf(TEXT("Bool: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
