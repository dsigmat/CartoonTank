// CartoonTank 2023

using UnrealBuildTool;
using System.Collections.Generic;

public class CartoonTankTarget : TargetRules
{
	public CartoonTankTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "CartoonTank" } );
	}
}
