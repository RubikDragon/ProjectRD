// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/UniformGridPanel.h"
#include "Components/Border.h"

#include "UI/ObjectBar.h"

#pragma region UE5
// not on start
void UObjectBar::NativeOnInitialized()
{
	inatalGetLines = ObjectGrid->GetAllChildren();

	for (UWidget* widgetss : inatalGetLines)
	{
		isUserWidget = Cast<UBorder>(widgetss);

		if (!isUserWidget)
			continue;

		objectLines.Add(isUserWidget);
	}

	// starts at -1 cose it needs to line up with 
	activeCount = -1;

	maxLinesIndex = objectLines.Num() - 1;

	UpdateWigdet();
}



void UObjectBar::OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs)
{
	Super::OnDesignerChanged(EventArgs);

	UpdateWigdet();
}

void UObjectBar::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateWigdet();
}
#pragma endregion

void UObjectBar::SetMetter(TArray<TSubclassOf<AActor>> actorPtr)
{


	// sets all lines to be invisebule
	for (TObjectPtr<UBorder> lineWigdet : objectLines)
	{
		TurnOffLine(lineWigdet);
	}

	// use this nummber to go backwords
	//maxLinesIndex


	for (int32 i = 0; i < actorPtr.Num(); i++)
	{
		if (maxLinesIndex < i)
			continue;
		
		activeCount++;


		if (rewirseOrdor)
			handleLineIdentety(objectLines[i], actorPtr[maxLinesIndex - i]);
		else
			handleLineIdentety(objectLines[i], actorPtr[i]);

		objectLines[i]->SetVisibility(ESlateVisibility::Visible);
		
	}

	activeCount = FMath::Clamp(activeCount, 0, maxLinesIndex);
}

void UObjectBar::ChangeMetter(TSubclassOf<AActor> actorPrefab, bool wasAdded)
{

	if (wasAdded) 
	{
		activeCount++;
		activeCount = FMath::Clamp(activeCount, 0, maxLinesIndex);

		if (rewirseOrdor)
			lineIndex = maxLinesIndex - activeCount;
		else
			lineIndex = activeCount;

		handleLineIdentety(objectLines[lineIndex], actorPrefab);
		objectLines[lineIndex]->SetVisibility(ESlateVisibility::Visible);

		UE_LOGFMT(LogCore, Warning, "Reload: line index {l}, current count {i}", ("l", lineIndex), ("i", activeCount));
	}
	else 
	{
		if (activeCount == -1) {
			UE_LOGFMT(LogCore, Error, "bullet count was not correctly counted my UI. and ");
		}

		activeCount = FMath::Clamp(activeCount, 0, maxLinesIndex);


		if (rewirseOrdor)
			lineIndex = maxLinesIndex - activeCount;
		else
			lineIndex = activeCount;


		TurnOffLine(objectLines[lineIndex]);


		UE_LOGFMT(LogCore, Warning, "Shoot: line index {l}, current count {i}", ("l", lineIndex), ("i", activeCount));

		activeCount--;
		activeCount = FMath::Clamp(activeCount, -1, maxLinesIndex);
	}
}

void UObjectBar::TurnOffLine(TObjectPtr<UWidget> line)
{
	if (lineFillMissingSpace)
		line->SetVisibility(ESlateVisibility::Collapsed);
	else
		line->SetVisibility(ESlateVisibility::Hidden);
}

void UObjectBar::handleLineIdentety(TObjectPtr<UBorder> lineWidget, TSubclassOf<AActor> obejectPrefab)
{


	for (FObjectColor type : lineSettings)
	{
		if (obejectPrefab != type.onObjectActor)
			continue;

		lineWidget->SetBrushColor(type.objectColor);
	}
}


void UObjectBar::UpdateWigdet()
{
	if (MainBordor) 
	{
		MainBordor->SetBrushColor(mainBordorColor);
	}


	if (ObjectGrid) 
	{
		//ObjectGrid->Setuppa
		ObjectGrid->SetSlotPadding(FMargin(left,up,right,down));


		for (UWidget* widget : ObjectGrid->GetAllChildren())
		{
			UBorder* userWidget = Cast<UBorder>(widget);

			if (!userWidget)
				continue;

			userWidget->SetDesiredSizeScale(lineSizeVector);
		}
	}
}