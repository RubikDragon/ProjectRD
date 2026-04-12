// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiTaskGetAiLocation.h"

#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTNode.h"

UAiTaskGetAiLocation::UAiTaskGetAiLocation()
{
	NodeName = TEXT("Get Ai loaction");

	// markes so blackbordKey can only be assepted as a Vector value
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UAiTaskGetAiLocation, BlackboardKey));
}

EBTNodeResult::Type UAiTaskGetAiLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	aiController = OwnerComp.GetAIOwner();

	if (aiController) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	aiPawn = aiController->GetPawn();

	if (aiPawn) {
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	aiController->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName, aiPawn->GetActorLocation());

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}


FString UAiTaskGetAiLocation::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}