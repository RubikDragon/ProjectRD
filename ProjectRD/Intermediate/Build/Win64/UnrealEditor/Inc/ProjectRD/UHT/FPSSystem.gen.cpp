// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSSystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem();
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UFPSSystem Function Reload *******************************************
void IFPSSystem::Reload()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Reload instead.");
}
static FName NAME_UFPSSystem_Reload = FName(TEXT("Reload"));
void IFPSSystem::Execute_Reload(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFPSSystem::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFPSSystem_Reload);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFPSSystem*)(O->GetNativeInterfaceAddress(UFPSSystem::StaticClass())))
	{
		I->Reload_Implementation();
	}
}
struct Z_Construct_UFunction_UFPSSystem_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSSystem_Reload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFPSSystem, nullptr, "Reload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSSystem_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSSystem_Reload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFPSSystem_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSSystem_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFPSSystem::execReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reload_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFPSSystem Function Reload *********************************************

// ********** Begin Interface UFPSSystem Function SetBulletSpawnPorstion ***************************
struct FPSSystem_eventSetBulletSpawnPorstion_Parms
{
	USceneComponent* SceneComponent;
};
void IFPSSystem::SetBulletSpawnPorstion(USceneComponent* SceneComponent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetBulletSpawnPorstion instead.");
}
static FName NAME_UFPSSystem_SetBulletSpawnPorstion = FName(TEXT("SetBulletSpawnPorstion"));
void IFPSSystem::Execute_SetBulletSpawnPorstion(UObject* O, USceneComponent* SceneComponent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFPSSystem::StaticClass()));
	FPSSystem_eventSetBulletSpawnPorstion_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFPSSystem_SetBulletSpawnPorstion);
	if (Func)
	{
		Parms.SceneComponent=SceneComponent;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IFPSSystem*)(O->GetNativeInterfaceAddress(UFPSSystem::StaticClass())))
	{
		I->SetBulletSpawnPorstion_Implementation(SceneComponent);
	}
}
struct Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSSystem_eventSetBulletSpawnPorstion_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFPSSystem, nullptr, "SetBulletSpawnPorstion", Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::PropPointers), sizeof(FPSSystem_eventSetBulletSpawnPorstion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FPSSystem_eventSetBulletSpawnPorstion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFPSSystem::execSetBulletSpawnPorstion)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletSpawnPorstion_Implementation(Z_Param_SceneComponent);
	P_NATIVE_END;
}
// ********** End Interface UFPSSystem Function SetBulletSpawnPorstion *****************************

// ********** Begin Interface UFPSSystem Function Shoot ********************************************
void IFPSSystem::Shoot()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Shoot instead.");
}
static FName NAME_UFPSSystem_Shoot = FName(TEXT("Shoot"));
void IFPSSystem::Execute_Shoot(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFPSSystem::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFPSSystem_Shoot);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFPSSystem*)(O->GetNativeInterfaceAddress(UFPSSystem::StaticClass())))
	{
		I->Shoot_Implementation();
	}
}
struct Z_Construct_UFunction_UFPSSystem_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSSystem_Shoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFPSSystem, nullptr, "Shoot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSSystem_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSSystem_Shoot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFPSSystem_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSSystem_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFPSSystem::execShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shoot_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFPSSystem Function Shoot **********************************************

// ********** Begin Interface UFPSSystem ***********************************************************
void UFPSSystem::StaticRegisterNativesUFPSSystem()
{
	UClass* Class = UFPSSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Reload", &IFPSSystem::execReload },
		{ "SetBulletSpawnPorstion", &IFPSSystem::execSetBulletSpawnPorstion },
		{ "Shoot", &IFPSSystem::execShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFPSSystem;
UClass* UFPSSystem::GetPrivateStaticClass()
{
	using TClass = UFPSSystem;
	if (!Z_Registration_Info_UClass_UFPSSystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSSystem"),
			Z_Registration_Info_UClass_UFPSSystem.InnerSingleton,
			StaticRegisterNativesUFPSSystem,
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
	return Z_Registration_Info_UClass_UFPSSystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFPSSystem_NoRegister()
{
	return UFPSSystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFPSSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FPSSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSSystem_Reload, "Reload" }, // 2241246210
		{ &Z_Construct_UFunction_UFPSSystem_SetBulletSpawnPorstion, "SetBulletSpawnPorstion" }, // 2368802672
		{ &Z_Construct_UFunction_UFPSSystem_Shoot, "Shoot" }, // 412607240
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFPSSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFPSSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSSystem_Statics::ClassParams = {
	&UFPSSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFPSSystem()
{
	if (!Z_Registration_Info_UClass_UFPSSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSSystem.OuterSingleton, Z_Construct_UClass_UFPSSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFPSSystem.OuterSingleton;
}
UFPSSystem::UFPSSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSSystem);
// ********** End Interface UFPSSystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFPSSystem, UFPSSystem::StaticClass, TEXT("UFPSSystem"), &Z_Registration_Info_UClass_UFPSSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSSystem), 836489139U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h__Script_ProjectRD_2044358529(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
