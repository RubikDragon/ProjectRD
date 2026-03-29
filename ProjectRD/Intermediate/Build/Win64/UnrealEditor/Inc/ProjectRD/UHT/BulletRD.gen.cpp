// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletRD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBulletRD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABulletRD ****************************************************************
void ABulletRD::StaticRegisterNativesABulletRD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABulletRD;
UClass* ABulletRD::GetPrivateStaticClass()
{
	using TClass = ABulletRD;
	if (!Z_Registration_Info_UClass_ABulletRD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BulletRD"),
			Z_Registration_Info_UClass_ABulletRD.InnerSingleton,
			StaticRegisterNativesABulletRD,
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
	return Z_Registration_Info_UClass_ABulletRD.InnerSingleton;
}
UClass* Z_Construct_UClass_ABulletRD_NoRegister()
{
	return ABulletRD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABulletRD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BulletRD.h" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletRD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABulletRD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletRD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletRD_Statics::ClassParams = {
	&ABulletRD::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletRD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletRD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABulletRD()
{
	if (!Z_Registration_Info_UClass_ABulletRD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletRD.OuterSingleton, Z_Construct_UClass_ABulletRD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABulletRD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletRD);
ABulletRD::~ABulletRD() {}
// ********** End Class ABulletRD ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABulletRD, ABulletRD::StaticClass, TEXT("ABulletRD"), &Z_Registration_Info_UClass_ABulletRD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletRD), 2005676140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_3269194474(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
