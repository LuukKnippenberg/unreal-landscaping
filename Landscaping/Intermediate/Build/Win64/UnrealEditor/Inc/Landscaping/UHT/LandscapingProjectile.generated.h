// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapingProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LANDSCAPING_LandscapingProjectile_generated_h
#error "LandscapingProjectile.generated.h already included, missing '#pragma once' in LandscapingProjectile.h"
#endif
#define LANDSCAPING_LandscapingProjectile_generated_h

#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_SPARSE_DATA
#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_ACCESSORS
#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapingProjectile(); \
	friend struct Z_Construct_UClass_ALandscapingProjectile_Statics; \
public: \
	DECLARE_CLASS(ALandscapingProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscaping"), NO_API) \
	DECLARE_SERIALIZER(ALandscapingProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapingProjectile(ALandscapingProjectile&&); \
	NO_API ALandscapingProjectile(const ALandscapingProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapingProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapingProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALandscapingProjectile) \
	NO_API virtual ~ALandscapingProjectile();


#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_12_PROLOG
#define FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_SPARSE_DATA \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_ACCESSORS \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Landscaping_Source_Landscaping_LandscapingProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPING_API UClass* StaticClass<class ALandscapingProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Landscaping_Source_Landscaping_LandscapingProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
