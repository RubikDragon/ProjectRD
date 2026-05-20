// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "HealtSystem.h"

#include "Interface/Projectile/ReturnBullet.h"

// Sets default values
AReturnBullet::AReturnBullet()
{
	bulletPartical = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Bullet Partical"));
	SetRootComponent(bulletPartical);

	sphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Bullet collider"));
	sphereCollision->SetupAttachment(bulletPartical); // root components

	projectileMover = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet mover"));
	projectileMover->ProjectileGravityScale = 0;

	pirsesLeft = 0;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AReturnBullet::BeginPlay()
{
	Super::BeginPlay();

	projectileMover->MaxSpeed = maxSpeed;

	pirsesLeft = maxPirse;
}

void AReturnBullet::FireProjetile_Implementation(AActor* projectileFirer)
{
	shotByActor = projectileFirer;

	projectileMover->InitialSpeed = initalSpeed;

	sphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AReturnBullet::BegainOverlap);

	GetWorld()->GetTimerManager().SetTimer(returnTH, this, &AReturnBullet::BulletGoBackwords, returnTime);
	GetWorld()->GetTimerManager().SetTimer(projectileLifeTimeTH, this, &AReturnBullet::DestroyProjectile, lifeTime);
}

void AReturnBullet::BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	if (!otherActor || !shotByActor || (otherActor == shotByActor && !canHitShotterActor) )
		return;

	healtSystem = otherActor->GetComponentByClass<UHealtSystem>();

	if (healtSystem) 
	{
		healtSystem->ChangeHealt(damage);

		// can pirse
		if (!onPirseCooldown) 
		{
			Pirse();

			onPirseCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(pirseCooldownTH, this, &AReturnBullet::SetPirseCooldown, pirseCooldownTimer);
		}
	}
}

void AReturnBullet::BulletGoBackwords()
{
	projectileMover->Velocity.X = -projectileMover->Velocity.X;
	projectileMover->Velocity.Y = -projectileMover->Velocity.Y;
	projectileMover->Velocity.Z = -projectileMover->Velocity.Z;
}

void AReturnBullet::Pirse()
{
	pirsesLeft--;
	pirsesLeft = FMath::Clamp(pirsesLeft, 0, maxPirse);

	if (pirsesLeft <= 0) {
		DestroyProjectile();
	}
}

/// <summary>
/// is used insted of just destroy. cose here we can call som sort of destroy event. or mabye asine this to a objectpool
/// </summary>
void AReturnBullet::DestroyProjectile()
{
	Destroy();
}

void AReturnBullet::SetPirseCooldown()
{
	onPirseCooldown = false;
}

