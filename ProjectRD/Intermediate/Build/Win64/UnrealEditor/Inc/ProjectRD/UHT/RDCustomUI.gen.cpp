// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RDCustomUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRDCustomUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ARDCustomUI();
PROJECTRD_API UClass* Z_Construct_UClass_ARDCustomUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARDCustomUI Function SetUpWight ******************************************
struct Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics
{
	struct RDCustomUI_eventSetUpWight_Parms
	{
		UUserWidget* wighet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RDCustomUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wighet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_wighet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::NewProp_wighet = { "wighet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RDCustomUI_eventSetUpWight_Parms, wighet), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wighet_MetaData), NewProp_wighet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::NewProp_wighet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARDCustomUI, nullptr, "SetUpWight", Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::RDCustomUI_eventSetUpWight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::RDCustomUI_eventSetUpWight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARDCustomUI_SetUpWight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARDCustomUI_SetUpWight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARDCustomUI::execSetUpWight)
{
	P_GET_OBJECT(UUserWidget,Z_Param_wighet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpWight(Z_Param_wighet);
	P_NATIVE_END;
}
// ********** End Class ARDCustomUI Function SetUpWight ********************************************

// ********** Begin Class ARDCustomUI **************************************************************
void ARDCustomUI::StaticRegisterNativesARDCustomUI()
{
	UClass* Class = ARDCustomUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUpWight", &ARDCustomUI::execSetUpWight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARDCustomUI;
UClass* ARDCustomUI::GetPrivateStaticClass()
{
	using TClass = ARDCustomUI;
	if (!Z_Registration_Info_UClass_ARDCustomUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RDCustomUI"),
			Z_Registration_Info_UClass_ARDCustomUI.InnerSingleton,
			StaticRegisterNativesARDCustomUI,
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
	return Z_Registration_Info_UClass_ARDCustomUI.InnerSingleton;
}
UClass* Z_Construct_UClass_ARDCustomUI_NoRegister()
{
	return ARDCustomUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARDCustomUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RDCustomUI.h" },
		{ "ModuleRelativePath", "Public/RDCustomUI.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHudClass_MetaData[] = {
		{ "Category", "RD|Display" },
		{ "ModuleRelativePath", "Public/RDCustomUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_world_MetaData[] = {
		{ "ModuleRelativePath", "Public/RDCustomUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHudWight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RDCustomUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHudClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHudWight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARDCustomUI_SetUpWight, "SetUpWight" }, // 3667402897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARDCustomUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARDCustomUI_Statics::NewProp_PlayerHudClass = { "PlayerHudClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARDCustomUI, PlayerHudClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHudClass_MetaData), NewProp_PlayerHudClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARDCustomUI_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARDCustomUI, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_world_MetaData), NewProp_world_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARDCustomUI_Statics::NewProp_PlayerHudWight = { "PlayerHudWight", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARDCustomUI, PlayerHudWight), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHudWight_MetaData), NewProp_PlayerHudWight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARDCustomUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARDCustomUI_Statics::NewProp_PlayerHudClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARDCustomUI_Statics::NewProp_world,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARDCustomUI_Statics::NewProp_PlayerHudWight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARDCustomUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARDCustomUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARDCustomUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARDCustomUI_Statics::ClassParams = {
	&ARDCustomUI::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARDCustomUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARDCustomUI_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARDCustomUI_Statics::Class_MetaDataParams), Z_Construct_UClass_ARDCustomUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARDCustomUI()
{
	if (!Z_Registration_Info_UClass_ARDCustomUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARDCustomUI.OuterSingleton, Z_Construct_UClass_ARDCustomUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARDCustomUI.OuterSingleton;
}
ARDCustomUI::ARDCustomUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARDCustomUI);
ARDCustomUI::~ARDCustomUI() {}
// ********** End Class ARDCustomUI ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARDCustomUI, ARDCustomUI::StaticClass, TEXT("ARDCustomUI"), &Z_Registration_Info_UClass_ARDCustomUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARDCustomUI), 4261649994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h__Script_ProjectRD_286270741(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
