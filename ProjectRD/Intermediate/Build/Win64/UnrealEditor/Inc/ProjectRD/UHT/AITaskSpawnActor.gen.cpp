// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ai/Tasks/AITaskSpawnActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITaskSpawnActor() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskSpawnActor();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskSpawnActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAITaskSpawnActor ********************************************************
void UAITaskSpawnActor::StaticRegisterNativesUAITaskSpawnActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAITaskSpawnActor;
UClass* UAITaskSpawnActor::GetPrivateStaticClass()
{
	using TClass = UAITaskSpawnActor;
	if (!Z_Registration_Info_UClass_UAITaskSpawnActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITaskSpawnActor"),
			Z_Registration_Info_UClass_UAITaskSpawnActor.InnerSingleton,
			StaticRegisterNativesUAITaskSpawnActor,
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
	return Z_Registration_Info_UClass_UAITaskSpawnActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UAITaskSpawnActor_NoRegister()
{
	return UAITaskSpawnActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAITaskSpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ai/Tasks/AITaskSpawnActor.h" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskSpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnActor_MetaData[] = {
		{ "Category", "RD|Spawn" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskSpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TSubclassOf\n" },
#endif
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskSpawnActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ai;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskSpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskSpawnActor_Statics::NewProp_spawnActor = { "spawnActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSpawnActor, spawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnActor_MetaData), NewProp_spawnActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskSpawnActor_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSpawnActor, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ai_MetaData), NewProp_ai_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskSpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSpawnActor_Statics::NewProp_spawnActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSpawnActor_Statics::NewProp_ai,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSpawnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITaskSpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITaskSpawnActor_Statics::ClassParams = {
	&UAITaskSpawnActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAITaskSpawnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSpawnActor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITaskSpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITaskSpawnActor()
{
	if (!Z_Registration_Info_UClass_UAITaskSpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITaskSpawnActor.OuterSingleton, Z_Construct_UClass_UAITaskSpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITaskSpawnActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskSpawnActor);
UAITaskSpawnActor::~UAITaskSpawnActor() {}
// ********** End Class UAITaskSpawnActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskSpawnActor_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITaskSpawnActor, UAITaskSpawnActor::StaticClass, TEXT("UAITaskSpawnActor"), &Z_Registration_Info_UClass_UAITaskSpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskSpawnActor), 4234083286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskSpawnActor_h__Script_ProjectRD_3393921021(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskSpawnActor_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskSpawnActor_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
