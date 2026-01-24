// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeDragonGameMode.h"

#ifdef CODEDRAGON_CodeDragonGameMode_generated_h
#error "CodeDragonGameMode.generated.h already included, missing '#pragma once' in CodeDragonGameMode.h"
#endif
#define CODEDRAGON_CodeDragonGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACodeDragonGameMode ******************************************************
CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonGameMode_NoRegister();

#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeDragonGameMode(); \
	friend struct Z_Construct_UClass_ACodeDragonGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACodeDragonGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeDragon"), Z_Construct_UClass_ACodeDragonGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACodeDragonGameMode)


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACodeDragonGameMode(ACodeDragonGameMode&&) = delete; \
	ACodeDragonGameMode(const ACodeDragonGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeDragonGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeDragonGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACodeDragonGameMode) \
	NO_API virtual ~ACodeDragonGameMode();


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_12_PROLOG
#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACodeDragonGameMode;

// ********** End Class ACodeDragonGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
