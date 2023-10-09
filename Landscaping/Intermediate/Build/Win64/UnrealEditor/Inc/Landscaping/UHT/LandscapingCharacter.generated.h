// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapingCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPING_LandscapingCharacter_generated_h
#error "LandscapingCharacter.generated.h already included, missing '#pragma once' in LandscapingCharacter.h"
#endif
#define LANDSCAPING_LandscapingCharacter_generated_h

#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_SPARSE_DATA
#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapingCharacter(); \
	friend struct Z_Construct_UClass_ALandscapingCharacter_Statics; \
public: \
	DECLARE_CLASS(ALandscapingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscaping"), NO_API) \
	DECLARE_SERIALIZER(ALandscapingCharacter)


#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapingCharacter(ALandscapingCharacter&&); \
	NO_API ALandscapingCharacter(const ALandscapingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALandscapingCharacter) \
	NO_API virtual ~ALandscapingCharacter();


#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_19_PROLOG
#define FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_SPARSE_DATA \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Landscaping_Source_Landscaping_LandscapingCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPING_API UClass* StaticClass<class ALandscapingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Landscaping_Source_Landscaping_LandscapingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
