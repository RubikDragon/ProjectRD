// Fill out your copyright notice in the Description page of Project Settings.


#include "TelecanentickChatrureFPS.h"
#include "TelekanatickFPS.h"
//#include "TelekanatickActorFPS.h"
#include "Components/SphereComponent.h"



ATelecanentickChatrureFPS::ATelecanentickChatrureFPS()
{
	// reload
	ReloadRadios = CreateDefaultSubobject<USphereComponent>(TEXT("ReloadRadiose"));
	ReloadRadios->SetupAttachment(RootComponent);
}

void ATelecanentickChatrureFPS::BeginPlay()
{
	Super::BeginPlay();

	// need to fix this  ShootingComponent
	ShootingComponent = Cast<UTelekanatickFPS>(fpsActorComponent);
	if (ShootingComponent) {
		ShootingComponent->SetBulletSpawnPortsion(ReloadRadios);
	}

}

