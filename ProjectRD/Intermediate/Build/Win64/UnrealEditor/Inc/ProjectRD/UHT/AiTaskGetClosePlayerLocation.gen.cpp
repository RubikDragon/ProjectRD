// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AiTaskGetClosePlayerLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAiTaskGetClosePlayerLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskGetClosePlayerLocation();
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskGetClosePlayerLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAiTaskGetClosePlayerLocation ********************************************
void UAiTaskGetClosePlayerLocation::StaticRegisterNativesUAiTaskGetClosePlayerLocation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation;
UClass* UAiTaskGetClosePlayerLocation::GetPrivateStaticClass()
{
	using TClass = UAiTaskGetClosePlayerLocation;
	if (!Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AiTaskGetClosePlayerLocation"),
			Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.InnerSingleton,
			StaticRegisterNativesUAiTaskGetClosePlayerLocation,
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
	return Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UAiTaskGetClosePlayerLocation_NoRegister()
{
	return UAiTaskGetClosePlayerLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AiTaskGetClosePlayerLocation.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chaseRange_MetaData[] = {
		{ "Category", "RD|Search" },
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCharture_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerLoaction_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AiTaskGetClosePlayerLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_chaseRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_aiLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_playerLoaction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAiTaskGetClosePlayerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_chaseRange = { "chaseRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, chaseRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chaseRange_MetaData), NewProp_chaseRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiController_MetaData), NewProp_aiController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiPawn = { "aiPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiPawn_MetaData), NewProp_aiPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_playerCharture = { "playerCharture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, playerCharture), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCharture_MetaData), NewProp_playerCharture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiLocation = { "aiLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, aiLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiLocation_MetaData), NewProp_aiLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_playerLoaction = { "playerLoaction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, playerLoaction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerLoaction_MetaData), NewProp_playerLoaction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAiTaskGetClosePlayerLocation, distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distance_MetaData), NewProp_distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_chaseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_playerCharture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_aiLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_playerLoaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::NewProp_distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::ClassParams = {
	&UAiTaskGetClosePlayerLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAiTaskGetClosePlayerLocation()
{
	if (!Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.OuterSingleton, Z_Construct_UClass_UAiTaskGetClosePlayerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAiTaskGetClosePlayerLocation);
UAiTaskGetClosePlayerLocation::~UAiTaskGetClosePlayerLocation() {}
// ********** End Class UAiTaskGetClosePlayerLocation **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetClosePlayerLocation_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAiTaskGetClosePlayerLocation, UAiTaskGetClosePlayerLocation::StaticClass, TEXT("UAiTaskGetClosePlayerLocation"), &Z_Registration_Info_UClass_UAiTaskGetClosePlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAiTaskGetClosePlayerLocation), 199587779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetClosePlayerLocation_h__Script_ProjectRD_3074638706(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetClosePlayerLocation_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskGetClosePlayerLocation_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
