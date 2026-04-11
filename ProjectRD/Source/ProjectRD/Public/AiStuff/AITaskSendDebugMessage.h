// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITaskSendDebugMessage.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAITaskSendDebugMessage : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	UAITaskSendDebugMessage();

	UPROPERTY(EditAnywhere, Category = "RD|Print") FString debugText = "AI Text: Hello world";

};
