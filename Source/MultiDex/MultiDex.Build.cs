// MultiDex
// Created by Patryk Stepniewski & zompi.pl
// Copyright (c) 2014-2016 gameDNA. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class MultiDex : ModuleRules
	{
		public MultiDex(TargetInfo Target)
		{
			Definitions.Add("WITH_MULTIDEX=1");

			PrivateIncludePaths.Add("MultiDex/Private");

            PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject" });

			// Additional Frameworks and Libraries for Android
			if (Target.Platform == UnrealTargetPlatform.Android)
			{
				PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
				string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, BuildConfiguration.RelativeEnginePath);
				AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", Path.Combine(PluginPath, "MultiDex_UPL_Android.xml")));
			}
		}
	}
}
