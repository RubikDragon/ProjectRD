// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/FPSSystem/ShootingFPSComponent.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootingFPSComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UShootingFPSComponent();
PROJECTRD_API UClass* Z_Construct_UClass_UShootingFPSComponent_NoRegister();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAmoChange ************************************************************
struct Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics
{
	struct ShootingFPSComponent_eventAmoChange_Parms
	{
		int32 CurrentAmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmo = { "CurrentAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingFPSComponent_eventAmoChange_Parms, CurrentAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::NewProp_CurrentAmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "AmoChange__DelegateSignature", Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::ShootingFPSComponent_eventAmoChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::ShootingFPSComponent_eventAmoChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UShootingFPSComponent::FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, int32 CurrentAmo)
{
	struct ShootingFPSComponent_eventAmoChange_Parms
	{
		int32 CurrentAmo;
	};
	ShootingFPSComponent_eventAmoChange_Parms Parms;
	Parms.CurrentAmo=CurrentAmo;
	AmoChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FSetUpAmo *************************************************************
struct Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics
{
	struct ShootingFPSComponent_eventSetUpAmo_Parms
	{
		int32 CurrentAmo;
		int32 minAmo;
		int32 maxAmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_CurrentAmo = { "CurrentAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingFPSComponent_eventSetUpAmo_Parms, CurrentAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingFPSComponent_eventSetUpAmo_Parms, minAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingFPSComponent_eventSetUpAmo_Parms, maxAmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_CurrentAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::NewProp_maxAmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "SetUpAmo__DelegateSignature", Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::ShootingFPSComponent_eventSetUpAmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::ShootingFPSComponent_eventSetUpAmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UShootingFPSComponent::FSetUpAmo_DelegateWrapper(const FMulticastScriptDelegate& SetUpAmo, int32 CurrentAmo, int32 minAmo, int32 maxAmo)
{
	struct ShootingFPSComponent_eventSetUpAmo_Parms
	{
		int32 CurrentAmo;
		int32 minAmo;
		int32 maxAmo;
	};
	ShootingFPSComponent_eventSetUpAmo_Parms Parms;
	Parms.CurrentAmo=CurrentAmo;
	Parms.minAmo=minAmo;
	Parms.maxAmo=maxAmo;
	SetUpAmo.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSetUpAmo ***************************************************************

// ********** Begin Delegate FNotefy ***************************************************************
struct Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "Notefy__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UShootingFPSComponent::FNotefy_DelegateWrapper(const FMulticastScriptDelegate& Notefy)
{
	Notefy.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FNotefy *****************************************************************

// ********** Begin Class UShootingFPSComponent Function ChangeAmo *********************************
struct Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics
{
	struct ShootingFPSComponent_eventChangeAmo_Parms
	{
		int32 amoChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amoChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::NewProp_amoChange = { "amoChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingFPSComponent_eventChangeAmo_Parms, amoChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::NewProp_amoChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "ChangeAmo", Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::ShootingFPSComponent_eventChangeAmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::ShootingFPSComponent_eventChangeAmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootingFPSComponent::execChangeAmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amoChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeAmo(Z_Param_amoChange);
	P_NATIVE_END;
}
// ********** End Class UShootingFPSComponent Function ChangeAmo ***********************************

// ********** Begin Class UShootingFPSComponent Function ResetCanReload ****************************
struct Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "ResetCanReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootingFPSComponent::execResetCanReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCanReload();
	P_NATIVE_END;
}
// ********** End Class UShootingFPSComponent Function ResetCanReload ******************************

// ********** Begin Class UShootingFPSComponent Function ResetCanShot ******************************
struct Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShootingFPSComponent, nullptr, "ResetCanShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShootingFPSComponent::execResetCanShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCanShot();
	P_NATIVE_END;
}
// ********** End Class UShootingFPSComponent Function ResetCanShot ********************************

// ********** Begin Class UShootingFPSComponent ****************************************************
void UShootingFPSComponent::StaticRegisterNativesUShootingFPSComponent()
{
	UClass* Class = UShootingFPSComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeAmo", &UShootingFPSComponent::execChangeAmo },
		{ "ResetCanReload", &UShootingFPSComponent::execResetCanReload },
		{ "ResetCanShot", &UShootingFPSComponent::execResetCanShot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShootingFPSComponent;
UClass* UShootingFPSComponent::GetPrivateStaticClass()
{
	using TClass = UShootingFPSComponent;
	if (!Z_Registration_Info_UClass_UShootingFPSComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootingFPSComponent"),
			Z_Registration_Info_UClass_UShootingFPSComponent.InnerSingleton,
			StaticRegisterNativesUShootingFPSComponent,
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
	return Z_Registration_Info_UClass_UShootingFPSComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UShootingFPSComponent_NoRegister()
{
	return UShootingFPSComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShootingFPSComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeValuesDelegate,\n//\x09int32, CurrentAmo);\n//\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetValuesDelegate,\n//\x09int32, CurrentAmo,\n//\x09int32, minAmo,\n//\x09int32, maxAmo); \n" },
#endif
		{ "IncludePath", "Interface/FPSSystem/ShootingFPSComponent.h" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeValuesDelegate,\n       int32, CurrentAmo);\n\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetValuesDelegate,\n       int32, CurrentAmo,\n       int32, minAmo,\n       int32, maxAmo);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmoSetUp_MetaData[] = {
		{ "Category", "Event|_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amo\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAmoChange_MetaData[] = {
		{ "Category", "Event|_RD" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReload_MetaData[] = {
		{ "Category", "Event|_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reserve Amo\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reserve Amo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReserveAmoSetUp_MetaData[] = {
		{ "Category", "Event|_RD" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReserveAmoChange_MetaData[] = {
		{ "Category", "Event|_RD" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bullet_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitDamage_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotSpawnPorstion_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmo_MetaData[] = {
		{ "Category", "_RD|Amo|MinMax" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxResurveAmo_MetaData[] = {
		{ "Category", "_RD|Amo|MinMax" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minResurveAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadAmoDifrents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reserveAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentAmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[] = {
		{ "Category", "_RD|Timers" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetinveShots_MetaData[] = {
		{ "Category", "_RD|Timers" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canShot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadCooldown_MetaData[] = {
		{ "Category", "_RD|Timers" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeBetvineShotsTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTimerTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedBullet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponDebug_MetaData[] = {
		{ "Category", "Debug|RD" },
		{ "ModuleRelativePath", "Public/Interface/FPSSystem/ShootingFPSComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmoSetUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmoChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReload;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReserveAmoSetUp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReserveAmoChange;
	static const UECodeGen_Private::FClassPropertyParams NewProp_bullet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_hitDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotSpawnPorstion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxResurveAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minResurveAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_reloadAmoDifrents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_reserveAmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentAmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_timeBetinveShots;
	static void NewProp_canShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canShot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reloadCooldown;
	static void NewProp_canReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canReload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_timeBetvineShotsTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_reloadTimerTH;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedBullet;
	static void NewProp_weaponDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_weaponDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature, "AmoChange__DelegateSignature" }, // 2619148348
		{ &Z_Construct_UFunction_UShootingFPSComponent_ChangeAmo, "ChangeAmo" }, // 3330533600
		{ &Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature, "Notefy__DelegateSignature" }, // 298564393
		{ &Z_Construct_UFunction_UShootingFPSComponent_ResetCanReload, "ResetCanReload" }, // 3552946575
		{ &Z_Construct_UFunction_UShootingFPSComponent_ResetCanShot, "ResetCanShot" }, // 198744452
		{ &Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature, "SetUpAmo__DelegateSignature" }, // 3376810630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootingFPSComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnAmoSetUp = { "OnAmoSetUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, OnAmoSetUp), Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmoSetUp_MetaData), NewProp_OnAmoSetUp_MetaData) }; // 3376810630
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnAmoChange = { "OnAmoChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, OnAmoChange), Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAmoChange_MetaData), NewProp_OnAmoChange_MetaData) }; // 2619148348
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReload = { "OnReload", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, OnReload), Z_Construct_UDelegateFunction_UShootingFPSComponent_Notefy__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReload_MetaData), NewProp_OnReload_MetaData) }; // 298564393
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReserveAmoSetUp = { "OnReserveAmoSetUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, OnReserveAmoSetUp), Z_Construct_UDelegateFunction_UShootingFPSComponent_SetUpAmo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReserveAmoSetUp_MetaData), NewProp_OnReserveAmoSetUp_MetaData) }; // 3376810630
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReserveAmoChange = { "OnReserveAmoChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, OnReserveAmoChange), Z_Construct_UDelegateFunction_UShootingFPSComponent_AmoChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReserveAmoChange_MetaData), NewProp_OnReserveAmoChange_MetaData) }; // 2619148348
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_bullet = { "bullet", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletRD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bullet_MetaData), NewProp_bullet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_hitDamage = { "hitDamage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, hitDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitDamage_MetaData), NewProp_hitDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_shotSpawnPorstion = { "shotSpawnPorstion", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, shotSpawnPorstion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotSpawnPorstion_MetaData), NewProp_shotSpawnPorstion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_maxAmo = { "maxAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, maxAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmo_MetaData), NewProp_maxAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_minAmo = { "minAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, minAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minAmo_MetaData), NewProp_minAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_maxResurveAmo = { "maxResurveAmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, maxResurveAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxResurveAmo_MetaData), NewProp_maxResurveAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_minResurveAmo = { "minResurveAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, minResurveAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minResurveAmo_MetaData), NewProp_minResurveAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadAmoDifrents = { "reloadAmoDifrents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, reloadAmoDifrents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadAmoDifrents_MetaData), NewProp_reloadAmoDifrents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reserveAmo = { "reserveAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, reserveAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reserveAmo_MetaData), NewProp_reserveAmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_currentAmo = { "currentAmo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, currentAmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentAmo_MetaData), NewProp_currentAmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, reloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTime_MetaData), NewProp_reloadTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_timeBetinveShots = { "timeBetinveShots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, timeBetinveShots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeBetinveShots_MetaData), NewProp_timeBetinveShots_MetaData) };
void Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canShot_SetBit(void* Obj)
{
	((UShootingFPSComponent*)Obj)->canShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canShot = { "canShot", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShootingFPSComponent), &Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canShot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canShot_MetaData), NewProp_canShot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadCooldown = { "reloadCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, reloadCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadCooldown_MetaData), NewProp_reloadCooldown_MetaData) };
void Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canReload_SetBit(void* Obj)
{
	((UShootingFPSComponent*)Obj)->canReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canReload = { "canReload", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShootingFPSComponent), &Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canReload_MetaData), NewProp_canReload_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_timeBetvineShotsTH = { "timeBetvineShotsTH", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, timeBetvineShotsTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeBetvineShotsTH_MetaData), NewProp_timeBetvineShotsTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadTimerTH = { "reloadTimerTH", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, reloadTimerTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTimerTH_MetaData), NewProp_reloadTimerTH_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_spawnedBullet = { "spawnedBullet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShootingFPSComponent, spawnedBullet), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedBullet_MetaData), NewProp_spawnedBullet_MetaData) };
void Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_weaponDebug_SetBit(void* Obj)
{
	((UShootingFPSComponent*)Obj)->weaponDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_weaponDebug = { "weaponDebug", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShootingFPSComponent), &Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_weaponDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponDebug_MetaData), NewProp_weaponDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootingFPSComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnAmoSetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnAmoChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReserveAmoSetUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_OnReserveAmoChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_hitDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_shotSpawnPorstion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_maxAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_minAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_maxResurveAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_minResurveAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadAmoDifrents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reserveAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_currentAmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_timeBetinveShots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_canReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_timeBetvineShotsTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_reloadTimerTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_spawnedBullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootingFPSComponent_Statics::NewProp_weaponDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootingFPSComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShootingFPSComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShootingFPSComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UShootingFPSComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFPSSystem_NoRegister, (int32)VTABLE_OFFSET(UShootingFPSComponent, IFPSSystem), false },  // 836489139
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootingFPSComponent_Statics::ClassParams = {
	&UShootingFPSComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShootingFPSComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShootingFPSComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShootingFPSComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UShootingFPSComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShootingFPSComponent()
{
	if (!Z_Registration_Info_UClass_UShootingFPSComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootingFPSComponent.OuterSingleton, Z_Construct_UClass_UShootingFPSComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShootingFPSComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShootingFPSComponent);
UShootingFPSComponent::~UShootingFPSComponent() {}
// ********** End Class UShootingFPSComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShootingFPSComponent, UShootingFPSComponent::StaticClass, TEXT("UShootingFPSComponent"), &Z_Registration_Info_UClass_UShootingFPSComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootingFPSComponent), 1060929854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h__Script_ProjectRD_4208174170(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
