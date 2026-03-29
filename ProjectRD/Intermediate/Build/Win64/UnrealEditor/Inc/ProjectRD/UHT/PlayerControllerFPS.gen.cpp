// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerControllerFPS.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerControllerFPS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerControllerFPS();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerControllerFPS_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerControllerFPS Function HandleJump *********************************
struct Z_Construct_UFunction_APlayerControllerFPS_HandleJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_HandleJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "HandleJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_HandleJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerControllerFPS_HandleJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_HandleJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execHandleJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleJump();
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function HandleJump ***********************************

// ********** Begin Class APlayerControllerFPS Function HandleLookAround ***************************
struct Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics
{
	struct PlayerControllerFPS_eventHandleLookAround_Parms
	{
		FInputActionValue lookInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::NewProp_lookInput = { "lookInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerControllerFPS_eventHandleLookAround_Parms, lookInput), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookInput_MetaData), NewProp_lookInput_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::NewProp_lookInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "HandleLookAround", Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PlayerControllerFPS_eventHandleLookAround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::PlayerControllerFPS_eventHandleLookAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execHandleLookAround)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_lookInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLookAround(Z_Param_Out_lookInput);
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function HandleLookAround *****************************

// ********** Begin Class APlayerControllerFPS Function HandleMovemment ****************************
struct Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics
{
	struct PlayerControllerFPS_eventHandleMovemment_Parms
	{
		FInputActionValue moveInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::NewProp_moveInput = { "moveInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerControllerFPS_eventHandleMovemment_Parms, moveInput), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveInput_MetaData), NewProp_moveInput_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::NewProp_moveInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "HandleMovemment", Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PlayerControllerFPS_eventHandleMovemment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::PlayerControllerFPS_eventHandleMovemment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execHandleMovemment)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_moveInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMovemment(Z_Param_Out_moveInput);
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function HandleMovemment ******************************

// ********** Begin Class APlayerControllerFPS Function HandleReload *******************************
struct Z_Construct_UFunction_APlayerControllerFPS_HandleReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_HandleReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "HandleReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_HandleReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerControllerFPS_HandleReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_HandleReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execHandleReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleReload();
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function HandleReload *********************************

// ********** Begin Class APlayerControllerFPS Function HandleShoot ********************************
struct Z_Construct_UFunction_APlayerControllerFPS_HandleShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_HandleShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "HandleShoot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_HandleShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_HandleShoot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerControllerFPS_HandleShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_HandleShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execHandleShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleShoot();
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function HandleShoot **********************************

// ********** Begin Class APlayerControllerFPS Function SetupBindes ********************************
struct Z_Construct_UFunction_APlayerControllerFPS_SetupBindes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bindes all the Actions to there caller\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bindes all the Actions to there caller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerFPS_SetupBindes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerFPS, nullptr, "SetupBindes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerFPS_SetupBindes_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerFPS_SetupBindes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerControllerFPS_SetupBindes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerFPS_SetupBindes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerFPS::execSetupBindes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupBindes();
	P_NATIVE_END;
}
// ********** End Class APlayerControllerFPS Function SetupBindes **********************************

// ********** Begin Class APlayerControllerFPS *****************************************************
void APlayerControllerFPS::StaticRegisterNativesAPlayerControllerFPS()
{
	UClass* Class = APlayerControllerFPS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleJump", &APlayerControllerFPS::execHandleJump },
		{ "HandleLookAround", &APlayerControllerFPS::execHandleLookAround },
		{ "HandleMovemment", &APlayerControllerFPS::execHandleMovemment },
		{ "HandleReload", &APlayerControllerFPS::execHandleReload },
		{ "HandleShoot", &APlayerControllerFPS::execHandleShoot },
		{ "SetupBindes", &APlayerControllerFPS::execSetupBindes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerControllerFPS;
UClass* APlayerControllerFPS::GetPrivateStaticClass()
{
	using TClass = APlayerControllerFPS;
	if (!Z_Registration_Info_UClass_APlayerControllerFPS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerControllerFPS"),
			Z_Registration_Info_UClass_APlayerControllerFPS.InnerSingleton,
			StaticRegisterNativesAPlayerControllerFPS,
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
	return Z_Registration_Info_UClass_APlayerControllerFPS.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerControllerFPS_NoRegister()
{
	return APlayerControllerFPS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerControllerFPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerControllerFPS.h" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "RD|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// why is this sort object and not just object\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "why is this sort object and not just object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[] = {
		{ "Category", "RD|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveTrigger_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookTrigger_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpTrigger_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shootAction_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shootingTrigger_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadAction_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reloadTrigger_MetaData[] = {
		{ "Category", "RD|Input" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCharture_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enhancedInputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Used to store a refence to the InputComponet cast to an EnhancedInputComponent\n/// </summary>\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nUsed to store a refence to the InputComponet cast to an EnhancedInputComponent\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movemmentVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAroundVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerControllerFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_moveTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_moveTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_lookTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_lookTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_jumpTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_jumpTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shootAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_shootingTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_shootingTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_reloadAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_reloadTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_reloadTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCharture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_enhancedInputComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_movemmentVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookAroundVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerControllerFPS_HandleJump, "HandleJump" }, // 1454313237
		{ &Z_Construct_UFunction_APlayerControllerFPS_HandleLookAround, "HandleLookAround" }, // 3760789897
		{ &Z_Construct_UFunction_APlayerControllerFPS_HandleMovemment, "HandleMovemment" }, // 2966688977
		{ &Z_Construct_UFunction_APlayerControllerFPS_HandleReload, "HandleReload" }, // 2818707127
		{ &Z_Construct_UFunction_APlayerControllerFPS_HandleShoot, "HandleShoot" }, // 1997750245
		{ &Z_Construct_UFunction_APlayerControllerFPS_SetupBindes, "SetupBindes" }, // 976766719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveAction_MetaData), NewProp_moveAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveTrigger = { "moveTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, moveTrigger), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveTrigger_MetaData), NewProp_moveTrigger_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAction_MetaData), NewProp_lookAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookTrigger = { "lookTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, lookTrigger), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookTrigger_MetaData), NewProp_lookTrigger_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAction_MetaData), NewProp_jumpAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpTrigger = { "jumpTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, jumpTrigger), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpTrigger_MetaData), NewProp_jumpTrigger_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootAction = { "shootAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, shootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shootAction_MetaData), NewProp_shootAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootingTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootingTrigger = { "shootingTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, shootingTrigger), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shootingTrigger_MetaData), NewProp_shootingTrigger_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadAction = { "reloadAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, reloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadAction_MetaData), NewProp_reloadAction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadTrigger = { "reloadTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, reloadTrigger), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reloadTrigger_MetaData), NewProp_reloadTrigger_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_playerCharture = { "playerCharture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, playerCharture), Z_Construct_UClass_APlayerChartureFPS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCharture_MetaData), NewProp_playerCharture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_enhancedInputComponent = { "enhancedInputComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, enhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enhancedInputComponent_MetaData), NewProp_enhancedInputComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_movemmentVector = { "movemmentVector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, movemmentVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movemmentVector_MetaData), NewProp_movemmentVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookAroundVector = { "lookAroundVector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerFPS, lookAroundVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAroundVector_MetaData), NewProp_lookAroundVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_moveTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_jumpTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootingTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_shootingTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_reloadTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_playerCharture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_enhancedInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_movemmentVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerFPS_Statics::NewProp_lookAroundVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerFPS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerControllerFPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerFPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerFPS_Statics::ClassParams = {
	&APlayerControllerFPS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerControllerFPS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerFPS_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerFPS_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerControllerFPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerControllerFPS()
{
	if (!Z_Registration_Info_UClass_APlayerControllerFPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerFPS.OuterSingleton, Z_Construct_UClass_APlayerControllerFPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerControllerFPS.OuterSingleton;
}
APlayerControllerFPS::APlayerControllerFPS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerFPS);
APlayerControllerFPS::~APlayerControllerFPS() {}
// ********** End Class APlayerControllerFPS *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerFPS, APlayerControllerFPS::StaticClass, TEXT("APlayerControllerFPS"), &Z_Registration_Info_UClass_APlayerControllerFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerFPS), 1007126084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h__Script_ProjectRD_3511967707(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
