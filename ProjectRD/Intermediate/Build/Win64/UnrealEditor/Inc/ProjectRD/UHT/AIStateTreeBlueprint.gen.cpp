// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIStateTreeBlueprint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIStateTreeBlueprint() {}

// ********** Begin Cross Module References ********************************************************
PROJECTRD_API UClass* Z_Construct_UClass_UAIStateTreeBlueprint();
PROJECTRD_API UClass* Z_Construct_UClass_UAIStateTreeBlueprint_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAIStateTreeBlueprint ****************************************************
void UAIStateTreeBlueprint::StaticRegisterNativesUAIStateTreeBlueprint()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAIStateTreeBlueprint;
UClass* UAIStateTreeBlueprint::GetPrivateStaticClass()
{
	using TClass = UAIStateTreeBlueprint;
	if (!Z_Registration_Info_UClass_UAIStateTreeBlueprint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIStateTreeBlueprint"),
			Z_Registration_Info_UClass_UAIStateTreeBlueprint.InnerSingleton,
			StaticRegisterNativesUAIStateTreeBlueprint,
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
	return Z_Registration_Info_UClass_UAIStateTreeBlueprint.InnerSingleton;
}
UClass* Z_Construct_UClass_UAIStateTreeBlueprint_NoRegister()
{
	return UAIStateTreeBlueprint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAIStateTreeBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AIStateTreeBlueprint.h" },
		{ "ModuleRelativePath", "Public/AIStateTreeBlueprint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIStateTreeBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIStateTreeBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIStateTreeBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIStateTreeBlueprint_Statics::ClassParams = {
	&UAIStateTreeBlueprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIStateTreeBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIStateTreeBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIStateTreeBlueprint()
{
	if (!Z_Registration_Info_UClass_UAIStateTreeBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIStateTreeBlueprint.OuterSingleton, Z_Construct_UClass_UAIStateTreeBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIStateTreeBlueprint.OuterSingleton;
}
UAIStateTreeBlueprint::UAIStateTreeBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIStateTreeBlueprint);
UAIStateTreeBlueprint::~UAIStateTreeBlueprint() {}
// ********** End Class UAIStateTreeBlueprint ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIStateTreeBlueprint_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIStateTreeBlueprint, UAIStateTreeBlueprint::StaticClass, TEXT("UAIStateTreeBlueprint"), &Z_Registration_Info_UClass_UAIStateTreeBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIStateTreeBlueprint), 266219805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIStateTreeBlueprint_h__Script_ProjectRD_653884932(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIStateTreeBlueprint_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIStateTreeBlueprint_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
