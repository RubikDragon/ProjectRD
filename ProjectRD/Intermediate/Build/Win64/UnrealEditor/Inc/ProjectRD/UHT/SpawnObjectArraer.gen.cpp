// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/SpawnObjectArraer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnObjectArraer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ASpawnObjectArraer();
PROJECTRD_API UClass* Z_Construct_UClass_ASpawnObjectArraer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawnObjectArraer Function ChalkulateChance *****************************
struct Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnObjectArraer, nullptr, "ChalkulateChance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnObjectArraer::execChalkulateChance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChalkulateChance();
	P_NATIVE_END;
}
// ********** End Class ASpawnObjectArraer Function ChalkulateChance *******************************

// ********** Begin Class ASpawnObjectArraer Function SpawnObjects *********************************
struct Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics
{
	struct SpawnObjectArraer_eventSpawnObjects_Parms
	{
		int32 spawnAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::NewProp_spawnAmount = { "spawnAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnObjectArraer_eventSpawnObjects_Parms, spawnAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::NewProp_spawnAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnObjectArraer, nullptr, "SpawnObjects", Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::SpawnObjectArraer_eventSpawnObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::SpawnObjectArraer_eventSpawnObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnObjectArraer::execSpawnObjects)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_spawnAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnObjects(Z_Param_spawnAmount);
	P_NATIVE_END;
}
// ********** End Class ASpawnObjectArraer Function SpawnObjects ***********************************

// ********** Begin Class ASpawnObjectArraer *******************************************************
void ASpawnObjectArraer::StaticRegisterNativesASpawnObjectArraer()
{
	UClass* Class = ASpawnObjectArraer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChalkulateChance", &ASpawnObjectArraer::execChalkulateChance },
		{ "SpawnObjects", &ASpawnObjectArraer::execSpawnObjects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawnObjectArraer;
UClass* ASpawnObjectArraer::GetPrivateStaticClass()
{
	using TClass = ASpawnObjectArraer;
	if (!Z_Registration_Info_UClass_ASpawnObjectArraer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpawnObjectArraer"),
			Z_Registration_Info_UClass_ASpawnObjectArraer.InnerSingleton,
			StaticRegisterNativesASpawnObjectArraer,
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
	return Z_Registration_Info_UClass_ASpawnObjectArraer.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawnObjectArraer_NoRegister()
{
	return ASpawnObjectArraer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawnObjectArraer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/SpawnObjectArraer.h" },
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawn_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activateOnBegine_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// spawn object + chance it spawns\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn object + chance it spawns" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnHigth_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the distance a object my spawn away from the spawner actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the distance a object my spawn away from the spawner actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmountMin_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the higth that a object bay spawn (this is done before raycast)\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the higth that a object bay spawn (this is done before raycast)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmountMax_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxChance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// calkulating values\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/SpawnObjectArraer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "calkulating values" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spawn_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Spawn_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Spawn;
	static void NewProp_activateOnBegine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_activateOnBegine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnHigth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmountMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmountMax;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_maxChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnObjectArraer_ChalkulateChance, "ChalkulateChance" }, // 2506195198
		{ &Z_Construct_UFunction_ASpawnObjectArraer_SpawnObjects, "SpawnObjects" }, // 2750958524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnObjectArraer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn_ValueProp = { "Spawn", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn_Key_KeyProp = { "Spawn_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn = { "Spawn", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, Spawn), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawn_MetaData), NewProp_Spawn_MetaData) };
void Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_activateOnBegine_SetBit(void* Obj)
{
	((ASpawnObjectArraer*)Obj)->activateOnBegine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_activateOnBegine = { "activateOnBegine", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawnObjectArraer), &Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_activateOnBegine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activateOnBegine_MetaData), NewProp_activateOnBegine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnHigth = { "spawnHigth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, spawnHigth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnHigth_MetaData), NewProp_spawnHigth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnAmountMin = { "spawnAmountMin", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, spawnAmountMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAmountMin_MetaData), NewProp_spawnAmountMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnAmountMax = { "spawnAmountMax", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, spawnAmountMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnAmountMax_MetaData), NewProp_spawnAmountMax_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_maxChance = { "maxChance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnObjectArraer, maxChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxChance_MetaData), NewProp_maxChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnObjectArraer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_Spawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_activateOnBegine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnHigth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnAmountMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_spawnAmountMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnObjectArraer_Statics::NewProp_maxChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectArraer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnObjectArraer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectArraer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnObjectArraer_Statics::ClassParams = {
	&ASpawnObjectArraer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnObjectArraer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectArraer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnObjectArraer_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnObjectArraer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnObjectArraer()
{
	if (!Z_Registration_Info_UClass_ASpawnObjectArraer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnObjectArraer.OuterSingleton, Z_Construct_UClass_ASpawnObjectArraer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnObjectArraer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnObjectArraer);
ASpawnObjectArraer::~ASpawnObjectArraer() {}
// ********** End Class ASpawnObjectArraer *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_SpawnObjectArraer_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnObjectArraer, ASpawnObjectArraer::StaticClass, TEXT("ASpawnObjectArraer"), &Z_Registration_Info_UClass_ASpawnObjectArraer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnObjectArraer), 4195382460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_SpawnObjectArraer_h__Script_ProjectRD_3056126811(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_SpawnObjectArraer_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_SpawnObjectArraer_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
