// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/TopDownChartureAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTopDownChartureAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
PROJECTRD_API UClass* Z_Construct_UClass_ABasicChartureRD_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_ATopDownChartureAIController();
PROJECTRD_API UClass* Z_Construct_UClass_ATopDownChartureAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATopDownChartureAIController Function AiAttackAction *********************
struct Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|BasicMove" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATopDownChartureAIController, nullptr, "AiAttackAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownChartureAIController::execAiAttackAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AiAttackAction();
	P_NATIVE_END;
}
// ********** End Class ATopDownChartureAIController Function AiAttackAction ***********************

// ********** Begin Class ATopDownChartureAIController Function AiJumpAction ***********************
struct Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|BasicMove" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATopDownChartureAIController, nullptr, "AiJumpAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownChartureAIController::execAiJumpAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AiJumpAction();
	P_NATIVE_END;
}
// ********** End Class ATopDownChartureAIController Function AiJumpAction *************************

// ********** Begin Class ATopDownChartureAIController Function AiMoveAction ***********************
struct Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics
{
	struct TopDownChartureAIController_eventAiMoveAction_Parms
	{
		FVector2D movePostion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RD|BasicMove" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_movePostion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::NewProp_movePostion = { "movePostion", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopDownChartureAIController_eventAiMoveAction_Parms, movePostion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::NewProp_movePostion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATopDownChartureAIController, nullptr, "AiMoveAction", Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::TopDownChartureAIController_eventAiMoveAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::TopDownChartureAIController_eventAiMoveAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATopDownChartureAIController::execAiMoveAction)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_movePostion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AiMoveAction(Z_Param_Out_movePostion);
	P_NATIVE_END;
}
// ********** End Class ATopDownChartureAIController Function AiMoveAction *************************

// ********** Begin Class ATopDownChartureAIController *********************************************
void ATopDownChartureAIController::StaticRegisterNativesATopDownChartureAIController()
{
	UClass* Class = ATopDownChartureAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AiAttackAction", &ATopDownChartureAIController::execAiAttackAction },
		{ "AiJumpAction", &ATopDownChartureAIController::execAiJumpAction },
		{ "AiMoveAction", &ATopDownChartureAIController::execAiMoveAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATopDownChartureAIController;
UClass* ATopDownChartureAIController::GetPrivateStaticClass()
{
	using TClass = ATopDownChartureAIController;
	if (!Z_Registration_Info_UClass_ATopDownChartureAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TopDownChartureAIController"),
			Z_Registration_Info_UClass_ATopDownChartureAIController.InnerSingleton,
			StaticRegisterNativesATopDownChartureAIController,
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
	return Z_Registration_Info_UClass_ATopDownChartureAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATopDownChartureAIController_NoRegister()
{
	return ATopDownChartureAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATopDownChartureAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AiStuff/TopDownChartureAIController.h" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTree_MetaData[] = {
		{ "Category", "RD|AI" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_possesedPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTreeComponentTurtural_MetaData[] = {
		{ "Category", "RD|Turtural" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blackbordComponentTurtural_MetaData[] = {
		{ "Category", "RD|Turtural" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AiStuff/TopDownChartureAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_possesedPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTreeComponentTurtural;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_blackbordComponentTurtural;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopDownChartureAIController_AiAttackAction, "AiAttackAction" }, // 35469246
		{ &Z_Construct_UFunction_ATopDownChartureAIController_AiJumpAction, "AiJumpAction" }, // 826725295
		{ &Z_Construct_UFunction_ATopDownChartureAIController_AiMoveAction, "AiMoveAction" }, // 4133759074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownChartureAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_behaviorTree = { "behaviorTree", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownChartureAIController, behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_behaviorTree_MetaData), NewProp_behaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_possesedPawn = { "possesedPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownChartureAIController, possesedPawn), Z_Construct_UClass_ABasicChartureRD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_possesedPawn_MetaData), NewProp_possesedPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_behaviorTreeComponentTurtural = { "behaviorTreeComponentTurtural", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownChartureAIController, behaviorTreeComponentTurtural), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_behaviorTreeComponentTurtural_MetaData), NewProp_behaviorTreeComponentTurtural_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_blackbordComponentTurtural = { "blackbordComponentTurtural", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownChartureAIController, blackbordComponentTurtural), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blackbordComponentTurtural_MetaData), NewProp_blackbordComponentTurtural_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownChartureAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_behaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_possesedPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_behaviorTreeComponentTurtural,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownChartureAIController_Statics::NewProp_blackbordComponentTurtural,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownChartureAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATopDownChartureAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownChartureAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownChartureAIController_Statics::ClassParams = {
	&ATopDownChartureAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATopDownChartureAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownChartureAIController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownChartureAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownChartureAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATopDownChartureAIController()
{
	if (!Z_Registration_Info_UClass_ATopDownChartureAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownChartureAIController.OuterSingleton, Z_Construct_UClass_ATopDownChartureAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATopDownChartureAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownChartureAIController);
ATopDownChartureAIController::~ATopDownChartureAIController() {}
// ********** End Class ATopDownChartureAIController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_TopDownChartureAIController_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownChartureAIController, ATopDownChartureAIController::StaticClass, TEXT("ATopDownChartureAIController"), &Z_Registration_Info_UClass_ATopDownChartureAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownChartureAIController), 15289724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_TopDownChartureAIController_h__Script_ProjectRD_299258612(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_TopDownChartureAIController_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_TopDownChartureAIController_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
