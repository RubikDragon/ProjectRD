// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ai/Tasks/AITaskIsPlayerWithInDistance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITaskIsPlayerWithInDistance() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskIsPlayerWithInDistance();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskIsPlayerWithInDistance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAITaskIsPlayerWithInDistance ********************************************
void UAITaskIsPlayerWithInDistance::StaticRegisterNativesUAITaskIsPlayerWithInDistance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance;
UClass* UAITaskIsPlayerWithInDistance::GetPrivateStaticClass()
{
	using TClass = UAITaskIsPlayerWithInDistance;
	if (!Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITaskIsPlayerWithInDistance"),
			Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.InnerSingleton,
			StaticRegisterNativesUAITaskIsPlayerWithInDistance,
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
	return Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.InnerSingleton;
}
UClass* Z_Construct_UClass_UAITaskIsPlayerWithInDistance_NoRegister()
{
	return UAITaskIsPlayerWithInDistance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_checkDistance_MetaData[] = {
		{ "Category", "RD|Search" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_checkForPlayerWithId_MetaData[] = {
		{ "Category", "RD|Search" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[] = {
		{ "Category", "RD|Debug" },
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ai_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distanceToPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Tasks/AITaskIsPlayerWithInDistance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_checkDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_checkForPlayerWithId;
	static void NewProp_debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ai;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_aiLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_playerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceToPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskIsPlayerWithInDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_checkDistance = { "checkDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, checkDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_checkDistance_MetaData), NewProp_checkDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_checkForPlayerWithId = { "checkForPlayerWithId", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, checkForPlayerWithId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_checkForPlayerWithId_MetaData), NewProp_checkForPlayerWithId_MetaData) };
void Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_debug_SetBit(void* Obj)
{
	((UAITaskIsPlayerWithInDistance*)Obj)->debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAITaskIsPlayerWithInDistance), &Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_debug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debug_MetaData), NewProp_debug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_ai = { "ai", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, ai), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ai_MetaData), NewProp_ai_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, player), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_player_MetaData), NewProp_player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_aiPawn = { "aiPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiPawn_MetaData), NewProp_aiPawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_aiLocation = { "aiLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, aiLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiLocation_MetaData), NewProp_aiLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_playerLocation = { "playerLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, playerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerLocation_MetaData), NewProp_playerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_distanceToPlayer = { "distanceToPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskIsPlayerWithInDistance, distanceToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distanceToPlayer_MetaData), NewProp_distanceToPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_checkDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_checkForPlayerWithId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_ai,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_aiPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_aiLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_playerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::NewProp_distanceToPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::ClassParams = {
	&UAITaskIsPlayerWithInDistance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITaskIsPlayerWithInDistance()
{
	if (!Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.OuterSingleton, Z_Construct_UClass_UAITaskIsPlayerWithInDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskIsPlayerWithInDistance);
UAITaskIsPlayerWithInDistance::~UAITaskIsPlayerWithInDistance() {}
// ********** End Class UAITaskIsPlayerWithInDistance **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskIsPlayerWithInDistance_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITaskIsPlayerWithInDistance, UAITaskIsPlayerWithInDistance::StaticClass, TEXT("UAITaskIsPlayerWithInDistance"), &Z_Registration_Info_UClass_UAITaskIsPlayerWithInDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskIsPlayerWithInDistance), 472747860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskIsPlayerWithInDistance_h__Script_ProjectRD_3780060332(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskIsPlayerWithInDistance_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Tasks_AITaskIsPlayerWithInDistance_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
