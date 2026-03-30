// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletRD.generated.h"

UCLASS()
class PROJECTRD_API ABulletRD : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABulletRD();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION() virtual void BulletHit(AActor* hitActor);

	UFUNCTION() virtual void HitDestroy(AActor* hitActor);

	UFUNCTION() void BulletDestroy();

	UPROPERTY(EditAnywhere, Category = "RD|Components") class USphereComponent* Collision;
	UPROPERTY(EditAnywhere, Category = "RD|Components")	class UNiagaraComponent* BulletPartical;

	UPROPERTY(EditDefaultsOnly, Category = "RD|Components") class UProjectileMovementComponent* projectileControl;

	UPROPERTY(EditDefaultsOnly, Category = "RD|BulletStates") float speed;
	UPROPERTY(EditDefaultsOnly, Category = "RD|BulletStates") float damage;
	UPROPERTY(EditDefaultsOnly, Category = "RD|BulletStates") TSubclassOf<UDamageType> damageType;

	UPROPERTY(EditDefaultsOnly, Category = "RD|BulletStates") float lifeTime = 5;

	UPROPERTY() class UNiagaraSystem* inpacktPartical;

	UPROPERTY() FTimerHandle timerHandle;

};
