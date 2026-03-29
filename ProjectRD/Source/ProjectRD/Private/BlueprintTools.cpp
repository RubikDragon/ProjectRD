// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintTools.h"

bool UBlueprintTools::StringEqual(FString a, FString b)
{
	return false;
}

bool UBlueprintTools::IsNotNull(UObject* cheking)
{
	if (cheking == nullptr)
		return false;
	else
		return true;
}

bool UBlueprintTools::ContainsTag(AActor* actor, FString tag, bool debug)
{
	//   https://dev.epicgames.com/documentation/en-us/unreal-engine/logging-in-unreal-engine
	if (debug)
		UE_LOGFMT(LogCore, Log, "Comparing tag {V1}. {V2} contains tags {V3} _______________________________________", ("V1", *tag), ("V2", actor->GetName()), ("V3", actor->Tags));


	if (actor->Tags.Contains(tag))
		return true;

	return false;
}

bool UBlueprintTools::GetChildActorClass(AActor* actor, TSubclassOf<AActor> chekingFor)
{
	//actor->GetActorClassDefaultComponent<AActor>(actor);


	return false;
}