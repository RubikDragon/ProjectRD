// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "Actors/MoveActorPannel.h"

// Sets default values
AMoveActorPannel::AMoveActorPannel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoveActorPannel::BeginPlay()
{
	Super::BeginPlay();

	const FVector dir = act->GetActorUpVector();

	UStaticMeshComponent ddd;

	//ddd.AddForce();
	
	
	//act->addforve
	
}

// Called every frame
void AMoveActorPannel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

