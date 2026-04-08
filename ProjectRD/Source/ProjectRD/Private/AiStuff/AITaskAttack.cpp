// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AITaskAttack.h"
#include "AiStuff/TopDownChartureAIController.h"

UAITaskAttack::UAITaskAttack()
{

}

EBTNodeResult::Type UAITaskAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	if (ATopDownChartureAIController* owningController = Cast<ATopDownChartureAIController>(OwnerComp.GetAIOwner())) {

		owningController->AiAttackAction();

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}
}