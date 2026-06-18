// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActorPannel.generated.h"

UCLASS()
class PROJECTRD_API AMoveActorPannel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveActorPannel();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY() FVector moveDirection = FVector(0, 0, 1);

	UPROPERTY() float moveForce;

	UPROPERTY() AActor* act;
};
