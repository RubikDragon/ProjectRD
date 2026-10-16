// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
//#include "Components/Collider"

// now to the 2 problem i have, when i launthe the player up, there don, t go strait up.but seam more to bouse away from the platform, and sinse the platform is meant to lunthe the player up to the secuond floor i need the player to simply be sent while able to move like normal, bellow is the code.the moveDir is 0, 0, 1 and the // out is from testing othere ways //moveDirection //moveDirection = otherActor->GetActorUpVector(); // purly temporary ontil i know how i wana do it with // Test acterCharture = Cast<ACharacter>(otherActor); // otherActor->GetComponentByClass<ACharacter>(); if (acterCharture) acterCharture->LaunchCharacter(moveDirection + moveForce, true, true); // + moveForce //UE_LOGFMT(LogTemp, Display, "{Player} is pushing up, with diretion {BouseDir} ", ("Player", otherActor->GetName()), ("BouseDir", moveDirection + moveForce)); UE_LOGFMT(LogTemp, Display, "{Player} is pushing up, with diretion", ("Player", otherActor->GetName()));

#include "Actors/MoveActorPannel.h"

// Sets default values
AMoveActorPannel::AMoveActorPannel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//if (collideShape == EColliderShape::box)
	// maybe make boxCollider, UPrimitiveComponent
	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	boxCollider->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMoveActorPannel::BeginPlay()
{
	Super::BeginPlay();

	boxCollider->OnComponentBeginOverlap.AddDynamic(this, &AMoveActorPannel::BegainOverlap);
	moveDirection.Normalize();
}

void AMoveActorPannel::BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) 
{
	// Test
	acterCharture = Cast<ACharacter>(otherActor); // otherActor->GetComponentByClass<ACharacter>();
	if (acterCharture)
		acterCharture->LaunchCharacter(moveDirection * moveForce, true, true);
}

