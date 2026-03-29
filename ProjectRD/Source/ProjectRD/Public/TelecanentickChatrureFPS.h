// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerChartureFPS.h"
#include "TelecanentickChatrureFPS.generated.h"


class ATelekanatickActorFPS;
class USphereComponent;

/**
 *
 */
UCLASS()
class PROJECTRD_API ATelecanentickChatrureFPS : public APlayerChartureFPS
{
	GENERATED_BODY()

public:
	ATelecanentickChatrureFPS();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RD|Components") ATelekanatickActorFPS* ShootingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RD|Components") USphereComponent* ReloadRadios;
};
