// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RogueNetworkProject : ModuleRules
{
	public RogueNetworkProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
