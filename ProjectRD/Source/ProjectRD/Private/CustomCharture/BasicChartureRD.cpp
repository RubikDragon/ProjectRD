// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCharture/BasicChartureRD.h"


// Sets default values
ABasicChartureRD::ABasicChartureRD()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicChartureRD::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicChartureRD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicChartureRD::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicChartureRD::ChartureJump()
{
	Jump();
}

void ABasicChartureRD::ChartureWark(FVector2D& moveDirection)
{

}



