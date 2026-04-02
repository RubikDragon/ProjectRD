// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextDialogUI.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTextDialogUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
PROJECTRD_API UClass* Z_Construct_UClass_UTextDialogUI();
PROJECTRD_API UClass* Z_Construct_UClass_UTextDialogUI_NoRegister();
PROJECTRD_API UEnum* Z_Construct_UEnum_ProjectRD_RunDialog();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDialogEvent ********************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics
{
	struct _Script_ProjectRD_eventOnDialogEvent_Parms
	{
		int32 currentIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::NewProp_currentIndex = { "currentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventOnDialogEvent_Parms, currentIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::NewProp_currentIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "OnDialogEvent__DelegateSignature", Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::_Script_ProjectRD_eventOnDialogEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::_Script_ProjectRD_eventOnDialogEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDialogEvent, int32 currentIndex)
{
	struct _Script_ProjectRD_eventOnDialogEvent_Parms
	{
		int32 currentIndex;
	};
	_Script_ProjectRD_eventOnDialogEvent_Parms Parms;
	Parms.currentIndex=currentIndex;
	OnDialogEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDialogEvent **********************************************************

// ********** Begin Enum RunDialog *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_RunDialog;
static UEnum* RunDialog_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_RunDialog.OuterSingleton)
	{
		Z_Registration_Info_UEnum_RunDialog.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectRD_RunDialog, (UObject*)Z_Construct_UPackage__Script_ProjectRD(), TEXT("RunDialog"));
	}
	return Z_Registration_Info_UEnum_RunDialog.OuterSingleton;
}
template<> PROJECTRD_API UEnum* StaticEnum<RunDialog>()
{
	return RunDialog_StaticEnum();
}
struct Z_Construct_UEnum_ProjectRD_RunDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
		{ "OnAdvanceAndAutoMatick.DisplayName", "On Advance And Automatick" },
		{ "OnAdvanceAndAutoMatick.Name", "RunDialog::OnAdvanceAndAutoMatick" },
		{ "OnlyOnAdvanceCall.DisplayName", "Only On Advance" },
		{ "OnlyOnAdvanceCall.Name", "RunDialog::OnlyOnAdvanceCall" },
		{ "OnlyOnAutoMatick.DisplayName", "Only On Automatick" },
		{ "OnlyOnAutoMatick.Name", "RunDialog::OnlyOnAutoMatick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RunDialog::OnlyOnAdvanceCall", (int64)RunDialog::OnlyOnAdvanceCall },
		{ "RunDialog::OnlyOnAutoMatick", (int64)RunDialog::OnlyOnAutoMatick },
		{ "RunDialog::OnAdvanceAndAutoMatick", (int64)RunDialog::OnAdvanceAndAutoMatick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectRD_RunDialog_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectRD,
	nullptr,
	"RunDialog",
	"RunDialog",
	Z_Construct_UEnum_ProjectRD_RunDialog_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectRD_RunDialog_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectRD_RunDialog_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectRD_RunDialog_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectRD_RunDialog()
{
	if (!Z_Registration_Info_UEnum_RunDialog.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RunDialog.InnerSingleton, Z_Construct_UEnum_ProjectRD_RunDialog_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_RunDialog.InnerSingleton;
}
// ********** End Enum RunDialog *******************************************************************

// ********** Begin Class UTextDialogUI Function AdvanceDialog *************************************
struct Z_Construct_UFunction_UTextDialogUI_AdvanceDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_AdvanceDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "AdvanceDialog", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_AdvanceDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_AdvanceDialog_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_AdvanceDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_AdvanceDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execAdvanceDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceDialog();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function AdvanceDialog ***************************************

// ********** Begin Class UTextDialogUI Function DialogLine ****************************************
struct Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics
{
	struct TextDialogUI_eventDialogLine_Parms
	{
		int32 lineIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_lineIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::NewProp_lineIndex = { "lineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextDialogUI_eventDialogLine_Parms, lineIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::NewProp_lineIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "DialogLine", Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::TextDialogUI_eventDialogLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::TextDialogUI_eventDialogLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextDialogUI_DialogLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_DialogLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execDialogLine)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_lineIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogLine(Z_Param_lineIndex);
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function DialogLine ******************************************

// ********** Begin Class UTextDialogUI Function EndDialog *****************************************
struct Z_Construct_UFunction_UTextDialogUI_EndDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_EndDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "EndDialog", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_EndDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_EndDialog_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_EndDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_EndDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execEndDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDialog();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function EndDialog *******************************************

// ********** Begin Class UTextDialogUI Function GoToDialogLineIndex *******************************
struct Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics
{
	struct TextDialogUI_eventGoToDialogLineIndex_Parms
	{
		int32 desiredIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_desiredIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::NewProp_desiredIndex = { "desiredIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextDialogUI_eventGoToDialogLineIndex_Parms, desiredIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::NewProp_desiredIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "GoToDialogLineIndex", Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::TextDialogUI_eventGoToDialogLineIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::TextDialogUI_eventGoToDialogLineIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execGoToDialogLineIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_desiredIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToDialogLineIndex(Z_Param_desiredIndex);
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function GoToDialogLineIndex *********************************

// ********** Begin Class UTextDialogUI Function HowToProssed **************************************
struct Z_Construct_UFunction_UTextDialogUI_HowToProssed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_HowToProssed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "HowToProssed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_HowToProssed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_HowToProssed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_HowToProssed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_HowToProssed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execHowToProssed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HowToProssed();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function HowToProssed ****************************************

// ********** Begin Class UTextDialogUI Function PreviesDialogLine *********************************
struct Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "PreviesDialogLine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execPreviesDialogLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviesDialogLine();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function PreviesDialogLine ***********************************

// ********** Begin Class UTextDialogUI Function SetUpComponents ***********************************
struct Z_Construct_UFunction_UTextDialogUI_SetUpComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_SetUpComponents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "SetUpComponents", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_SetUpComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_SetUpComponents_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_SetUpComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_SetUpComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execSetUpComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpComponents();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function SetUpComponents *************************************

// ********** Begin Class UTextDialogUI Function StartDialog ***************************************
struct Z_Construct_UFunction_UTextDialogUI_StartDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextDialogUI_StartDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTextDialogUI, nullptr, "StartDialog", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextDialogUI_StartDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextDialogUI_StartDialog_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTextDialogUI_StartDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextDialogUI_StartDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextDialogUI::execStartDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDialog();
	P_NATIVE_END;
}
// ********** End Class UTextDialogUI Function StartDialog *****************************************

// ********** Begin Class UTextDialogUI ************************************************************
void UTextDialogUI::StaticRegisterNativesUTextDialogUI()
{
	UClass* Class = UTextDialogUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceDialog", &UTextDialogUI::execAdvanceDialog },
		{ "DialogLine", &UTextDialogUI::execDialogLine },
		{ "EndDialog", &UTextDialogUI::execEndDialog },
		{ "GoToDialogLineIndex", &UTextDialogUI::execGoToDialogLineIndex },
		{ "HowToProssed", &UTextDialogUI::execHowToProssed },
		{ "PreviesDialogLine", &UTextDialogUI::execPreviesDialogLine },
		{ "SetUpComponents", &UTextDialogUI::execSetUpComponents },
		{ "StartDialog", &UTextDialogUI::execStartDialog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTextDialogUI;
UClass* UTextDialogUI::GetPrivateStaticClass()
{
	using TClass = UTextDialogUI;
	if (!Z_Registration_Info_UClass_UTextDialogUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TextDialogUI"),
			Z_Registration_Info_UClass_UTextDialogUI.InnerSingleton,
			StaticRegisterNativesUTextDialogUI,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTextDialogUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UTextDialogUI_NoRegister()
{
	return UTextDialogUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTextDialogUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TextDialogUI.h" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dialogLines_MetaData[] = {
		{ "Category", "_RD|Core" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireEventOnLineIndex_MetaData[] = {
		{ "Category", "_RD|Core" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_howToRunDialog_MetaData[] = {
		{ "Category", "_RD|Core" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetvineLines_MetaData[] = {
		{ "Category", "_RD|Timer" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_oneLetterAtATime_MetaData[] = {
		{ "Category", "_RD|Style" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_borderColor_MetaData[] = {
		{ "Category", "_RD|Style" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textColor_MetaData[] = {
		{ "Category", "_RD|Style" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_runningDialog_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Running info\n" },
#endif
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Running info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentDilogIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentStringLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// timer stuff\n" },
#endif
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timer stuff" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogEvent_MetaData[] = {
		{ "Category", "Evnet" },
		{ "ModuleRelativePath", "Public/TextDialogUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_dialogLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_dialogLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_fireEventOnLineIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_fireEventOnLineIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_howToRunDialog_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_howToRunDialog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeBetvineLines;
	static void NewProp_oneLetterAtATime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_oneLetterAtATime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_borderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_textColor;
	static void NewProp_runningDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_runningDialog;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentDilogIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_currentStringLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_timerHandle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextDialogUI_AdvanceDialog, "AdvanceDialog" }, // 159547238
		{ &Z_Construct_UFunction_UTextDialogUI_DialogLine, "DialogLine" }, // 3523256262
		{ &Z_Construct_UFunction_UTextDialogUI_EndDialog, "EndDialog" }, // 2801716210
		{ &Z_Construct_UFunction_UTextDialogUI_GoToDialogLineIndex, "GoToDialogLineIndex" }, // 3094741248
		{ &Z_Construct_UFunction_UTextDialogUI_HowToProssed, "HowToProssed" }, // 674842123
		{ &Z_Construct_UFunction_UTextDialogUI_PreviesDialogLine, "PreviesDialogLine" }, // 3503062790
		{ &Z_Construct_UFunction_UTextDialogUI_SetUpComponents, "SetUpComponents" }, // 1347408218
		{ &Z_Construct_UFunction_UTextDialogUI_StartDialog, "StartDialog" }, // 3436776686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextDialogUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_MainBorder = { "MainBorder", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, MainBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainBorder_MetaData), NewProp_MainBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogText = { "dialogText", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, dialogText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogText_MetaData), NewProp_dialogText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogLines_Inner = { "dialogLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogLines = { "dialogLines", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, dialogLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dialogLines_MetaData), NewProp_dialogLines_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_fireEventOnLineIndex_Inner = { "fireEventOnLineIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_fireEventOnLineIndex = { "fireEventOnLineIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, fireEventOnLineIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireEventOnLineIndex_MetaData), NewProp_fireEventOnLineIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_howToRunDialog_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_howToRunDialog = { "howToRunDialog", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, howToRunDialog), Z_Construct_UEnum_ProjectRD_RunDialog, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_howToRunDialog_MetaData), NewProp_howToRunDialog_MetaData) }; // 4084631764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_timeBetvineLines = { "timeBetvineLines", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, timeBetvineLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeBetvineLines_MetaData), NewProp_timeBetvineLines_MetaData) };
void Z_Construct_UClass_UTextDialogUI_Statics::NewProp_oneLetterAtATime_SetBit(void* Obj)
{
	((UTextDialogUI*)Obj)->oneLetterAtATime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_oneLetterAtATime = { "oneLetterAtATime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextDialogUI), &Z_Construct_UClass_UTextDialogUI_Statics::NewProp_oneLetterAtATime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_oneLetterAtATime_MetaData), NewProp_oneLetterAtATime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_borderColor = { "borderColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, borderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_borderColor_MetaData), NewProp_borderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_textColor = { "textColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, textColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textColor_MetaData), NewProp_textColor_MetaData) };
void Z_Construct_UClass_UTextDialogUI_Statics::NewProp_runningDialog_SetBit(void* Obj)
{
	((UTextDialogUI*)Obj)->runningDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_runningDialog = { "runningDialog", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextDialogUI), &Z_Construct_UClass_UTextDialogUI_Statics::NewProp_runningDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_runningDialog_MetaData), NewProp_runningDialog_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_currentDilogIndex = { "currentDilogIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, currentDilogIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentDilogIndex_MetaData), NewProp_currentDilogIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_currentStringLine = { "currentStringLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, currentStringLine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentStringLine_MetaData), NewProp_currentStringLine_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_timerHandle = { "timerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timerHandle_MetaData), NewProp_timerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTextDialogUI_Statics::NewProp_OnDialogEvent = { "OnDialogEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextDialogUI, OnDialogEvent), Z_Construct_UDelegateFunction_ProjectRD_OnDialogEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogEvent_MetaData), NewProp_OnDialogEvent_MetaData) }; // 3369188720
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextDialogUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_MainBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_dialogLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_fireEventOnLineIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_fireEventOnLineIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_howToRunDialog_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_howToRunDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_timeBetvineLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_oneLetterAtATime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_borderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_textColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_runningDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_currentDilogIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_currentStringLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_timerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextDialogUI_Statics::NewProp_OnDialogEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextDialogUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextDialogUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextDialogUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextDialogUI_Statics::ClassParams = {
	&UTextDialogUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTextDialogUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextDialogUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextDialogUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextDialogUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextDialogUI()
{
	if (!Z_Registration_Info_UClass_UTextDialogUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextDialogUI.OuterSingleton, Z_Construct_UClass_UTextDialogUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextDialogUI.OuterSingleton;
}
UTextDialogUI::UTextDialogUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextDialogUI);
UTextDialogUI::~UTextDialogUI() {}
// ********** End Class UTextDialogUI **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ RunDialog_StaticEnum, TEXT("RunDialog"), &Z_Registration_Info_UEnum_RunDialog, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4084631764U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextDialogUI, UTextDialogUI::StaticClass, TEXT("UTextDialogUI"), &Z_Registration_Info_UClass_UTextDialogUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextDialogUI), 913838531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_2207626791(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h__Script_ProjectRD_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
