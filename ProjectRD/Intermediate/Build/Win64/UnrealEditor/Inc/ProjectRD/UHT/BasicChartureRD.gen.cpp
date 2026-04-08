// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomCharture/BasicChartureRD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasicChartureRD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PROJECTRD_API UClass* Z_Construct_UClass_ABasicChartureRD();
PROJECTRD_API UClass* Z_Construct_UClass_ABasicChartureRD_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABasicChartureRD Function ChartureJump ***********************************
struct Z_Construct_UFunction_ABasicChartureRD_ChartureJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|BasicAbilty" },
		{ "ModuleRelativePath", "Public/CustomCharture/BasicChartureRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicChartureRD_ChartureJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasicChartureRD, nullptr, "ChartureJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicChartureRD_ChartureJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasicChartureRD_ChartureJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABasicChartureRD_ChartureJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicChartureRD_ChartureJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasicChartureRD::execChartureJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChartureJump();
	P_NATIVE_END;
}
// ********** End Class ABasicChartureRD Function ChartureJump *************************************

// ********** Begin Class ABasicChartureRD Function ChartureWark ***********************************
struct Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics
{
	struct BasicChartureRD_eventChartureWark_Parms
	{
		FVector2D moveDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|BasicAbilty" },
		{ "ModuleRelativePath", "Public/CustomCharture/BasicChartureRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicChartureRD_eventChartureWark_Parms, moveDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::NewProp_moveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABasicChartureRD, nullptr, "ChartureWark", Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::BasicChartureRD_eventChartureWark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::BasicChartureRD_eventChartureWark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABasicChartureRD_ChartureWark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABasicChartureRD_ChartureWark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABasicChartureRD::execChartureWark)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_moveDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChartureWark(Z_Param_Out_moveDirection);
	P_NATIVE_END;
}
// ********** End Class ABasicChartureRD Function ChartureWark *************************************

// ********** Begin Class ABasicChartureRD *********************************************************
void ABasicChartureRD::StaticRegisterNativesABasicChartureRD()
{
	UClass* Class = ABasicChartureRD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChartureJump", &ABasicChartureRD::execChartureJump },
		{ "ChartureWark", &ABasicChartureRD::execChartureWark },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABasicChartureRD;
UClass* ABasicChartureRD::GetPrivateStaticClass()
{
	using TClass = ABasicChartureRD;
	if (!Z_Registration_Info_UClass_ABasicChartureRD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasicChartureRD"),
			Z_Registration_Info_UClass_ABasicChartureRD.InnerSingleton,
			StaticRegisterNativesABasicChartureRD,
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
	return Z_Registration_Info_UClass_ABasicChartureRD.InnerSingleton;
}
UClass* Z_Construct_UClass_ABasicChartureRD_NoRegister()
{
	return ABasicChartureRD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABasicChartureRD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CustomCharture/BasicChartureRD.h" },
		{ "ModuleRelativePath", "Public/CustomCharture/BasicChartureRD.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicChartureRD_ChartureJump, "ChartureJump" }, // 3803706933
		{ &Z_Construct_UFunction_ABasicChartureRD_ChartureWark, "ChartureWark" }, // 3350226777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicChartureRD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABasicChartureRD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChartureRD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicChartureRD_Statics::ClassParams = {
	&ABasicChartureRD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChartureRD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicChartureRD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasicChartureRD()
{
	if (!Z_Registration_Info_UClass_ABasicChartureRD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicChartureRD.OuterSingleton, Z_Construct_UClass_ABasicChartureRD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasicChartureRD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicChartureRD);
ABasicChartureRD::~ABasicChartureRD() {}
// ********** End Class ABasicChartureRD ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_CustomCharture_BasicChartureRD_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasicChartureRD, ABasicChartureRD::StaticClass, TEXT("ABasicChartureRD"), &Z_Registration_Info_UClass_ABasicChartureRD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicChartureRD), 88963890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_CustomCharture_BasicChartureRD_h__Script_ProjectRD_864422461(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_CustomCharture_BasicChartureRD_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_CustomCharture_BasicChartureRD_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
