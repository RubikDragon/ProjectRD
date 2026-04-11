// Fill out your copyright notice in the Description page of Project Settings.


#include "TelekanatickActorFPS.h"
#include "BulletRD.h"
#include "Components/SphereComponent.h"
#include "Amo.h"

// Sets default values
ATelekanatickActorFPS::ATelekanatickActorFPS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATelekanatickActorFPS::BeginPlay()
{
	Super::BeginPlay();

	currentAmo = maxAmo;

	//OnAmoSetUp.Broadcast(currentAmo, minAmo, maxAmo);
}

void ATelekanatickActorFPS::Shoot_Implementation()
{
	if (!bullet) {
		UE_LOG(LogTemp, Error, TEXT("A bullet must be set for the shooting to work"));
	}
	if (!shotSpawnPorstion) {

		UE_LOG(LogTemp, Error, TEXT("Missing a scene porstion"));
	}

	// makes sure we have enyof amo to shoot
	if (currentAmo <= minAmo)
		return;

	spawnedBullet = GetWorld()->SpawnActor<AActor>(bullet, shotSpawnPorstion->GetComponentLocation(), shotSpawnPorstion->GetComponentRotation());
	ChangeAmo(-1);


	if (weaponDebug)
		UE_LOG(LogTemp, Display, TEXT("___________________________\n Amo: [%d/%d],\n Shot Bullet: %s \n___________________________"), currentAmo, maxAmo, *shotSpawnPorstion->GetComponentLocation().ToString());

	// sets a timer betvine shots
	canShot = false;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &ATelekanatickActorFPS::ResetCanShot, timeBetinveShots);
}

void ATelekanatickActorFPS::Reload_Implementation()
{
	if (!reloadRadiose || currentAmo >= maxAmo)
		return;

	reloadRadiose->GetOverlappingActors(inReloadRadios);

	// if amo full don,t consume
	for (AActor* Actor : inReloadRadios)
	{

		if (currentAmo >= maxAmo)
			return;

		hitAmo = Cast<IAmo>(Actor);

		if (hitAmo) {
			ChangeAmo(hitAmo->PickUpAmo());
			Actor->Destroy();
		}
	}
}

void ATelekanatickActorFPS::SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent)
{
	shotSpawnPorstion = SceneComponent;
}

void ATelekanatickActorFPS::SetBulletSpawnPortsion(USphereComponent* sphereComponent)
{
	reloadRadiose = sphereComponent;
}

void ATelekanatickActorFPS::ChangeAmo(int amoChange)
{
	currentAmo += amoChange;

	// mackes sure we don,t go into a unrealiskick nummber
	if (currentAmo > maxAmo)
		currentAmo = maxAmo;
	if (currentAmo < minAmo)
		currentAmo = minAmo;

	//OnAmoChange.Broadcast(currentAmo);
}

void ATelekanatickActorFPS::ResetCanShot()
{
	canShot = true;
}

