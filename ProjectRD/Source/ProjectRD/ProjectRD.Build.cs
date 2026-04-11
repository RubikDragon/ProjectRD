// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectRD : ModuleRules
{
	public ProjectRD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
        // Core
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });

        // AI
        PrivateDependencyModuleNames.AddRange(new string[] { "AiModule", "NavigationSystem" });

        // UI
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Exstra
        PrivateDependencyModuleNames.AddRange(new string[] { "Niagara" });


        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
