// Fill out your copyright notice in the Description page of Project Settings.


#include "AiStuff/TopDownChartureAIController.h"
#include "CustomCharture/BasicChartureRD.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

ATopDownChartureAIController::ATopDownChartureAIController()
{
	behaviorTreeComponentTurtural = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behavior tree component"));
	blackbordComponentTurtural = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackbord component"));
}

void ATopDownChartureAIController::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(behaviorTree.Get())) {

		RunBehaviorTree(behaviorTree.Get());
		behaviorTreeComponentTurtural->StartTree(*behaviorTree.Get());

	}
}

void ATopDownChartureAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// https://www.reddit.com/r/unrealengine/comments/f6ek5z/why_does_my_ai_characters_auto_possess_ai/
	// for som reason the ai does not work if it was set into the world. 
	// but for now if you set (placed in world or spawned) in pawn. then it works when spawnede. stile not when set but its somthing

	//possesedPawn = Cast<ABasicChartureRD>(InPawn); 

	//if (behaviorTree) {	
	//	UBlackboardComponent* defaultBlackbord = nullptr;

	//	UseBlackboard(behaviorTree->BlackboardAsset, defaultBlackbord);
	//	RunBehaviorTree(behaviorTree);
	//}
	
	if (IsValid(Blackboard.Get()) && IsValid(behaviorTree.Get())) {

		Blackboard->InitializeBlackboard(*behaviorTree.Get()->BlackboardAsset.Get());
	}

}

void ATopDownChartureAIController::OnUnPossess()
{

}

void ATopDownChartureAIController::AiJumpAction()
{
	if (!possesedPawn)
		return;

	possesedPawn->ChartureJump();
}

void ATopDownChartureAIController::AiMoveAction(FVector2D& movePostion)
{
	if (!possesedPawn)
		return;


}

void ATopDownChartureAIController::AiAttackAction()
{
	if (!possesedPawn)
		return;


}
