// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Large_World : ModuleRules
{
	public Large_World(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
