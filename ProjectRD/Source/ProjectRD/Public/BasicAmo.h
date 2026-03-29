// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Amo.h"
#include "BasicAmo.generated.h"



UCLASS()
class PROJECTRD_API ABasicAmo : public AActor, public IAmo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicAmo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "_RD|Amo") int32 amoGiveAmount = 1;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Inherited via IAmo
	virtual int32 PickUpAmo() override;
};
