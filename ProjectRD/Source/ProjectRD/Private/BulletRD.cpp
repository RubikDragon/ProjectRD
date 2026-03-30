// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletRD.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
//#include "Components/NiagaraComponent.h"
#include "NiagaraComponent.h"
#include "HealtSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABulletRD::ABulletRD()
{

	BulletPartical = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Bullet Partical"));
	SetRootComponent(BulletPartical);
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(BulletPartical);

	projectileControl = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileControls"));
	projectileControl->ProjectileGravityScale = 0;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABulletRD::BeginPlay()
{
	Super::BeginPlay();

	projectileControl->InitialSpeed = speed;
	projectileControl->MaxSpeed = speed;

	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABulletRD::BegainOverlap);

	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &ABulletRD::BulletDestroy, lifeTime);
}

void ABulletRD::BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	BulletHit(otherActor);
	HitDestroy(otherActor);
}

void ABulletRD::BulletHit(AActor* hitActor)
{
	UHealtSystem* hp = hitActor->GetComponentByClass<UHealtSystem>();
	//hitActor->NetTag;

	if (hp) {

		hp->ChangeHealt(-damage);

		// getting controller does not work for me for som reason.
		//AController* pC = GetInstigator()->GetController();
		//UGameplayStatics::ApplyDamage(hitActor, damage, pC, this, damageType);
		//UGameplayStatics::ApplyRadialDamage(); _____________ AOE damage
	}
}

void ABulletRD::HitDestroy(AActor* hitActor)
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, inpacktPartical, GetActorLocation());

	Destroy();
}

void ABulletRD::BulletDestroy()
{
	Destroy();
}

