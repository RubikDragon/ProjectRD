// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameComponents/SpawnObjects.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnObjects() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTRD_API UClass* Z_Construct_UClass_USpawnObjects();
PROJECTRD_API UClass* Z_Construct_UClass_USpawnObjects_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpawnObjects Function ChalkulateChance **********************************
struct Z_Construct_UFunction_USpawnObjects_ChalkulateChance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnObjects_ChalkulateChance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpawnObjects, nullptr, "ChalkulateChance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnObjects_ChalkulateChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnObjects_ChalkulateChance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpawnObjects_ChalkulateChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnObjects_ChalkulateChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnObjects::execChalkulateChance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChalkulateChance();
	P_NATIVE_END;
}
// ********** End Class USpawnObjects Function ChalkulateChance ************************************

// ********** Begin Class USpawnObjects Function SpawnObjects **************************************
struct Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics
{
	struct SpawnObjects_eventSpawnObjects_Parms
	{
		int32 spawnAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::NewProp_spawnAmount = { "spawnAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnObjects_eventSpawnObjects_Parms, spawnAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::NewProp_spawnAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpawnObjects, nullptr, "SpawnObjects", Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::SpawnObjects_eventSpawnObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::SpawnObjects_eventSpawnObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpawnObjects_SpawnObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnObjects_SpawnObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpawnObjects::execSpawnObjects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_spawnAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnObjects(Z_Param_spawnAmount);
	P_NATIVE_END;
}
// ********** End Class USpawnObjects Function SpawnObjects ****************************************

// ********** Begin Class USpawnObjects ************************************************************
void USpawnObjects::StaticRegisterNativesUSpawnObjects()
{
	UClass* Class = USpawnObjects::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChalkulateChance", &USpawnObjects::execChalkulateChance },
		{ "SpawnObjects", &USpawnObjects::execSpawnObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpawnObjects;
UClass* USpawnObjects::GetPrivateStaticClass()
{
	using TClass = USpawnObjects;
	if (!Z_Registration_Info_UClass_USpawnObjects.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpawnObjects"),
			Z_Registration_Info_UClass_USpawnObjects.InnerSingleton,
			StaticRegisterNativesUSpawnObjects,
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
	return Z_Registration_Info_UClass_USpawnObjects.InnerSingleton;
}
UClass* Z_Construct_UClass_USpawnObjects_NoRegister()
{
	return USpawnObjects::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpawnObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameComponents/SpawnObjects.h" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawn_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activateOnBegine_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// spawn object + chance it spawns\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn object + chance it spawns" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmountMin_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmountMax_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnHigth_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the distance a object my spawn away from the spawner actor\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the distance a object my spawn away from the spawner actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxChance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// calkulating values\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calkulating values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomNummber_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawn info\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomX_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spawn actor\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomY_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ray\n" },
#endif
		{ "ModuleRelativePath", "Public/GameComponents/SpawnObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ray" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spawn_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Spawn_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Spawn;
	static void NewProp_activateOnBegine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_activateOnBegine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmountMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmountMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnHigth;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_maxChance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomNummber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnObjects_ChalkulateChance, "ChalkulateChance" }, // 2696526797
		{ &Z_Construct_UFunction_USpawnObjects_SpawnObjects, "SpawnObjects" }, // 4201071299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnObjects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn_ValueProp = { "Spawn", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn_Key_KeyProp = { "Spawn_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn = { "Spawn", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, Spawn), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawn_MetaData), NewProp_Spawn_MetaData) };
void Z_Construct_UClass_USpawnObjects_Statics::NewProp_activateOnBegine_SetBit(void* Obj)
{
	((USpawnObjects*)Obj)->activateOnBegine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_activateOnBegine = { "activateOnBegine", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpawnObjects), &Z_Construct_UClass_USpawnObjects_Statics::NewProp_activateOnBegine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activateOnBegine_MetaData), NewProp_activateOnBegine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnAmountMin = { "spawnAmountMin", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, spawnAmountMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAmountMin_MetaData), NewProp_spawnAmountMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnAmountMax = { "spawnAmountMax", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, spawnAmountMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAmountMax_MetaData), NewProp_spawnAmountMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnHigth = { "spawnHigth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, spawnHigth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnHigth_MetaData), NewProp_spawnHigth_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_maxChance = { "maxChance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, maxChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxChance_MetaData), NewProp_maxChance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomNummber = { "randomNummber", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, randomNummber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomNummber_MetaData), NewProp_randomNummber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomX = { "randomX", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, randomX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomX_MetaData), NewProp_randomX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomY = { "randomY", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, randomY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomY_MetaData), NewProp_randomY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomZ = { "randomZ", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, randomZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomZ_MetaData), NewProp_randomZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnedActor = { "spawnedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, spawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedActor_MetaData), NewProp_spawnedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnObjects_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnObjects, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hit_MetaData), NewProp_hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_Spawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_activateOnBegine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnAmountMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnAmountMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnHigth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_maxChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomNummber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_randomZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_spawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnObjects_Statics::NewProp_hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnObjects_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpawnObjects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnObjects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnObjects_Statics::ClassParams = {
	&USpawnObjects::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpawnObjects_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpawnObjects_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnObjects_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnObjects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpawnObjects()
{
	if (!Z_Registration_Info_UClass_USpawnObjects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnObjects.OuterSingleton, Z_Construct_UClass_USpawnObjects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpawnObjects.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnObjects);
USpawnObjects::~USpawnObjects() {}
// ********** End Class USpawnObjects **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpawnObjects, USpawnObjects::StaticClass, TEXT("USpawnObjects"), &Z_Registration_Info_UClass_USpawnObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnObjects), 353706073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h__Script_ProjectRD_3380771250(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
