// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITaskAttack.generated.h"

class AAIController;
class APawn;
class APlayerChartureFPS;

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAITaskAttack : public UBTTaskNode
{
	GENERATED_BODY()
	
protected:
	UAITaskAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY() AAIController* aiController;
	UPROPERTY() APawn* aiPawn;
	UPROPERTY() APlayerChartureFPS* aiCharture;
};
