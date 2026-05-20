// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "AITaskIsPlayerWithInDistance.generated.h"

class AAIController;

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAITaskIsPlayerWithInDistance : public UBTTask_BlackboardBase
{

	GENERATED_BODY()

protected:
	UAITaskIsPlayerWithInDistance();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Search") float checkDistance = 500.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Search") int32 checkForPlayerWithId;

	UPROPERTY(EditDefaultsOnly, Category = "RD|Debug") bool debug = false;

	UPROPERTY() AAIController* ai;
	UPROPERTY() ACharacter* player;
	UPROPERTY() APawn* aiPawn;

	UPROPERTY() FVector aiLocation;
	UPROPERTY() FVector playerLocation;
	UPROPERTY() float distanceToPlayer;


};
