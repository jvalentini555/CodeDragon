// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeDragonCharacter.h"

#ifdef CODEDRAGON_CodeDragonCharacter_generated_h
#error "CodeDragonCharacter.generated.h already included, missing '#pragma once' in CodeDragonCharacter.h"
#endif
#define CODEDRAGON_CodeDragonCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACodeDragonCharacter *****************************************************
#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonCharacter_NoRegister();

#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeDragonCharacter(); \
	friend struct Z_Construct_UClass_ACodeDragonCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACodeDragonCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeDragon"), Z_Construct_UClass_ACodeDragonCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACodeDragonCharacter)


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACodeDragonCharacter(ACodeDragonCharacter&&) = delete; \
	ACodeDragonCharacter(const ACodeDragonCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeDragonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeDragonCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACodeDragonCharacter) \
	NO_API virtual ~ACodeDragonCharacter();


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_21_PROLOG
#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACodeDragonCharacter;

// ********** End Class ACodeDragonCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
