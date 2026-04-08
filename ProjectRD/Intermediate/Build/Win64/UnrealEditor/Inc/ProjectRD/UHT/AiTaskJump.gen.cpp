// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AiTaskJump.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAiTaskJump() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskJump();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskJump_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAiTaskJump **************************************************************
void UAiTaskJump::StaticRegisterNativesUAiTaskJump()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAiTaskJump;
UClass* UAiTaskJump::GetPrivateStaticClass()
{
	using TClass = UAiTaskJump;
	if (!Z_Registration_Info_UClass_UAiTaskJump.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AiTaskJump"),
			Z_Registration_Info_UClass_UAiTaskJump.InnerSingleton,
			StaticRegisterNativesUAiTaskJump,
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
	return Z_Registration_Info_UClass_UAiTaskJump.InnerSingleton;
}
UClass* Z_Construct_UClass_UAiTaskJump_NoRegister()
{
	return UAiTaskJump::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAiTaskJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AiTaskJump.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskJump.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiTaskJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAiTaskJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiTaskJump_Statics::ClassParams = {
	&UAiTaskJump::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiTaskJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAiTaskJump()
{
	if (!Z_Registration_Info_UClass_UAiTaskJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiTaskJump.OuterSingleton, Z_Construct_UClass_UAiTaskJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAiTaskJump.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAiTaskJump);
UAiTaskJump::~UAiTaskJump() {}
// ********** End Class UAiTaskJump ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskJump_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAiTaskJump, UAiTaskJump::StaticClass, TEXT("UAiTaskJump"), &Z_Registration_Info_UClass_UAiTaskJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiTaskJump), 637873324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskJump_h__Script_ProjectRD_2904793573(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskJump_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskJump_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
