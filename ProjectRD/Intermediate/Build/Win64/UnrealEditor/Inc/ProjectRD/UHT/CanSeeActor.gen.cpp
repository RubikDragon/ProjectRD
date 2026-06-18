// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ai/Service/CanSeeActor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCanSeeActor() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTRD_API UClass* Z_Construct_UClass_UCanSeeActor();
PROJECTRD_API UClass* Z_Construct_UClass_UCanSeeActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCanSeeActor *************************************************************
void UCanSeeActor::StaticRegisterNativesUCanSeeActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCanSeeActor;
UClass* UCanSeeActor::GetPrivateStaticClass()
{
	using TClass = UCanSeeActor;
	if (!Z_Registration_Info_UClass_UCanSeeActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CanSeeActor"),
			Z_Registration_Info_UClass_UCanSeeActor.InnerSingleton,
			StaticRegisterNativesUCanSeeActor,
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
	return Z_Registration_Info_UClass_UCanSeeActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UCanSeeActor_NoRegister()
{
	return UCanSeeActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCanSeeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ai/Service/CanSeeActor.h" },
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_retrunValue_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_drawDebugLine_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToBeAdded_MetaData[] = {
		{ "Category", "_RD|Ray limeters" },
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetAct_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rayEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rayStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/Service/CanSeeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_retrunValue;
	static void NewProp_drawDebugLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_drawDebugLine;
	static void NewProp_ToBeAdded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ToBeAdded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
	static void NewProp_hasHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetAct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rayEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rayStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanSeeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, targetActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetActor_MetaData), NewProp_targetActor_MetaData) }; // 815030858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_retrunValue = { "retrunValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, retrunValue), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_retrunValue_MetaData), NewProp_retrunValue_MetaData) }; // 815030858
void Z_Construct_UClass_UCanSeeActor_Statics::NewProp_drawDebugLine_SetBit(void* Obj)
{
	((UCanSeeActor*)Obj)->drawDebugLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_drawDebugLine = { "drawDebugLine", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCanSeeActor), &Z_Construct_UClass_UCanSeeActor_Statics::NewProp_drawDebugLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_drawDebugLine_MetaData), NewProp_drawDebugLine_MetaData) };
void Z_Construct_UClass_UCanSeeActor_Statics::NewProp_ToBeAdded_SetBit(void* Obj)
{
	((UCanSeeActor*)Obj)->ToBeAdded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_ToBeAdded = { "ToBeAdded", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCanSeeActor), &Z_Construct_UClass_UCanSeeActor_Statics::NewProp_ToBeAdded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToBeAdded_MetaData), NewProp_ToBeAdded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hit_MetaData), NewProp_hit_MetaData) }; // 267591329
void Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hasHit_SetBit(void* Obj)
{
	((UCanSeeActor*)Obj)->hasHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hasHit = { "hasHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCanSeeActor), &Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hasHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasHit_MetaData), NewProp_hasHit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiController_MetaData), NewProp_aiController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_aiActor = { "aiActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, aiActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiActor_MetaData), NewProp_aiActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_targetAct = { "targetAct", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, targetAct), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetAct_MetaData), NewProp_targetAct_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_rayEnd = { "rayEnd", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, rayEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rayEnd_MetaData), NewProp_rayEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanSeeActor_Statics::NewProp_rayStart = { "rayStart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCanSeeActor, rayStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rayStart_MetaData), NewProp_rayStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanSeeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_targetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_retrunValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_drawDebugLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_ToBeAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_hasHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_aiController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_aiActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_targetAct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_rayEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanSeeActor_Statics::NewProp_rayStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanSeeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCanSeeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanSeeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanSeeActor_Statics::ClassParams = {
	&UCanSeeActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCanSeeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCanSeeActor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanSeeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanSeeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanSeeActor()
{
	if (!Z_Registration_Info_UClass_UCanSeeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanSeeActor.OuterSingleton, Z_Construct_UClass_UCanSeeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanSeeActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanSeeActor);
UCanSeeActor::~UCanSeeActor() {}
// ********** End Class UCanSeeActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Service_CanSeeActor_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanSeeActor, UCanSeeActor::StaticClass, TEXT("UCanSeeActor"), &Z_Registration_Info_UClass_UCanSeeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanSeeActor), 235277529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Service_CanSeeActor_h__Script_ProjectRD_2556637378(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Service_CanSeeActor_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_Service_CanSeeActor_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
