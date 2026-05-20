// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/SpecialAmo/SpecialBulletAmo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpecialBulletAmo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ASpecialBulletAmo();
PROJECTRD_API UClass* Z_Construct_UClass_ASpecialBulletAmo_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_USpecialAmo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpecialBulletAmo Function GetSpecialBullet_Implementation ***************
struct Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics
{
	struct SpecialBulletAmo_eventGetSpecialBullet_Implementation_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialBulletAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialBulletAmo_eventGetSpecialBullet_Implementation_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpecialBulletAmo, nullptr, "GetSpecialBullet_Implementation", Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::SpecialBulletAmo_eventGetSpecialBullet_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::SpecialBulletAmo_eventGetSpecialBullet_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpecialBulletAmo::execGetSpecialBullet_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetSpecialBullet_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASpecialBulletAmo Function GetSpecialBullet_Implementation *****************

// ********** Begin Class ASpecialBulletAmo Function PickUpAmo_Implementation **********************
struct Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics
{
	struct SpecialBulletAmo_eventPickUpAmo_Implementation_Parms
	{
		AActor* pickUpByActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialBulletAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pickUpByActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::NewProp_pickUpByActor = { "pickUpByActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialBulletAmo_eventPickUpAmo_Implementation_Parms, pickUpByActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::NewProp_pickUpByActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpecialBulletAmo, nullptr, "PickUpAmo_Implementation", Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::SpecialBulletAmo_eventPickUpAmo_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::SpecialBulletAmo_eventPickUpAmo_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpecialBulletAmo::execPickUpAmo_Implementation)
{
	P_GET_OBJECT(AActor,Z_Param_pickUpByActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUpAmo_Implementation(Z_Param_pickUpByActor);
	P_NATIVE_END;
}
// ********** End Class ASpecialBulletAmo Function PickUpAmo_Implementation ************************

// ********** Begin Class ASpecialBulletAmo ********************************************************
void ASpecialBulletAmo::StaticRegisterNativesASpecialBulletAmo()
{
	UClass* Class = ASpecialBulletAmo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpecialBullet_Implementation", &ASpecialBulletAmo::execGetSpecialBullet_Implementation },
		{ "PickUpAmo_Implementation", &ASpecialBulletAmo::execPickUpAmo_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpecialBulletAmo;
UClass* ASpecialBulletAmo::GetPrivateStaticClass()
{
	using TClass = ASpecialBulletAmo;
	if (!Z_Registration_Info_UClass_ASpecialBulletAmo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpecialBulletAmo"),
			Z_Registration_Info_UClass_ASpecialBulletAmo.InnerSingleton,
			StaticRegisterNativesASpecialBulletAmo,
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
	return Z_Registration_Info_UClass_ASpecialBulletAmo.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpecialBulletAmo_NoRegister()
{
	return ASpecialBulletAmo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpecialBulletAmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interface/SpecialAmo/SpecialBulletAmo.h" },
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialBulletAmo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amoActor_MetaData[] = {
		{ "Category", "RD|Amo" },
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialBulletAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_amoActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpecialBulletAmo_GetSpecialBullet_Implementation, "GetSpecialBullet_Implementation" }, // 1546964297
		{ &Z_Construct_UFunction_ASpecialBulletAmo_PickUpAmo_Implementation, "PickUpAmo_Implementation" }, // 2384297146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpecialBulletAmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpecialBulletAmo_Statics::NewProp_amoActor = { "amoActor", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpecialBulletAmo, amoActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amoActor_MetaData), NewProp_amoActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpecialBulletAmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpecialBulletAmo_Statics::NewProp_amoActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBulletAmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpecialBulletAmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBulletAmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpecialBulletAmo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USpecialAmo_NoRegister, (int32)VTABLE_OFFSET(ASpecialBulletAmo, ISpecialAmo), false },  // 3950473872
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpecialBulletAmo_Statics::ClassParams = {
	&ASpecialBulletAmo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpecialBulletAmo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBulletAmo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBulletAmo_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpecialBulletAmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpecialBulletAmo()
{
	if (!Z_Registration_Info_UClass_ASpecialBulletAmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpecialBulletAmo.OuterSingleton, Z_Construct_UClass_ASpecialBulletAmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpecialBulletAmo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpecialBulletAmo);
ASpecialBulletAmo::~ASpecialBulletAmo() {}
// ********** End Class ASpecialBulletAmo **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpecialBulletAmo, ASpecialBulletAmo::StaticClass, TEXT("ASpecialBulletAmo"), &Z_Registration_Info_UClass_ASpecialBulletAmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpecialBulletAmo), 425560974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h__Script_ProjectRD_3331076216(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
