// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/SpecialAmo/SpecialAmo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpecialAmo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_USpecialAmo();
PROJECTRD_API UClass* Z_Construct_UClass_USpecialAmo_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface USpecialAmo Function GetSpecialBullet ********************************
struct SpecialAmo_eventGetSpecialBullet_Parms
{
	TSubclassOf<AActor> ReturnValue;

	/** Constructor, initializes return property only **/
	SpecialAmo_eventGetSpecialBullet_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSubclassOf<AActor> ISpecialAmo::GetSpecialBullet()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpecialBullet instead.");
	SpecialAmo_eventGetSpecialBullet_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USpecialAmo_GetSpecialBullet = FName(TEXT("GetSpecialBullet"));
TSubclassOf<AActor> ISpecialAmo::Execute_GetSpecialBullet(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USpecialAmo::StaticClass()));
	SpecialAmo_eventGetSpecialBullet_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USpecialAmo_GetSpecialBullet);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISpecialAmo*)(O->GetNativeInterfaceAddress(USpecialAmo::StaticClass())))
	{
		Parms.ReturnValue = I->GetSpecialBullet_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialAmo_eventGetSpecialBullet_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpecialAmo, nullptr, "GetSpecialBullet", Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::PropPointers), sizeof(SpecialAmo_eventGetSpecialBullet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SpecialAmo_eventGetSpecialBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpecialAmo_GetSpecialBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpecialAmo_GetSpecialBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISpecialAmo::execGetSpecialBullet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetSpecialBullet_Implementation();
	P_NATIVE_END;
}
// ********** End Interface USpecialAmo Function GetSpecialBullet **********************************

// ********** Begin Interface USpecialAmo Function PickUpAmo ***************************************
struct SpecialAmo_eventPickUpAmo_Parms
{
	AActor* pickUpByActor;
};
void ISpecialAmo::PickUpAmo(AActor* pickUpByActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickUpAmo instead.");
}
static FName NAME_USpecialAmo_PickUpAmo = FName(TEXT("PickUpAmo"));
void ISpecialAmo::Execute_PickUpAmo(UObject* O, AActor* pickUpByActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USpecialAmo::StaticClass()));
	SpecialAmo_eventPickUpAmo_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USpecialAmo_PickUpAmo);
	if (Func)
	{
		Parms.pickUpByActor=pickUpByActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISpecialAmo*)(O->GetNativeInterfaceAddress(USpecialAmo::StaticClass())))
	{
		I->PickUpAmo_Implementation(pickUpByActor);
	}
}
struct Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialAmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pickUpByActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::NewProp_pickUpByActor = { "pickUpByActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialAmo_eventPickUpAmo_Parms, pickUpByActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::NewProp_pickUpByActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpecialAmo, nullptr, "PickUpAmo", Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::PropPointers), sizeof(SpecialAmo_eventPickUpAmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SpecialAmo_eventPickUpAmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpecialAmo_PickUpAmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpecialAmo_PickUpAmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISpecialAmo::execPickUpAmo)
{
	P_GET_OBJECT(AActor,Z_Param_pickUpByActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickUpAmo_Implementation(Z_Param_pickUpByActor);
	P_NATIVE_END;
}
// ********** End Interface USpecialAmo Function PickUpAmo *****************************************

// ********** Begin Interface USpecialAmo **********************************************************
void USpecialAmo::StaticRegisterNativesUSpecialAmo()
{
	UClass* Class = USpecialAmo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpecialBullet", &ISpecialAmo::execGetSpecialBullet },
		{ "PickUpAmo", &ISpecialAmo::execPickUpAmo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpecialAmo;
UClass* USpecialAmo::GetPrivateStaticClass()
{
	using TClass = USpecialAmo;
	if (!Z_Registration_Info_UClass_USpecialAmo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpecialAmo"),
			Z_Registration_Info_UClass_USpecialAmo.InnerSingleton,
			StaticRegisterNativesUSpecialAmo,
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
	return Z_Registration_Info_UClass_USpecialAmo.InnerSingleton;
}
UClass* Z_Construct_UClass_USpecialAmo_NoRegister()
{
	return USpecialAmo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpecialAmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/SpecialAmo/SpecialAmo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpecialAmo_GetSpecialBullet, "GetSpecialBullet" }, // 2649822787
		{ &Z_Construct_UFunction_USpecialAmo_PickUpAmo, "PickUpAmo" }, // 669425680
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpecialAmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpecialAmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialAmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpecialAmo_Statics::ClassParams = {
	&USpecialAmo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialAmo_Statics::Class_MetaDataParams), Z_Construct_UClass_USpecialAmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpecialAmo()
{
	if (!Z_Registration_Info_UClass_USpecialAmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpecialAmo.OuterSingleton, Z_Construct_UClass_USpecialAmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpecialAmo.OuterSingleton;
}
USpecialAmo::USpecialAmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialAmo);
// ********** End Interface USpecialAmo ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpecialAmo, USpecialAmo::StaticClass, TEXT("USpecialAmo"), &Z_Registration_Info_UClass_USpecialAmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpecialAmo), 3950473872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h__Script_ProjectRD_3330711455(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
