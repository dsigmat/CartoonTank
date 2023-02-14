// CartoonTank 2023

using UnrealBuildTool;
using System.Collections.Generic;

public class CartoonTankEditorTarget : TargetRules
{
	public CartoonTankEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "CartoonTank" } );
	}
}
