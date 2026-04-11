// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AiStuff/AiTaskRandomMove.h"

#ifdef PROJECTRD_AiTaskRandomMove_generated_h
#error "AiTaskRandomMove.generated.h already included, missing '#pragma once' in AiTaskRandomMove.h"
#endif
#define PROJECTRD_AiTaskRandomMove_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAiTaskRandomMove ********************************************************
PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskRandomMove_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAiTaskRandomMove(); \
	friend struct Z_Construct_UClass_UAiTaskRandomMove_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UAiTaskRandomMove_NoRegister(); \
public: \
	DECLARE_CLASS2(UAiTaskRandomMove, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UAiTaskRandomMove_NoRegister) \
	DECLARE_SERIALIZER(UAiTaskRandomMove)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAiTaskRandomMove(UAiTaskRandomMove&&) = delete; \
	UAiTaskRandomMove(const UAiTaskRandomMove&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAiTaskRandomMove); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAiTaskRandomMove); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAiTaskRandomMove) \
	NO_API virtual ~UAiTaskRandomMove();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_13_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAiTaskRandomMove;

// ********** End Class UAiTaskRandomMove **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AiTaskRandomMove_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
