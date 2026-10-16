// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualEffect/SpinTelecanetickAmo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpinTelecanetickAmo() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTRD_API UClass* Z_Construct_UClass_USpinTelecanetickAmo();
PROJECTRD_API UClass* Z_Construct_UClass_USpinTelecanetickAmo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpinTelecanetickAmo *****************************************************
void USpinTelecanetickAmo::StaticRegisterNativesUSpinTelecanetickAmo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpinTelecanetickAmo;
UClass* USpinTelecanetickAmo::GetPrivateStaticClass()
{
	using TClass = USpinTelecanetickAmo;
	if (!Z_Registration_Info_UClass_USpinTelecanetickAmo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpinTelecanetickAmo"),
			Z_Registration_Info_UClass_USpinTelecanetickAmo.InnerSingleton,
			StaticRegisterNativesUSpinTelecanetickAmo,
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
	return Z_Registration_Info_UClass_USpinTelecanetickAmo.InnerSingleton;
}
UClass* Z_Construct_UClass_USpinTelecanetickAmo_NoRegister()
{
	return USpinTelecanetickAmo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpinTelecanetickAmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VisualEffect/SpinTelecanetickAmo.h" },
		{ "ModuleRelativePath", "Public/VisualEffect/SpinTelecanetickAmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinTelecanetickAmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpinTelecanetickAmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinTelecanetickAmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinTelecanetickAmo_Statics::ClassParams = {
	&USpinTelecanetickAmo::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpinTelecanetickAmo_Statics::Class_MetaDataParams), Z_Construct_UClass_USpinTelecanetickAmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpinTelecanetickAmo()
{
	if (!Z_Registration_Info_UClass_USpinTelecanetickAmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinTelecanetickAmo.OuterSingleton, Z_Construct_UClass_USpinTelecanetickAmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpinTelecanetickAmo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpinTelecanetickAmo);
USpinTelecanetickAmo::~USpinTelecanetickAmo() {}
// ********** End Class USpinTelecanetickAmo *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_VisualEffect_SpinTelecanetickAmo_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpinTelecanetickAmo, USpinTelecanetickAmo::StaticClass, TEXT("USpinTelecanetickAmo"), &Z_Registration_Info_UClass_USpinTelecanetickAmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinTelecanetickAmo), 3813986871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_VisualEffect_SpinTelecanetickAmo_h__Script_ProjectRD_649712310(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_VisualEffect_SpinTelecanetickAmo_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_VisualEffect_SpinTelecanetickAmo_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
