// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiTaskJump.h"
#include "AiStuff/TopDownChartureAIController.h"

UAiTaskJump::UAiTaskJump()
{

}

EBTNodeResult::Type UAiTaskJump::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	if (ATopDownChartureAIController* owningController = Cast<ATopDownChartureAIController>(OwnerComp.GetAIOwner())) {

		owningController->AiJumpAction();

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}
}