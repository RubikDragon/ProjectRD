// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HealtSystem.h"

#ifdef PROJECTRD_HealtSystem_generated_h
#error "HealtSystem.generated.h already included, missing '#pragma once' in HealtSystem.h"
#endif
#define PROJECTRD_HealtSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;

// ********** Begin Delegate FOnHealthChange *******************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_13_DELEGATE \
PROJECTRD_API void FOnHealthChange_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChange, int32 CurrentHealth);


// ********** End Delegate FOnHealthChange *********************************************************

// ********** Begin Delegate FOnDeadth *************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_15_DELEGATE \
PROJECTRD_API void FOnDeadth_DelegateWrapper(const FMulticastScriptDelegate& OnDeadth);


// ********** End Delegate FOnDeadth ***************************************************************

// ********** Begin Delegate FOnHealtStartUp *******************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_20_DELEGATE \
PROJECTRD_API void FOnHealtStartUp_DelegateWrapper(const FMulticastScriptDelegate& OnHealtStartUp, int32 CurrentHP, int32 minHP, int32 maxHP);


// ********** End Delegate FOnHealtStartUp *********************************************************

// ********** Begin Class UHealtSystem *************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execDeadth); \
	DECLARE_FUNCTION(execResetHealt); \
	DECLARE_FUNCTION(execChangeHealt);


PROJECTRD_API UClass* Z_Construct_UClass_UHealtSystem_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealtSystem(); \
	friend struct Z_Construct_UClass_UHealtSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UHealtSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealtSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UHealtSystem_NoRegister) \
	DECLARE_SERIALIZER(UHealtSystem)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealtSystem(UHealtSystem&&) = delete; \
	UHealtSystem(const UHealtSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealtSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealtSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealtSystem) \
	NO_API virtual ~UHealtSystem();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_24_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealtSystem;

// ********** End Class UHealtSystem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_HealtSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
