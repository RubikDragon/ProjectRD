// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AiTaskGetAiLocation.generated.h"

class AAIController;
class APawn;

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAiTaskGetAiLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:

protected:
	UAiTaskGetAiLocation();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY() AAIController* aiController;
	UPROPERTY() APawn* aiPawn;
};
