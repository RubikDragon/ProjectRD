// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "AiDecorePlayerWithInRange.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAiDecorePlayerWithInRange : public UBTDecorator_BlackboardBase
{
	GENERATED_BODY()

public:

protected:
	UAiDecorePlayerWithInRange();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual FString GetStaticDescription() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Search") float distanceRange = 1000.f;
};
