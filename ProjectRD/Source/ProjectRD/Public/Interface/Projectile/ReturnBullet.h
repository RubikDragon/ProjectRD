// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/Projectile/Projectile.h"

#include "ReturnBullet.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class UHealtSystem;
class UNiagaraComponent;

UCLASS()
class PROJECTRD_API AReturnBullet : public AActor, public IProjectile
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReturnBullet();

	UFUNCTION(BlueprintCallable, Category = "RD|Function") void BulletGoBackwords();

	UFUNCTION(BlueprintCallable, Category = "RD|Function") void DestroyProjectile();

	UFUNCTION() void BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

#pragma region Interface inplementasions
	UFUNCTION() virtual void FireProjetile_Implementation(AActor* projectileFirer) override;
#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void Pirse();

	UFUNCTION(BlueprintCallable, Category = "RD|Function") void SetPirseCooldown();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States") int32 damage = 15.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States") int32 maxPirse = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States") bool canHitShotterActor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States|Speed") float initalSpeed = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States|Speed") float maxSpeed = 200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States|Timers") float returnTime = 2.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States|Timers") float lifeTime = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States|Timers") float pirseCooldownTimer = 0.2f;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Componets") TObjectPtr<UNiagaraComponent> bulletPartical;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Componets") TObjectPtr<UProjectileMovementComponent> projectileMover;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Componets") TObjectPtr<USphereComponent> sphereCollision;
	
	UPROPERTY() AActor* shotByActor = nullptr;

	UPROPERTY() int32 pirsesLeft = 0;

	UPROPERTY() bool onPirseCooldown;

	// timers
	UPROPERTY() FTimerHandle returnTH;
	UPROPERTY() FTimerHandle pirseCooldownTH;
	UPROPERTY() FTimerHandle projectileLifeTimeTH;

	// there for momentary values
#pragma region Storage values


	UPROPERTY() TObjectPtr<UHealtSystem> healtSystem;
#pragma endregion


};
