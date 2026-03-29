// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicAmo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasicAmo() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECTRD_API UClass* Z_Construct_UClass_ABasicAmo();
PROJECTRD_API UClass* Z_Construct_UClass_ABasicAmo_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UAmo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasicAmo ****************************************************************
void ABasicAmo::StaticRegisterNativesABasicAmo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasicAmo;
UClass* ABasicAmo::GetPrivateStaticClass()
{
	using TClass = ABasicAmo;
	if (!Z_Registration_Info_UClass_ABasicAmo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasicAmo"),
			Z_Registration_Info_UClass_ABasicAmo.InnerSingleton,
			StaticRegisterNativesABasicAmo,
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
	return Z_Registration_Info_UClass_ABasicAmo.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasicAmo_NoRegister()
{
	return ABasicAmo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasicAmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BasicAmo.h" },
		{ "ModuleRelativePath", "Public/BasicAmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amoGiveAmount_MetaData[] = {
		{ "Category", "_RD|Amo" },
		{ "ModuleRelativePath", "Public/BasicAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amoGiveAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicAmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicAmo_Statics::NewProp_amoGiveAmount = { "amoGiveAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicAmo, amoGiveAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amoGiveAmount_MetaData), NewProp_amoGiveAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicAmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicAmo_Statics::NewProp_amoGiveAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasicAmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABasicAmo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAmo_NoRegister, (int32)VTABLE_OFFSET(ABasicAmo, IAmo), false },  // 3385552826
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicAmo_Statics::ClassParams = {
	&ABasicAmo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasicAmo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAmo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicAmo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicAmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasicAmo()
{
	if (!Z_Registration_Info_UClass_ABasicAmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicAmo.OuterSingleton, Z_Construct_UClass_ABasicAmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasicAmo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicAmo);
ABasicAmo::~ABasicAmo() {}
// ********** End Class ABasicAmo ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasicAmo, ABasicAmo::StaticClass, TEXT("ABasicAmo"), &Z_Registration_Info_UClass_ABasicAmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicAmo), 1640966242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h__Script_ProjectRD_2284668857(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
