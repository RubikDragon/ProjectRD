// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HealtSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealtSystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UHealtSystem();
PROJECTRD_API UClass* Z_Construct_UClass_UHealtSystem_NoRegister();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHealthChange *******************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics
{
	struct _Script_ProjectRD_eventOnHealthChange_Parms
	{
		int32 CurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventOnHealthChange_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "OnHealthChange__DelegateSignature", Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::_Script_ProjectRD_eventOnHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::_Script_ProjectRD_eventOnHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChange_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChange, int32 CurrentHealth)
{
	struct _Script_ProjectRD_eventOnHealthChange_Parms
	{
		int32 CurrentHealth;
	};
	_Script_ProjectRD_eventOnHealthChange_Parms Parms;
	Parms.CurrentHealth=CurrentHealth;
	OnHealthChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealthChange *********************************************************

// ********** Begin Delegate FOnDeadth *************************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "OnDeadth__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeadth_DelegateWrapper(const FMulticastScriptDelegate& OnDeadth)
{
	OnDeadth.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnDeadth ***************************************************************

// ********** Begin Delegate FOnHealtStartUp *******************************************************
struct Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics
{
	struct _Script_ProjectRD_eventOnHealtStartUp_Parms
	{
		int32 CurrentHP;
		int32 minHP;
		int32 maxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minHP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventOnHealtStartUp_Parms, CurrentHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_minHP = { "minHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventOnHealtStartUp_Parms, minHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRD_eventOnHealtStartUp_Parms, maxHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_minHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::NewProp_maxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRD, nullptr, "OnHealtStartUp__DelegateSignature", Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::_Script_ProjectRD_eventOnHealtStartUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::_Script_ProjectRD_eventOnHealtStartUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealtStartUp_DelegateWrapper(const FMulticastScriptDelegate& OnHealtStartUp, int32 CurrentHP, int32 minHP, int32 maxHP)
{
	struct _Script_ProjectRD_eventOnHealtStartUp_Parms
	{
		int32 CurrentHP;
		int32 minHP;
		int32 maxHP;
	};
	_Script_ProjectRD_eventOnHealtStartUp_Parms Parms;
	Parms.CurrentHP=CurrentHP;
	Parms.minHP=minHP;
	Parms.maxHP=maxHP;
	OnHealtStartUp.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHealtStartUp *********************************************************

// ********** Begin Class UHealtSystem Function ChangeHealt ****************************************
struct Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics
{
	struct HealtSystem_eventChangeHealt_Parms
	{
		int32 changeBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_changeBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::NewProp_changeBy = { "changeBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventChangeHealt_Parms, changeBy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::NewProp_changeBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealtSystem, nullptr, "ChangeHealt", Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::HealtSystem_eventChangeHealt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::HealtSystem_eventChangeHealt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealtSystem_ChangeHealt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealtSystem_ChangeHealt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealtSystem::execChangeHealt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_changeBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeHealt(Z_Param_changeBy);
	P_NATIVE_END;
}
// ********** End Class UHealtSystem Function ChangeHealt ******************************************

// ********** Begin Class UHealtSystem Function Deadth *********************************************
struct Z_Construct_UFunction_UHealtSystem_Deadth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealtSystem_Deadth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealtSystem, nullptr, "Deadth", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_Deadth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealtSystem_Deadth_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHealtSystem_Deadth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealtSystem_Deadth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealtSystem::execDeadth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deadth();
	P_NATIVE_END;
}
// ********** End Class UHealtSystem Function Deadth ***********************************************

// ********** Begin Class UHealtSystem Function ResetHealt *****************************************
struct Z_Construct_UFunction_UHealtSystem_ResetHealt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealtSystem_ResetHealt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealtSystem, nullptr, "ResetHealt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_ResetHealt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealtSystem_ResetHealt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHealtSystem_ResetHealt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealtSystem_ResetHealt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealtSystem::execResetHealt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHealt();
	P_NATIVE_END;
}
// ********** End Class UHealtSystem Function ResetHealt *******************************************

// ********** Begin Class UHealtSystem Function TakeDamage *****************************************
struct Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics
{
	struct HealtSystem_eventTakeDamage_Parms
	{
		AActor* damagedActor;
		float damage;
		const UDamageType* damageType;
		AController* instigateBy;
		AActor* damageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_damageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instigateBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventTakeDamage_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageType_MetaData), NewProp_damageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_instigateBy = { "instigateBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventTakeDamage_Parms, instigateBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealtSystem_eventTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_instigateBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::NewProp_damageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealtSystem, nullptr, "TakeDamage", Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::HealtSystem_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::HealtSystem_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealtSystem_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealtSystem_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealtSystem::execTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_damagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
	P_GET_OBJECT(UDamageType,Z_Param_damageType);
	P_GET_OBJECT(AController,Z_Param_instigateBy);
	P_GET_OBJECT(AActor,Z_Param_damageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_instigateBy,Z_Param_damageCauser);
	P_NATIVE_END;
}
// ********** End Class UHealtSystem Function TakeDamage *******************************************

// ********** Begin Class UHealtSystem *************************************************************
void UHealtSystem::StaticRegisterNativesUHealtSystem()
{
	UClass* Class = UHealtSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeHealt", &UHealtSystem::execChangeHealt },
		{ "Deadth", &UHealtSystem::execDeadth },
		{ "ResetHealt", &UHealtSystem::execResetHealt },
		{ "TakeDamage", &UHealtSystem::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealtSystem;
UClass* UHealtSystem::GetPrivateStaticClass()
{
	using TClass = UHealtSystem;
	if (!Z_Registration_Info_UClass_UHealtSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HealtSystem"),
			Z_Registration_Info_UClass_UHealtSystem.InnerSingleton,
			StaticRegisterNativesUHealtSystem,
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
	return Z_Registration_Info_UClass_UHealtSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealtSystem_NoRegister()
{
	return UHealtSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealtSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealtSystem.h" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChange_MetaData[] = {
		{ "Category", "Event|RD" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Event|RD" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthStartUp_MetaData[] = {
		{ "Category", "Event|RD" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "_RD|Healt" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minHealth_MetaData[] = {
		{ "Category", "_RD|Healt" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startingHealth_MetaData[] = {
		{ "Category", "_RD|Healt" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debugTakeDamage_MetaData[] = {
		{ "Category", "Debug|RD" },
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/HealtSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthStartUp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_minHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_startingHealth;
	static void NewProp_debugTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_debugTakeDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentHealth;
	static void NewProp_playerIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_playerIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealtSystem_ChangeHealt, "ChangeHealt" }, // 3854566282
		{ &Z_Construct_UFunction_UHealtSystem_Deadth, "Deadth" }, // 2432071325
		{ &Z_Construct_UFunction_UHealtSystem_ResetHealt, "ResetHealt" }, // 2488334367
		{ &Z_Construct_UFunction_UHealtSystem_TakeDamage, "TakeDamage" }, // 1934042596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealtSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnHealthChange = { "OnHealthChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, OnHealthChange), Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChange_MetaData), NewProp_OnHealthChange_MetaData) }; // 3025954788
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, OnDeath), Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 2277803541
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnHealthStartUp = { "OnHealthStartUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, OnHealthStartUp), Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthStartUp_MetaData), NewProp_OnHealthStartUp_MetaData) }; // 517598563
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_minHealth = { "minHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, minHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minHealth_MetaData), NewProp_minHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_startingHealth = { "startingHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, startingHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startingHealth_MetaData), NewProp_startingHealth_MetaData) };
void Z_Construct_UClass_UHealtSystem_Statics::NewProp_debugTakeDamage_SetBit(void* Obj)
{
	((UHealtSystem*)Obj)->debugTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_debugTakeDamage = { "debugTakeDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHealtSystem), &Z_Construct_UClass_UHealtSystem_Statics::NewProp_debugTakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debugTakeDamage_MetaData), NewProp_debugTakeDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealtSystem, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
void Z_Construct_UClass_UHealtSystem_Statics::NewProp_playerIsDead_SetBit(void* Obj)
{
	((UHealtSystem*)Obj)->playerIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealtSystem_Statics::NewProp_playerIsDead = { "playerIsDead", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHealtSystem), &Z_Construct_UClass_UHealtSystem_Statics::NewProp_playerIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerIsDead_MetaData), NewProp_playerIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealtSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnHealthChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_OnHealthStartUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_minHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_startingHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_debugTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealtSystem_Statics::NewProp_playerIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealtSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealtSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealtSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealtSystem_Statics::ClassParams = {
	&UHealtSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealtSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealtSystem_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealtSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealtSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealtSystem()
{
	if (!Z_Registration_Info_UClass_UHealtSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealtSystem.OuterSingleton, Z_Construct_UClass_UHealtSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealtSystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealtSystem);
UHealtSystem::~UHealtSystem() {}
// ********** End Class UHealtSystem ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealtSystem, UHealtSystem::StaticClass, TEXT("UHealtSystem"), &Z_Registration_Info_UClass_UHealtSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealtSystem), 49906069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h__Script_ProjectRD_2024977971(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
