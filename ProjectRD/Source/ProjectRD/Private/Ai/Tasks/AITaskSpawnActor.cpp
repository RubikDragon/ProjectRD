// Fill out your copyright notice in the Description page of Project Settings.


#include "Ai/Tasks/AITaskSpawnActor.h"

UAITaskSpawnActor::UAITaskSpawnActor()
{
	NodeName = "Spawns Actor";
}

EBTNodeResult::Type UAITaskSpawnActor::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//GetWorld()->SpawnActor();


	return EBTNodeResult::Type();
}

FString UAITaskSpawnActor::GetStaticDescription() const
{
	if (spawnActor)
		return FString::Printf(TEXT("Spawns Actor %s"), *spawnActor->GetName());
	else
		return FString::Printf(TEXT("Spawns Actor Null"));
}
