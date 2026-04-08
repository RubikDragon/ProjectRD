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
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UAITaskAttack, UAITaskAttack::StaticClass, TEXT("UAITaskAttack"), &Z_Registration_Info_UClass_UAITaskAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskAttack), 3701918696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_1637938017(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskAttack_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
