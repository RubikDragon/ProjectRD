// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Map/WaveSystemRD.h"

#ifdef PROJECTRD_WaveSystemRD_generated_h
#error "WaveSystemRD.generated.h already included, missing '#pragma once' in WaveSystemRD.h"
#endif
#define PROJECTRD_WaveSystemRD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWaveMakeUp *******************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveMakeUp_Statics; \
	PROJECTRD_API static class UScriptStruct* StaticStruct();


struct FWaveMakeUp;
// ********** End ScriptStruct FWaveMakeUp *********************************************************

// ********** Begin Delegate FWave *****************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_24_DELEGATE \
static void FWave_DelegateWrapper(const FMulticastScriptDelegate& Wave, int32 waveCount);


// ********** End Delegate FWave *******************************************************************

// ********** Begin Delegate FEndWave **************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_26_DELEGATE \
static void FEndWave_DelegateWrapper(const FMulticastScriptDelegate& EndWave);


// ********** End Delegate FEndWave ****************************************************************

// ********** Begin Class AWaveSystemRD ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndOfWave); \
	DECLARE_FUNCTION(execWave); \
	DECLARE_FUNCTION(execFinishedWave); \
	DECLARE_FUNCTION(execStartWave); \
	DECLARE_FUNCTION(execStartWaves);


PROJECTRD_API UClass* Z_Construct_UClass_AWaveSystemRD_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveSystemRD(); \
	friend struct Z_Construct_UClass_AWaveSystemRD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_AWaveSystemRD_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaveSystemRD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_AWaveSystemRD_NoRegister) \
	DECLARE_SERIALIZER(AWaveSystemRD)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaveSystemRD(AWaveSystemRD&&) = delete; \
	AWaveSystemRD(const AWaveSystemRD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveSystemRD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveSystemRD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaveSystemRD) \
	NO_API virtual ~AWaveSystemRD();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_18_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaveSystemRD;

// ********** End Class AWaveSystemRD **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
