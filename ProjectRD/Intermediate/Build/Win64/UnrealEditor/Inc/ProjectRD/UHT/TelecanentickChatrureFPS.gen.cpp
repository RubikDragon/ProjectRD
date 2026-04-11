// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TelecanentickChatrureFPS.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTelecanentickChatrureFPS() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS();
PROJECTRD_API UClass* Z_Construct_UClass_ATelecanentickChatrureFPS();
PROJECTRD_API UClass* Z_Construct_UClass_ATelecanentickChatrureFPS_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATelecanentickChatrureFPS ************************************************
void ATelecanentickChatrureFPS::StaticRegisterNativesATelecanentickChatrureFPS()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATelecanentickChatrureFPS;
UClass* ATelecanentickChatrureFPS::GetPrivateStaticClass()
{
	using TClass = ATelecanentickChatrureFPS;
	if (!Z_Registration_Info_UClass_ATelecanentickChatrureFPS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TelecanentickChatrureFPS"),
			Z_Registration_Info_UClass_ATelecanentickChatrureFPS.InnerSingleton,
			StaticRegisterNativesATelecanentickChatrureFPS,
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
	return Z_Registration_Info_UClass_ATelecanentickChatrureFPS.InnerSingleton;
}
UClass* Z_Construct_UClass_ATelecanentickChatrureFPS_NoRegister()
{
	return ATelecanentickChatrureFPS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATelecanentickChatrureFPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TelecanentickChatrureFPS.h" },
		{ "ModuleRelativePath", "Public/TelecanentickChatrureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingComponent_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelecanentickChatrureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadRadios_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TelecanentickChatrureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadRadios;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATelecanentickChatrureFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::NewProp_ShootingComponent = { "ShootingComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATelecanentickChatrureFPS, ShootingComponent), Z_Construct_UClass_UTelekanatickFPS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingComponent_MetaData), NewProp_ShootingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::NewProp_ReloadRadios = { "ReloadRadios", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATelecanentickChatrureFPS, ReloadRadios), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadRadios_MetaData), NewProp_ReloadRadios_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::NewProp_ShootingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::NewProp_ReloadRadios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerChartureFPS,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::ClassParams = {
	&ATelecanentickChatrureFPS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::Class_MetaDataParams), Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATelecanentickChatrureFPS()
{
	if (!Z_Registration_Info_UClass_ATelecanentickChatrureFPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATelecanentickChatrureFPS.OuterSingleton, Z_Construct_UClass_ATelecanentickChatrureFPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATelecanentickChatrureFPS.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATelecanentickChatrureFPS);
ATelecanentickChatrureFPS::~ATelecanentickChatrureFPS() {}
// ********** End Class ATelecanentickChatrureFPS **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelecanentickChatrureFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATelecanentickChatrureFPS, ATelecanentickChatrureFPS::StaticClass, TEXT("ATelecanentickChatrureFPS"), &Z_Registration_Info_UClass_ATelecanentickChatrureFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATelecanentickChatrureFPS), 1933467914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelecanentickChatrureFPS_h__Script_ProjectRD_1853018313(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelecanentickChatrureFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelecanentickChatrureFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
