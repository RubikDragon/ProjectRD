// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AITaskSpawnActor.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAITaskSpawnActor : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
protected:
	UAITaskSpawnActor();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Spawn") AActor* spawnActor; // TSubclassOf


	UPROPERTY() AAIController* ai;

};
