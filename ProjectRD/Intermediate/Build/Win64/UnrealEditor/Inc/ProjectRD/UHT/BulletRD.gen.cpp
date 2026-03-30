// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BulletRD.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBulletRD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD();
PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABulletRD Function BegainOverlap *****************************************
struct Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics
{
	struct BulletRD_eventBegainOverlap_Parms
	{
		UPrimitiveComponent* overlapComponent;
		AActor* otherActor;
		UPrimitiveComponent* otherComp;
		int32 otherBodyIndex;
		bool bFromSweep;
		FHitResult sweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_overlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlapComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_overlapComponent = { "overlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBegainOverlap_Parms, overlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overlapComponent_MetaData), NewProp_overlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBegainOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBegainOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBegainOverlap_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BulletRD_eventBegainOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BulletRD_eventBegainOverlap_Parms), &Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBegainOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sweepResult_MetaData), NewProp_sweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_overlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_otherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::NewProp_sweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletRD, nullptr, "BegainOverlap", Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::BulletRD_eventBegainOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::BulletRD_eventBegainOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABulletRD_BegainOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletRD_BegainOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletRD::execBegainOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapComponent);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BegainOverlap(Z_Param_overlapComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
	P_NATIVE_END;
}
// ********** End Class ABulletRD Function BegainOverlap *******************************************

// ********** Begin Class ABulletRD Function BulletDestroy *****************************************
struct Z_Construct_UFunction_ABulletRD_BulletDestroy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletRD_BulletDestroy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletRD, nullptr, "BulletDestroy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BulletDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletRD_BulletDestroy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABulletRD_BulletDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletRD_BulletDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletRD::execBulletDestroy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulletDestroy();
	P_NATIVE_END;
}
// ********** End Class ABulletRD Function BulletDestroy *******************************************

// ********** Begin Class ABulletRD Function BulletHit *********************************************
struct Z_Construct_UFunction_ABulletRD_BulletHit_Statics
{
	struct BulletRD_eventBulletHit_Parms
	{
		AActor* hitActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletRD_BulletHit_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventBulletHit_Parms, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletRD_BulletHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_BulletHit_Statics::NewProp_hitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BulletHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletRD_BulletHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletRD, nullptr, "BulletHit", Z_Construct_UFunction_ABulletRD_BulletHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BulletHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletRD_BulletHit_Statics::BulletRD_eventBulletHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_BulletHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletRD_BulletHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABulletRD_BulletHit_Statics::BulletRD_eventBulletHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABulletRD_BulletHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletRD_BulletHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletRD::execBulletHit)
{
	P_GET_OBJECT(AActor,Z_Param_hitActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulletHit(Z_Param_hitActor);
	P_NATIVE_END;
}
// ********** End Class ABulletRD Function BulletHit ***********************************************

// ********** Begin Class ABulletRD Function HitDestroy ********************************************
struct Z_Construct_UFunction_ABulletRD_HitDestroy_Statics
{
	struct BulletRD_eventHitDestroy_Parms
	{
		AActor* hitActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::NewProp_hitActor = { "hitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletRD_eventHitDestroy_Parms, hitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::NewProp_hitActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABulletRD, nullptr, "HitDestroy", Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::BulletRD_eventHitDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::BulletRD_eventHitDestroy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABulletRD_HitDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletRD_HitDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABulletRD::execHitDestroy)
{
	P_GET_OBJECT(AActor,Z_Param_hitActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitDestroy(Z_Param_hitActor);
	P_NATIVE_END;
}
// ********** End Class ABulletRD Function HitDestroy **********************************************

// ********** Begin Class ABulletRD ****************************************************************
void ABulletRD::StaticRegisterNativesABulletRD()
{
	UClass* Class = ABulletRD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BegainOverlap", &ABulletRD::execBegainOverlap },
		{ "BulletDestroy", &ABulletRD::execBulletDestroy },
		{ "BulletHit", &ABulletRD::execBulletHit },
		{ "HitDestroy", &ABulletRD::execHitDestroy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletPartical_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileControl_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "RD|BulletStates" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "RD|BulletStates" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
		{ "Category", "RD|BulletStates" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lifeTime_MetaData[] = {
		{ "Category", "RD|BulletStates" },
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inpacktPartical_MetaData[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BulletRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletPartical;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_damageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inpacktPartical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_timerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABulletRD_BegainOverlap, "BegainOverlap" }, // 1115123837
		{ &Z_Construct_UFunction_ABulletRD_BulletDestroy, "BulletDestroy" }, // 3049882160
		{ &Z_Construct_UFunction_ABulletRD_BulletHit, "BulletHit" }, // 61658624
		{ &Z_Construct_UFunction_ABulletRD_HitDestroy, "HitDestroy" }, // 1401553169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletRD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_BulletPartical = { "BulletPartical", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, BulletPartical), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletPartical_MetaData), NewProp_BulletPartical_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_projectileControl = { "projectileControl", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, projectileControl), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileControl_MetaData), NewProp_projectileControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, damageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageType_MetaData), NewProp_damageType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, lifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lifeTime_MetaData), NewProp_lifeTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_inpacktPartical = { "inpacktPartical", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, inpacktPartical), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inpacktPartical_MetaData), NewProp_inpacktPartical_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABulletRD_Statics::NewProp_timerHandle = { "timerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletRD, timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timerHandle_MetaData), NewProp_timerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletRD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_BulletPartical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_projectileControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_damageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_lifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_inpacktPartical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletRD_Statics::NewProp_timerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletRD_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ABulletRD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABulletRD_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABulletRD, ABulletRD::StaticClass, TEXT("ABulletRD"), &Z_Registration_Info_UClass_ABulletRD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletRD), 224672029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_1654377003(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
