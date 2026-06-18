// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SetPlayerValueToBB.generated.h"

class AAIController;

/// <summary>
/// is meant to be set onto a aiController
/// </summary>
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API USetPlayerValueToBB : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USetPlayerValueToBB();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "_RD") FName playerBBKeyName = "Player";
	UPROPERTY(EditDefaultsOnly, Category = "_RD") int32 getPlayerId = 0;

	UPROPERTY() AAIController* ownerCharture;
		
};
