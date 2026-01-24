// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeDragonPlayerController.h"

#ifdef CODEDRAGON_CodeDragonPlayerController_generated_h
#error "CodeDragonPlayerController.generated.h already included, missing '#pragma once' in CodeDragonPlayerController.h"
#endif
#define CODEDRAGON_CodeDragonPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACodeDragonPlayerController **********************************************
CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonPlayerController_NoRegister();

#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeDragonPlayerController(); \
	friend struct Z_Construct_UClass_ACodeDragonPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACodeDragonPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeDragon"), Z_Construct_UClass_ACodeDragonPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACodeDragonPlayerController)


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeDragonPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACodeDragonPlayerController(ACodeDragonPlayerController&&) = delete; \
	ACodeDragonPlayerController(const ACodeDragonPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeDragonPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeDragonPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeDragonPlayerController) \
	NO_API virtual ~ACodeDragonPlayerController();


#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_16_PROLOG
#define FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACodeDragonPlayerController;

// ********** End Class ACodeDragonPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
