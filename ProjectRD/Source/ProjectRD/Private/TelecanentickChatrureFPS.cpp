// Fill out your copyright notice in the Description page of Project Settings.


#include "TelecanentickChatrureFPS.h"
#include "TelekanatickActorFPS.h"
#include "Components/SphereComponent.h"



ATelecanentickChatrureFPS::ATelecanentickChatrureFPS()
{
	//Super::ATelecanentickChatrureFPS();

	// reload
	ReloadRadios = CreateDefaultSubobject<USphereComponent>(TEXT("ReloadRadiose"));
	ReloadRadios->SetupAttachment(RootComponent);
}

void ATelecanentickChatrureFPS::BeginPlay()
{
	Super::BeginPlay();

	// need to fix this  ShootingComponent
	ShootingComponent = Cast<ATelekanatickActorFPS>(FPSSystemActor);
	if (FPSSystemActor) {
		ShootingComponent->SetBulletSpawnPortsion(ReloadRadios);
	}

}

