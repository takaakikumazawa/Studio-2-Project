// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Studio2ProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudio2ProjectGameMode() {}
// Cross Module References
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectGameMode_NoRegister();
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Studio2Project();
// End Cross Module References
	void AStudio2ProjectGameMode::StaticRegisterNativesAStudio2ProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStudio2ProjectGameMode_NoRegister()
	{
		return AStudio2ProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AStudio2ProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Studio2Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Studio2ProjectGameMode.h" },
				{ "ModuleRelativePath", "Studio2ProjectGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStudio2ProjectGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStudio2ProjectGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStudio2ProjectGameMode, 4000176485);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStudio2ProjectGameMode(Z_Construct_UClass_AStudio2ProjectGameMode, &AStudio2ProjectGameMode::StaticClass, TEXT("/Script/Studio2Project"), TEXT("AStudio2ProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudio2ProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
