// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/FPSSystem/TelecanetickShotingFPS.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTelecanetickShotingFPS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UTelecanetickShotingFPS();
PROJECTRD_API UClass* Z_Construct_UClass_UTelecanetickShotingFPS_NoRegister();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAmoChange ************************************************************
struct Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics
{
	struct TelecanetickShotingFPS_eventAmoChange_Parms
	{
		TSubclassOf<AActor> CurrentAmoAmount;
		bool wasAdded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentAmoAmount;
	static void NewProp_wasAdded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_wasAdded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmoAmount = { "CurrentAmoAmount", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventAmoChange_Parms, CurrentAmoAmount), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_wasAdded_SetBit(void* Obj)
{
	((TelecanetickShotingFPS_eventAmoChange_Parms*)Obj)->wasAdded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_wasAdded = { "wasAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TelecanetickShotingFPS_eventAmoChange_Parms), &Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_wasAdded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmoAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::NewProp_wasAdded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "AmoChange__DelegateSignature", Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::TelecanetickShotingFPS_eventAmoChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::TelecanetickShotingFPS_eventAmoChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTelecanetickShotingFPS::FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, TSubclassOf<AActor> CurrentAmoAmount, bool wasAdded)
{
	struct TelecanetickShotingFPS_eventAmoChange_Parms
	{
		TSubclassOf<AActor> CurrentAmoAmount;
		bool wasAdded;
	};
	TelecanetickShotingFPS_eventAmoChange_Parms Parms;
	Parms.CurrentAmoAmount=CurrentAmoAmount;
	Parms.wasAdded=wasAdded ? true : false;
	AmoChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FInform ***************************************************************
struct Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics
{
	struct TelecanetickShotingFPS_eventInform_Parms
	{
		TArray<TSubclassOf<AActor>> StartingAmo;
		int32 minAmo;
		int32 maxAmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAmo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_StartingAmo_Inner = { "StartingAmo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_StartingAmo = { "StartingAmo", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventInform_Parms, StartingAmo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAmo_MetaData), NewProp_StartingAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventInform_Parms, minAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventInform_Parms, maxAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_StartingAmo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_StartingAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::NewProp_maxAmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "Inform__DelegateSignature", Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::TelecanetickShotingFPS_eventInform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::TelecanetickShotingFPS_eventInform_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTelecanetickShotingFPS::FInform_DelegateWrapper(const FMulticastScriptDelegate& Inform, TArray<TSubclassOf<AActor>> const& StartingAmo, int32 minAmo, int32 maxAmo)
{
	struct TelecanetickShotingFPS_eventInform_Parms
	{
		TArray<TSubclassOf<AActor>> StartingAmo;
		int32 minAmo;
		int32 maxAmo;
	};
	TelecanetickShotingFPS_eventInform_Parms Parms;
	Parms.StartingAmo=StartingAmo;
	Parms.minAmo=minAmo;
	Parms.maxAmo=maxAmo;
	Inform.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInform *****************************************************************

// ********** Begin Delegate FBulletsUpdate ********************************************************
struct Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics
{
	struct TelecanetickShotingFPS_eventBulletsUpdate_Parms
	{
		TArray<TSubclassOf<AActor>> CurrentAmoAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentAmoAmount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentAmoAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::NewProp_CurrentAmoAmount_Inner = { "CurrentAmoAmount", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::NewProp_CurrentAmoAmount = { "CurrentAmoAmount", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventBulletsUpdate_Parms, CurrentAmoAmount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::NewProp_CurrentAmoAmount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::NewProp_CurrentAmoAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "BulletsUpdate__DelegateSignature", Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::TelecanetickShotingFPS_eventBulletsUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::TelecanetickShotingFPS_eventBulletsUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UTelecanetickShotingFPS::FBulletsUpdate_DelegateWrapper(const FMulticastScriptDelegate& BulletsUpdate, const TArray<TSubclassOf<AActor>>& CurrentAmoAmount)
{
	struct TelecanetickShotingFPS_eventBulletsUpdate_Parms
	{
		TArray<TSubclassOf<AActor>> CurrentAmoAmount;
	};
	TelecanetickShotingFPS_eventBulletsUpdate_Parms Parms;
	Parms.CurrentAmoAmount=CurrentAmoAmount;
	BulletsUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FBulletsUpdate **********************************************************

// ********** Begin Class UTelecanetickShotingFPS Function Reload_Implementation *******************
struct Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|InterfaceFunction|FPSSystem" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "Reload_Implementation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelecanetickShotingFPS::execReload_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTelecanetickShotingFPS Function Reload_Implementation *********************

// ********** Begin Class UTelecanetickShotingFPS Function SetBulletSpawnPorstion_Implementation ***
struct Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics
{
	struct TelecanetickShotingFPS_eventSetBulletSpawnPorstion_Implementation_Parms
	{
		USceneComponent* SceneComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|InterfaceFunction|FPSSystem" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventSetBulletSpawnPorstion_Implementation_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "SetBulletSpawnPorstion_Implementation", Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::TelecanetickShotingFPS_eventSetBulletSpawnPorstion_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::TelecanetickShotingFPS_eventSetBulletSpawnPorstion_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelecanetickShotingFPS::execSetBulletSpawnPorstion_Implementation)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletSpawnPorstion_Implementation(Z_Param_SceneComponent);
	P_NATIVE_END;
}
// ********** End Class UTelecanetickShotingFPS Function SetBulletSpawnPorstion_Implementation *****

// ********** Begin Class UTelecanetickShotingFPS Function SetReloadSphereRadioes ******************
struct Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics
{
	struct TelecanetickShotingFPS_eventSetReloadSphereRadioes_Parms
	{
		USphereComponent* reloadSphere;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|Function" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadSphere_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::NewProp_reloadSphere = { "reloadSphere", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelecanetickShotingFPS_eventSetReloadSphereRadioes_Parms, reloadSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadSphere_MetaData), NewProp_reloadSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::NewProp_reloadSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "SetReloadSphereRadioes", Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::TelecanetickShotingFPS_eventSetReloadSphereRadioes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::TelecanetickShotingFPS_eventSetReloadSphereRadioes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelecanetickShotingFPS::execSetReloadSphereRadioes)
{
	P_GET_OBJECT(USphereComponent,Z_Param_reloadSphere);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReloadSphereRadioes(Z_Param_reloadSphere);
	P_NATIVE_END;
}
// ********** End Class UTelecanetickShotingFPS Function SetReloadSphereRadioes ********************

// ********** Begin Class UTelecanetickShotingFPS Function Shoot_Implementation ********************
struct Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|InterfaceFunction|FPSSystem" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelecanetickShotingFPS, nullptr, "Shoot_Implementation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelecanetickShotingFPS::execShoot_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shoot_Implementation();
	P_NATIVE_END;
}
// ********** End Class UTelecanetickShotingFPS Function Shoot_Implementation **********************

// ********** Begin Class UTelecanetickShotingFPS **************************************************
void UTelecanetickShotingFPS::StaticRegisterNativesUTelecanetickShotingFPS()
{
	UClass* Class = UTelecanetickShotingFPS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Reload_Implementation", &UTelecanetickShotingFPS::execReload_Implementation },
		{ "SetBulletSpawnPorstion_Implementation", &UTelecanetickShotingFPS::execSetBulletSpawnPorstion_Implementation },
		{ "SetReloadSphereRadioes", &UTelecanetickShotingFPS::execSetReloadSphereRadioes },
		{ "Shoot_Implementation", &UTelecanetickShotingFPS::execShoot_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTelecanetickShotingFPS;
UClass* UTelecanetickShotingFPS::GetPrivateStaticClass()
{
	using TClass = UTelecanetickShotingFPS;
	if (!Z_Registration_Info_UClass_UTelecanetickShotingFPS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TelecanetickShotingFPS"),
			Z_Registration_Info_UClass_UTelecanetickShotingFPS.InnerSingleton,
			StaticRegisterNativesUTelecanetickShotingFPS,
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
	return Z_Registration_Info_UClass_UTelecanetickShotingFPS.InnerSingleton;
}
UClass* Z_Construct_UClass_UTelecanetickShotingFPS_NoRegister()
{
	return UTelecanetickShotingFPS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTelecanetickShotingFPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Interface/FPSSystem/TelecanetickShotingFPS.h" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmoChanged_MetaData[] = {
		{ "Category", "Event|_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// is callede when a TSubclassOf<AActor> enters or leaves. the amo array. if bool is true it means it was added. if false means it was r\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nis callede when a TSubclassOf<AActor> enters or leaves. the amo array. if bool is true it means it was added. if false means it was r\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSetUp_MetaData[] = {
		{ "Category", "Event|_RD" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUpddateOfInterArray_MetaData[] = {
		{ "Category", "Event|_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// don,t know if i shode use this. but it can work as a sort of debug.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "don,t know if i shode use this. but it can work as a sort of debug." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotSpawnPorstion_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingAmo_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmo_MetaData[] = {
		{ "Category", "_RD|Amo|MinMax" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minAmo_MetaData[] = {
		{ "Category", "_RD|Amo|MinMax" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadRadios_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shootBullet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorsInRadios_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletAmoActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_addBulletContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/TelecanetickShotingFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmoChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpddateOfInterArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotSpawnPorstion;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAmo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAmo;
	static const UECodeGen_Private::FClassPropertyParams NewProp_amo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_amo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadRadios;
	static const UECodeGen_Private::FClassPropertyParams NewProp_shootBullet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actorsInRadios_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_actorsInRadios;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletAmoActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_addBulletContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature, "AmoChange__DelegateSignature" }, // 861863972
		{ &Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature, "BulletsUpdate__DelegateSignature" }, // 1555549072
		{ &Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature, "Inform__DelegateSignature" }, // 2554391928
		{ &Z_Construct_UFunction_UTelecanetickShotingFPS_Reload_Implementation, "Reload_Implementation" }, // 1202772747
		{ &Z_Construct_UFunction_UTelecanetickShotingFPS_SetBulletSpawnPorstion_Implementation, "SetBulletSpawnPorstion_Implementation" }, // 692956185
		{ &Z_Construct_UFunction_UTelecanetickShotingFPS_SetReloadSphereRadioes, "SetReloadSphereRadioes" }, // 4262157168
		{ &Z_Construct_UFunction_UTelecanetickShotingFPS_Shoot_Implementation, "Shoot_Implementation" }, // 1625561307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelecanetickShotingFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnAmoChanged = { "OnAmoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, OnAmoChanged), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_AmoChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmoChanged_MetaData), NewProp_OnAmoChanged_MetaData) }; // 861863972
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnSetUp = { "OnSetUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, OnSetUp), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_Inform__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSetUp_MetaData), NewProp_OnSetUp_MetaData) }; // 2554391928
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnUpddateOfInterArray = { "OnUpddateOfInterArray", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, OnUpddateOfInterArray), Z_Construct_UDelegateFunction_UTelecanetickShotingFPS_BulletsUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUpddateOfInterArray_MetaData), NewProp_OnUpddateOfInterArray_MetaData) }; // 1555549072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_shotSpawnPorstion = { "shotSpawnPorstion", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, shotSpawnPorstion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotSpawnPorstion_MetaData), NewProp_shotSpawnPorstion_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_StartingAmo_Inner = { "StartingAmo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_StartingAmo = { "StartingAmo", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, StartingAmo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingAmo_MetaData), NewProp_StartingAmo_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_amo_Inner = { "amo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_amo = { "amo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, amo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amo_MetaData), NewProp_amo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, maxAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmo_MetaData), NewProp_maxAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, minAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minAmo_MetaData), NewProp_minAmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_reloadRadios = { "reloadRadios", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, reloadRadios), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadRadios_MetaData), NewProp_reloadRadios_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_shootBullet = { "shootBullet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, shootBullet), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shootBullet_MetaData), NewProp_shootBullet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_actorsInRadios_Inner = { "actorsInRadios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_actorsInRadios = { "actorsInRadios", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, actorsInRadios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorsInRadios_MetaData), NewProp_actorsInRadios_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_bulletAmoActor = { "bulletAmoActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, bulletAmoActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletAmoActor_MetaData), NewProp_bulletAmoActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_addBulletContainer = { "addBulletContainer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelecanetickShotingFPS, addBulletContainer), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_addBulletContainer_MetaData), NewProp_addBulletContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelecanetickShotingFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnAmoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnSetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_OnUpddateOfInterArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_shotSpawnPorstion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_StartingAmo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_StartingAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_amo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_amo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_maxAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_reloadRadios,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_shootBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_actorsInRadios_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_actorsInRadios,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_bulletAmoActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelecanetickShotingFPS_Statics::NewProp_addBulletContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelecanetickShotingFPS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTelecanetickShotingFPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelecanetickShotingFPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFPSSystem_NoRegister, (int32)VTABLE_OFFSET(UTelecanetickShotingFPS, IFPSSystem), false },  // 836489139
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTelecanetickShotingFPS_Statics::ClassParams = {
	&UTelecanetickShotingFPS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTelecanetickShotingFPS_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTelecanetickShotingFPS_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTelecanetickShotingFPS_Statics::Class_MetaDataParams), Z_Construct_UClass_UTelecanetickShotingFPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTelecanetickShotingFPS()
{
	if (!Z_Registration_Info_UClass_UTelecanetickShotingFPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTelecanetickShotingFPS.OuterSingleton, Z_Construct_UClass_UTelecanetickShotingFPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTelecanetickShotingFPS.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTelecanetickShotingFPS);
UTelecanetickShotingFPS::~UTelecanetickShotingFPS() {}
// ********** End Class UTelecanetickShotingFPS ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTelecanetickShotingFPS, UTelecanetickShotingFPS::StaticClass, TEXT("UTelecanetickShotingFPS"), &Z_Registration_Info_UClass_UTelecanetickShotingFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTelecanetickShotingFPS), 3991648004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h__Script_ProjectRD_1675861495(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
