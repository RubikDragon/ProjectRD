// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/Projectile/Projectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UProjectile();
PROJECTRD_API UClass* Z_Construct_UClass_UProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UProjectile Function FireProjetile ***********************************
struct Projectile_eventFireProjetile_Parms
{
	AActor* projectileFirer;
};
void IProjectile::FireProjetile(AActor* projectileFirer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireProjetile instead.");
}
static FName NAME_UProjectile_FireProjetile = FName(TEXT("FireProjetile"));
void IProjectile::Execute_FireProjetile(UObject* O, AActor* projectileFirer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UProjectile::StaticClass()));
	Projectile_eventFireProjetile_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UProjectile_FireProjetile);
	if (Func)
	{
		Parms.projectileFirer=projectileFirer;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IProjectile*)(O->GetNativeInterfaceAddress(UProjectile::StaticClass())))
	{
		I->FireProjetile_Implementation(projectileFirer);
	}
}
struct Z_Construct_UFunction_UProjectile_FireProjetile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Projectile/Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileFirer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectile_FireProjetile_Statics::NewProp_projectileFirer = { "projectileFirer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_eventFireProjetile_Parms, projectileFirer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectile_FireProjetile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectile_FireProjetile_Statics::NewProp_projectileFirer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectile_FireProjetile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectile_FireProjetile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UProjectile, nullptr, "FireProjetile", Z_Construct_UFunction_UProjectile_FireProjetile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectile_FireProjetile_Statics::PropPointers), sizeof(Projectile_eventFireProjetile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectile_FireProjetile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectile_FireProjetile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Projectile_eventFireProjetile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProjectile_FireProjetile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectile_FireProjetile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IProjectile::execFireProjetile)
{
	P_GET_OBJECT(AActor,Z_Param_projectileFirer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireProjetile_Implementation(Z_Param_projectileFirer);
	P_NATIVE_END;
}
// ********** End Interface UProjectile Function FireProjetile *************************************

// ********** Begin Interface UProjectile **********************************************************
void UProjectile::StaticRegisterNativesUProjectile()
{
	UClass* Class = UProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FireProjetile", &IProjectile::execFireProjetile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectile;
UClass* UProjectile::GetPrivateStaticClass()
{
	using TClass = UProjectile;
	if (!Z_Registration_Info_UClass_UProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Projectile"),
			Z_Registration_Info_UClass_UProjectile.InnerSingleton,
			StaticRegisterNativesUProjectile,
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
	return Z_Registration_Info_UClass_UProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectile_NoRegister()
{
	return UProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interface/Projectile/Projectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectile_FireProjetile, "FireProjetile" }, // 238194176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectile_Statics::ClassParams = {
	&UProjectile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectile()
{
	if (!Z_Registration_Info_UClass_UProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectile.OuterSingleton, Z_Construct_UClass_UProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectile.OuterSingleton;
}
UProjectile::UProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectile);
// ********** End Interface UProjectile ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectile, UProjectile::StaticClass, TEXT("UProjectile"), &Z_Registration_Info_UClass_UProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectile), 1354053017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h__Script_ProjectRD_2586600045(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
