// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiTaskGetClosePlayerLocation.h"

#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTNode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"


UAiTaskGetClosePlayerLocation::UAiTaskGetClosePlayerLocation()
{
	NodeName = TEXT("Get player loaction");

	// markes so blackbordKey can only be assepted as a Vector value
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UAiTaskGetClosePlayerLocation, BlackboardKey));
}

EBTNodeResult::Type UAiTaskGetClosePlayerLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
#pragma region Condtion fails
	aiController = OwnerComp.GetAIOwner();

	if (!aiController) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	playerCharture = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	if (!playerCharture) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	aiPawn = aiController->GetPawn();

	if (!aiPawn) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}
#pragma endregion

	aiLocation = aiPawn->GetActorLocation();
	playerLoaction = playerCharture->GetActorLocation();

	distance = FVector::Dist(playerLoaction, aiLocation);

	if (distance <= chaseRange)
		aiController->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName, playerLoaction);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}

FString UAiTaskGetClosePlayerLocation::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
