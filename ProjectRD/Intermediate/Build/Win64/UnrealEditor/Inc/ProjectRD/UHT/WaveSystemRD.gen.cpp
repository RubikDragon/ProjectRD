// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Map/WaveSystemRD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWaveSystemRD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTRD_API UClass* Z_Construct_UClass_AWaveSystemRD();
PROJECTRD_API UClass* Z_Construct_UClass_AWaveSystemRD_NoRegister();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature();
PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature();
PROJECTRD_API UScriptStruct* Z_Construct_UScriptStruct_FWaveMakeUp();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWaveMakeUp *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWaveMakeUp;
class UScriptStruct* FWaveMakeUp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWaveMakeUp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWaveMakeUp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveMakeUp, (UObject*)Z_Construct_UPackage__Script_ProjectRD(), TEXT("WaveMakeUp"));
	}
	return Z_Registration_Info_UScriptStruct_FWaveMakeUp.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWaveMakeUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// has to be done in order \n" },
#endif
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "has to be done in order" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_toSpawn_MetaData[] = {
		{ "Category", "WaveMakeUp" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_toSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_toSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveMakeUp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWaveMakeUp_Statics::NewProp_toSpawn_Inner = { "toSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveMakeUp_Statics::NewProp_toSpawn = { "toSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveMakeUp, toSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_toSpawn_MetaData), NewProp_toSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveMakeUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveMakeUp_Statics::NewProp_toSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveMakeUp_Statics::NewProp_toSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveMakeUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveMakeUp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
	nullptr,
	&NewStructOps,
	"WaveMakeUp",
	Z_Construct_UScriptStruct_FWaveMakeUp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveMakeUp_Statics::PropPointers),
	sizeof(FWaveMakeUp),
	alignof(FWaveMakeUp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveMakeUp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveMakeUp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveMakeUp()
{
	if (!Z_Registration_Info_UScriptStruct_FWaveMakeUp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWaveMakeUp.InnerSingleton, Z_Construct_UScriptStruct_FWaveMakeUp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWaveMakeUp.InnerSingleton;
}
// ********** End ScriptStruct FWaveMakeUp *********************************************************

// ********** Begin Delegate FWave *****************************************************************
struct Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics
{
	struct WaveSystemRD_eventWave_Parms
	{
		int32 waveCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_waveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::NewProp_waveCount = { "waveCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveSystemRD_eventWave_Parms, waveCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::NewProp_waveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "Wave__DelegateSignature", Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::WaveSystemRD_eventWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::WaveSystemRD_eventWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AWaveSystemRD::FWave_DelegateWrapper(const FMulticastScriptDelegate& Wave, int32 waveCount)
{
	struct WaveSystemRD_eventWave_Parms
	{
		int32 waveCount;
	};
	WaveSystemRD_eventWave_Parms Parms;
	Parms.waveCount=waveCount;
	Wave.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FWave *******************************************************************

// ********** Begin Delegate FEndWave **************************************************************
struct Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "EndWave__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AWaveSystemRD::FEndWave_DelegateWrapper(const FMulticastScriptDelegate& EndWave)
{
	EndWave.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FEndWave ****************************************************************

// ********** Begin Class AWaveSystemRD Function EndOfWave *****************************************
struct Z_Construct_UFunction_AWaveSystemRD_EndOfWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystemRD_EndOfWave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "EndOfWave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_EndOfWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystemRD_EndOfWave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWaveSystemRD_EndOfWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystemRD_EndOfWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystemRD::execEndOfWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndOfWave();
	P_NATIVE_END;
}
// ********** End Class AWaveSystemRD Function EndOfWave *******************************************

// ********** Begin Class AWaveSystemRD Function FinishedWave **************************************
struct Z_Construct_UFunction_AWaveSystemRD_FinishedWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystemRD_FinishedWave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "FinishedWave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_FinishedWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystemRD_FinishedWave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWaveSystemRD_FinishedWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystemRD_FinishedWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystemRD::execFinishedWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishedWave();
	P_NATIVE_END;
}
// ********** End Class AWaveSystemRD Function FinishedWave ****************************************

// ********** Begin Class AWaveSystemRD Function StartWave *****************************************
struct Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics
{
	struct WaveSystemRD_eventStartWave_Parms
	{
		int32 startOnWave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_startOnWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::NewProp_startOnWave = { "startOnWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveSystemRD_eventStartWave_Parms, startOnWave), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::NewProp_startOnWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "StartWave", Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::WaveSystemRD_eventStartWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::WaveSystemRD_eventStartWave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWaveSystemRD_StartWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystemRD_StartWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystemRD::execStartWave)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_startOnWave);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWave(Z_Param_startOnWave);
	P_NATIVE_END;
}
// ********** End Class AWaveSystemRD Function StartWave *******************************************

// ********** Begin Class AWaveSystemRD Function StartWaves ****************************************
struct Z_Construct_UFunction_AWaveSystemRD_StartWaves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystemRD_StartWaves_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "StartWaves", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_StartWaves_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystemRD_StartWaves_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWaveSystemRD_StartWaves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystemRD_StartWaves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystemRD::execStartWaves)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWaves();
	P_NATIVE_END;
}
// ********** End Class AWaveSystemRD Function StartWaves ******************************************

// ********** Begin Class AWaveSystemRD Function Wave **********************************************
struct Z_Construct_UFunction_AWaveSystemRD_Wave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystemRD_Wave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWaveSystemRD, nullptr, "Wave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystemRD_Wave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystemRD_Wave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWaveSystemRD_Wave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystemRD_Wave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystemRD::execWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Wave();
	P_NATIVE_END;
}
// ********** End Class AWaveSystemRD Function Wave ************************************************

// ********** Begin Class AWaveSystemRD ************************************************************
void AWaveSystemRD::StaticRegisterNativesAWaveSystemRD()
{
	UClass* Class = AWaveSystemRD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndOfWave", &AWaveSystemRD::execEndOfWave },
		{ "FinishedWave", &AWaveSystemRD::execFinishedWave },
		{ "StartWave", &AWaveSystemRD::execStartWave },
		{ "StartWaves", &AWaveSystemRD::execStartWaves },
		{ "Wave", &AWaveSystemRD::execWave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWaveSystemRD;
UClass* AWaveSystemRD::GetPrivateStaticClass()
{
	using TClass = AWaveSystemRD;
	if (!Z_Registration_Info_UClass_AWaveSystemRD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WaveSystemRD"),
			Z_Registration_Info_UClass_AWaveSystemRD.InnerSingleton,
			StaticRegisterNativesAWaveSystemRD,
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
	return Z_Registration_Info_UClass_AWaveSystemRD.InnerSingleton;
}
UClass* Z_Construct_UClass_AWaveSystemRD_NoRegister()
{
	return AWaveSystemRD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWaveSystemRD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Map/WaveSystemRD.h" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveEvent_MetaData[] = {
		{ "Category", "_RD|Event" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOfWaveEvent_MetaData[] = {
		{ "Category", "_RD|Event" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishedWaveEvent_MetaData[] = {
		{ "Category", "_RD|Event" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPlaces_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawns_MetaData[] = {
		{ "Category", "_RD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// what go spawn on what round, the spawn array of actors must mathe the spawn plases index in order to spawn, if desired not to spawn then leave none \n" },
#endif
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "what go spawn on what round, the spawn array of actors must mathe the spawn plases index in order to spawn, if desired not to spawn then leave none" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Waves_MetaData[] = {
		{ "Category", "_RD" },
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentWave_MetaData[] = {
		{ "ModuleRelativePath", "Public/Map/WaveSystemRD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_WaveEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndOfWaveEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FinishedWaveEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPlaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPlaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_spawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spawns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Waves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveSystemRD_EndOfWave, "EndOfWave" }, // 1827557742
		{ &Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature, "EndWave__DelegateSignature" }, // 3192469005
		{ &Z_Construct_UFunction_AWaveSystemRD_FinishedWave, "FinishedWave" }, // 1774586983
		{ &Z_Construct_UFunction_AWaveSystemRD_StartWave, "StartWave" }, // 3700330910
		{ &Z_Construct_UFunction_AWaveSystemRD_StartWaves, "StartWaves" }, // 989393515
		{ &Z_Construct_UFunction_AWaveSystemRD_Wave, "Wave" }, // 1874616373
		{ &Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature, "Wave__DelegateSignature" }, // 2449665137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveSystemRD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_WaveEvent = { "WaveEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, WaveEvent), Z_Construct_UDelegateFunction_AWaveSystemRD_Wave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveEvent_MetaData), NewProp_WaveEvent_MetaData) }; // 2449665137
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_EndOfWaveEvent = { "EndOfWaveEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, EndOfWaveEvent), Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOfWaveEvent_MetaData), NewProp_EndOfWaveEvent_MetaData) }; // 3192469005
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_FinishedWaveEvent = { "FinishedWaveEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, FinishedWaveEvent), Z_Construct_UDelegateFunction_AWaveSystemRD_EndWave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishedWaveEvent_MetaData), NewProp_FinishedWaveEvent_MetaData) }; // 3192469005
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_SpawnPlaces_Inner = { "SpawnPlaces", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_SpawnPlaces = { "SpawnPlaces", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, SpawnPlaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPlaces_MetaData), NewProp_SpawnPlaces_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_spawns_Inner = { "spawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWaveMakeUp, METADATA_PARAMS(0, nullptr) }; // 842610105
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_spawns = { "spawns", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, spawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawns_MetaData), NewProp_spawns_MetaData) }; // 842610105
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_Waves = { "Waves", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, Waves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Waves_MetaData), NewProp_Waves_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_currentWave = { "currentWave", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystemRD, currentWave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentWave_MetaData), NewProp_currentWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveSystemRD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_WaveEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_EndOfWaveEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_FinishedWaveEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_SpawnPlaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_SpawnPlaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_spawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_spawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_Waves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystemRD_Statics::NewProp_currentWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystemRD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveSystemRD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystemRD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveSystemRD_Statics::ClassParams = {
	&AWaveSystemRD::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveSystemRD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystemRD_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystemRD_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveSystemRD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveSystemRD()
{
	if (!Z_Registration_Info_UClass_AWaveSystemRD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveSystemRD.OuterSingleton, Z_Construct_UClass_AWaveSystemRD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveSystemRD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveSystemRD);
AWaveSystemRD::~AWaveSystemRD() {}
// ********** End Class AWaveSystemRD **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveMakeUp::StaticStruct, Z_Construct_UScriptStruct_FWaveMakeUp_Statics::NewStructOps, TEXT("WaveMakeUp"), &Z_Registration_Info_UScriptStruct_FWaveMakeUp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveMakeUp), 842610105U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveSystemRD, AWaveSystemRD::StaticClass, TEXT("AWaveSystemRD"), &Z_Registration_Info_UClass_AWaveSystemRD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveSystemRD), 2113158366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_3364299492(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Map_WaveSystemRD_h__Script_ProjectRD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
