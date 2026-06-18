// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "CanSeeActor.generated.h"



/**
 * 
 */
UCLASS()
class PROJECTRD_API UCanSeeActor : public UBTService
{
	GENERATED_BODY()

protected:
	UCanSeeActor();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category = "_RD") FBlackboardKeySelector targetActor;

	UPROPERTY(EditAnywhere, Category = "_RD") FBlackboardKeySelector retrunValue;

	UPROPERTY(EditDefaultsOnly, Category = "_RD") bool drawDebugLine;

	UPROPERTY(EditDefaultsOnly, Category = "_RD|Ray limeters") bool ToBeAdded;

#pragma region temp value
	UPROPERTY() FHitResult hit;
	UPROPERTY() bool hasHit;

	UPROPERTY() AAIController* aiController;
	UPROPERTY() AActor* aiActor;

	UPROPERTY() AActor* targetAct;
	UPROPERTY() FVector rayEnd;
	UPROPERTY() FVector rayStart;

#pragma endregion


};
