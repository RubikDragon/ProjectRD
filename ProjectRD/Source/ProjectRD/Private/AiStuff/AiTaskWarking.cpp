// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AiTaskWarking.h"
#include "AiStuff/TopDownChartureAIController.h"
#include "Kismet/GameplayStatics.h"

UAiTaskWarking::UAiTaskWarking()
{

}

EBTNodeResult::Type UAiTaskWarking::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//owningController = Cast<AAIController>(OwnerComp.GetAIOwner());

	if (ATopDownChartureAIController* owningController = Cast<ATopDownChartureAIController>(OwnerComp.GetAIOwner())) {

		//owningController->AiMoveAction();
		FVector g = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		//ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		//myCharacter->GetActorLocation();

		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return EBTNodeResult::Failed;
	}
}