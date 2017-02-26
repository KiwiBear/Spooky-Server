/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

// Chernarus Loot Positions - Replaced CfgBuildings
#include "chernarusLootBuildings.cpp"
// Chernarus Loot Positions - Replaced CfgBuildings

class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  Exile_Item_MountainDupe
	  CUP_B_AssaultPack_Coyote
	  V_TacChestrig_grn_F
	  Exile_Item_CockONut
	  ItemCompass
	  B_Kitbag_rgr
	  Exile_Item_Heatpack
	  hlc_rifle_M1903A1
	  Exile_Item_CookingPot
	  Exile_Item_Beer
	  Exile_Item_PlasticBottleFreshWater
	  Binocular
	  ItemRadio
	  Exile_Item_GloriousKnakworst
	  Exile_Item_Heatpack
	  Exile_Item_Cheathas
	  Exile_Item_ToiletPaper
	  Exile_Item_BeefParts
	  Exile_Item_SausageGravy
	  Exile_Item_PlasticBottleEmpty
	  ItemMap
	  Exile_Item_CatFood
	  Binocular
	  Exile_Item_SausageGravy
	  CUP_smg_MP5A5
	  Exile_Item_CanOpener
	  V_BandollierB_rgr
	  Exile_Item_Cheathas
	  V_Rangemaster_belt
	  Exile_Item_Moobar
	  Exile_Item_ChocolateMilk
	  Exile_Item_PlasticBottleFreshWater
	  B_AssaultPack_blk
	  Exile_Item_SeedAstics
	  Exile_Item_CockONut
	  Binocular
	  Exile_Item_ChocolateMilk
	  Exile_Item_InstantCoffee
	  Exile_Item_Noodles
	  Exile_Item_ChocolateMilk
	  TAC_LBT_HL3_B
	  Exile_Item_BeefParts
	  B_TacticalPack_blk
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_EMRE
	  CUP_hgun_TaurusTracker455
	  Exile_Item_GloriousKnakworst
	  B_AssaultPack_cbr
	  Exile_Item_Beer
	  Exile_Item_ChocolateMilk
	  Exile_Item_Matches
	  Exile_Item_Cheathas
	  Binocular
	  TAC_LBT_HL3_OD
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_ChristmasTinner
	  Exile_Item_Moobar
	  Exile_Item_PowerDrink
	  B_TacticalPack_blk
	  Exile_Item_BeefParts
	  CUP_hgun_TaurusTracker455
	  Exile_Item_Surstromming
	  ItemCompass
	  Exile_Item_ToiletPaper
	  Binocular
	  hlc_smg_mp5k
	  Exile_Item_PlasticBottleFreshWater
	  V_BandollierB_oli
	  V_BandollierB_oli
	  CUP_hgun_Compact
	  Exile_Item_PowerDrink
	  CUP_hgun_Compact
	  Exile_Item_Heatpack
	  Exile_Item_ChocolateMilk
	  Exile_Item_CatFood
	  Exile_Item_DsNuts
	  CUP_hgun_Colt1911
	  hlc_rifle_M1903A1
	  CUP_sgun_Saiga12K
	  ItemCompass
	  hlc_rifle_M1903A1_unertl
	  ItemCompass
	  Exile_Item_EnergyDrink
	  Exile_Item_BBQSandwich
	  ItemCompass
	  Exile_Item_MacasCheese
	  Exile_Item_ChocolateMilk
	  CUP_smg_bizon
	  Exile_Item_ChocolateMilk
	  Exile_Item_Heatpack
	  Exile_Item_DsNuts
	  V_BandollierB_blk
	  TAC_LBT_HL3_B
	  CUP_sgun_Saiga12K
	  Exile_Item_PowerDrink
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Raisins
	  Exile_Item_EnergyDrink
	  Binocular
	  Exile_Item_GloriousKnakworst
	*/
	class Civillian
	{
		count = 87;
		half = 7378.15354851366;
		halfIndex = 43;
		sum = 10000;
		items[] = 
		{
			{554.016620498615, "Exile_Item_Heatpack"}, // 5.54%
			{969.529085872576, "ItemCompass"}, // 4.16%
			{1385.04155124654, "Binocular"}, // 4.16%
			{1800.5540166205, "ItemMap"}, // 4.16%
			{2079.02797930499, "Exile_Item_PlasticBottleCoffee"}, // 2.78%
			{2357.50194198948, "Exile_Item_ChocolateMilk"}, // 2.78%
			{2635.97590467397, "Exile_Item_MountainDupe"}, // 2.78%
			{2914.44986735845, "Exile_Item_EnergyDrink"}, // 2.78%
			{3192.92383004294, "Exile_Item_Beer"}, // 2.78%
			{3471.39779272743, "Exile_Item_PlasticBottleFreshWater"}, // 2.78%
			{3749.87175541192, "Exile_Item_PowerDrink"}, // 2.78%
			{4026.88006566123, "ItemRadio"}, // 2.77%
			{4158.45901302965, "Exile_Item_Can_Empty"}, // 1.32%
			{4290.03796039807, "Exile_Item_PlasticBottleEmpty"}, // 1.32%
			{4421.61690776649, "Exile_Item_ToiletPaper"}, // 1.32%
			{4533.00649284029, "Exile_Item_SausageGravy"}, // 1.11%
			{4644.39607791408, "Exile_Item_Surstromming"}, // 1.11%
			{4755.78566298788, "Exile_Item_CanOpener"}, // 1.11%
			{4867.17524806167, "Exile_Item_Matches"}, // 1.11%
			{4978.56483313547, "Exile_Item_EMRE"}, // 1.11%
			{5089.95441820926, "Exile_Item_GloriousKnakworst"}, // 1.11%
			{5201.34400328306, "Exile_Item_InstantCoffee"}, // 1.11%
			{5312.73358835685, "Exile_Item_Raisins"}, // 1.11%
			{5424.12317343065, "Exile_Item_SeedAstics"}, // 1.11%
			{5535.51275850444, "Exile_Item_Moobar"}, // 1.11%
			{5646.90234357824, "Exile_Item_Noodles"}, // 1.11%
			{5758.29192865204, "Exile_Item_DsNuts"}, // 1.11%
			{5869.68151372583, "Exile_Item_Cheathas"}, // 1.11%
			{5981.07109879963, "Exile_Item_BeefParts"}, // 1.11%
			{6092.46068387342, "Exile_Item_Dogfood"}, // 1.11%
			{6203.85026894722, "Exile_Item_CatFood"}, // 1.11%
			{6315.23985402101, "Exile_Item_BBQSandwich"}, // 1.11%
			{6426.62943909481, "Exile_Item_MacasCheese"}, // 1.11%
			{6538.0190241686, "Exile_Item_ChristmasTinner"}, // 1.11%
			{6649.4086092424, "Exile_Item_CockONut"}, // 1.11%
			{6730.38026916143, "CUP_B_RPGPack_Khaki"}, // 0.81%
			{6811.35192908046, "CUP_B_AssaultPack_Coyote"}, // 0.81%
			{6892.32358899948, "TRYK_B_tube_blk"}, // 0.81%
			{6973.29524891851, "B_TacticalPack_rgr"}, // 0.81%
			{7054.26690883754, "B_TacticalPack_blk"}, // 0.81%
			{7135.23856875657, "B_Kitbag_rgr"}, // 0.81%
			{7216.2102286756, "CUP_B_AlicePack_Khaki"}, // 0.81%
			{7297.18188859463, "CUP_B_ACRScout_m95"}, // 0.81%
			{7378.15354851366, "B_Kitbag_cbr"}, // 0.81%
			{7459.12520843269, "CUP_B_CivPack_WDL"}, // 0.81%
			{7540.09686835171, "B_AssaultPack_khk"}, // 0.81%
			{7621.06852827074, "B_AssaultPack_cbr"}, // 0.81%
			{7702.04018818977, "B_AssaultPack_blk"}, // 0.81%
			{7777.22815811458, "V_Press_F"}, // 0.75%
			{7852.4161280394, "V_Chestrig_blk"}, // 0.75%
			{7927.60409796421, "V_Chestrig_rgr"}, // 0.75%
			{8002.79206788902, "CUP_V_O_Ins_Carrier_Rig_Com"}, // 0.75%
			{8077.98003781383, "TAC_LBT_HL3_OD"}, // 0.75%
			{8153.16800773864, "TAC_LBT_HL3_B"}, // 0.75%
			{8228.35597766346, "V_TacChestrig_grn_F"}, // 0.75%
			{8303.54394758827, "V_HarnessO_brn"}, // 0.75%
			{8378.73191751308, "V_BandollierB_rgr"}, // 0.75%
			{8453.9198874379, "V_BandollierB_oli"}, // 0.75%
			{8529.10785736271, "V_BandollierB_blk"}, // 0.75%
			{8604.29582728752, "V_Rangemaster_belt"}, // 0.75%
			{8679.48379721234, "V_HarnessOGL_brn"}, // 0.75%
			{8754.67176713715, "TRYK_V_Bulletproof_BL"}, // 0.75%
			{8823.92384469948, "CUP_hgun_TaurusTracker455"}, // 0.69%
			{8893.1759222618, "CUP_hgun_SA61"}, // 0.69%
			{8962.42799982413, "CUP_hgun_Makarov"}, // 0.69%
			{9031.68007738646, "CUP_hgun_M9"}, // 0.69%
			{9100.93215494878, "CUP_hgun_Colt1911"}, // 0.69%
			{9170.18423251111, "CUP_hgun_Glock17"}, // 0.69%
			{9239.43631007344, "CUP_hgun_Compact"}, // 0.69%
			{9297.91584223718, "hlc_rifle_M1903A1"}, // 0.58%
			{9356.39537440092, "CUP_sgun_M1014"}, // 0.58%
			{9414.87490656467, "CUP_srifle_CZ550"}, // 0.58%
			{9473.35443872841, "CUP_srifle_LeeEnfield_rail"}, // 0.58%
			{9531.83397089215, "CUP_smg_MP5SD6"}, // 0.58%
			{9590.3135030559, "CUP_smg_MP5A5"}, // 0.58%
			{9648.79303521964, "CUP_sgun_Saiga12K"}, // 0.58%
			{9707.27256738338, "CUP_smg_bizon"}, // 0.58%
			{9765.75209954712, "hlc_rifle_M1903A1_unertl"}, // 0.58%
			{9799.16897506926, "Exile_Item_CookingPot"}, // 0.33%
			{9832.06371191137, "Exile_Item_Magazine02"}, // 0.33%
			{9864.95844875347, "Exile_Item_Magazine03"}, // 0.33%
			{9897.85318559558, "Exile_Item_Magazine01"}, // 0.33%
			{9930.74792243768, "Exile_Item_Magazine04"}, // 0.33%
			{9951.52354570638, "hlc_smg_mp5k"}, // 0.21%
			{9972.29916897508, "CUP_hgun_MicroUzi"}, // 0.21%
			{9986.14958448754, "ItemWatch"}, // 0.14%
			{10000, "ItemGPS"} // 0.14%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_MetalScrews
	  Exile_Item_MetalWire
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ZipTie
	  Exile_Item_CamoTentKit
	  Exile_Item_Can_Empty
	  Exile_Item_MetalBoard
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_ExtensionCord
	  Exile_Item_Pliers
	  Exile_Item_MetalPole
	  Exile_Item_CarWheel
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_ThermalScannerPro
	  Exile_Item_FireExtinguisher
	  Exile_Item_ZipTie
	  Land_TentDome_F_Kit
	  Exile_Item_JunkMetal
	  Exile_Item_MetalBoard
	  Exile_Item_CamoTentKit
	  Exile_Item_CarWheel
	  Exile_Item_DuctTape
	  Exile_Item_MobilePhone
	  Exile_Item_MetalScrews
	  Exile_Melee_SledgeHammer
	  Exile_Item_BaseCameraKit
	  Exile_Item_CarWheel
	  Exile_Item_MetalScrews
	  Exile_Item_CarWheel
	  Exile_Item_Handsaw
	  Exile_Item_Pliers
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  Exile_Item_Knife
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_Sand
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_MetalBoard
	  Exile_Item_LightBulb
	  Exile_Item_MetalWire
	  Exile_Item_Wrench
	  Exile_Item_CarWheel
	  Exile_Item_ExtensionCord
	  Exile_Item_MetalScrews
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_FuelCanisterFull
	  Exile_Item_JunkMetal
	  Exile_Item_ZipTie
	  Exile_Item_MetalScrews
	  Exile_Item_CarWheel
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_ExtensionCord
	  Exile_Item_Foolbox
	  Exile_Item_Grinder
	  Exile_Item_CarWheel
	  Exile_Melee_Axe
	  Exile_Item_ThermalScannerPro
	  Exile_Item_ExtensionCord
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_MetalPole
	  Exile_Item_JunkMetal
	  Exile_Item_ZipTie
	  Exile_Item_MetalHedgehogKit
	  Exile_Item_MetalPole
	  Exile_Item_Hammer
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_FloodLightKit
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Shovel
	  Exile_Item_Wrench
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_SledgeHammer
	  Exile_Item_Grinder
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_Knife
	  Exile_Item_MetalPole
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_MetalHedgehogKit
	  Land_TentDome_F_Kit
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalScrews
	  Exile_Item_Magazine03
	*/
	class Industrial
	{
		count = 43;
		half = 7322.12475633529;
		halfIndex = 21;
		sum = 10000;
		items[] = 
		{
			{467.836257309942, "Exile_Item_FuelCanisterEmpty"}, // 4.68%
			{935.672514619883, "Exile_Item_MetalScrews"}, // 4.68%
			{1403.50877192982, "Exile_Item_MetalPole"}, // 4.68%
			{1871.34502923977, "Exile_Item_MetalHedgehogKit"}, // 4.68%
			{2339.18128654971, "Exile_Item_JunkMetal"}, // 4.68%
			{2807.01754385965, "Exile_Item_DuctTape"}, // 4.68%
			{3274.85380116959, "Exile_Item_CarWheel"}, // 4.68%
			{3742.69005847953, "Exile_Item_ZipTie"}, // 4.68%
			{4159.3567251462, "Exile_Item_Can_Empty"}, // 4.17%
			{4576.02339181287, "Exile_Item_PlasticBottleEmpty"}, // 4.17%
			{4992.69005847953, "Exile_Item_ToiletPaper"}, // 4.17%
			{5226.6081871345, "Exile_Item_MobilePhone"}, // 2.34%
			{5460.52631578948, "Exile_Item_CamoTentKit"}, // 2.34%
			{5694.44444444445, "Land_TentDome_F_Kit"}, // 2.34%
			{5928.36257309942, "Exile_Item_ExtensionCord"}, // 2.34%
			{6162.28070175439, "Exile_Item_FireExtinguisher"}, // 2.34%
			{6396.19883040936, "Exile_Item_MetalBoard"}, // 2.34%
			{6581.38401559454, "Exile_Melee_Axe"}, // 1.85%
			{6766.56920077973, "Exile_Item_Foolbox"}, // 1.85%
			{6951.75438596491, "Exile_Item_Hammer"}, // 1.85%
			{7136.9395711501, "Exile_Item_Handsaw"}, // 1.85%
			{7322.12475633529, "Exile_Item_Pliers"}, // 1.85%
			{7507.30994152047, "Exile_Item_Shovel"}, // 1.85%
			{7692.49512670566, "Exile_Item_Wrench"}, // 1.85%
			{7877.68031189084, "Exile_Item_Grinder"}, // 1.85%
			{8062.86549707603, "Exile_Melee_SledgeHammer"}, // 1.85%
			{8179.82456140351, "Exile_Item_ThermalScannerPro"}, // 1.17%
			{8296.783625731, "Exile_Item_MetalWire"}, // 1.17%
			{8413.74269005848, "Exile_Item_LightBulb"}, // 1.17%
			{8530.70175438597, "Exile_Item_Knife"}, // 1.17%
			{8647.66081871346, "Exile_Item_FuelCanisterFull"}, // 1.17%
			{8764.61988304094, "Exile_Item_Sand"}, // 1.17%
			{8881.57894736843, "Exile_Item_Rope"}, // 1.17%
			{8998.53801169591, "Exile_Item_PortableGeneratorKit"}, // 1.17%
			{9115.4970760234, "Exile_Item_FloodLightKit"}, // 1.17%
			{9232.45614035089, "Exile_Item_OilCanister"}, // 1.17%
			{9349.41520467837, "Exile_Item_Cement"}, // 1.17%
			{9466.37426900586, "Exile_Item_Laptop"}, // 1.17%
			{9583.33333333334, "Exile_Item_BaseCameraKit"}, // 1.17%
			{9687.50000000001, "Exile_Item_Magazine02"}, // 1.04%
			{9791.66666666668, "Exile_Item_Magazine03"}, // 1.04%
			{9895.83333333334, "Exile_Item_Magazine04"}, // 1.04%
			{10000, "Exile_Item_Magazine01"} // 1.04%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_CarWheel
	  Exile_Item_DuctTape
	  Exile_Item_CarWheel
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CarWheel
	  Exile_Item_CarWheel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Item_OilCanister
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_OilCanister
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_CarWheel
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_OilCanister
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Foolbox
	*/
	class Factories
	{
		count = 14;
		half = 8303.57142857143;
		halfIndex = 7;
		sum = 10000;
		items[] = 
		{
			{1428.57142857143, "Exile_Item_Can_Empty"}, // 14.29%
			{2857.14285714286, "Exile_Item_ToiletPaper"}, // 14.29%
			{4285.71428571429, "Exile_Item_PlasticBottleEmpty"}, // 14.29%
			{5625, "Exile_Item_FuelCanisterEmpty"}, // 13.39%
			{6964.28571428571, "Exile_Item_DuctTape"}, // 13.39%
			{7410.71428571429, "Exile_Item_CarWheel"}, // 4.46%
			{7857.14285714286, "Exile_Item_JunkMetal"}, // 4.46%
			{8303.57142857143, "Exile_Item_OilCanister"}, // 4.46%
			{8660.71428571428, "Exile_Item_Magazine01"}, // 3.57%
			{9017.85714285714, "Exile_Item_Magazine02"}, // 3.57%
			{9375, "Exile_Item_Magazine03"}, // 3.57%
			{9732.14285714286, "Exile_Item_Magazine04"}, // 3.57%
			{9866.07142857143, "Exile_Item_Foolbox"}, // 1.34%
			{10000, "Exile_Item_Wrench"} // 1.34%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_arifle_M16A2
	  hlc_20Rnd_762x51_TDim_fal
	  CUP_20Rnd_B_765x17_Ball_M
	  CUP_V_B_IOTV_AT
	  hlc_muzzle_Tundra
	  TRYK_V_PlateCarrier_wood
	  CUP_U_B_USMC_FROG4_WMARPAT
	  hlc_rifle_ak74
	  CUP_optic_LeupoldMk4_10x40_LRT_Woodland
	  CUP_H_RACS_Helmet_olive
	  CUP_optic_SB_3_12x50_PMII
	  hlc_rifle_hk33a2RIS
	  G_Carryall_Ammo
	  hlc_rifle_RU5562
	  CUP_H_USArmy_HelmetMICH_earpro
	  hlc_rifle_ak74m_gl
	  CUP_arifle_L85A2
	  30Rnd_580x42_Mag_Tracer_F
	  bipod_02_F_blk
	  CUP_V_B_MTV
	  muzzle_snds_acp
	  hlc_rifle_RU556
	  bipod_03_F_blk
	  CUP_muzzle_snds_M9
	  TRYK_B_Coyotebackpack_OD
	  CUP_arifle_CZ805_A2
	  hlc_muzzle_Agendasix10mm
	  CUP_arifle_L86A2
	  30Rnd_556x45_Stanag_Tracer_Green
	  hlc_30rnd_556x45_SOST_G36
	  B_Carryall_ocamo
	  CUP_arifle_M16A2
	  B_Carryall_mcamo
	  CUP_optic_LeupoldMk4_CQ_T
	  HLC_Optic_1p29
	  CUP_V_B_IOTV_SL
	  CUP_V_BAF_Osprey_Mk2_DDPM_Empty
	  hlc_30Rnd_545x39_B_AK
	  hlc_rifle_ak74m_MTK
	  hlc_rifle_ak74m_gl
	  hlc_rifle_M4
	  CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B
	  CUP_arifle_CZ805_A2
	  CUP_V_I_RACS_Carrier_Vest_wdl_3
	  TRYK_U_B_BLKBLK_CombatUniform
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hlc_20Rnd_762x51_TDim_fal
	  hlc_30Rnd_556x45_SPR_AUG
	  B_Carryall_oucamo
	  TRYK_H_Helmet_WOOD
	  CUP_srifle_Mk12SPR
	  hlc_muzzle_snds_HK33
	  B_Carryall_ghex_F
	  TRYK_B_Coyotebackpack_WH
	  TRYK_T_camo_wood_marpat
	  hlc_60Rnd_545x39_t_rpk
	  hlc_rifle_bcmjack
	  TRYK_B_Carryall_wood
	  CUP_arifle_L85A2
	  B_Carryall_mcamo
	  20Rnd_762x51_Mag
	  H_HelmetSpecB
	  optic_LRPS_tna_F
	  hlc_20Rnd_762x51_T_amt
	  TRYK_B_Carryall_JSDF
	  optic_Arco_blk_F
	  20Rnd_650x39_Cased_Mag_F
	  H_HelmetB_grass
	  muzzle_HBADGER
	  CUP_arifle_CZ805_A2
	  CUP_arifle_Mk16_SV
	  hlc_rifle_bcmjack
	  V_TacVestIR_blk
	  hlc_rifle_aek971
	  arifle_SPAR_01_blk_F
	  optic_ACO_grn_smg
	  hlc_30rnd_556x45_Tracers_G36
	  hlc_rifle_G36KV
	  CUP_30Rnd_Sa58_M_TracerG
	  hlc_muzzle_762SUP_AK
	  TAC_V_Sheriff_BA_TB3
	  CUP_optic_Eotech533Grey
	  hlc_24Rnd_75x55_T_stgw
	  hlc_rifle_Colt727_GL
	  CUP_30Rnd_9x19_UZI
	  30Rnd_556x45_Stanag_green
	  150Rnd_556x45_Drum_Mag_Tracer_F
	  B_Carryall_ghex_F
	  CUP_srifle_Mk12SPR
	  30Rnd_545x39_Mag_Green_F
	  hlc_rifle_auga3
	  TRYK_B_Carryall_wh
	  30Rnd_556x45_Stanag
	  hlc_rifle_aek971_mtk
	  H_HelmetB_black
	  TRYK_U_B_Snow_CombatUniform
	  hlc_rifle_bcmjack
	  hlc_rifle_aku12
	  hlc_rifle_hk53RAS
	  CUP_acc_ANPEQ_2_desert
	*/
	class MilitaryLow
	{
		count = 513;
		half = 7325.31818086359;
		halfIndex = 256;
		sum = 9999.99999999993;
		items[] = 
		{
			{158.875864990821, "TRYK_B_Coyotebackpack_WH"}, // 1.59%
			{317.751729981641, "TRYK_B_Carryall_wh"}, // 1.59%
			{373.099730535121, "CUP_arifle_Mk16_STD_EGLM"}, // 0.55%
			{428.447731088601, "hlc_rifle_hk53"}, // 0.55%
			{483.795731642081, "hlc_rifle_hk53RAS"}, // 0.55%
			{539.143732195561, "CUP_arifle_L85A2"}, // 0.55%
			{594.491732749041, "CUP_arifle_L86A2"}, // 0.55%
			{649.839733302521, "CUP_arifle_M16A2"}, // 0.55%
			{705.187733856001, "CUP_arifle_M16A4_Base"}, // 0.55%
			{760.535734409481, "CUP_arifle_M4A1_black"}, // 0.55%
			{815.883734962961, "CUP_arifle_M4A1_camo"}, // 0.55%
			{871.231735516441, "CUP_arifle_M4A1_desert"}, // 0.55%
			{926.579736069921, "CUP_srifle_Mk12SPR"}, // 0.55%
			{981.927736623401, "CUP_arifle_Mk16_CQC_FG"}, // 0.55%
			{1037.27573717688, "CUP_arifle_Mk16_SV"}, // 0.55%
			{1092.62373773036, "hlc_rifle_hk33a2RIS"}, // 0.55%
			{1147.97173828384, "arifle_Mk20_F"}, // 0.55%
			{1203.31973883732, "hlc_rifle_samr2"}, // 0.55%
			{1258.6677393908, "arifle_SPAR_01_blk_F"}, // 0.55%
			{1314.01573994428, "hlc_rifle_auga3_b"}, // 0.55%
			{1369.36374049776, "hlc_rifle_auga3_bl"}, // 0.55%
			{1424.71174105124, "hlc_rifle_auga3"}, // 0.55%
			{1480.05974160472, "hlc_rifle_auga3_GL_B"}, // 0.55%
			{1535.4077421582, "arifle_TRG20_F"}, // 0.55%
			{1590.75574271168, "hlc_rifle_aek971"}, // 0.55%
			{1646.10374326516, "hlc_rifle_aek971_mtk"}, // 0.55%
			{1701.45174381864, "CUP_arifle_Mk16_STD_FG"}, // 0.55%
			{1756.79974437212, "hlc_rifle_hk33a2"}, // 0.55%
			{1812.1477449256, "CUP_arifle_L85A2_G"}, // 0.55%
			{1867.49574547908, "hlc_rifle_G36V"}, // 0.55%
			{1922.84374603256, "hlc_rifle_G36TAC"}, // 0.55%
			{1978.19174658604, "hlc_rifle_RU5562"}, // 0.55%
			{2033.53974713952, "hlc_rifle_RU556"}, // 0.55%
			{2088.887747693, "hlc_rifle_bcmjack"}, // 0.55%
			{2144.23574824648, "hlc_rifle_Colt727"}, // 0.55%
			{2199.58374879996, "hlc_rifle_Colt727_GL"}, // 0.55%
			{2254.93174935344, "hlc_rifle_M4"}, // 0.55%
			{2310.27974990692, "arifle_CTAR_blk_F"}, // 0.55%
			{2365.6277504604, "hlc_rifle_CQBR"}, // 0.55%
			{2420.97575101388, "CUP_arifle_CZ805_A1"}, // 0.55%
			{2476.32375156736, "CUP_arifle_CZ805_GL"}, // 0.55%
			{2531.67175212084, "CUP_arifle_CZ805_A2"}, // 0.55%
			{2587.01975267432, "hlc_rifle_G36C"}, // 0.55%
			{2642.3677532278, "hlc_rifle_m4m203"}, // 0.55%
			{2697.71575378128, "hlc_rifle_G36KV"}, // 0.55%
			{2750.67437544489, "B_Carryall_cbr"}, // 0.53%
			{2803.6329971085, "B_Carryall_ghex_F"}, // 0.53%
			{2856.5916187721, "B_Carryall_ocamo"}, // 0.53%
			{2909.55024043571, "G_Carryall_Ammo"}, // 0.53%
			{2962.50886209932, "B_Carryall_mcamo"}, // 0.53%
			{3015.46748376292, "B_Carryall_oucamo"}, // 0.53%
			{3068.42610542653, "TRYK_B_Carryall_JSDF"}, // 0.53%
			{3121.38472709014, "TRYK_B_Coyotebackpack_BLK"}, // 0.53%
			{3174.34334875374, "B_Carryall_khk"}, // 0.53%
			{3227.30197041735, "TRYK_B_Carryall_blk"}, // 0.53%
			{3280.26059208096, "TRYK_B_Coyotebackpack_OD"}, // 0.53%
			{3333.21921374456, "TRYK_B_Carryall_wood"}, // 0.53%
			{3386.17783540817, "TRYK_B_Coyotebackpack"}, // 0.53%
			{3419.21311708901, "Exile_Vest_Snow"}, // 0.33%
			{3452.24839876984, "CUP_V_B_IOTV_SL"}, // 0.33%
			{3485.28368045068, "CUP_V_B_MTV"}, // 0.33%
			{3518.31896213151, "CUP_V_I_RACS_Carrier_Vest_wdl_3"}, // 0.33%
			{3551.35424381235, "CUP_V_BAF_Osprey_Mk2_DDPM_Empty"}, // 0.33%
			{3584.38952549318, "CUP_V_BAF_Osprey_Mk2_DPM_Empty"}, // 0.33%
			{3617.42480717402, "V_TacVestIR_blk"}, // 0.33%
			{3650.46008885485, "TAC_PBDFG2_B_1"}, // 0.33%
			{3683.49537053569, "TAC_PBDFG2CPL_BK"}, // 0.33%
			{3716.53065221652, "TAC_ArmorVest_Winter"}, // 0.33%
			{3749.56593389736, "CUP_V_B_IOTV_AT"}, // 0.33%
			{3782.60121557819, "CUP_V_B_Eagle_SPC_Officer"}, // 0.33%
			{3815.63649725903, "TRYK_V_PlateCarrier_ACU_L"}, // 0.33%
			{3848.67177893986, "TAC_V_Sheriff_BA_TB2"}, // 0.33%
			{3881.70706062069, "TRYK_V_PlateCarrier_JSDF"}, // 0.33%
			{3914.74234230153, "TRYK_V_PlateCarrier_blk_L"}, // 0.33%
			{3947.77762398236, "TRYK_V_PlateCarrier_wood"}, // 0.33%
			{3980.8129056632, "TRYK_V_PlateCarrier_ACU"}, // 0.33%
			{4013.84818734403, "TRYK_V_ArmorVest_Delta"}, // 0.33%
			{4046.88346902487, "TRYK_V_ArmorVest_Ranger2"}, // 0.33%
			{4079.9187507057, "TRYK_V_ArmorVest_AOR2_2"}, // 0.33%
			{4112.95403238654, "TAC_V_tacSVD_ODL"}, // 0.33%
			{4145.98931406737, "TAC_V_tacSVD_BK"}, // 0.33%
			{4179.02459574821, "TAC_EI_RRVCQB_B"}, // 0.33%
			{4212.05987742905, "TAC_V_Sheriff_BA_TL"}, // 0.33%
			{4245.09515910988, "TAC_V_Sheriff_BA_TBL"}, // 0.33%
			{4278.13044079072, "V_PlateCarrier1_rgr"}, // 0.33%
			{4311.16572247155, "TAC_V_Sheriff_BA_T3"}, // 0.33%
			{4344.20100415239, "TAC_V_Sheriff_BA_TB3"}, // 0.33%
			{4377.23628583322, "TAC_V_CTBA"}, // 0.33%
			{4410.27156751406, "V_PlateCarrier1_blk"}, // 0.33%
			{4437.9455677908, "hlc_rifle_aks74u_MTK"}, // 0.28%
			{4465.61956806754, "hlc_rifle_aks74u"}, // 0.28%
			{4493.29356834428, "hlc_rifle_aks74_GL"}, // 0.28%
			{4520.96756862102, "hlc_rifle_aks74"}, // 0.28%
			{4548.64156889776, "hlc_rifle_ak74m_MTK"}, // 0.28%
			{4576.3155691745, "hlc_rifle_ak74m_gl"}, // 0.28%
			{4603.98956945124, "hlc_rifle_ak74m"}, // 0.28%
			{4631.66356972798, "hlc_rifle_ak74"}, // 0.28%
			{4659.33757000472, "hlc_rifle_ak74_MTK"}, // 0.28%
			{4687.01157028146, "hlc_rifle_ak12GL"}, // 0.28%
			{4714.6855705582, "hlc_rifle_aku12"}, // 0.28%
			{4742.35957083494, "hlc_rifle_ak12"}, // 0.28%
			{4770.03357111168, "hlc_rifle_aks74_MTK"}, // 0.28%
			{4791.84667642535, "hlc_muzzle_snds_AUG"}, // 0.22%
			{4813.65978173902, "hlc_muzzle_snds_fal"}, // 0.22%
			{4835.4728870527, "muzzle_HBADGER"}, // 0.22%
			{4857.28599236637, "hlc_muzzle_762SUP_AK"}, // 0.22%
			{4879.09909768004, "hlc_muzzle_545SUP_AK"}, // 0.22%
			{4900.91220299371, "hlc_muzzle_300blk_KAC"}, // 0.22%
			{4922.72530830738, "CUP_muzzle_snds_XM8"}, // 0.22%
			{4944.53841362106, "hlc_muzzle_snds_g3"}, // 0.22%
			{4966.35151893473, "hlc_muzzle_snds_HK33"}, // 0.22%
			{4988.1646242484, "hlc_muzzle_snds_M14"}, // 0.22%
			{5009.97772956207, "hlc_muzzle_Agendasix"}, // 0.22%
			{5031.79083487575, "hlc_muzzle_Agendasix10mm"}, // 0.22%
			{5053.60394018942, "CUP_muzzle_snds_L85"}, // 0.22%
			{5075.41704550309, "CUP_acc_sffh"}, // 0.22%
			{5097.23015081676, "CUP_acc_bfa"}, // 0.22%
			{5119.04325613043, "CUP_muzzle_snds_M110"}, // 0.22%
			{5140.85636144411, "CUP_muzzle_snds_M14"}, // 0.22%
			{5162.66946675778, "CUP_muzzle_snds_Mk12"}, // 0.22%
			{5184.48257207145, "CUP_muzzle_snds_SCAR_L"}, // 0.22%
			{5206.29567738512, "CUP_muzzle_mfsup_SCAR_L"}, // 0.22%
			{5228.1087826988, "CUP_muzzle_snds_SCAR_H"}, // 0.22%
			{5249.92188801247, "CUP_muzzle_mfsup_SCAR_H"}, // 0.22%
			{5271.73499332614, "CUP_muzzle_snds_MicroUzi"}, // 0.22%
			{5293.54809863981, "CUP_muzzle_snds_M9"}, // 0.22%
			{5315.36120395348, "hlc_muzzle_snds_a6AUG"}, // 0.22%
			{5337.17430926716, "CUP_muzzle_PB6P9"}, // 0.22%
			{5358.98741458083, "muzzle_snds_H_MG"}, // 0.22%
			{5380.8005198945, "muzzle_snds_B"}, // 0.22%
			{5402.61362520817, "muzzle_snds_L"}, // 0.22%
			{5424.42673052184, "muzzle_snds_H"}, // 0.22%
			{5446.23983583552, "hlc_muzzle_Tundra"}, // 0.22%
			{5468.05294114919, "muzzle_snds_H_SW"}, // 0.22%
			{5489.86604646286, "muzzle_snds_M"}, // 0.22%
			{5511.67915177653, "muzzle_snds_acp"}, // 0.22%
			{5533.49225709021, "muzzle_snds_m_khk_F"}, // 0.22%
			{5555.30536240388, "muzzle_snds_m_snd_F"}, // 0.22%
			{5577.11846771755, "CUP_muzzle_PBS4"}, // 0.22%
			{5598.93157303122, "hlc_muzzle_556NATO_KAC"}, // 0.22%
			{5620.74467834489, "CUP_muzzle_Bizon"}, // 0.22%
			{5638.76919168303, "H_HelmetB_black"}, // 0.18%
			{5656.79370502117, "TRYK_H_WH"}, // 0.18%
			{5674.81821835931, "TRYK_H_Helmet_Snow"}, // 0.18%
			{5692.84273169745, "TRYK_H_Helmet_Winter_2"}, // 0.18%
			{5710.86724503559, "TRYK_H_Helmet_Winter"}, // 0.18%
			{5728.89175837373, "CUP_H_CDF_H_PASGT_FST"}, // 0.18%
			{5746.91627171187, "CUP_H_CDF_H_PASGT_UN"}, // 0.18%
			{5764.94078505001, "H_HelmetB"}, // 0.18%
			{5782.96529838815, "H_HelmetB_grass"}, // 0.18%
			{5800.98981172629, "TRYK_H_Helmet_WOOD"}, // 0.18%
			{5819.01432506443, "CUP_H_USArmy_Helmet_ECH1_Green"}, // 0.18%
			{5837.03883840257, "H_HelmetSpecB"}, // 0.18%
			{5855.06335174071, "CUP_H_USMC_HelmetWDL"}, // 0.18%
			{5873.08786507885, "CUP_H_RACS_Helmet_olive"}, // 0.18%
			{5891.11237841699, "CUP_H_RACS_Helmet_wdl"}, // 0.18%
			{5909.13689175513, "CUP_H_USArmy_HelmetMICH_earpro"}, // 0.18%
			{5927.16140509327, "CUP_H_USArmy_Helmet_ECH1_Black"}, // 0.18%
			{5945.18591843141, "H_HelmetB_TI_tna_F"}, // 0.18%
			{5963.21043176954, "CUP_H_USMC_MICH2000_ESS_COMM_WDL"}, // 0.18%
			{5980.33371944078, "bipod_03_F_oli"}, // 0.17%
			{5997.45700711201, "bipod_01_F_khk"}, // 0.17%
			{6014.58029478324, "CUP_bipod_Harris_1A2_L"}, // 0.17%
			{6031.70358245448, "CUP_bipod_VLTOR_Modpod"}, // 0.17%
			{6048.82687012571, "HLC_Bipod_G36"}, // 0.17%
			{6065.95015779694, "bipod_02_F_tan"}, // 0.17%
			{6083.07344546818, "bipod_01_F_snd"}, // 0.17%
			{6100.19673313941, "bipod_01_F_blk"}, // 0.17%
			{6117.32002081064, "bipod_01_F_mtp"}, // 0.17%
			{6134.44330848187, "bipod_02_F_blk"}, // 0.17%
			{6151.56659615311, "bipod_02_F_hex"}, // 0.17%
			{6168.68988382434, "bipod_03_F_blk"}, // 0.17%
			{6184.11626911374, "TRYK_U_B_woodtan_CombatUniform"}, // 0.15%
			{6199.54265440314, "TRYK_T_camo_wood_marpat"}, // 0.15%
			{6214.96903969254, "TRYK_U_B_PCUHsW4"}, // 0.15%
			{6230.39542498194, "TRYK_hoodie_Wood"}, // 0.15%
			{6245.82181027134, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.15%
			{6261.24819556073, "TRYK_U_B_BLK"}, // 0.15%
			{6276.67458085013, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.15%
			{6292.10096613953, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.15%
			{6307.52735142893, "TRYK_U_B_ARO2_CombatUniform"}, // 0.15%
			{6322.95373671833, "Exile_Uniform_Woodland"}, // 0.15%
			{6338.38012200773, "TRYK_U_B_JSDF_CombatUniform"}, // 0.15%
			{6353.80650729713, "TRYK_B_USMC_R"}, // 0.15%
			{6369.23289258653, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.15%
			{6384.65927787593, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.15%
			{6400.08566316533, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 0.15%
			{6415.51204845473, "TRYK_U_B_Snow_CombatUniform"}, // 0.15%
			{6430.93843374413, "TRYK_U_B_Snowt"}, // 0.15%
			{6446.36481903352, "TRYK_U_B_PCUHsW5"}, // 0.15%
			{6461.79120432292, "TRYK_U_B_PCUHsW2"}, // 0.15%
			{6477.21758961232, "TRYK_U_B_PCUHsW"}, // 0.15%
			{6492.64397490172, "TRYK_U_B_PCUHsW6"}, // 0.15%
			{6508.07036019112, "TRYK_U_B_Wood_T"}, // 0.15%
			{6521.04254782084, "optic_KHS_tan"}, // 0.13%
			{6534.01473545056, "optic_Arco_blk_F"}, // 0.13%
			{6546.98692308029, "optic_Arco_ghex_F"}, // 0.13%
			{6559.95911071001, "optic_DMS_ghex_F"}, // 0.13%
			{6572.93129833973, "optic_Hamr_khk_F"}, // 0.13%
			{6585.90348596945, "optic_ERCO_blk_F"}, // 0.13%
			{6598.87567359917, "optic_ERCO_khk_F"}, // 0.13%
			{6611.84786122889, "optic_Holosight_blk_F"}, // 0.13%
			{6624.82004885862, "optic_SOS_khk_F"}, // 0.13%
			{6637.79223648834, "optic_LRPS_tna_F"}, // 0.13%
			{6650.76442411806, "optic_LRPS_ghex_F"}, // 0.13%
			{6663.73661174778, "optic_Holosight_khk_F"}, // 0.13%
			{6676.7087993775, "optic_Holosight_smg_blk_F"}, // 0.13%
			{6689.68098700722, "CUP_optic_PSO_1"}, // 0.13%
			{6702.65317463695, "optic_KHS_old"}, // 0.13%
			{6715.62536226667, "optic_ERCO_snd_F"}, // 0.13%
			{6728.59754989639, "optic_KHS_hex"}, // 0.13%
			{6741.56973752611, "optic_SOS"}, // 0.13%
			{6754.54192515583, "optic_AMS_snd"}, // 0.13%
			{6767.51411278556, "optic_Arco"}, // 0.13%
			{6780.48630041528, "optic_Hamr"}, // 0.13%
			{6793.458488045, "optic_Aco"}, // 0.13%
			{6806.43067567472, "optic_ACO_grn"}, // 0.13%
			{6819.40286330444, "optic_Aco_smg"}, // 0.13%
			{6832.37505093416, "optic_ACO_grn_smg"}, // 0.13%
			{6845.34723856389, "optic_Holosight"}, // 0.13%
			{6858.31942619361, "optic_KHS_blk"}, // 0.13%
			{6871.29161382333, "optic_Holosight_smg"}, // 0.13%
			{6884.26380145305, "optic_MRCO"}, // 0.13%
			{6897.23598908277, "optic_DMS"}, // 0.13%
			{6910.20817671249, "optic_Yorris"}, // 0.13%
			{6923.18036434222, "optic_MRD"}, // 0.13%
			{6936.15255197194, "optic_LRPS"}, // 0.13%
			{6949.12473960166, "optic_AMS"}, // 0.13%
			{6962.09692723138, "optic_AMS_khk"}, // 0.13%
			{6975.0691148611, "CUP_optic_Kobra"}, // 0.13%
			{6988.04130249082, "CUP_optic_PechenegScope"}, // 0.13%
			{7001.01349012055, "CUP_optic_PSO_3"}, // 0.13%
			{7013.98567775027, "CUP_optic_LeupoldMk4"}, // 0.13%
			{7026.95786537999, "CUP_optic_ELCAN_SpecterDR"}, // 0.13%
			{7039.93005300971, "CUP_optic_LeupoldMk4_MRT_tan"}, // 0.13%
			{7052.90224063943, "CUP_optic_SB_11_4x20_PM"}, // 0.13%
			{7065.87442826915, "CUP_optic_ZDDot"}, // 0.13%
			{7078.84661589888, "CUP_optic_MRad"}, // 0.13%
			{7091.8188035286, "CUP_optic_TrijiconRx01_desert"}, // 0.13%
			{7104.79099115832, "CUP_optic_TrijiconRx01_black"}, // 0.13%
			{7117.76317878804, "CUP_optic_LeupoldMk4_CQ_T"}, // 0.13%
			{7130.73536641776, "CUP_optic_Elcan"}, // 0.13%
			{7143.70755404748, "CUP_optic_SB_3_12x50_PMII"}, // 0.13%
			{7156.67974167721, "HLC_Optic_1p29"}, // 0.13%
			{7169.65192930693, "hlc_optic_kobra"}, // 0.13%
			{7182.62411693665, "hlc_optic_suit"}, // 0.13%
			{7195.59630456637, "hlc_optic_accupoint_g3"}, // 0.13%
			{7208.56849219609, "hlc_optic_PVS4M14"}, // 0.13%
			{7221.54067982581, "hlc_optic_LRT_m14"}, // 0.13%
			{7234.51286745554, "CUP_optic_Elcan_reflex"}, // 0.13%
			{7247.48505508526, "CUP_optic_ElcanM145"}, // 0.13%
			{7260.45724271498, "HLC_Optic_PSO1"}, // 0.13%
			{7273.4294303447, "CUP_optic_LeupoldMk4_10x40_LRT_Desert"}, // 0.13%
			{7286.40161797442, "CUP_optic_LeupoldMk4_10x40_LRT_Woodland"}, // 0.13%
			{7299.37380560414, "CUP_optic_HoloBlack"}, // 0.13%
			{7312.34599323387, "CUP_optic_HoloWdl"}, // 0.13%
			{7325.31818086359, "CUP_optic_Eotech533"}, // 0.13%
			{7338.29036849331, "CUP_optic_Eotech533Grey"}, // 0.13%
			{7351.26255612303, "CUP_optic_CompM4"}, // 0.13%
			{7364.23474375275, "CUP_optic_SUSAT"}, // 0.13%
			{7377.20693138248, "CUP_optic_ACOG"}, // 0.13%
			{7390.1791190122, "CUP_optic_HoloDesert"}, // 0.13%
			{7403.15130664192, "CUP_optic_CompM2_Black"}, // 0.13%
			{7416.12349427164, "CUP_optic_CompM2_Woodland"}, // 0.13%
			{7429.09568190136, "CUP_optic_CompM2_Woodland2"}, // 0.13%
			{7442.06786953108, "CUP_optic_CompM2_Desert"}, // 0.13%
			{7455.04005716081, "CUP_optic_RCO"}, // 0.13%
			{7468.01224479053, "CUP_optic_RCO_desert"}, // 0.13%
			{7480.98443242025, "CUP_optic_Leupold_VX3"}, // 0.13%
			{7493.95662004997, "CUP_optic_LeupoldM3LR"}, // 0.13%
			{7505.9729622754, "hlc_20Rnd_762x51_Tdim_M14"}, // 0.12%
			{7517.98930450082, "hlc_20Rnd_762x51_Mdim_M14"}, // 0.12%
			{7530.00564672625, "hlc_20Rnd_762x51_T_M14"}, // 0.12%
			{7542.02198895168, "hlc_20Rnd_762x51_mk316_M14"}, // 0.12%
			{7554.0383311771, "CUP_10Rnd_762x54_SVD_M"}, // 0.12%
			{7566.05467340253, "hlc_20Rnd_762x51_B_M14"}, // 0.12%
			{7578.07101562795, "hlc_24Rnd_75x55_T_stgw"}, // 0.12%
			{7590.08735785338, "hlc_24Rnd_75x55_ap_stgw"}, // 0.12%
			{7602.10370007881, "hlc_20Rnd_762x51_S_M14"}, // 0.12%
			{7614.12004230423, "hlc_20Rnd_762x51_barrier_M14"}, // 0.12%
			{7626.13638452966, "hlc_50Rnd_762x51_B_M14"}, // 0.12%
			{7638.15272675509, "hlc_40Rnd_556x45_B_AUG"}, // 0.12%
			{7650.16906898051, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{7662.18541120594, "hlc_30Rnd_556x45_B_AUG"}, // 0.12%
			{7674.20175343137, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.12%
			{7686.21809565679, "hlc_30Rnd_556x45_SPR_AUG"}, // 0.12%
			{7698.23443788222, "hlc_30Rnd_556x45_T_AUG"}, // 0.12%
			{7710.25078010764, "hlc_30Rnd_556x45_MDIM_AUG"}, // 0.12%
			{7722.26712233307, "hlc_30Rnd_556x45_TDIM_AUG"}, // 0.12%
			{7734.2834645585, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.12%
			{7746.29980678392, "hlc_40Rnd_556x45_SPR_AUG"}, // 0.12%
			{7758.31614900935, "hlc_40Rnd_556x45_TDIM_AUG"}, // 0.12%
			{7770.33249123478, "hlc_24Rnd_75x55_B_stgw"}, // 0.12%
			{7782.3488334602, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{7794.36517568563, "hlc_20Rnd_762x51_T_amt"}, // 0.12%
			{7806.38151791106, "hlc_30rnd_556x45_EPR_HK33"}, // 0.12%
			{7818.39786013648, "hlc_20Rnd_762x51_mk316_amt"}, // 0.12%
			{7830.41420236191, "29rnd_300BLK_STANAG_T"}, // 0.12%
			{7842.43054458733, "150Rnd_556x45_Drum_Mag_F"}, // 0.12%
			{7854.44688681276, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.12%
			{7866.46322903819, "30Rnd_556x45_Stanag_red"}, // 0.12%
			{7878.47957126361, "hlc_20Rnd_762x51_bball_amt"}, // 0.12%
			{7890.49591348904, "30Rnd_556x45_Stanag_green"}, // 0.12%
			{7902.51225571447, "29rnd_300BLK_STANAG"}, // 0.12%
			{7914.52859793989, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.12%
			{7926.54494016532, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.12%
			{7938.56128239075, "30Rnd_556x45_Stanag"}, // 0.12%
			{7950.57762461617, "hlc_50rnd_556x45_EPR"}, // 0.12%
			{7962.5939668416, "hlc_30rnd_556x45_TDim"}, // 0.12%
			{7974.61030906702, "hlc_30rnd_556x45_MDim"}, // 0.12%
			{7986.62665129245, "hlc_30rnd_556x45_SPR"}, // 0.12%
			{7998.64299351788, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.12%
			{8010.6593357433, "hlc_20Rnd_762x51_B_fal"}, // 0.12%
			{8022.67567796873, "hlc_20Rnd_762x51_mk316_fal"}, // 0.12%
			{8034.69202019416, "hlc_20Rnd_762x51_barrier_fal"}, // 0.12%
			{8046.70836241958, "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B"}, // 0.12%
			{8058.72470464501, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B"}, // 0.12%
			{8070.74104687043, "CUP_20Rnd_762x51_CZ805B"}, // 0.12%
			{8082.75738909586, "CUP_100Rnd_556x45_BetaCMag"}, // 0.12%
			{8094.77373132129, "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"}, // 0.12%
			{8106.79007354671, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.12%
			{8118.80641577214, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.12%
			{8130.82275799757, "20Rnd_650x39_Cased_Mag_F"}, // 0.12%
			{8142.83910022299, "30Rnd_580x42_Mag_Tracer_F"}, // 0.12%
			{8154.85544244842, "30Rnd_580x42_Mag_F"}, // 0.12%
			{8166.87178467385, "100Rnd_580x42_Mag_Tracer_F"}, // 0.12%
			{8178.88812689927, "hlc_50rnd_762x51_M_FAL"}, // 0.12%
			{8190.9044691247, "hlc_20Rnd_762x51_S_fal"}, // 0.12%
			{8202.92081135012, "hlc_20Rnd_762x51_TDim_fal"}, // 0.12%
			{8214.93715357555, "hlc_20Rnd_762x51_T_fal"}, // 0.12%
			{8226.95349580098, "hlc_30rnd_556x45_SOST"}, // 0.12%
			{8238.9698380264, "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B"}, // 0.12%
			{8250.98618025183, "hlc_30rnd_556x45_EPR"}, // 0.12%
			{8263.00252247726, "30Rnd_545x39_Mag_Tracer_F"}, // 0.12%
			{8275.01886470268, "30Rnd_762x39_Mag_Tracer_F"}, // 0.12%
			{8287.03520692811, "30Rnd_762x39_Mag_Green_F"}, // 0.12%
			{8299.05154915354, "30Rnd_762x39_Mag_F"}, // 0.12%
			{8311.06789137896, "hlc_30rnd_762x39_s_ak"}, // 0.12%
			{8323.08423360439, "hlc_45Rnd_762x39_t_rpk"}, // 0.12%
			{8335.10057582981, "hlc_45Rnd_762x39_m_rpk"}, // 0.12%
			{8347.11691805524, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.12%
			{8359.13326028067, "hlc_30Rnd_762x39_t_ak"}, // 0.12%
			{8371.14960250609, "CUP_5x_22_LR_17_HMR_M"}, // 0.12%
			{8383.16594473152, "CUP_64Rnd_9x19_Bizon_M"}, // 0.12%
			{8395.18228695695, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.12%
			{8407.19862918237, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.12%
			{8419.2149714078, "CUP_30Rnd_9x19_MP5"}, // 0.12%
			{8431.23131363323, "CUP_10x_303_M"}, // 0.12%
			{8443.24765585865, "hlc_30Rnd_762x39_b_ak"}, // 0.12%
			{8455.26399808408, "hlc_30Rnd_545x39_B_AK"}, // 0.12%
			{8467.2803403095, "hlc_30Rnd_545x39_t_ak"}, // 0.12%
			{8479.29668253493, "hlc_30Rnd_545x39_EP_ak"}, // 0.12%
			{8491.31302476036, "CUP_10Rnd_9x19_Compact"}, // 0.12%
			{8503.32936698578, "CUP_17Rnd_9x19_glock17"}, // 0.12%
			{8515.34570921121, "hlc_30Rnd_9x19_B_MP5"}, // 0.12%
			{8527.36205143664, "30Rnd_545x39_Mag_Green_F"}, // 0.12%
			{8539.37839366206, "30Rnd_545x39_Mag_F"}, // 0.12%
			{8551.39473588749, "CUP_7Rnd_45ACP_1911"}, // 0.12%
			{8563.41107811291, "CUP_15Rnd_9x19_M9"}, // 0.12%
			{8575.42742033834, "CUP_8Rnd_9x18_Makarov_M"}, // 0.12%
			{8587.44376256377, "CUP_30Rnd_9x19_UZI"}, // 0.12%
			{8599.46010478919, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.12%
			{8611.47644701462, "CUP_6Rnd_45ACP_M"}, // 0.12%
			{8623.49278924005, "CUP_8Rnd_B_Beneli_74Slug"}, // 0.12%
			{8635.50913146547, "hlc_60Rnd_545x39_t_rpk"}, // 0.12%
			{8647.5254736909, "hlc_30Rnd_545x39_S_AK"}, // 0.12%
			{8659.54181591633, "hlc_45Rnd_545x39_t_rpk"}, // 0.12%
			{8671.55815814175, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.12%
			{8683.57450036718, "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"}, // 0.12%
			{8695.5908425926, "100Rnd_580x42_Mag_F"}, // 0.12%
			{8707.60718481803, "hlc_200rnd_556x45_Mdim_SAW"}, // 0.12%
			{8719.62352704346, "hlc_5rnd_3006_1903"}, // 0.12%
			{8731.63986926888, "CUP_20Rnd_TE1_White_Tracer_762x51_DMR"}, // 0.12%
			{8743.65621149431, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.12%
			{8755.67255371974, "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"}, // 0.12%
			{8767.68889594516, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.12%
			{8779.70523817059, "CUP_20Rnd_762x51_DMR"}, // 0.12%
			{8791.72158039602, "CUP_20Rnd_TE1_White_Tracer_762x51_M110"}, // 0.12%
			{8803.73792262144, "CUP_20Rnd_TE1_Green_Tracer_762x51_M110"}, // 0.12%
			{8815.75426484687, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.12%
			{8827.77060707229, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.12%
			{8839.78694929772, "CUP_20Rnd_762x51_B_M110"}, // 0.12%
			{8851.80329152315, "CUP_20Rnd_762x51_L129_M"}, // 0.12%
			{8863.81963374857, "CUP_20Rnd_B_AA12_74Slug"}, // 0.12%
			{8875.835975974, "CUP_20Rnd_B_AA12_Pellets"}, // 0.12%
			{8887.85231819943, "hlc_200rnd_556x45_M_SAW"}, // 0.12%
			{8899.86866042485, "hlc_30rnd_556x45_SOST_HK33"}, // 0.12%
			{8911.88500265028, "hlc_30rnd_556x45_tdim_HK33"}, // 0.12%
			{8923.90134487571, "CUP_5Rnd_762x51_M24"}, // 0.12%
			{8935.91768710113, "20Rnd_762x51_Mag"}, // 0.12%
			{8947.93402932656, "hlc_100Rnd_762x51_M_M60E4"}, // 0.12%
			{8959.95037155198, "hlc_100Rnd_762x51_B_M60E4"}, // 0.12%
			{8971.96671377741, "hlc_20Rnd_762x51_b_amt"}, // 0.12%
			{8983.98305600284, "CUP_30Rnd_Sa58_M"}, // 0.12%
			{8995.99939822826, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.12%
			{9008.01574045369, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.12%
			{9020.03208267912, "CUP_30Rnd_Sa58_M_TracerG"}, // 0.12%
			{9032.04842490454, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.12%
			{9044.06476712997, "200Rnd_65x39_cased_Box"}, // 0.12%
			{9056.08110935539, "200Rnd_65x39_cased_Box_Tracer"}, // 0.12%
			{9068.09745158082, "hlc_30rnd_556x45_mdim_HK33"}, // 0.12%
			{9080.11379380625, "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"}, // 0.12%
			{9092.13013603167, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.12%
			{9104.1464782571, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.12%
			{9116.16282048253, "CUP_20Rnd_762x51_B_SCAR"}, // 0.12%
			{9128.17916270795, "150Rnd_762x51_Box_Tracer"}, // 0.12%
			{9140.19550493338, "150Rnd_762x51_Box"}, // 0.12%
			{9152.21184715881, "hlc_100Rnd_762x51_Mdim_M60E4"}, // 0.12%
			{9164.22818938423, "hlc_100Rnd_762x51_T_M60E4"}, // 0.12%
			{9176.24453160966, "hlc_100Rnd_762x51_Barrier_M60E4"}, // 0.12%
			{9188.26087383508, "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR"}, // 0.12%
			{9200.27721606051, "hlc_30rnd_556x45_b_HK33"}, // 0.12%
			{9212.29355828594, "hlc_30rnd_556x45_t_HK33"}, // 0.12%
			{9224.30990051136, "30Rnd_65x39_caseless_green"}, // 0.12%
			{9236.32624273679, "100Rnd_65x39_caseless_mag"}, // 0.12%
			{9248.34258496222, "hlc_30rnd_556x45_TDIM_G36"}, // 0.12%
			{9260.35892718764, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.12%
			{9272.37526941307, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.12%
			{9284.3916116385, "30Rnd_65x39_caseless_mag"}, // 0.12%
			{9296.40795386392, "hlc_20rnd_762x51_S_G3"}, // 0.12%
			{9308.42429608935, "hlc_50rnd_762x51_MDIM_G3"}, // 0.12%
			{9320.44063831477, "hlc_50rnd_762x51_M_G3"}, // 0.12%
			{9332.4569805402, "hlc_20rnd_762x51_MDim_G3"}, // 0.12%
			{9344.47332276563, "hlc_30rnd_556x45_EPR_G36"}, // 0.12%
			{9356.48966499105, "hlc_20rnd_762x51_IRDim_G3"}, // 0.12%
			{9368.50600721648, "hlc_20rnd_762x51_barrier_G3"}, // 0.12%
			{9380.52234944191, "hlc_20rnd_762x51_Mk316_G3"}, // 0.12%
			{9392.53869166733, "hlc_20rnd_762x51_b_G3"}, // 0.12%
			{9404.55503389276, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.12%
			{9416.57137611819, "200Rnd_556x45_Box_Tracer_F"}, // 0.12%
			{9428.58771834361, "200Rnd_556x45_Box_Red_F"}, // 0.12%
			{9440.60406056904, "200Rnd_556x45_Box_F"}, // 0.12%
			{9452.62040279446, "hlc_200rnd_556x45_B_SAW"}, // 0.12%
			{9464.63674501989, "hlc_200rnd_556x45_T_SAW"}, // 0.12%
			{9476.65308724532, "hlc_20rnd_762x51_T_G3"}, // 0.12%
			{9488.66942947074, "hlc_30rnd_556x45_SOST_G36"}, // 0.12%
			{9500.68577169617, "CUP_8Rnd_B_Beneli_74Pellets"}, // 0.12%
			{9512.7021139216, "hlc_100rnd_556x45_EPR_G36"}, // 0.12%
			{9524.71845614702, "hlc_30rnd_556x45_MDIM_G36"}, // 0.12%
			{9536.73479837245, "hlc_30rnd_556x45_Tracers_G36"}, // 0.12%
			{9548.75114059787, "hlc_30rnd_556x45_SPR_G36"}, // 0.12%
			{9559.65769325471, "muzzle_snds_H_MG_khk_F"}, // 0.11%
			{9570.56424591155, "CUP_muzzle_snds_G36_black"}, // 0.11%
			{9581.47079856838, "CUP_muzzle_snds_G36_desert"}, // 0.11%
			{9592.37735122522, "CUP_muzzle_snds_AWM"}, // 0.11%
			{9603.28390388205, "CUP_muzzle_snds_M16"}, // 0.11%
			{9614.19045653889, "muzzle_snds_H_khk_F"}, // 0.11%
			{9625.09700919572, "muzzle_snds_H_snd_F"}, // 0.11%
			{9636.00356185256, "muzzle_snds_B_snd_F"}, // 0.11%
			{9646.9101145094, "muzzle_snds_B_khk_F"}, // 0.11%
			{9657.81666716623, "CUP_muzzle_snds_M16_camo"}, // 0.11%
			{9668.72321982307, "muzzle_snds_H_MG_blk_F"}, // 0.11%
			{9677.65710904284, "CUP_acc_Glock17_Flashlight"}, // 0.09%
			{9686.59099826261, "CUP_acc_Flashlight_desert"}, // 0.09%
			{9695.52488748239, "CUP_item_CDF_dogtags"}, // 0.09%
			{9704.45877670216, "CUP_acc_ANPEQ_2_camo"}, // 0.09%
			{9713.39266592194, "CUP_item_Cobalt_File"}, // 0.09%
			{9722.32655514171, "CUP_Mxx_camo_half"}, // 0.09%
			{9731.26044436148, "CUP_acc_ANPEQ_2_grey"}, // 0.09%
			{9740.19433358126, "CUP_acc_CZ_M3X"}, // 0.09%
			{9749.12822280103, "CUP_acc_ANPEQ_2_desert"}, // 0.09%
			{9758.06211202081, "CUP_SVD_camo_g_half"}, // 0.09%
			{9766.99600124058, "CUP_SVD_camo_d"}, // 0.09%
			{9775.92989046035, "acc_pointer_IR"}, // 0.09%
			{9784.86377968013, "acc_flashlight"}, // 0.09%
			{9793.7976688999, "CUP_SVD_camo_d_half"}, // 0.09%
			{9802.73155811967, "CUP_acc_ANPEQ_15"}, // 0.09%
			{9811.66544733945, "CUP_acc_ANPEQ_2"}, // 0.09%
			{9820.59933655922, "CUP_acc_XM8_light_module"}, // 0.09%
			{9829.533225779, "CUP_acc_Flashlight"}, // 0.09%
			{9838.46711499877, "CUP_acc_Flashlight_wdl"}, // 0.09%
			{9847.40100421854, "CUP_SVD_camo_g"}, // 0.09%
			{9856.33489343832, "CUP_Mxx_camo"}, // 0.09%
			{9865.26878265809, "hlc_acc_Surefiregrip"}, // 0.09%
			{9874.20267187787, "CUP_acc_LLM"}, // 0.09%
			{9880.74660347197, "muzzle_snds_65_TI_hex_F"}, // 0.07%
			{9887.29053506607, "muzzle_snds_65_TI_blk_F"}, // 0.07%
			{9893.83446666017, "muzzle_snds_58_hex_F"}, // 0.07%
			{9900.37839825427, "muzzle_snds_58_ghex_F"}, // 0.07%
			{9906.92232984838, "muzzle_snds_58_wdm_F"}, // 0.07%
			{9913.46626144248, "muzzle_snds_58_blk_F"}, // 0.07%
			{9920.01019303658, "muzzle_snds_65_TI_ghex_F"}, // 0.07%
			{9926.49628685144, "HLC_Optic_ZFSG1"}, // 0.06%
			{9931.7921490178, "B_Bergen_tna_F"}, // 0.05%
			{9937.08801118416, "B_Bergen_mcamo_F"}, // 0.05%
			{9942.38387335052, "B_Bergen_hex_F"}, // 0.05%
			{9947.67973551688, "B_Bergen_dgtl_F"}, // 0.05%
			{9950.98326368497, "V_PlateCarrierGL_blk"}, // 0.03%
			{9953.57770121091, "HLC_Optic_G36Export15x2d"}, // 0.03%
			{9956.17213873685, "HLC_Optic_G36Export35x"}, // 0.03%
			{9958.7665762628, "HLC_Optic_G36Export35x2d"}, // 0.03%
			{9961.36101378874, "HLC_Optic_G36Dualoptic15x"}, // 0.03%
			{9963.95545131469, "HLC_Optic_G36Export15x"}, // 0.03%
			{9966.54988884063, "optic_NVS"}, // 0.03%
			{9969.14432636658, "HLC_Optic_G36dualoptic35x"}, // 0.03%
			{9971.73876389252, "HLC_Optic_G36dualoptic35x2d"}, // 0.03%
			{9974.33320141846, "HLC_Optic_G36Dualoptic15x2d"}, // 0.03%
			{9976.51451194983, "muzzle_snds_338_black"}, // 0.02%
			{9978.6958224812, "muzzle_snds_338_green"}, // 0.02%
			{9980.87713301256, "muzzle_snds_338_sand"}, // 0.02%
			{9983.05844354393, "muzzle_snds_93mmg"}, // 0.02%
			{9985.2397540753, "muzzle_snds_93mmg_tan"}, // 0.02%
			{9986.78239260424, "U_I_FullGhillie_lsh"}, // 0.02%
			{9988.32503113318, "TAC_W_ghillie_O1"}, // 0.02%
			{9989.62224989615, "hlc_optic_artel_m14"}, // 0.01%
			{9990.91946865912, "hlc_optic_Kern"}, // 0.01%
			{9992.21668742209, "CUP_optic_NSPU_RPG"}, // 0.01%
			{9993.51390618507, "hlc_optic_PVS4FAL"}, // 0.01%
			{9994.81112494804, "CUP_optic_AN_PVS_4"}, // 0.01%
			{9996.10834371101, "CUP_optic_AN_PVS_10"}, // 0.01%
			{9997.40556247399, "CUP_optic_NSPU"}, // 0.01%
			{9998.70278123696, "hlc_optic_PVS4G3"}, // 0.01%
			{9999.99999999993, "hlc_optic_Kern2d"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  TRYK_B_Carryall_wh
	  hlc_30Rnd_9x19_B_MP5
	  CUP_30Rnd_Sa58_M_TracerG
	  TAC_ArmorVest_Winter
	  hlc_rifle_PSG1A1_RIS
	  TAC_V_Sheriff_BA_TBL
	  hlc_rifle_rpk
	  hlc_muzzle_556NATO_KAC
	  optic_Holosight_smg
	  CUP_H_RACS_Helmet_wdl
	  optic_Arco
	  3Rnd_HE_Grenade_shell
	  CUP_arifle_CZ805_A2
	  CUP_arifle_Mk16_STD_EGLM
	  TRYK_H_WH
	  CUP_muzzle_mfsup_SCAR_H
	  TRYK_B_Coyotebackpack_WH
	  CUP_8Rnd_B_Beneli_74Slug
	  CUP_bipod_VLTOR_Modpod
	  TRYK_V_PlateCarrier_blk_L
	  srifle_DMR_03_tan_F
	  arifle_Mk20_F
	  arifle_MX_SW_Black_F
	  hlc_rifle_ak74m_gl
	  hlc_rifle_hk53RAS
	  hlc_rifle_RU556
	  CUP_muzzle_snds_MicroUzi
	  TRYK_B_Carryall_wh
	  CUP_20Rnd_762x51_CZ805B
	  CUP_acc_ANPEQ_2_desert
	  CUP_arifle_CZ805_GL
	  TRYK_B_Carryall_wh
	  hlc_rifle_G36C
	  CUP_optic_LeupoldMk4_MRT_tan
	  optic_Arco
	  TRYK_V_PlateCarrier_ACU_L
	  TRYK_V_ArmorVest_Ranger2
	  30Rnd_762x39_Mag_Green_F
	  muzzle_snds_H_MG
	  CUP_muzzle_snds_XM8
	  hlc_rifle_auga3_GL_B
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  hlc_rifle_RU5562
	  TRYK_V_PlateCarrier_wood
	  hlc_lmg_m60
	  hlc_30Rnd_545x39_EP_ak
	  hlc_30Rnd_9x19_B_MP5
	  CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag
	  CUP_arifle_M4A1_black
	  CUP_H_USArmy_HelmetMICH_earpro
	  CUP_1Rnd_HE_M203
	  CUP_muzzle_PB6P9
	  CUP_arifle_M4A1_desert
	  ItemGPS
	  hlc_lmg_mk48
	  200Rnd_65x39_cased_Box_Tracer
	  arifle_Mk20_F
	  hlc_rifle_hk33a2RIS
	  TRYK_B_Coyotebackpack_WH
	  hlc_rifle_CQBR
	  hlc_30rnd_556x45_MDIM_G36
	  CUP_H_USMC_MICH2000_ESS_COMM_WDL
	  TRYK_U_B_PCUHsW2
	  30Rnd_556x45_Stanag_Tracer_Yellow
	  CUP_arifle_M4A1_black
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  hlc_30Rnd_762x39_t_ak
	  CUP_H_RACS_Helmet_olive
	  hlc_muzzle_snds_HK33
	  hlc_rifle_RU5562
	  3Rnd_HE_Grenade_shell
	  CUP_arifle_Mk16_STD_FG
	  TAC_V_tacSVD_ODL
	  B_Carryall_oucamo
	  NVGoggles
	  CUP_optic_Leupold_VX3
	  CUP_acc_Glock17_Flashlight
	  hlc_rifle_Colt727_GL
	  hlc_30rnd_556x45_TDIM_G36
	  hlc_muzzle_snds_fal
	  CUP_IED_V4_M
	  optic_KHS_blk
	  hlc_30Rnd_556x45_TDIM_AUG
	  hlc_rifle_auga3
	  hlc_20rnd_762x51_S_G3
	  200Rnd_556x45_Box_Tracer_F
	  hlc_20rnd_762x51_barrier_G3
	  CUP_arifle_M4A1_desert
	  CUP_1Rnd_HE_M203
	  hlc_24Rnd_75x55_B_stgw
	  TRYK_B_Carryall_blk
	  Rangefinder
	  hlc_200rnd_556x45_Mdim_SAW
	  G_Carryall_Ammo
	  hlc_rifle_M21_Rail
	  hlc_m249_pip1
	  CUP_arifle_Mk16_STD_FG
	  CUP_acc_bfa
	  TRYK_B_Coyotebackpack_WH
	  arifle_AK12_F
	*/
	class MilitaryHigh
	{
		count = 614;
		half = 7368.57752886779;
		halfIndex = 307;
		sum = 9999.99999999997;
		items[] = 
		{
			{201.65355918532, "ItemGPS"}, // 2.02%
			{403.307118370639, "Rangefinder"}, // 2.02%
			{538.955517719527, "TRYK_B_Coyotebackpack_WH"}, // 1.36%
			{674.603917068415, "TRYK_B_Carryall_wh"}, // 1.36%
			{749.5776762527, "HandGrenade"}, // 0.75%
			{824.551435436986, "MiniGrenade"}, // 0.75%
			{899.525194621271, "1Rnd_HE_Grenade_shell"}, // 0.75%
			{974.498953805557, "CUP_1Rnd_HE_M203"}, // 0.75%
			{1049.47271298984, "3Rnd_HE_Grenade_shell"}, // 0.75%
			{1124.44647217413, "hlc_VOG25_AK"}, // 0.75%
			{1184.94253992972, "NVGoggles_INDEP"}, // 0.60%
			{1245.43860768532, "NVGoggles"}, // 0.60%
			{1305.93467544092, "NVGoggles_OPFOR"}, // 0.60%
			{1351.15080855721, "TRYK_B_Carryall_JSDF"}, // 0.45%
			{1396.36694167351, "TRYK_B_Carryall_blk"}, // 0.45%
			{1441.5830747898, "TRYK_B_Carryall_wood"}, // 0.45%
			{1486.7992079061, "TRYK_B_Coyotebackpack_OD"}, // 0.45%
			{1532.01534102239, "TRYK_B_Coyotebackpack"}, // 0.45%
			{1577.23147413869, "B_Carryall_oucamo"}, // 0.45%
			{1622.44760725499, "G_Carryall_Ammo"}, // 0.45%
			{1667.66374037128, "TRYK_B_Coyotebackpack_BLK"}, // 0.45%
			{1712.87987348758, "B_Carryall_mcamo"}, // 0.45%
			{1758.09600660387, "B_Carryall_khk"}, // 0.45%
			{1803.31213972017, "B_Carryall_ocamo"}, // 0.45%
			{1848.52827283647, "B_Carryall_ghex_F"}, // 0.45%
			{1893.74440595276, "B_Carryall_cbr"}, // 0.45%
			{1929.18654665806, "hlc_rifle_samr2"}, // 0.35%
			{1964.62868736336, "CUP_arifle_Mk16_STD_EGLM"}, // 0.35%
			{2000.07082806866, "CUP_arifle_Mk16_SV"}, // 0.35%
			{2035.51296877396, "arifle_Mk20_F"}, // 0.35%
			{2070.95510947926, "CUP_arifle_Mk16_STD_FG"}, // 0.35%
			{2106.39725018455, "arifle_SPAR_01_blk_F"}, // 0.35%
			{2141.83939088985, "hlc_rifle_aek971_mtk"}, // 0.35%
			{2177.28153159515, "hlc_rifle_auga3_bl"}, // 0.35%
			{2212.72367230045, "hlc_rifle_auga3"}, // 0.35%
			{2248.16581300575, "hlc_rifle_auga3_GL_B"}, // 0.35%
			{2283.60795371105, "arifle_TRG20_F"}, // 0.35%
			{2319.05009441635, "CUP_arifle_Mk16_CQC_FG"}, // 0.35%
			{2354.49223512164, "hlc_rifle_auga3_b"}, // 0.35%
			{2389.93437582694, "CUP_srifle_Mk12SPR"}, // 0.35%
			{2425.37651653224, "hlc_rifle_aek971"}, // 0.35%
			{2460.81865723754, "CUP_arifle_M4A1_camo"}, // 0.35%
			{2496.26079794284, "hlc_rifle_RU5562"}, // 0.35%
			{2531.70293864814, "hlc_rifle_RU556"}, // 0.35%
			{2567.14507935344, "hlc_rifle_bcmjack"}, // 0.35%
			{2602.58722005874, "arifle_CTAR_blk_F"}, // 0.35%
			{2638.02936076403, "hlc_rifle_Colt727"}, // 0.35%
			{2673.47150146933, "hlc_rifle_Colt727_GL"}, // 0.35%
			{2708.91364217463, "hlc_rifle_M4"}, // 0.35%
			{2744.35578287993, "hlc_rifle_m4m203"}, // 0.35%
			{2779.79792358523, "CUP_arifle_M4A1_desert"}, // 0.35%
			{2815.24006429053, "CUP_arifle_CZ805_A1"}, // 0.35%
			{2850.68220499583, "CUP_arifle_CZ805_GL"}, // 0.35%
			{2886.12434570113, "CUP_arifle_CZ805_A2"}, // 0.35%
			{2921.56648640642, "hlc_rifle_G36C"}, // 0.35%
			{2957.00862711172, "hlc_rifle_CQBR"}, // 0.35%
			{2992.45076781702, "CUP_arifle_M16A4_Base"}, // 0.35%
			{3027.89290852232, "CUP_arifle_M4A1_black"}, // 0.35%
			{3063.33504922762, "hlc_rifle_G36KV"}, // 0.35%
			{3098.77718993292, "CUP_arifle_M16A2"}, // 0.35%
			{3134.21933063822, "CUP_arifle_L86A2"}, // 0.35%
			{3169.66147134351, "CUP_arifle_L85A2_G"}, // 0.35%
			{3205.10361204881, "CUP_arifle_L85A2"}, // 0.35%
			{3240.54575275411, "hlc_rifle_hk53RAS"}, // 0.35%
			{3275.98789345941, "hlc_rifle_hk53"}, // 0.35%
			{3311.43003416471, "hlc_rifle_hk33a2RIS"}, // 0.35%
			{3346.87217487001, "hlc_rifle_hk33a2"}, // 0.35%
			{3382.31431557531, "hlc_rifle_G36TAC"}, // 0.35%
			{3417.75645628061, "hlc_rifle_G36V"}, // 0.35%
			{3445.96201841746, "TRYK_V_PlateCarrier_ACU_L"}, // 0.28%
			{3474.16758055431, "TRYK_V_PlateCarrier_blk_L"}, // 0.28%
			{3502.37314269117, "TRYK_V_PlateCarrier_wood"}, // 0.28%
			{3530.57870482802, "TRYK_V_ArmorVest_Delta"}, // 0.28%
			{3558.78426696487, "TRYK_V_ArmorVest_Ranger2"}, // 0.28%
			{3586.98982910173, "TRYK_V_ArmorVest_AOR2_2"}, // 0.28%
			{3615.19539123858, "TAC_V_tacSVD_ODL"}, // 0.28%
			{3643.40095337543, "TAC_V_tacSVD_BK"}, // 0.28%
			{3671.60651551229, "TAC_EI_RRVCQB_B"}, // 0.28%
			{3699.81207764914, "TAC_PBDFG2_B_1"}, // 0.28%
			{3728.017639786, "TAC_PBDFG2CPL_BK"}, // 0.28%
			{3756.22320192285, "TAC_ArmorVest_Winter"}, // 0.28%
			{3784.4287640597, "TAC_V_CTBA"}, // 0.28%
			{3812.63432619656, "TAC_V_Sheriff_BA_TB2"}, // 0.28%
			{3840.83988833341, "TAC_V_Sheriff_BA_TB3"}, // 0.28%
			{3869.04545047026, "TAC_V_Sheriff_BA_T3"}, // 0.28%
			{3897.25101260712, "TRYK_V_PlateCarrier_ACU"}, // 0.28%
			{3925.45657474397, "TRYK_V_PlateCarrier_JSDF"}, // 0.28%
			{3953.66213688082, "TAC_V_Sheriff_BA_TBL"}, // 0.28%
			{3981.86769901768, "V_TacVestIR_blk"}, // 0.28%
			{4010.07326115453, "V_PlateCarrier1_blk"}, // 0.28%
			{4038.27882329138, "V_PlateCarrier1_rgr"}, // 0.28%
			{4066.48438542824, "CUP_V_I_RACS_Carrier_Vest_wdl_3"}, // 0.28%
			{4094.68994756509, "Exile_Vest_Snow"}, // 0.28%
			{4122.89550970195, "CUP_V_B_IOTV_AT"}, // 0.28%
			{4151.1010718388, "CUP_V_B_IOTV_SL"}, // 0.28%
			{4179.30663397565, "CUP_V_B_MTV"}, // 0.28%
			{4207.51219611251, "CUP_V_BAF_Osprey_Mk2_DDPM_Empty"}, // 0.28%
			{4235.71775824936, "CUP_V_BAF_Osprey_Mk2_DPM_Empty"}, // 0.28%
			{4263.92332038621, "TAC_V_Sheriff_BA_TL"}, // 0.28%
			{4292.12888252307, "CUP_V_B_Eagle_SPC_Officer"}, // 0.28%
			{4314.62101027835, "CUP_IED_V4_M"}, // 0.22%
			{4337.11313803364, "CUP_IED_V3_M"}, // 0.22%
			{4359.60526578892, "CUP_IED_V2_M"}, // 0.22%
			{4382.09739354421, "SatchelCharge_Remote_Mag"}, // 0.22%
			{4404.5895212995, "CUP_IED_V1_M"}, // 0.22%
			{4427.08164905478, "DemoCharge_Remote_Mag"}, // 0.22%
			{4445.705703884, "hlc_muzzle_Tundra"}, // 0.19%
			{4464.32975871322, "muzzle_snds_H"}, // 0.19%
			{4482.95381354243, "muzzle_snds_L"}, // 0.19%
			{4501.57786837165, "muzzle_snds_M"}, // 0.19%
			{4520.20192320087, "CUP_muzzle_snds_SCAR_L"}, // 0.19%
			{4538.82597803008, "muzzle_snds_H_MG"}, // 0.19%
			{4557.4500328593, "CUP_muzzle_snds_XM8"}, // 0.19%
			{4576.07408768852, "CUP_muzzle_mfsup_SCAR_H"}, // 0.19%
			{4594.69814251774, "CUP_muzzle_snds_SCAR_H"}, // 0.19%
			{4613.32219734695, "CUP_muzzle_mfsup_SCAR_L"}, // 0.19%
			{4631.94625217617, "hlc_muzzle_556NATO_KAC"}, // 0.19%
			{4650.57030700539, "CUP_muzzle_snds_Mk12"}, // 0.19%
			{4669.1943618346, "CUP_muzzle_snds_M14"}, // 0.19%
			{4687.81841666382, "CUP_muzzle_snds_M110"}, // 0.19%
			{4706.44247149304, "CUP_acc_bfa"}, // 0.19%
			{4725.06652632226, "CUP_acc_sffh"}, // 0.19%
			{4743.69058115147, "CUP_muzzle_snds_L85"}, // 0.19%
			{4762.31463598069, "hlc_muzzle_Agendasix10mm"}, // 0.19%
			{4780.93869080991, "hlc_muzzle_Agendasix"}, // 0.19%
			{4799.56274563912, "hlc_muzzle_snds_M14"}, // 0.19%
			{4818.18680046834, "hlc_muzzle_snds_HK33"}, // 0.19%
			{4836.81085529756, "hlc_muzzle_snds_g3"}, // 0.19%
			{4855.43491012678, "hlc_muzzle_snds_fal"}, // 0.19%
			{4874.05896495599, "muzzle_snds_H_SW"}, // 0.19%
			{4892.68301978521, "muzzle_snds_acp"}, // 0.19%
			{4911.30707461443, "muzzle_snds_m_khk_F"}, // 0.19%
			{4929.93112944364, "muzzle_snds_m_snd_F"}, // 0.19%
			{4948.55518427286, "CUP_muzzle_PBS4"}, // 0.19%
			{4967.17923910208, "CUP_muzzle_PB6P9"}, // 0.19%
			{4985.8032939313, "muzzle_snds_B"}, // 0.19%
			{5004.42734876051, "CUP_muzzle_Bizon"}, // 0.19%
			{5023.05140358973, "CUP_muzzle_snds_MicroUzi"}, // 0.19%
			{5041.67545841895, "hlc_muzzle_545SUP_AK"}, // 0.19%
			{5060.29951324816, "hlc_muzzle_762SUP_AK"}, // 0.19%
			{5078.92356807738, "muzzle_HBADGER"}, // 0.19%
			{5097.5476229066, "hlc_muzzle_snds_AUG"}, // 0.19%
			{5116.17167773582, "hlc_muzzle_snds_a6AUG"}, // 0.19%
			{5134.79573256503, "CUP_muzzle_snds_M9"}, // 0.19%
			{5153.41978739425, "hlc_muzzle_300blk_KAC"}, // 0.19%
			{5171.1408577469, "hlc_rifle_aks74u_MTK"}, // 0.18%
			{5188.86192809955, "hlc_rifle_ak12"}, // 0.18%
			{5206.5829984522, "hlc_rifle_aks74u"}, // 0.18%
			{5224.30406880485, "hlc_rifle_aks74_MTK"}, // 0.18%
			{5242.02513915749, "hlc_rifle_aks74_GL"}, // 0.18%
			{5259.74620951014, "hlc_rifle_aks74"}, // 0.18%
			{5277.46727986279, "hlc_rifle_ak74m_MTK"}, // 0.18%
			{5295.18835021544, "hlc_rifle_ak74m_gl"}, // 0.18%
			{5312.90942056809, "hlc_rifle_ak74m"}, // 0.18%
			{5330.63049092074, "hlc_rifle_ak74"}, // 0.18%
			{5348.35156127339, "hlc_rifle_ak74_MTK"}, // 0.18%
			{5366.07263162604, "hlc_rifle_ak12GL"}, // 0.18%
			{5383.79370197869, "hlc_rifle_aku12"}, // 0.18%
			{5400.03801646861, "srifle_DMR_03_woodland_F"}, // 0.16%
			{5416.28233095854, "srifle_DMR_06_olive_F"}, // 0.16%
			{5432.52664544847, "srifle_EBR_F"}, // 0.16%
			{5448.7709599384, "hlc_rifle_PSG1A1_RIS"}, // 0.16%
			{5465.01527442833, "CUP_srifle_SVD"}, // 0.16%
			{5481.25958891826, "hlc_rifle_m14sopmod"}, // 0.16%
			{5497.50390340819, "srifle_DMR_03_tan_F"}, // 0.16%
			{5513.74821789812, "arifle_SPAR_03_blk_F"}, // 0.16%
			{5529.99253238805, "CUP_srifle_M40A3"}, // 0.16%
			{5546.23684687797, "CUP_srifle_M24_wdl"}, // 0.16%
			{5562.4811613679, "CUP_srifle_M14_DMR"}, // 0.16%
			{5578.72547585783, "hlc_rifle_M14_Rail"}, // 0.16%
			{5594.96979034776, "CUP_srifle_M110"}, // 0.16%
			{5611.21410483769, "CUP_srifle_VSSVintorez"}, // 0.16%
			{5627.45841932762, "hlc_rifle_M21_Rail"}, // 0.16%
			{5643.70273381755, "hlc_rifle_psg1A1"}, // 0.16%
			{5659.94704830748, "srifle_DMR_07_blk_F"}, // 0.16%
			{5676.19136279741, "CUP_srifle_M24_des"}, // 0.16%
			{5691.58071336681, "H_HelmetB_black"}, // 0.15%
			{5706.97006393622, "H_HelmetB_grass"}, // 0.15%
			{5722.35941450562, "CUP_H_USArmy_Helmet_ECH1_Black"}, // 0.15%
			{5737.74876507503, "CUP_H_USArmy_Helmet_ECH1_Green"}, // 0.15%
			{5753.13811564443, "H_HelmetSpecB"}, // 0.15%
			{5768.52746621384, "H_HelmetB_TI_tna_F"}, // 0.15%
			{5783.91681678325, "CUP_H_RACS_Helmet_olive"}, // 0.15%
			{5799.30616735265, "CUP_H_USArmy_HelmetMICH_earpro"}, // 0.15%
			{5814.69551792206, "TRYK_H_Helmet_WOOD"}, // 0.15%
			{5830.08486849146, "CUP_H_USMC_MICH2000_ESS_COMM_WDL"}, // 0.15%
			{5845.47421906087, "CUP_H_USMC_HelmetWDL"}, // 0.15%
			{5860.86356963028, "H_HelmetB"}, // 0.15%
			{5876.25292019968, "CUP_H_RACS_Helmet_wdl"}, // 0.15%
			{5891.64227076909, "CUP_H_CDF_H_PASGT_FST"}, // 0.15%
			{5907.03162133849, "TRYK_H_WH"}, // 0.15%
			{5922.4209719079, "TRYK_H_Helmet_Snow"}, // 0.15%
			{5937.81032247731, "CUP_H_CDF_H_PASGT_UN"}, // 0.15%
			{5953.19967304671, "TRYK_H_Helmet_Winter"}, // 0.15%
			{5968.58902361612, "TRYK_H_Helmet_Winter_2"}, // 0.15%
			{5983.20890665705, "HLC_Bipod_G36"}, // 0.15%
			{5997.82878969799, "bipod_01_F_snd"}, // 0.15%
			{6012.44867273892, "bipod_01_F_blk"}, // 0.15%
			{6027.06855577986, "bipod_01_F_mtp"}, // 0.15%
			{6041.6884388208, "bipod_02_F_blk"}, // 0.15%
			{6056.30832186173, "bipod_02_F_tan"}, // 0.15%
			{6070.92820490267, "bipod_02_F_hex"}, // 0.15%
			{6085.5480879436, "bipod_03_F_blk"}, // 0.15%
			{6100.16797098454, "bipod_01_F_khk"}, // 0.15%
			{6114.78785402548, "bipod_03_F_oli"}, // 0.15%
			{6129.40773706641, "CUP_bipod_VLTOR_Modpod"}, // 0.15%
			{6144.02762010735, "CUP_bipod_Harris_1A2_L"}, // 0.15%
			{6157.95131824157, "CUP_lmg_Pecheneg"}, // 0.14%
			{6171.8750163758, "arifle_MX_SW_Black_F"}, // 0.14%
			{6185.79871451002, "LMG_Mk200_F"}, // 0.14%
			{6199.72241264425, "hlc_lmg_mk48"}, // 0.14%
			{6213.64611077847, "CUP_arifle_MG36_camo"}, // 0.14%
			{6227.56980891269, "CUP_arifle_MG36"}, // 0.14%
			{6241.49350704692, "hlc_lmg_M60E4"}, // 0.14%
			{6255.41720518114, "LMG_Zafir_F"}, // 0.14%
			{6269.34090331537, "CUP_arifle_XM8_Railed"}, // 0.14%
			{6283.26460144959, "hlc_lmg_m60"}, // 0.14%
			{6297.18829958382, "LMG_03_F"}, // 0.14%
			{6311.11199771804, "hlc_rifle_G36CMLIC"}, // 0.14%
			{6325.03569585227, "hlc_rifle_G36MLIC"}, // 0.14%
			{6338.95939398649, "hlc_lmg_minimi_railed"}, // 0.14%
			{6352.88309212072, "hlc_m249_pip3"}, // 0.14%
			{6366.80679025494, "hlc_rifle_rpk74n"}, // 0.14%
			{6380.73048838917, "hlc_rifle_RPK12"}, // 0.14%
			{6394.65418652339, "hlc_rifle_rpk"}, // 0.14%
			{6408.57788465762, "hlc_lmg_minimipara_railed"}, // 0.14%
			{6422.50158279184, "hlc_m249_pip1"}, // 0.14%
			{6436.42528092606, "arifle_CTARS_blk_F"}, // 0.14%
			{6449.59634672871, "TRYK_U_B_Wood_T"}, // 0.13%
			{6462.76741253135, "Exile_Uniform_Woodland"}, // 0.13%
			{6475.938478334, "TRYK_U_B_ARO2_CombatUniform"}, // 0.13%
			{6489.10954413664, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.13%
			{6502.28060993929, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.13%
			{6515.45167574193, "TRYK_U_B_BLK"}, // 0.13%
			{6528.62274154458, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.13%
			{6541.79380734722, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.13%
			{6554.96487314987, "TRYK_hoodie_Wood"}, // 0.13%
			{6568.13593895251, "TRYK_B_USMC_R"}, // 0.13%
			{6581.30700475516, "TRYK_T_camo_wood_marpat"}, // 0.13%
			{6594.4780705578, "TRYK_U_B_PCUHsW4"}, // 0.13%
			{6607.64913636045, "TRYK_U_B_PCUHsW6"}, // 0.13%
			{6620.82020216309, "TRYK_U_B_JSDF_CombatUniform"}, // 0.13%
			{6633.99126796574, "TRYK_U_B_PCUHsW2"}, // 0.13%
			{6647.16233376838, "TRYK_U_B_PCUHsW5"}, // 0.13%
			{6660.33339957103, "TRYK_U_B_Snowt"}, // 0.13%
			{6673.50446537367, "TRYK_U_B_Snow_CombatUniform"}, // 0.13%
			{6686.67553117632, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 0.13%
			{6699.84659697896, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.13%
			{6713.01766278161, "TRYK_U_B_woodtan_CombatUniform"}, // 0.13%
			{6726.18872858425, "TRYK_U_B_PCUHsW"}, // 0.13%
			{6737.26439755466, "hlc_optic_LRT_m14"}, // 0.11%
			{6748.34006652507, "optic_Hamr"}, // 0.11%
			{6759.41573549547, "CUP_optic_RCO_desert"}, // 0.11%
			{6770.49140446588, "CUP_optic_RCO"}, // 0.11%
			{6781.56707343628, "CUP_optic_CompM2_Desert"}, // 0.11%
			{6792.64274240669, "CUP_optic_CompM2_Woodland2"}, // 0.11%
			{6803.71841137709, "CUP_optic_CompM2_Woodland"}, // 0.11%
			{6814.7940803475, "CUP_optic_CompM2_Black"}, // 0.11%
			{6825.86974931791, "CUP_optic_Leupold_VX3"}, // 0.11%
			{6836.94541828831, "CUP_optic_ACOG"}, // 0.11%
			{6848.02108725872, "CUP_optic_SUSAT"}, // 0.11%
			{6859.09675622912, "CUP_optic_CompM4"}, // 0.11%
			{6870.17242519953, "CUP_optic_Eotech533Grey"}, // 0.11%
			{6881.24809416994, "CUP_optic_Eotech533"}, // 0.11%
			{6892.32376314034, "CUP_optic_HoloDesert"}, // 0.11%
			{6903.39943211075, "CUP_optic_HoloWdl"}, // 0.11%
			{6914.47510108115, "CUP_optic_HoloBlack"}, // 0.11%
			{6925.55077005156, "CUP_optic_LeupoldM3LR"}, // 0.11%
			{6936.62643902196, "CUP_optic_LeupoldMk4"}, // 0.11%
			{6947.70210799237, "CUP_optic_LeupoldMk4_10x40_LRT_Desert"}, // 0.11%
			{6958.77777696278, "CUP_optic_ElcanM145"}, // 0.11%
			{6969.85344593318, "hlc_optic_PVS4M14"}, // 0.11%
			{6980.92911490359, "hlc_optic_accupoint_g3"}, // 0.11%
			{6992.00478387399, "hlc_optic_suit"}, // 0.11%
			{7003.0804528444, "hlc_optic_kobra"}, // 0.11%
			{7014.1561218148, "HLC_Optic_1p29"}, // 0.11%
			{7025.23179078521, "HLC_Optic_PSO1"}, // 0.11%
			{7036.30745975562, "CUP_optic_Elcan_reflex"}, // 0.11%
			{7047.38312872602, "CUP_optic_Elcan"}, // 0.11%
			{7058.45879769643, "CUP_optic_TrijiconRx01_black"}, // 0.11%
			{7069.53446666683, "CUP_optic_TrijiconRx01_desert"}, // 0.11%
			{7080.61013563724, "CUP_optic_MRad"}, // 0.11%
			{7091.68580460765, "CUP_optic_ZDDot"}, // 0.11%
			{7102.76147357805, "CUP_optic_SB_11_4x20_PM"}, // 0.11%
			{7113.83714254846, "CUP_optic_LeupoldMk4_MRT_tan"}, // 0.11%
			{7124.91281151886, "CUP_optic_ELCAN_SpecterDR"}, // 0.11%
			{7135.98848048927, "CUP_optic_LeupoldMk4_10x40_LRT_Woodland"}, // 0.11%
			{7147.06414945967, "optic_Arco"}, // 0.11%
			{7158.13981843008, "CUP_optic_SB_3_12x50_PMII"}, // 0.11%
			{7169.21548740049, "CUP_optic_Kobra"}, // 0.11%
			{7180.29115637089, "optic_AMS_snd"}, // 0.11%
			{7191.3668253413, "optic_AMS_khk"}, // 0.11%
			{7202.4424943117, "optic_AMS"}, // 0.11%
			{7213.51816328211, "optic_LRPS"}, // 0.11%
			{7224.59383225251, "optic_MRD"}, // 0.11%
			{7235.66950122292, "optic_Yorris"}, // 0.11%
			{7246.74517019333, "optic_DMS"}, // 0.11%
			{7257.82083916373, "optic_MRCO"}, // 0.11%
			{7268.89650813414, "optic_SOS"}, // 0.11%
			{7279.97217710454, "optic_Holosight_smg"}, // 0.11%
			{7291.04784607495, "optic_Holosight"}, // 0.11%
			{7302.12351504535, "optic_ACO_grn_smg"}, // 0.11%
			{7313.19918401576, "optic_Aco_smg"}, // 0.11%
			{7324.27485298617, "optic_ACO_grn"}, // 0.11%
			{7335.35052195657, "optic_Aco"}, // 0.11%
			{7346.42619092698, "optic_KHS_blk"}, // 0.11%
			{7357.50185989738, "CUP_optic_PechenegScope"}, // 0.11%
			{7368.57752886779, "optic_KHS_hex"}, // 0.11%
			{7379.6531978382, "optic_KHS_tan"}, // 0.11%
			{7390.7288668086, "CUP_optic_PSO_3"}, // 0.11%
			{7401.80453577901, "CUP_optic_PSO_1"}, // 0.11%
			{7412.88020474941, "optic_Holosight_smg_blk_F"}, // 0.11%
			{7423.95587371982, "optic_Holosight_khk_F"}, // 0.11%
			{7435.03154269022, "optic_Holosight_blk_F"}, // 0.11%
			{7446.10721166063, "optic_LRPS_ghex_F"}, // 0.11%
			{7457.18288063104, "optic_LRPS_tna_F"}, // 0.11%
			{7468.25854960144, "optic_SOS_khk_F"}, // 0.11%
			{7479.33421857185, "optic_ERCO_snd_F"}, // 0.11%
			{7490.40988754225, "optic_ERCO_khk_F"}, // 0.11%
			{7501.48555651266, "optic_ERCO_blk_F"}, // 0.11%
			{7512.56122548306, "optic_Hamr_khk_F"}, // 0.11%
			{7523.63689445347, "optic_DMS_ghex_F"}, // 0.11%
			{7534.71256342388, "optic_Arco_ghex_F"}, // 0.11%
			{7545.78823239428, "optic_Arco_blk_F"}, // 0.11%
			{7556.86390136469, "optic_KHS_old"}, // 0.11%
			{7567.93957033509, "CUP_optic_LeupoldMk4_CQ_T"}, // 0.11%
			{7578.19913738136, "hlc_30Rnd_556x45_TDIM_AUG"}, // 0.10%
			{7588.45870442764, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.10%
			{7598.71827147391, "20Rnd_650x39_Cased_Mag_F"}, // 0.10%
			{7608.97783852018, "30Rnd_580x42_Mag_Tracer_F"}, // 0.10%
			{7619.23740556645, "30Rnd_580x42_Mag_F"}, // 0.10%
			{7629.49697261272, "100Rnd_580x42_Mag_Tracer_F"}, // 0.10%
			{7639.75653965899, "100Rnd_580x42_Mag_F"}, // 0.10%
			{7650.01610670526, "hlc_50rnd_762x51_M_FAL"}, // 0.10%
			{7660.27567375153, "hlc_20Rnd_762x51_S_fal"}, // 0.10%
			{7670.5352407978, "hlc_20Rnd_762x51_TDim_fal"}, // 0.10%
			{7680.79480784407, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.10%
			{7691.05437489034, "hlc_20Rnd_762x51_T_fal"}, // 0.10%
			{7701.31394193661, "hlc_20Rnd_762x51_mk316_fal"}, // 0.10%
			{7711.57350898288, "hlc_20Rnd_762x51_B_fal"}, // 0.10%
			{7721.83307602915, "29rnd_300BLK_STANAG"}, // 0.10%
			{7732.09264307542, "29rnd_300BLK_STANAG_T"}, // 0.10%
			{7742.35221012169, "150Rnd_556x45_Drum_Mag_F"}, // 0.10%
			{7752.61177716796, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.10%
			{7762.87134421424, "30Rnd_556x45_Stanag_red"}, // 0.10%
			{7773.13091126051, "30Rnd_556x45_Stanag_green"}, // 0.10%
			{7783.39047830678, "hlc_20Rnd_762x51_barrier_fal"}, // 0.10%
			{7793.65004535305, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.10%
			{7803.90961239932, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.10%
			{7814.16917944559, "CUP_100Rnd_556x45_BetaCMag"}, // 0.10%
			{7824.42874649186, "hlc_20rnd_762x51_MDim_G3"}, // 0.10%
			{7834.68831353813, "hlc_20rnd_762x51_IRDim_G3"}, // 0.10%
			{7844.9478805844, "hlc_20rnd_762x51_T_G3"}, // 0.10%
			{7855.20744763067, "hlc_20rnd_762x51_barrier_G3"}, // 0.10%
			{7865.46701467694, "hlc_20rnd_762x51_Mk316_G3"}, // 0.10%
			{7875.72658172321, "hlc_20rnd_762x51_b_G3"}, // 0.10%
			{7885.98614876948, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.10%
			{7896.24571581575, "200Rnd_556x45_Box_Tracer_F"}, // 0.10%
			{7906.50528286202, "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"}, // 0.10%
			{7916.76484990829, "200Rnd_556x45_Box_Red_F"}, // 0.10%
			{7927.02441695456, "hlc_200rnd_556x45_T_SAW"}, // 0.10%
			{7937.28398400084, "hlc_200rnd_556x45_Mdim_SAW"}, // 0.10%
			{7947.54355104711, "hlc_200rnd_556x45_M_SAW"}, // 0.10%
			{7957.80311809338, "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"}, // 0.10%
			{7968.06268513965, "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B"}, // 0.10%
			{7978.32225218592, "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B"}, // 0.10%
			{7988.58181923219, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B"}, // 0.10%
			{7998.84138627846, "CUP_20Rnd_762x51_CZ805B"}, // 0.10%
			{8009.10095332473, "200Rnd_556x45_Box_F"}, // 0.10%
			{8019.360520371, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.10%
			{8029.62008741727, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.10%
			{8039.87965446354, "30Rnd_556x45_Stanag"}, // 0.10%
			{8050.13922150981, "hlc_30Rnd_762x39_b_ak"}, // 0.10%
			{8060.39878855608, "CUP_5x_22_LR_17_HMR_M"}, // 0.10%
			{8070.65835560235, "CUP_64Rnd_9x19_Bizon_M"}, // 0.10%
			{8080.91792264862, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.10%
			{8091.17748969489, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.10%
			{8101.43705674117, "CUP_30Rnd_9x19_MP5"}, // 0.10%
			{8111.69662378744, "CUP_10x_303_M"}, // 0.10%
			{8121.95619083371, "CUP_8Rnd_B_Beneli_74Pellets"}, // 0.10%
			{8132.21575787998, "hlc_30Rnd_762x39_t_ak"}, // 0.10%
			{8142.47532492625, "CUP_8Rnd_B_Beneli_74Slug"}, // 0.10%
			{8152.73489197252, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.10%
			{8162.99445901879, "CUP_30Rnd_9x19_UZI"}, // 0.10%
			{8173.25402606506, "CUP_8Rnd_9x18_Makarov_M"}, // 0.10%
			{8183.51359311133, "CUP_15Rnd_9x19_M9"}, // 0.10%
			{8193.7731601576, "CUP_7Rnd_45ACP_1911"}, // 0.10%
			{8204.03272720387, "hlc_30Rnd_9x19_B_MP5"}, // 0.10%
			{8214.29229425014, "CUP_17Rnd_9x19_glock17"}, // 0.10%
			{8224.55186129641, "CUP_10Rnd_9x19_Compact"}, // 0.10%
			{8234.81142834268, "CUP_6Rnd_45ACP_M"}, // 0.10%
			{8245.07099538895, "hlc_45Rnd_762x39_m_rpk"}, // 0.10%
			{8255.33056243523, "hlc_45Rnd_762x39_t_rpk"}, // 0.10%
			{8265.5901294815, "hlc_30rnd_762x39_s_ak"}, // 0.10%
			{8275.84969652777, "hlc_50rnd_556x45_EPR"}, // 0.10%
			{8286.10926357404, "hlc_30rnd_556x45_TDim"}, // 0.10%
			{8296.36883062031, "hlc_30rnd_556x45_MDim"}, // 0.10%
			{8306.62839766658, "hlc_30rnd_556x45_SPR"}, // 0.10%
			{8316.88796471285, "hlc_30rnd_556x45_SOST"}, // 0.10%
			{8327.14753175912, "hlc_30rnd_556x45_EPR"}, // 0.10%
			{8337.40709880539, "30Rnd_545x39_Mag_Tracer_F"}, // 0.10%
			{8347.66666585166, "30Rnd_545x39_Mag_Green_F"}, // 0.10%
			{8357.92623289793, "30Rnd_545x39_Mag_F"}, // 0.10%
			{8368.1857999442, "hlc_60Rnd_545x39_t_rpk"}, // 0.10%
			{8378.44536699047, "hlc_30Rnd_545x39_S_AK"}, // 0.10%
			{8388.70493403674, "hlc_45Rnd_545x39_t_rpk"}, // 0.10%
			{8398.96450108301, "hlc_30Rnd_545x39_EP_ak"}, // 0.10%
			{8409.22406812928, "hlc_30Rnd_545x39_t_ak"}, // 0.10%
			{8419.48363517555, "hlc_30Rnd_545x39_B_AK"}, // 0.10%
			{8429.74320222183, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.10%
			{8440.0027692681, "30Rnd_762x39_Mag_Tracer_F"}, // 0.10%
			{8450.26233631437, "30Rnd_762x39_Mag_Green_F"}, // 0.10%
			{8460.52190336064, "30Rnd_762x39_Mag_F"}, // 0.10%
			{8470.78147040691, "hlc_50rnd_762x51_M_G3"}, // 0.10%
			{8481.04103745318, "hlc_50rnd_762x51_MDIM_G3"}, // 0.10%
			{8491.30060449945, "hlc_200rnd_556x45_B_SAW"}, // 0.10%
			{8501.56017154572, "30Rnd_65x39_caseless_mag"}, // 0.10%
			{8511.81973859199, "hlc_24Rnd_75x55_ap_stgw"}, // 0.10%
			{8522.07930563826, "hlc_24Rnd_75x55_B_stgw"}, // 0.10%
			{8532.33887268453, "hlc_20Rnd_762x51_T_amt"}, // 0.10%
			{8542.5984397308, "hlc_20Rnd_762x51_bball_amt"}, // 0.10%
			{8552.85800677707, "hlc_20Rnd_762x51_mk316_amt"}, // 0.10%
			{8563.11757382334, "hlc_20Rnd_762x51_b_amt"}, // 0.10%
			{8573.37714086961, "CUP_30Rnd_Sa58_M"}, // 0.10%
			{8583.63670791588, "hlc_20rnd_762x51_S_G3"}, // 0.10%
			{8593.89627496216, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.10%
			{8604.15584200843, "CUP_30Rnd_Sa58_M_TracerG"}, // 0.10%
			{8614.4154090547, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.10%
			{8624.67497610097, "200Rnd_65x39_cased_Box"}, // 0.10%
			{8634.93454314724, "200Rnd_65x39_cased_Box_Tracer"}, // 0.10%
			{8645.19411019351, "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"}, // 0.10%
			{8655.45367723978, "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR"}, // 0.10%
			{8665.71324428605, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.10%
			{8675.97281133232, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.10%
			{8686.23237837859, "hlc_24Rnd_75x55_T_stgw"}, // 0.10%
			{8696.49194542486, "CUP_20Rnd_762x51_B_SCAR"}, // 0.10%
			{8706.75151247113, "CUP_10Rnd_762x54_SVD_M"}, // 0.10%
			{8717.0110795174, "hlc_20Rnd_762x51_barrier_M14"}, // 0.10%
			{8727.27064656367, "hlc_40Rnd_556x45_TDIM_AUG"}, // 0.10%
			{8737.53021360994, "hlc_40Rnd_556x45_SPR_AUG"}, // 0.10%
			{8747.78978065621, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.10%
			{8758.04934770248, "hlc_40Rnd_556x45_B_AUG"}, // 0.10%
			{8768.30891474876, "hlc_30Rnd_556x45_MDIM_AUG"}, // 0.10%
			{8778.56848179503, "hlc_30Rnd_556x45_T_AUG"}, // 0.10%
			{8788.8280488413, "hlc_30Rnd_556x45_SPR_AUG"}, // 0.10%
			{8799.08761588757, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.10%
			{8809.34718293384, "hlc_30Rnd_556x45_B_AUG"}, // 0.10%
			{8819.60674998011, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.10%
			{8829.86631702638, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.10%
			{8840.12588407265, "hlc_50Rnd_762x51_B_M14"}, // 0.10%
			{8850.38545111892, "hlc_20Rnd_762x51_S_M14"}, // 0.10%
			{8860.64501816519, "hlc_20Rnd_762x51_Tdim_M14"}, // 0.10%
			{8870.90458521146, "hlc_20Rnd_762x51_Mdim_M14"}, // 0.10%
			{8881.16415225773, "hlc_20Rnd_762x51_T_M14"}, // 0.10%
			{8891.423719304, "hlc_20Rnd_762x51_mk316_M14"}, // 0.10%
			{8901.68328635027, "hlc_20Rnd_762x51_B_M14"}, // 0.10%
			{8911.94285339654, "150Rnd_762x51_Box_Tracer"}, // 0.10%
			{8922.20242044281, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.10%
			{8932.46198748909, "hlc_30rnd_556x45_MDIM_G36"}, // 0.10%
			{8942.72155453536, "CUP_20Rnd_B_AA12_Pellets"}, // 0.10%
			{8952.98112158163, "hlc_30rnd_556x45_t_HK33"}, // 0.10%
			{8963.2406886279, "hlc_30rnd_556x45_EPR_HK33"}, // 0.10%
			{8973.50025567417, "hlc_30rnd_556x45_SOST_HK33"}, // 0.10%
			{8983.75982272044, "hlc_30rnd_556x45_tdim_HK33"}, // 0.10%
			{8994.01938976671, "hlc_30rnd_556x45_mdim_HK33"}, // 0.10%
			{9004.27895681298, "hlc_30rnd_556x45_b_HK33"}, // 0.10%
			{9014.53852385925, "hlc_30rnd_556x45_TDIM_G36"}, // 0.10%
			{9024.79809090552, "CUP_20Rnd_762x51_L129_M"}, // 0.10%
			{9035.05765795179, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
			{9045.31722499806, "150Rnd_762x51_Box"}, // 0.10%
			{9055.57679204433, "hlc_30rnd_556x45_Tracers_G36"}, // 0.10%
			{9065.8363590906, "hlc_30rnd_556x45_SPR_G36"}, // 0.10%
			{9076.09592613687, "hlc_100rnd_556x45_EPR_G36"}, // 0.10%
			{9086.35549318314, "hlc_30rnd_556x45_SOST_G36"}, // 0.10%
			{9096.61506022941, "hlc_30rnd_556x45_EPR_G36"}, // 0.10%
			{9106.87462727569, "30Rnd_65x39_caseless_green"}, // 0.10%
			{9117.13419432196, "100Rnd_65x39_caseless_mag"}, // 0.10%
			{9127.39376136823, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
			{9137.6533284145, "CUP_20Rnd_762x51_B_M110"}, // 0.10%
			{9147.91289546077, "CUP_20Rnd_B_AA12_74Slug"}, // 0.10%
			{9158.17246250704, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.10%
			{9168.43202955331, "hlc_100Rnd_762x51_Mdim_M60E4"}, // 0.10%
			{9178.69159659958, "hlc_100Rnd_762x51_T_M60E4"}, // 0.10%
			{9188.95116364585, "hlc_100Rnd_762x51_Barrier_M60E4"}, // 0.10%
			{9199.21073069212, "hlc_100Rnd_762x51_B_M60E4"}, // 0.10%
			{9209.47029773839, "hlc_100Rnd_762x51_M_M60E4"}, // 0.10%
			{9219.72986478466, "20Rnd_762x51_Mag"}, // 0.10%
			{9229.98943183093, "CUP_5Rnd_762x51_M24"}, // 0.10%
			{9240.2489988772, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.10%
			{9250.50856592347, "CUP_20Rnd_TE1_White_Tracer_762x51_DMR"}, // 0.10%
			{9260.76813296974, "hlc_5rnd_3006_1903"}, // 0.10%
			{9271.02770001601, "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"}, // 0.10%
			{9281.28726706229, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.10%
			{9291.54683410856, "CUP_20Rnd_762x51_DMR"}, // 0.10%
			{9301.80640115483, "CUP_20Rnd_TE1_White_Tracer_762x51_M110"}, // 0.10%
			{9312.0659682011, "CUP_20Rnd_TE1_Green_Tracer_762x51_M110"}, // 0.10%
			{9322.32553524737, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.10%
			{9331.63756266198, "muzzle_snds_B_snd_F"}, // 0.09%
			{9340.94959007659, "muzzle_snds_H_MG_khk_F"}, // 0.09%
			{9350.2616174912, "muzzle_snds_H_MG_blk_F"}, // 0.09%
			{9359.57364490581, "CUP_muzzle_snds_AWM"}, // 0.09%
			{9368.88567232042, "CUP_muzzle_snds_G36_black"}, // 0.09%
			{9378.19769973502, "CUP_muzzle_snds_G36_desert"}, // 0.09%
			{9387.50972714963, "muzzle_snds_B_khk_F"}, // 0.09%
			{9396.82175456424, "CUP_muzzle_snds_M16_camo"}, // 0.09%
			{9406.13378197885, "CUP_muzzle_snds_M16"}, // 0.09%
			{9415.44580939346, "muzzle_snds_H_khk_F"}, // 0.09%
			{9424.75783680807, "muzzle_snds_H_snd_F"}, // 0.09%
			{9432.38560187291, "acc_pointer_IR"}, // 0.08%
			{9440.01336693774, "CUP_acc_Flashlight"}, // 0.08%
			{9447.64113200258, "CUP_acc_ANPEQ_2"}, // 0.08%
			{9455.26889706741, "CUP_acc_ANPEQ_15"}, // 0.08%
			{9462.89666213225, "CUP_acc_Flashlight_wdl"}, // 0.08%
			{9470.52442719708, "CUP_acc_CZ_M3X"}, // 0.08%
			{9478.15219226192, "CUP_acc_ANPEQ_2_grey"}, // 0.08%
			{9485.77995732675, "CUP_acc_ANPEQ_2_desert"}, // 0.08%
			{9493.40772239159, "CUP_acc_ANPEQ_2_camo"}, // 0.08%
			{9501.03548745643, "CUP_SVD_camo_d_half"}, // 0.08%
			{9508.66325252126, "CUP_SVD_camo_d"}, // 0.08%
			{9516.2910175861, "CUP_SVD_camo_g_half"}, // 0.08%
			{9523.91878265093, "CUP_SVD_camo_g"}, // 0.08%
			{9531.54654771577, "CUP_acc_Glock17_Flashlight"}, // 0.08%
			{9539.1743127806, "CUP_Mxx_camo_half"}, // 0.08%
			{9546.80207784544, "CUP_Mxx_camo"}, // 0.08%
			{9554.42984291027, "CUP_item_Cobalt_File"}, // 0.08%
			{9562.05760797511, "CUP_acc_XM8_light_module"}, // 0.08%
			{9569.68537303994, "acc_flashlight"}, // 0.08%
			{9577.31313810478, "CUP_item_CDF_dogtags"}, // 0.08%
			{9584.94090316961, "CUP_acc_Flashlight_desert"}, // 0.08%
			{9592.56866823445, "hlc_acc_Surefiregrip"}, // 0.08%
			{9600.19643329928, "CUP_acc_LLM"}, // 0.08%
			{9606.69415909526, "CUP_sgun_AA12"}, // 0.06%
			{9613.19188489123, "arifle_Katiba_C_F"}, // 0.06%
			{9619.6896106872, "HLC_Rifle_g3ka4_GL"}, // 0.06%
			{9626.18733648317, "hlc_rifle_g3ka4"}, // 0.06%
			{9632.68506227914, "hlc_rifle_akm_MTK"}, // 0.06%
			{9639.18278807511, "hlc_rifle_g3a3ris"}, // 0.06%
			{9645.68051387108, "hlc_rifle_g3a3"}, // 0.06%
			{9652.17823966705, "hlc_rifle_g3sg1ris"}, // 0.06%
			{9658.67596546302, "hlc_rifle_LAR"}, // 0.06%
			{9665.17369125899, "hlc_rifle_FAL5061Rail"}, // 0.06%
			{9671.67141705496, "hlc_rifle_akmgl"}, // 0.06%
			{9678.16914285093, "hlc_rifle_akm"}, // 0.06%
			{9684.66686864691, "hlc_rifle_FAL5000Rail"}, // 0.06%
			{9691.16459444288, "hlc_rifle_L1A1SLR"}, // 0.06%
			{9697.66232023885, "hlc_rifle_osw_GL"}, // 0.06%
			{9704.16004603482, "hlc_rifle_falosw"}, // 0.06%
			{9710.65777183079, "CUP_arifle_CZ805_B_GL"}, // 0.06%
			{9717.15549762676, "CUP_arifle_CZ805_B"}, // 0.06%
			{9723.65322342273, "hlc_rifle_c1A1"}, // 0.06%
			{9730.1509492187, "hlc_rifle_Bushmaster300"}, // 0.06%
			{9736.64867501467, "hlc_rifle_bcmblackjack"}, // 0.06%
			{9743.14640081064, "arifle_AK12_GL_F"}, // 0.06%
			{9749.64412660661, "arifle_AK12_F"}, // 0.06%
			{9756.14185240258, "hlc_rifle_slr107u_MTK"}, // 0.06%
			{9762.63957819856, "hlc_30Rnd_762x39_b_ak"}, // 0.06%
			{9769.13730399453, "hlc_rifle_honeybadger"}, // 0.06%
			{9775.6350297905, "Exile_Weapon_AKS_Gold"}, // 0.06%
			{9782.13275558647, "hlc_rifle_ak47"}, // 0.06%
			{9788.63048138244, "hlc_rifle_SLR"}, // 0.06%
			{9795.12820717841, "hlc_rifle_stgw57_commando"}, // 0.06%
			{9801.62593297438, "CUP_srifle_L129A1"}, // 0.06%
			{9808.12365877035, "arifle_ARX_blk_F"}, // 0.06%
			{9814.62138456632, "hlc_rifle_RK62"}, // 0.06%
			{9821.11911036229, "CUP_arifle_Sa58P"}, // 0.06%
			{9827.61683615826, "CUP_arifle_Sa58RIS2"}, // 0.06%
			{9834.11456195423, "hlc_rifle_STGW57"}, // 0.06%
			{9840.61228775021, "arifle_MXM_Black_F"}, // 0.06%
			{9847.11001354618, "arifle_MX_Black_F"}, // 0.06%
			{9853.60773934215, "hlc_rifle_amt"}, // 0.06%
			{9860.10546513812, "arifle_MX_GL_Black_F"}, // 0.06%
			{9866.60319093409, "hlc_rifle_sig5104"}, // 0.06%
			{9873.10091673006, "CUP_arifle_Mk17_STD_FG"}, // 0.06%
			{9879.59864252603, "CUP_arifle_Mk20"}, // 0.06%
			{9886.096368322, "CUP_arifle_Mk17_CQC_FG"}, // 0.06%
			{9892.59409411797, "arifle_MXC_Black_F"}, // 0.06%
			{9898.18131056674, "muzzle_snds_58_blk_F"}, // 0.06%
			{9903.7685270155, "muzzle_snds_58_wdm_F"}, // 0.06%
			{9909.35574346427, "muzzle_snds_58_ghex_F"}, // 0.06%
			{9914.94295991303, "muzzle_snds_65_TI_ghex_F"}, // 0.06%
			{9920.5301763618, "muzzle_snds_65_TI_blk_F"}, // 0.06%
			{9926.11739281056, "muzzle_snds_65_TI_hex_F"}, // 0.06%
			{9931.70460925932, "muzzle_snds_58_hex_F"}, // 0.06%
			{9937.24244374453, "HLC_Optic_ZFSG1"}, // 0.06%
			{9941.76405705616, "B_Bergen_tna_F"}, // 0.05%
			{9946.28567036779, "B_Bergen_dgtl_F"}, // 0.05%
			{9950.80728367942, "B_Bergen_hex_F"}, // 0.05%
			{9955.32889699105, "B_Bergen_mcamo_F"}, // 0.05%
			{9958.14945320473, "V_PlateCarrierGL_blk"}, // 0.03%
			{9960.36458699881, "HLC_Optic_G36dualoptic35x"}, // 0.02%
			{9962.5797207929, "optic_NVS"}, // 0.02%
			{9964.79485458698, "HLC_Optic_G36Export35x2d"}, // 0.02%
			{9967.00998838106, "HLC_Optic_G36Export15x2d"}, // 0.02%
			{9969.22512217514, "HLC_Optic_G36Export15x"}, // 0.02%
			{9971.44025596922, "HLC_Optic_G36Dualoptic15x2d"}, // 0.02%
			{9973.6553897633, "HLC_Optic_G36Dualoptic15x"}, // 0.02%
			{9975.87052355738, "HLC_Optic_G36dualoptic35x2d"}, // 0.02%
			{9978.08565735146, "HLC_Optic_G36Export35x"}, // 0.02%
			{9979.94806283439, "muzzle_snds_93mmg"}, // 0.02%
			{9981.81046831731, "muzzle_snds_338_sand"}, // 0.02%
			{9983.67287380023, "muzzle_snds_338_black"}, // 0.02%
			{9985.53527928315, "muzzle_snds_338_green"}, // 0.02%
			{9987.39768476607, "muzzle_snds_93mmg_tan"}, // 0.02%
			{9988.71479134634, "TAC_W_ghillie_O1"}, // 0.01%
			{9990.0318979266, "U_I_FullGhillie_lsh"}, // 0.01%
			{9991.13946482364, "hlc_optic_PVS4FAL"}, // 0.01%
			{9992.24703172068, "CUP_optic_AN_PVS_4"}, // 0.01%
			{9993.35459861773, "CUP_optic_AN_PVS_10"}, // 0.01%
			{9994.46216551477, "hlc_optic_Kern"}, // 0.01%
			{9995.56973241181, "CUP_optic_NSPU"}, // 0.01%
			{9996.67729930885, "hlc_optic_Kern2d"}, // 0.01%
			{9997.78486620589, "CUP_optic_NSPU_RPG"}, // 0.01%
			{9998.89243310293, "hlc_optic_PVS4G3"}, // 0.01%
			{9999.99999999997, "hlc_optic_artel_m14"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	*/
	class Medical
	{
		count = 11;
		half = 9094.44444444445;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{3888.88888888889, "Exile_Item_Bandage"}, // 38.89%
			{6222.22222222222, "Exile_Item_Heatpack"}, // 23.33%
			{6972.22222222222, "Exile_Item_Can_Empty"}, // 7.50%
			{7722.22222222222, "Exile_Item_ToiletPaper"}, // 7.50%
			{8472.22222222222, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9094.44444444445, "Exile_Item_Vishpirin"}, // 6.22%
			{9281.94444444445, "Exile_Item_Magazine01"}, // 1.88%
			{9469.44444444445, "Exile_Item_Magazine02"}, // 1.88%
			{9656.94444444445, "Exile_Item_Magazine03"}, // 1.88%
			{9844.44444444445, "Exile_Item_Magazine04"}, // 1.88%
			{10000, "Exile_Item_InstaDoc"} // 1.56%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Bandage
	  CUP_arifle_L85A2
	  CUP_arifle_Mk16_STD_FG
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  hlc_rifle_hk53RAS
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  hlc_rifle_M4
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  CUP_arifle_M4A1_desert
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  CUP_arifle_Mk16_SV
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  CUP_arifle_M4A1_black
	  CUP_arifle_L85A2
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  CUP_arifle_Mk16_STD_EGLM
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  hlc_rifle_auga3_GL_B
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  hlc_rifle_hk53RAS
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  hlc_rifle_m4m203
	  Exile_Item_Bandage
	  CUP_srifle_Mk12SPR
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  CUP_arifle_Mk16_STD_FG
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  CUP_arifle_Mk16_CQC_FG
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  hlc_rifle_aks74u_MTK
	*/
	class MedicMil
	{
		count = 60;
		half = 9090.9090909091;
		halfIndex = 30;
		sum = 10000;
		items[] = 
		{
			{4444.44444444444, "Exile_Item_Bandage"}, // 44.44%
			{7111.11111111111, "Exile_Item_Heatpack"}, // 26.67%
			{7822.22222222222, "Exile_Item_Vishpirin"}, // 7.11%
			{8000, "Exile_Item_InstaDoc"}, // 1.78%
			{8040.40404040404, "hlc_rifle_hk33a2"}, // 0.40%
			{8080.80808080808, "hlc_rifle_hk33a2RIS"}, // 0.40%
			{8121.21212121212, "hlc_rifle_hk53"}, // 0.40%
			{8161.61616161616, "hlc_rifle_hk53RAS"}, // 0.40%
			{8202.0202020202, "CUP_arifle_L85A2"}, // 0.40%
			{8242.42424242424, "CUP_arifle_L85A2_G"}, // 0.40%
			{8282.82828282828, "CUP_arifle_L86A2"}, // 0.40%
			{8323.23232323233, "CUP_arifle_M16A2"}, // 0.40%
			{8363.63636363637, "CUP_arifle_M16A4_Base"}, // 0.40%
			{8404.04040404041, "CUP_arifle_M4A1_black"}, // 0.40%
			{8444.44444444445, "CUP_arifle_M4A1_camo"}, // 0.40%
			{8484.84848484849, "CUP_arifle_M4A1_desert"}, // 0.40%
			{8525.25252525253, "CUP_arifle_Mk16_CQC_FG"}, // 0.40%
			{8565.65656565657, "hlc_rifle_G36TAC"}, // 0.40%
			{8606.06060606061, "CUP_arifle_Mk16_STD_FG"}, // 0.40%
			{8646.46464646465, "CUP_arifle_Mk16_STD_EGLM"}, // 0.40%
			{8686.86868686869, "CUP_arifle_Mk16_SV"}, // 0.40%
			{8727.27272727273, "arifle_Mk20_F"}, // 0.40%
			{8767.67676767677, "hlc_rifle_samr2"}, // 0.40%
			{8808.08080808081, "arifle_SPAR_01_blk_F"}, // 0.40%
			{8848.48484848485, "hlc_rifle_auga3_b"}, // 0.40%
			{8888.88888888889, "hlc_rifle_auga3_bl"}, // 0.40%
			{8929.29292929293, "hlc_rifle_auga3"}, // 0.40%
			{8969.69696969698, "hlc_rifle_auga3_GL_B"}, // 0.40%
			{9010.10101010102, "arifle_TRG20_F"}, // 0.40%
			{9050.50505050506, "CUP_srifle_Mk12SPR"}, // 0.40%
			{9090.9090909091, "hlc_rifle_G36V"}, // 0.40%
			{9131.31313131314, "hlc_rifle_G36C"}, // 0.40%
			{9171.71717171718, "hlc_rifle_aek971"}, // 0.40%
			{9212.12121212122, "hlc_rifle_G36KV"}, // 0.40%
			{9252.52525252526, "hlc_rifle_RU5562"}, // 0.40%
			{9292.9292929293, "hlc_rifle_RU556"}, // 0.40%
			{9333.33333333334, "hlc_rifle_bcmjack"}, // 0.40%
			{9373.73737373738, "arifle_CTAR_blk_F"}, // 0.40%
			{9414.14141414142, "hlc_rifle_Colt727"}, // 0.40%
			{9454.54545454546, "hlc_rifle_aek971_mtk"}, // 0.40%
			{9494.9494949495, "hlc_rifle_M4"}, // 0.40%
			{9535.35353535354, "hlc_rifle_m4m203"}, // 0.40%
			{9575.75757575759, "hlc_rifle_CQBR"}, // 0.40%
			{9616.16161616163, "CUP_arifle_CZ805_A1"}, // 0.40%
			{9656.56565656567, "CUP_arifle_CZ805_GL"}, // 0.40%
			{9696.96969696971, "CUP_arifle_CZ805_A2"}, // 0.40%
			{9737.37373737375, "hlc_rifle_Colt727_GL"}, // 0.40%
			{9757.57575757577, "hlc_rifle_aks74u_MTK"}, // 0.20%
			{9777.77777777779, "hlc_rifle_aks74u"}, // 0.20%
			{9797.97979797981, "hlc_rifle_aks74_MTK"}, // 0.20%
			{9818.18181818183, "hlc_rifle_aks74_GL"}, // 0.20%
			{9838.38383838384, "hlc_rifle_aks74"}, // 0.20%
			{9858.58585858586, "hlc_rifle_ak74"}, // 0.20%
			{9878.78787878788, "hlc_rifle_ak74m_gl"}, // 0.20%
			{9898.9898989899, "hlc_rifle_ak74m"}, // 0.20%
			{9919.19191919192, "hlc_rifle_ak74_MTK"}, // 0.20%
			{9939.39393939394, "hlc_rifle_ak12"}, // 0.20%
			{9959.59595959596, "hlc_rifle_ak12GL"}, // 0.20%
			{9979.79797979798, "hlc_rifle_ak74m_MTK"}, // 0.20%
			{10000, "hlc_rifle_aku12"} // 0.20%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  hlc_5rnd_300WM_SBT_AWM
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  hlc_5rnd_300WM_AP_AWM
	  Exile_Item_ToiletPaper
	  10Rnd_50BW_Mag_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  srifle_DMR_04_F
	*/
	class SuperCrate
	{
		count = 46;
		half = 9540.90909090909;
		halfIndex = 23;
		sum = 10000;
		items[] = 
		{
			{2250, "Exile_Item_Can_Empty"}, // 22.50%
			{4500, "Exile_Item_ToiletPaper"}, // 22.50%
			{6750, "Exile_Item_PlasticBottleEmpty"}, // 22.50%
			{7312.5, "Exile_Item_Magazine04"}, // 5.63%
			{7875, "Exile_Item_Magazine03"}, // 5.63%
			{8437.5, "Exile_Item_Magazine02"}, // 5.63%
			{9000, "Exile_Item_Magazine01"}, // 5.63%
			{9031.81818181818, "10Rnd_50BW_Mag_F"}, // 0.32%
			{9063.63636363636, "130Rnd_338_Mag"}, // 0.32%
			{9095.45454545455, "150Rnd_93x64_Mag"}, // 0.32%
			{9127.27272727273, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.32%
			{9159.09090909091, "10Rnd_127x54_Mag"}, // 0.32%
			{9190.90909090909, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.32%
			{9222.72727272727, "7Rnd_408_Mag"}, // 0.32%
			{9254.54545454546, "CUP_10Rnd_127x99_M107"}, // 0.32%
			{9286.36363636364, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.32%
			{9318.18181818182, "10Rnd_93x64_DMR_05_Mag"}, // 0.32%
			{9350, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.32%
			{9381.81818181818, "5Rnd_127x108_APDS_Mag"}, // 0.32%
			{9413.63636363637, "5Rnd_127x108_Mag"}, // 0.32%
			{9445.45454545455, "10Rnd_338_Mag"}, // 0.32%
			{9477.27272727273, "CUP_5Rnd_127x99_as50_M"}, // 0.32%
			{9509.09090909091, "hlc_5rnd_300WM_SBT_AWM"}, // 0.32%
			{9540.90909090909, "hlc_5rnd_300WM_AP_AWM"}, // 0.32%
			{9572.72727272728, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.32%
			{9604.54545454546, "hlc_5rnd_300WM_mk248_AWM"}, // 0.32%
			{9636.36363636364, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.32%
			{9668.18181818182, "hlc_5rnd_300WM_T_AWM"}, // 0.32%
			{9695.45454545455, "hlc_rifle_awcovert_FDE"}, // 0.27%
			{9722.72727272728, "hlc_rifle_awcovert"}, // 0.27%
			{9750.00000000001, "srifle_DMR_04_F"}, // 0.27%
			{9777.27272727273, "srifle_GM6_F"}, // 0.27%
			{9804.54545454546, "srifle_DMR_05_blk_F"}, // 0.27%
			{9831.81818181819, "srifle_DMR_05_hex_F"}, // 0.27%
			{9859.09090909092, "srifle_LRR_F"}, // 0.27%
			{9886.36363636365, "srifle_DMR_02_F"}, // 0.27%
			{9913.63636363637, "srifle_DMR_02_camo_F"}, // 0.27%
			{9940.9090909091, "hlc_rifle_awcovert_BL"}, // 0.27%
			{9956.81818181819, "CUP_MAAWS_HEAT_M"}, // 0.16%
			{9972.72727272728, "CUP_MAAWS_HEDP_M"}, // 0.16%
			{9983.63636363637, "CUP_srifle_M107_Base"}, // 0.11%
			{9989.09090909092, "CUP_srifle_AS50"}, // 0.05%
			{9991.81818181819, "MMG_01_hex_F"}, // 0.03%
			{9994.54545454546, "MMG_02_black_F"}, // 0.03%
			{9997.27272727273, "MMG_02_camo_F"}, // 0.03%
			{10000, "CUP_launch_MAAWS"} // 0.03%
		};
	};

	/**
	  Result of 100 rounds:

	  HandGrenade
	  hlc_lmg_minimi_railed
	  CUP_arifle_MG36
	  CUP_U_B_USMC_FROG4_WMARPAT
	  TRYK_U_B_Wood_T
	  TRYK_U_B_JSDF_CombatUniform
	  B_Carryall_ocamo
	  TRYK_U_B_BLK
	  hlc_rifle_M14_Rail
	  TRYK_B_Coyotebackpack
	  DemoCharge_Remote_Mag
	  1Rnd_HE_Grenade_shell
	  TRYK_U_B_PCUHsW
	  TRYK_U_B_PCUHsW6
	  TRYK_B_Coyotebackpack
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  TRYK_B_Coyotebackpack_WH
	  hlc_rifle_rpk
	  B_Carryall_oucamo
	  TRYK_T_camo_wood_marpat
	  TRYK_U_B_Wood_T
	  TRYK_U_B_PCUHsW6
	  B_Carryall_mcamo
	  TRYK_U_B_Snow_CombatUniform
	  TRYK_U_B_PCUHsW2
	  TRYK_B_USMC_R
	  TRYK_U_B_AOR2_OD_CombatUniform
	  HandGrenade
	  CUP_srifle_M40A3
	  hlc_rifle_g3ka4
	  TRYK_U_B_PCUHsW
	  HandGrenade
	  TRYK_U_B_PCUHsW
	  CUP_IED_V1_M
	  DemoCharge_Remote_Mag
	  TRYK_U_B_Snowt
	  TRYK_T_camo_wood_marpat
	  hlc_m249_pip1
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  TRYK_U_B_PCUHsW5
	  CUP_arifle_MG36_camo
	  TRYK_B_USMC_R
	  TRYK_T_camo_wood_marpat
	  B_Carryall_khk
	  LMG_03_F
	  hlc_lmg_minimi_railed
	  srifle_DMR_07_blk_F
	  TRYK_U_B_WOOD_MARPAT_CombatUniform
	  TRYK_B_Coyotebackpack_OD
	  MiniGrenade
	  TRYK_U_B_AOR2_OD_CombatUniform
	  Exile_Uniform_Woodland
	  TRYK_B_Carryall_wh
	  B_Carryall_mcamo
	  CUP_arifle_MG36
	  TRYK_U_B_PCUHsW6
	  TRYK_U_B_Snowt
	  TRYK_B_Coyotebackpack_WH
	  TRYK_U_B_PCUHsW
	  CUP_arifle_XM8_Railed
	  TRYK_B_Coyotebackpack_OD
	  TRYK_B_Carryall_wood
	  srifle_EBR_F
	  TRYK_U_B_WOOD_MARPAT_CombatUniform
	  B_Carryall_cbr
	  hlc_rifle_rpk
	  TRYK_B_Coyotebackpack_OD
	  TRYK_U_B_BLKBLK_CombatUniform
	  TRYK_B_USMC_R
	  1Rnd_HE_Grenade_shell
	  TRYK_U_B_PCUHsW6
	  CUP_U_B_USMC_FROG4_WMARPAT
	  CUP_1Rnd_HE_M203
	  1Rnd_HE_Grenade_shell
	  SatchelCharge_Remote_Mag
	  arifle_Katiba_C_F
	  Exile_Uniform_Woodland
	  hlc_rifle_rpk74n
	  TRYK_U_B_BLKBLK_CombatUniform
	  TRYK_U_B_OD_OD_R_CombatUniform
	  CUP_srifle_M110
	  srifle_DMR_03_woodland_F
	  TRYK_U_B_PCUHsW5
	  hlc_lmg_M60E4
	  CUP_srifle_SVD
	  arifle_SPAR_03_blk_F
	  Exile_Uniform_Woodland
	  MiniGrenade
	  hlc_lmg_m60
	  3Rnd_HE_Grenade_shell
	  TRYK_B_Carryall_wh
	  hlc_rifle_m14sopmod
	  CUP_1Rnd_HE_M203
	  G_Carryall_Ammo
	  B_Carryall_ghex_F
	  TRYK_U_B_PCUHsW6
	  TRYK_U_B_BLK
	  TRYK_B_Coyotebackpack_WH
	  hlc_rifle_amt
	*/
	class ChopperCrash
	{
		count = 139;
		half = 8241.43999401732;
		halfIndex = 69;
		sum = 9999.99999999995;
		items[] = 
		{
			{281.16213683224, "TRYK_B_Carryall_wh"}, // 2.81%
			{562.32427366448, "TRYK_B_Coyotebackpack_WH"}, // 2.81%
			{795.424506764713, "HandGrenade"}, // 2.33%
			{1028.52473986495, "MiniGrenade"}, // 2.33%
			{1261.62497296518, "1Rnd_HE_Grenade_shell"}, // 2.33%
			{1494.72520606541, "3Rnd_HE_Grenade_shell"}, // 2.33%
			{1727.82543916565, "CUP_1Rnd_HE_M203"}, // 2.33%
			{1960.92567226588, "hlc_VOG25_AK"}, // 2.33%
			{2124.72583606604, "TRYK_U_B_PCUHsW6"}, // 1.64%
			{2288.52599986621, "TRYK_U_B_PCUHsW5"}, // 1.64%
			{2452.32616366637, "TRYK_U_B_PCUHsW4"}, // 1.64%
			{2616.12632746653, "TRYK_B_USMC_R"}, // 1.64%
			{2779.9264912667, "Exile_Uniform_Woodland"}, // 1.64%
			{2943.72665506686, "TRYK_U_B_PCUHsW"}, // 1.64%
			{3107.52681886702, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 1.64%
			{3271.32698266719, "TRYK_U_B_PCUHsW2"}, // 1.64%
			{3435.12714646735, "TRYK_U_B_Snowt"}, // 1.64%
			{3598.92731026752, "TRYK_T_camo_wood_marpat"}, // 1.64%
			{3762.72747406768, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 1.64%
			{3926.52763786784, "TRYK_U_B_woodtan_CombatUniform"}, // 1.64%
			{4090.32780166801, "TRYK_U_B_JSDF_CombatUniform"}, // 1.64%
			{4254.12796546817, "TRYK_hoodie_Wood"}, // 1.64%
			{4417.92812926834, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 1.64%
			{4581.7282930685, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 1.64%
			{4745.52845686866, "TRYK_U_B_BLK"}, // 1.64%
			{4909.32862066883, "TRYK_U_B_BLKBLK_CombatUniform"}, // 1.64%
			{5073.12878446899, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 1.64%
			{5236.92894826916, "TRYK_U_B_ARO2_CombatUniform"}, // 1.64%
			{5400.72911206932, "TRYK_U_B_Snow_CombatUniform"}, // 1.64%
			{5564.52927586949, "TRYK_U_B_Wood_T"}, // 1.64%
			{5658.2499881469, "G_Carryall_Ammo"}, // 0.94%
			{5751.97070042431, "TRYK_B_Carryall_blk"}, // 0.94%
			{5845.69141270173, "TRYK_B_Coyotebackpack_OD"}, // 0.94%
			{5939.41212497914, "TRYK_B_Coyotebackpack"}, // 0.94%
			{6033.13283725655, "TRYK_B_Coyotebackpack_BLK"}, // 0.94%
			{6126.85354953397, "B_Carryall_oucamo"}, // 0.94%
			{6220.57426181138, "B_Carryall_mcamo"}, // 0.94%
			{6314.29497408879, "B_Carryall_khk"}, // 0.94%
			{6408.01568636621, "B_Carryall_ocamo"}, // 0.94%
			{6501.73639864362, "B_Carryall_ghex_F"}, // 0.94%
			{6595.45711092103, "B_Carryall_cbr"}, // 0.94%
			{6689.17782319845, "TRYK_B_Carryall_wood"}, // 0.94%
			{6782.89853547586, "TRYK_B_Carryall_JSDF"}, // 0.94%
			{6852.82860540593, "SatchelCharge_Remote_Mag"}, // 0.70%
			{6922.758675336, "CUP_IED_V4_M"}, // 0.70%
			{6992.68874526607, "CUP_IED_V3_M"}, // 0.70%
			{7062.61881519614, "CUP_IED_V2_M"}, // 0.70%
			{7132.54888512621, "CUP_IED_V1_M"}, // 0.70%
			{7202.47895505628, "DemoCharge_Remote_Mag"}, // 0.70%
			{7252.98400556133, "CUP_srifle_M14_DMR"}, // 0.51%
			{7303.48905606638, "hlc_rifle_M14_Rail"}, // 0.51%
			{7353.99410657143, "CUP_srifle_M110"}, // 0.51%
			{7404.49915707648, "hlc_rifle_PSG1A1_RIS"}, // 0.51%
			{7455.00420758153, "hlc_rifle_psg1A1"}, // 0.51%
			{7505.50925808658, "CUP_srifle_M24_wdl"}, // 0.51%
			{7556.01430859163, "CUP_srifle_M24_des"}, // 0.51%
			{7606.51935909668, "srifle_DMR_03_woodland_F"}, // 0.51%
			{7657.02440960173, "srifle_DMR_03_tan_F"}, // 0.51%
			{7707.52946010678, "srifle_DMR_07_blk_F"}, // 0.51%
			{7758.03451061183, "srifle_DMR_06_olive_F"}, // 0.51%
			{7808.53956111689, "srifle_EBR_F"}, // 0.51%
			{7859.04461162194, "arifle_SPAR_03_blk_F"}, // 0.51%
			{7909.54966212699, "CUP_srifle_SVD"}, // 0.51%
			{7960.05471263204, "hlc_rifle_m14sopmod"}, // 0.51%
			{8010.55976313709, "CUP_srifle_M40A3"}, // 0.51%
			{8061.06481364214, "CUP_srifle_VSSVintorez"}, // 0.51%
			{8111.56986414719, "hlc_rifle_M21_Rail"}, // 0.51%
			{8154.85990743723, "hlc_rifle_rpk"}, // 0.43%
			{8198.14995072727, "arifle_CTARS_blk_F"}, // 0.43%
			{8241.43999401732, "hlc_lmg_minimi_railed"}, // 0.43%
			{8284.73003730736, "hlc_lmg_minimipara_railed"}, // 0.43%
			{8328.0200805974, "hlc_rifle_G36MLIC"}, // 0.43%
			{8371.31012388744, "hlc_rifle_G36CMLIC"}, // 0.43%
			{8414.60016717749, "LMG_03_F"}, // 0.43%
			{8457.89021046753, "hlc_m249_pip1"}, // 0.43%
			{8501.18025375757, "hlc_m249_pip3"}, // 0.43%
			{8544.47029704761, "hlc_lmg_m60"}, // 0.43%
			{8587.76034033766, "hlc_lmg_M60E4"}, // 0.43%
			{8631.0503836277, "CUP_arifle_MG36"}, // 0.43%
			{8674.34042691774, "CUP_arifle_MG36_camo"}, // 0.43%
			{8717.63047020778, "hlc_lmg_mk48"}, // 0.43%
			{8760.92051349783, "hlc_rifle_RPK12"}, // 0.43%
			{8804.21055678787, "LMG_Mk200_F"}, // 0.43%
			{8847.50060007791, "CUP_lmg_Pecheneg"}, // 0.43%
			{8890.79064336795, "LMG_Zafir_F"}, // 0.43%
			{8934.080686658, "CUP_arifle_XM8_Railed"}, // 0.43%
			{8977.37072994804, "arifle_MX_SW_Black_F"}, // 0.43%
			{9020.66077323808, "hlc_rifle_rpk74n"}, // 0.43%
			{9040.8627934401, "hlc_rifle_bcmblackjack"}, // 0.20%
			{9061.06481364212, "arifle_AK12_GL_F"}, // 0.20%
			{9081.26683384414, "arifle_AK12_F"}, // 0.20%
			{9101.46885404616, "hlc_rifle_slr107u_MTK"}, // 0.20%
			{9121.67087424818, "hlc_30Rnd_762x39_b_ak"}, // 0.20%
			{9141.8728944502, "Exile_Weapon_AKS_Gold"}, // 0.20%
			{9162.07491465222, "hlc_rifle_ak47"}, // 0.20%
			{9182.27693485424, "hlc_rifle_akm"}, // 0.20%
			{9202.47895505625, "hlc_rifle_akmgl"}, // 0.20%
			{9222.68097525827, "hlc_rifle_akm_MTK"}, // 0.20%
			{9242.88299546029, "hlc_rifle_c1A1"}, // 0.20%
			{9263.08501566231, "CUP_arifle_CZ805_B"}, // 0.20%
			{9283.28703586433, "arifle_ARX_blk_F"}, // 0.20%
			{9303.48905606635, "CUP_arifle_CZ805_B_GL"}, // 0.20%
			{9323.69107626837, "hlc_rifle_Bushmaster300"}, // 0.20%
			{9343.89309647039, "hlc_rifle_osw_GL"}, // 0.20%
			{9364.09511667241, "hlc_rifle_L1A1SLR"}, // 0.20%
			{9384.29713687443, "hlc_rifle_FAL5000Rail"}, // 0.20%
			{9404.49915707645, "hlc_rifle_FAL5061Rail"}, // 0.20%
			{9424.70117727847, "hlc_rifle_LAR"}, // 0.20%
			{9444.90319748049, "hlc_rifle_g3sg1ris"}, // 0.20%
			{9465.10521768251, "hlc_rifle_g3a3"}, // 0.20%
			{9485.30723788453, "hlc_rifle_g3a3ris"}, // 0.20%
			{9505.50925808655, "hlc_rifle_g3ka4"}, // 0.20%
			{9525.71127828857, "hlc_rifle_RK62"}, // 0.20%
			{9545.91329849058, "arifle_Katiba_C_F"}, // 0.20%
			{9566.1153186926, "hlc_rifle_honeybadger"}, // 0.20%
			{9586.31733889462, "CUP_sgun_AA12"}, // 0.20%
			{9606.51935909664, "HLC_Rifle_g3ka4_GL"}, // 0.20%
			{9626.72137929866, "hlc_rifle_SLR"}, // 0.20%
			{9646.92339950068, "hlc_rifle_stgw57_commando"}, // 0.20%
			{9667.1254197027, "hlc_rifle_STGW57"}, // 0.20%
			{9687.32743990472, "hlc_rifle_sig5104"}, // 0.20%
			{9707.52946010674, "CUP_srifle_L129A1"}, // 0.20%
			{9727.73148030876, "CUP_arifle_Sa58P"}, // 0.20%
			{9747.93350051078, "CUP_arifle_Sa58RIS2"}, // 0.20%
			{9768.1355207128, "hlc_rifle_amt"}, // 0.20%
			{9788.33754091482, "arifle_MXC_Black_F"}, // 0.20%
			{9808.53956111684, "arifle_MX_Black_F"}, // 0.20%
			{9828.74158131886, "arifle_MX_GL_Black_F"}, // 0.20%
			{9848.94360152088, "CUP_arifle_Mk17_STD_FG"}, // 0.20%
			{9869.1456217229, "CUP_arifle_Mk20"}, // 0.20%
			{9889.34764192491, "CUP_arifle_Mk17_CQC_FG"}, // 0.20%
			{9909.54966212693, "arifle_MXM_Black_F"}, // 0.20%
			{9929.75168232895, "hlc_rifle_falosw"}, // 0.20%
			{9946.13169870897, "TAC_W_ghillie_O1"}, // 0.16%
			{9962.51171508899, "U_I_FullGhillie_lsh"}, // 0.16%
			{9971.88378631673, "B_Bergen_tna_F"}, // 0.09%
			{9981.25585754447, "B_Bergen_mcamo_F"}, // 0.09%
			{9990.62792877221, "B_Bergen_hex_F"}, // 0.09%
			{9999.99999999995, "B_Bergen_dgtl_F"} // 0.09%
		};
	};

	/**
	  Result of 100 rounds:

	  ItemCompass
	  hlc_rifle_M1903A1
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Hammer
	  Exile_Item_FuelCanisterEmpty
	  CUP_srifle_LeeEnfield_rail
	  Exile_Item_Rope
	  CUP_smg_MP5A5
	  Binocular
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Rope
	  Exile_Item_FuelCanisterEmpty
	  ItemMap
	  hlc_rifle_M1903A1
	  ItemRadio
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Item_Bandage
	  ItemRadio
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_DuctTape
	  ItemCompass
	  hlc_rifle_M1903A1_unertl
	  Exile_Item_PowerDrink
	  Exile_Item_Can_Empty
	  ItemCompass
	  Exile_Item_Can_Empty
	  CUP_smg_MP5A5
	  CUP_smg_MP5A5
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_Bandage
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Hammer
	  Exile_Melee_Axe
	  hlc_rifle_M1903A1
	  CUP_smg_bizon
	  Exile_Item_Can_Empty
	  Exile_Item_Rope
	  ItemCompass
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  ItemMap
	  ItemRadio
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  ItemMap
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_Rope
	  Exile_Item_OilCanister
	  CUP_srifle_CZ550
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  hlc_rifle_M1903A1
	  Exile_Item_Rope
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Heatpack
	  Binocular
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  ItemWatch
	  Binocular
	  CUP_sgun_Saiga12K
	  Exile_Item_PowerDrink
	  Exile_Item_Heatpack
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Carwheel
	  CUP_srifle_LeeEnfield_rail
	  CUP_smg_bizon
	  Exile_Item_Bandage
	  Exile_Item_FuelCanisterFull
	  hlc_rifle_M1903A1_unertl
	  CUP_srifle_CZ550
	  Exile_Item_Can_Empty
	  ItemCompass
	  Exile_Melee_Axe
	  Binocular
	  ItemMap
	  hlc_rifle_M1903A1_unertl
	  ItemWatch
	  Exile_Item_CamoTentKit
	  Exile_Item_Hammer
	  Exile_Item_Bandage
	  Exile_Item_FuelCanisterEmpty
	  ItemMap
	  Exile_Item_MacasCheese
	*/
	class Barn
	{
		count = 64;
		half = 8942.30769230769;
		halfIndex = 32;
		sum = 10000;
		items[] = 
		{
			{546.661460367044, "ItemMap"}, // 5.47%
			{1015.22842639594, "ItemCompass"}, // 4.69%
			{1483.79539242483, "Binocular"}, // 4.69%
			{1952.36235845373, "ItemWatch"}, // 4.69%
			{2342.83483014447, "Exile_Item_Bandage"}, // 3.90%
			{2733.30730183522, "Exile_Item_Heatpack"}, // 3.90%
			{3117.92268645061, "Exile_Item_Can_Empty"}, // 3.85%
			{3502.53807106599, "Exile_Item_ToiletPaper"}, // 3.85%
			{3887.15345568137, "Exile_Item_PlasticBottleEmpty"}, // 3.85%
			{4246.38812963686, "Exile_Item_ExtensionCord"}, // 3.59%
			{4558.76610698946, "Exile_Item_Carwheel"}, // 3.12%
			{4871.14408434205, "Exile_Item_FuelCanisterEmpty"}, // 3.12%
			{5183.52206169465, "Exile_Item_DuctTape"}, // 3.12%
			{5464.66224131199, "Exile_Item_WaterCanisterEmpty"}, // 2.81%
			{5745.80242092932, "Exile_Item_CamoTentKit"}, // 2.81%
			{5980.08590394377, "Exile_Item_Rope"}, // 2.34%
			{6214.36938695822, "ItemRadio"}, // 2.34%
			{6448.65286997267, "Exile_Item_Hammer"}, // 2.34%
			{6682.93635298711, "Exile_Item_OilCanister"}, // 2.34%
			{6853.87652392729, "CUP_sgun_Saiga12K"}, // 1.71%
			{7024.81669486746, "CUP_smg_MP5SD6"}, // 1.71%
			{7195.75686580763, "CUP_smg_MP5A5"}, // 1.71%
			{7366.6970367478, "CUP_srifle_LeeEnfield_rail"}, // 1.71%
			{7537.63720768797, "CUP_sgun_M1014"}, // 1.71%
			{7708.57737862814, "CUP_smg_bizon"}, // 1.71%
			{7879.51754956831, "CUP_srifle_CZ550"}, // 1.71%
			{8050.45772050848, "hlc_rifle_M1903A1_unertl"}, // 1.71%
			{8221.39789144865, "hlc_rifle_M1903A1"}, // 1.71%
			{8377.58688012495, "Exile_Item_ZipTie"}, // 1.56%
			{8533.77586880125, "Exile_Melee_Axe"}, // 1.56%
			{8689.96485747755, "Exile_Item_FuelCanisterFull"}, // 1.56%
			{8846.15384615385, "Exile_Item_Wrench"}, // 1.56%
			{8942.30769230769, "Exile_Item_Magazine03"}, // 0.96%
			{9038.46153846154, "Exile_Item_Magazine02"}, // 0.96%
			{9134.61538461538, "Exile_Item_Magazine01"}, // 0.96%
			{9230.76923076923, "Exile_Item_Magazine04"}, // 0.96%
			{9281.64428164428, "Exile_Item_PlasticBottleCoffee"}, // 0.51%
			{9332.51933251933, "Exile_Item_ChocolateMilk"}, // 0.51%
			{9383.39438339438, "Exile_Item_MountainDupe"}, // 0.51%
			{9434.26943426943, "Exile_Item_EnergyDrink"}, // 0.51%
			{9485.14448514448, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{9536.01953601953, "Exile_Item_PowerDrink"}, // 0.51%
			{9586.89458689458, "Exile_Item_Beer"}, // 0.51%
			{9607.24460724461, "Exile_Item_CanOpener"}, // 0.20%
			{9627.59462759463, "Exile_Item_Matches"}, // 0.20%
			{9647.94464794465, "Exile_Item_EMRE"}, // 0.20%
			{9668.29466829467, "Exile_Item_GloriousKnakworst"}, // 0.20%
			{9688.64468864469, "Exile_Item_Surstromming"}, // 0.20%
			{9708.99470899471, "Exile_Item_SausageGravy"}, // 0.20%
			{9729.34472934473, "Exile_Item_ChristmasTinner"}, // 0.20%
			{9749.69474969475, "Exile_Item_MacasCheese"}, // 0.20%
			{9770.04477004477, "Exile_Item_BBQSandwich"}, // 0.20%
			{9790.39479039479, "Exile_Item_Dogfood"}, // 0.20%
			{9810.74481074481, "Exile_Item_BeefParts"}, // 0.20%
			{9831.09483109483, "Exile_Item_Cheathas"}, // 0.20%
			{9851.44485144485, "Exile_Item_DsNuts"}, // 0.20%
			{9871.79487179487, "Exile_Item_CockONut"}, // 0.20%
			{9892.1448921449, "Exile_Item_SeedAstics"}, // 0.20%
			{9912.49491249492, "Exile_Item_Raisins"}, // 0.20%
			{9932.84493284494, "Exile_Item_Moobar"}, // 0.20%
			{9953.19495319496, "Exile_Item_InstantCoffee"}, // 0.20%
			{9973.54497354498, "Exile_Item_CatFood"}, // 0.20%
			{9993.894993895, "Exile_Item_Noodles"}, // 0.20%
			{10000, "Exile_Item_CookingPot"} // 0.06%
		};
	};

};


class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 1;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 28;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 14;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 5;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 8;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 5;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 100;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 50;

			// If you kill someone who is in his own territory
			raid = 200;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Bandage",
			"Exile_Item_Bandage",
			"Exile_Item_Bandage"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 0;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 0	;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 300;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{3, "Exile_Bike_OldBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 30; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Cloudy"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0;
			fogDecay = 0;
			fogBase = 0;
			overcast = 0.1;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.1;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 1;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 1;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 5;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 1;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 0;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 20; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 2;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 300; // altitude of the drop
			markerTime = 45; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Tools", "Food", "Drinks", "RepairParts", "Medical", "Technology", "BuildingSupplies"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 20}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 10},
						{"Exile_Item_Catfood", 10},
						{"Exile_Item_ChristmasTinner", 10},
						{"Exile_Item_GloriousKnakworst", 10},
						{"Exile_Item_SausageGravy", 10},
						{"Exile_Item_Surstromming", 10},
						{"Exile_Item_CanOpener", 3},
						{"Exile_Item_CookingPot", 3},
						{"Exile_Item_Matches", 3}
					};
				};

				class Drinks 
				{
					items[] = 
					{
						{"Exile_Item_InstantCoffee", 12},
						{"Exile_Item_Energydrink", 12},
						{"Exile_Item_PlasticBottleFreshWater", 12},
						{"Exile_Item_MountainDupe", 24},
						{"Exile_Item_PowerDrink", 12},
						{"Exile_Item_PlasticBottleCoffee", 12}
					};
				};
				
				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Melee_Axe", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_Foolbox", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_CordlessScrewdriver", 1},
						{"Exile_Melee_SledgeHammer", 1},
						{"Exile_Item_Hammer", 1}
					};
				};
				
				class Medical 
				{
					items[] = 
					{
						{"Exile_Item_Bandage", 20},
						{"Exile_Item_Vishpirin", 20},
						{"Exile_Item_InstaDoc", 10}
					};
				};
				
				class BuildingSupplies 
				{
					items[] = 
					{
						{"Exile_Item_WoodFloorKit", 12},
						{"Exile_Item_WoodFloorPortKit", 3},
						{"Exile_Item_WoodWallKit", 12},
						{"Exile_Item_WoodDoorwayKit", 2},
						{"Exile_Item_WoodGateKit", 2},
						{"Exile_Item_WoodWindowKit", 5},
						{"Exile_Item_Codelock", 1}
					};
				};

				class Technology 
				{
					items[] = 
					{
						{"Exile_Item_ThermalScannerPro", 2},
						{"Exile_Item_BaseCameraKit", 2},
						{"ItemGPS", 2},
						{"Rangefinder", 2},
						{"NVGoggles", 2}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 4},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 2},
						{"Exile_Item_MetalWire", 2},
						{"Exile_Item_JunkMetal", 2},
						{"Exile_Item_DuctTape", 3},
						{"Exile_Item_MetalScrews", 3},
						{"Exile_Item_MetalBoard", 2}
					};
				};
			};
		};
		
		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};		
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};
};

