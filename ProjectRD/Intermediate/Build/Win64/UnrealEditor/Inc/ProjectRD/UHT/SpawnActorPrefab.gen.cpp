// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameComponents/SpawnActorPrefab.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnActorPrefab() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ASpawnActorPrefab();
PROJECTRD_API UClass* Z_Construct_UClass_ASpawnActorPrefab_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawnActorPrefab Function SpawnActor ************************************
struct Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|Function" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnActorPrefab, nullptr, "SpawnActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnActorPrefab::execSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActor();
	P_NATIVE_END;
}
// ********** End Class ASpawnActorPrefab Function SpawnActor **************************************

// ********** Begin Class ASpawnActorPrefab Function SpawnPrefabActor ******************************
struct Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics
{
	struct SpawnActorPrefab_eventSpawnPrefabActor_Parms
	{
		TSubclassOf<AActor> prefab;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|Function" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_prefab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::NewProp_prefab = { "prefab", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnActorPrefab_eventSpawnPrefabActor_Parms, prefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::NewProp_prefab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawnActorPrefab, nullptr, "SpawnPrefabActor", Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::SpawnActorPrefab_eventSpawnPrefabActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::SpawnActorPrefab_eventSpawnPrefabActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnActorPrefab::execSpawnPrefabActor)
{
	P_GET_OBJECT(UClass,Z_Param_prefab);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPrefabActor(Z_Param_prefab);
	P_NATIVE_END;
}
// ********** End Class ASpawnActorPrefab Function SpawnPrefabActor ********************************

// ********** Begin Class ASpawnActorPrefab ********************************************************
void ASpawnActorPrefab::StaticRegisterNativesASpawnActorPrefab()
{
	UClass* Class = ASpawnActorPrefab::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnActor", &ASpawnActorPrefab::execSpawnActor },
		{ "SpawnPrefabActor", &ASpawnActorPrefab::execSpawnPrefabActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawnActorPrefab;
UClass* ASpawnActorPrefab::GetPrivateStaticClass()
{
	using TClass = ASpawnActorPrefab;
	if (!Z_Registration_Info_UClass_ASpawnActorPrefab.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpawnActorPrefab"),
			Z_Registration_Info_UClass_ASpawnActorPrefab.InnerSingleton,
			StaticRegisterNativesASpawnActorPrefab,
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
	return Z_Registration_Info_UClass_ASpawnActorPrefab.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawnActorPrefab_NoRegister()
{
	return ASpawnActorPrefab::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawnActorPrefab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameComponents/SpawnActorPrefab.h" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnPostion_MetaData[] = {
		{ "Category", "RD|Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorToSpawn_MetaData[] = {
		{ "Category", "RD|Values" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnOnBegainPlay_MetaData[] = {
		{ "Category", "RD|Values" },
		{ "ModuleRelativePath", "Public/GameComponents/SpawnActorPrefab.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnPostion;
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorToSpawn;
	static void NewProp_spawnOnBegainPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_spawnOnBegainPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnActorPrefab_SpawnActor, "SpawnActor" }, // 925143472
		{ &Z_Construct_UFunction_ASpawnActorPrefab_SpawnPrefabActor, "SpawnPrefabActor" }, // 1275476136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnActorPrefab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnPostion = { "spawnPostion", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActorPrefab, spawnPostion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnPostion_MetaData), NewProp_spawnPostion_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_actorToSpawn = { "actorToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActorPrefab, actorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorToSpawn_MetaData), NewProp_actorToSpawn_MetaData) };
void Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnOnBegainPlay_SetBit(void* Obj)
{
	((ASpawnActorPrefab*)Obj)->spawnOnBegainPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnOnBegainPlay = { "spawnOnBegainPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawnActorPrefab), &Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnOnBegainPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnOnBegainPlay_MetaData), NewProp_spawnOnBegainPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnActorPrefab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnPostion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_actorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActorPrefab_Statics::NewProp_spawnOnBegainPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActorPrefab_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnActorPrefab_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActorPrefab_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnActorPrefab_Statics::ClassParams = {
	&ASpawnActorPrefab::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnActorPrefab_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActorPrefab_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActorPrefab_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnActorPrefab_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnActorPrefab()
{
	if (!Z_Registration_Info_UClass_ASpawnActorPrefab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnActorPrefab.OuterSingleton, Z_Construct_UClass_ASpawnActorPrefab_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnActorPrefab.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnActorPrefab);
ASpawnActorPrefab::~ASpawnActorPrefab() {}
// ********** End Class ASpawnActorPrefab **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnActorPrefab, ASpawnActorPrefab::StaticClass, TEXT("ASpawnActorPrefab"), &Z_Registration_Info_UClass_ASpawnActorPrefab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnActorPrefab), 1314922691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h__Script_ProjectRD_786195692(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
