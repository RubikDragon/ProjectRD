// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateBar.h"
#include "Components/SlateWrapperTypes.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStateBar() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
PROJECTRD_API UClass* Z_Construct_UClass_UStateBar();
PROJECTRD_API UClass* Z_Construct_UClass_UStateBar_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStateBar Function SetStartBarValues *************************************
struct Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics
{
	struct StateBar_eventSetStartBarValues_Parms
	{
		int32 currentValue;
		int32 minValue;
		int32 maxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_currentValue = { "currentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateBar_eventSetStartBarValues_Parms, currentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_minValue = { "minValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateBar_eventSetStartBarValues_Parms, minValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_maxValue = { "maxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateBar_eventSetStartBarValues_Parms, maxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_currentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_minValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::NewProp_maxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStateBar, nullptr, "SetStartBarValues", Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::StateBar_eventSetStartBarValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::StateBar_eventSetStartBarValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateBar_SetStartBarValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateBar_SetStartBarValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateBar::execSetStartBarValues)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_currentValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_minValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_maxValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartBarValues(Z_Param_currentValue,Z_Param_minValue,Z_Param_maxValue);
	P_NATIVE_END;
}
// ********** End Class UStateBar Function SetStartBarValues ***************************************

// ********** Begin Class UStateBar Function SetUpValues *******************************************
struct Z_Construct_UFunction_UStateBar_SetUpValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateBar_SetUpValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStateBar, nullptr, "SetUpValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_SetUpValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateBar_SetUpValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStateBar_SetUpValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateBar_SetUpValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateBar::execSetUpValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpValues();
	P_NATIVE_END;
}
// ********** End Class UStateBar Function SetUpValues *********************************************

// ********** Begin Class UStateBar Function UpdateCurrentValue ************************************
struct Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics
{
	struct StateBar_eventUpdateCurrentValue_Parms
	{
		int32 currentValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::NewProp_currentValue = { "currentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateBar_eventUpdateCurrentValue_Parms, currentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::NewProp_currentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStateBar, nullptr, "UpdateCurrentValue", Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::StateBar_eventUpdateCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::StateBar_eventUpdateCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateBar_UpdateCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateBar_UpdateCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateBar::execUpdateCurrentValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_currentValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentValue(Z_Param_currentValue);
	P_NATIVE_END;
}
// ********** End Class UStateBar Function UpdateCurrentValue **************************************

// ********** Begin Class UStateBar Function UpdateCurrentValueFloat *******************************
struct Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics
{
	struct StateBar_eventUpdateCurrentValueFloat_Parms
	{
		float currentValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::NewProp_currentValue = { "currentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateBar_eventUpdateCurrentValueFloat_Parms, currentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::NewProp_currentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStateBar, nullptr, "UpdateCurrentValueFloat", Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::StateBar_eventUpdateCurrentValueFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::StateBar_eventUpdateCurrentValueFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateBar::execUpdateCurrentValueFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_currentValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentValueFloat(Z_Param_currentValue);
	P_NATIVE_END;
}
// ********** End Class UStateBar Function UpdateCurrentValueFloat *********************************

// ********** Begin Class UStateBar ****************************************************************
void UStateBar::StaticRegisterNativesUStateBar()
{
	UClass* Class = UStateBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetStartBarValues", &UStateBar::execSetStartBarValues },
		{ "SetUpValues", &UStateBar::execSetUpValues },
		{ "UpdateCurrentValue", &UStateBar::execUpdateCurrentValue },
		{ "UpdateCurrentValueFloat", &UStateBar::execUpdateCurrentValueFloat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStateBar;
UClass* UStateBar::GetPrivateStaticClass()
{
	using TClass = UStateBar;
	if (!Z_Registration_Info_UClass_UStateBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StateBar"),
			Z_Registration_Info_UClass_UStateBar.InnerSingleton,
			StaticRegisterNativesUStateBar,
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
	return Z_Registration_Info_UClass_UStateBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UStateBar_NoRegister()
{
	return UStateBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStateBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StateBar.h" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainBordor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// don,t like this method of dowing it. but i don,t right now know a difrent way\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "don,t like this method of dowing it. but i don,t right now know a difrent way" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresentigeBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_percentBarFilled_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brushIcon_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarBackgroundColor_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyColor_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFullSize_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_barPresentige_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_valueCurrent_MetaData[] = {
		{ "Category", "_RD|StateBar" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StateBar.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_valueMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_valueMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filledSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_emptySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainBordor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresentigeBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_percentBarFilled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_brushIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BarBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmptyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static void NewProp_isFullSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFullSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_barPresentige;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_valueCurrent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_valueMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_valueMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_filledSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_emptySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateBar_SetStartBarValues, "SetStartBarValues" }, // 462271637
		{ &Z_Construct_UFunction_UStateBar_SetUpValues, "SetUpValues" }, // 1593608719
		{ &Z_Construct_UFunction_UStateBar_UpdateCurrentValue, "UpdateCurrentValue" }, // 3357522988
		{ &Z_Construct_UFunction_UStateBar_UpdateCurrentValueFloat, "UpdateCurrentValueFloat" }, // 852294637
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_MainBordor = { "MainBordor", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, MainBordor), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainBordor_MetaData), NewProp_MainBordor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconImage_MetaData), NewProp_IconImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_PresentigeBar = { "PresentigeBar", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, PresentigeBar), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresentigeBar_MetaData), NewProp_PresentigeBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_EmptyBar = { "EmptyBar", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, EmptyBar), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyBar_MetaData), NewProp_EmptyBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_percentBarFilled = { "percentBarFilled", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, percentBarFilled), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_percentBarFilled_MetaData), NewProp_percentBarFilled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_brushIcon = { "brushIcon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, brushIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brushIcon_MetaData), NewProp_brushIcon_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_BarBackgroundColor = { "BarBackgroundColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, BarBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarBackgroundColor_MetaData), NewProp_BarBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_EmptyColor = { "EmptyColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, EmptyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyColor_MetaData), NewProp_EmptyColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
void Z_Construct_UClass_UStateBar_Statics::NewProp_isFullSize_SetBit(void* Obj)
{
	((UStateBar*)Obj)->isFullSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_isFullSize = { "isFullSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateBar), &Z_Construct_UClass_UStateBar_Statics::NewProp_isFullSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFullSize_MetaData), NewProp_isFullSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_barPresentige = { "barPresentige", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, barPresentige), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_barPresentige_MetaData), NewProp_barPresentige_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_valueCurrent = { "valueCurrent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, valueCurrent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_valueCurrent_MetaData), NewProp_valueCurrent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_valueMax = { "valueMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, valueMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_valueMax_MetaData), NewProp_valueMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_valueMin = { "valueMin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, valueMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_valueMin_MetaData), NewProp_valueMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_filledSize = { "filledSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, filledSize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filledSize_MetaData), NewProp_filledSize_MetaData) }; // 1896405188
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateBar_Statics::NewProp_emptySize = { "emptySize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateBar, emptySize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_emptySize_MetaData), NewProp_emptySize_MetaData) }; // 1896405188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_MainBordor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_IconImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_PresentigeBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_EmptyBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_percentBarFilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_brushIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_BarBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_EmptyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_isFullSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_barPresentige,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_valueCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_valueMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_valueMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_filledSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateBar_Statics::NewProp_emptySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateBar_Statics::ClassParams = {
	&UStateBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateBar()
{
	if (!Z_Registration_Info_UClass_UStateBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateBar.OuterSingleton, Z_Construct_UClass_UStateBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateBar.OuterSingleton;
}
UStateBar::UStateBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateBar);
UStateBar::~UStateBar() {}
// ********** End Class UStateBar ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateBar, UStateBar::StaticClass, TEXT("UStateBar"), &Z_Registration_Info_UClass_UStateBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateBar), 1602438303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h__Script_ProjectRD_3801402204(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
