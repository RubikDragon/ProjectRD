// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/MoveActorPannel.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoveActorPannel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTRD_API UClass* Z_Construct_UClass_AMoveActorPannel();
PROJECTRD_API UClass* Z_Construct_UClass_AMoveActorPannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMoveActorPannel Function BegainOverlap **********************************
struct Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics
{
	struct MoveActorPannel_eventBegainOverlap_Parms
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = \"_RD\") EColliderShape* collideShape;\n" },
#endif
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"_RD\") EColliderShape* collideShape;" },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_overlapComponent = { "overlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveActorPannel_eventBegainOverlap_Parms, overlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_overlapComponent_MetaData), NewProp_overlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveActorPannel_eventBegainOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveActorPannel_eventBegainOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_otherComp_MetaData), NewProp_otherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveActorPannel_eventBegainOverlap_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MoveActorPannel_eventBegainOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoveActorPannel_eventBegainOverlap_Parms), &Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveActorPannel_eventBegainOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sweepResult_MetaData), NewProp_sweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_overlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_otherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::NewProp_sweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMoveActorPannel, nullptr, "BegainOverlap", Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::MoveActorPannel_eventBegainOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::MoveActorPannel_eventBegainOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoveActorPannel_BegainOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveActorPannel_BegainOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoveActorPannel::execBegainOverlap)
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
// ********** End Class AMoveActorPannel Function BegainOverlap ************************************

// ********** Begin Class AMoveActorPannel *********************************************************
void AMoveActorPannel::StaticRegisterNativesAMoveActorPannel()
{
	UClass* Class = AMoveActorPannel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BegainOverlap", &AMoveActorPannel::execBegainOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMoveActorPannel;
UClass* AMoveActorPannel::GetPrivateStaticClass()
{
	using TClass = AMoveActorPannel;
	if (!Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoveActorPannel"),
			Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton,
			StaticRegisterNativesAMoveActorPannel,
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
	return Z_Registration_Info_UClass_AMoveActorPannel.InnerSingleton;
}
UClass* Z_Construct_UClass_AMoveActorPannel_NoRegister()
{
	return AMoveActorPannel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMoveActorPannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MoveActorPannel.h" },
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boxCollider_MetaData[] = {
		{ "Category", "_RD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[] = {
		{ "Category", "_RD|Force" },
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveForce_MetaData[] = {
		{ "Category", "_RD|Force" },
		{ "ModuleRelativePath", "Public/Actors/MoveActorPannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_boxCollider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoveActorPannel_BegainOverlap, "BegainOverlap" }, // 1084129769
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveActorPannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_boxCollider = { "boxCollider", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, boxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boxCollider_MetaData), NewProp_boxCollider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveDirection_MetaData), NewProp_moveDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveForce = { "moveForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveActorPannel, moveForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveForce_MetaData), NewProp_moveForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_boxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveActorPannel_Statics::NewProp_moveForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveActorPannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveActorPannel_Statics::ClassParams = {
	&AMoveActorPannel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveActorPannel_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveActorPannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveActorPannel()
{
	if (!Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton, Z_Construct_UClass_AMoveActorPannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveActorPannel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveActorPannel);
AMoveActorPannel::~AMoveActorPannel() {}
// ********** End Class AMoveActorPannel ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveActorPannel, AMoveActorPannel::StaticClass, TEXT("AMoveActorPannel"), &Z_Registration_Info_UClass_AMoveActorPannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveActorPannel), 2819165699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_1855337746(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Actors_MoveActorPannel_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
