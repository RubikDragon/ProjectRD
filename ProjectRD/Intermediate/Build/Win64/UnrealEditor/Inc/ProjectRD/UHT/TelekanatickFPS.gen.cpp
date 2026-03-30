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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS();
PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelekanatickFPS, nullptr, "ResetCanShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class UTelekanatickFPS Function TelekanetickReload *****************************
struct Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTelekanatickFPS, nullptr, "TelekanetickReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTelekanatickFPS::execTelekanetickReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TelekanetickReload();
	P_NATIVE_END;
}
// ********** End Class UTelekanatickFPS Function TelekanetickReload *******************************

// ********** Begin Class UTelekanatickFPS *********************************************************
void UTelekanatickFPS::StaticRegisterNativesUTelekanatickFPS()
{
	UClass* Class = UTelekanatickFPS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeAmo", &UTelekanatickFPS::execChangeAmo },
		{ "ResetCanShot", &UTelekanatickFPS::execResetCanShot },
		{ "TelekanetickReload", &UTelekanatickFPS::execTelekanetickReload },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitDamage_MetaData[] = {
		{ "Category", "_RD|Amo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"_RD|Amo\") TSubclassOf<class ABulletRD> bullet;\n" },
#endif
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"_RD|Amo\") TSubclassOf<class ABulletRD> bullet;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmo_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotSpawnPorstion_MetaData[] = {
		{ "Category", "_RD|FPS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadRadiose_MetaData[] = {
		{ "Category", "_RD|FPS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// basicly a transform\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "basicly a transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetinveShots_MetaData[] = {
		{ "Category", "_RD|Cooldowns" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedBullet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bullets\n" },
#endif
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bullets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inReloadRadios_MetaData[] = {
		{ "ModuleRelativePath", "Public/TelekanatickFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_hitDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotSpawnPorstion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadRadiose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeBetinveShots;
	static void NewProp_canShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadCooldown;
	static void NewProp_canReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canReload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedBullet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_timerHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inReloadRadios_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_inReloadRadios;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTelekanatickFPS_ChangeAmo, "ChangeAmo" }, // 3034311225
		{ &Z_Construct_UFunction_UTelekanatickFPS_ResetCanShot, "ResetCanShot" }, // 1412865521
		{ &Z_Construct_UFunction_UTelekanatickFPS_TelekanetickReload, "TelekanetickReload" }, // 1923396857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelekanatickFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_hitDamage = { "hitDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, hitDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitDamage_MetaData), NewProp_hitDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, maxAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmo_MetaData), NewProp_maxAmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_shotSpawnPorstion = { "shotSpawnPorstion", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, shotSpawnPorstion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotSpawnPorstion_MetaData), NewProp_shotSpawnPorstion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadRadiose = { "reloadRadiose", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, reloadRadiose), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadRadiose_MetaData), NewProp_reloadRadiose_MetaData) };
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_spawnedBullet = { "spawnedBullet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, spawnedBullet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedBullet_MetaData), NewProp_spawnedBullet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, minAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minAmo_MetaData), NewProp_minAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_currentAmo = { "currentAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, currentAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentAmo_MetaData), NewProp_currentAmo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timerHandle = { "timerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timerHandle_MetaData), NewProp_timerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios_Inner = { "inReloadRadios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_inReloadRadios = { "inReloadRadios", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTelekanatickFPS, inReloadRadios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inReloadRadios_MetaData), NewProp_inReloadRadios_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTelekanatickFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_hitDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_maxAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_shotSpawnPorstion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadRadiose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timeBetinveShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_reloadCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_canReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_spawnedBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_currentAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTelekanatickFPS_Statics::NewProp_timerHandle,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UTelekanatickFPS);
UTelekanatickFPS::~UTelekanatickFPS() {}
// ********** End Class UTelekanatickFPS ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTelekanatickFPS, UTelekanatickFPS::StaticClass, TEXT("UTelekanatickFPS"), &Z_Registration_Info_UClass_UTelekanatickFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTelekanatickFPS), 3237110168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_3394767930(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
