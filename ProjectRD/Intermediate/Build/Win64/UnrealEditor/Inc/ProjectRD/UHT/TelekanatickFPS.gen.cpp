// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TelekanatickFPS.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTelekanatickFPS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS();
PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAmoChange ************************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics
{
	struct _Script_ProjectRD_eventAmoChange_Parms
	{
		int32 CurrentAmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmo = { "CurrentAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventAmoChange_Parms, CurrentAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "AmoChange__DelegateSignature", Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::_Script_ProjectRD_eventAmoChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::_Script_ProjectRD_eventAmoChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, int32 CurrentAmo)
{
	struct _Script_ProjectRD_eventAmoChange_Parms
	{
		int32 CurrentAmo;
	};
	_Script_ProjectRD_eventAmoChange_Parms Parms;
	Parms.CurrentAmo=CurrentAmo;
	AmoChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FSetUpAmo *************************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics
{
	struct _Script_ProjectRD_eventSetUpAmo_Parms
	{
		int32 CurrentAmo;
		int32 minAmo;
		int32 maxAmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_CurrentAmo = { "CurrentAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventSetUpAmo_Parms, CurrentAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventSetUpAmo_Parms, minAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventSetUpAmo_Parms, maxAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_CurrentAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::NewProp_maxAmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "SetUpAmo__DelegateSignature", Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::_Script_ProjectRD_eventSetUpAmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::_Script_ProjectRD_eventSetUpAmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSetUpAmo_DelegateWrapper(const FMulticastScriptDelegate& SetUpAmo, int32 CurrentAmo, int32 minAmo, int32 maxAmo)
{
	struct _Script_ProjectRD_eventSetUpAmo_Parms
	{
		int32 CurrentAmo;
		int32 minAmo;
		int32 maxAmo;
	};
	_Script_ProjectRD_eventSetUpAmo_Parms Parms;
	Parms.CurrentAmo=CurrentAmo;
	Parms.minAmo=minAmo;
	Parms.maxAmo=maxAmo;
	SetUpAmo.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSetUpAmo ***************************************************************

// ********** Begin Class UTelekanatickFPS Function ChangeAmo **************************************
struct Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics
{
	struct TelekanatickFPS_eventChangeAmo_Parms
	{
		int32 amoChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amoChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::NewProp_amoChange = { "amoChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelekanatickFPS_eventChangeAmo_Parms, amoChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::NewProp_amoChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelekanatickFPS, nullptr, "ChangeAmo", Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::TelekanatickFPS_eventChangeAmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::TelekanatickFPS_eventChangeAmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelekanatickFPS::execChangeAmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amoChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeAmo(Z_Param_amoChange);
	P_NATIVE_END;
}
// ********** End Class UTelekanatickFPS Function ChangeAmo ****************************************

// ********** Begin Class UTelekanatickFPS Function ResetCanShot ***********************************
struct Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelekanatickFPS, nullptr, "ResetCanShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelekanatickFPS::execResetCanShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCanShot();
	P_NATIVE_END;
}
// ********** End Class UTelekanatickFPS Function ResetCanShot *************************************

// ********** Begin Class UTelekanatickFPS Function SetBulletSpawnPortsion *************************
struct Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics
{
	struct TelekanatickFPS_eventSetBulletSpawnPortsion_Parms
	{
		USphereComponent* sphereComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sphereComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::NewProp_sphereComponent = { "sphereComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TelekanatickFPS_eventSetBulletSpawnPortsion_Parms, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sphereComponent_MetaData), NewProp_sphereComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::NewProp_sphereComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelekanatickFPS, nullptr, "SetBulletSpawnPortsion", Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::TelekanatickFPS_eventSetBulletSpawnPortsion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::TelekanatickFPS_eventSetBulletSpawnPortsion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelekanatickFPS::execSetBulletSpawnPortsion)
{
	P_GET_OBJECT(USphereComponent,Z_Param_sphereComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletSpawnPortsion(Z_Param_sphereComponent);
	P_NATIVE_END;
}
// ********** End Class UTelekanatickFPS Function SetBulletSpawnPortsion ***************************

// ********** Begin Class UTelekanatickFPS *********************************************************
void UTelekanatickFPS::StaticRegisterNativesUTelekanatickFPS()
{
	UClass* Class = UTelekanatickFPS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeAmo", &UTelekanatickFPS::execChangeAmo },
		{ "ResetCanShot", &UTelekanatickFPS::execResetCanShot },
		{ "SetBulletSpawnPortsion", &UTelekanatickFPS::execSetBulletSpawnPortsion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTelekanatickFPS;
UClass* UTelekanatickFPS::GetPrivateStaticClass()
{
	using TClass = UTelekanatickFPS;
	if (!Z_Registration_Info_UClass_UTelekanatickFPS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TelekanatickFPS"),
			Z_Registration_Info_UClass_UTelekanatickFPS.InnerSingleton,
			StaticRegisterNativesUTelekanatickFPS,
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
	return Z_Registration_Info_UClass_UTelekanatickFPS.InnerSingleton;
}
UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister()
{
	return UTelekanatickFPS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTelekanatickFPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TelekanatickFPS.h" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmoChange_MetaData[] = {
		{ "Category", "Event|Custom" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmoSetUp_MetaData[] = {
		{ "Category", "Event|Custom" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bullet_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitDamage_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotSpawnPorstion_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadRadiose_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmo_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetinveShots_MetaData[] = {
		{ "Category", "_RD|Cooldown" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canShot_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadCooldown_MetaData[] = {
		{ "Category", "_RD|Cooldown" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponDebug_MetaData[] = {
		{ "Category", "Debug|RD" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedBullet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bullets\n" },
#endif
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bullets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inReloadRadios_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmoChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmoSetUp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_bullet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_hitDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotSpawnPorstion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadRadiose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeBetinveShots;
	static void NewProp_canShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadCooldown;
	static void NewProp_canReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canReload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_timerHandle;
	static void NewProp_weaponDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_weaponDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedBullet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inReloadRadios_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_inReloadRadios;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo, "ChangeAmo" }, // 3034311225
		{ &Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot, "ResetCanShot" }, // 3423073669
		{ &Z_Construct_UFunction_UTelekanatickFPS_SetBulletSpawnPortsion, "SetBulletSpawnPortsion" }, // 685640915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelekanatickFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_OnAmoChange = { "OnAmoChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, OnAmoChange), Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmoChange_MetaData), NewProp_OnAmoChange_MetaData) }; // 3268961140
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_OnAmoSetUp = { "OnAmoSetUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, OnAmoSetUp), Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmoSetUp_MetaData), NewProp_OnAmoSetUp_MetaData) }; // 1909770558
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_bullet = { "bullet", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletRD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bullet_MetaData), NewProp_bullet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_hitDamage = { "hitDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, hitDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitDamage_MetaData), NewProp_hitDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_shotSpawnPorstion = { "shotSpawnPorstion", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, shotSpawnPorstion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotSpawnPorstion_MetaData), NewProp_shotSpawnPorstion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadRadiose = { "reloadRadiose", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, reloadRadiose), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadRadiose_MetaData), NewProp_reloadRadiose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, maxAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmo_MetaData), NewProp_maxAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, minAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minAmo_MetaData), NewProp_minAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_currentAmo = { "currentAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, currentAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentAmo_MetaData), NewProp_currentAmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timeBetinveShots = { "timeBetinveShots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, timeBetinveShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeBetinveShots_MetaData), NewProp_timeBetinveShots_MetaData) };
void Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canShot_SetBit(void* Obj)
{
	((UTelekanatickFPS*)Obj)->canShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canShot = { "canShot", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTelekanatickFPS), &Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canShot_MetaData), NewProp_canShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadCooldown = { "reloadCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, reloadCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadCooldown_MetaData), NewProp_reloadCooldown_MetaData) };
void Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canReload_SetBit(void* Obj)
{
	((UTelekanatickFPS*)Obj)->canReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canReload = { "canReload", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTelekanatickFPS), &Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canReload_MetaData), NewProp_canReload_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timerHandle = { "timerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timerHandle_MetaData), NewProp_timerHandle_MetaData) }; // 3834150579
void Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_weaponDebug_SetBit(void* Obj)
{
	((UTelekanatickFPS*)Obj)->weaponDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_weaponDebug = { "weaponDebug", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTelekanatickFPS), &Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_weaponDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponDebug_MetaData), NewProp_weaponDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_spawnedBullet = { "spawnedBullet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, spawnedBullet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedBullet_MetaData), NewProp_spawnedBullet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios_Inner = { "inReloadRadios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios = { "inReloadRadios", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, inReloadRadios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inReloadRadios_MetaData), NewProp_inReloadRadios_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelekanatickFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_OnAmoChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_OnAmoSetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_hitDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_shotSpawnPorstion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadRadiose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_maxAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_currentAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timeBetinveShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_weaponDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_spawnedBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelekanatickFPS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTelekanatickFPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTelekanatickFPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTelekanatickFPS_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFPSSystem_NoRegister, (int32)VTABLE_OFFSET(UTelekanatickFPS, IFPSSystem), false },  // 836489139
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTelekanatickFPS_Statics::ClassParams = {
	&UTelekanatickFPS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTelekanatickFPS_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTelekanatickFPS_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTelekanatickFPS_Statics::Class_MetaDataParams), Z_Construct_UClass_UTelekanatickFPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTelekanatickFPS()
{
	if (!Z_Registration_Info_UClass_UTelekanatickFPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTelekanatickFPS.OuterSingleton, Z_Construct_UClass_UTelekanatickFPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTelekanatickFPS.OuterSingleton;
}
UTelekanatickFPS::UTelekanatickFPS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTelekanatickFPS);
UTelekanatickFPS::~UTelekanatickFPS() {}
// ********** End Class UTelekanatickFPS ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTelekanatickFPS, UTelekanatickFPS::StaticClass, TEXT("UTelekanatickFPS"), &Z_Registration_Info_UClass_UTelekanatickFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTelekanatickFPS), 3373773451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_3341517764(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
