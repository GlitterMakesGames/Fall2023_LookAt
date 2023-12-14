// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FALL2023_LOOKAT_V1_Fall2023_LookAt_v1Projectile_generated_h
#error "Fall2023_LookAt_v1Projectile.generated.h already included, missing '#pragma once' in Fall2023_LookAt_v1Projectile.h"
#endif
#define FALL2023_LOOKAT_V1_Fall2023_LookAt_v1Projectile_generated_h

#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_SPARSE_DATA
#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFall2023_LookAt_v1Projectile(); \
	friend struct Z_Construct_UClass_AFall2023_LookAt_v1Projectile_Statics; \
public: \
	DECLARE_CLASS(AFall2023_LookAt_v1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fall2023_LookAt_v1"), NO_API) \
	DECLARE_SERIALIZER(AFall2023_LookAt_v1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFall2023_LookAt_v1Projectile(); \
	friend struct Z_Construct_UClass_AFall2023_LookAt_v1Projectile_Statics; \
public: \
	DECLARE_CLASS(AFall2023_LookAt_v1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fall2023_LookAt_v1"), NO_API) \
	DECLARE_SERIALIZER(AFall2023_LookAt_v1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFall2023_LookAt_v1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFall2023_LookAt_v1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFall2023_LookAt_v1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFall2023_LookAt_v1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFall2023_LookAt_v1Projectile(AFall2023_LookAt_v1Projectile&&); \
	NO_API AFall2023_LookAt_v1Projectile(const AFall2023_LookAt_v1Projectile&); \
public:


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFall2023_LookAt_v1Projectile(AFall2023_LookAt_v1Projectile&&); \
	NO_API AFall2023_LookAt_v1Projectile(const AFall2023_LookAt_v1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFall2023_LookAt_v1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFall2023_LookAt_v1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFall2023_LookAt_v1Projectile)


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFall2023_LookAt_v1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFall2023_LookAt_v1Projectile, ProjectileMovement); }


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_12_PROLOG
#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_SPARSE_DATA \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_RPC_WRAPPERS \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_INCLASS \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_SPARSE_DATA \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FALL2023_LOOKAT_V1_API UClass* StaticClass<class AFall2023_LookAt_v1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fall2023_LookAt_v3_Source_Fall2023_LookAt_v1_Fall2023_LookAt_v1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
