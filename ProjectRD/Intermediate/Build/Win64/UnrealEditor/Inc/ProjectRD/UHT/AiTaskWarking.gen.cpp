// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AiTaskWarking.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAiTaskWarking() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskWarking();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskWarking_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAiTaskWarking ***********************************************************
void UAiTaskWarking::StaticRegisterNativesUAiTaskWarking()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAiTaskWarking;
UClass* UAiTaskWarking::GetPrivateStaticClass()
{
	using TClass = UAiTaskWarking;
	if (!Z_Registration_Info_UClass_UAiTaskWarking.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AiTaskWarking"),
			Z_Registration_Info_UClass_UAiTaskWarking.InnerSingleton,
			StaticRegisterNativesUAiTaskWarking,
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
	return Z_Registration_Info_UClass_UAiTaskWarking.InnerSingleton;
}
UClass* Z_Construct_UClass_UAiTaskWarking_NoRegister()
{
	return UAiTaskWarking::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAiTaskWarking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AiTaskWarking.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskWarking.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiTaskWarking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAiTaskWarking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskWarking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiTaskWarking_Statics::ClassParams = {
	&UAiTaskWarking::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskWarking_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiTaskWarking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAiTaskWarking()
{
	if (!Z_Registration_Info_UClass_UAiTaskWarking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiTaskWarking.OuterSingleton, Z_Construct_UClass_UAiTaskWarking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAiTaskWarking.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAiTaskWarking);
UAiTaskWarking::~UAiTaskWarking() {}
// ********** End Class UAiTaskWarking *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskWarking_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAiTaskWarking, UAiTaskWarking::StaticClass, TEXT("UAiTaskWarking"), &Z_Registration_Info_UClass_UAiTaskWarking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiTaskWarking), 1566954888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskWarking_h__Script_ProjectRD_1492410301(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskWarking_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskWarking_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
