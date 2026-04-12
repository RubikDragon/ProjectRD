// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AITaskAttack.h"
#include "AiStuff/TopDownChartureAIController.h"
#include "PlayerChartureFPS.h"
#include "AIController.h"

UAITaskAttack::UAITaskAttack()
{

}

EBTNodeResult::Type UAITaskAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
		
	aiController = OwnerComp.GetAIOwner();

	if (!aiController) {

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	aiPawn = aiController->GetPawn();

	if (!aiPawn) {

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}

	aiCharture = Cast<APlayerChartureFPS>(aiPawn);

	if (!aiCharture)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;

	}

	aiCharture->PlayerShoot();

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}