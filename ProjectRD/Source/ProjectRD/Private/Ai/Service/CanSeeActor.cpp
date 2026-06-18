// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"

#include "Ai/Service/CanSeeActor.h"

UCanSeeActor::UCanSeeActor()
{
	// markes so blackbordKey can only be assepted as a Actor value
	UBlackboardKeyType_Object* BlackboardKeyType = NewObject<UBlackboardKeyType_Object>();
	BlackboardKeyType->BaseClass = AActor::StaticClass();
	targetActor.AllowedTypes.Add(BlackboardKeyType);

	UBlackboardKeyType_Bool* boolBBKeyType = NewObject<UBlackboardKeyType_Bool>();
	retrunValue.AllowedTypes.Add(boolBBKeyType);

	//NodeName = TEXT("Can see %s", *targetActor.SelectedKeyName);
	//NodeName = "Can see {tar}", ("tar", targetActor.SelectedKeyName);
	NodeName = TEXT("Can see target");
}

void UCanSeeActor::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (!GetWorld())
		return;

	aiController = OwnerComp.GetAIOwner();
	aiActor = aiController->GetPawn();

	//FVector aiLoctaion = aiActor->GetActorLocation();
	rayStart = FVector(aiActor->GetActorForwardVector().X * 100 +	aiActor->GetActorLocation().X,
		aiActor->GetActorForwardVector().Y * 100 + aiActor->GetActorLocation().Y,
		aiActor->GetActorForwardVector().Z * 100 + aiActor->GetActorLocation().Z);

	targetAct = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(targetActor.SelectedKeyName) );

	rayEnd = targetAct->GetActorLocation();

	if (!targetAct)
	{
		return;
		UE_LOGFMT(LogCore, Error, "{KeyName} is missing a Actor value", ("KeyName", targetActor.SelectedKeyName));
	}

	hasHit = GetWorld()->LineTraceSingleByChannel(hit, rayStart, rayEnd, ECC_Pawn, FCollisionQueryParams(), FCollisionResponseParams());

	if (hasHit && hit.GetActor())
	{
		if (targetAct == hit.GetActor())
		{
			if (drawDebugLine)
				DrawDebugLine(GetWorld(), rayStart, rayEnd, FColor::Emerald, false, 2, 0, 5);
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(retrunValue.SelectedKeyName, true);
		}
		else
		{
			if (drawDebugLine)
				DrawDebugLine(GetWorld(), rayStart, rayEnd, FColor::Red, false, 2, 0, 5);
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(retrunValue.SelectedKeyName, false);
		}
	}

	
}
