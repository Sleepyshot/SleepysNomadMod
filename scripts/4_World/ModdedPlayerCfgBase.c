modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("SLP_Pouches_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi",  pBehavior, "dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
    }; 
}; 


//pType.AddItemInHandsProfileIK("NylonKnifeSheath",		"dz/anims/workspaces/player/player_main/player_main_1h.asi",								toolsOneHanded,					"dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
//pType.AddItemInHandsProfileIK("MountainBag_ColorBase",				"dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi",	twoHanded,					"dz/anims/anm/player/ik/two_handed/mountain_g.anm");