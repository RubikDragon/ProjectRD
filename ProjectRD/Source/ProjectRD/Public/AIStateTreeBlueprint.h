// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/StateTreeEvaluatorBlueprintBase.h"
#include "AIStateTreeBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UAIStateTreeBlueprint : public UStateTreeEvaluatorBlueprintBase
{
	GENERATED_BODY()

public:

	virtual void TreeStart(FStateTreeExecutionContext& Context) override;

	virtual void TreeStop(FStateTreeExecutionContext& Context) override;

#if WITH_EDITOR

	virtual FText GetDescription(
		const FGuid& ID,
		FStateTreeDataView InstanceDataView,
		const IStateTreeBindingLookup& BindingLookup,
		EStateTreeNodeFormatting Formatting = EStateTreeNodeFormatting::Text) const {
		return NSLOCTEXT("PGAS_STE_perception", "Perception", "Monitors the Context Actor's AI perceptions");
	};
#endif


};
