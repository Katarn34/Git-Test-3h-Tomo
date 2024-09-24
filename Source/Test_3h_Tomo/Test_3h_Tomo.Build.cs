// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_3h_Tomo : ModuleRules
{
	public Test_3h_Tomo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
