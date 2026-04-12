// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AiDecorePlayerWithInRange.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAiDecorePlayerWithInRange() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
PROJECTRD_API UClass* Z_Construct_UClass_UAiDecorePlayerWithInRange();
PROJECTRD_API UClass* Z_Construct_UClass_UAiDecorePlayerWithInRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAiDecorePlayerWithInRange ***********************************************
void UAiDecorePlayerWithInRange::StaticRegisterNativesUAiDecorePlayerWithInRange()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAiDecorePlayerWithInRange;
UClass* UAiDecorePlayerWithInRange::GetPrivateStaticClass()
{
	using TClass = UAiDecorePlayerWithInRange;
	if (!Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AiDecorePlayerWithInRange"),
			Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.InnerSingleton,
			StaticRegisterNativesUAiDecorePlayerWithInRange,
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
	return Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.InnerSingleton;
}
UClass* Z_Construct_UClass_UAiDecorePlayerWithInRange_NoRegister()
{
	return UAiDecorePlayerWithInRange::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AiDecorePlayerWithInRange.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AiDecorePlayerWithInRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distanceRange_MetaData[] = {
		{ "Category", "RD|Search" },
		{ "ModuleRelativePath", "Public/AiStuff/AiDecorePlayerWithInRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiDecorePlayerWithInRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::NewProp_distanceRange = { "distanceRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiDecorePlayerWithInRange, distanceRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distanceRange_MetaData), NewProp_distanceRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::NewProp_distanceRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::ClassParams = {
	&UAiDecorePlayerWithInRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAiDecorePlayerWithInRange()
{
	if (!Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.OuterSingleton, Z_Construct_UClass_UAiDecorePlayerWithInRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAiDecorePlayerWithInRange.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAiDecorePlayerWithInRange);
UAiDecorePlayerWithInRange::~UAiDecorePlayerWithInRange() {}
// ********** End Class UAiDecorePlayerWithInRange *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiDecorePlayerWithInRange_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAiDecorePlayerWithInRange, UAiDecorePlayerWithInRange::StaticClass, TEXT("UAiDecorePlayerWithInRange"), &Z_Registration_Info_UClass_UAiDecorePlayerWithInRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiDecorePlayerWithInRange), 389075881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiDecorePlayerWithInRange_h__Script_ProjectRD_1119022425(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiDecorePlayerWithInRange_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiDecorePlayerWithInRange_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
