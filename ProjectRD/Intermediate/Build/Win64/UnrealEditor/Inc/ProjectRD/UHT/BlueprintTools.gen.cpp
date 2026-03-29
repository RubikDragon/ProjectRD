// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintTools.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlueprintTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROJECTRD_API UClass* Z_Construct_UClass_UBlueprintTools();
PROJECTRD_API UClass* Z_Construct_UClass_UBlueprintTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlueprintTools Function ContainsTag *************************************
struct Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics
{
	struct BlueprintTools_eventContainsTag_Parms
	{
		AActor* actor;
		FString tag;
		bool debug;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BlueprintTools|Epual" },
		{ "ModuleRelativePath", "Public/BlueprintTools.h" },
		{ "ShortToolTip", "==Tag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
	static void NewProp_debug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_debug;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventContainsTag_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventContainsTag_Parms, tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_debug_SetBit(void* Obj)
{
	((BlueprintTools_eventContainsTag_Parms*)Obj)->debug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintTools_eventContainsTag_Parms), &Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_debug_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintTools_eventContainsTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintTools_eventContainsTag_Parms), &Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintTools, nullptr, "ContainsTag", Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::BlueprintTools_eventContainsTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::BlueprintTools_eventContainsTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTools_ContainsTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTools_ContainsTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintTools::execContainsTag)
{
	P_GET_OBJECT(AActor,Z_Param_actor);
	P_GET_PROPERTY(FStrProperty,Z_Param_tag);
	P_GET_UBOOL(Z_Param_debug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintTools::ContainsTag(Z_Param_actor,Z_Param_tag,Z_Param_debug);
	P_NATIVE_END;
}
// ********** End Class UBlueprintTools Function ContainsTag ***************************************

// ********** Begin Class UBlueprintTools Function GetChildActorClass ******************************
struct Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics
{
	struct BlueprintTools_eventGetChildActorClass_Parms
	{
		AActor* actor;
		TSubclassOf<AActor> chekingFor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BlueprintTools|Epual" },
		{ "ModuleRelativePath", "Public/BlueprintTools.h" },
		{ "ShortToolTip", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_chekingFor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventGetChildActorClass_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_chekingFor = { "chekingFor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventGetChildActorClass_Parms, chekingFor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintTools_eventGetChildActorClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintTools_eventGetChildActorClass_Parms), &Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_chekingFor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintTools, nullptr, "GetChildActorClass", Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::BlueprintTools_eventGetChildActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::BlueprintTools_eventGetChildActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTools_GetChildActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTools_GetChildActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintTools::execGetChildActorClass)
{
	P_GET_OBJECT(AActor,Z_Param_actor);
	P_GET_OBJECT(UClass,Z_Param_chekingFor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintTools::GetChildActorClass(Z_Param_actor,Z_Param_chekingFor);
	P_NATIVE_END;
}
// ********** End Class UBlueprintTools Function GetChildActorClass ********************************

// ********** Begin Class UBlueprintTools Function IsNotNull ***************************************
struct Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics
{
	struct BlueprintTools_eventIsNotNull_Parms
	{
		UObject* cheking;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BlueprintTools|Epual" },
		{ "ModuleRelativePath", "Public/BlueprintTools.h" },
		{ "ShortToolTip", "!NULL" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cheking;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_cheking = { "cheking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventIsNotNull_Parms, cheking), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintTools_eventIsNotNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintTools_eventIsNotNull_Parms), &Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_cheking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintTools, nullptr, "IsNotNull", Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::BlueprintTools_eventIsNotNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::BlueprintTools_eventIsNotNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTools_IsNotNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTools_IsNotNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintTools::execIsNotNull)
{
	P_GET_OBJECT(UObject,Z_Param_cheking);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintTools::IsNotNull(Z_Param_cheking);
	P_NATIVE_END;
}
// ********** End Class UBlueprintTools Function IsNotNull *****************************************

// ********** Begin Class UBlueprintTools Function StringEqual *************************************
struct Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics
{
	struct BlueprintTools_eventStringEqual_Parms
	{
		FString a;
		FString b;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BlueprintTools|Epual" },
		{ "ModuleRelativePath", "Public/BlueprintTools.h" },
		{ "ShortToolTip", "==Str" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_a;
	static const UECodeGen_Private::FStrPropertyParams NewProp_b;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventStringEqual_Parms, a), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintTools_eventStringEqual_Parms, b), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintTools_eventStringEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintTools_eventStringEqual_Parms), &Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_a,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlueprintTools, nullptr, "StringEqual", Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::BlueprintTools_eventStringEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::BlueprintTools_eventStringEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintTools_StringEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintTools_StringEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintTools::execStringEqual)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_a);
	P_GET_PROPERTY(FStrProperty,Z_Param_b);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintTools::StringEqual(Z_Param_a,Z_Param_b);
	P_NATIVE_END;
}
// ********** End Class UBlueprintTools Function StringEqual ***************************************

// ********** Begin Class UBlueprintTools **********************************************************
void UBlueprintTools::StaticRegisterNativesUBlueprintTools()
{
	UClass* Class = UBlueprintTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ContainsTag", &UBlueprintTools::execContainsTag },
		{ "GetChildActorClass", &UBlueprintTools::execGetChildActorClass },
		{ "IsNotNull", &UBlueprintTools::execIsNotNull },
		{ "StringEqual", &UBlueprintTools::execStringEqual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintTools;
UClass* UBlueprintTools::GetPrivateStaticClass()
{
	using TClass = UBlueprintTools;
	if (!Z_Registration_Info_UClass_UBlueprintTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlueprintTools"),
			Z_Registration_Info_UClass_UBlueprintTools.InnerSingleton,
			StaticRegisterNativesUBlueprintTools,
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
	return Z_Registration_Info_UClass_UBlueprintTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintTools_NoRegister()
{
	return UBlueprintTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlueprintTools.h" },
		{ "ModuleRelativePath", "Public/BlueprintTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintTools_ContainsTag, "ContainsTag" }, // 1505778225
		{ &Z_Construct_UFunction_UBlueprintTools_GetChildActorClass, "GetChildActorClass" }, // 989165444
		{ &Z_Construct_UFunction_UBlueprintTools_IsNotNull, "IsNotNull" }, // 2616470543
		{ &Z_Construct_UFunction_UBlueprintTools_StringEqual, "StringEqual" }, // 2457670070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintTools_Statics::ClassParams = {
	&UBlueprintTools::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintTools()
{
	if (!Z_Registration_Info_UClass_UBlueprintTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintTools.OuterSingleton, Z_Construct_UClass_UBlueprintTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintTools.OuterSingleton;
}
UBlueprintTools::UBlueprintTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintTools);
UBlueprintTools::~UBlueprintTools() {}
// ********** End Class UBlueprintTools ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintTools, UBlueprintTools::StaticClass, TEXT("UBlueprintTools"), &Z_Registration_Info_UClass_UBlueprintTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintTools), 1646057882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h__Script_ProjectRD_3393457559(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
