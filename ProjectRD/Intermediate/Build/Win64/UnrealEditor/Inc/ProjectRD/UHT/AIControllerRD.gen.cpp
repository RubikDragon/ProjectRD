// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIControllerRD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIControllerRD() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
PROJECTRD_API UClass* Z_Construct_UClass_AAIControllerRD();
PROJECTRD_API UClass* Z_Construct_UClass_AAIControllerRD_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIControllerRD **********************************************************
void AAIControllerRD::StaticRegisterNativesAAIControllerRD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIControllerRD;
UClass* AAIControllerRD::GetPrivateStaticClass()
{
	using TClass = AAIControllerRD;
	if (!Z_Registration_Info_UClass_AAIControllerRD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIControllerRD"),
			Z_Registration_Info_UClass_AAIControllerRD.InnerSingleton,
			StaticRegisterNativesAAIControllerRD,
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
	return Z_Registration_Info_UClass_AAIControllerRD.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIControllerRD_NoRegister()
{
	return AAIControllerRD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIControllerRD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIControllerRD.h" },
		{ "ModuleRelativePath", "Public/AIControllerRD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerRD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAIControllerRD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerRD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerRD_Statics::ClassParams = {
	&AAIControllerRD::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerRD_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIControllerRD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIControllerRD()
{
	if (!Z_Registration_Info_UClass_AAIControllerRD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIControllerRD.OuterSingleton, Z_Construct_UClass_AAIControllerRD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIControllerRD.OuterSingleton;
}
AAIControllerRD::AAIControllerRD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerRD);
AAIControllerRD::~AAIControllerRD() {}
// ********** End Class AAIControllerRD ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIControllerRD, AAIControllerRD::StaticClass, TEXT("AAIControllerRD"), &Z_Registration_Info_UClass_AAIControllerRD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIControllerRD), 2989651489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h__Script_ProjectRD_3208950007(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
