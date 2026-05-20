// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/FPSSystem/TelecanetickShotingFPS.h"

#ifdef PROJECTRD_TelecanetickShotingFPS_generated_h
#error "TelecanetickShotingFPS.generated.h already included, missing '#pragma once' in TelecanetickShotingFPS.h"
#endif
#define PROJECTRD_TelecanetickShotingFPS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class USceneComponent;
class USphereComponent;

// ********** Begin Delegate FAmoChange ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_23_DELEGATE \
static void FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, TSubclassOf<AActor> CurrentAmoAmount, bool wasAdded);


// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FInform ***************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_28_DELEGATE \
static void FInform_DelegateWrapper(const FMulticastScriptDelegate& Inform, TArray<TSubclassOf<AActor>> const& StartingAmo, int32 minAmo, int32 maxAmo);


// ********** End Delegate FInform *****************************************************************

// ********** Begin Delegate FBulletsUpdate ********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_31_DELEGATE \
static void FBulletsUpdate_DelegateWrapper(const FMulticastScriptDelegate& BulletsUpdate, const TArray<TSubclassOf<AActor>>& CurrentAmoAmount);


// ********** End Delegate FBulletsUpdate **********************************************************

// ********** Begin Class UTelecanetickShotingFPS **************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetReloadSphereRadioes); \
	DECLARE_FUNCTION(execSetBulletSpawnPorstion_Implementation); \
	DECLARE_FUNCTION(execReload_Implementation); \
	DECLARE_FUNCTION(execShoot_Implementation);


PROJECTRD_API UClass* Z_Construct_UClass_UTelecanetickShotingFPS_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelecanetickShotingFPS(); \
	friend struct Z_Construct_UClass_UTelecanetickShotingFPS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UTelecanetickShotingFPS_NoRegister(); \
public: \
	DECLARE_CLASS2(UTelecanetickShotingFPS, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UTelecanetickShotingFPS_NoRegister) \
	DECLARE_SERIALIZER(UTelecanetickShotingFPS) \
	virtual UObject* _getUObject() const override { return const_cast<UTelecanetickShotingFPS*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTelecanetickShotingFPS(UTelecanetickShotingFPS&&) = delete; \
	UTelecanetickShotingFPS(const UTelecanetickShotingFPS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelecanetickShotingFPS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelecanetickShotingFPS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTelecanetickShotingFPS) \
	NO_API virtual ~UTelecanetickShotingFPS();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_14_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTelecanetickShotingFPS;

// ********** End Class UTelecanetickShotingFPS ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_TelecanetickShotingFPS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
