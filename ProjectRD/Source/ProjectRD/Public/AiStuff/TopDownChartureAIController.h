// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TopDownChartureAIController.generated.h"

class ABasicChartureRD;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams();
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam();

/**
 * 
 */
UCLASS()
class PROJECTRD_API ATopDownChartureAIController : public AAIController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "RD|BasicMove") void AiJumpAction();

	UFUNCTION(BlueprintCallable, Category = "RD|BasicMove") void AiMoveAction(FVector2D& movePostion);

	UFUNCTION(BlueprintCallable, Category = "RD|BasicMove") void AiAttackAction();

protected:
	ATopDownChartureAIController();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RD|AI") TObjectPtr<UBehaviorTree> behaviorTree;

	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnUnPossess() override;

	UPROPERTY() ABasicChartureRD* possesedPawn;

	// UPROPERTY(BlueprintCallable, Category = "RD|gf") UPGAS_StateTreeAIComponent*
	
};
