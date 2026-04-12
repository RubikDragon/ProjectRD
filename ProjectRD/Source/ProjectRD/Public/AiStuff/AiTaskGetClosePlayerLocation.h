// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AiTaskGetClosePlayerLocation.generated.h"

class AAIController;
class ACharacter;
class APawn;

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAiTaskGetClosePlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:

protected:
	UAiTaskGetClosePlayerLocation();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Search") float chaseRange = 1000.f;


	UPROPERTY() AAIController* aiController;
	UPROPERTY() APawn* aiPawn;

	UPROPERTY() ACharacter* playerCharture;

	UPROPERTY() FVector aiLocation;
	UPROPERTY() FVector playerLoaction;
	UPROPERTY() float distance;
};
