// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/SpecialAmo/SpecialAmo.h"

#include "SpecialBulletAmo.generated.h"

UCLASS()
class PROJECTRD_API ASpecialBulletAmo : public AActor, public ISpecialAmo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpecialBulletAmo();

#pragma region Functions
	UFUNCTION()  TSubclassOf<AActor> GetSpecialBullet_Implementation() override;
#pragma endregion

#pragma region SpecialAmo inplemtasion
	UFUNCTION() void PickUpAmo_Implementation(AActor* pickUpByActor) override;
#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RD|Amo")  TSubclassOf<AActor> amoActor;

};
