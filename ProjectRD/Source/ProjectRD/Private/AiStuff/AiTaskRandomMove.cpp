// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiTaskRandomMove.h"

#include "BehaviorTree/BTTaskNode.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTNode.h"

UAiTaskRandomMove::UAiTaskRandomMove()
{
	NodeName = TEXT("Go to random location");
	
	// markes so blackbordKey can only be assepted as a Vector value
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UAiTaskRandomMove, BlackboardKey));
}

EBTNodeResult::Type UAiTaskRandomMove::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{


	//return EBTNodeResult::Type();

	FNavLocation navLocation;

	// get ai controller
	AAIController* aiController = OwnerComp.GetAIOwner();

	if (aiController) {
		const APawn* aiPawn = aiController->GetPawn();
		const FVector origin = aiPawn->GetActorLocation();

		
		const UNavigationSystemV1* navSystem = UNavigationSystemV1::GetCurrent(GetWorld());

		if (navSystem && navSystem->GetRandomPointInNavigableRadius(origin, searchRadius, navLocation))
		{
			// BlackbordKey
			aiController->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName, navLocation.Location);

			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	return EBTNodeResult::Failed;
}

FString UAiTaskRandomMove::GetStaticDescription() const
{
	return FString::Printf(TEXT("Vector: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
