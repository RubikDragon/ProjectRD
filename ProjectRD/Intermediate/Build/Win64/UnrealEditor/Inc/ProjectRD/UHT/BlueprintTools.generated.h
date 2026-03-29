// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintTools.h"

#ifdef PROJECTRD_BlueprintTools_generated_h
#error "BlueprintTools.generated.h already included, missing '#pragma once' in BlueprintTools.h"
#endif
#define PROJECTRD_BlueprintTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;

// ********** Begin Class UBlueprintTools **********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execContainsTag); \
	DECLARE_FUNCTION(execGetChildActorClass); \
	DECLARE_FUNCTION(execIsNotNull); \
	DECLARE_FUNCTION(execStringEqual);


PROJECTRD_API UClass* Z_Construct_UClass_UBlueprintTools_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintTools(); \
	friend struct Z_Construct_UClass_UBlueprintTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UBlueprintTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UBlueprintTools_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintTools)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintTools(UBlueprintTools&&) = delete; \
	UBlueprintTools(const UBlueprintTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintTools) \
	NO_API virtual ~UBlueprintTools();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_12_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintTools;

// ********** End Class UBlueprintTools ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BlueprintTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
