// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/Projectile/ReturnBullet.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReturnBullet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_AReturnBullet();
PROJECTRD_API UClass* Z_Construct_UClass_AReturnBullet_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UHealtSystem_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AReturnBullet Function BegainOverlap *************************************
struct Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics
{
	struct ReturnBullet_eventBegainOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_overlapComponent = { "overlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventBegainOverlap_Parms, overlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overlapComponent_MetaData), NewProp_overlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventBegainOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventBegainOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventBegainOverlap_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ReturnBullet_eventBegainOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReturnBullet_eventBegainOverlap_Parms), &Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventBegainOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sweepResult_MetaData), NewProp_sweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_overlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_otherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::NewProp_sweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "BegainOverlap", Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::ReturnBullet_eventBegainOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::ReturnBullet_eventBegainOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AReturnBullet_BegainOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_BegainOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execBegainOverlap)
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
// ********** End Class AReturnBullet Function BegainOverlap ***************************************

// ********** Begin Class AReturnBullet Function BulletGoBackwords *********************************
struct Z_Construct_UFunction_AReturnBullet_BulletGoBackwords_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|Function" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_BulletGoBackwords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "BulletGoBackwords", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_BulletGoBackwords_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_BulletGoBackwords_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AReturnBullet_BulletGoBackwords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_BulletGoBackwords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execBulletGoBackwords)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BulletGoBackwords();
	P_NATIVE_END;
}
// ********** End Class AReturnBullet Function BulletGoBackwords ***********************************

// ********** Begin Class AReturnBullet Function DestroyProjectile *********************************
struct Z_Construct_UFunction_AReturnBullet_DestroyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|Function" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_DestroyProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "DestroyProjectile", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_DestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_DestroyProjectile_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AReturnBullet_DestroyProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_DestroyProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execDestroyProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyProjectile();
	P_NATIVE_END;
}
// ********** End Class AReturnBullet Function DestroyProjectile ***********************************

// ********** Begin Class AReturnBullet Function FireProjetile_Implementation **********************
struct Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics
{
	struct ReturnBullet_eventFireProjetile_Implementation_Parms
	{
		AActor* projectileFirer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileFirer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::NewProp_projectileFirer = { "projectileFirer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnBullet_eventFireProjetile_Implementation_Parms, projectileFirer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::NewProp_projectileFirer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "FireProjetile_Implementation", Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::ReturnBullet_eventFireProjetile_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::ReturnBullet_eventFireProjetile_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execFireProjetile_Implementation)
{
	P_GET_OBJECT(AActor,Z_Param_projectileFirer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireProjetile_Implementation(Z_Param_projectileFirer);
	P_NATIVE_END;
}
// ********** End Class AReturnBullet Function FireProjetile_Implementation ************************

// ********** Begin Class AReturnBullet Function Pirse *********************************************
struct Z_Construct_UFunction_AReturnBullet_Pirse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_Pirse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "Pirse", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_Pirse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_Pirse_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AReturnBullet_Pirse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_Pirse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execPirse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pirse();
	P_NATIVE_END;
}
// ********** End Class AReturnBullet Function Pirse ***********************************************

// ********** Begin Class AReturnBullet Function SetPirseCooldown **********************************
struct Z_Construct_UFunction_AReturnBullet_SetPirseCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|Function" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AReturnBullet_SetPirseCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AReturnBullet, nullptr, "SetPirseCooldown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AReturnBullet_SetPirseCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AReturnBullet_SetPirseCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AReturnBullet_SetPirseCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AReturnBullet_SetPirseCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AReturnBullet::execSetPirseCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPirseCooldown();
	P_NATIVE_END;
}
// ********** End Class AReturnBullet Function SetPirseCooldown ************************************

// ********** Begin Class AReturnBullet ************************************************************
void AReturnBullet::StaticRegisterNativesAReturnBullet()
{
	UClass* Class = AReturnBullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BegainOverlap", &AReturnBullet::execBegainOverlap },
		{ "BulletGoBackwords", &AReturnBullet::execBulletGoBackwords },
		{ "DestroyProjectile", &AReturnBullet::execDestroyProjectile },
		{ "FireProjetile_Implementation", &AReturnBullet::execFireProjetile_Implementation },
		{ "Pirse", &AReturnBullet::execPirse },
		{ "SetPirseCooldown", &AReturnBullet::execSetPirseCooldown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AReturnBullet;
UClass* AReturnBullet::GetPrivateStaticClass()
{
	using TClass = AReturnBullet;
	if (!Z_Registration_Info_UClass_AReturnBullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReturnBullet"),
			Z_Registration_Info_UClass_AReturnBullet.InnerSingleton,
			StaticRegisterNativesAReturnBullet,
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
	return Z_Registration_Info_UClass_AReturnBullet.InnerSingleton;
}
UClass* Z_Construct_UClass_AReturnBullet_NoRegister()
{
	return AReturnBullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AReturnBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interface/Projectile/ReturnBullet.h" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxPirse_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canHitShotterActor_MetaData[] = {
		{ "Category", "_RD|States" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initalSpeed_MetaData[] = {
		{ "Category", "_RD|States|Speed" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[] = {
		{ "Category", "_RD|States|Speed" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_returnTime_MetaData[] = {
		{ "Category", "_RD|States|Timers" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lifeTime_MetaData[] = {
		{ "Category", "_RD|States|Timers" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pirseCooldownTimer_MetaData[] = {
		{ "Category", "_RD|States|Timers" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bulletPartical_MetaData[] = {
		{ "Category", "_RD|Componets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileMover_MetaData[] = {
		{ "Category", "_RD|Componets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sphereCollision_MetaData[] = {
		{ "Category", "_RD|Componets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotByActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pirsesLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onPirseCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_returnTH_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// timers\n" },
#endif
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pirseCooldownTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileLifeTimeTH_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healtSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/ReturnBullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxPirse;
	static void NewProp_canHitShotterActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canHitShotterActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_initalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_returnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pirseCooldownTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletPartical;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileMover;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotByActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pirsesLeft;
	static void NewProp_onPirseCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_onPirseCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_returnTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pirseCooldownTH;
	static const UECodeGen_Private::FStructPropertyParams NewProp_projectileLifeTimeTH;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_healtSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AReturnBullet_BegainOverlap, "BegainOverlap" }, // 2428640333
		{ &Z_Construct_UFunction_AReturnBullet_BulletGoBackwords, "BulletGoBackwords" }, // 966573954
		{ &Z_Construct_UFunction_AReturnBullet_DestroyProjectile, "DestroyProjectile" }, // 671930381
		{ &Z_Construct_UFunction_AReturnBullet_FireProjetile_Implementation, "FireProjetile_Implementation" }, // 1523435864
		{ &Z_Construct_UFunction_AReturnBullet_Pirse, "Pirse" }, // 99989694
		{ &Z_Construct_UFunction_AReturnBullet_SetPirseCooldown, "SetPirseCooldown" }, // 3103070012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReturnBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_maxPirse = { "maxPirse", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, maxPirse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxPirse_MetaData), NewProp_maxPirse_MetaData) };
void Z_Construct_UClass_AReturnBullet_Statics::NewProp_canHitShotterActor_SetBit(void* Obj)
{
	((AReturnBullet*)Obj)->canHitShotterActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_canHitShotterActor = { "canHitShotterActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AReturnBullet), &Z_Construct_UClass_AReturnBullet_Statics::NewProp_canHitShotterActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canHitShotterActor_MetaData), NewProp_canHitShotterActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_initalSpeed = { "initalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, initalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initalSpeed_MetaData), NewProp_initalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, maxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSpeed_MetaData), NewProp_maxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_returnTime = { "returnTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, returnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_returnTime_MetaData), NewProp_returnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, lifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lifeTime_MetaData), NewProp_lifeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirseCooldownTimer = { "pirseCooldownTimer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, pirseCooldownTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pirseCooldownTimer_MetaData), NewProp_pirseCooldownTimer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_bulletPartical = { "bulletPartical", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, bulletPartical), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bulletPartical_MetaData), NewProp_bulletPartical_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_projectileMover = { "projectileMover", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, projectileMover), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileMover_MetaData), NewProp_projectileMover_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_sphereCollision = { "sphereCollision", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, sphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sphereCollision_MetaData), NewProp_sphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_shotByActor = { "shotByActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, shotByActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotByActor_MetaData), NewProp_shotByActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirsesLeft = { "pirsesLeft", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, pirsesLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pirsesLeft_MetaData), NewProp_pirsesLeft_MetaData) };
void Z_Construct_UClass_AReturnBullet_Statics::NewProp_onPirseCooldown_SetBit(void* Obj)
{
	((AReturnBullet*)Obj)->onPirseCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_onPirseCooldown = { "onPirseCooldown", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AReturnBullet), &Z_Construct_UClass_AReturnBullet_Statics::NewProp_onPirseCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onPirseCooldown_MetaData), NewProp_onPirseCooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_returnTH = { "returnTH", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, returnTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_returnTH_MetaData), NewProp_returnTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirseCooldownTH = { "pirseCooldownTH", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, pirseCooldownTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pirseCooldownTH_MetaData), NewProp_pirseCooldownTH_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_projectileLifeTimeTH = { "projectileLifeTimeTH", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, projectileLifeTimeTH), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileLifeTimeTH_MetaData), NewProp_projectileLifeTimeTH_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReturnBullet_Statics::NewProp_healtSystem = { "healtSystem", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReturnBullet, healtSystem), Z_Construct_UClass_UHealtSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healtSystem_MetaData), NewProp_healtSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReturnBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_maxPirse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_canHitShotterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_initalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_maxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_returnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_lifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirseCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_bulletPartical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_projectileMover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_sphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_shotByActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirsesLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_onPirseCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_returnTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_pirseCooldownTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_projectileLifeTimeTH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReturnBullet_Statics::NewProp_healtSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReturnBullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AReturnBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReturnBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AReturnBullet_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UProjectile_NoRegister, (int32)VTABLE_OFFSET(AReturnBullet, IProjectile), false },  // 1354053017
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AReturnBullet_Statics::ClassParams = {
	&AReturnBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AReturnBullet_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AReturnBullet_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReturnBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AReturnBullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AReturnBullet()
{
	if (!Z_Registration_Info_UClass_AReturnBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReturnBullet.OuterSingleton, Z_Construct_UClass_AReturnBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AReturnBullet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AReturnBullet);
AReturnBullet::~AReturnBullet() {}
// ********** End Class AReturnBullet **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AReturnBullet, AReturnBullet::StaticClass, TEXT("AReturnBullet"), &Z_Registration_Info_UClass_AReturnBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReturnBullet), 868426558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h__Script_ProjectRD_1172079443(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
