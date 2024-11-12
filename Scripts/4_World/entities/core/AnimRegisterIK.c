modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterHeavy(pType,  pBehavior);
		pType.AddItemInHandsProfileIK("Bicycle_wheel", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/sedan/sedan_wheel.anm");
		pType.AddItemInHandsProfileIK("MMT_wheel", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/vehicles/sedan/sedan_wheel.anm");
		pType.AddItemInHandsProfileIK("ItemBicycle","dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				"BBC_Bicycles/anim/BBC_BicycleIK.anm");
		pType.AddItemInHandsProfileIK("ItemMMT","dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				"BBC_Bicycles/anim/MMTBicycleIK.anm");
	}
};


