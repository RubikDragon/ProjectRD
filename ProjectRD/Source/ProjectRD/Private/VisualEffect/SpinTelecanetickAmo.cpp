// Fill out your copyright notice in the Description page of Project Settings.


#include "VisualEffect/SpinTelecanetickAmo.h"

// Sets default values for this component's properties
USpinTelecanetickAmo::USpinTelecanetickAmo()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// make scence compoenent then add objects to it as a child
	

}


// Called when the game starts
void USpinTelecanetickAmo::BeginPlay()
{
	Super::BeginPlay();

	// contiusely rotate the object around. (the children will follow)
	// make object follow actor location 
}


// Called every frame
void USpinTelecanetickAmo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

