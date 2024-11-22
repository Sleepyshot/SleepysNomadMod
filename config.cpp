class CfgPatches
{
	class SleepysNomadMod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"	
		};
	};
};
class CfgMods
{
	class SleepysNomadMod
	{
		dir="SleepysNomadMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SleepysNomadMod";
		credits="Tylord";
		author="Sleepyshot";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MyModFiles/SleepysNomadMod/scripts/4_World"                 
				};
			};
		};
	};
};


class CfgSlots
{
	class slot_PouchSheath
	{
		name="PouchSheath";
		displayName="Knife Sheath";
		ghostIcon="set:dayz_inventory image:knifeholster";
	};
};

class CfgVehicles
{
    class Container_Base;
	class Clothing;
    class SLP_Pouches_ColorBase: Container_Base
    {
		displayName="Belt Pouches";
		descriptionShort="Pouches that can attach to your belt. Can hold additional attachments";
		model="MyModFiles\SleepysNomadMod\SLP_Pouches.p3d";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		attachments[]=
		{
			"PouchSheath"
		};
        inventorySlot[]=
		{
			"Belt_Back"
		};
		hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysNomadMod\data\SLP_Pouches.paa"
		};
        hiddenSelections[]=
        {
            "Camo"
        };
		rotationFlags=17;
		weight=60;
		itemSize[]={3,3};
		itemsCargoSize[]={3,2};
		allowOwnedCargoManipulation=1;
		canBeDigged=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"MyModFiles\SleepysNomadMod\data\SLP_Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MyModFiles\SleepysNomadMod\data\SLP_Pouches.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"MyModFiles\SleepysNomadMod\data\SLP_Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MyModFiles\SleepysNomadMod\data\SLP_Pouches_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"MyModFiles\SleepysNomadMod\data\SLP_Pouches_destruct.rvmat"
							}
						}
					};
				};
			};
		};
        soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
    };

   /*  class SLP_Pouches_Black : SLP_Pouches_ColorBase
    {
        scope=2;
        hiddenSelectionsTextures[]=
		{
			//"\dz\gear\containers\data\barrel_green_co.paa"              GET FINAL DESTINATION
		};
    };
	class SLP_Pouches_Leather : SLP_Pouches_ColorBase
    {
        scope=2;
        hiddenSelectionsTextures[]=
		{
			//"\dz\gear\containers\data\barrel_green_co.paa"               GET FINAL DESTINATION
		};
    }; */
    class SLP_Pouches_Winter : SLP_Pouches_ColorBase
    {
        scope=2;
		attachments[]=
		{
			"PouchSheath"
		};
        hiddenSelectionsTextures[]=
		{
			"MyModFiles\SleepysNomadMod\data\SLP_Pouches_camo_co.paa"
		};
    };



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              Vanilla Override
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class NylonKnifeSheath: Clothing
	{
		scope=2;
		inventorySlot[]=
		{
			"PouchSheath"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
	};

};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPouchSheathProxy : ProxyAttachment
	{
		scope=2;
		inventorySlot= "PouchSheath";
		model="MyModFiles\SleepysNomadMod\PouchSheathProxy.p3d";
	};

};