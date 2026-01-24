// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CodeDragon : ModuleRules
{
	public CodeDragon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CodeDragon",
			"CodeDragon/Variant_Platforming",
			"CodeDragon/Variant_Platforming/Animation",
			"CodeDragon/Variant_Combat",
			"CodeDragon/Variant_Combat/AI",
			"CodeDragon/Variant_Combat/Animation",
			"CodeDragon/Variant_Combat/Gameplay",
			"CodeDragon/Variant_Combat/Interfaces",
			"CodeDragon/Variant_Combat/UI",
			"CodeDragon/Variant_SideScrolling",
			"CodeDragon/Variant_SideScrolling/AI",
			"CodeDragon/Variant_SideScrolling/Gameplay",
			"CodeDragon/Variant_SideScrolling/Interfaces",
			"CodeDragon/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
