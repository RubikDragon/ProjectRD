// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerChartureFPS.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerChartureFPS() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS();
PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerChartureFPS Function PlayerJump ***********************************
struct Z_Construct_UFunction_APlayerChartureFPS_PlayerJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChartureFPS_PlayerJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerChartureFPS, nullptr, "PlayerJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChartureFPS_PlayerJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerChartureFPS_PlayerJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChartureFPS_PlayerJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChartureFPS::execPlayerJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerJump();
	P_NATIVE_END;
}
// ********** End Class APlayerChartureFPS Function PlayerJump *************************************

// ********** Begin Class APlayerChartureFPS Function PlayerLookAround *****************************
struct Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics
{
	struct PlayerChartureFPS_eventPlayerLookAround_Parms
	{
		FVector2D lookAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lookAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::NewProp_lookAxis = { "lookAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChartureFPS_eventPlayerLookAround_Parms, lookAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::NewProp_lookAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerChartureFPS, nullptr, "PlayerLookAround", Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PlayerChartureFPS_eventPlayerLookAround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::PlayerChartureFPS_eventPlayerLookAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChartureFPS::execPlayerLookAround)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_lookAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerLookAround(Z_Param_Out_lookAxis);
	P_NATIVE_END;
}
// ********** End Class APlayerChartureFPS Function PlayerLookAround *******************************

// ********** Begin Class APlayerChartureFPS Function PlayerMove ***********************************
struct Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics
{
	struct PlayerChartureFPS_eventPlayerMove_Parms
	{
		FVector2D moveDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerChartureFPS_eventPlayerMove_Parms, moveDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::NewProp_moveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerChartureFPS, nullptr, "PlayerMove", Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PlayerChartureFPS_eventPlayerMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::PlayerChartureFPS_eventPlayerMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerChartureFPS_PlayerMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChartureFPS_PlayerMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChartureFPS::execPlayerMove)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_moveDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerMove(Z_Param_Out_moveDirection);
	P_NATIVE_END;
}
// ********** End Class APlayerChartureFPS Function PlayerMove *************************************

// ********** Begin Class APlayerChartureFPS Function PlayerReload *********************************
struct Z_Construct_UFunction_APlayerChartureFPS_PlayerReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChartureFPS_PlayerReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerChartureFPS, nullptr, "PlayerReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChartureFPS_PlayerReload_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerChartureFPS_PlayerReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChartureFPS_PlayerReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChartureFPS::execPlayerReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerReload();
	P_NATIVE_END;
}
// ********** End Class APlayerChartureFPS Function PlayerReload ***********************************

// ********** Begin Class APlayerChartureFPS Function PlayerShoot **********************************
struct Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerChartureFPS, nullptr, "PlayerShoot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerChartureFPS::execPlayerShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerShoot();
	P_NATIVE_END;
}
// ********** End Class APlayerChartureFPS Function PlayerShoot ************************************

// ********** Begin Class APlayerChartureFPS *******************************************************
void APlayerChartureFPS::StaticRegisterNativesAPlayerChartureFPS()
{
	UClass* Class = APlayerChartureFPS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayerJump", &APlayerChartureFPS::execPlayerJump },
		{ "PlayerLookAround", &APlayerChartureFPS::execPlayerLookAround },
		{ "PlayerMove", &APlayerChartureFPS::execPlayerMove },
		{ "PlayerReload", &APlayerChartureFPS::execPlayerReload },
		{ "PlayerShoot", &APlayerChartureFPS::execPlayerShoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerChartureFPS;
UClass* APlayerChartureFPS::GetPrivateStaticClass()
{
	using TClass = APlayerChartureFPS;
	if (!Z_Registration_Info_UClass_APlayerChartureFPS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerChartureFPS"),
			Z_Registration_Info_UClass_APlayerChartureFPS.InnerSingleton,
			StaticRegisterNativesAPlayerChartureFPS,
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
	return Z_Registration_Info_UClass_APlayerChartureFPS.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister()
{
	return APlayerChartureFPS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerChartureFPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerChartureFPS.h" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootingActor_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPSSystemActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shotSpawnPorstion_MetaData[] = {
		{ "Category", "RD|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
		{ "Category", "RD|Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// basicly a transform\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "basicly a transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "RD|States" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpPower_MetaData[] = {
		{ "Category", "RD|States" },
		{ "ModuleRelativePath", "Public/PlayerChartureFPS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootingActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSSystemActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_shotSpawnPorstion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerChartureFPS_PlayerJump, "PlayerJump" }, // 3602468276
		{ &Z_Construct_UFunction_APlayerChartureFPS_PlayerLookAround, "PlayerLookAround" }, // 3128599441
		{ &Z_Construct_UFunction_APlayerChartureFPS_PlayerMove, "PlayerMove" }, // 269243574
		{ &Z_Construct_UFunction_APlayerChartureFPS_PlayerReload, "PlayerReload" }, // 441219398
		{ &Z_Construct_UFunction_APlayerChartureFPS_PlayerShoot, "PlayerShoot" }, // 2245971361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerChartureFPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_ShootingActor = { "ShootingActor", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, ShootingActor), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootingActor_MetaData), NewProp_ShootingActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_FPSSystemActor = { "FPSSystemActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, FPSSystemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPSSystemActor_MetaData), NewProp_FPSSystemActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_shotSpawnPorstion = { "shotSpawnPorstion", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, shotSpawnPorstion), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shotSpawnPorstion_MetaData), NewProp_shotSpawnPorstion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_MetaData), NewProp_camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_jumpPower = { "jumpPower", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerChartureFPS, jumpPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpPower_MetaData), NewProp_jumpPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerChartureFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_ShootingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_FPSSystemActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_shotSpawnPorstion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerChartureFPS_Statics::NewProp_jumpPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChartureFPS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerChartureFPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChartureFPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerChartureFPS_Statics::ClassParams = {
	&APlayerChartureFPS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerChartureFPS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChartureFPS_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerChartureFPS_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerChartureFPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerChartureFPS()
{
	if (!Z_Registration_Info_UClass_APlayerChartureFPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerChartureFPS.OuterSingleton, Z_Construct_UClass_APlayerChartureFPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerChartureFPS.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerChartureFPS);
APlayerChartureFPS::~APlayerChartureFPS() {}
// ********** End Class APlayerChartureFPS *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerChartureFPS, APlayerChartureFPS::StaticClass, TEXT("APlayerChartureFPS"), &Z_Registration_Info_UClass_APlayerChartureFPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerChartureFPS), 2056914844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h__Script_ProjectRD_3273067714(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
