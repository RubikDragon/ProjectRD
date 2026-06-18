// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/MoveActorPannel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoveActorPannel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_AMoveActorPannel();
PROJECTRD_API UClass* Z_Construct_UClass_AMoveActorPannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMoveActorPannel *********************************************************
void AMoveActorPannel::StaticRegisterNativesAMoveActorPannel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMoveActorPannel;
UClass* AMoveActorPannel::GetPrivateStaticClass()
{
	using TClass = AMoveActorPannel;
	if (!Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoveActorPannel"),
			Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton,
			StaticRegisterNativesAMoveActorPannel,
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
	return Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton;
}
UClass* Z_Construct_UClass_AMoveActorPannel_NoRegister()
{
	return AMoveActorPannel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMoveActorPannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MoveActorPannel.h" },
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_act_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_act;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveActorPannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveDirection_MetaData), NewProp_moveDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveForce = { "moveForce", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, moveForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveForce_MetaData), NewProp_moveForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_act = { "act", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_act_MetaData), NewProp_act_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_act,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveActorPannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveActorPannel_Statics::ClassParams = {
	&AMoveActorPannel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveActorPannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveActorPannel()
{
	if (!Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton, Z_Construct_UClass_AMoveActorPannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveActorPannel);
AMoveActorPannel::~AMoveActorPannel() {}
// ********** End Class AMoveActorPannel ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveActorPannel, AMoveActorPannel::StaticClass, TEXT("AMoveActorPannel"), &Z_Registration_Info_UClass_AMoveActorPannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveActorPannel), 1828708813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_1489297889(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
