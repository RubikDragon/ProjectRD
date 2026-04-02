// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextDialogUI.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogEvent, int32, currentIndex);

// So you are trying excaping?
// fighting for your freedom?
// I will not leat that happen so easyly
// so don,t disapont me

class UBorder;
class UTextBlock;

UENUM(BlueprintType)
enum class RunDialog : uint8
{
	OnlyOnAdvanceCall UMETA(DisplayName = "Only On Advance"),
	OnlyOnAutoMatick UMETA(DisplayName = "Only On Automatick"),
	OnAdvanceAndAutoMatick UMETA(DisplayName = "On Advance And Automatick")
};

/**
 * 
 */
UCLASS()
class PROJECTRD_API UTextDialogUI : public UUserWidget
{
	GENERATED_BODY()

public:
#pragma region Functions
	UFUNCTION(BlueprintCallable) void StartDialog();

	UFUNCTION(BlueprintCallable) void AdvanceDialog();

	UFUNCTION(BlueprintCallable) void PreviesDialogLine();

	UFUNCTION(BlueprintCallable) void EndDialog();

	UFUNCTION(BlueprintCallable) void GoToDialogLineIndex(int32 desiredIndex);
#pragma endregion

#if WITH_EDITOR // allows os to test in editor
	virtual void OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
#pragma region "Private" functions
	virtual void NativeOnInitialized() override;

	UFUNCTION() void DialogLine(int32 lineIndex);

	UFUNCTION() void HowToProssed();

	UFUNCTION() void SetUpComponents();
#pragma endregion

#pragma region Components
	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UBorder> MainBorder = nullptr;
	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UTextBlock> dialogText = nullptr;
#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Core") TArray<FString> dialogLines;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Core") TArray<int32> fireEventOnLineIndex;
	UPROPERTY(EditAnywhere, Category = "_RD|Core") RunDialog howToRunDialog;

	UPROPERTY(EditAnywhere, Category = "_RD|Timer") float timeBetvineLines;

#pragma region Style values
	UPROPERTY(EditAnywhere, Category = "_RD|Style") bool oneLetterAtATime;
	UPROPERTY(EditAnywhere, Category = "_RD|Style") FLinearColor borderColor;
	UPROPERTY(EditAnywhere, Category = "_RD|Style") FLinearColor textColor;
#pragma endregion

	UPROPERTY(EditDefaultsOnly, Category = "_RD|Debug") bool showDebug;

#pragma region "Private" values
	// Running info
	UPROPERTY() bool runningDialog = false;
	UPROPERTY() int32 currentDilogIndex = 0;
	UPROPERTY() FText currentStringLine;

	// timer stuff
	UPROPERTY() FTimerHandle timerHandle;
#pragma endregion

#pragma region Events
	UPROPERTY(BlueprintAssignable, Category = "Evnet") FOnDialogEvent OnDialogEvent;
#pragma endregion

};
