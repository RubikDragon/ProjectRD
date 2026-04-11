// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/AITaskSendDebugMessage.h"

UAITaskSendDebugMessage::UAITaskSendDebugMessage()
{

}

EBTNodeResult::Type UAITaskSendDebugMessage::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{


	UE_LOG(LogTemp, Display, TEXT("%s"), *debugText);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}


