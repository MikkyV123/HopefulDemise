// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HopefulDemise : ModuleRules
{
	public HopefulDemise(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
