// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AiTaskGetAiLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAiTaskGetAiLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskGetAiLocation();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskGetAiLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAiTaskGetAiLocation *****************************************************
void UAiTaskGetAiLocation::StaticRegisterNativesUAiTaskGetAiLocation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAiTaskGetAiLocation;
UClass* UAiTaskGetAiLocation::GetPrivateStaticClass()
{
	using TClass = UAiTaskGetAiLocation;
	if (!Z_Registration_Info_UClass_UAiTaskGetAiLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AiTaskGetAiLocation"),
			Z_Registration_Info_UClass_UAiTaskGetAiLocation.InnerSingleton,
			StaticRegisterNativesUAiTaskGetAiLocation,
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
	return Z_Registration_Info_UClass_UAiTaskGetAiLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UAiTaskGetAiLocation_NoRegister()
{
	return UAiTaskGetAiLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAiTaskGetAiLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AiTaskGetAiLocation.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetAiLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetAiLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetAiLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiTaskGetAiLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiTaskGetAiLocation_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetAiLocation, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiController_MetaData), NewProp_aiController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiTaskGetAiLocation_Statics::NewProp_aiPawn = { "aiPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetAiLocation, aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiPawn_MetaData), NewProp_aiPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAiTaskGetAiLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetAiLocation_Statics::NewProp_aiController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetAiLocation_Statics::NewProp_aiPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetAiLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAiTaskGetAiLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetAiLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiTaskGetAiLocation_Statics::ClassParams = {
	&UAiTaskGetAiLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAiTaskGetAiLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetAiLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetAiLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiTaskGetAiLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAiTaskGetAiLocation()
{
	if (!Z_Registration_Info_UClass_UAiTaskGetAiLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiTaskGetAiLocation.OuterSingleton, Z_Construct_UClass_UAiTaskGetAiLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAiTaskGetAiLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAiTaskGetAiLocation);
UAiTaskGetAiLocation::~UAiTaskGetAiLocation() {}
// ********** End Class UAiTaskGetAiLocation *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetAiLocation_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAiTaskGetAiLocation, UAiTaskGetAiLocation::StaticClass, TEXT("UAiTaskGetAiLocation"), &Z_Registration_Info_UClass_UAiTaskGetAiLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiTaskGetAiLocation), 3721293040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetAiLocation_h__Script_ProjectRD_3654696491(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetAiLocation_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetAiLocation_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
