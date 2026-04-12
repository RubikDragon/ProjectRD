// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AITaskAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITaskAttack() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskAttack();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAITaskAttack ************************************************************
void UAITaskAttack::StaticRegisterNativesUAITaskAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAITaskAttack;
UClass* UAITaskAttack::GetPrivateStaticClass()
{
	using TClass = UAITaskAttack;
	if (!Z_Registration_Info_UClass_UAITaskAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITaskAttack"),
			Z_Registration_Info_UClass_UAITaskAttack.InnerSingleton,
			StaticRegisterNativesUAITaskAttack,
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
	return Z_Registration_Info_UClass_UAITaskAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UAITaskAttack_NoRegister()
{
	return UAITaskAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAITaskAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AITaskAttack.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AITaskAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AITaskAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AITaskAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aiCharture_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/AITaskAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aiCharture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskAttack, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiController_MetaData), NewProp_aiController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiPawn = { "aiPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskAttack, aiPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiPawn_MetaData), NewProp_aiPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiCharture = { "aiCharture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskAttack, aiCharture), Z_Construct_UClass_APlayerChartureFPS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aiCharture_MetaData), NewProp_aiCharture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskAttack_Statics::NewProp_aiCharture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITaskAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITaskAttack_Statics::ClassParams = {
	&UAITaskAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAITaskAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITaskAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITaskAttack()
{
	if (!Z_Registration_Info_UClass_UAITaskAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITaskAttack.OuterSingleton, Z_Construct_UClass_UAITaskAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITaskAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskAttack);
UAITaskAttack::~UAITaskAttack() {}
// ********** End Class UAITaskAttack **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITaskAttack, UAITaskAttack::StaticClass, TEXT("UAITaskAttack"), &Z_Registration_Info_UClass_UAITaskAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskAttack), 1287937517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_2261229859(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
