// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ObjectBar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectBar() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_UObjectBar();
PROJECTRD_API UClass* Z_Construct_UClass_UObjectBar_NoRegister();
PROJECTRD_API UScriptStruct* Z_Construct_UScriptStruct_FObjectColor();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FObjectColor ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FObjectColor;
class UScriptStruct* FObjectColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FObjectColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FObjectColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectColor, (UObject*)Z_Construct_UPackage__Script_ProjectRD(), TEXT("ObjectColor"));
	}
	return Z_Registration_Info_UScriptStruct_FObjectColor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FObjectColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onObjectActor_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectColor_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_onObjectActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_objectColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectColor_Statics::NewProp_onObjectActor = { "onObjectActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectColor, onObjectActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onObjectActor_MetaData), NewProp_onObjectActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectColor_Statics::NewProp_objectColor = { "objectColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectColor, objectColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectColor_MetaData), NewProp_objectColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColor_Statics::NewProp_onObjectActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColor_Statics::NewProp_objectColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
	nullptr,
	&NewStructOps,
	"ObjectColor",
	Z_Construct_UScriptStruct_FObjectColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColor_Statics::PropPointers),
	sizeof(FObjectColor),
	alignof(FObjectColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectColor()
{
	if (!Z_Registration_Info_UScriptStruct_FObjectColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FObjectColor.InnerSingleton, Z_Construct_UScriptStruct_FObjectColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FObjectColor.InnerSingleton;
}
// ********** End ScriptStruct FObjectColor ********************************************************

// ********** Begin Class UObjectBar Function ChangeMetter *****************************************
struct Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics
{
	struct ObjectBar_eventChangeMetter_Parms
	{
		TSubclassOf<AActor> actorPrefab;
		bool wasAdded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|Function" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorPrefab;
	static void NewProp_wasAdded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_wasAdded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_actorPrefab = { "actorPrefab", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectBar_eventChangeMetter_Parms, actorPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_wasAdded_SetBit(void* Obj)
{
	((ObjectBar_eventChangeMetter_Parms*)Obj)->wasAdded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_wasAdded = { "wasAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ObjectBar_eventChangeMetter_Parms), &Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_wasAdded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_actorPrefab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::NewProp_wasAdded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectBar, nullptr, "ChangeMetter", Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::ObjectBar_eventChangeMetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::ObjectBar_eventChangeMetter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectBar_ChangeMetter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectBar_ChangeMetter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectBar::execChangeMetter)
{
	P_GET_OBJECT(UClass,Z_Param_actorPrefab);
	P_GET_UBOOL(Z_Param_wasAdded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMetter(Z_Param_actorPrefab,Z_Param_wasAdded);
	P_NATIVE_END;
}
// ********** End Class UObjectBar Function ChangeMetter *******************************************

// ********** Begin Class UObjectBar Function SetMetter ********************************************
struct Z_Construct_UFunction_UObjectBar_SetMetter_Statics
{
	struct ObjectBar_eventSetMetter_Parms
	{
		TArray<TSubclassOf<AActor>> actorPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "_RD|Function" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorPtr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_actorPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjectBar_SetMetter_Statics::NewProp_actorPtr_Inner = { "actorPtr", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UObjectBar_SetMetter_Statics::NewProp_actorPtr = { "actorPtr", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectBar_eventSetMetter_Parms, actorPtr), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectBar_SetMetter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectBar_SetMetter_Statics::NewProp_actorPtr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectBar_SetMetter_Statics::NewProp_actorPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_SetMetter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectBar_SetMetter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectBar, nullptr, "SetMetter", Z_Construct_UFunction_UObjectBar_SetMetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_SetMetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectBar_SetMetter_Statics::ObjectBar_eventSetMetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectBar_SetMetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectBar_SetMetter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectBar_SetMetter_Statics::ObjectBar_eventSetMetter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectBar_SetMetter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectBar_SetMetter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectBar::execSetMetter)
{
	P_GET_TARRAY(TSubclassOf<AActor>,Z_Param_actorPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetter(Z_Param_actorPtr);
	P_NATIVE_END;
}
// ********** End Class UObjectBar Function SetMetter **********************************************

// ********** Begin Class UObjectBar ***************************************************************
void UObjectBar::StaticRegisterNativesUObjectBar()
{
	UClass* Class = UObjectBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMetter", &UObjectBar::execChangeMetter },
		{ "SetMetter", &UObjectBar::execSetMetter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectBar;
UClass* UObjectBar::GetPrivateStaticClass()
{
	using TClass = UObjectBar;
	if (!Z_Registration_Info_UClass_UObjectBar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectBar"),
			Z_Registration_Info_UClass_UObjectBar.InnerSingleton,
			StaticRegisterNativesUObjectBar,
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
	return Z_Registration_Info_UClass_UObjectBar.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectBar_NoRegister()
{
	return UObjectBar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ObjectBar.h" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lineSettings_MetaData[] = {
		{ "Category", "_RD|Line" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TObjectPtr<UWidget> GetPrevieosWidget();\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TObjectPtr<UWidget> GetPrevieosWidget();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lineSizeVector_MetaData[] = {
		{ "Category", "_RD|Line" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lineFillMissingSpace_MetaData[] = {
		{ "Category", "_RD|Line" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rewirseOrdor_MetaData[] = {
		{ "Category", "_RD|Line" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainBordorColor_MetaData[] = {
		{ "Category", "_RD|Apperince" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_up_MetaData[] = {
		{ "Category", "_RD|Apperince|Line Padding" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_down_MetaData[] = {
		{ "Category", "_RD|Apperince|Line Padding" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_left_MetaData[] = {
		{ "Category", "_RD|Apperince|Line Padding" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_right_MetaData[] = {
		{ "Category", "_RD|Apperince|Line Padding" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainBordor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "_RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_activeCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_objectLines_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if/ when posseblue cut this down to UUSerWigdet or samaler\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if/ when posseblue cut this down to UUSerWigdet or samaler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxLinesIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lineIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isUserWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inatalGetLines_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_loopTally_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/ObjectBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lineSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_lineSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_lineSizeVector;
	static void NewProp_lineFillMissingSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_lineFillMissingSpace;
	static void NewProp_rewirseOrdor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_rewirseOrdor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mainBordorColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_up;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_down;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_left;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_right;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainBordor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectGrid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_activeCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_objectLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_objectLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxLinesIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_lineIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_isUserWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inatalGetLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_inatalGetLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_loopTally;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectBar_ChangeMetter, "ChangeMetter" }, // 2512903295
		{ &Z_Construct_UFunction_UObjectBar_SetMetter, "SetMetter" }, // 2386882859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSettings_Inner = { "lineSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjectColor, METADATA_PARAMS(0, nullptr) }; // 746464672
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSettings = { "lineSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, lineSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lineSettings_MetaData), NewProp_lineSettings_MetaData) }; // 746464672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSizeVector = { "lineSizeVector", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, lineSizeVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lineSizeVector_MetaData), NewProp_lineSizeVector_MetaData) };
void Z_Construct_UClass_UObjectBar_Statics::NewProp_lineFillMissingSpace_SetBit(void* Obj)
{
	((UObjectBar*)Obj)->lineFillMissingSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_lineFillMissingSpace = { "lineFillMissingSpace", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectBar), &Z_Construct_UClass_UObjectBar_Statics::NewProp_lineFillMissingSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lineFillMissingSpace_MetaData), NewProp_lineFillMissingSpace_MetaData) };
void Z_Construct_UClass_UObjectBar_Statics::NewProp_rewirseOrdor_SetBit(void* Obj)
{
	((UObjectBar*)Obj)->rewirseOrdor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_rewirseOrdor = { "rewirseOrdor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UObjectBar), &Z_Construct_UClass_UObjectBar_Statics::NewProp_rewirseOrdor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rewirseOrdor_MetaData), NewProp_rewirseOrdor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_mainBordorColor = { "mainBordorColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, mainBordorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainBordorColor_MetaData), NewProp_mainBordorColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_up = { "up", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, up), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_up_MetaData), NewProp_up_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_down = { "down", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, down), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_down_MetaData), NewProp_down_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_left_MetaData), NewProp_left_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_right_MetaData), NewProp_right_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_MainBordor = { "MainBordor", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, MainBordor), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainBordor_MetaData), NewProp_MainBordor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_ObjectGrid = { "ObjectGrid", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, ObjectGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectGrid_MetaData), NewProp_ObjectGrid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_activeCount = { "activeCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, activeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_activeCount_MetaData), NewProp_activeCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_objectLines_Inner = { "objectLines", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_objectLines = { "objectLines", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, objectLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_objectLines_MetaData), NewProp_objectLines_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_maxLinesIndex = { "maxLinesIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, maxLinesIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxLinesIndex_MetaData), NewProp_maxLinesIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_lineIndex = { "lineIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, lineIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lineIndex_MetaData), NewProp_lineIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_isUserWidget = { "isUserWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, isUserWidget), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isUserWidget_MetaData), NewProp_isUserWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_inatalGetLines_Inner = { "inatalGetLines", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_inatalGetLines = { "inatalGetLines", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, inatalGetLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inatalGetLines_MetaData), NewProp_inatalGetLines_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectBar_Statics::NewProp_loopTally = { "loopTally", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectBar, loopTally), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_loopTally_MetaData), NewProp_loopTally_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_lineSizeVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_lineFillMissingSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_rewirseOrdor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_mainBordorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_down,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_MainBordor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_ObjectGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_activeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_objectLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_objectLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_maxLinesIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_lineIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_isUserWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_inatalGetLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_inatalGetLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectBar_Statics::NewProp_loopTally,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectBar_Statics::ClassParams = {
	&UObjectBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UObjectBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectBar()
{
	if (!Z_Registration_Info_UClass_UObjectBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectBar.OuterSingleton, Z_Construct_UClass_UObjectBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectBar.OuterSingleton;
}
UObjectBar::UObjectBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectBar);
UObjectBar::~UObjectBar() {}
// ********** End Class UObjectBar *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectColor::StaticStruct, Z_Construct_UScriptStruct_FObjectColor_Statics::NewStructOps, TEXT("ObjectColor"), &Z_Registration_Info_UScriptStruct_FObjectColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectColor), 746464672U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectBar, UObjectBar::StaticClass, TEXT("UObjectBar"), &Z_Registration_Info_UClass_UObjectBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectBar), 4269358302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_3830679285(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h__Script_ProjectRD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
