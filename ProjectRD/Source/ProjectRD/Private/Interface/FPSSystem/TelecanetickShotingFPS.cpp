// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SphereComponent.h"
#include "Amo.h"
#include "Interface/SpecialAmo/SpecialAmo.h"
#include "Interface/Projectile/Projectile.h"
#include "Engine/Blueprint.h"
#include "Engine/World.h"

#include "Interface/FPSSystem/TelecanetickShotingFPS.h"

// Sets default values for this component's properties
UTelecanetickShotingFPS::UTelecanetickShotingFPS()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts
void UTelecanetickShotingFPS::BeginPlay()
{
	Super::BeginPlay();

	amo = StartingAmo;
	OnSetUp.Broadcast(amo, minAmo, maxAmo);
}

void UTelecanetickShotingFPS::Shoot_Implementation()
{
	if (!shotSpawnPorstion) {

		UE_LOG(LogTemp, Error, TEXT("%s on %s is missing a scene porstion, to spawn bullets at"), *GetName(), *GetOwner()->GetName());
		return;
	}

	if (amo.Num() == 0 || amo.Num() < minAmo)
		return;

	shootBullet = amo.Pop();
	OnAmoChanged.Broadcast(shootBullet, false); // notfys that we 

	if (!shootBullet)
		return;

	AActor* spawnedBullet = GetWorld()->SpawnActor<AActor>(shootBullet, shotSpawnPorstion->GetComponentLocation(), shotSpawnPorstion->GetComponentRotation());

	// need to make sure a bullet can,t die before the check
	if (spawnedBullet->Implements<UProjectile>())
	{
		IProjectile::Execute_FireProjetile(spawnedBullet, GetOwner());
	}

}

void UTelecanetickShotingFPS::Reload_Implementation()
{
	if (!reloadRadios) {
		UE_LOG(LogTemp, Display, TEXT("Missing a SphereComponent for reloading. please provide one to component %s in the %s actor "), *GetName(), *GetOwner()->GetName());
		return;
	}

	if (amo.Num() >= maxAmo)
		return;

	reloadRadios->GetOverlappingActors(actorsInRadios);

	// if amo full don,t consume
	for (AActor* actor : actorsInRadios)
	{
		if (amo.Num() >= maxAmo)
			return;

		isAmo = Cast<ISpecialAmo>(actor);

		if (actor->Implements<USpecialAmo>())
		{	
			addBulletContainer = ISpecialAmo::Execute_GetSpecialBullet(actor);

			if (!addBulletContainer)
				continue;

			// add amo
			if (addBulletContainer) {
				amo.Add(addBulletContainer);
				OnAmoChanged.Broadcast(addBulletContainer, true);
			}


			ISpecialAmo::Execute_PickUpAmo(actor, GetOwner());
		}
	}
}

void UTelecanetickShotingFPS::SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent)
{
	shotSpawnPorstion = SceneComponent;
}

void UTelecanetickShotingFPS::SetReloadSphereRadioes(USphereComponent* reloadSphere)
{
	reloadRadios = reloadSphere;
}







