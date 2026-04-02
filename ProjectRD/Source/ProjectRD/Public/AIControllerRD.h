// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerRD.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams();
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam();

/**
 * 
 */
UCLASS()
class PROJECTRD_API AAIControllerRD : public AAIController
{
	GENERATED_BODY()

public:

protected:
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnUnPossess() override;

	// UPROPERTY(BlueprintCallable, Category = "RD|gf") UPGAS_StateTreeAIComponent*
};
