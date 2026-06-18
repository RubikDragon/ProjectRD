// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ai/BBComponents/SetPlayerValueToBB.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSetPlayerValueToBB() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTRD_API UClass* Z_Construct_UClass_USetPlayerValueToBB();
PROJECTRD_API UClass* Z_Construct_UClass_USetPlayerValueToBB_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USetPlayerValueToBB ******************************************************
void USetPlayerValueToBB::StaticRegisterNativesUSetPlayerValueToBB()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USetPlayerValueToBB;
UClass* USetPlayerValueToBB::GetPrivateStaticClass()
{
	using TClass = USetPlayerValueToBB;
	if (!Z_Registration_Info_UClass_USetPlayerValueToBB.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SetPlayerValueToBB"),
			Z_Registration_Info_UClass_USetPlayerValueToBB.InnerSingleton,
			StaticRegisterNativesUSetPlayerValueToBB,
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
	return Z_Registration_Info_UClass_USetPlayerValueToBB.InnerSingleton;
}
UClass* Z_Construct_UClass_USetPlayerValueToBB_NoRegister()
{
	return USetPlayerValueToBB::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USetPlayerValueToBB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// is meant to be set onto a aiController\n/// </summary>\n" },
#endif
		{ "IncludePath", "Ai/BBComponents/SetPlayerValueToBB.h" },
		{ "ModuleRelativePath", "Public/Ai/BBComponents/SetPlayerValueToBB.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nis meant to be set onto a aiController\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerBBKeyName_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Ai/BBComponents/SetPlayerValueToBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_getPlayerId_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Ai/BBComponents/SetPlayerValueToBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ownerCharture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ai/BBComponents/SetPlayerValueToBB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_playerBBKeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_getPlayerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ownerCharture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetPlayerValueToBB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_playerBBKeyName = { "playerBBKeyName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetPlayerValueToBB, playerBBKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerBBKeyName_MetaData), NewProp_playerBBKeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_getPlayerId = { "getPlayerId", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetPlayerValueToBB, getPlayerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_getPlayerId_MetaData), NewProp_getPlayerId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_ownerCharture = { "ownerCharture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetPlayerValueToBB, ownerCharture), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ownerCharture_MetaData), NewProp_ownerCharture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetPlayerValueToBB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_playerBBKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_getPlayerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetPlayerValueToBB_Statics::NewProp_ownerCharture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetPlayerValueToBB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USetPlayerValueToBB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetPlayerValueToBB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USetPlayerValueToBB_Statics::ClassParams = {
	&USetPlayerValueToBB::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USetPlayerValueToBB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USetPlayerValueToBB_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USetPlayerValueToBB_Statics::Class_MetaDataParams), Z_Construct_UClass_USetPlayerValueToBB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USetPlayerValueToBB()
{
	if (!Z_Registration_Info_UClass_USetPlayerValueToBB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetPlayerValueToBB.OuterSingleton, Z_Construct_UClass_USetPlayerValueToBB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USetPlayerValueToBB.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USetPlayerValueToBB);
USetPlayerValueToBB::~USetPlayerValueToBB() {}
// ********** End Class USetPlayerValueToBB ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_BBComponents_SetPlayerValueToBB_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USetPlayerValueToBB, USetPlayerValueToBB::StaticClass, TEXT("USetPlayerValueToBB"), &Z_Registration_Info_UClass_USetPlayerValueToBB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetPlayerValueToBB), 1210080800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_BBComponents_SetPlayerValueToBB_h__Script_ProjectRD_3922273007(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_BBComponents_SetPlayerValueToBB_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Ai_BBComponents_SetPlayerValueToBB_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
