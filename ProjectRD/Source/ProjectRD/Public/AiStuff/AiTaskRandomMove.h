// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"

#include "AiTaskRandomMove.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAiTaskRandomMove : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:

protected:
	UAiTaskRandomMove();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Search") float searchRadius = 500.f;
};
