// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Studio2ProjectPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudio2ProjectPlayerController() {}
// Cross Module References
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectPlayerController_NoRegister();
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Studio2Project();
// End Cross Module References
	void AStudio2ProjectPlayerController::StaticRegisterNativesAStudio2ProjectPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AStudio2ProjectPlayerController_NoRegister()
	{
		return AStudio2ProjectPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AStudio2ProjectPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Studio2Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Studio2ProjectPlayerController.h" },
				{ "ModuleRelativePath", "Studio2ProjectPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStudio2ProjectPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStudio2ProjectPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStudio2ProjectPlayerController, 3698158224);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStudio2ProjectPlayerController(Z_Construct_UClass_AStudio2ProjectPlayerController, &AStudio2ProjectPlayerController::StaticClass, TEXT("/Script/Studio2Project"), TEXT("AStudio2ProjectPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudio2ProjectPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
