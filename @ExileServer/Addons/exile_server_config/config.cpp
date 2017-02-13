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

	  9Rnd_45ACP_Mag
	  CUP_hgun_Phantom
	  optic_Aco
	  Chemlight_blue
	  CUP_18Rnd_9x19_Phantom
	  H_Hat_tan
	  Exile_Item_Magazine04
	  Exile_Item_Moobar
	  U_C_Poloshirt_tricolour
	  optic_Aco_smg
	  muzzle_snds_acp
	  Chemlight_yellow
	  H_Hat_tan
	  Chemlight_blue
	  hgun_ACPC2_F
	  H_Hat_brown
	  muzzle_snds_acp
	  hgun_Rook40_F
	  H_Cap_blk_Raven
	  ItemMap
	  B_AssaultPack_sgg
	  Exile_Item_PlasticBottleCoffee
	  H_StrawHat
	  hgun_P07_F
	  Exile_Item_PlasticBottleEmpty
	  hgun_Pistol_heavy_01_F
	  H_Cap_oli
	  CUP_hgun_MicroUzi
	  hgun_ACPC2_F
	  U_C_Poloshirt_tricolour
	  Exile_Item_CanOpener
	  CUP_8Rnd_9x18_MakarovSD_M
	  CUP_hgun_SA61
	  CUP_smg_MP5A5
	  Exile_Item_DsNuts
	  B_AssaultPack_khk
	  Exile_Item_BeefParts
	  muzzle_snds_acp
	  Exile_Item_ToiletPaper
	  U_C_Journalist
	  CUP_muzzle_snds_M9
	  Exile_Item_Magazine01
	  Exile_Item_MacasCheese
	  Exile_Item_CatFood
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  H_Hat_brown
	  CUP_hgun_MicroUzi
	  U_C_HunterBody_grn
	  Exile_Item_Can_Empty
	  Exile_Weapon_M1014
	  V_Press_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  10Rnd_9x21_Mag
	  B_AssaultPack_khk
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_8Rnd_74Slug
	  U_C_Poloshirt_salmon
	  30Rnd_9x21_Mag
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  U_NikosAgedBody
	  Chemlight_green
	  Exile_Item_SeedAstics
	  Exile_Item_SeedAstics
	  CUP_acc_Glock17_Flashlight
	  CUP_acc_Glock17_Flashlight
	  Exile_Item_EnergyDrink
	  Exile_Item_PlasticBottleEmpty
	  CUP_smg_bizon_snds
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_BeefParts
	  V_TacVest_blk_POLICE
	  Exile_Item_CockONut
	  Exile_Item_ToiletPaper
	  ItemRadio
	  H_Cap_blk
	  Exile_Item_PlasticBottleEmpty
	  U_C_Poloshirt_salmon
	  Chemlight_blue
	  Exile_Item_Raisins
	  V_TacVest_blk_POLICE
	  muzzle_snds_L
	  B_OutdoorPack_blk
	  Exile_Magazine_7Rnd_45ACP
	  B_AssaultPack_sgg
	  FlareRed_F
	  CUP_smg_bizon_snds
	  B_AssaultPack_cbr
	  V_Rangemaster_belt
	  muzzle_snds_L
	  B_AssaultPack_blk
	  Exile_Item_Raisins
	  ItemRadio
	  Exile_Item_MacasCheese
	  hgun_ACPC2_F
	  H_Hat_grey
	*/
	class CivillianLowerClass
	{
		count = 187;
		half = 7313.21611793171;
		halfIndex = 93;
		sum = 10000;
		items[] = 
		{
			{337.837837837838, "Exile_Item_Can_Empty"}, // 3.38%
			{675.675675675676, "Exile_Item_ToiletPaper"}, // 3.38%
			{1013.51351351351, "Exile_Item_PlasticBottleEmpty"}, // 3.38%
			{1126.12612612613, "FlareRed_F"}, // 1.13%
			{1238.73873873874, "FlareGreen_F"}, // 1.13%
			{1351.35135135135, "Chemlight_yellow"}, // 1.13%
			{1463.96396396396, "Chemlight_red"}, // 1.13%
			{1576.57657657658, "Chemlight_green"}, // 1.13%
			{1689.18918918919, "Chemlight_blue"}, // 1.13%
			{1801.8018018018, "V_Rangemaster_belt"}, // 1.13%
			{1914.41441441441, "FlareWhite_F"}, // 1.13%
			{2027.02702702703, "FlareYellow_F"}, // 1.13%
			{2133.01536830949, "Exile_Item_Heatpack"}, // 1.06%
			{2229.36171465583, "Exile_Item_InstantCoffee"}, // 0.96%
			{2323.20555849968, "Exile_Item_PlasticBottleDirtyWater"}, // 0.94%
			{2415.94535712183, "ItemMap"}, // 0.93%
			{2507.04769541518, "muzzle_snds_acp"}, // 0.91%
			{2598.15003370853, "muzzle_snds_L"}, // 0.91%
			{2688.24012379862, "CUP_sgun_Saiga12K"}, // 0.90%
			{2778.33021388871, "Exile_Weapon_M1014"}, // 0.90%
			{2862.78967334817, "Exile_Item_Magazine04"}, // 0.84%
			{2947.24913280763, "Exile_Item_Magazine03"}, // 0.84%
			{3031.70859226709, "Exile_Item_Magazine02"}, // 0.84%
			{3116.16805172654, "Exile_Item_Magazine01"}, // 0.84%
			{3195.65930768839, "ItemWatch"}, // 0.79%
			{3275.15056365023, "ItemRadio"}, // 0.79%
			{3354.30922021475, "hgun_P07_F"}, // 0.79%
			{3433.13804904358, "Exile_Item_Moobar"}, // 0.79%
			{3511.96687787241, "Exile_Item_Raisins"}, // 0.79%
			{3587.35607460051, "hgun_ACPC2_F"}, // 0.75%
			{3662.74527132862, "hgun_Rook40_F"}, // 0.75%
			{3737.8203464037, "Exile_Item_MountainDupe"}, // 0.75%
			{3812.89542147877, "Exile_Item_ChocolateMilk"}, // 0.75%
			{3886.13939716177, "30Rnd_9x21_Mag"}, // 0.73%
			{3959.38337284477, "11Rnd_45ACP_Mag"}, // 0.73%
			{4032.62734852777, "9Rnd_45ACP_Mag"}, // 0.73%
			{4105.87132421077, "Exile_Magazine_7Rnd_45ACP"}, // 0.73%
			{4179.11529989377, "10Rnd_9x21_Mag"}, // 0.73%
			{4252.35927557677, "Exile_Magazine_6Rnd_45ACP"}, // 0.73%
			{4325.60325125977, "Exile_Magazine_8Rnd_9x18"}, // 0.73%
			{4395.67332132984, "Exile_Item_SeedAstics"}, // 0.70%
			{4465.74339139991, "Exile_Item_CockONut"}, // 0.70%
			{4533.59366845521, "CUP_hgun_Phantom"}, // 0.68%
			{4599.51324656991, "CUP_30Rnd_9x19_UZI"}, // 0.66%
			{4665.43282468461, "CUP_18Rnd_9x19_Phantom"}, // 0.66%
			{4731.35240279931, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.66%
			{4795.16621661312, "Exile_Item_EnergyDrink"}, // 0.64%
			{4856.47752792444, "Exile_Item_Surstromming"}, // 0.61%
			{4917.78883923575, "Exile_Item_ChristmasTinner"}, // 0.61%
			{4979.10015054706, "Exile_Item_Cheathas"}, // 0.61%
			{5040.41146185837, "Exile_Item_BeefParts"}, // 0.61%
			{5101.72277316968, "Exile_Item_Dogfood"}, // 0.61%
			{5163.03408448099, "Exile_Item_CatFood"}, // 0.61%
			{5224.3453957923, "Exile_Item_DsNuts"}, // 0.61%
			{5285.65670710362, "Exile_Item_Noodles"}, // 0.61%
			{5346.96801841493, "Exile_Item_BBQSandwich"}, // 0.61%
			{5408.27932972624, "Exile_Item_MacasCheese"}, // 0.61%
			{5469.59064103755, "Exile_Item_SausageGravy"}, // 0.61%
			{5528.18582158395, "6Rnd_45ACP_Cylinder"}, // 0.59%
			{5584.49212789026, "V_Press_F"}, // 0.56%
			{5640.79843419656, "V_TacVest_blk_POLICE"}, // 0.56%
			{5694.85248825062, "H_StrawHat"}, // 0.54%
			{5748.90654230467, "H_Hat_grey"}, // 0.54%
			{5802.96059635872, "H_Hat_checker"}, // 0.54%
			{5857.01465041278, "H_Hat_blue"}, // 0.54%
			{5911.06870446683, "H_StrawHat_dark"}, // 0.54%
			{5965.12275852089, "H_Hat_tan"}, // 0.54%
			{6019.17681257494, "H_Hat_brown"}, // 0.54%
			{6073.230866629, "H_Cap_red"}, // 0.54%
			{6127.28492068305, "H_Cap_tan"}, // 0.54%
			{6181.3389747371, "H_Cap_press"}, // 0.54%
			{6234.33314537833, "Binocular"}, // 0.53%
			{6286.88569793089, "Exile_Item_GloriousKnakworst"}, // 0.53%
			{6339.43825048344, "Exile_Item_Beer"}, // 0.53%
			{6390.05066064641, "CUP_muzzle_snds_MicroUzi"}, // 0.51%
			{6440.66307080938, "CUP_acc_Glock17_Flashlight"}, // 0.51%
			{6491.27548097235, "CUP_acc_CZ_M3X"}, // 0.51%
			{6540.27845884563, "Exile_Weapon_Colt1911"}, // 0.49%
			{6589.2814367189, "hgun_P07_khk_F"}, // 0.49%
			{6638.28441459217, "hgun_Pistol_Signal_F"}, // 0.49%
			{6687.28739246544, "hgun_Pistol_heavy_01_F"}, // 0.49%
			{6736.29037033871, "Exile_Weapon_TaurusGold"}, // 0.49%
			{6785.29334821198, "Exile_Weapon_Makarov"}, // 0.49%
			{6834.29632608525, "hgun_Pistol_01_F"}, // 0.49%
			{6883.29930395852, "CUP_hgun_SA61"}, // 0.49%
			{6932.30228183179, "Exile_Weapon_Taurus"}, // 0.49%
			{6981.30525970506, "hgun_Pistol_heavy_02_F"}, // 0.49%
			{7028.72109659458, "U_Rangemaster"}, // 0.47%
			{7076.1369334841, "U_C_Poor_1"}, // 0.47%
			{7123.55277037362, "U_C_Poor_2"}, // 0.47%
			{7170.96860726315, "U_C_Poor_shorts_1"}, // 0.47%
			{7218.38444415267, "U_C_Journalist"}, // 0.47%
			{7265.80028104219, "U_C_Scientist"}, // 0.47%
			{7313.21611793171, "U_C_HunterBody_grn"}, // 0.47%
			{7359.52410816493, "B_OutdoorPack_blk"}, // 0.46%
			{7405.07527731161, "CUP_muzzle_snds_M9"}, // 0.46%
			{7450.30879534847, "CUP_hgun_Duty_M3X"}, // 0.45%
			{7495.35384039352, "H_Cap_oli"}, // 0.45%
			{7540.39888543856, "Exile_Item_ZipTie"}, // 0.45%
			{7585.44393048361, "H_Cap_grn"}, // 0.45%
			{7630.48897552865, "H_Bandanna_surfer"}, // 0.45%
			{7675.5340205737, "H_Cap_blu"}, // 0.45%
			{7720.57906561875, "H_Cap_headphones"}, // 0.45%
			{7765.62411066379, "H_Beret_blk_POLICE"}, // 0.45%
			{7810.66915570884, "Exile_Item_PlasticBottleFreshWater"}, // 0.45%
			{7855.71420075388, "H_Cap_blk_Raven"}, // 0.45%
			{7900.75924579893, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.45%
			{7945.80429084397, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.45%
			{7990.84933588902, "Exile_Magazine_8Rnd_74Slug"}, // 0.45%
			{8035.89438093406, "H_Cap_blk"}, // 0.45%
			{8079.84076634386, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.44%
			{8123.63456013766, "Exile_Item_Matches"}, // 0.44%
			{8167.42835393145, "Exile_Item_CanOpener"}, // 0.44%
			{8209.10554514135, "B_OutdoorPack_blu"}, // 0.42%
			{8250.78273635125, "B_OutdoorPack_tan"}, // 0.42%
			{8288.47733471531, "CUP_hgun_PB6P9_snds"}, // 0.38%
			{8325.52372690189, "B_HuntingBackpack"}, // 0.37%
			{8362.40271114929, "U_C_Poloshirt_tricolour"}, // 0.37%
			{8399.2816953967, "U_C_Poloshirt_stripped"}, // 0.37%
			{8436.1606796441, "U_C_Poloshirt_blue"}, // 0.37%
			{8473.03966389151, "U_C_Poloshirt_burgundy"}, // 0.37%
			{8509.91864813891, "U_C_Poloshirt_salmon"}, // 0.37%
			{8546.54063598041, "16Rnd_9x21_Mag"}, // 0.37%
			{8581.96932309449, "optic_Yorris"}, // 0.35%
			{8617.39801020858, "optic_MRD"}, // 0.35%
			{8649.81360337183, "B_AssaultPack_tna_F"}, // 0.32%
			{8682.22919653509, "B_AssaultPack_cbr"}, // 0.32%
			{8714.64478969834, "B_AssaultPack_blk"}, // 0.32%
			{8747.0603828616, "B_AssaultPack_sgg"}, // 0.32%
			{8779.47597602485, "B_AssaultPack_rgr"}, // 0.32%
			{8811.89156918811, "B_AssaultPack_dgtl"}, // 0.32%
			{8844.30716235137, "B_AssaultPack_khk"}, // 0.32%
			{8876.72275551462, "B_AssaultPack_mcamo"}, // 0.32%
			{8908.01720786171, "hgun_PDW2000_F"}, // 0.31%
			{8939.31166020879, "SMG_05_F"}, // 0.31%
			{8969.46733890003, "CUP_hgun_MicroUzi"}, // 0.30%
			{8995.96442422065, "ItemGPS"}, // 0.26%
			{9022.30655582594, "U_C_man_sport_3_F"}, // 0.26%
			{9048.64868743123, "U_C_Man_casual_5_F"}, // 0.26%
			{9074.99081903652, "U_I_C_Soldier_Bandit_1_F"}, // 0.26%
			{9101.33295064181, "U_I_C_Soldier_Bandit_2_F"}, // 0.26%
			{9127.6750822471, "U_I_C_Soldier_Bandit_3_F"}, // 0.26%
			{9154.01721385239, "U_C_Man_casual_6_F"}, // 0.26%
			{9180.35934545768, "U_I_C_Soldier_Bandit_5_F"}, // 0.26%
			{9206.70147706297, "U_I_C_Soldier_Bandit_4_F"}, // 0.26%
			{9233.04360866826, "U_C_man_sport_2_F"}, // 0.26%
			{9259.38574027355, "U_C_Man_casual_1_F"}, // 0.26%
			{9285.72787187884, "U_C_Man_casual_2_F"}, // 0.26%
			{9312.07000348413, "U_C_Man_casual_3_F"}, // 0.26%
			{9338.41213508942, "U_C_Man_casual_4_F"}, // 0.26%
			{9364.75426669471, "U_C_man_sport_1_F"}, // 0.26%
			{9391.03054297098, "Exile_Item_CookingPot"}, // 0.26%
			{9417.30681924726, "Exile_Item_EMRE"}, // 0.26%
			{9443.58309552353, "Exile_Item_PowerDrink"}, // 0.26%
			{9469.21848701258, "6Rnd_GreenSignal_F"}, // 0.26%
			{9494.85387850163, "6Rnd_RedSignal_F"}, // 0.26%
			{9518.56179694639, "SMG_01_F"}, // 0.24%
			{9542.26971539116, "CUP_smg_MP5A5"}, // 0.24%
			{9565.42371050777, "B_Kitbag_mcamo"}, // 0.23%
			{9588.57770562438, "B_Kitbag_sgg"}, // 0.23%
			{9611.73170074099, "B_Kitbag_cbr"}, // 0.23%
			{9631.75172076101, "optic_Holosight_smg"}, // 0.20%
			{9651.77174078103, "optic_Aco"}, // 0.20%
			{9671.79176080105, "optic_ACO_grn"}, // 0.20%
			{9691.81178082107, "optic_Aco_smg"}, // 0.20%
			{9711.83180084109, "optic_ACO_grn_smg"}, // 0.20%
			{9731.85182086111, "optic_Holosight_smg_blk_F"}, // 0.20%
			{9750.81815561692, "SMG_02_F"}, // 0.19%
			{9769.78449037273, "CUP_smg_bizon"}, // 0.19%
			{9788.5532591415, "Exile_Item_PlasticBottleCoffee"}, // 0.19%
			{9803.56827415651, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.15%
			{9818.58328917153, "30Rnd_45ACP_Mag_SMG_01"}, // 0.15%
			{9833.59830418654, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.15%
			{9848.61331920156, "30Rnd_9x21_Mag_SMG_02"}, // 0.15%
			{9863.62833421657, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.15%
			{9878.64334923159, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.15%
			{9893.6583642466, "CUP_64Rnd_9x19_Bizon_M"}, // 0.15%
			{9908.67337926162, "CUP_30Rnd_9x19_MP5"}, // 0.15%
			{9923.68839427663, "CUP_30Rnd_9x19_EVO"}, // 0.15%
			{9938.70340929165, "CUP_optic_ACOG"}, // 0.15%
			{9951.97984362071, "CUP_smg_MP5SD6"}, // 0.13%
			{9965.22838628102, "Exile_Item_MobilePhone"}, // 0.13%
			{9974.71155365892, "CUP_smg_EVO"}, // 0.09%
			{9984.19472103683, "CUP_smg_bizon_snds"}, // 0.09%
			{9989.46314735788, "U_OrestesBody"}, // 0.05%
			{9994.73157367894, "U_NikosAgedBody"}, // 0.05%
			{10000, "U_NikosBody"} // 0.05%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_InstantCoffee
	  V_TacVest_blk_POLICE
	  Exile_Item_Can_Empty
	  hgun_PDW2000_F
	  optic_ACO_grn
	  Exile_Item_Magazine03
	  ItemGPS
	  SMG_05_F
	  B_AssaultPack_khk
	  muzzle_snds_L
	  H_Hat_tan
	  Chemlight_green
	  Exile_Item_CatFood
	  U_C_Poloshirt_blue
	  U_C_man_sport_1_F
	  Exile_Item_DsNuts
	  U_C_Poloshirt_burgundy
	  B_AssaultPack_khk
	  SMG_02_F
	  FlareYellow_F
	  Exile_Weapon_M1014
	  B_AssaultPack_rgr
	  Exile_Item_ToiletPaper
	  30Rnd_9x21_Mag
	  B_HuntingBackpack
	  CUP_hgun_Phantom
	  11Rnd_45ACP_Mag
	  Exile_Item_ChocolateMilk
	  B_OutdoorPack_blk
	  muzzle_snds_acp
	  U_C_Man_casual_6_F
	  Exile_Item_ChristmasTinner
	  Exile_Item_PlasticBottleDirtyWater
	  Chemlight_green
	  B_AssaultPack_khk
	  Chemlight_blue
	  H_Hat_grey
	  B_AssaultPack_khk
	  CUP_30Rnd_9x19_EVO
	  CUP_smg_bizon
	  FlareGreen_F
	  B_AssaultPack_khk
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Beer
	  Chemlight_yellow
	  muzzle_snds_L
	  Exile_Item_CookingPot
	  U_C_man_sport_3_F
	  U_C_Poor_shorts_1
	  B_OutdoorPack_blu
	  U_C_Man_casual_5_F
	  Exile_Item_EnergyDrink
	  CUP_sgun_Saiga12K
	  Exile_Item_Surstromming
	  Exile_Item_MountainDupe
	  H_Hat_tan
	  B_AssaultPack_tna_F
	  V_TacVest_blk_POLICE
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_Surstromming
	  16Rnd_9x21_Mag
	  Exile_Item_Noodles
	  B_AssaultPack_khk
	  B_OutdoorPack_blu
	  hgun_ACPC2_F
	  Exile_Item_PlasticBottleEmpty
	  U_I_C_Soldier_Bandit_2_F
	  10Rnd_9x21_Mag
	  Exile_Item_Magazine03
	  Exile_Magazine_8Rnd_74Slug
	  B_Kitbag_cbr
	  Exile_Item_Magazine04
	  H_Hat_brown
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_MacasCheese
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_Magazine01
	  Exile_Item_InstantCoffee
	  Exile_Item_BeefParts
	  Exile_Item_SausageGravy
	  H_StrawHat
	  CUP_smg_bizon
	  B_OutdoorPack_blu
	  11Rnd_45ACP_Mag
	  Exile_Item_Magazine04
	  Exile_Weapon_Colt1911
	  U_Rangemaster
	  SMG_02_F
	  B_AssaultPack_rgr
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_PlasticBottleEmpty
	  H_StrawHat_dark
	  Exile_Item_Can_Empty
	  U_C_Poor_shorts_1
	  ItemWatch
	  Exile_Item_ToiletPaper
	*/
	class CivillianUpperClass
	{
		count = 401;
		half = 9745.1659066239;
		halfIndex = 200;
		sum = 9999.99999999991;
		items[] = 
		{
			{315.126050420168, "Exile_Item_Can_Empty"}, // 3.15%
			{630.252100840336, "Exile_Item_ToiletPaper"}, // 3.15%
			{945.378151260504, "Exile_Item_PlasticBottleEmpty"}, // 3.15%
			{1050.42016806723, "V_Rangemaster_belt"}, // 1.05%
			{1155.46218487395, "Chemlight_blue"}, // 1.05%
			{1260.50420168067, "Chemlight_green"}, // 1.05%
			{1365.54621848739, "Chemlight_red"}, // 1.05%
			{1470.58823529412, "Chemlight_yellow"}, // 1.05%
			{1575.63025210084, "FlareGreen_F"}, // 1.05%
			{1680.67226890756, "FlareYellow_F"}, // 1.05%
			{1785.71428571428, "FlareWhite_F"}, // 1.05%
			{1890.75630252101, "FlareRed_F"}, // 1.05%
			{1989.61937716263, "Exile_Item_Heatpack"}, // 0.99%
			{2079.48865820838, "Exile_Item_InstantCoffee"}, // 0.90%
			{2167.02367221398, "Exile_Item_PlasticBottleDirtyWater"}, // 0.88%
			{2253.5288625254, "ItemMap"}, // 0.87%
			{2338.50667387466, "muzzle_snds_acp"}, // 0.85%
			{2423.48448522392, "muzzle_snds_L"}, // 0.85%
			{2507.5180986693, "CUP_sgun_Saiga12K"}, // 0.84%
			{2591.55171211468, "Exile_Weapon_M1014"}, // 0.84%
			{2670.33322471972, "Exile_Item_Magazine01"}, // 0.79%
			{2749.11473732476, "Exile_Item_Magazine02"}, // 0.79%
			{2827.8962499298, "Exile_Item_Magazine03"}, // 0.79%
			{2906.67776253484, "Exile_Item_Magazine04"}, // 0.79%
			{2985.21384986697, "B_OutdoorPack_blk"}, // 0.79%
			{3059.36115584819, "ItemWatch"}, // 0.74%
			{3133.5084618294, "ItemRadio"}, // 0.74%
			{3207.34552803664, "hgun_P07_F"}, // 0.74%
			{3280.87493980135, "Exile_Item_Raisins"}, // 0.74%
			{3354.40435156605, "Exile_Item_Moobar"}, // 0.74%
			{3425.08683016497, "B_OutdoorPack_tan"}, // 0.71%
			{3495.76930876388, "B_OutdoorPack_blu"}, // 0.71%
			{3566.09032419935, "hgun_ACPC2_F"}, // 0.70%
			{3636.41133963481, "hgun_Rook40_F"}, // 0.70%
			{3706.43935083929, "Exile_Item_MountainDupe"}, // 0.70%
			{3776.46736204377, "Exile_Item_ChocolateMilk"}, // 0.70%
			{3844.78737297498, "10Rnd_9x21_Mag"}, // 0.68%
			{3913.10738390618, "Exile_Magazine_8Rnd_9x18"}, // 0.68%
			{3981.42739483738, "Exile_Magazine_7Rnd_45ACP"}, // 0.68%
			{4049.74740576858, "9Rnd_45ACP_Mag"}, // 0.68%
			{4118.06741669978, "30Rnd_9x21_Mag"}, // 0.68%
			{4186.38742763099, "11Rnd_45ACP_Mag"}, // 0.68%
			{4254.70743856219, "Exile_Magazine_6Rnd_45ACP"}, // 0.68%
			{4320.06691568637, "Exile_Item_SeedAstics"}, // 0.65%
			{4385.42639281055, "Exile_Item_CockONut"}, // 0.65%
			{4448.71530670247, "CUP_hgun_Phantom"}, // 0.63%
			{4511.54417656817, "B_HuntingBackpack"}, // 0.63%
			{4573.03218640626, "CUP_18Rnd_9x19_Phantom"}, // 0.61%
			{4634.52019624434, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.61%
			{4696.00820608242, "CUP_30Rnd_9x19_UZI"}, // 0.61%
			{4755.53201560623, "Exile_Item_EnergyDrink"}, // 0.60%
			{4812.72155808989, "Exile_Item_DsNuts"}, // 0.57%
			{4869.91110057355, "Exile_Item_MacasCheese"}, // 0.57%
			{4927.10064305721, "Exile_Item_BBQSandwich"}, // 0.57%
			{4984.29018554087, "Exile_Item_Surstromming"}, // 0.57%
			{5041.47972802453, "Exile_Item_CatFood"}, // 0.57%
			{5098.66927050819, "Exile_Item_Noodles"}, // 0.57%
			{5155.85881299185, "Exile_Item_SausageGravy"}, // 0.57%
			{5213.04835547551, "Exile_Item_Dogfood"}, // 0.57%
			{5270.23789795917, "Exile_Item_BeefParts"}, // 0.57%
			{5327.42744044283, "Exile_Item_Cheathas"}, // 0.57%
			{5384.61698292649, "Exile_Item_ChristmasTinner"}, // 0.57%
			{5439.59224405898, "B_AssaultPack_tna_F"}, // 0.55%
			{5494.56750519147, "B_AssaultPack_mcamo"}, // 0.55%
			{5549.54276632396, "B_AssaultPack_cbr"}, // 0.55%
			{5604.51802745645, "B_AssaultPack_blk"}, // 0.55%
			{5659.49328858894, "B_AssaultPack_sgg"}, // 0.55%
			{5714.46854972143, "B_AssaultPack_rgr"}, // 0.55%
			{5769.44381085392, "B_AssaultPack_dgtl"}, // 0.55%
			{5824.41907198641, "B_AssaultPack_khk"}, // 0.55%
			{5879.07508073137, "6Rnd_45ACP_Cylinder"}, // 0.55%
			{5931.59608913474, "V_Press_F"}, // 0.53%
			{5984.1170975381, "V_TacVest_blk_POLICE"}, // 0.53%
			{6034.53726560532, "H_Hat_blue"}, // 0.50%
			{6084.95743367255, "H_Hat_checker"}, // 0.50%
			{6135.37760173978, "H_Cap_red"}, // 0.50%
			{6185.797769807, "H_Cap_press"}, // 0.50%
			{6236.21793787423, "H_Cap_tan"}, // 0.50%
			{6286.63810594146, "H_Hat_brown"}, // 0.50%
			{6337.05827400868, "H_Hat_tan"}, // 0.50%
			{6387.47844207591, "H_Hat_grey"}, // 0.50%
			{6437.89861014314, "H_StrawHat"}, // 0.50%
			{6488.31877821037, "H_StrawHat_dark"}, // 0.50%
			{6537.75031553118, "Binocular"}, // 0.49%
			{6586.76992337431, "Exile_Item_GloriousKnakworst"}, // 0.49%
			{6635.78953121745, "Exile_Item_Beer"}, // 0.49%
			{6682.99942641148, "CUP_acc_CZ_M3X"}, // 0.47%
			{6730.20932160552, "CUP_acc_Glock17_Flashlight"}, // 0.47%
			{6777.41921679955, "CUP_muzzle_snds_MicroUzi"}, // 0.47%
			{6823.1278768326, "hgun_Pistol_heavy_02_F"}, // 0.46%
			{6868.83653686565, "hgun_P07_khk_F"}, // 0.46%
			{6914.5451968987, "CUP_hgun_SA61"}, // 0.46%
			{6960.25385693175, "hgun_Pistol_01_F"}, // 0.46%
			{7005.9625169648, "Exile_Weapon_TaurusGold"}, // 0.46%
			{7051.67117699786, "Exile_Weapon_Taurus"}, // 0.46%
			{7097.37983703091, "hgun_Pistol_Signal_F"}, // 0.46%
			{7143.08849706396, "Exile_Weapon_Colt1911"}, // 0.46%
			{7188.79715709701, "Exile_Weapon_Makarov"}, // 0.46%
			{7234.50581713006, "hgun_Pistol_heavy_01_F"}, // 0.46%
			{7278.73403473289, "U_C_Poor_1"}, // 0.44%
			{7322.96225233572, "U_C_Poor_2"}, // 0.44%
			{7367.19046993855, "U_C_Poor_shorts_1"}, // 0.44%
			{7411.41868754138, "U_C_HunterBody_grn"}, // 0.44%
			{7455.64690514421, "U_C_Journalist"}, // 0.44%
			{7499.87512274704, "U_C_Scientist"}, // 0.44%
			{7544.10334034987, "U_Rangemaster"}, // 0.44%
			{7586.5922460245, "CUP_muzzle_snds_M9"}, // 0.42%
			{7628.78485528578, "CUP_hgun_Duty_M3X"}, // 0.42%
			{7670.80166200847, "H_Cap_oli"}, // 0.42%
			{7712.81846873116, "H_Cap_grn"}, // 0.42%
			{7754.83527545385, "H_Cap_blu"}, // 0.42%
			{7796.85208217653, "H_Cap_blk_Raven"}, // 0.42%
			{7838.86888889922, "H_Cap_blk"}, // 0.42%
			{7880.88569562191, "H_Beret_blk_POLICE"}, // 0.42%
			{7922.9025023446, "H_Cap_headphones"}, // 0.42%
			{7964.91930906729, "H_Bandanna_surfer"}, // 0.42%
			{8006.93611578998, "Exile_Item_ZipTie"}, // 0.42%
			{8048.95292251267, "Exile_Magazine_8Rnd_74Slug"}, // 0.42%
			{8090.96972923535, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.42%
			{8132.98653595804, "Exile_Item_PlasticBottleFreshWater"}, // 0.42%
			{8175.00334268073, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.42%
			{8215.99534923945, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.41%
			{8256.84502244207, "Exile_Item_CanOpener"}, // 0.41%
			{8297.69469564468, "Exile_Item_Matches"}, // 0.41%
			{8336.96273931075, "B_Kitbag_mcamo"}, // 0.39%
			{8376.23078297681, "B_Kitbag_sgg"}, // 0.39%
			{8415.49882664288, "B_Kitbag_cbr"}, // 0.39%
			{8450.65933436061, "CUP_hgun_PB6P9_snds"}, // 0.35%
			{8485.05905916281, "U_C_Poloshirt_stripped"}, // 0.34%
			{8519.45878396501, "U_C_Poloshirt_tricolour"}, // 0.34%
			{8553.85850876721, "U_C_Poloshirt_salmon"}, // 0.34%
			{8588.25823356942, "U_C_Poloshirt_blue"}, // 0.34%
			{8622.65795837162, "U_C_Poloshirt_burgundy"}, // 0.34%
			{8656.81796383722, "16Rnd_9x21_Mag"}, // 0.34%
			{8689.86489047304, "optic_Yorris"}, // 0.33%
			{8722.91181710887, "optic_MRD"}, // 0.33%
			{8752.10244072673, "hgun_PDW2000_F"}, // 0.29%
			{8781.2930643446, "SMG_05_F"}, // 0.29%
			{8809.42147051879, "CUP_hgun_MicroUzi"}, // 0.28%
			{8834.13723917919, "ItemGPS"}, // 0.25%
			{8858.70847118076, "U_C_Man_casual_6_F"}, // 0.25%
			{8883.27970318234, "U_C_Man_casual_5_F"}, // 0.25%
			{8907.85093518391, "U_C_Man_casual_4_F"}, // 0.25%
			{8932.42216718548, "U_C_Man_casual_3_F"}, // 0.25%
			{8956.99339918705, "U_C_Man_casual_2_F"}, // 0.25%
			{8981.56463118862, "U_C_Man_casual_1_F"}, // 0.25%
			{9006.13586319019, "U_I_C_Soldier_Bandit_5_F"}, // 0.25%
			{9030.70709519177, "U_C_man_sport_2_F"}, // 0.25%
			{9055.27832719334, "U_C_man_sport_3_F"}, // 0.25%
			{9079.84955919491, "U_I_C_Soldier_Bandit_1_F"}, // 0.25%
			{9104.42079119648, "U_I_C_Soldier_Bandit_2_F"}, // 0.25%
			{9128.99202319805, "U_C_man_sport_1_F"}, // 0.25%
			{9153.56325519963, "U_I_C_Soldier_Bandit_3_F"}, // 0.25%
			{9178.1344872012, "U_I_C_Soldier_Bandit_4_F"}, // 0.25%
			{9202.64429112277, "Exile_Item_CookingPot"}, // 0.25%
			{9227.15409504433, "Exile_Item_EMRE"}, // 0.25%
			{9251.6638989659, "Exile_Item_PowerDrink"}, // 0.25%
			{9275.57590279182, "6Rnd_GreenSignal_F"}, // 0.24%
			{9299.48790661774, "6Rnd_RedSignal_F"}, // 0.24%
			{9321.60201541916, "SMG_01_F"}, // 0.22%
			{9343.71612422057, "CUP_smg_MP5A5"}, // 0.22%
			{9362.39026054177, "optic_Aco"}, // 0.19%
			{9381.06439686296, "optic_Holosight_smg_blk_F"}, // 0.19%
			{9399.73853318416, "optic_ACO_grn"}, // 0.19%
			{9418.41266950535, "optic_Aco_smg"}, // 0.19%
			{9437.08680582655, "optic_Holosight_smg"}, // 0.19%
			{9455.76094214774, "optic_ACO_grn_smg"}, // 0.19%
			{9473.45222918888, "CUP_smg_bizon"}, // 0.18%
			{9491.14351623001, "SMG_02_F"}, // 0.18%
			{9508.65051903113, "Exile_Item_PlasticBottleCoffee"}, // 0.18%
			{9522.65612127203, "CUP_optic_ACOG"}, // 0.14%
			{9536.66172351292, "CUP_30Rnd_9x19_EVO"}, // 0.14%
			{9550.66732575382, "CUP_30Rnd_9x19_MP5"}, // 0.14%
			{9564.67292799472, "CUP_64Rnd_9x19_Bizon_M"}, // 0.14%
			{9578.67853023561, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.14%
			{9592.68413247651, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.14%
			{9606.68973471741, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.14%
			{9620.69533695831, "30Rnd_9x21_Mag_SMG_02"}, // 0.14%
			{9634.7009391992, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.14%
			{9648.7065414401, "30Rnd_45ACP_Mag_SMG_01"}, // 0.14%
			{9661.09044236889, "CUP_smg_MP5SD6"}, // 0.12%
			{9673.4483266991, "Exile_Item_MobilePhone"}, // 0.12%
			{9682.29397021966, "CUP_smg_EVO"}, // 0.09%
			{9691.13961374023, "CUP_smg_bizon_snds"}, // 0.09%
			{9696.05386014054, "U_NikosBody"}, // 0.05%
			{9700.96810654086, "U_NikosAgedBody"}, // 0.05%
			{9705.88235294117, "U_OrestesBody"}, // 0.05%
			{9709.51144373296, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9713.14053452474, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9716.76962531653, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9720.39871610832, "30Rnd_556x45_Stanag"}, // 0.04%
			{9723.69107782912, "acc_flashlight"}, // 0.03%
			{9726.35241107643, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9728.70409801987, "muzzle_snds_m_snd_F"}, // 0.02%
			{9731.0557849633, "optic_DMS_ghex_F"}, // 0.02%
			{9733.40747190673, "optic_DMS"}, // 0.02%
			{9735.75915885017, "optic_MRCO"}, // 0.02%
			{9738.1108457936, "acc_pointer_IR"}, // 0.02%
			{9740.46253273703, "optic_Holosight_khk_F"}, // 0.02%
			{9742.81421968047, "optic_Holosight_blk_F"}, // 0.02%
			{9745.1659066239, "optic_Arco_ghex_F"}, // 0.02%
			{9747.51759356733, "muzzle_snds_65_TI_hex_F"}, // 0.02%
			{9749.86928051077, "optic_Arco_blk_F"}, // 0.02%
			{9752.2209674542, "optic_Holosight"}, // 0.02%
			{9754.57265439763, "muzzle_snds_M"}, // 0.02%
			{9756.92434134107, "muzzle_snds_H"}, // 0.02%
			{9759.2760282845, "muzzle_snds_H_MG_khk_F"}, // 0.02%
			{9761.62771522793, "muzzle_snds_H_khk_F"}, // 0.02%
			{9763.97940217137, "muzzle_snds_H_snd_F"}, // 0.02%
			{9766.3310891148, "optic_ERCO_blk_F"}, // 0.02%
			{9768.68277605823, "muzzle_snds_58_blk_F"}, // 0.02%
			{9771.03446300167, "muzzle_snds_58_wdm_F"}, // 0.02%
			{9773.3861499451, "muzzle_snds_65_TI_blk_F"}, // 0.02%
			{9775.73783688853, "muzzle_snds_H_MG_blk_F"}, // 0.02%
			{9778.08952383197, "muzzle_snds_m_khk_F"}, // 0.02%
			{9780.4412107754, "muzzle_snds_65_TI_ghex_F"}, // 0.02%
			{9782.79289771883, "optic_Arco"}, // 0.02%
			{9785.14458466227, "optic_ERCO_khk_F"}, // 0.02%
			{9787.4962716057, "optic_Hamr_khk_F"}, // 0.02%
			{9789.84795854914, "CUP_optic_RCO"}, // 0.02%
			{9792.19964549257, "CUP_optic_ACOG"}, // 0.02%
			{9794.551332436, "CUP_muzzle_snds_XM8"}, // 0.02%
			{9796.90301937944, "CUP_optic_SUSAT"}, // 0.02%
			{9799.25470632287, "CUP_optic_CompM4"}, // 0.02%
			{9801.6063932663, "optic_Hamr"}, // 0.02%
			{9803.95808020974, "CUP_optic_TrijiconRx01_desert"}, // 0.02%
			{9806.30976715317, "CUP_optic_AN_PVS_4"}, // 0.02%
			{9808.6614540966, "CUP_optic_HoloDesert"}, // 0.02%
			{9811.01314104004, "CUP_optic_HoloBlack"}, // 0.02%
			{9813.36482798347, "CUP_optic_SB_11_4x20_PM"}, // 0.02%
			{9815.7165149269, "CUP_muzzle_PBS4"}, // 0.02%
			{9818.06820187034, "CUP_muzzle_PB6P9"}, // 0.02%
			{9820.41988881377, "CUP_muzzle_Bizon"}, // 0.02%
			{9822.7715757572, "CUP_optic_Kobra"}, // 0.02%
			{9825.12326270064, "CUP_optic_PSO_3"}, // 0.02%
			{9827.47494964407, "CUP_optic_PSO_1"}, // 0.02%
			{9829.8266365875, "CUP_optic_CompM2_Black"}, // 0.02%
			{9832.17832353094, "CUP_optic_CompM2_Desert"}, // 0.02%
			{9834.53001047437, "CUP_optic_PechenegScope"}, // 0.02%
			{9836.8816974178, "optic_ERCO_snd_F"}, // 0.02%
			{9839.05915189287, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.02%
			{9841.23660636795, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.02%
			{9843.41406084302, "CUP_30Rnd_545x39_AK_M"}, // 0.02%
			{9845.59151531809, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.02%
			{9847.76896979316, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.02%
			{9849.94642426823, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.02%
			{9852.1238787433, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.02%
			{9854.30133321837, "CUP_30Rnd_556x45_G36"}, // 0.02%
			{9856.47878769345, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.02%
			{9858.65624216852, "CUP_30Rnd_556x45_Stanag"}, // 0.02%
			{9860.83369664359, "20Rnd_762x51_Mag"}, // 0.02%
			{9863.01115111866, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.02%
			{9865.18860559373, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.02%
			{9867.3660600688, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.02%
			{9869.54351454388, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.02%
			{9871.72096901895, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.02%
			{9873.89842349402, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.02%
			{9876.07587796909, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.02%
			{9878.25333244416, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.02%
			{9880.43078691923, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.02%
			{9882.6082413943, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.02%
			{9884.78569586938, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.02%
			{9886.96315034445, "Exile_Magazine_5Rnd_22LR"}, // 0.02%
			{9889.14060481952, "Exile_Magazine_10Rnd_762x54"}, // 0.02%
			{9891.31805929459, "Exile_Magazine_10Rnd_9x39"}, // 0.02%
			{9893.49551376966, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.02%
			{9895.67296824473, "Exile_Magazine_20Rnd_9x39"}, // 0.02%
			{9897.8504227198, "30Rnd_762x39_Mag_Green_F"}, // 0.02%
			{9900.02787719488, "30Rnd_762x39_Mag_Tracer_F"}, // 0.02%
			{9902.20533166995, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.02%
			{9904.38278614502, "30Rnd_762x39_AK47_M"}, // 0.02%
			{9906.56024062009, "30Rnd_545x39_Mag_F"}, // 0.02%
			{9908.73769509516, "30Rnd_545x39_Mag_Green_F"}, // 0.02%
			{9910.91514957023, "30Rnd_545x39_Mag_Tracer_F"}, // 0.02%
			{9913.09260404531, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.02%
			{9915.27005852038, "30Rnd_580x42_Mag_F"}, // 0.02%
			{9917.44751299545, "30Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9919.62496747052, "100Rnd_580x42_Mag_F"}, // 0.02%
			{9921.80242194559, "100Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9923.97987642066, "150Rnd_556x45_Drum_Mag_F"}, // 0.02%
			{9926.15733089573, "30Rnd_762x39_Mag_F"}, // 0.02%
			{9928.33478537081, "30Rnd_65x39_caseless_mag"}, // 0.02%
			{9930.27030045976, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9932.20581554871, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9934.14133063767, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9936.07684572662, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9938.01236081557, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9939.89371037032, "CUP_muzzle_snds_G36_black"}, // 0.02%
			{9941.77505992507, "CUP_muzzle_snds_L85"}, // 0.02%
			{9943.65640947981, "CUP_optic_Elcan"}, // 0.02%
			{9945.53775903456, "CUP_muzzle_snds_Mk12"}, // 0.02%
			{9947.23133473739, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9948.92491044023, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9950.61848614306, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9952.07012245978, "CUP_100Rnd_556x45_BetaCMag"}, // 0.01%
			{9953.27981939037, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9954.45566286209, "optic_NVS"}, // 0.01%
			{9955.63150633381, "CUP_acc_ANPEQ_2_desert"}, // 0.01%
			{9956.80734980552, "CUP_acc_ANPEQ_2_camo"}, // 0.01%
			{9957.98319327724, "CUP_acc_ANPEQ_2_grey"}, // 0.01%
			{9958.74713521765, "Exile_Weapon_AK107"}, // 0.01%
			{9959.51107715807, "Exile_Weapon_AK107_GL"}, // 0.01%
			{9960.27501909848, "Exile_Weapon_AK74_GL"}, // 0.01%
			{9961.03896103889, "Exile_Weapon_AK74"}, // 0.01%
			{9961.80290297931, "Exile_Weapon_AK47"}, // 0.01%
			{9962.56684491972, "Exile_Weapon_LeeEnfield"}, // 0.01%
			{9963.25439266609, "Exile_Weapon_CZ550"}, // 0.01%
			{9963.86554621842, "arifle_MXC_khk_F"}, // 0.01%
			{9964.47669977075, "CUP_arifle_AK74M"}, // 0.01%
			{9965.08785332308, "CUP_arifle_AK107_GL"}, // 0.01%
			{9965.69900687541, "CUP_arifle_AK107_kobra"}, // 0.01%
			{9966.31016042774, "arifle_MXC_F"}, // 0.01%
			{9966.92131398007, "CUP_arifle_AKM"}, // 0.01%
			{9967.5324675324, "arifle_TRG20_F"}, // 0.01%
			{9968.14362108474, "arifle_TRG21_F"}, // 0.01%
			{9968.75477463707, "arifle_MX_khk_F"}, // 0.01%
			{9969.3659281894, "arifle_MX_F"}, // 0.01%
			{9969.90068754768, "arifle_Mk20_F"}, // 0.01%
			{9970.43544690597, "CUP_srifle_Mk12SPR"}, // 0.01%
			{9970.97020626426, "CUP_arifle_M4A1_camo"}, // 0.01%
			{9971.50496562255, "CUP_arifle_AK47"}, // 0.01%
			{9972.03972498084, "CUP_arifle_M4A1"}, // 0.01%
			{9972.57448433913, "CUP_arifle_M16A2"}, // 0.01%
			{9973.10924369741, "CUP_arifle_Sa58P_des"}, // 0.01%
			{9973.6440030557, "arifle_Mk20C_F"}, // 0.01%
			{9974.17876241399, "CUP_arifle_AK107"}, // 0.01%
			{9974.63712757824, "Exile_Weapon_SVDCamo"}, // 0.00%
			{9975.09549274249, "arifle_Katiba_F"}, // 0.00%
			{9975.55385790673, "CUP_arifle_AK74"}, // 0.00%
			{9976.01222307098, "arifle_Katiba_GL_F"}, // 0.00%
			{9976.47058823523, "Exile_Weapon_SVD"}, // 0.00%
			{9976.92895339948, "CUP_arifle_M4A3_desert"}, // 0.00%
			{9977.38731856373, "CUP_arifle_XM8_Railed"}, // 0.00%
			{9977.84568372797, "CUP_arifle_CZ805_A1"}, // 0.00%
			{9978.30404889222, "CUP_arifle_CZ805_B"}, // 0.00%
			{9978.76241405647, "Exile_Weapon_VSSVintorez"}, // 0.00%
			{9979.22077922072, "CUP_arifle_Sa58P"}, // 0.00%
			{9979.67914438497, "arifle_MXM_F"}, // 0.00%
			{9980.06111535517, "arifle_SPAR_01_GL_blk_F"}, // 0.00%
			{9980.44308632538, "arifle_SPAR_02_blk_F"}, // 0.00%
			{9980.82505729558, "arifle_SPAR_01_GL_snd_F"}, // 0.00%
			{9981.20702826579, "arifle_SPAR_01_GL_khk_F"}, // 0.00%
			{9981.58899923599, "CUP_arifle_AKS74U"}, // 0.00%
			{9981.9709702062, "arifle_SPAR_01_snd_F"}, // 0.00%
			{9982.3529411764, "arifle_SPAR_01_khk_F"}, // 0.00%
			{9982.73491214661, "arifle_SPAR_01_blk_F"}, // 0.00%
			{9983.11688311682, "arifle_CTARS_hex_F"}, // 0.00%
			{9983.49885408702, "arifle_CTARS_ghex_F"}, // 0.00%
			{9983.88082505723, "arifle_CTARS_blk_F"}, // 0.00%
			{9984.26279602743, "arifle_CTAR_GL_blk_F"}, // 0.00%
			{9984.64476699764, "arifle_CTAR_ghex_F"}, // 0.00%
			{9985.02673796784, "arifle_CTAR_hex_F"}, // 0.00%
			{9985.40870893805, "arifle_CTAR_blk_F"}, // 0.00%
			{9985.79067990826, "arifle_ARX_hex_F"}, // 0.00%
			{9986.17265087846, "arifle_ARX_ghex_F"}, // 0.00%
			{9986.55462184867, "arifle_ARX_blk_F"}, // 0.00%
			{9986.93659281887, "arifle_AKS_F"}, // 0.00%
			{9987.31856378908, "arifle_AKM_FL_F"}, // 0.00%
			{9987.70053475928, "arifle_AKM_F"}, // 0.00%
			{9988.08250572949, "arifle_AK12_GL_F"}, // 0.00%
			{9988.4644766997, "arifle_AK12_F"}, // 0.00%
			{9988.8464476699, "arifle_SPAR_02_khk_F"}, // 0.00%
			{9989.22841864011, "arifle_SPAR_02_snd_F"}, // 0.00%
			{9989.61038961031, "CUP_arifle_L86A2"}, // 0.00%
			{9989.99236058052, "arifle_SPAR_03_khk_F"}, // 0.00%
			{9990.37433155072, "CUP_arifle_Mk16_CQC"}, // 0.00%
			{9990.75630252093, "CUP_arifle_Mk16_STD_EGLM"}, // 0.00%
			{9991.13827349113, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.00%
			{9991.52024446134, "arifle_SPAR_03_blk_F"}, // 0.00%
			{9991.90221543155, "CUP_arifle_AK74_GL"}, // 0.00%
			{9992.28418640175, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.00%
			{9992.66615737196, "CUP_arifle_Mk16_SV"}, // 0.00%
			{9993.04812834216, "CUP_arifle_CZ805_GL"}, // 0.00%
			{9993.43009931237, "CUP_arifle_G36C"}, // 0.00%
			{9993.81207028257, "CUP_arifle_G36A"}, // 0.00%
			{9994.19404125278, "CUP_arifle_L85A2_GL"}, // 0.00%
			{9994.57601222299, "CUP_arifle_L85A2_NG"}, // 0.00%
			{9994.95798319319, "arifle_SPAR_03_snd_F"}, // 0.00%
			{9995.26355996936, "CUP_arifle_Sa58RIS2_gl"}, // 0.00%
			{9995.56913674552, "CUP_arifle_Sa58RIS1"}, // 0.00%
			{9995.87471352169, "arifle_Mk20_GL_F"}, // 0.00%
			{9996.18029029785, "arifle_MX_GL_F"}, // 0.00%
			{9996.48586707402, "CUP_arifle_Mk16_CQC_FG"}, // 0.00%
			{9996.79144385018, "CUP_arifle_Sa58RIS2_camo"}, // 0.00%
			{9997.09702062635, "arifle_TRG21_GL_F"}, // 0.00%
			{9997.40259740251, "arifle_MX_GL_khk_F"}, // 0.00%
			{9997.63177998464, "arifle_MX_GL_Black_F"}, // 0.00%
			{9997.86096256676, "arifle_MXM_Black_F"}, // 0.00%
			{9998.09014514888, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.00%
			{9998.31932773101, "arifle_MX_Black_F"}, // 0.00%
			{9998.54851031313, "arifle_MXC_Black_F"}, // 0.00%
			{9998.77769289525, "arifle_MXM_khk_F"}, // 0.00%
			{9999.00687547737, "Exile_Weapon_DMR"}, // 0.00%
			{9999.15966386546, "CUP_arifle_AK107_GL_pso"}, // 0.00%
			{9999.31245225354, "arifle_SDAR_F"}, // 0.00%
			{9999.46524064162, "CUP_arifle_G36C_camo_holo_snds"}, // 0.00%
			{9999.61802902971, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.00%
			{9999.77081741779, "CUP_arifle_AK107_GL_kobra"}, // 0.00%
			{9999.84721161183, "CUP_arifle_AKS_Gold"}, // 0.00%
			{9999.92360580587, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.00%
			{9999.99999999991, "Exile_Weapon_AKS_Gold"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_ChocolateMilk
	  Chemlight_red
	  Exile_Item_Can_Empty
	  CUP_hgun_PB6P9_snds
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_EMRE
	  CUP_hgun_PB6P9_snds
	  FlareYellow_F
	  Exile_Item_Beer
	  ItemWatch
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Dogfood
	  B_Kitbag_cbr
	  CUP_smg_bizon
	  Exile_Item_DsNuts
	  B_Kitbag_mcamo
	  FlareYellow_F
	  V_Press_F
	  Exile_Item_MountainDupe
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_ToiletPaper
	  Exile_Item_SeedAstics
	  Exile_Item_MacasCheese
	  Exile_Item_ChristmasTinner
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_InstantCoffee
	  Exile_Item_EnergyDrink
	  16Rnd_9x21_Mag
	  B_OutdoorPack_blu
	  Exile_Item_ChocolateMilk
	  Exile_Item_PlasticBottleEmpty
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  ItemRadio
	  FlareYellow_F
	  Exile_Item_MetalScrews
	  V_TacVest_blk_POLICE
	  Exile_Item_PlasticBottleDirtyWater
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Beer
	  CUP_hgun_MicroUzi
	  SmokeShellPurple
	  Exile_Item_Heatpack
	  Exile_Item_Magazine02
	  SmokeShellOrange
	  Exile_Item_Noodles
	  Exile_Item_Beer
	  Exile_Item_BBQSandwich
	  Exile_Item_Raisins
	  ItemWatch
	  B_OutdoorPack_blu
	  Chemlight_red
	  Exile_Item_Surstromming
	  Exile_Item_BBQSandwich
	  B_Kitbag_mcamo
	  Exile_Item_Dogfood
	  FlareYellow_F
	  Exile_Item_Magazine02
	  Exile_Item_Moobar
	  Exile_Item_PlasticBottleEmpty
	  SMG_02_F
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleFreshWater
	  hgun_Pistol_01_F
	  hgun_Pistol_heavy_01_F
	  Exile_Item_PlasticBottleFreshWater
	  ItemWatch
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  11Rnd_45ACP_Mag
	  Exile_Item_Cheathas
	  Exile_Item_CockONut
	  Exile_Item_ZipTie
	  Exile_Item_ChocolateMilk
	  hgun_P07_F
	  ItemMap
	  ItemRadio
	  V_Press_F
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_InstantCoffee
	  CUP_20Rnd_B_765x17_Ball_M
	  B_AssaultPack_sgg
	  V_Press_F
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_BeefParts
	  Exile_Item_PlasticBottleEmpty
	  9Rnd_45ACP_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	*/
	class Shop
	{
		count = 222;
		half = 9164.92198955345;
		halfIndex = 111;
		sum = 10000;
		items[] = 
		{
			{409.83606557377, "Exile_Item_Can_Empty"}, // 4.10%
			{819.672131147541, "Exile_Item_ToiletPaper"}, // 4.10%
			{1229.50819672131, "Exile_Item_PlasticBottleEmpty"}, // 4.10%
			{1571.03825136612, "Exile_Item_PlasticBottleDirtyWater"}, // 3.42%
			{1844.26229508197, "Exile_Item_MountainDupe"}, // 2.73%
			{2117.48633879781, "Exile_Item_ChocolateMilk"}, // 2.73%
			{2349.72677595628, "Exile_Item_EnergyDrink"}, // 2.32%
			{2540.98360655738, "Exile_Item_Beer"}, // 1.91%
			{2704.91803278689, "Exile_Item_ZipTie"}, // 1.64%
			{2868.85245901639, "Exile_Item_PlasticBottleFreshWater"}, // 1.64%
			{2994.08014571949, "Exile_Item_InstantCoffee"}, // 1.25%
			{3103.36976320583, "Exile_Weapon_M1014"}, // 1.09%
			{3212.65938069217, "CUP_sgun_Saiga12K"}, // 1.09%
			{3315.11839708561, "Exile_Item_Magazine03"}, // 1.02%
			{3417.57741347905, "Exile_Item_Magazine01"}, // 1.02%
			{3520.0364298725, "Exile_Item_Magazine02"}, // 1.02%
			{3622.49544626594, "Exile_Item_Moobar"}, // 1.02%
			{3724.95446265938, "Exile_Item_Raisins"}, // 1.02%
			{3827.41347905282, "Exile_Item_Magazine04"}, // 1.02%
			{3923.04189435337, "Exile_Item_PowerDrink"}, // 0.96%
			{4014.11657559199, "Exile_Item_CockONut"}, // 0.91%
			{4105.1912568306, "Exile_Item_SeedAstics"}, // 0.91%
			{4195.19447123112, "Exile_Item_Heatpack"}, // 0.90%
			{4274.8848173149, "Exile_Item_Surstromming"}, // 0.80%
			{4354.57516339869, "Exile_Item_SausageGravy"}, // 0.80%
			{4434.26550948248, "Exile_Item_ChristmasTinner"}, // 0.80%
			{4513.95585556627, "Exile_Item_MacasCheese"}, // 0.80%
			{4593.64620165006, "Exile_Item_BeefParts"}, // 0.80%
			{4673.33654773385, "Exile_Item_CatFood"}, // 0.80%
			{4753.02689381764, "Exile_Item_Noodles"}, // 0.80%
			{4832.71723990142, "Exile_Item_DsNuts"}, // 0.80%
			{4912.40758598521, "Exile_Item_Cheathas"}, // 0.80%
			{4992.097932069, "Exile_Item_BBQSandwich"}, // 0.80%
			{5071.78827815279, "Exile_Item_Dogfood"}, // 0.80%
			{5150.54109075324, "ItemMap"}, // 0.79%
			{5227.1459628231, "B_OutdoorPack_blk"}, // 0.77%
			{5299.16736346787, "hgun_P07_F"}, // 0.72%
			{5368.11174833074, "B_OutdoorPack_tan"}, // 0.69%
			{5437.05613319362, "B_OutdoorPack_blu"}, // 0.69%
			{5505.64794333149, "hgun_ACPC2_F"}, // 0.69%
			{5574.23975346936, "hgun_Rook40_F"}, // 0.69%
			{5642.54576439832, "Exile_Item_GloriousKnakworst"}, // 0.68%
			{5710.85177532728, "Exile_Item_PlasticBottleCoffee"}, // 0.68%
			{5779.15778625624, "FlareRed_F"}, // 0.68%
			{5847.46379718521, "FlareYellow_F"}, // 0.68%
			{5915.76980811417, "FlareWhite_F"}, // 0.68%
			{5984.07581904313, "Chemlight_red"}, // 0.68%
			{6052.38182997209, "Chemlight_blue"}, // 0.68%
			{6120.68784090105, "Chemlight_yellow"}, // 0.68%
			{6188.99385183001, "Chemlight_green"}, // 0.68%
			{6257.29986275898, "FlareGreen_F"}, // 0.68%
			{6324.80227355936, "ItemWatch"}, // 0.68%
			{6392.30468435975, "ItemRadio"}, // 0.68%
			{6458.94469502215, "9Rnd_45ACP_Mag"}, // 0.67%
			{6525.58470568455, "10Rnd_9x21_Mag"}, // 0.67%
			{6592.22471634695, "Exile_Magazine_6Rnd_45ACP"}, // 0.67%
			{6658.86472700935, "Exile_Magazine_8Rnd_9x18"}, // 0.67%
			{6725.50473767175, "Exile_Magazine_7Rnd_45ACP"}, // 0.67%
			{6792.14474833416, "11Rnd_45ACP_Mag"}, // 0.67%
			{6858.78475899656, "30Rnd_9x21_Mag"}, // 0.67%
			{6920.51738812064, "CUP_hgun_Phantom"}, // 0.62%
			{6981.80128577653, "B_HuntingBackpack"}, // 0.61%
			{7041.77729537269, "CUP_18Rnd_9x19_Phantom"}, // 0.60%
			{7101.75330496885, "CUP_30Rnd_9x19_UZI"}, // 0.60%
			{7161.72931456502, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.60%
			{7218.65099033915, "Exile_Item_Matches"}, // 0.57%
			{7275.57266611329, "Exile_Item_CanOpener"}, // 0.57%
			{7332.10177860622, "Exile_Item_Vishpirin"}, // 0.57%
			{7388.63089109915, "Exile_Item_Heatpack"}, // 0.57%
			{7442.25430154806, "B_AssaultPack_khk"}, // 0.54%
			{7495.87771199696, "B_AssaultPack_rgr"}, // 0.54%
			{7549.50112244587, "B_AssaultPack_sgg"}, // 0.54%
			{7603.12453289477, "B_AssaultPack_blk"}, // 0.54%
			{7656.74794334368, "B_AssaultPack_cbr"}, // 0.54%
			{7710.37135379258, "B_AssaultPack_dgtl"}, // 0.54%
			{7763.99476424149, "B_AssaultPack_tna_F"}, // 0.54%
			{7817.61817469039, "B_AssaultPack_mcamo"}, // 0.54%
			{7870.93018322031, "6Rnd_45ACP_Cylinder"}, // 0.53%
			{7918.38488554991, "SMG_05_F"}, // 0.47%
			{7965.8395878795, "hgun_PDW2000_F"}, // 0.47%
			{8010.84119507976, "Binocular"}, // 0.45%
			{8055.42587166937, "hgun_Pistol_01_F"}, // 0.45%
			{8100.01054825899, "hgun_P07_khk_F"}, // 0.45%
			{8144.5952248486, "hgun_Pistol_Signal_F"}, // 0.45%
			{8189.17990143822, "CUP_hgun_SA61"}, // 0.45%
			{8233.76457802783, "Exile_Weapon_TaurusGold"}, // 0.45%
			{8278.34925461745, "Exile_Weapon_Taurus"}, // 0.45%
			{8322.93393120706, "Exile_Weapon_Makarov"}, // 0.45%
			{8367.51860779668, "Exile_Weapon_Colt1911"}, // 0.45%
			{8412.10328438629, "hgun_Pistol_heavy_01_F"}, // 0.45%
			{8456.68796097591, "hgun_Pistol_heavy_02_F"}, // 0.45%
			{8497.84304705863, "CUP_hgun_Duty_M3X"}, // 0.41%
			{8537.82705345607, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.40%
			{8576.129489491, "B_Kitbag_sgg"}, // 0.38%
			{8614.43192552593, "B_Kitbag_cbr"}, // 0.38%
			{8652.73436156087, "B_Kitbag_mcamo"}, // 0.38%
			{8688.68489362874, "SMG_01_F"}, // 0.36%
			{8724.63542569662, "CUP_smg_MP5A5"}, // 0.36%
			{8758.93133076555, "CUP_hgun_PB6P9_snds"}, // 0.34%
			{8793.08433623003, "Exile_Item_CookingPot"}, // 0.34%
			{8827.23734169451, "Exile_Item_EMRE"}, // 0.34%
			{8860.55734702571, "16Rnd_9x21_Mag"}, // 0.33%
			{8891.78295202181, "SmokeShellOrange"}, // 0.31%
			{8923.00855701791, "SmokeShell"}, // 0.31%
			{8954.234162014, "SmokeShellRed"}, // 0.31%
			{8985.4597670101, "SmokeShellGreen"}, // 0.31%
			{9016.68537200619, "SmokeShellYellow"}, // 0.31%
			{9047.91097700229, "SmokeShellPurple"}, // 0.31%
			{9079.13658199839, "SmokeShellBlue"}, // 0.31%
			{9107.89700765269, "SMG_02_F"}, // 0.29%
			{9136.65743330699, "CUP_smg_bizon"}, // 0.29%
			{9164.92198955345, "Exile_Item_Bandage"}, // 0.28%
			{9192.3587136086, "CUP_hgun_MicroUzi"}, // 0.27%
			{9219.68111798019, "V_Rangemaster_belt"}, // 0.27%
			{9243.00512171203, "6Rnd_GreenSignal_F"}, // 0.23%
			{9266.32912544387, "6Rnd_RedSignal_F"}, // 0.23%
			{9288.94077044104, "Exile_Item_InstaDoc"}, // 0.23%
			{9311.44157404117, "ItemGPS"}, // 0.23%
			{9331.57387199918, "CUP_smg_MP5SD6"}, // 0.20%
			{9349.7888082469, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.18%
			{9368.00374449463, "Exile_Magazine_8Rnd_74Slug"}, // 0.18%
			{9386.21868074235, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.18%
			{9400.5988935695, "CUP_smg_bizon_snds"}, // 0.14%
			{9414.97910639665, "CUP_smg_EVO"}, // 0.14%
			{9428.99981390312, "Exile_Item_ScrewDriver"}, // 0.14%
			{9443.02052140959, "Exile_Item_Handsaw"}, // 0.14%
			{9457.04122891606, "Exile_Item_Pliers"}, // 0.14%
			{9470.70243110186, "V_TacVest_blk_POLICE"}, // 0.14%
			{9484.36363328765, "V_Press_F"}, // 0.14%
			{9496.22730887005, "Exile_Item_JunkMetal"}, // 0.12%
			{9507.47771067011, "Exile_Item_MobilePhone"}, // 0.11%
			{9518.52946974176, "muzzle_snds_L"}, // 0.11%
			{9529.58122881341, "muzzle_snds_acp"}, // 0.11%
			{9540.36638843378, "Exile_Item_MetalScrews"}, // 0.11%
			{9551.15154805414, "Exile_Item_WaterCanisterEmpty"}, // 0.11%
			{9561.9367076745, "Exile_Melee_Axe"}, // 0.11%
			{9571.77277324827, "H_Hat_blue"}, // 0.10%
			{9581.60883882204, "H_Cap_press"}, // 0.10%
			{9591.44490439581, "H_Cap_red"}, // 0.10%
			{9601.28096996958, "H_Hat_brown"}, // 0.10%
			{9611.11703554335, "H_Cap_tan"}, // 0.10%
			{9620.95310111712, "H_Hat_grey"}, // 0.10%
			{9630.78916669089, "H_Hat_tan"}, // 0.10%
			{9640.62523226467, "H_StrawHat"}, // 0.10%
			{9650.46129783844, "H_StrawHat_dark"}, // 0.10%
			{9660.29736341221, "H_Hat_checker"}, // 0.10%
			{9670.00400707053, "Exile_Item_LightBulb"}, // 0.10%
			{9678.63213476682, "Exile_Item_ExtensionCord"}, // 0.09%
			{9686.8288560783, "H_Cap_grn"}, // 0.08%
			{9695.02557738977, "H_Cap_oli"}, // 0.08%
			{9703.22229870125, "H_Cap_headphones"}, // 0.08%
			{9711.41902001272, "H_Cap_blu"}, // 0.08%
			{9719.6157413242, "H_Cap_blk_Raven"}, // 0.08%
			{9727.81246263567, "H_Beret_blk_POLICE"}, // 0.08%
			{9736.00918394715, "H_Bandanna_surfer"}, // 0.08%
			{9744.20590525862, "H_Cap_blk"}, // 0.08%
			{9752.30143247983, "optic_Holosight_smg_blk_F"}, // 0.08%
			{9760.39695970104, "optic_Aco"}, // 0.08%
			{9768.49248692225, "optic_ACO_grn"}, // 0.08%
			{9776.58801414346, "optic_Aco_smg"}, // 0.08%
			{9784.68354136467, "optic_ACO_grn_smg"}, // 0.08%
			{9792.77906858588, "optic_Holosight_smg"}, // 0.08%
			{9799.2501643581, "Exile_Item_CamoTentKit"}, // 0.06%
			{9805.72126013032, "Exile_Item_Foolbox"}, // 0.06%
			{9811.86112628124, "CUP_acc_CZ_M3X"}, // 0.06%
			{9818.00099243215, "CUP_acc_Glock17_Flashlight"}, // 0.06%
			{9824.14085858307, "CUP_muzzle_snds_MicroUzi"}, // 0.06%
			{9830.21250399898, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.06%
			{9836.28414941489, "30Rnd_9x21_Mag_SMG_02"}, // 0.06%
			{9842.3557948308, "CUP_30Rnd_9x19_MP5"}, // 0.06%
			{9848.42744024671, "CUP_30Rnd_9x19_EVO"}, // 0.06%
			{9854.49908566261, "CUP_optic_ACOG"}, // 0.06%
			{9860.57073107852, "CUP_64Rnd_9x19_Bizon_M"}, // 0.06%
			{9866.64237649443, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.06%
			{9872.71402191034, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.06%
			{9878.78566732625, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.06%
			{9884.85731274216, "30Rnd_45ACP_Mag_SMG_01"}, // 0.06%
			{9890.38319227798, "CUP_muzzle_snds_M9"}, // 0.06%
			{9895.77577208816, "Exile_Item_Grinder"}, // 0.05%
			{9901.16835189834, "Exile_Melee_SledgeHammer"}, // 0.05%
			{9905.48241574649, "Exile_Item_MetalBoard"}, // 0.04%
			{9909.79647959463, "Exile_Item_Sand"}, // 0.04%
			{9914.11054344278, "Exile_Item_Rope"}, // 0.04%
			{9918.40844974842, "optic_MRD"}, // 0.04%
			{9922.70635605406, "optic_Yorris"}, // 0.04%
			{9925.94190394017, "Exile_Item_FloodLightKit"}, // 0.03%
			{9929.17745182628, "Exile_Item_PortableGeneratorKit"}, // 0.03%
			{9932.41299971239, "Exile_Item_FireExtinguisher"}, // 0.03%
			{9935.6485475985, "Exile_Item_CordlessScrewdriver"}, // 0.03%
			{9938.88409548461, "Exile_Item_Cement"}, // 0.03%
			{9941.76013805003, "U_C_Journalist"}, // 0.03%
			{9944.63618061546, "U_C_Poor_2"}, // 0.03%
			{9947.51222318089, "U_C_Poor_shorts_1"}, // 0.03%
			{9950.38826574632, "U_C_HunterBody_grn"}, // 0.03%
			{9953.26430831175, "U_C_Scientist"}, // 0.03%
			{9956.14035087718, "U_Rangemaster"}, // 0.03%
			{9959.01639344261, "U_C_Poor_1"}, // 0.03%
			{9961.25331543794, "U_C_Poloshirt_salmon"}, // 0.02%
			{9963.49023743328, "U_C_Poloshirt_tricolour"}, // 0.02%
			{9965.72715942861, "U_C_Poloshirt_stripped"}, // 0.02%
			{9967.96408142395, "U_C_Poloshirt_burgundy"}, // 0.02%
			{9970.20100341928, "U_C_Poloshirt_blue"}, // 0.02%
			{9972.35803534335, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9974.51506726743, "Exile_Item_Knife"}, // 0.02%
			{9976.6720991915, "Exile_Melee_Shovel"}, // 0.02%
			{9978.26990061674, "U_C_Man_casual_2_F"}, // 0.02%
			{9979.86770204198, "U_C_Man_casual_5_F"}, // 0.02%
			{9981.46550346722, "U_C_Man_casual_4_F"}, // 0.02%
			{9983.06330489246, "U_C_Man_casual_3_F"}, // 0.02%
			{9984.6611063177, "U_C_Man_casual_1_F"}, // 0.02%
			{9986.25890774294, "U_C_man_sport_3_F"}, // 0.02%
			{9987.85670916818, "U_C_man_sport_2_F"}, // 0.02%
			{9989.45451059342, "U_C_man_sport_1_F"}, // 0.02%
			{9991.05231201866, "U_I_C_Soldier_Bandit_5_F"}, // 0.02%
			{9992.6501134439, "U_I_C_Soldier_Bandit_4_F"}, // 0.02%
			{9994.24791486913, "U_I_C_Soldier_Bandit_3_F"}, // 0.02%
			{9995.84571629437, "U_I_C_Soldier_Bandit_2_F"}, // 0.02%
			{9997.44351771961, "U_I_C_Soldier_Bandit_1_F"}, // 0.02%
			{9999.04131914485, "U_C_Man_casual_6_F"}, // 0.02%
			{9999.3608794299, "U_NikosAgedBody"}, // 0.00%
			{9999.68043971495, "U_NikosBody"}, // 0.00%
			{10000, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Grinder
	  Exile_Item_FireExtinguisher
	  Exile_Item_ZipTie
	  Exile_Melee_SledgeHammer
	  Exile_Item_Grinder
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_ScrewDriver
	  Exile_Item_Foolbox
	  Exile_Item_Sand
	  FlareYellow_F
	  Exile_Item_Foolbox
	  Exile_Item_Handsaw
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  FlareRed_F
	  FlareGreen_F
	  FlareGreen_F
	  FlareRed_F
	  FlareWhite_F
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Melee_SledgeHammer
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_Handsaw
	  Exile_Item_Cement
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Sand
	  Exile_Item_MetalBoard
	  Exile_Item_ExtensionCord
	  Exile_Item_Laptop
	  Exile_Melee_SledgeHammer
	  FlareYellow_F
	  Exile_Item_ZipTie
	  FlareYellow_F
	  Exile_Item_Laptop
	  Exile_Item_JunkMetal
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  FlareYellow_F
	  Exile_Item_Foolbox
	  Exile_Item_ScrewDriver
	  Exile_Item_Handsaw
	  Exile_Item_Laptop
	  Exile_Item_Laptop
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalBoard
	  FlareWhite_F
	  Exile_Item_ZipTie
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_ZipTie
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  FlareYellow_F
	  FlareWhite_F
	  Exile_Item_ZipTie
	  Exile_Item_DuctTape
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Laptop
	  FlareRed_F
	  Exile_Item_BaseCameraKit
	  Exile_Item_LightBulb
	  Exile_Item_OilCanister
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_BaseCameraKit
	  Exile_Item_Can_Empty
	*/
	class Industrial
	{
		count = 73;
		half = 9424.20152946469;
		halfIndex = 36;
		sum = 10000;
		items[] = 
		{
			{641.025641025641, "Exile_Item_Can_Empty"}, // 6.41%
			{1282.05128205128, "Exile_Item_ToiletPaper"}, // 6.41%
			{1923.07692307692, "Exile_Item_PlasticBottleEmpty"}, // 6.41%
			{2435.89743589744, "Exile_Item_DuctTape"}, // 5.13%
			{2863.24786324786, "Exile_Item_ZipTie"}, // 4.27%
			{3290.59829059829, "Exile_Item_BaseCameraKit"}, // 4.27%
			{3717.94871794872, "Exile_Item_Laptop"}, // 4.27%
			{4038.46153846154, "FlareWhite_F"}, // 3.21%
			{4358.97435897436, "FlareRed_F"}, // 3.21%
			{4679.48717948718, "FlareGreen_F"}, // 3.21%
			{5000, "FlareYellow_F"}, // 3.21%
			{5292.39766081871, "Exile_Item_ScrewDriver"}, // 2.92%
			{5584.79532163743, "Exile_Item_Pliers"}, // 2.92%
			{5877.19298245614, "Exile_Item_Handsaw"}, // 2.92%
			{6133.6032388664, "Exile_Item_FuelCanisterEmpty"}, // 2.56%
			{6381.01664417454, "Exile_Item_JunkMetal"}, // 2.47%
			{6605.93792172739, "Exile_Item_WaterCanisterEmpty"}, // 2.25%
			{6830.85919928025, "Exile_Melee_Axe"}, // 2.25%
			{7055.78047683311, "Exile_Item_MetalScrews"}, // 2.25%
			{7258.20962663068, "Exile_Item_LightBulb"}, // 2.02%
			{7438.14664867296, "Exile_Item_ExtensionCord"}, // 1.80%
			{7609.08681961314, "Exile_Item_OilCanister"}, // 1.71%
			{7780.02699055331, "Exile_Item_Carwheel"}, // 1.71%
			{7940.28340080972, "Exile_Item_Magazine04"}, // 1.60%
			{8100.53981106613, "Exile_Item_Magazine02"}, // 1.60%
			{8260.79622132254, "Exile_Item_Magazine01"}, // 1.60%
			{8421.05263157895, "Exile_Item_Magazine03"}, // 1.60%
			{8556.00539811066, "Exile_Item_CamoTentKit"}, // 1.35%
			{8690.95816464238, "Exile_Item_Foolbox"}, // 1.35%
			{8803.4188034188, "Exile_Item_Grinder"}, // 1.12%
			{8915.87944219523, "Exile_Melee_SledgeHammer"}, // 1.12%
			{9005.84795321638, "Exile_Item_Rope"}, // 0.90%
			{9095.81646423752, "Exile_Item_MetalBoard"}, // 0.90%
			{9185.78497525866, "Exile_Item_Sand"}, // 0.90%
			{9271.25506072875, "Exile_Item_FuelCanisterFull"}, // 0.85%
			{9356.72514619883, "Exile_Item_Wrench"}, // 0.85%
			{9424.20152946469, "Exile_Item_FireExtinguisher"}, // 0.67%
			{9491.67791273055, "Exile_Item_PortableGeneratorKit"}, // 0.67%
			{9559.15429599641, "Exile_Item_Cement"}, // 0.67%
			{9626.63067926226, "Exile_Item_FloodLightKit"}, // 0.67%
			{9694.10706252812, "Exile_Item_CordlessScrewdriver"}, // 0.67%
			{9739.09131803869, "Exile_Melee_Shovel"}, // 0.45%
			{9784.07557354926, "Exile_Item_ThermalScannerPro"}, // 0.45%
			{9829.05982905984, "Exile_Item_Knife"}, // 0.45%
			{9846.8660968661, "Exile_Item_PlasticBottleDirtyWater"}, // 0.18%
			{9861.11111111112, "Exile_Item_ChocolateMilk"}, // 0.14%
			{9875.35612535613, "Exile_Item_MountainDupe"}, // 0.14%
			{9887.46438746439, "Exile_Item_EnergyDrink"}, // 0.12%
			{9897.4358974359, "Exile_Item_Beer"}, // 0.10%
			{9905.98290598291, "Exile_Item_PlasticBottleFreshWater"}, // 0.09%
			{9912.51187084521, "Exile_Item_InstantCoffee"}, // 0.07%
			{9917.85375118709, "Exile_Item_Raisins"}, // 0.05%
			{9923.19563152897, "Exile_Item_Moobar"}, // 0.05%
			{9928.18138651473, "Exile_Item_PowerDrink"}, // 0.05%
			{9932.9297245964, "Exile_Item_CockONut"}, // 0.05%
			{9937.67806267807, "Exile_Item_SeedAstics"}, // 0.05%
			{9941.83285849953, "Exile_Item_Surstromming"}, // 0.04%
			{9945.987654321, "Exile_Item_SausageGravy"}, // 0.04%
			{9950.14245014246, "Exile_Item_ChristmasTinner"}, // 0.04%
			{9954.29724596392, "Exile_Item_MacasCheese"}, // 0.04%
			{9958.45204178539, "Exile_Item_CatFood"}, // 0.04%
			{9962.60683760685, "Exile_Item_Dogfood"}, // 0.04%
			{9966.76163342831, "Exile_Item_BeefParts"}, // 0.04%
			{9970.91642924978, "Exile_Item_Cheathas"}, // 0.04%
			{9975.07122507124, "Exile_Item_DsNuts"}, // 0.04%
			{9979.2260208927, "Exile_Item_Noodles"}, // 0.04%
			{9983.38081671417, "Exile_Item_BBQSandwich"}, // 0.04%
			{9986.94207027542, "Exile_Item_GloriousKnakworst"}, // 0.04%
			{9990.50332383667, "Exile_Item_PlasticBottleCoffee"}, // 0.04%
			{9993.47103513772, "Exile_Item_Matches"}, // 0.03%
			{9996.43874643876, "Exile_Item_CanOpener"}, // 0.03%
			{9998.21937321939, "Exile_Item_EMRE"}, // 0.02%
			{10000, "Exile_Item_CookingPot"} // 0.02%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Grinder
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Melee_SledgeHammer
	  Exile_Melee_SledgeHammer
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_ToiletPaper
	  Exile_Item_ScrewDriver
	  Exile_Item_Foolbox
	  Exile_Item_MetalBoard
	  Exile_Item_ScrewDriver
	  Exile_Item_Grinder
	  Exile_Melee_Axe
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_Pliers
	  Exile_Item_Pliers
	  Exile_Item_Handsaw
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalScrews
	  Exile_Melee_Axe
	  Exile_Item_FireExtinguisher
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_Wrench
	  Exile_Item_ExtensionCord
	  Exile_Item_Laptop
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ScrewDriver
	  Exile_Item_DuctTape
	  Exile_Item_ScrewDriver
	  Exile_Item_BaseCameraKit
	  Exile_Item_MetalScrews
	  Exile_Item_JunkMetal
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Item_ScrewDriver
	  Exile_Item_Grinder
	  Exile_Item_ScrewDriver
	  Exile_Melee_Axe
	  Exile_Item_Laptop
	  Exile_Item_Laptop
	  Exile_Item_ToiletPaper
	  Exile_Item_Wrench
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_CamoTentKit
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_LightBulb
	  Exile_Item_ScrewDriver
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Laptop
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_OilCanister
	  Exile_Item_Magazine04
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	*/
	class Factories
	{
		count = 39;
		half = 7853.43567251462;
		halfIndex = 19;
		sum = 10000;
		items[] = 
		{
			{833.333333333333, "Exile_Item_Can_Empty"}, // 8.33%
			{1666.66666666667, "Exile_Item_ToiletPaper"}, // 8.33%
			{2500, "Exile_Item_PlasticBottleEmpty"}, // 8.33%
			{3166.66666666667, "Exile_Item_DuctTape"}, // 6.67%
			{3583.33333333333, "Exile_Item_Laptop"}, // 4.17%
			{4000, "Exile_Item_BaseCameraKit"}, // 4.17%
			{4356.35964912281, "Exile_Item_Handsaw"}, // 3.56%
			{4712.71929824561, "Exile_Item_Pliers"}, // 3.56%
			{5069.07894736842, "Exile_Item_ScrewDriver"}, // 3.56%
			{5402.41228070175, "Exile_Item_FuelCanisterEmpty"}, // 3.33%
			{5703.94736842105, "Exile_Item_JunkMetal"}, // 3.02%
			{5978.0701754386, "Exile_Melee_Axe"}, // 2.74%
			{6252.19298245614, "Exile_Item_WaterCanisterEmpty"}, // 2.74%
			{6526.31578947369, "Exile_Item_MetalScrews"}, // 2.74%
			{6773.02631578947, "Exile_Item_LightBulb"}, // 2.47%
			{6995.2485380117, "Exile_Item_Carwheel"}, // 2.22%
			{7217.47076023392, "Exile_Item_OilCanister"}, // 2.22%
			{7436.76900584795, "Exile_Item_ExtensionCord"}, // 2.19%
			{7645.10233918129, "Exile_Item_Magazine04"}, // 2.08%
			{7853.43567251462, "Exile_Item_Magazine01"}, // 2.08%
			{8061.76900584795, "Exile_Item_Magazine03"}, // 2.08%
			{8270.10233918129, "Exile_Item_Magazine02"}, // 2.08%
			{8434.57602339181, "Exile_Item_CamoTentKit"}, // 1.64%
			{8599.04970760234, "Exile_Item_Foolbox"}, // 1.64%
			{8736.11111111111, "Exile_Item_Grinder"}, // 1.37%
			{8873.17251461988, "Exile_Melee_SledgeHammer"}, // 1.37%
			{8984.28362573099, "Exile_Item_FuelCanisterFull"}, // 1.11%
			{9095.39473684211, "Exile_Item_Wrench"}, // 1.11%
			{9205.04385964912, "Exile_Item_MetalBoard"}, // 1.10%
			{9314.69298245614, "Exile_Item_Sand"}, // 1.10%
			{9424.34210526316, "Exile_Item_Rope"}, // 1.10%
			{9506.57894736842, "Exile_Item_PortableGeneratorKit"}, // 0.82%
			{9588.81578947368, "Exile_Item_FireExtinguisher"}, // 0.82%
			{9671.05263157895, "Exile_Item_FloodLightKit"}, // 0.82%
			{9753.28947368421, "Exile_Item_Cement"}, // 0.82%
			{9835.52631578947, "Exile_Item_CordlessScrewdriver"}, // 0.82%
			{9890.35087719298, "Exile_Item_Knife"}, // 0.55%
			{9945.17543859649, "Exile_Item_ThermalScannerPro"}, // 0.55%
			{10000, "Exile_Melee_Shovel"} // 0.55%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Item_CamoTentKit
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  FlareRed_F
	  Exile_Item_Can_Empty
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_MetalScrews
	  Exile_Item_ExtensionCord
	  Exile_Item_OilCanister
	  Exile_Item_MetalScrews
	  FlareRed_F
	  Exile_Item_Grinder
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ZipTie
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  FlareRed_F
	  Exile_Item_DuctTape
	  FlareGreen_F
	  FlareRed_F
	  Exile_Item_Rope
	  Exile_Item_Grinder
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Item_DuctTape
	  FlareYellow_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_LightBulb
	  Exile_Item_Handsaw
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  FlareWhite_F
	  FlareRed_F
	  Exile_Item_Carwheel
	  Exile_Item_OilCanister
	  Exile_Item_MetalScrews
	  Exile_Item_ZipTie
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  FlareYellow_F
	  Exile_Item_Grinder
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ScrewDriver
	  Exile_Item_Grinder
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_DuctTape
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	*/
	class VehicleService
	{
		count = 42;
		half = 8541.18993135012;
		halfIndex = 21;
		sum = 10000;
		items[] = 
		{
			{1391.30434782609, "Exile_Item_DuctTape"}, // 13.91%
			{2086.95652173913, "Exile_Item_FuelCanisterEmpty"}, // 6.96%
			{2739.13043478261, "Exile_Item_Can_Empty"}, // 6.52%
			{3391.30434782609, "Exile_Item_ToiletPaper"}, // 6.52%
			{4043.47826086957, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{4507.24637681159, "Exile_Item_Carwheel"}, // 4.64%
			{4971.01449275362, "Exile_Item_OilCanister"}, // 4.64%
			{5405.79710144928, "Exile_Item_ZipTie"}, // 4.35%
			{5731.88405797101, "FlareWhite_F"}, // 3.26%
			{6057.97101449275, "FlareRed_F"}, // 3.26%
			{6384.05797101449, "FlareGreen_F"}, // 3.26%
			{6710.14492753623, "FlareYellow_F"}, // 3.26%
			{6942.02898550725, "Exile_Item_Wrench"}, // 2.32%
			{7173.91304347826, "Exile_Item_FuelCanisterFull"}, // 2.32%
			{7359.83981693364, "Exile_Item_Handsaw"}, // 1.86%
			{7545.76659038902, "Exile_Item_ScrewDriver"}, // 1.86%
			{7731.69336384439, "Exile_Item_Pliers"}, // 1.86%
			{7894.73684210526, "Exile_Item_Magazine03"}, // 1.63%
			{8057.78032036613, "Exile_Item_Magazine02"}, // 1.63%
			{8220.823798627, "Exile_Item_Magazine01"}, // 1.63%
			{8383.86727688787, "Exile_Item_Magazine04"}, // 1.63%
			{8541.18993135012, "Exile_Item_JunkMetal"}, // 1.57%
			{8684.21052631579, "Exile_Item_MetalScrews"}, // 1.43%
			{8827.23112128147, "Exile_Melee_Axe"}, // 1.43%
			{8970.25171624714, "Exile_Item_WaterCanisterEmpty"}, // 1.43%
			{9098.97025171625, "Exile_Item_LightBulb"}, // 1.29%
			{9213.38672768879, "Exile_Item_ExtensionCord"}, // 1.14%
			{9299.1990846682, "Exile_Item_Foolbox"}, // 0.86%
			{9385.0114416476, "Exile_Item_CamoTentKit"}, // 0.86%
			{9456.52173913044, "Exile_Melee_SledgeHammer"}, // 0.72%
			{9528.03203661327, "Exile_Item_Grinder"}, // 0.72%
			{9585.24027459954, "Exile_Item_Rope"}, // 0.57%
			{9642.44851258581, "Exile_Item_Sand"}, // 0.57%
			{9699.65675057208, "Exile_Item_MetalBoard"}, // 0.57%
			{9742.56292906179, "Exile_Item_FireExtinguisher"}, // 0.43%
			{9785.46910755149, "Exile_Item_CordlessScrewdriver"}, // 0.43%
			{9828.37528604119, "Exile_Item_PortableGeneratorKit"}, // 0.43%
			{9871.28146453089, "Exile_Item_FloodLightKit"}, // 0.43%
			{9914.18764302059, "Exile_Item_Cement"}, // 0.43%
			{9942.79176201373, "Exile_Melee_Shovel"}, // 0.29%
			{9971.39588100686, "Exile_Item_ThermalScannerPro"}, // 0.29%
			{10000, "Exile_Item_Knife"} // 0.29%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Can_Empty
	  V_PlateCarrierSpec_rgr
	  Exile_Item_PlasticBottleEmpty
	  6Rnd_GreenSignal_F
	  7Rnd_408_Mag
	  Exile_Item_ToiletPaper
	  CUP_arifle_Mk17_STD_EGLM
	  srifle_DMR_07_hex_F
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_ToiletPaper
	  SmokeShell
	  Exile_Item_Can_Empty
	  HandGrenade
	  srifle_DMR_06_olive_F
	  CUP_20Rnd_762x51_DMR
	  Exile_Item_ZipTie
	  LMG_03_F
	  CUP_muzzle_snds_MicroUzi
	  200Rnd_556x45_Box_Red_F
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  U_IG_Guerilla3_2
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  H_Bandanna_khk_hs
	  Rangefinder
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  CUP_acc_Glock17_Flashlight
	  Exile_Item_PlasticBottleEmpty
	  11Rnd_45ACP_Mag
	  CUP_acc_Glock17_Flashlight
	  CUP_optic_ACOG
	  Exile_Magazine_45Rnd_545x39_RPK_Green
	  Exile_Item_Can_Empty
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_RPK
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  30Rnd_556x45_Stanag_red
	  CUP_10Rnd_762x51_CZ750
	  optic_LRPS_tna_F
	  Exile_Item_Magazine01
	  H_Hat_camo
	  1Rnd_HE_Grenade_shell
	  Exile_Item_ToiletPaper
	  ItemCompass
	  Exile_Item_Magazine01
	  SmokeShell
	  ItemMap
	  V_PlateCarrierSpec_rgr
	  Exile_Item_Magazine03
	  ItemCompass
	  V_Chestrig_oli
	  MiniGrenade
	  CUP_acc_Glock17_Flashlight
	  Exile_Item_Magazine01
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  B_Bergen_blk
	  U_O_T_Soldier_F
	  Exile_Item_ToiletPaper
	  SmokeShellRed
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  U_O_GhillieSuit
	  3Rnd_HE_Grenade_shell
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  muzzle_snds_L
	  MiniGrenade
	  30Rnd_9x21_Mag
	  200Rnd_556x45_Box_Tracer_F
	  Exile_Item_Magazine01
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  O_NVGoggles_hex_F
	  arifle_MX_SW_F
	  200Rnd_556x45_Box_Red_F
	  DemoCharge_Remote_Mag
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  1Rnd_HE_Grenade_shell
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_PlasticBottleEmpty
	  optic_SOS
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	*/
	class Military
	{
		count = 711;
		half = 9087.7872986803;
		halfIndex = 355;
		sum = 9999.99999999997;
		items[] = 
		{
			{1136.36363636364, "Exile_Item_PlasticBottleEmpty"}, // 11.36%
			{2272.72727272727, "Exile_Item_Can_Empty"}, // 11.36%
			{3409.09090909091, "Exile_Item_ToiletPaper"}, // 11.36%
			{3693.18181818182, "Exile_Item_Magazine01"}, // 2.84%
			{3977.27272727273, "Exile_Item_Magazine04"}, // 2.84%
			{4261.36363636364, "Exile_Item_Magazine03"}, // 2.84%
			{4545.45454545455, "Exile_Item_Magazine02"}, // 2.84%
			{4728.18181818182, "1Rnd_HE_Grenade_shell"}, // 1.83%
			{4819.09090909091, "Exile_Item_ZipTie"}, // 0.91%
			{4909.09090909091, "3Rnd_HE_Grenade_shell"}, // 0.90%
			{4988.14229249012, "ItemCompass"}, // 0.79%
			{5056.32411067194, "HandGrenade"}, // 0.68%
			{5124.50592885375, "MiniGrenade"}, // 0.68%
			{5175.41501976285, "10Rnd_127x54_Mag"}, // 0.51%
			{5221.38029044722, "muzzle_snds_acp"}, // 0.46%
			{5267.34556113159, "muzzle_snds_L"}, // 0.46%
			{5310.12630979469, "Exile_Item_Heatpack"}, // 0.43%
			{5350.12630979469, "20Rnd_762x51_Mag"}, // 0.40%
			{5389.6520014943, "Rangefinder"}, // 0.40%
			{5427.08515657451, "ItemMap"}, // 0.37%
			{5459.17071807183, "ItemRadio"}, // 0.32%
			{5491.25627956916, "ItemWatch"}, // 0.32%
			{5522.60424195161, "Exile_Item_Vishpirin"}, // 0.31%
			{5553.95220433405, "Exile_Item_Heatpack"}, // 0.31%
			{5581.92423230608, "U_IG_Guerilla2_3"}, // 0.28%
			{5609.89626027811, "U_IG_Guerilla2_1"}, // 0.28%
			{5637.86828825013, "U_IG_Guerilla2_2"}, // 0.28%
			{5665.84031622216, "U_IG_Guerilla1_1"}, // 0.28%
			{5693.11304349489, "DemoCharge_Remote_Mag"}, // 0.27%
			{5719.33681971867, "U_IG_Guerilla3_2"}, // 0.26%
			{5745.56059594244, "U_IG_Guerilla3_1"}, // 0.26%
			{5771.09685743376, "CUP_acc_CZ_M3X"}, // 0.26%
			{5796.63311892508, "CUP_acc_Glock17_Flashlight"}, // 0.26%
			{5822.16938041639, "CUP_muzzle_snds_MicroUzi"}, // 0.26%
			{5845.35119859821, "UGL_FlareGreen_F"}, // 0.23%
			{5868.53301678003, "UGL_FlareRed_F"}, // 0.23%
			{5891.71483496185, "UGL_FlareYellow_F"}, // 0.23%
			{5914.89665314367, "UGL_FlareWhite_F"}, // 0.23%
			{5937.87928848585, "CUP_muzzle_snds_M9"}, // 0.23%
			{5960.60656121313, "V_PlateCarrier1_blk"}, // 0.23%
			{5983.3338339404, "V_PlateCarrierSpec_rgr"}, // 0.23%
			{6006.06110666767, "V_PlateCarrierIAGL_dgtl"}, // 0.23%
			{6028.78837939494, "V_PlateCarrierIA1_dgtl"}, // 0.23%
			{6051.51565212222, "V_PlateCarrierIA2_dgtl"}, // 0.23%
			{6074.24292484949, "V_PlateCarrier3_rgr"}, // 0.23%
			{6096.97019757676, "V_PlateCarrier1_rgr"}, // 0.23%
			{6119.69747030404, "V_PlateCarrierGL_rgr"}, // 0.23%
			{6142.42474303131, "V_PlateCarrier2_rgr"}, // 0.23%
			{6163.81511736286, "Binocular"}, // 0.21%
			{6183.78468754163, "hgun_P07_F"}, // 0.20%
			{6203.26520702215, "SmokeShellPurple"}, // 0.19%
			{6222.74572650267, "SmokeShellOrange"}, // 0.19%
			{6242.22624598319, "SmokeShellYellow"}, // 0.19%
			{6261.70676546371, "SmokeShellBlue"}, // 0.19%
			{6281.18728494423, "SmokeShellGreen"}, // 0.19%
			{6300.66780442475, "SmokeShellRed"}, // 0.19%
			{6320.14832390527, "SmokeShell"}, // 0.19%
			{6339.16696217077, "hgun_ACPC2_F"}, // 0.19%
			{6358.18560043627, "hgun_Rook40_F"}, // 0.19%
			{6376.66305793812, "11Rnd_45ACP_Mag"}, // 0.18%
			{6395.14051543997, "30Rnd_9x21_Mag"}, // 0.18%
			{6413.61797294181, "10Rnd_9x21_Mag"}, // 0.18%
			{6432.09543044366, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{6450.57288794551, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{6469.05034544735, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{6487.5278029492, "9Rnd_45ACP_Mag"}, // 0.18%
			{6505.70962113102, "SatchelCharge_Remote_Mag"}, // 0.18%
			{6523.58500417494, "optic_MRD"}, // 0.18%
			{6541.46038721887, "optic_Yorris"}, // 0.18%
			{6558.84903883571, "B_Carryall_ghex_F"}, // 0.17%
			{6576.23769045254, "B_Carryall_cbr"}, // 0.17%
			{6593.52078758355, "Exile_Weapon_RPK"}, // 0.17%
			{6610.6375620225, "CUP_hgun_Phantom"}, // 0.17%
			{6627.26727377416, "CUP_30Rnd_9x19_UZI"}, // 0.17%
			{6643.89698552583, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.17%
			{6660.52669727749, "CUP_18Rnd_9x19_Phantom"}, // 0.17%
			{6677.00015670397, "B_Carryall_oli"}, // 0.16%
			{6693.47361613045, "B_Carryall_khk"}, // 0.16%
			{6709.14759732167, "Exile_Item_Bandage"}, // 0.16%
			{6724.34878957204, "150Rnd_93x64_Mag"}, // 0.15%
			{6739.50030472356, "U_O_GhillieSuit"}, // 0.15%
			{6754.65181987507, "V_RebreatherIA"}, // 0.15%
			{6769.80333502659, "V_RebreatherIR"}, // 0.15%
			{6784.9548501781, "V_RebreatherB"}, // 0.15%
			{6800.10636532962, "U_I_GhillieSuit"}, // 0.15%
			{6815.25788048113, "U_B_GhillieSuit"}, // 0.15%
			{6830.03984648261, "6Rnd_45ACP_Cylinder"}, // 0.15%
			{6843.95450325441, "1Rnd_Smoke_Grenade_shell"}, // 0.14%
			{6857.86916002621, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.14%
			{6871.78381679801, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.14%
			{6885.69847356981, "1Rnd_SmokePurple_Grenade_shell"}, // 0.14%
			{6899.61313034161, "1Rnd_SmokeRed_Grenade_shell"}, // 0.14%
			{6913.52778711341, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.14%
			{6927.44244388521, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.14%
			{6941.26892159002, "arifle_MX_SW_Black_F"}, // 0.14%
			{6954.99680444542, "B_Carryall_ocamo"}, // 0.14%
			{6968.72468730082, "B_Carryall_oucamo"}, // 0.14%
			{6982.45257015622, "B_Carryall_mcamo"}, // 0.14%
			{6995.43958314323, "optic_AMS"}, // 0.13%
			{7008.42659613024, "optic_KHS_blk"}, // 0.13%
			{7021.41360911726, "optic_KHS_hex"}, // 0.13%
			{7034.40062210427, "optic_KHS_old"}, // 0.13%
			{7047.38763509128, "optic_AMS_snd"}, // 0.13%
			{7060.3746480783, "optic_AMS_khk"}, // 0.13%
			{7073.36166106531, "optic_KHS_tan"}, // 0.13%
			{7086.00988240918, "NVGoggles_tna_F"}, // 0.13%
			{7098.65810375306, "NVGoggles"}, // 0.13%
			{7111.30632509693, "O_NVGoggles_urb_F"}, // 0.13%
			{7123.9545464408, "O_NVGoggles_ghex_F"}, // 0.13%
			{7136.60276778468, "O_NVGoggles_hex_F"}, // 0.13%
			{7149.14195273766, "Exile_Item_InstaDoc"}, // 0.13%
			{7161.66514383228, "optic_DMS"}, // 0.13%
			{7174.1089737666, "CUP_arifle_RPK74"}, // 0.12%
			{7186.47108863918, "hgun_Pistol_heavy_01_F"}, // 0.12%
			{7198.83320351175, "hgun_Pistol_heavy_02_F"}, // 0.12%
			{7211.19531838433, "hgun_Pistol_01_F"}, // 0.12%
			{7223.5574332569, "hgun_P07_khk_F"}, // 0.12%
			{7235.91954812948, "hgun_Pistol_Signal_F"}, // 0.12%
			{7248.28166300205, "CUP_hgun_SA61"}, // 0.12%
			{7260.64377787463, "Exile_Weapon_Taurus"}, // 0.12%
			{7273.0058927472, "Exile_Weapon_Makarov"}, // 0.12%
			{7285.36800761978, "Exile_Weapon_TaurusGold"}, // 0.12%
			{7297.73012249235, "Exile_Weapon_Colt1911"}, // 0.12%
			{7309.78949169458, "optic_SOS_khk_F"}, // 0.12%
			{7321.84886089681, "optic_LRPS"}, // 0.12%
			{7333.90823009903, "optic_LRPS_ghex_F"}, // 0.12%
			{7345.96759930126, "optic_SOS"}, // 0.12%
			{7358.02696850349, "optic_LRPS_tna_F"}, // 0.12%
			{7369.43815146279, "CUP_hgun_Duty_M3X"}, // 0.11%
			{7380.80178782642, "V_PlateCarrierL_CTRG"}, // 0.11%
			{7392.16542419006, "V_PlateCarrierH_CTRG"}, // 0.11%
			{7403.25189869117, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.11%
			{7414.31308085501, "CUP_lmg_m249_para"}, // 0.11%
			{7425.37426301885, "CUP_lmg_minimi_railed"}, // 0.11%
			{7436.28335392795, "3Rnd_UGL_FlareGreen_F"}, // 0.11%
			{7447.19244483704, "3Rnd_UGL_FlareRed_F"}, // 0.11%
			{7458.10153574613, "3Rnd_UGL_FlareWhite_F"}, // 0.11%
			{7469.01062665522, "3Rnd_UGL_FlareYellow_F"}, // 0.11%
			{7479.70581382099, "ItemGPS"}, // 0.11%
			{7490.18093540723, "B_FieldPack_cbr"}, // 0.10%
			{7500.65605699346, "B_FieldPack_blk"}, // 0.10%
			{7511.13117857969, "B_FieldPack_oucamo"}, // 0.10%
			{7521.60630016592, "B_FieldPack_ocamo"}, // 0.10%
			{7531.97615844453, "arifle_MX_SW_F"}, // 0.10%
			{7542.34601672313, "LMG_Mk200_F"}, // 0.10%
			{7552.71587500174, "CUP_lmg_Pecheneg"}, // 0.10%
			{7562.950673316, "bipod_03_F_oli"}, // 0.10%
			{7573.18547163027, "bipod_02_F_blk"}, // 0.10%
			{7583.42026994454, "bipod_01_F_khk"}, // 0.10%
			{7593.65506825881, "bipod_01_F_snd"}, // 0.10%
			{7603.88986657308, "bipod_01_F_blk"}, // 0.10%
			{7614.12466488734, "bipod_02_F_tan"}, // 0.10%
			{7624.35946320161, "bipod_03_F_blk"}, // 0.10%
			{7634.25112594302, "srifle_EBR_F"}, // 0.10%
			{7644.14278868442, "srifle_DMR_01_F"}, // 0.10%
			{7653.82132307778, "CUP_lmg_PKM"}, // 0.10%
			{7663.49985747115, "CUP_lmg_L110A1"}, // 0.10%
			{7673.13260882575, "bipod_02_F_hex"}, // 0.10%
			{7682.76536018036, "bipod_01_F_mtp"}, // 0.10%
			{7692.31081472581, "V_BandollierB_oli"}, // 0.10%
			{7701.85626927127, "V_HarnessOGL_gry"}, // 0.10%
			{7711.40172381672, "V_BandollierB_blk"}, // 0.10%
			{7720.94717836218, "V_BandollierB_rgr"}, // 0.10%
			{7730.49263290763, "V_HarnessO_brn"}, // 0.10%
			{7740.03808745309, "V_HarnessOGL_brn"}, // 0.10%
			{7749.58354199854, "V_BandollierB_cbr"}, // 0.10%
			{7759.128996544, "V_HarnessOSpec_brn"}, // 0.10%
			{7768.67445108945, "V_HarnessOSpec_gry"}, // 0.10%
			{7778.21990563491, "V_BandollierB_khk"}, // 0.10%
			{7787.76536018036, "V_HarnessO_gry"}, // 0.10%
			{7797.27467931311, "CUP_hgun_PB6P9_snds"}, // 0.10%
			{7806.51340806404, "16Rnd_9x21_Mag"}, // 0.09%
			{7815.69852346677, "CUP_srifle_SVD"}, // 0.09%
			{7824.78943255768, "APERSTripMine_Wire_Mag"}, // 0.09%
			{7833.88034164859, "APERSBoundingMine_Range_Mag"}, // 0.09%
			{7842.9712507395, "APERSMine_Range_Mag"}, // 0.09%
			{7852.0621598304, "IEDLandSmall_Remote_Mag"}, // 0.09%
			{7861.15306892131, "IEDUrbanSmall_Remote_Mag"}, // 0.09%
			{7870.14027942944, "CUP_lmg_M240"}, // 0.09%
			{7879.12748993756, "CUP_lmg_M60E4"}, // 0.09%
			{7888.11470044568, "Exile_Weapon_PKP"}, // 0.09%
			{7897.10191095381, "Exile_Weapon_PK"}, // 0.09%
			{7906.08912146193, "CUP_lmg_Mk48_des"}, // 0.09%
			{7914.92096319532, "CUP_srifle_M40A3"}, // 0.09%
			{7923.75280492872, "CUP_srifle_M24_wdl"}, // 0.09%
			{7932.58464666212, "CUP_srifle_M24_des"}, // 0.09%
			{7941.39726261759, "muzzle_snds_B"}, // 0.09%
			{7950.13852135885, "U_I_C_Soldier_Para_4_F"}, // 0.09%
			{7958.87978010011, "U_I_C_Soldier_Para_2_F"}, // 0.09%
			{7967.62103884137, "U_I_C_Soldier_Para_3_F"}, // 0.09%
			{7976.36229758263, "U_I_C_Soldier_Para_5_F"}, // 0.09%
			{7985.10355632388, "U_I_C_Soldier_Camo_F"}, // 0.09%
			{7993.84481506514, "CUP_arifle_FNFAL"}, // 0.09%
			{8002.5860738064, "U_I_C_Soldier_Para_1_F"}, // 0.09%
			{8010.8165264813, "B_Bergen_rgr"}, // 0.08%
			{8019.0469791562, "B_Bergen_sgg"}, // 0.08%
			{8027.27743183109, "B_Bergen_mcamo"}, // 0.08%
			{8035.50788450599, "B_Bergen_blk"}, // 0.08%
			{8043.73833718089, "B_ViperHarness_base_F"}, // 0.08%
			{8051.96878985578, "B_FieldPack_ghex_F"}, // 0.08%
			{8060.19924253068, "B_ViperHarness_ghex_F"}, // 0.08%
			{8068.42969520558, "B_ViperHarness_hex_F"}, // 0.08%
			{8076.66014788047, "B_ViperHarness_khk_F"}, // 0.08%
			{8084.89060055537, "B_ViperHarness_oli_F"}, // 0.08%
			{8093.12105323027, "B_ViperLightHarness_base_F"}, // 0.08%
			{8101.35150590516, "B_ViperLightHarness_blk_F"}, // 0.08%
			{8109.58195858006, "B_ViperLightHarness_ghex_F"}, // 0.08%
			{8117.81241125496, "B_ViperLightHarness_hex_F"}, // 0.08%
			{8126.04286392985, "B_ViperLightHarness_khk_F"}, // 0.08%
			{8134.27331660475, "B_ViperLightHarness_oli_F"}, // 0.08%
			{8142.50376927965, "B_ViperHarness_blk_F"}, // 0.08%
			{8150.40890761957, "CUP_optic_SB_11_4x20_PM"}, // 0.08%
			{8158.31404595949, "CUP_optic_LeupoldM3LR"}, // 0.08%
			{8166.21918429941, "CUP_optic_ACOG"}, // 0.08%
			{8174.12432263933, "muzzle_snds_B"}, // 0.08%
			{8182.02946097925, "optic_DMS"}, // 0.08%
			{8189.93459931917, "optic_SOS"}, // 0.08%
			{8197.83973765909, "optic_LRPS"}, // 0.08%
			{8205.74487599901, "optic_AMS"}, // 0.08%
			{8213.65001433893, "optic_KHS_hex"}, // 0.08%
			{8221.55515267885, "CUP_muzzle_snds_M14"}, // 0.08%
			{8229.46029101877, "optic_KHS_blk"}, // 0.08%
			{8237.06774632497, "CUP_hgun_MicroUzi"}, // 0.08%
			{8244.64350390073, "muzzle_snds_93mmg_tan"}, // 0.08%
			{8252.21926147649, "muzzle_snds_93mmg"}, // 0.08%
			{8259.79501905225, "muzzle_snds_338_sand"}, // 0.08%
			{8267.37077662801, "muzzle_snds_338_green"}, // 0.08%
			{8274.94653420376, "muzzle_snds_338_black"}, // 0.08%
			{8282.52229177952, "muzzle_snds_B"}, // 0.08%
			{8289.99836833455, "U_B_CTRG_Soldier_urb_1_F"}, // 0.07%
			{8297.47444488957, "U_B_CTRG_Soldier_3_F"}, // 0.07%
			{8304.95052144459, "U_B_CTRG_Soldier_F"}, // 0.07%
			{8312.42659799962, "U_B_CTRG_3"}, // 0.07%
			{8319.90267455464, "U_B_CTRG_2"}, // 0.07%
			{8327.37875110966, "U_B_CTRG_1"}, // 0.07%
			{8334.85482766469, "U_B_T_Soldier_AR_F"}, // 0.07%
			{8342.33090421971, "U_B_T_Soldier_SL_F"}, // 0.07%
			{8349.80698077473, "U_B_CTRG_Soldier_2_F"}, // 0.07%
			{8357.28305732976, "U_B_CTRG_Soldier_urb_2_F"}, // 0.07%
			{8364.75913388478, "U_B_CTRG_Soldier_urb_3_F"}, // 0.07%
			{8372.23521043981, "U_B_CombatUniform_mcam_vest"}, // 0.07%
			{8379.71128699483, "U_B_GEN_Soldier_F"}, // 0.07%
			{8387.18736354985, "U_B_GEN_Commander_F"}, // 0.07%
			{8394.66344010488, "U_O_T_Soldier_F"}, // 0.07%
			{8402.1395166599, "U_O_T_Officer_F"}, // 0.07%
			{8409.61559321492, "U_B_CombatUniform_mcam"}, // 0.07%
			{8417.09166976995, "U_B_CombatUniform_mcam_worn"}, // 0.07%
			{8424.56774632497, "U_B_CombatUniform_mcam_tshirt"}, // 0.07%
			{8432.01931115358, "H_Booniehat_dgtl"}, // 0.07%
			{8439.4708759822, "H_Booniehat_khk"}, // 0.07%
			{8446.92244081081, "Exile_Headgear_GasMask"}, // 0.07%
			{8454.37400563943, "H_Booniehat_tan"}, // 0.07%
			{8461.82557046804, "H_Booniehat_dirty"}, // 0.07%
			{8469.27713529666, "H_Booniehat_mcamo"}, // 0.07%
			{8476.72870012527, "H_Booniehat_khk_hs"}, // 0.07%
			{8484.18026495388, "H_Booniehat_indp"}, // 0.07%
			{8491.6318297825, "H_Booniehat_grn"}, // 0.07%
			{8499.02281278324, "Exile_Headgear_GasMask"}, // 0.07%
			{8506.41379578398, "H_MilCap_oucamo"}, // 0.07%
			{8513.80477878472, "H_MilCap_blue"}, // 0.07%
			{8521.19576178546, "H_MilCap_dgtl"}, // 0.07%
			{8528.5867447862, "H_MilCap_ocamo"}, // 0.07%
			{8535.97772778694, "H_MilCap_rucamo"}, // 0.07%
			{8543.36871078768, "H_MilCap_mcamo"}, // 0.07%
			{8550.51886400525, "20Rnd_650x39_Cased_Mag_F"}, // 0.07%
			{8557.58433739196, "srifle_DMR_03_woodland_F"}, // 0.07%
			{8564.64981077868, "CUP_srifle_VSSVintorez"}, // 0.07%
			{8571.7152841654, "srifle_DMR_03_F"}, // 0.07%
			{8578.78075755212, "srifle_DMR_03_khaki_F"}, // 0.07%
			{8585.84623093883, "srifle_DMR_03_tan_F"}, // 0.07%
			{8592.91170432555, "srifle_DMR_06_olive_F"}, // 0.07%
			{8599.97717771227, "srifle_DMR_06_camo_F"}, // 0.07%
			{8606.97018470528, "U_IG_leader"}, // 0.07%
			{8613.88342355768, "CUP_lmg_L7A2"}, // 0.07%
			{8620.79666241008, "LMG_03_F"}, // 0.07%
			{8627.70990126249, "LMG_Zafir_F"}, // 0.07%
			{8634.52808308067, "V_Chestrig_oli"}, // 0.07%
			{8641.34626489885, "V_Chestrig_blk"}, // 0.07%
			{8648.16444671703, "V_Chestrig_rgr"}, // 0.07%
			{8654.98262853521, "V_Chestrig_khk"}, // 0.07%
			{8661.79229826623, "CUP_srifle_SVD_des"}, // 0.07%
			{8668.60196799725, "CUP_10Rnd_762x54_SVD_M"}, // 0.07%
			{8675.41163772827, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.07%
			{8682.22130745928, "CUP_5Rnd_762x51_M24"}, // 0.07%
			{8688.90579943789, "U_O_T_FullGhillie_tna_F"}, // 0.07%
			{8695.5902914165, "U_B_T_FullGhillie_tna_F"}, // 0.07%
			{8702.27478339511, "U_B_T_Sniper_F"}, // 0.07%
			{8708.95927537372, "U_O_T_Sniper_F"}, // 0.07%
			{8715.64376735233, "U_B_T_Soldier_F"}, // 0.07%
			{8722.1129535968, "20Rnd_762x51_Mag"}, // 0.06%
			{8728.58006372244, "6Rnd_RedSignal_F"}, // 0.06%
			{8735.04717384809, "6Rnd_GreenSignal_F"}, // 0.06%
			{8741.175876606, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8747.18152898471, "srifle_DMR_07_blk_F"}, // 0.06%
			{8753.18718136342, "srifle_DMR_07_ghex_F"}, // 0.06%
			{8759.19283374213, "srifle_DMR_07_hex_F"}, // 0.06%
			{8765.17369498615, "U_B_PilotCoveralls"}, // 0.06%
			{8771.15455623017, "U_I_CombatUniform_tshirt"}, // 0.06%
			{8777.13541747419, "U_I_CombatUniform_shortsleeve"}, // 0.06%
			{8783.11627871821, "U_B_HeliPilotCoveralls"}, // 0.06%
			{8789.09713996223, "U_O_PilotCoveralls"}, // 0.06%
			{8795.07800120625, "U_I_pilotCoveralls"}, // 0.06%
			{8801.05886245027, "U_I_HeliPilotCoveralls"}, // 0.06%
			{8807.03972369429, "U_I_CombatUniform"}, // 0.06%
			{8812.86722952179, "CUP_arifle_Mk17_STD_EGLM"}, // 0.06%
			{8818.6947353493, "CUP_arifle_FNFAL_railed"}, // 0.06%
			{8824.52224117681, "CUP_srifle_M14"}, // 0.06%
			{8830.31046044817, "10Rnd_762x54_Mag"}, // 0.06%
			{8835.89913406963, "H_Bandanna_khk"}, // 0.06%
			{8841.48780769109, "H_Bandanna_khk_hs"}, // 0.06%
			{8847.07648131255, "H_Bandanna_sgg"}, // 0.06%
			{8852.66515493401, "H_Bandanna_camo"}, // 0.06%
			{8858.25382855547, "H_Cap_tan_specops_US"}, // 0.06%
			{8863.84250217693, "H_Cap_brn_SPECOPS"}, // 0.06%
			{8869.43117579839, "H_Bandanna_mcamo"}, // 0.06%
			{8875.01984941985, "H_Watchcap_khk"}, // 0.06%
			{8880.60852304131, "H_Hat_camo"}, // 0.06%
			{8886.19719666277, "H_Watchcap_blk"}, // 0.06%
			{8891.78587028423, "H_BandMask_blk"}, // 0.06%
			{8897.37454390569, "H_Bandanna_cbr"}, // 0.06%
			{8902.96321752715, "H_Cap_khaki_specops_UK"}, // 0.06%
			{8908.55189114861, "H_Bandanna_gry"}, // 0.06%
			{8914.11775385733, "3Rnd_SmokePurple_Grenade_shell"}, // 0.06%
			{8919.68361656605, "3Rnd_Smoke_Grenade_shell"}, // 0.06%
			{8925.24947927477, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.06%
			{8930.81534198349, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.06%
			{8936.38120469221, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.06%
			{8941.94706740093, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.06%
			{8947.51293010965, "3Rnd_SmokeRed_Grenade_shell"}, // 0.06%
			{8953.0561673602, "H_HelmetB_plain_blk"}, // 0.06%
			{8958.59940461076, "H_HelmetB"}, // 0.06%
			{8964.14264186131, "H_HelmetIA"}, // 0.06%
			{8969.68587911187, "H_HelmetSpecB_blk"}, // 0.06%
			{8975.22911636242, "H_HelmetSpecB_paint2"}, // 0.06%
			{8980.77235361298, "H_HelmetSpecB_paint1"}, // 0.06%
			{8986.31559086353, "H_HelmetB_paint"}, // 0.06%
			{8991.85882811409, "H_HelmetSpecB"}, // 0.06%
			{8997.40206536464, "H_HelmetB_light"}, // 0.06%
			{9002.8932185068, "B_Bergen_Base_F"}, // 0.05%
			{9008.38437164896, "B_Bergen_mcamo_F"}, // 0.05%
			{9013.87552479112, "B_Bergen_dgtl_F"}, // 0.05%
			{9019.36667793328, "B_Bergen_hex_F"}, // 0.05%
			{9024.85783107544, "B_Bergen_tna_F"}, // 0.05%
			{9030.30556686026, "CUP_5Rnd_762x67_G22"}, // 0.05%
			{9035.65316044314, "Exile_Item_MobilePhone"}, // 0.05%
			{9040.95226548318, "CUP_srifle_CZ750"}, // 0.05%
			{9046.05951778144, "CUP_10Rnd_762x51_CZ750"}, // 0.05%
			{9051.16677007971, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.05%
			{9055.82877474171, "CUP_arifle_Mk20"}, // 0.05%
			{9060.49077940372, "CUP_arifle_Mk17_STD_FG"}, // 0.05%
			{9065.12899832765, "muzzle_snds_B_khk_F"}, // 0.05%
			{9069.76721725159, "muzzle_snds_B_snd_F"}, // 0.05%
			{9074.35977495295, "CUP_srifle_G22_des"}, // 0.05%
			{9078.84542088597, "U_B_SpecopsUniform_sgg"}, // 0.04%
			{9083.31635978313, "CUP_30Rnd_545x39_AK_M"}, // 0.04%
			{9087.7872986803, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.04%
			{9092.24362666604, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.04%
			{9096.69995465178, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.04%
			{9101.15628263752, "CUP_20Rnd_762x51_B_SCAR"}, // 0.04%
			{9105.61261062326, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.04%
			{9110.068938609, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.04%
			{9114.52526659474, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.04%
			{9118.98159458048, "CUP_20Rnd_762x51_DMR"}, // 0.04%
			{9123.40787990564, "CUP_5Rnd_86x70_L115A1"}, // 0.04%
			{9127.58075620966, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.04%
			{9131.75363251369, "CUP_30Rnd_762x39_AK47_M"}, // 0.04%
			{9135.92650881771, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.04%
			{9140.05874022267, "Exile_Weapon_AK74"}, // 0.04%
			{9144.19097162763, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9148.32320303259, "Exile_Weapon_AK74_GL"}, // 0.04%
			{9152.45543443755, "Exile_Weapon_AK107_GL"}, // 0.04%
			{9156.58766584251, "Exile_Weapon_AK47"}, // 0.04%
			{9160.71989724747, "Exile_Weapon_AK107"}, // 0.04%
			{9164.81080633838, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9168.89006041763, "CUP_srifle_M110"}, // 0.04%
			{9172.84262958759, "CUP_muzzle_snds_M110"}, // 0.04%
			{9176.76864598962, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9180.69466239164, "30Rnd_556x45_Stanag"}, // 0.04%
			{9184.62067879366, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9188.54669519569, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9192.42150890657, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.04%
			{9196.14729132087, "H_Cap_oli_Syndikat_F"}, // 0.04%
			{9199.87307373518, "H_Watchcap_camo"}, // 0.04%
			{9203.59885614949, "H_Shemag_olive"}, // 0.04%
			{9207.32463856379, "H_MilCap_gen_F"}, // 0.04%
			{9211.0504209781, "H_Booniehat_tna_F"}, // 0.04%
			{9214.77620339241, "H_Cap_tan_Syndikat_F"}, // 0.04%
			{9218.50198580672, "H_Cap_blk_Syndikat_F"}, // 0.04%
			{9222.22776822102, "H_Shemag_olive_hs"}, // 0.04%
			{9225.95355063533, "H_TurbanO_blk"}, // 0.04%
			{9229.67933304964, "H_MilCap_ghex_F"}, // 0.04%
			{9233.40511546394, "H_ShemagOpen_khk"}, // 0.04%
			{9237.13089787825, "H_ShemagOpen_tan"}, // 0.04%
			{9240.85668029256, "H_MilCap_tna_F"}, // 0.04%
			{9244.58246270687, "H_Watchcap_sgg"}, // 0.04%
			{9248.30824512117, "H_Cap_grn_Syndikat_F"}, // 0.04%
			{9252.03402753548, "H_FakeHeadgear_Syndikat_F"}, // 0.04%
			{9255.75980994979, "H_Shemag_tan"}, // 0.04%
			{9259.48559236409, "H_Shemag_khk"}, // 0.04%
			{9263.20460062856, "Exile_Weapon_CZ550"}, // 0.04%
			{9266.90009212893, "H_HelmetB_black"}, // 0.04%
			{9270.5955836293, "H_BandMask_demon"}, // 0.04%
			{9274.29107512967, "H_BandMask_reaper"}, // 0.04%
			{9277.98656663004, "H_BandMask_khk"}, // 0.04%
			{9281.68205813041, "H_HelmetLeaderO_ghex_F"}, // 0.04%
			{9285.37754963078, "H_HelmetSpecO_ghex_F"}, // 0.04%
			{9289.07304113115, "H_HelmetB_tna_F"}, // 0.04%
			{9292.76853263152, "H_Beret_gen_F"}, // 0.04%
			{9296.46402413188, "H_HelmetB_Light_tna_F"}, // 0.04%
			{9300.15951563225, "H_HelmetB_Enh_tna_F"}, // 0.04%
			{9303.85500713262, "H_Helmet_Skate"}, // 0.04%
			{9307.55049863299, "H_HelmetB_light_black"}, // 0.04%
			{9311.24599013336, "H_HelmetB_TI_tna_F"}, // 0.04%
			{9314.94148163373, "H_HelmetB_light_desert"}, // 0.04%
			{9318.6369731341, "H_HelmetB_light_snakeskin"}, // 0.04%
			{9322.33246463447, "H_HelmetB_light_grass"}, // 0.04%
			{9326.02795613484, "H_HelmetB_sand"}, // 0.04%
			{9329.72344763521, "H_HelmetB_desert"}, // 0.04%
			{9333.41893913558, "H_HelmetB_snakeskin"}, // 0.04%
			{9337.11443063595, "H_HelmetB_grass"}, // 0.04%
			{9340.80992213632, "H_HelmetIA_camo"}, // 0.04%
			{9344.50541363669, "H_HelmetIA_net"}, // 0.04%
			{9348.20090513706, "H_HelmetB_light_sand"}, // 0.04%
			{9351.89639663743, "H_HelmetCrew_O_ghex_F"}, // 0.04%
			{9355.47314775517, "100Rnd_65x39_caseless_mag"}, // 0.04%
			{9359.0498988729, "150Rnd_762x54_Box"}, // 0.04%
			{9362.61496126149, "CUP_20Rnd_762x51_L129_M"}, // 0.04%
			{9366.18002365009, "CUP_20Rnd_762x51_B_M110"}, // 0.04%
			{9369.74508603868, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.04%
			{9373.31014842727, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.04%
			{9376.87188519796, "acc_flashlight"}, // 0.04%
			{9380.36838869447, "U_I_G_resistanceLeader_F"}, // 0.03%
			{9383.77322355998, "7Rnd_408_Mag"}, // 0.03%
			{9387.17805842548, "5Rnd_127x108_Mag"}, // 0.03%
			{9390.48384354945, "CUP_arifle_AK107_GL"}, // 0.03%
			{9393.78962867342, "arifle_MX_F"}, // 0.03%
			{9397.09541379738, "arifle_MXC_F"}, // 0.03%
			{9400.40119892135, "CUP_arifle_AKM"}, // 0.03%
			{9403.70698404532, "CUP_arifle_AK107_kobra"}, // 0.03%
			{9407.01276916928, "arifle_TRG21_F"}, // 0.03%
			{9410.31855429325, "CUP_arifle_AK74M"}, // 0.03%
			{9413.62433941722, "arifle_TRG20_F"}, // 0.03%
			{9416.93012454118, "arifle_MX_khk_F"}, // 0.03%
			{9420.23590966515, "arifle_MXC_khk_F"}, // 0.03%
			{9423.22634028716, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9426.21677090917, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9429.20720153118, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9432.19763215318, "U_I_OfficerUniform"}, // 0.03%
			{9435.18806277519, "U_B_Wetsuit"}, // 0.03%
			{9438.1784933972, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9441.16892401921, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9444.15935464122, "U_I_Wetsuit"}, // 0.03%
			{9447.14978526323, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9450.14021588524, "U_O_Wetsuit"}, // 0.03%
			{9453.13064650724, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9456.11127243869, "150Rnd_762x54_Box_Tracer"}, // 0.03%
			{9459.09189837014, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.03%
			{9462.07252430158, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.03%
			{9465.05315023303, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.03%
			{9468.03377616448, "200Rnd_556x45_Box_F"}, // 0.03%
			{9471.01440209592, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9473.99502802737, "200Rnd_556x45_Box_Tracer_F"}, // 0.03%
			{9476.97565395882, "200Rnd_556x45_Box_Red_F"}, // 0.03%
			{9479.95627989026, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.03%
			{9482.93690582171, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.03%
			{9485.91753175316, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.03%
			{9488.8981576846, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.03%
			{9491.87878361605, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.03%
			{9494.7925365298, "CUP_srifle_L129A1_HG"}, // 0.03%
			{9497.70628944355, "CUP_srifle_L129A1"}, // 0.03%
			{9500.59885142703, "CUP_arifle_AK107"}, // 0.03%
			{9503.4914134105, "CUP_srifle_Mk12SPR"}, // 0.03%
			{9506.38397539397, "arifle_Mk20_F"}, // 0.03%
			{9509.27653737744, "CUP_arifle_AK47"}, // 0.03%
			{9512.16909936091, "CUP_arifle_M4A1_camo"}, // 0.03%
			{9515.06166134439, "arifle_Mk20C_F"}, // 0.03%
			{9517.95422332786, "CUP_arifle_M4A1"}, // 0.03%
			{9520.84678531133, "CUP_arifle_M16A2"}, // 0.03%
			{9523.7393472948, "CUP_arifle_Sa58P_des"}, // 0.03%
			{9526.61842598962, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9529.34229388203, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9531.88639157538, "CUP_optic_ACOG"}, // 0.03%
			{9534.43048926873, "muzzle_snds_H_MG_khk_F"}, // 0.03%
			{9536.97458696208, "optic_Arco"}, // 0.03%
			{9539.51868465543, "optic_Arco_blk_F"}, // 0.03%
			{9542.06278234878, "optic_Arco_ghex_F"}, // 0.03%
			{9544.60688004213, "optic_Hamr"}, // 0.03%
			{9547.15097773549, "optic_Hamr_khk_F"}, // 0.03%
			{9549.69507542884, "optic_Holosight"}, // 0.03%
			{9552.23917312219, "optic_Holosight_blk_F"}, // 0.03%
			{9554.78327081554, "optic_Holosight_khk_F"}, // 0.03%
			{9557.32736850889, "CUP_muzzle_PBS4"}, // 0.03%
			{9559.87146620224, "acc_pointer_IR"}, // 0.03%
			{9562.41556389559, "optic_MRCO"}, // 0.03%
			{9564.95966158895, "optic_DMS"}, // 0.03%
			{9567.5037592823, "optic_DMS_ghex_F"}, // 0.03%
			{9570.04785697565, "optic_ERCO_blk_F"}, // 0.03%
			{9572.591954669, "muzzle_snds_H_MG_blk_F"}, // 0.03%
			{9575.13605236235, "optic_ERCO_khk_F"}, // 0.03%
			{9577.6801500557, "optic_ERCO_snd_F"}, // 0.03%
			{9580.22424774905, "CUP_optic_TrijiconRx01_desert"}, // 0.03%
			{9582.76834544241, "CUP_optic_RCO"}, // 0.03%
			{9585.31244313576, "CUP_muzzle_PB6P9"}, // 0.03%
			{9587.85654082911, "CUP_optic_AN_PVS_4"}, // 0.03%
			{9590.40063852246, "CUP_optic_SB_11_4x20_PM"}, // 0.03%
			{9592.94473621581, "CUP_optic_CompM4"}, // 0.03%
			{9595.48883390916, "CUP_optic_SUSAT"}, // 0.03%
			{9598.03293160251, "CUP_optic_HoloDesert"}, // 0.03%
			{9600.57702929587, "muzzle_snds_65_TI_ghex_F"}, // 0.03%
			{9603.12112698922, "CUP_optic_PechenegScope"}, // 0.03%
			{9605.66522468257, "muzzle_snds_65_TI_blk_F"}, // 0.03%
			{9608.20932237592, "CUP_optic_HoloBlack"}, // 0.03%
			{9610.75342006927, "CUP_muzzle_snds_XM8"}, // 0.03%
			{9613.29751776262, "muzzle_snds_65_TI_hex_F"}, // 0.03%
			{9615.84161545597, "CUP_optic_CompM2_Black"}, // 0.03%
			{9618.38571314933, "CUP_optic_PSO_1"}, // 0.03%
			{9620.92981084268, "CUP_optic_PSO_3"}, // 0.03%
			{9623.47390853603, "CUP_optic_Kobra"}, // 0.03%
			{9626.01800622938, "CUP_muzzle_Bizon"}, // 0.03%
			{9628.56210392273, "CUP_optic_CompM2_Desert"}, // 0.03%
			{9631.10620161608, "muzzle_snds_H"}, // 0.03%
			{9633.65029930943, "muzzle_snds_H_khk_F"}, // 0.03%
			{9636.19439700279, "muzzle_snds_H_snd_F"}, // 0.03%
			{9638.73849469614, "muzzle_snds_58_blk_F"}, // 0.03%
			{9641.28259238949, "muzzle_snds_m_khk_F"}, // 0.03%
			{9643.82669008284, "muzzle_snds_m_snd_F"}, // 0.03%
			{9646.37078777619, "muzzle_snds_M"}, // 0.03%
			{9648.91488546954, "muzzle_snds_58_wdm_F"}, // 0.03%
			{9651.39422431252, "CUP_arifle_AK74"}, // 0.02%
			{9653.87356315549, "CUP_arifle_CZ805_B"}, // 0.02%
			{9656.35290199847, "CUP_arifle_CZ805_A1"}, // 0.02%
			{9658.83224084144, "CUP_arifle_XM8_Railed"}, // 0.02%
			{9661.31157968442, "CUP_arifle_M4A3_desert"}, // 0.02%
			{9663.79091852739, "Exile_Weapon_SVD"}, // 0.02%
			{9666.27025737037, "Exile_Weapon_SVDCamo"}, // 0.02%
			{9668.74959621335, "arifle_MXM_F"}, // 0.02%
			{9671.22893505632, "arifle_Katiba_GL_F"}, // 0.02%
			{9673.7082738993, "arifle_Katiba_F"}, // 0.02%
			{9676.18761274227, "Exile_Weapon_VSSVintorez"}, // 0.02%
			{9678.66695158525, "CUP_arifle_Sa58P"}, // 0.02%
			{9681.02256142646, "Exile_Magazine_10Rnd_762x54"}, // 0.02%
			{9683.37817126767, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.02%
			{9685.73378110889, "30Rnd_545x39_Mag_Green_F"}, // 0.02%
			{9688.0893909501, "30Rnd_545x39_Mag_F"}, // 0.02%
			{9690.44500079131, "30Rnd_762x39_AK47_M"}, // 0.02%
			{9692.80061063253, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.02%
			{9695.15622047374, "30Rnd_762x39_Mag_Tracer_F"}, // 0.02%
			{9697.51183031496, "30Rnd_762x39_Mag_Green_F"}, // 0.02%
			{9699.86744015617, "30Rnd_762x39_Mag_F"}, // 0.02%
			{9702.22304999738, "Exile_Magazine_10Rnd_9x39"}, // 0.02%
			{9704.5786598386, "Exile_Magazine_5Rnd_22LR"}, // 0.02%
			{9706.93426967981, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.02%
			{9709.28987952102, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.02%
			{9711.64548936224, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.02%
			{9714.00109920345, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.02%
			{9716.35670904467, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.02%
			{9718.71231888588, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.02%
			{9721.06792872709, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.02%
			{9723.42353856831, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.02%
			{9725.77914840952, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.02%
			{9728.13475825073, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.02%
			{9730.49036809195, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.02%
			{9732.84597793316, "30Rnd_65x39_caseless_mag"}, // 0.02%
			{9735.20158777437, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.02%
			{9737.55719761559, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.02%
			{9739.9128074568, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.02%
			{9742.26841729802, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.02%
			{9744.62402713923, "30Rnd_545x39_Mag_Tracer_F"}, // 0.02%
			{9746.97963698044, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.02%
			{9749.33524682166, "Exile_Magazine_20Rnd_9x39"}, // 0.02%
			{9751.69085666287, "30Rnd_580x42_Mag_F"}, // 0.02%
			{9754.04646650408, "30Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9756.4020763453, "100Rnd_580x42_Mag_F"}, // 0.02%
			{9758.75768618651, "100Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9761.11329602772, "150Rnd_556x45_Drum_Mag_F"}, // 0.02%
			{9763.46890586894, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.02%
			{9765.82451571015, "20Rnd_762x51_Mag"}, // 0.02%
			{9768.18012555137, "CUP_30Rnd_556x45_Stanag"}, // 0.02%
			{9770.53573539258, "CUP_30Rnd_556x45_G36"}, // 0.02%
			{9772.89134523379, "CUP_30Rnd_545x39_AK_M"}, // 0.02%
			{9775.24695507501, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.02%
			{9777.60256491622, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.02%
			{9779.69644033063, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9781.79031574505, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9783.88419115946, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9785.97806657387, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9788.07194198829, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9790.13805769077, "arifle_AKM_F"}, // 0.02%
			{9792.20417339325, "arifle_AKM_FL_F"}, // 0.02%
			{9794.27028909572, "arifle_AKS_F"}, // 0.02%
			{9796.3364047982, "arifle_ARX_blk_F"}, // 0.02%
			{9798.40252050068, "arifle_ARX_ghex_F"}, // 0.02%
			{9800.46863620316, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9802.53475190564, "arifle_ARX_hex_F"}, // 0.02%
			{9804.60086760812, "CUP_arifle_L85A2_NG"}, // 0.02%
			{9806.6669833106, "CUP_arifle_G36A"}, // 0.02%
			{9808.73309901308, "CUP_arifle_G36C"}, // 0.02%
			{9810.79921471555, "CUP_arifle_L86A2"}, // 0.02%
			{9812.86533041803, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9814.93144612051, "arifle_AK12_GL_F"}, // 0.02%
			{9816.99756182299, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9819.06367752547, "arifle_CTARS_ghex_F"}, // 0.02%
			{9821.12979322795, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9823.19590893043, "arifle_CTARS_blk_F"}, // 0.02%
			{9825.26202463291, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9827.32814033538, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9829.39425603786, "arifle_CTARS_hex_F"}, // 0.02%
			{9831.46037174034, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9833.52648744282, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9835.5926031453, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9837.65871884778, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9839.72483455026, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9841.79095025274, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9843.85706595522, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9845.92318165769, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.02%
			{9847.98929736017, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9850.05541306265, "arifle_CTAR_ghex_F"}, // 0.02%
			{9852.12152876513, "CUP_arifle_AK74_GL"}, // 0.02%
			{9854.18764446761, "CUP_arifle_Mk16_STD_EGLM"}, // 0.02%
			{9856.25376017009, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.02%
			{9858.31987587257, "arifle_CTAR_hex_F"}, // 0.02%
			{9860.38599157505, "CUP_arifle_CZ805_GL"}, // 0.02%
			{9862.45210727752, "CUP_arifle_Mk16_SV"}, // 0.02%
			{9864.51822298, "CUP_arifle_Mk16_CQC"}, // 0.02%
			{9866.58433868248, "arifle_CTAR_blk_F"}, // 0.02%
			{9868.65045438496, "CUP_arifle_AKS74U"}, // 0.02%
			{9870.71657008744, "arifle_AK12_F"}, // 0.02%
			{9872.75184824212, "CUP_optic_Elcan"}, // 0.02%
			{9874.7871263968, "CUP_muzzle_snds_G36_black"}, // 0.02%
			{9876.82240455148, "CUP_muzzle_snds_L85"}, // 0.02%
			{9878.85768270616, "CUP_muzzle_snds_Mk12"}, // 0.02%
			{9880.72057391332, "H_Beret_blk"}, // 0.02%
			{9882.58346512047, "H_Beret_red"}, // 0.02%
			{9884.44635632762, "H_Beret_grn"}, // 0.02%
			{9886.30924753477, "H_Beret_ocamo"}, // 0.02%
			{9888.17213874193, "H_Beret_Colonel"}, // 0.02%
			{9890.03502994908, "H_Beret_grn_SF"}, // 0.02%
			{9891.89792115623, "H_Beret_brn_SF"}, // 0.02%
			{9893.76081236338, "H_Beret_02"}, // 0.02%
			{9895.60855811357, "H_CrewHelmetHeli_B"}, // 0.02%
			{9897.45630386375, "H_PilotHelmetHeli_I"}, // 0.02%
			{9899.30404961394, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9901.15179536412, "H_HelmetO_ocamo"}, // 0.02%
			{9902.99954111431, "H_HelmetSpecO_blk"}, // 0.02%
			{9904.84728686449, "H_PilotHelmetHeli_O"}, // 0.02%
			{9906.69503261468, "H_PilotHelmetHeli_B"}, // 0.02%
			{9908.54277836486, "H_PilotHelmetFighter_I"}, // 0.02%
			{9910.39052411505, "H_PilotHelmetFighter_O"}, // 0.02%
			{9912.23826986523, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9914.08601561542, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9915.9337613656, "H_HelmetO_oucamo"}, // 0.02%
			{9917.78150711579, "H_HelmetB_camo"}, // 0.02%
			{9919.62925286597, "H_HelmetO_ghex_F"}, // 0.02%
			{9921.47699861616, "H_CrewHelmetHeli_O"}, // 0.02%
			{9923.32474436634, "H_HelmetCrew_I"}, // 0.02%
			{9925.17249011653, "H_HelmetCrew_O"}, // 0.02%
			{9927.02023586671, "H_HelmetCrew_B"}, // 0.02%
			{9928.8679816169, "H_CrewHelmetHeli_I"}, // 0.02%
			{9930.71572736708, "H_PilotHelmetFighter_B"}, // 0.02%
			{9932.54786835469, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9934.38000934231, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9936.21215032992, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9937.9785186766, "CUP_srifle_AWM_des"}, // 0.02%
			{9939.74488702328, "CUP_srifle_AWM_wdl"}, // 0.02%
			{9941.44730445603, "CUP_10Rnd_127x99_M107"}, // 0.02%
			{9943.14972188879, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.02%
			{9944.85213932154, "CUP_5Rnd_127x99_as50_M"}, // 0.02%
			{9946.55455675429, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.02%
			{9948.20744931628, "CUP_arifle_Sa58RIS2_gl"}, // 0.02%
			{9949.86034187826, "arifle_MX_GL_khk_F"}, // 0.02%
			{9951.51323444025, "CUP_arifle_Sa58RIS1"}, // 0.02%
			{9953.16612700223, "arifle_MX_GL_F"}, // 0.02%
			{9954.81901956421, "arifle_Mk20_GL_F"}, // 0.02%
			{9956.4719121262, "arifle_TRG21_GL_F"}, // 0.02%
			{9958.12480468818, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9959.77769725017, "CUP_arifle_Mk16_CQC_FG"}, // 0.02%
			{9961.34810381098, "CUP_100Rnd_556x45_BetaCMag"}, // 0.02%
			{9962.8384167767, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.01%
			{9964.32872974242, "130Rnd_338_Mag"}, // 0.01%
			{9965.81904270815, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.01%
			{9967.15594110387, "U_I_FullGhillie_sard"}, // 0.01%
			{9968.49283949959, "U_B_FullGhillie_ard"}, // 0.01%
			{9969.82973789531, "U_B_FullGhillie_sard"}, // 0.01%
			{9971.16663629104, "U_O_FullGhillie_lsh"}, // 0.01%
			{9972.50353468676, "U_O_FullGhillie_sard"}, // 0.01%
			{9973.84043308248, "U_I_FullGhillie_ard"}, // 0.01%
			{9975.1773314782, "U_I_FullGhillie_lsh"}, // 0.01%
			{9976.51422987393, "U_B_FullGhillie_lsh"}, // 0.01%
			{9977.85112826965, "U_O_FullGhillie_ard"}, // 0.01%
			{9979.15980040366, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9980.43184925033, "optic_NVS"}, // 0.01%
			{9981.70389809701, "CUP_acc_ANPEQ_2_camo"}, // 0.01%
			{9982.97594694368, "CUP_acc_ANPEQ_2_desert"}, // 0.01%
			{9984.24799579036, "CUP_acc_ANPEQ_2_grey"}, // 0.01%
			{9985.48766521184, "arifle_MXC_Black_F"}, // 0.01%
			{9986.72733463333, "arifle_MX_Black_F"}, // 0.01%
			{9987.96700405482, "arifle_MX_GL_Black_F"}, // 0.01%
			{9989.20667347631, "Exile_Weapon_DMR"}, // 0.01%
			{9990.44634289779, "arifle_MXM_khk_F"}, // 0.01%
			{9991.68601231928, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9992.92568174077, "arifle_MXM_Black_F"}, // 0.01%
			{9993.94713220042, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{9994.77357848141, "CUP_arifle_AK107_GL_pso"}, // 0.01%
			{9995.60002476241, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9996.4264710434, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.01%
			{9997.25291732439, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9998.07936360538, "arifle_SDAR_F"}, // 0.01%
			{9998.76033057848, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.01%
			{9999.17355371898, "CUP_arifle_AKS_Gold"}, // 0.00%
			{9999.58677685947, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.00%
			{9999.99999999997, "Exile_Weapon_AKS_Gold"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	*/
	class Medical
	{
		count = 11;
		half = 8500;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{2413.79310344828, "Exile_Item_Vishpirin"}, // 24.14%
			{4827.58620689655, "Exile_Item_Heatpack"}, // 24.14%
			{6034.48275862069, "Exile_Item_Bandage"}, // 12.07%
			{7000, "Exile_Item_InstaDoc"}, // 9.66%
			{7750, "Exile_Item_Can_Empty"}, // 7.50%
			{8500, "Exile_Item_ToiletPaper"}, // 7.50%
			{9250, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9437.5, "Exile_Item_Magazine01"}, // 1.88%
			{9625, "Exile_Item_Magazine02"}, // 1.88%
			{9812.5, "Exile_Item_Magazine03"}, // 1.88%
			{10000, "Exile_Item_Magazine04"} // 1.88%
		};
	};

	/**
	  Result of 100 rounds:

	  B_OutdoorPack_tan
	  optic_MRD
	  Exile_Item_ZipTie
	  U_B_CombatUniform_mcam_tshirt
	  H_HelmetB_light
	  B_AssaultPack_blk
	  U_B_CTRG_1
	  U_B_CombatUniform_mcam
	  Exile_Magazine_8Rnd_9x18
	  Exile_Item_Heatpack
	  6Rnd_45ACP_Cylinder
	  HandGrenade
	  B_Kitbag_mcamo
	  U_B_GEN_Soldier_F
	  U_I_CombatUniform_tshirt
	  B_Carryall_ocamo
	  U_B_CTRG_Soldier_3_F
	  Exile_Magazine_8Rnd_9x18
	  H_BandMask_khk
	  ItemRadio
	  B_AssaultPack_dgtl
	  Exile_Magazine_6Rnd_45ACP
	  ItemCompass
	  B_Carryall_khk
	  CUP_muzzle_snds_MicroUzi
	  CUP_acc_Glock17_Flashlight
	  Binocular
	  U_IG_Guerilla2_1
	  B_AssaultPack_sgg
	  Exile_Item_Vishpirin
	  H_MilCap_dgtl
	  hgun_ACPC2_F
	  B_OutdoorPack_blu
	  HandGrenade
	  10Rnd_9x21_Mag
	  muzzle_snds_acp
	  B_FieldPack_oucamo
	  10Rnd_9x21_Mag
	  H_HelmetB_sand
	  H_HelmetB_black
	  B_OutdoorPack_blk
	  Exile_Magazine_8Rnd_9x18
	  muzzle_snds_L
	  Exile_Weapon_Taurus
	  MiniGrenade
	  Exile_Item_Heatpack
	  U_O_PilotCoveralls
	  Exile_Item_MobilePhone
	  B_ViperLightHarness_blk_F
	  B_Carryall_ghex_F
	  H_MilCap_blue
	  CUP_muzzle_snds_M9
	  B_AssaultPack_dgtl
	  B_Carryall_oucamo
	  U_IG_Guerilla2_1
	  6Rnd_45ACP_Cylinder
	  hgun_ACPC2_F
	  optic_MRD
	  U_IG_Guerilla3_1
	  B_Carryall_oucamo
	  U_B_T_Soldier_AR_F
	  B_Kitbag_mcamo
	  10Rnd_9x21_Mag
	  U_IG_Guerilla1_1
	  U_IG_Guerilla1_1
	  muzzle_snds_L
	  U_I_CombatUniform
	  U_IG_Guerilla2_2
	  B_AssaultPack_tna_F
	  U_I_C_Soldier_Para_2_F
	  U_O_T_Soldier_F
	  B_AssaultPack_tna_F
	  6Rnd_45ACP_Cylinder
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  hgun_Pistol_01_F
	  B_Carryall_mcamo
	  B_Carryall_khk
	  B_AssaultPack_cbr
	  B_OutdoorPack_blu
	  hgun_P07_F
	  B_Kitbag_sgg
	  B_FieldPack_oucamo
	  H_BandMask_khk
	  B_Carryall_ghex_F
	  Binocular
	  B_AssaultPack_tna_F
	  B_ViperHarness_oli_F
	  B_ViperLightHarness_hex_F
	  H_BandMask_khk
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_Heatpack
	  B_OutdoorPack_blk
	  CUP_acc_CZ_M3X
	  muzzle_snds_L
	  B_FieldPack_blk
	  Exile_Item_ZipTie
	  B_ViperLightHarness_blk_F
	  B_AssaultPack_rgr
	  ItemCompass
	*/
	class Tourist
	{
		count = 225;
		half = 8121.03170461304;
		halfIndex = 112;
		sum = 10000;
		items[] = 
		{
			{312.5, "Exile_Item_ZipTie"}, // 3.13%
			{496.323529411765, "Exile_Item_Heatpack"}, // 1.84%
			{666.160485933504, "ItemCompass"}, // 1.70%
			{827.006074168798, "ItemMap"}, // 1.61%
			{985.011692146326, "muzzle_snds_L"}, // 1.58%
			{1143.01731012385, "muzzle_snds_acp"}, // 1.58%
			{1299.26731012385, "HandGrenade"}, // 1.56%
			{1455.51731012385, "MiniGrenade"}, // 1.56%
			{1601.54534750703, "B_OutdoorPack_blk"}, // 1.46%
			{1739.41299456586, "ItemRadio"}, // 1.38%
			{1877.28064162468, "ItemWatch"}, // 1.38%
			{2008.70587526954, "B_OutdoorPack_tan"}, // 1.31%
			{2140.1311089144, "B_OutdoorPack_blu"}, // 1.31%
			{2256.95353882094, "B_HuntingBackpack"}, // 1.17%
			{2364.7121595106, "Exile_Item_Vishpirin"}, // 1.08%
			{2472.47078020025, "Exile_Item_Heatpack"}, // 1.08%
			{2574.69040636848, "B_AssaultPack_dgtl"}, // 1.02%
			{2676.9100325367, "B_AssaultPack_cbr"}, // 1.02%
			{2779.12965870492, "B_AssaultPack_blk"}, // 1.02%
			{2881.34928487315, "B_AssaultPack_tna_F"}, // 1.02%
			{2983.56891104137, "B_AssaultPack_sgg"}, // 1.02%
			{3085.7885372096, "B_AssaultPack_rgr"}, // 1.02%
			{3188.00816337782, "B_AssaultPack_khk"}, // 1.02%
			{3290.22778954605, "B_AssaultPack_mcamo"}, // 1.02%
			{3389.85027276752, "B_Carryall_cbr"}, // 1.00%
			{3489.472755989, "B_Carryall_ghex_F"}, // 1.00%
			{3585.62660214285, "U_IG_Guerilla1_1"}, // 0.96%
			{3681.78044829669, "U_IG_Guerilla2_3"}, // 0.96%
			{3777.93429445054, "U_IG_Guerilla2_1"}, // 0.96%
			{3874.08814060438, "U_IG_Guerilla2_2"}, // 0.96%
			{3968.46733523526, "B_Carryall_oli"}, // 0.94%
			{4062.84652986613, "B_Carryall_khk"}, // 0.94%
			{4154.75829457201, "Binocular"}, // 0.92%
			{4244.90252534124, "U_IG_Guerilla3_1"}, // 0.90%
			{4335.04675611047, "U_IG_Guerilla3_2"}, // 0.90%
			{4422.82765498688, "CUP_acc_Glock17_Flashlight"}, // 0.88%
			{4510.60855386328, "CUP_muzzle_snds_MicroUzi"}, // 0.88%
			{4598.38945273969, "CUP_acc_CZ_M3X"}, // 0.88%
			{4683.30793100056, "Rangefinder"}, // 0.85%
			{4762.31073998932, "CUP_muzzle_snds_M9"}, // 0.79%
			{4840.96006884838, "B_Carryall_ocamo"}, // 0.79%
			{4919.60939770744, "B_Carryall_mcamo"}, // 0.79%
			{4998.2587265665, "B_Carryall_oucamo"}, // 0.79%
			{5071.27274525809, "B_Kitbag_mcamo"}, // 0.73%
			{5144.28676394968, "B_Kitbag_sgg"}, // 0.73%
			{5217.30078264127, "B_Kitbag_cbr"}, // 0.73%
			{5285.9461801308, "hgun_P07_F"}, // 0.69%
			{5351.32274916846, "hgun_Rook40_F"}, // 0.65%
			{5416.69931820612, "hgun_ACPC2_F"}, // 0.65%
			{5480.21557836872, "11Rnd_45ACP_Mag"}, // 0.64%
			{5543.73183853132, "30Rnd_9x21_Mag"}, // 0.64%
			{5607.24809869392, "9Rnd_45ACP_Mag"}, // 0.64%
			{5670.76435885652, "Exile_Magazine_7Rnd_45ACP"}, // 0.64%
			{5734.28061901913, "Exile_Magazine_6Rnd_45ACP"}, // 0.64%
			{5797.79687918173, "10Rnd_9x21_Mag"}, // 0.64%
			{5861.31313934433, "Exile_Magazine_8Rnd_9x18"}, // 0.64%
			{5922.75976855781, "optic_Yorris"}, // 0.61%
			{5984.2063977713, "optic_MRD"}, // 0.61%
			{6043.04530990519, "CUP_hgun_Phantom"}, // 0.59%
			{6100.20994405153, "CUP_30Rnd_9x19_UZI"}, // 0.57%
			{6157.37457819787, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.57%
			{6214.53921234421, "CUP_18Rnd_9x19_Phantom"}, // 0.57%
			{6268.41852268904, "Exile_Item_Bandage"}, // 0.54%
			{6319.23153081912, "6Rnd_45ACP_Cylinder"}, // 0.51%
			{6365.18741317206, "ItemGPS"}, // 0.46%
			{6410.1977012379, "B_FieldPack_oucamo"}, // 0.45%
			{6455.20798930375, "B_FieldPack_blk"}, // 0.45%
			{6500.21827736959, "B_FieldPack_ocamo"}, // 0.45%
			{6545.22856543543, "B_FieldPack_cbr"}, // 0.45%
			{6588.3320137113, "Exile_Item_InstaDoc"}, // 0.43%
			{6630.82678358577, "Exile_Weapon_Taurus"}, // 0.42%
			{6673.32155346025, "CUP_hgun_SA61"}, // 0.42%
			{6715.81632333473, "hgun_P07_khk_F"}, // 0.42%
			{6758.31109320921, "hgun_Pistol_01_F"}, // 0.42%
			{6800.80586308368, "Exile_Weapon_Makarov"}, // 0.42%
			{6843.30063295816, "hgun_Pistol_heavy_01_F"}, // 0.42%
			{6885.79540283264, "hgun_Pistol_heavy_02_F"}, // 0.42%
			{6928.29017270711, "Exile_Weapon_TaurusGold"}, // 0.42%
			{6970.78494258159, "Exile_Weapon_Colt1911"}, // 0.42%
			{7013.27971245607, "hgun_Pistol_Signal_F"}, // 0.42%
			{7052.50565387866, "CUP_hgun_Duty_M3X"}, // 0.39%
			{7090.61540997622, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.38%
			{7125.98063631367, "B_ViperLightHarness_oli_F"}, // 0.35%
			{7161.34586265112, "B_ViperHarness_oli_F"}, // 0.35%
			{7196.71108898857, "B_ViperHarness_khk_F"}, // 0.35%
			{7232.07631532602, "B_ViperHarness_hex_F"}, // 0.35%
			{7267.44154166347, "B_ViperHarness_ghex_F"}, // 0.35%
			{7302.80676800092, "B_ViperHarness_blk_F"}, // 0.35%
			{7338.17199433837, "B_ViperLightHarness_base_F"}, // 0.35%
			{7373.53722067581, "B_ViperLightHarness_blk_F"}, // 0.35%
			{7408.90244701326, "B_ViperHarness_base_F"}, // 0.35%
			{7444.26767335071, "B_FieldPack_ghex_F"}, // 0.35%
			{7479.63289968816, "B_Bergen_blk"}, // 0.35%
			{7514.99812602561, "B_Bergen_rgr"}, // 0.35%
			{7550.36335236306, "B_ViperLightHarness_hex_F"}, // 0.35%
			{7585.72857870051, "B_ViperLightHarness_khk_F"}, // 0.35%
			{7621.09380503796, "B_Bergen_sgg"}, // 0.35%
			{7656.45903137541, "B_Bergen_mcamo"}, // 0.35%
			{7691.82425771285, "B_ViperLightHarness_ghex_F"}, // 0.35%
			{7724.51254223168, "CUP_hgun_PB6P9_snds"}, // 0.33%
			{7756.27067231298, "16Rnd_9x21_Mag"}, // 0.32%
			{7787.73040385661, "B_Bergen_hex_F"}, // 0.31%
			{7819.19013540023, "B_Bergen_tna_F"}, // 0.31%
			{7850.64986694386, "B_Bergen_mcamo_F"}, // 0.31%
			{7882.10959848748, "B_Bergen_dgtl_F"}, // 0.31%
			{7913.5693300311, "B_Bergen_Base_F"}, // 0.31%
			{7943.61740695418, "U_I_C_Soldier_Camo_F"}, // 0.30%
			{7973.66548387726, "U_I_C_Soldier_Para_4_F"}, // 0.30%
			{8003.71356080033, "U_I_C_Soldier_Para_3_F"}, // 0.30%
			{8033.76163772341, "U_I_C_Soldier_Para_2_F"}, // 0.30%
			{8063.80971464649, "U_I_C_Soldier_Para_5_F"}, // 0.30%
			{8093.85779156957, "U_I_C_Soldier_Para_1_F"}, // 0.30%
			{8121.03170461304, "NVGoggles_tna_F"}, // 0.27%
			{8148.20561765652, "O_NVGoggles_urb_F"}, // 0.27%
			{8175.3795307, "NVGoggles"}, // 0.27%
			{8202.55344374348, "O_NVGoggles_ghex_F"}, // 0.27%
			{8229.72735678696, "O_NVGoggles_hex_F"}, // 0.27%
			{8255.87798440202, "CUP_hgun_MicroUzi"}, // 0.26%
			{8281.91965106869, "U_B_GhillieSuit"}, // 0.26%
			{8307.96131773535, "U_O_GhillieSuit"}, // 0.26%
			{8334.00298440202, "U_I_GhillieSuit"}, // 0.26%
			{8359.70199755991, "U_B_CTRG_Soldier_urb_3_F"}, // 0.26%
			{8385.40101071781, "U_O_T_Officer_F"}, // 0.26%
			{8411.1000238757, "U_O_T_Soldier_F"}, // 0.26%
			{8436.7990370336, "U_B_GEN_Commander_F"}, // 0.26%
			{8462.49805019149, "U_B_T_Soldier_SL_F"}, // 0.26%
			{8488.19706334939, "U_B_CTRG_Soldier_F"}, // 0.26%
			{8513.89607650728, "U_B_CTRG_Soldier_2_F"}, // 0.26%
			{8539.59508966518, "U_B_CTRG_Soldier_urb_1_F"}, // 0.26%
			{8565.29410282307, "U_B_CTRG_Soldier_urb_2_F"}, // 0.26%
			{8590.99311598097, "U_B_GEN_Soldier_F"}, // 0.26%
			{8616.69212913886, "U_B_CTRG_Soldier_3_F"}, // 0.26%
			{8642.39114229676, "U_B_T_Soldier_AR_F"}, // 0.26%
			{8668.09015545465, "U_B_CTRG_2"}, // 0.26%
			{8693.78916861255, "U_B_CombatUniform_mcam_worn"}, // 0.26%
			{8719.48818177044, "U_B_CombatUniform_mcam_vest"}, // 0.26%
			{8745.18719492834, "U_B_CombatUniform_mcam_tshirt"}, // 0.26%
			{8770.88620808623, "U_B_CombatUniform_mcam"}, // 0.26%
			{8796.58522124413, "U_B_CTRG_3"}, // 0.26%
			{8822.28423440202, "U_B_CTRG_1"}, // 0.26%
			{8847.69073846706, "H_MilCap_dgtl"}, // 0.25%
			{8873.0972425321, "H_MilCap_rucamo"}, // 0.25%
			{8898.50374659714, "H_MilCap_blue"}, // 0.25%
			{8923.91025066218, "H_MilCap_mcamo"}, // 0.25%
			{8949.31675472722, "H_MilCap_ocamo"}, // 0.25%
			{8974.72325879226, "Exile_Headgear_GasMask"}, // 0.25%
			{9000.1297628573, "H_MilCap_oucamo"}, // 0.25%
			{9024.16822439577, "U_IG_leader"}, // 0.24%
			{9047.14616557224, "Exile_Item_MobilePhone"}, // 0.23%
			{9069.37685662915, "6Rnd_GreenSignal_F"}, // 0.22%
			{9091.60754768606, "6Rnd_RedSignal_F"}, // 0.22%
			{9112.16675821237, "U_I_CombatUniform"}, // 0.21%
			{9132.72596873869, "U_I_CombatUniform_tshirt"}, // 0.21%
			{9153.285179265, "U_I_CombatUniform_shortsleeve"}, // 0.21%
			{9173.84438979132, "U_B_HeliPilotCoveralls"}, // 0.21%
			{9194.40360031763, "U_O_PilotCoveralls"}, // 0.21%
			{9214.96281084395, "U_B_PilotCoveralls"}, // 0.21%
			{9235.52202137026, "U_I_HeliPilotCoveralls"}, // 0.21%
			{9256.08123189658, "U_I_pilotCoveralls"}, // 0.21%
			{9275.13610994536, "H_HelmetSpecB"}, // 0.19%
			{9294.19098799414, "H_HelmetB_plain_blk"}, // 0.19%
			{9313.24586604292, "H_HelmetSpecB_paint1"}, // 0.19%
			{9332.3007440917, "H_HelmetSpecB_paint2"}, // 0.19%
			{9351.35562214048, "H_HelmetSpecB_blk"}, // 0.19%
			{9370.41050018926, "H_HelmetIA"}, // 0.19%
			{9389.46537823804, "H_HelmetB_light"}, // 0.19%
			{9408.52025628682, "H_HelmetB_paint"}, // 0.19%
			{9427.5751343356, "H_HelmetB"}, // 0.19%
			{9442.99454223034, "U_B_SpecopsUniform_sgg"}, // 0.15%
			{9455.69779426286, "H_HelmetB_desert"}, // 0.13%
			{9468.40104629538, "H_HelmetB_black"}, // 0.13%
			{9481.1042983279, "H_BandMask_khk"}, // 0.13%
			{9493.80755036043, "H_HelmetB_grass"}, // 0.13%
			{9506.51080239295, "H_HelmetIA_camo"}, // 0.13%
			{9519.21405442547, "H_HelmetIA_net"}, // 0.13%
			{9531.91730645799, "H_HelmetB_sand"}, // 0.13%
			{9544.62055849051, "H_HelmetB_light_grass"}, // 0.13%
			{9557.32381052303, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9570.02706255555, "H_HelmetB_light_desert"}, // 0.13%
			{9582.73031458807, "H_HelmetB_light_black"}, // 0.13%
			{9595.43356662059, "H_HelmetB_light_sand"}, // 0.13%
			{9608.13681865311, "H_HelmetB_snakeskin"}, // 0.13%
			{9620.84007068564, "H_BandMask_demon"}, // 0.13%
			{9633.54332271816, "H_BandMask_reaper"}, // 0.13%
			{9646.24657475068, "H_Beret_gen_F"}, // 0.13%
			{9658.9498267832, "H_HelmetB_tna_F"}, // 0.13%
			{9671.65307881572, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9684.35633084824, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9697.05958288076, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9709.76283491328, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9722.4660869458, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9735.16933897833, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9747.87259101085, "H_Helmet_Skate"}, // 0.13%
			{9759.89182178008, "U_I_G_resistanceLeader_F"}, // 0.12%
			{9770.17142704323, "U_O_OfficerUniform_ocamo"}, // 0.10%
			{9780.45103230639, "U_I_OfficerUniform"}, // 0.10%
			{9790.73063756955, "U_I_Wetsuit"}, // 0.10%
			{9801.01024283271, "U_O_Wetsuit"}, // 0.10%
			{9811.28984809587, "U_O_CombatUniform_ocamo"}, // 0.10%
			{9821.56945335903, "U_O_CombatUniform_oucamo"}, // 0.10%
			{9831.84905862219, "U_O_SpecopsUniform_ocamo"}, // 0.10%
			{9842.12866388534, "U_O_SpecopsUniform_blk"}, // 0.10%
			{9852.4082691485, "U_O_V_Soldier_Viper_F"}, // 0.10%
			{9862.68787441166, "U_O_V_Soldier_Viper_hex_F"}, // 0.10%
			{9872.96747967482, "U_B_Wetsuit"}, // 0.10%
			{9879.31910569108, "H_HelmetCrew_B"}, // 0.06%
			{9885.67073170734, "H_HelmetCrew_I"}, // 0.06%
			{9892.0223577236, "H_PilotHelmetFighter_B"}, // 0.06%
			{9898.37398373986, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9904.72560975612, "H_HelmetO_ocamo"}, // 0.06%
			{9911.07723577238, "H_HelmetSpecO_blk"}, // 0.06%
			{9917.42886178864, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9923.7804878049, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9930.13211382116, "H_HelmetO_oucamo"}, // 0.06%
			{9936.48373983741, "H_CrewHelmetHeli_I"}, // 0.06%
			{9942.83536585367, "H_CrewHelmetHeli_O"}, // 0.06%
			{9949.18699186993, "H_CrewHelmetHeli_B"}, // 0.06%
			{9955.53861788619, "H_HelmetB_camo"}, // 0.06%
			{9961.89024390245, "H_PilotHelmetHeli_I"}, // 0.06%
			{9968.24186991871, "H_PilotHelmetHeli_O"}, // 0.06%
			{9974.59349593497, "H_PilotHelmetHeli_B"}, // 0.06%
			{9980.94512195123, "H_PilotHelmetFighter_I"}, // 0.06%
			{9987.29674796749, "H_PilotHelmetFighter_O"}, // 0.06%
			{9993.64837398375, "H_HelmetCrew_O"}, // 0.06%
			{10000, "H_HelmetO_ghex_F"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_srifle_SVD
	  B_Carryall_cbr
	  Exile_Item_ZipTie
	  optic_KHS_tan
	  H_HelmetB_TI_tna_F
	  CUP_srifle_M24_des
	  optic_AMS_snd
	  optic_AMS
	  srifle_DMR_07_ghex_F
	  SatchelCharge_Remote_Mag
	  CUP_srifle_CZ750
	  srifle_GM6_F
	  srifle_DMR_02_camo_F
	  H_MilCap_oucamo
	  H_HelmetIA
	  srifle_DMR_06_camo_F
	  H_MilCap_rucamo
	  srifle_DMR_07_ghex_F
	  H_HelmetB_Enh_tna_F
	  srifle_EBR_F
	  CUP_srifle_M40A3
	  srifle_DMR_07_hex_F
	  srifle_LRR_F
	  U_B_GhillieSuit
	  srifle_DMR_03_tan_F
	  srifle_DMR_03_khaki_F
	  srifle_DMR_03_woodland_F
	  U_I_GhillieSuit
	  CUP_srifle_M24_wdl
	  HandGrenade
	  optic_KHS_hex
	  Exile_Item_Vishpirin
	  MiniGrenade
	  srifle_GM6_F
	  srifle_DMR_07_ghex_F
	  DemoCharge_Remote_Mag
	  10Rnd_127x54_Mag
	  srifle_DMR_07_ghex_F
	  H_BandMask_khk
	  H_HelmetB_Light_tna_F
	  srifle_EBR_F
	  srifle_DMR_07_ghex_F
	  srifle_LRR_tna_F
	  B_Carryall_oucamo
	  srifle_GM6_ghex_F
	  SatchelCharge_Remote_Mag
	  muzzle_snds_B
	  H_HelmetSpecB
	  U_B_T_FullGhillie_tna_F
	  srifle_DMR_04_F
	  optic_DMS
	  srifle_DMR_06_camo_F
	  CUP_srifle_M40A3
	  srifle_DMR_02_camo_F
	  srifle_DMR_04_Tan_F
	  CUP_srifle_CZ750
	  Exile_Item_Heatpack
	  B_Carryall_cbr
	  srifle_DMR_03_F
	  srifle_DMR_02_camo_F
	  H_MilCap_blue
	  srifle_DMR_02_sniper_F
	  srifle_DMR_07_ghex_F
	  srifle_DMR_04_F
	  srifle_DMR_04_Tan_F
	  DemoCharge_Remote_Mag
	  H_HelmetSpecB_paint2
	  U_I_GhillieSuit
	  CUP_srifle_M24_wdl
	  srifle_DMR_02_F
	  muzzle_snds_338_black
	  CUP_srifle_M24_wdl
	  CUP_srifle_CZ750
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  IEDUrbanSmall_Remote_Mag
	  CUP_srifle_VSSVintorez
	  U_B_GhillieSuit
	  CUP_srifle_M40A3
	  MiniGrenade
	  srifle_DMR_02_F
	  srifle_DMR_02_sniper_F
	  10Rnd_127x54_Mag
	  H_HelmetB_Enh_tna_F
	  srifle_DMR_04_F
	  srifle_DMR_03_woodland_F
	  CUP_srifle_M24_wdl
	  20Rnd_762x51_Mag
	  srifle_DMR_03_khaki_F
	  H_HelmetB_Enh_tna_F
	  srifle_DMR_07_hex_F
	  srifle_LRR_F
	  srifle_EBR_F
	  srifle_DMR_03_tan_F
	  srifle_LRR_tna_F
	  CUP_srifle_G22_des
	  Exile_Item_ZipTie
	  U_B_T_FullGhillie_tna_F
	  srifle_DMR_05_hex_F
	  srifle_LRR_F
	*/
	class Radiation
	{
		count = 201;
		half = 8873.81239758776;
		halfIndex = 100;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "Exile_Item_ZipTie"}, // 3.17%
			{605.478750640041, "srifle_LRR_F"}, // 2.88%
			{893.497183819765, "srifle_LRR_tna_F"}, // 2.88%
			{1131.592421915, "DemoCharge_Remote_Mag"}, // 2.38%
			{1323.60471070148, "srifle_GM6_F"}, // 1.92%
			{1515.61699948797, "srifle_GM6_ghex_F"}, // 1.92%
			{1688.32857116327, "srifle_EBR_F"}, // 1.73%
			{1861.04014283857, "srifle_DMR_01_F"}, // 1.73%
			{2021.41517367992, "CUP_srifle_SVD"}, // 1.60%
			{2180.14533241008, "MiniGrenade"}, // 1.59%
			{2338.87549114024, "HandGrenade"}, // 1.59%
			{2497.6056498704, "SatchelCharge_Remote_Mag"}, // 1.59%
			{2651.81241029478, "CUP_srifle_M40A3"}, // 1.54%
			{2806.01917071915, "CUP_srifle_M24_des"}, // 1.54%
			{2960.22593114353, "CUP_srifle_M24_wdl"}, // 1.54%
			{3113.83576217272, "srifle_DMR_05_hex_F"}, // 1.54%
			{3267.4455932019, "srifle_DMR_05_blk_F"}, // 1.54%
			{3421.05542423109, "srifle_DMR_05_tan_F"}, // 1.54%
			{3555.46402638163, "srifle_DMR_04_F"}, // 1.34%
			{3689.87262853216, "srifle_DMR_04_Tan_F"}, // 1.34%
			{3822.1477608073, "U_I_GhillieSuit"}, // 1.32%
			{3954.42289308243, "U_O_GhillieSuit"}, // 1.32%
			{4086.69802535756, "U_B_GhillieSuit"}, // 1.32%
			{4210.06343369706, "srifle_DMR_03_woodland_F"}, // 1.23%
			{4333.42884203656, "srifle_DMR_03_F"}, // 1.23%
			{4456.79425037607, "srifle_DMR_03_khaki_F"}, // 1.23%
			{4580.15965871557, "srifle_DMR_03_tan_F"}, // 1.23%
			{4703.52506705507, "srifle_DMR_06_olive_F"}, // 1.23%
			{4826.89047539457, "srifle_DMR_06_camo_F"}, // 1.23%
			{4950.25588373407, "CUP_srifle_VSSVintorez"}, // 1.23%
			{5065.46325700596, "srifle_DMR_02_camo_F"}, // 1.15%
			{5180.67063027785, "srifle_DMR_02_sniper_F"}, // 1.15%
			{5295.87800354974, "srifle_DMR_02_F"}, // 1.15%
			{5405.34707853605, "Exile_Item_Vishpirin"}, // 1.09%
			{5514.81615352237, "Exile_Item_Heatpack"}, // 1.09%
			{5619.67675061095, "srifle_DMR_07_blk_F"}, // 1.05%
			{5724.53734769952, "srifle_DMR_07_hex_F"}, // 1.05%
			{5829.3979447881, "srifle_DMR_07_ghex_F"}, // 1.05%
			{5930.60173726706, "B_Carryall_ghex_F"}, // 1.01%
			{6031.80552974602, "B_Carryall_cbr"}, // 1.01%
			{6127.68280683135, "B_Carryall_khk"}, // 0.96%
			{6223.56008391668, "B_Carryall_oli"}, // 0.96%
			{6316.08414017131, "CUP_srifle_CZ750"}, // 0.93%
			{6404.9730290602, "10Rnd_127x54_Mag"}, // 0.89%
			{6485.16054448087, "CUP_srifle_G22_des"}, // 0.80%
			{6565.05827538532, "B_Carryall_ocamo"}, // 0.80%
			{6644.95600628976, "B_Carryall_oucamo"}, // 0.80%
			{6724.8537371942, "B_Carryall_mcamo"}, // 0.80%
			{6804.21881655928, "IEDUrbanSmall_Remote_Mag"}, // 0.79%
			{6883.58389592436, "IEDLandSmall_Remote_Mag"}, // 0.79%
			{6962.94897528944, "APERSTripMine_Wire_Mag"}, // 0.79%
			{7042.31405465452, "APERSMine_Range_Mag"}, // 0.79%
			{7121.6791340196, "APERSBoundingMine_Range_Mag"}, // 0.79%
			{7191.52040386087, "20Rnd_762x51_Mag"}, // 0.70%
			{7249.8770798646, "U_B_T_Sniper_F"}, // 0.58%
			{7308.23375586834, "U_B_T_Soldier_F"}, // 0.58%
			{7366.59043187207, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7424.94710787581, "U_O_T_Sniper_F"}, // 0.58%
			{7483.30378387954, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7540.90747051549, "srifle_DMR_03_khaki_F"}, // 0.58%
			{7598.51115715143, "srifle_DMR_03_F"}, // 0.58%
			{7656.11484378737, "srifle_DMR_06_olive_F"}, // 0.58%
			{7713.71853042332, "srifle_DMR_06_camo_F"}, // 0.58%
			{7771.32221705926, "srifle_DMR_03_woodland_F"}, // 0.58%
			{7828.92590369521, "srifle_DMR_03_tan_F"}, // 0.58%
			{7883.66044118837, "Exile_Item_Bandage"}, // 0.55%
			{7931.39883479142, "srifle_GM6_F"}, // 0.48%
			{7975.18646478595, "Exile_Item_InstaDoc"}, // 0.44%
			{8010.99025998824, "srifle_DMR_02_camo_F"}, // 0.36%
			{8046.79405519053, "srifle_DMR_02_F"}, // 0.36%
			{8082.59785039282, "CUP_srifle_M107_Base"}, // 0.36%
			{8114.5569427546, "B_Bergen_tna_F"}, // 0.32%
			{8146.51603511638, "B_Bergen_hex_F"}, // 0.32%
			{8178.47512747815, "B_Bergen_dgtl_F"}, // 0.32%
			{8210.43421983993, "B_Bergen_mcamo_F"}, // 0.32%
			{8242.39331220171, "B_Bergen_Base_F"}, // 0.32%
			{8273.23466428658, "CUP_srifle_AWM_des"}, // 0.31%
			{8304.07601637146, "CUP_srifle_AWM_wdl"}, // 0.31%
			{8330.53104282648, "muzzle_snds_338_sand"}, // 0.26%
			{8356.98606928151, "muzzle_snds_B"}, // 0.26%
			{8383.44109573654, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8409.89612219157, "muzzle_snds_338_black"}, // 0.26%
			{8436.35114864659, "muzzle_snds_338_green"}, // 0.26%
			{8462.80617510162, "muzzle_snds_93mmg"}, // 0.26%
			{8488.61595700896, "Exile_Headgear_GasMask"}, // 0.26%
			{8514.4257389163, "H_MilCap_ocamo"}, // 0.26%
			{8540.23552082365, "H_MilCap_mcamo"}, // 0.26%
			{8566.04530273099, "H_MilCap_dgtl"}, // 0.26%
			{8591.85508463833, "H_MilCap_oucamo"}, // 0.26%
			{8617.66486654568, "H_MilCap_rucamo"}, // 0.26%
			{8643.47464845302, "H_MilCap_blue"}, // 0.26%
			{8667.34384525455, "srifle_DMR_05_hex_F"}, // 0.24%
			{8691.21304205608, "srifle_DMR_05_tan_F"}, // 0.24%
			{8715.0822388576, "srifle_DMR_05_blk_F"}, // 0.24%
			{8737.75797581906, "optic_KHS_tan"}, // 0.23%
			{8760.43371278051, "optic_AMS"}, // 0.23%
			{8783.10944974196, "optic_KHS_old"}, // 0.23%
			{8805.78518670341, "optic_AMS_khk"}, // 0.23%
			{8828.46092366486, "optic_AMS_snd"}, // 0.23%
			{8851.13666062631, "optic_KHS_hex"}, // 0.23%
			{8873.81239758776, "optic_KHS_blk"}, // 0.23%
			{8895.67828680059, "optic_DMS"}, // 0.22%
			{8916.7343282648, "optic_SOS"}, // 0.21%
			{8937.790369729, "optic_SOS_khk_F"}, // 0.21%
			{8958.8464111932, "optic_LRPS"}, // 0.21%
			{8979.90245265741, "optic_LRPS_ghex_F"}, // 0.21%
			{9000.95849412161, "optic_LRPS_tna_F"}, // 0.21%
			{9020.31583055212, "H_HelmetB_light"}, // 0.19%
			{9039.67316698263, "H_HelmetB_plain_blk"}, // 0.19%
			{9059.03050341313, "H_HelmetSpecB"}, // 0.19%
			{9078.38783984364, "H_HelmetSpecB_paint1"}, // 0.19%
			{9097.74517627415, "H_HelmetSpecB_paint2"}, // 0.19%
			{9117.10251270465, "H_HelmetSpecB_blk"}, // 0.19%
			{9136.45984913516, "H_HelmetIA"}, // 0.19%
			{9155.81718556567, "H_HelmetB_paint"}, // 0.19%
			{9175.17452199617, "H_HelmetB"}, // 0.19%
			{9190.56162922001, "muzzle_snds_B"}, // 0.15%
			{9204.88314730093, "MMG_02_black_F"}, // 0.14%
			{9219.20466538185, "MMG_02_sand_F"}, // 0.14%
			{9233.52618346276, "CUP_srifle_AS50"}, // 0.14%
			{9247.84770154368, "MMG_02_camo_F"}, // 0.14%
			{9260.75259249735, "H_HelmetB_snakeskin"}, // 0.13%
			{9273.65748345102, "H_HelmetB_desert"}, // 0.13%
			{9286.5623744047, "H_HelmetB_black"}, // 0.13%
			{9299.46726535837, "H_HelmetB_sand"}, // 0.13%
			{9312.37215631204, "H_HelmetB_light_grass"}, // 0.13%
			{9325.27704726571, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9338.18193821939, "H_HelmetB_light_desert"}, // 0.13%
			{9351.08682917306, "H_HelmetB_grass"}, // 0.13%
			{9363.99172012673, "H_HelmetIA_net"}, // 0.13%
			{9376.8966110804, "H_Helmet_Skate"}, // 0.13%
			{9389.80150203408, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9402.70639298775, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9415.61128394142, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9428.51617489509, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9441.42106584876, "H_HelmetB_tna_F"}, // 0.13%
			{9454.32595680244, "H_Beret_gen_F"}, // 0.13%
			{9467.23084775611, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9480.13573870978, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9493.04062966345, "H_HelmetB_light_sand"}, // 0.13%
			{9505.94552061713, "H_BandMask_demon"}, // 0.13%
			{9518.8504115708, "H_BandMask_reaper"}, // 0.13%
			{9531.75530252447, "H_BandMask_khk"}, // 0.13%
			{9544.66019347814, "H_HelmetB_light_black"}, // 0.13%
			{9557.56508443182, "H_HelmetIA_camo"}, // 0.13%
			{9570.04947893868, "20Rnd_650x39_Cased_Mag_F"}, // 0.12%
			{9581.93937846903, "CUP_5Rnd_762x51_M24"}, // 0.12%
			{9593.82927799938, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{9605.71917752973, "CUP_srifle_SVD_des"}, // 0.12%
			{9617.60907706008, "CUP_10Rnd_762x54_SVD_M"}, // 0.12%
			{9629.28041226083, "U_O_FullGhillie_ard"}, // 0.12%
			{9640.95174746157, "U_O_FullGhillie_lsh"}, // 0.12%
			{9652.62308266232, "U_O_FullGhillie_sard"}, // 0.12%
			{9664.29441786307, "U_I_FullGhillie_ard"}, // 0.12%
			{9675.96575306381, "U_I_FullGhillie_lsh"}, // 0.12%
			{9687.63708826456, "U_I_FullGhillie_sard"}, // 0.12%
			{9699.30842346531, "U_B_FullGhillie_sard"}, // 0.12%
			{9710.97975866605, "U_B_FullGhillie_ard"}, // 0.12%
			{9722.6510938668, "U_B_FullGhillie_lsh"}, // 0.12%
			{9733.94649842063, "20Rnd_762x51_Mag"}, // 0.11%
			{9744.64740799794, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.11%
			{9754.75382259874, "10Rnd_762x54_Mag"}, // 0.10%
			{9764.30150131935, "MMG_01_hex_F"}, // 0.10%
			{9773.84918003996, "MMG_01_tan_F"}, // 0.10%
			{9783.36109966424, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{9792.27852431201, "CUP_10Rnd_762x51_CZ750"}, // 0.09%
			{9801.19594895977, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.09%
			{9809.294426446, "muzzle_snds_B_khk_F"}, // 0.08%
			{9817.39290393223, "muzzle_snds_B_snd_F"}, // 0.08%
			{9825.12133862696, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{9832.28209766742, "CUP_launch_RPG7V"}, // 0.07%
			{9839.44285670787, "CUP_launch_M136"}, // 0.07%
			{9845.89530218471, "H_HelmetO_ghex_F"}, // 0.06%
			{9852.34774766155, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9858.80019313838, "H_HelmetO_ocamo"}, // 0.06%
			{9865.25263861522, "H_HelmetSpecO_blk"}, // 0.06%
			{9871.70508409205, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9878.15752956889, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9884.60997504573, "H_HelmetO_oucamo"}, // 0.06%
			{9891.06242052256, "H_CrewHelmetHeli_I"}, // 0.06%
			{9897.5148659994, "H_HelmetCrew_O"}, // 0.06%
			{9903.96731147624, "H_CrewHelmetHeli_B"}, // 0.06%
			{9910.41975695307, "H_HelmetCrew_I"}, // 0.06%
			{9916.87220242991, "H_PilotHelmetFighter_B"}, // 0.06%
			{9923.32464790674, "H_PilotHelmetFighter_O"}, // 0.06%
			{9929.77709338358, "H_PilotHelmetFighter_I"}, // 0.06%
			{9936.22953886042, "H_PilotHelmetHeli_B"}, // 0.06%
			{9942.68198433725, "H_PilotHelmetHeli_O"}, // 0.06%
			{9949.13442981409, "H_PilotHelmetHeli_I"}, // 0.06%
			{9955.58687529092, "H_CrewHelmetHeli_O"}, // 0.06%
			{9962.03932076776, "H_HelmetB_camo"}, // 0.06%
			{9968.4917662446, "H_HelmetCrew_B"}, // 0.06%
			{9974.43671600977, "7Rnd_408_Mag"}, // 0.06%
			{9980.38166577495, "5Rnd_127x108_Mag"}, // 0.06%
			{9985.13762558709, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9988.11010046967, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9991.08257535226, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9994.05505023485, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9997.02752511743, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9998.81101004698, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  optic_AMS_khk
	  Exile_Item_Can_Empty
	  U_B_T_FullGhillie_tna_F
	  V_PlateCarrierGL_mtp
	  muzzle_snds_338_green
	  U_O_T_FullGhillie_tna_F
	  U_O_T_Sniper_F
	  optic_AMS_snd
	  U_I_GhillieSuit
	  10Rnd_93x64_DMR_05_Mag
	  Exile_Item_ToiletPaper
	  optic_KHS_old
	  srifle_GM6_F
	  srifle_DMR_03_khaki_F
	  Exile_Item_Magazine02
	  srifle_GM6_F
	  optic_AMS_snd
	  V_PlateCarrierSpec_mtp
	  Exile_Item_PlasticBottleEmpty
	  U_I_GhillieSuit
	  optic_KHS_blk
	  Exile_Item_Can_Empty
	  muzzle_snds_B
	  Exile_Item_Magazine03
	  Exile_Item_Magazine03
	  muzzle_snds_B
	  U_B_GhillieSuit
	  muzzle_snds_338_green
	  Exile_Item_PlasticBottleEmpty
	  U_O_T_FullGhillie_tna_F
	  optic_KHS_hex
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  optic_AMS_snd
	  Exile_Item_ToiletPaper
	  10Rnd_93x64_DMR_05_Mag
	  optic_AMS_snd
	  V_PlateCarrierIAGL_oli
	  V_PlateCarrierSpec_blk
	  Exile_Item_ToiletPaper
	  optic_AMS_snd
	  Exile_Item_ToiletPaper
	  srifle_LRR_F
	  Exile_Item_ToiletPaper
	  U_I_GhillieSuit
	  V_PlateCarrier2_rgr_noflag_F
	  srifle_DMR_03_F
	  CUP_5Rnd_127x99_as50_M
	  muzzle_snds_93mmg_tan
	  srifle_DMR_02_camo_F
	  Exile_Item_Magazine02
	  U_I_GhillieSuit
	  Exile_Item_Magazine01
	  U_B_GhillieSuit
	  10Rnd_93x64_DMR_05_Mag
	  optic_KHS_hex
	  optic_AMS_khk
	  Exile_Item_Magazine04
	  Exile_Item_Magazine01
	  U_B_T_Sniper_F
	  optic_KHS_old
	  optic_AMS_snd
	  muzzle_snds_93mmg_tan
	  muzzle_snds_93mmg_tan
	  Exile_Item_ToiletPaper
	  srifle_DMR_06_olive_F
	  U_O_GhillieSuit
	  muzzle_snds_338_green
	  srifle_DMR_05_hex_F
	  srifle_DMR_02_F
	  muzzle_snds_338_green
	  10Rnd_93x64_DMR_05_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  10Rnd_338_Mag
	  Exile_Item_Magazine01
	  U_O_GhillieSuit
	  muzzle_snds_338_black
	  Exile_Item_PlasticBottleEmpty
	  optic_KHS_tan
	  optic_KHS_old
	  10Rnd_93x64_DMR_05_Mag
	  V_PlateCarrierSpec_mtp
	  muzzle_snds_93mmg_tan
	  muzzle_snds_B
	  muzzle_snds_338_green
	  5Rnd_127x108_APDS_Mag
	  150Rnd_93x64_Mag
	  V_PlateCarrierSpec_mtp
	  optic_KHS_blk
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  srifle_LRR_tna_F
	  Exile_Item_Can_Empty
	  CUP_5Rnd_127x99_as50_M
	  muzzle_snds_338_sand
	  Exile_Item_Can_Empty
	*/
	class SuperCrate
	{
		count = 100;
		half = 8880.56464096675;
		halfIndex = 50;
		sum = 9999.99999999999;
		items[] = 
		{
			{781.25, "Exile_Item_Can_Empty"}, // 7.81%
			{1562.5, "Exile_Item_ToiletPaper"}, // 7.81%
			{2343.75, "Exile_Item_PlasticBottleEmpty"}, // 7.81%
			{2552.08333333333, "U_I_GhillieSuit"}, // 2.08%
			{2760.41666666667, "muzzle_snds_338_black"}, // 2.08%
			{2968.75, "muzzle_snds_338_green"}, // 2.08%
			{3177.08333333333, "muzzle_snds_338_sand"}, // 2.08%
			{3385.41666666667, "muzzle_snds_93mmg"}, // 2.08%
			{3593.75, "muzzle_snds_93mmg_tan"}, // 2.08%
			{3802.08333333333, "U_B_GhillieSuit"}, // 2.08%
			{4010.41666666667, "U_O_GhillieSuit"}, // 2.08%
			{4218.75, "muzzle_snds_B"}, // 2.08%
			{4414.0625, "Exile_Item_Magazine04"}, // 1.95%
			{4609.375, "Exile_Item_Magazine03"}, // 1.95%
			{4804.6875, "Exile_Item_Magazine02"}, // 1.95%
			{5000, "Exile_Item_Magazine01"}, // 1.95%
			{5178.57142857143, "optic_KHS_old"}, // 1.79%
			{5357.14285714286, "optic_KHS_tan"}, // 1.79%
			{5535.71428571429, "optic_KHS_hex"}, // 1.79%
			{5714.28571428571, "optic_KHS_blk"}, // 1.79%
			{5892.85714285714, "optic_AMS_snd"}, // 1.79%
			{6071.42857142857, "optic_AMS_khk"}, // 1.79%
			{6250, "optic_AMS"}, // 1.79%
			{6420.45454545455, "10Rnd_93x64_DMR_05_Mag"}, // 1.70%
			{6571.6642228739, "srifle_LRR_tna_F"}, // 1.51%
			{6722.87390029326, "srifle_LRR_F"}, // 1.51%
			{6864.91935483871, "10Rnd_338_Mag"}, // 1.42%
			{7006.96480938417, "130Rnd_338_Mag"}, // 1.42%
			{7149.01026392962, "5Rnd_127x108_APDS_Mag"}, // 1.42%
			{7291.05571847508, "5Rnd_127x108_Mag"}, // 1.42%
			{7433.10117302053, "CUP_5Rnd_127x99_as50_M"}, // 1.42%
			{7575.14662756599, "150Rnd_93x64_Mag"}, // 1.42%
			{7688.78299120235, "CUP_M136_M"}, // 1.14%
			{7802.41935483871, "CUP_OG7_M"}, // 1.14%
			{7903.22580645162, "srifle_GM6_ghex_F"}, // 1.01%
			{8004.03225806452, "srifle_GM6_F"}, // 1.01%
			{8084.67741935484, "srifle_DMR_05_hex_F"}, // 0.81%
			{8165.32258064517, "srifle_DMR_05_blk_F"}, // 0.81%
			{8245.96774193549, "srifle_DMR_05_tan_F"}, // 0.81%
			{8316.53225806452, "srifle_DMR_04_Tan_F"}, // 0.71%
			{8387.09677419355, "srifle_DMR_04_F"}, // 0.71%
			{8447.5806451613, "srifle_DMR_02_F"}, // 0.60%
			{8508.06451612904, "srifle_DMR_02_camo_F"}, // 0.60%
			{8568.54838709678, "srifle_DMR_02_sniper_F"}, // 0.60%
			{8615.54086829979, "srifle_GM6_F"}, // 0.47%
			{8661.49675065273, "U_B_T_Sniper_F"}, // 0.46%
			{8707.45263300567, "U_B_T_Soldier_F"}, // 0.46%
			{8753.40851535861, "U_B_T_FullGhillie_tna_F"}, // 0.46%
			{8799.36439771155, "U_O_T_Sniper_F"}, // 0.46%
			{8845.32028006449, "U_O_T_FullGhillie_tna_F"}, // 0.46%
			{8880.56464096675, "srifle_DMR_02_camo_F"}, // 0.35%
			{8915.809001869, "srifle_DMR_02_F"}, // 0.35%
			{8951.05336277126, "CUP_srifle_M107_Base"}, // 0.35%
			{8981.29529825513, "srifle_DMR_03_woodland_F"}, // 0.30%
			{9011.537233739, "srifle_DMR_03_tan_F"}, // 0.30%
			{9041.77916922287, "srifle_DMR_06_camo_F"}, // 0.30%
			{9072.02110470674, "srifle_DMR_03_F"}, // 0.30%
			{9102.26304019061, "srifle_DMR_06_olive_F"}, // 0.30%
			{9132.50497567448, "srifle_DMR_03_khaki_F"}, // 0.30%
			{9162.26688043639, "V_TacVest_gen_F"}, // 0.30%
			{9192.02878519829, "V_PlateCarrier2_rgr_noflag_F"}, // 0.30%
			{9221.7906899602, "V_PlateCarrier1_rgr_noflag_F"}, // 0.30%
			{9251.5525947221, "V_BandollierB_ghex_F"}, // 0.30%
			{9281.31449948401, "V_PlateCarrierGL_rgr"}, // 0.30%
			{9311.07640424591, "V_HarnessO_ghex_F"}, // 0.30%
			{9340.83830900782, "V_HarnessOGL_ghex_F"}, // 0.30%
			{9370.60021376972, "V_PlateCarrierGL_blk"}, // 0.30%
			{9400.36211853163, "V_PlateCarrierGL_mtp"}, // 0.30%
			{9430.12402329353, "V_PlateCarrierIAGL_dgtl"}, // 0.30%
			{9459.88592805544, "V_PlateCarrierSpec_blk"}, // 0.30%
			{9489.64783281734, "V_PlateCarrierSpec_mtp"}, // 0.30%
			{9519.40973757924, "V_PlateCarrierSpec_rgr"}, // 0.30%
			{9549.17164234115, "V_PlateCarrierIAGL_oli"}, // 0.30%
			{9578.93354710305, "V_TacChestrig_oli_F"}, // 0.30%
			{9608.69545186496, "V_TacChestrig_cbr_F"}, // 0.30%
			{9638.45735662686, "V_PlateCarrier1_tna_F"}, // 0.30%
			{9668.21926138877, "V_PlateCarrier2_tna_F"}, // 0.30%
			{9697.98116615067, "V_PlateCarrierSpec_tna_F"}, // 0.30%
			{9727.74307091258, "V_PlateCarrierGL_tna_F"}, // 0.30%
			{9757.50497567448, "V_TacChestrig_grn_F"}, // 0.30%
			{9781.00121627598, "srifle_DMR_05_hex_F"}, // 0.23%
			{9804.49745687749, "srifle_DMR_05_blk_F"}, // 0.23%
			{9827.99369747899, "srifle_DMR_05_tan_F"}, // 0.23%
			{9842.0914418399, "MMG_02_black_F"}, // 0.14%
			{9856.1891862008, "MMG_02_camo_F"}, // 0.14%
			{9870.2869305617, "MMG_02_sand_F"}, // 0.14%
			{9884.3846749226, "CUP_srifle_AS50"}, // 0.14%
			{9893.7831711632, "MMG_01_tan_F"}, // 0.09%
			{9903.18166740381, "MMG_01_hex_F"}, // 0.09%
			{9912.37284387439, "U_B_FullGhillie_lsh"}, // 0.09%
			{9921.56402034498, "U_B_FullGhillie_sard"}, // 0.09%
			{9930.75519681557, "U_O_FullGhillie_ard"}, // 0.09%
			{9939.94637328616, "U_O_FullGhillie_lsh"}, // 0.09%
			{9949.13754975674, "U_O_FullGhillie_sard"}, // 0.09%
			{9958.32872622733, "U_I_FullGhillie_lsh"}, // 0.09%
			{9967.51990269792, "U_I_FullGhillie_sard"}, // 0.09%
			{9976.7110791685, "U_B_FullGhillie_ard"}, // 0.09%
			{9985.90225563909, "U_I_FullGhillie_ard"}, // 0.09%
			{9992.95112781954, "CUP_launch_M136"}, // 0.07%
			{9999.99999999999, "CUP_launch_RPG7V"} // 0.07%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_srifle_M110
	  muzzle_snds_H_MG_blk_F
	  ItemCompass
	  arifle_Mk20C_F
	  arifle_CTARS_blk_F
	  CUP_optic_LeupoldM3LR
	  CUP_30Rnd_762x39_AK47_M
	  5Rnd_127x108_Mag
	  muzzle_snds_65_TI_blk_F
	  muzzle_snds_B
	  CUP_optic_SB_11_4x20_PM
	  CUP_arifle_Mk20
	  U_B_CTRG_Soldier_urb_2_F
	  CUP_30Rnd_Sa58_M
	  arifle_SPAR_03_khk_F
	  srifle_DMR_01_F
	  CUP_arifle_Sa58P_des
	  muzzle_snds_65_TI_blk_F
	  CUP_arifle_G36C
	  CUP_20Rnd_762x51_FNFAL_M
	  optic_KHS_hex
	  optic_MRCO
	  CUP_arifle_FNFAL
	  V_PlateCarrier2_rgr
	  V_PlateCarrierGL_rgr
	  V_PlateCarrierSpec_rgr
	  U_I_GhillieSuit
	  B_Carryall_mcamo
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
	  optic_DMS
	  Exile_Weapon_SVDCamo
	  U_B_GEN_Soldier_F
	  optic_SOS
	  CUP_arifle_Mk20
	  optic_ERCO_khk_F
	  CUP_arifle_Mk17_STD_EGLM
	  CUP_optic_HoloBlack
	  optic_ERCO_khk_F
	  U_O_SpecopsUniform_blk
	  arifle_ARX_blk_F
	  CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
	  optic_ERCO_snd_F
	  CUP_srifle_M14
	  muzzle_snds_m_snd_F
	  CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
	  muzzle_snds_B
	  arifle_SPAR_01_GL_khk_F
	  optic_NVS
	  CUP_muzzle_snds_G36_black
	  B_Carryall_cbr
	  CUP_arifle_CZ805_A1
	  CUP_srifle_SVD_des
	  CUP_optic_ACOG
	  CUP_srifle_SVD
	  B_Carryall_ocamo
	  CUP_optic_SB_11_4x20_PM
	  U_B_CTRG_Soldier_urb_3_F
	  muzzle_snds_H_MG_blk_F
	  V_PlateCarrierIA2_dgtl
	  CUP_20Rnd_9x39_SP5_VSS_M
	  CUP_arifle_AK47
	  U_B_CombatUniform_mcam
	  optic_ERCO_snd_F
	  B_Carryall_cbr
	  B_Carryall_ghex_F
	  CUP_arifle_FNFAL_railed
	  CUP_arifle_L86A2
	  B_Carryall_oucamo
	  CUP_optic_LeupoldM3LR
	  Exile_Magazine_5Rnd_22LR
	  100Rnd_580x42_Mag_Tracer_F
	  CUP_20Rnd_762x51_L129_M
	  optic_Holosight
	  ItemCompass
	  ItemCompass
	  muzzle_snds_58_blk_F
	  30Rnd_556x45_Stanag_green
	  U_O_GhillieSuit
	  CUP_optic_SB_11_4x20_PM
	  optic_KHS_blk
	  U_B_CTRG_Soldier_2_F
	  U_B_CombatUniform_mcam_tshirt
	  CUP_optic_PechenegScope
	  CUP_arifle_G36C
	  CUP_srifle_L129A1
	  IEDLandSmall_Remote_Mag
	  CUP_20Rnd_762x51_L129_M
	  srifle_DMR_03_tan_F
	  CUP_arifle_AKM
	  CUP_arifle_G36C
	  CUP_10Rnd_762x51_CZ750
	  Rangefinder
	  CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
	  20Rnd_650x39_Cased_Mag_F
	  CUP_srifle_M14
	  muzzle_snds_M
	  ItemCompass
	  CUP_muzzle_snds_G36_black
	  CUP_20Rnd_762x51_B_M110
	  Rangefinder
	*/
	class ChopperCrash
	{
		count = 411;
		half = 7828.96803244417;
		halfIndex = 205;
		sum = 9999.99999999999;
		items[] = 
		{
			{359.324469996407, "ItemCompass"}, // 3.59%
			{538.98670499461, "Rangefinder"}, // 1.80%
			{697.918682108405, "CUP_arifle_FNFAL"}, // 1.59%
			{821.885624257166, "DemoCharge_Remote_Mag"}, // 1.24%
			{927.840275666363, "CUP_srifle_M14"}, // 1.06%
			{1033.79492707556, "CUP_arifle_FNFAL_railed"}, // 1.06%
			{1139.74957848476, "CUP_arifle_Mk17_STD_EGLM"}, // 1.06%
			{1224.51329961211, "CUP_arifle_Mk20"}, // 0.85%
			{1309.27702073947, "CUP_arifle_Mk17_STD_FG"}, // 0.85%
			{1391.92164883865, "SatchelCharge_Remote_Mag"}, // 0.83%
			{1472.94579403391, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.81%
			{1553.96993922918, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.81%
			{1634.99408442445, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.81%
			{1716.01822961972, "CUP_20Rnd_762x51_B_SCAR"}, // 0.81%
			{1797.04237481499, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.81%
			{1878.06652001025, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.81%
			{1959.09066520552, "CUP_20Rnd_762x51_DMR"}, // 0.81%
			{2033.25892119196, "CUP_srifle_M110"}, // 0.74%
			{2105.12381519124, "optic_KHS_blk"}, // 0.72%
			{2176.98870919052, "optic_SOS"}, // 0.72%
			{2248.8536031898, "optic_AMS"}, // 0.72%
			{2320.71849718909, "optic_LRPS"}, // 0.72%
			{2392.58339118837, "optic_DMS"}, // 0.72%
			{2464.44828518765, "muzzle_snds_B"}, // 0.72%
			{2536.31317918693, "CUP_optic_ACOG"}, // 0.72%
			{2608.17807318621, "optic_KHS_hex"}, // 0.72%
			{2680.04296718549, "CUP_optic_SB_11_4x20_PM"}, // 0.72%
			{2751.90786118477, "CUP_muzzle_snds_M14"}, // 0.72%
			{2823.77275518405, "CUP_optic_LeupoldM3LR"}, // 0.72%
			{2888.59207134027, "CUP_20Rnd_762x51_L129_M"}, // 0.65%
			{2953.41138749648, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.65%
			{3018.2307036527, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.65%
			{3083.05001980891, "CUP_20Rnd_762x51_B_M110"}, // 0.65%
			{3140.54193500834, "O_NVGoggles_ghex_F"}, // 0.57%
			{3198.03385020776, "O_NVGoggles_urb_F"}, // 0.57%
			{3255.52576540719, "O_NVGoggles_hex_F"}, // 0.57%
			{3313.01768060661, "NVGoggles"}, // 0.57%
			{3370.50959580604, "NVGoggles_tna_F"}, // 0.57%
			{3423.48692151064, "CUP_srifle_L129A1_HG"}, // 0.53%
			{3476.46424721523, "CUP_srifle_L129A1"}, // 0.53%
			{3529.15713090263, "B_Carryall_cbr"}, // 0.53%
			{3581.85001459002, "B_Carryall_ghex_F"}, // 0.53%
			{3631.76958860965, "B_Carryall_khk"}, // 0.50%
			{3681.68916262929, "B_Carryall_oli"}, // 0.50%
			{3723.28880764565, "B_Carryall_ocamo"}, // 0.42%
			{3764.88845266201, "B_Carryall_mcamo"}, // 0.42%
			{3806.48809767838, "B_Carryall_oucamo"}, // 0.42%
			{3847.81041172796, "V_PlateCarrier1_rgr"}, // 0.41%
			{3889.13272577755, "APERSBoundingMine_Range_Mag"}, // 0.41%
			{3930.45503982714, "V_PlateCarrier1_blk"}, // 0.41%
			{3971.77735387672, "U_B_GhillieSuit"}, // 0.41%
			{4013.09966792631, "U_O_GhillieSuit"}, // 0.41%
			{4054.4219819759, "V_PlateCarrier2_rgr"}, // 0.41%
			{4095.74429602548, "IEDUrbanSmall_Remote_Mag"}, // 0.41%
			{4137.06661007507, "IEDLandSmall_Remote_Mag"}, // 0.41%
			{4178.38892412466, "U_I_GhillieSuit"}, // 0.41%
			{4219.71123817424, "V_PlateCarrier3_rgr"}, // 0.41%
			{4261.03355222383, "V_PlateCarrierIA2_dgtl"}, // 0.41%
			{4302.35586627342, "V_PlateCarrierIA1_dgtl"}, // 0.41%
			{4343.678180323, "APERSMine_Range_Mag"}, // 0.41%
			{4385.00049437259, "V_PlateCarrierIAGL_dgtl"}, // 0.41%
			{4426.32280842218, "V_PlateCarrierSpec_rgr"}, // 0.41%
			{4467.64512247176, "APERSTripMine_Wire_Mag"}, // 0.41%
			{4508.96743652135, "V_PlateCarrierGL_rgr"}, // 0.41%
			{4544.89988352099, "CUP_muzzle_snds_M110"}, // 0.36%
			{4577.40057996448, "20Rnd_650x39_Cased_Mag_F"}, // 0.33%
			{4609.78000515259, "acc_flashlight"}, // 0.32%
			{4640.73304938449, "CUP_5Rnd_762x51_M24"}, // 0.31%
			{4671.68609361639, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.31%
			{4702.63913784829, "CUP_10Rnd_762x54_SVD_M"}, // 0.31%
			{4733.59218208019, "CUP_srifle_SVD_des"}, // 0.31%
			{4763.56691766021, "srifle_EBR_F"}, // 0.30%
			{4793.54165324022, "srifle_DMR_01_F"}, // 0.30%
			{4823.2842017404, "30Rnd_65x39_caseless_green"}, // 0.30%
			{4853.02675024058, "30Rnd_556x45_Stanag_red"}, // 0.30%
			{4882.76929874076, "30Rnd_556x45_Stanag_green"}, // 0.30%
			{4912.51184724094, "30Rnd_556x45_Stanag"}, // 0.30%
			{4941.91723926125, "20Rnd_762x51_Mag"}, // 0.29%
			{4969.77497906996, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.28%
			{4997.60866210854, "CUP_srifle_SVD"}, // 0.28%
			{5024.7943950359, "U_B_CTRG_Soldier_urb_2_F"}, // 0.27%
			{5051.98012796326, "U_B_CTRG_3"}, // 0.27%
			{5079.16586089062, "U_B_CombatUniform_mcam"}, // 0.27%
			{5106.35159381798, "U_B_CombatUniform_mcam_tshirt"}, // 0.27%
			{5133.53732674534, "U_B_CombatUniform_mcam_vest"}, // 0.27%
			{5160.7230596727, "U_B_CombatUniform_mcam_worn"}, // 0.27%
			{5187.90879260006, "U_B_T_Soldier_AR_F"}, // 0.27%
			{5215.09452552742, "U_B_CTRG_2"}, // 0.27%
			{5242.28025845478, "U_B_CTRG_Soldier_2_F"}, // 0.27%
			{5269.46599138214, "U_B_CTRG_Soldier_3_F"}, // 0.27%
			{5296.6517243095, "U_B_CTRG_Soldier_urb_1_F"}, // 0.27%
			{5323.83745723686, "U_O_T_Officer_F"}, // 0.27%
			{5351.02319016422, "U_O_T_Soldier_F"}, // 0.27%
			{5378.20892309158, "U_B_GEN_Commander_F"}, // 0.27%
			{5405.39465601894, "U_B_GEN_Soldier_F"}, // 0.27%
			{5432.5803889463, "U_B_CTRG_Soldier_urb_3_F"}, // 0.27%
			{5459.76612187366, "U_B_T_Soldier_SL_F"}, // 0.27%
			{5486.95185480102, "U_B_CTRG_1"}, // 0.27%
			{5514.13758772838, "U_B_CTRG_Soldier_F"}, // 0.27%
			{5540.90074449625, "CUP_srifle_M40A3"}, // 0.27%
			{5567.66390126411, "CUP_srifle_M24_des"}, // 0.27%
			{5594.42705803198, "CUP_srifle_M24_wdl"}, // 0.27%
			{5620.73714562909, "10Rnd_762x54_Mag"}, // 0.26%
			{5645.49958101461, "CUP_5Rnd_762x67_G22"}, // 0.25%
			{5668.71436418854, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.23%
			{5691.92914736246, "CUP_10Rnd_762x51_CZ750"}, // 0.23%
			{5715.05730821111, "optic_MRCO"}, // 0.23%
			{5738.18546905976, "optic_DMS_ghex_F"}, // 0.23%
			{5761.31362990841, "optic_ERCO_blk_F"}, // 0.23%
			{5784.44179075706, "optic_ERCO_khk_F"}, // 0.23%
			{5807.56995160571, "optic_ERCO_snd_F"}, // 0.23%
			{5830.69811245436, "muzzle_snds_65_TI_blk_F"}, // 0.23%
			{5853.82627330301, "muzzle_snds_65_TI_hex_F"}, // 0.23%
			{5876.95443415166, "muzzle_snds_58_wdm_F"}, // 0.23%
			{5900.08259500031, "optic_Holosight_blk_F"}, // 0.23%
			{5923.21075584896, "CUP_optic_PSO_1"}, // 0.23%
			{5946.33891669761, "muzzle_snds_65_TI_ghex_F"}, // 0.23%
			{5969.46707754626, "CUP_optic_ACOG"}, // 0.23%
			{5992.59523839491, "muzzle_snds_H_MG_blk_F"}, // 0.23%
			{6015.72339924356, "muzzle_snds_H_MG_khk_F"}, // 0.23%
			{6038.85156009221, "CUP_optic_CompM2_Black"}, // 0.23%
			{6061.97972094086, "optic_Arco"}, // 0.23%
			{6085.10788178951, "optic_Arco_blk_F"}, // 0.23%
			{6108.23604263816, "acc_pointer_IR"}, // 0.23%
			{6131.36420348681, "optic_Arco_ghex_F"}, // 0.23%
			{6154.49236433546, "optic_Holosight_khk_F"}, // 0.23%
			{6177.62052518411, "optic_Hamr"}, // 0.23%
			{6200.74868603276, "optic_Hamr_khk_F"}, // 0.23%
			{6223.87684688141, "CUP_muzzle_snds_XM8"}, // 0.23%
			{6247.00500773006, "CUP_optic_SUSAT"}, // 0.23%
			{6270.13316857871, "optic_DMS"}, // 0.23%
			{6293.26132942736, "optic_Holosight"}, // 0.23%
			{6316.38949027601, "CUP_optic_SB_11_4x20_PM"}, // 0.23%
			{6339.51765112466, "CUP_optic_AN_PVS_4"}, // 0.23%
			{6362.64581197331, "CUP_optic_TrijiconRx01_desert"}, // 0.23%
			{6385.77397282196, "CUP_optic_HoloBlack"}, // 0.23%
			{6408.90213367061, "CUP_optic_PechenegScope"}, // 0.23%
			{6432.03029451926, "CUP_optic_CompM2_Desert"}, // 0.23%
			{6455.1584553679, "muzzle_snds_M"}, // 0.23%
			{6478.28661621655, "CUP_optic_HoloDesert"}, // 0.23%
			{6501.4147770652, "muzzle_snds_H_khk_F"}, // 0.23%
			{6524.54293791385, "muzzle_snds_H_snd_F"}, // 0.23%
			{6547.6710987625, "muzzle_snds_H"}, // 0.23%
			{6570.79925961115, "muzzle_snds_m_khk_F"}, // 0.23%
			{6593.9274204598, "muzzle_snds_m_snd_F"}, // 0.23%
			{6617.05558130845, "CUP_optic_RCO"}, // 0.23%
			{6640.1837421571, "CUP_optic_CompM4"}, // 0.23%
			{6663.31190300575, "CUP_muzzle_PBS4"}, // 0.23%
			{6686.4400638544, "CUP_optic_PSO_3"}, // 0.23%
			{6709.56822470305, "CUP_optic_Kobra"}, // 0.23%
			{6732.6963855517, "CUP_muzzle_Bizon"}, // 0.23%
			{6755.82454640035, "muzzle_snds_58_blk_F"}, // 0.23%
			{6778.952707249, "CUP_muzzle_PB6P9"}, // 0.23%
			{6801.49215127605, "Exile_Weapon_AK74"}, // 0.23%
			{6824.0315953031, "Exile_Weapon_AK47"}, // 0.23%
			{6846.57103933014, "Exile_Weapon_AK74_GL"}, // 0.23%
			{6869.11048335719, "Exile_Weapon_AK107_GL"}, // 0.23%
			{6891.64992738424, "Exile_Weapon_AK107"}, // 0.23%
			{6914.18937141129, "Exile_Weapon_LeeEnfield"}, // 0.23%
			{6936.00057364475, "20Rnd_556x45_UW_mag"}, // 0.22%
			{6957.74915998664, "U_I_pilotCoveralls"}, // 0.22%
			{6979.49774632853, "U_I_HeliPilotCoveralls"}, // 0.22%
			{7001.24633267042, "U_I_CombatUniform"}, // 0.22%
			{7022.9949190123, "U_I_CombatUniform_tshirt"}, // 0.22%
			{7044.74350535419, "U_I_CombatUniform_shortsleeve"}, // 0.22%
			{7066.49209169608, "U_B_HeliPilotCoveralls"}, // 0.22%
			{7088.24067803797, "U_O_PilotCoveralls"}, // 0.22%
			{7109.98926437986, "U_B_PilotCoveralls"}, // 0.22%
			{7131.39978979415, "srifle_DMR_03_F"}, // 0.21%
			{7152.81031520844, "srifle_DMR_03_tan_F"}, // 0.21%
			{7174.22084062274, "srifle_DMR_03_woodland_F"}, // 0.21%
			{7195.63136603703, "srifle_DMR_06_camo_F"}, // 0.21%
			{7217.04189145132, "srifle_DMR_06_olive_F"}, // 0.21%
			{7238.45241686562, "CUP_srifle_VSSVintorez"}, // 0.21%
			{7259.86294227991, "srifle_DMR_03_khaki_F"}, // 0.21%
			{7280.5240993047, "V_PlateCarrierL_CTRG"}, // 0.21%
			{7301.1852563295, "V_PlateCarrierH_CTRG"}, // 0.21%
			{7321.47075595384, "Exile_Weapon_CZ550"}, // 0.20%
			{7341.59023470457, "CUP_5Rnd_86x70_L115A1"}, // 0.20%
			{7360.09276338349, "CUP_muzzle_snds_G36_black"}, // 0.19%
			{7378.59529206241, "CUP_muzzle_snds_L85"}, // 0.19%
			{7397.09782074133, "CUP_optic_Elcan"}, // 0.19%
			{7415.60034942025, "CUP_muzzle_snds_Mk12"}, // 0.19%
			{7433.7992960224, "srifle_DMR_07_ghex_F"}, // 0.18%
			{7451.99824262455, "srifle_DMR_07_blk_F"}, // 0.18%
			{7470.1971892267, "srifle_DMR_07_hex_F"}, // 0.18%
			{7488.22874444834, "arifle_MXC_khk_F"}, // 0.18%
			{7506.26029966998, "CUP_arifle_AK74M"}, // 0.18%
			{7524.29185489161, "arifle_MX_khk_F"}, // 0.18%
			{7542.32341011325, "CUP_arifle_AKM"}, // 0.18%
			{7560.35496533489, "CUP_arifle_AK107_GL"}, // 0.18%
			{7578.38652055653, "CUP_arifle_AK107_kobra"}, // 0.18%
			{7596.41807577817, "arifle_MXC_F"}, // 0.18%
			{7614.4496309998, "arifle_MX_F"}, // 0.18%
			{7632.48118622144, "arifle_TRG21_F"}, // 0.18%
			{7650.51274144308, "arifle_TRG20_F"}, // 0.18%
			{7668.35827054319, "Exile_Magazine_20Rnd_9x39"}, // 0.18%
			{7686.2037996433, "Exile_Magazine_10Rnd_9x39"}, // 0.18%
			{7704.04932874341, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.18%
			{7721.89485784352, "30Rnd_762x39_Mag_Green_F"}, // 0.18%
			{7739.74038694362, "30Rnd_762x39_Mag_Tracer_F"}, // 0.18%
			{7757.58591604373, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.18%
			{7775.43144514384, "30Rnd_762x39_AK47_M"}, // 0.18%
			{7793.27697424395, "30Rnd_545x39_Mag_F"}, // 0.18%
			{7811.12250334406, "30Rnd_545x39_Mag_Green_F"}, // 0.18%
			{7828.96803244417, "30Rnd_545x39_Mag_Tracer_F"}, // 0.18%
			{7846.81356154428, "30Rnd_580x42_Mag_F"}, // 0.18%
			{7864.65909064439, "30Rnd_762x39_Mag_F"}, // 0.18%
			{7882.5046197445, "Exile_Magazine_10Rnd_762x54"}, // 0.18%
			{7900.35014884461, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.18%
			{7918.19567794472, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.18%
			{7936.04120704483, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.18%
			{7953.88673614493, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.18%
			{7971.73226524504, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.18%
			{7989.57779434515, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.18%
			{8007.42332344526, "30Rnd_65x39_caseless_mag"}, // 0.18%
			{8025.26885254537, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.18%
			{8043.11438164548, "Exile_Magazine_5Rnd_22LR"}, // 0.18%
			{8060.95991074559, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.18%
			{8078.8054398457, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.18%
			{8096.65096894581, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.18%
			{8114.49649804592, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.18%
			{8132.34202714603, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.18%
			{8150.18755624614, "30Rnd_580x42_Mag_Tracer_F"}, // 0.18%
			{8168.03308534624, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.18%
			{8185.87861444635, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.18%
			{8203.72414354646, "100Rnd_580x42_Mag_F"}, // 0.18%
			{8221.56967264657, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.18%
			{8239.41520174668, "150Rnd_556x45_Drum_Mag_F"}, // 0.18%
			{8257.26073084679, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.18%
			{8275.1062599469, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.18%
			{8292.95178904701, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.18%
			{8310.79731814712, "CUP_30Rnd_556x45_G36"}, // 0.18%
			{8328.64284724723, "CUP_30Rnd_556x45_Stanag"}, // 0.18%
			{8346.48837634734, "CUP_30Rnd_545x39_AK_M"}, // 0.18%
			{8364.33390544745, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.18%
			{8382.17943454756, "20Rnd_762x51_Mag"}, // 0.18%
			{8400.02496364767, "100Rnd_580x42_Mag_Tracer_F"}, // 0.18%
			{8416.66482165422, "B_Bergen_Base_F"}, // 0.17%
			{8433.30467966077, "B_Bergen_mcamo_F"}, // 0.17%
			{8449.94453766731, "B_Bergen_tna_F"}, // 0.17%
			{8466.58439567386, "B_Bergen_hex_F"}, // 0.17%
			{8483.2242536804, "B_Bergen_dgtl_F"}, // 0.17%
			{8499.53569343682, "U_B_SpecopsUniform_sgg"}, // 0.16%
			{8515.59358749754, "CUP_srifle_CZ750"}, // 0.16%
			{8531.45628003097, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.16%
			{8547.3189725644, "Exile_Magazine_10Rnd_303"}, // 0.16%
			{8563.18166509783, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.16%
			{8579.04435763126, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.16%
			{8594.90705016469, "CUP_30Rnd_Sa58_M"}, // 0.16%
			{8610.68466098362, "CUP_srifle_Mk12SPR"}, // 0.16%
			{8626.46227180255, "CUP_arifle_Sa58P_des"}, // 0.16%
			{8642.23988262149, "CUP_arifle_AK47"}, // 0.16%
			{8658.01749344042, "arifle_Mk20_F"}, // 0.16%
			{8673.79510425936, "CUP_arifle_M16A2"}, // 0.16%
			{8689.57271507829, "CUP_arifle_AK107"}, // 0.16%
			{8705.35032589722, "CUP_arifle_M4A1"}, // 0.16%
			{8721.12793671616, "CUP_arifle_M4A1_camo"}, // 0.16%
			{8736.90554753509, "arifle_Mk20C_F"}, // 0.16%
			{8752.38206965104, "7Rnd_408_Mag"}, // 0.15%
			{8767.85859176699, "5Rnd_127x108_Mag"}, // 0.15%
			{8781.77543328628, "CUP_srifle_G22_des"}, // 0.14%
			{8795.65528925303, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.14%
			{8809.53514521979, "CUP_30Rnd_762x39_AK47_M"}, // 0.14%
			{8823.41500118654, "CUP_20Rnd_556x45_Stanag"}, // 0.14%
			{8836.93866760277, "Exile_Weapon_SVD"}, // 0.14%
			{8850.46233401899, "Exile_Weapon_SVDCamo"}, // 0.14%
			{8863.98600043522, "Exile_Weapon_VSSVintorez"}, // 0.14%
			{8877.50966685145, "CUP_arifle_M4A3_desert"}, // 0.14%
			{8891.03333326768, "CUP_arifle_CZ805_A1"}, // 0.14%
			{8904.5569996839, "arifle_Katiba_GL_F"}, // 0.14%
			{8918.08066610013, "CUP_arifle_CZ805_B"}, // 0.14%
			{8931.60433251636, "CUP_arifle_AK74"}, // 0.14%
			{8945.12799893259, "CUP_arifle_Sa58P"}, // 0.14%
			{8958.65166534881, "arifle_MXM_F"}, // 0.14%
			{8972.17533176504, "CUP_arifle_XM8_Railed"}, // 0.14%
			{8985.69899818127, "arifle_Katiba_F"}, // 0.14%
			{8998.08021587403, "5Rnd_127x108_APDS_Mag"}, // 0.12%
			{9009.9772352741, "CUP_100Rnd_556x45_BetaCMag"}, // 0.12%
			{9021.54131569843, "CUP_acc_ANPEQ_2_camo"}, // 0.12%
			{9033.10539612275, "CUP_acc_ANPEQ_2_grey"}, // 0.12%
			{9044.66947654708, "optic_NVS"}, // 0.12%
			{9056.2335569714, "CUP_acc_ANPEQ_2_desert"}, // 0.12%
			{9067.50327898492, "arifle_ARX_hex_F"}, // 0.11%
			{9078.77300099845, "arifle_SPAR_03_blk_F"}, // 0.11%
			{9090.04272301197, "CUP_arifle_L85A2_NG"}, // 0.11%
			{9101.31244502549, "CUP_arifle_L86A2"}, // 0.11%
			{9112.58216703902, "arifle_SPAR_03_snd_F"}, // 0.11%
			{9123.85188905254, "arifle_SPAR_03_khk_F"}, // 0.11%
			{9135.12161106606, "arifle_CTAR_ghex_F"}, // 0.11%
			{9146.39133307959, "arifle_SPAR_02_snd_F"}, // 0.11%
			{9157.66105509311, "arifle_SPAR_02_khk_F"}, // 0.11%
			{9168.93077710663, "arifle_CTAR_hex_F"}, // 0.11%
			{9180.20049912016, "arifle_SPAR_02_blk_F"}, // 0.11%
			{9191.47022113368, "arifle_SPAR_01_GL_khk_F"}, // 0.11%
			{9202.7399431472, "arifle_SPAR_01_GL_blk_F"}, // 0.11%
			{9214.00966516073, "arifle_SPAR_01_snd_F"}, // 0.11%
			{9225.27938717425, "arifle_SPAR_01_khk_F"}, // 0.11%
			{9236.54910918777, "arifle_SPAR_01_blk_F"}, // 0.11%
			{9247.8188312013, "arifle_CTARS_hex_F"}, // 0.11%
			{9259.08855321482, "arifle_CTARS_ghex_F"}, // 0.11%
			{9270.35827522834, "arifle_SPAR_01_GL_snd_F"}, // 0.11%
			{9281.62799724187, "CUP_arifle_L85A2_GL"}, // 0.11%
			{9292.89771925539, "CUP_arifle_G36A"}, // 0.11%
			{9304.16744126891, "arifle_CTAR_blk_F"}, // 0.11%
			{9315.43716328244, "arifle_AK12_F"}, // 0.11%
			{9326.70688529596, "arifle_AK12_GL_F"}, // 0.11%
			{9337.97660730948, "CUP_arifle_Mk16_SV"}, // 0.11%
			{9349.24632932301, "arifle_AKM_F"}, // 0.11%
			{9360.51605133653, "CUP_arifle_Mk16_CQC"}, // 0.11%
			{9371.78577335005, "arifle_AKM_FL_F"}, // 0.11%
			{9383.05549536358, "arifle_AKS_F"}, // 0.11%
			{9394.3252173771, "arifle_CTARS_blk_F"}, // 0.11%
			{9405.59493939062, "CUP_arifle_AKS74U"}, // 0.11%
			{9416.86466140415, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.11%
			{9428.13438341767, "CUP_arifle_CZ805_GL"}, // 0.11%
			{9439.40410543119, "CUP_arifle_AK74_GL"}, // 0.11%
			{9450.67382744472, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.11%
			{9461.94354945824, "arifle_ARX_blk_F"}, // 0.11%
			{9473.21327147176, "arifle_ARX_ghex_F"}, // 0.11%
			{9484.48299348529, "CUP_arifle_G36C"}, // 0.11%
			{9495.75271549881, "CUP_arifle_Mk16_STD_EGLM"}, // 0.11%
			{9507.02243751233, "arifle_CTAR_GL_blk_F"}, // 0.11%
			{9517.89673068328, "U_O_V_Soldier_Viper_hex_F"}, // 0.11%
			{9528.77102385422, "U_O_V_Soldier_Viper_F"}, // 0.11%
			{9539.64531702516, "U_O_SpecopsUniform_blk"}, // 0.11%
			{9550.51961019611, "U_O_SpecopsUniform_ocamo"}, // 0.11%
			{9561.39390336705, "U_O_CombatUniform_oucamo"}, // 0.11%
			{9572.268196538, "U_O_CombatUniform_ocamo"}, // 0.11%
			{9583.14248970894, "U_I_Wetsuit"}, // 0.11%
			{9594.01678287988, "U_O_Wetsuit"}, // 0.11%
			{9604.89107605083, "U_B_Wetsuit"}, // 0.11%
			{9615.76536922177, "U_I_OfficerUniform"}, // 0.11%
			{9626.63966239272, "U_O_OfficerUniform_ocamo"}, // 0.11%
			{9636.55384522611, "10Rnd_50BW_Mag_F"}, // 0.10%
			{9645.56962283693, "arifle_MX_GL_F"}, // 0.09%
			{9654.58540044775, "arifle_TRG21_GL_F"}, // 0.09%
			{9663.60117805857, "arifle_Mk20_GL_F"}, // 0.09%
			{9672.61695566939, "CUP_arifle_Sa58RIS2_camo"}, // 0.09%
			{9681.6327332802, "CUP_arifle_Sa58RIS2_gl"}, // 0.09%
			{9690.64851089102, "CUP_arifle_Sa58RIS1"}, // 0.09%
			{9699.66428850184, "arifle_MX_GL_khk_F"}, // 0.09%
			{9708.68006611266, "CUP_arifle_Mk16_CQC_FG"}, // 0.09%
			{9716.41832717064, "CUP_10Rnd_127x99_M107"}, // 0.08%
			{9724.15658822861, "CUP_5Rnd_127x99_as50_M"}, // 0.08%
			{9731.89484928659, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.08%
			{9739.63311034456, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.08%
			{9746.39494355268, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.07%
			{9753.15677676079, "arifle_MX_Black_F"}, // 0.07%
			{9759.91860996891, "arifle_MX_GL_Black_F"}, // 0.07%
			{9766.68044317702, "arifle_MXC_Black_F"}, // 0.07%
			{9773.44227638514, "Exile_Weapon_DMR"}, // 0.07%
			{9780.20410959325, "arifle_MXM_khk_F"}, // 0.07%
			{9786.96594280137, "arifle_MXM_Black_F"}, // 0.07%
			{9793.17982461333, "srifle_GM6_F"}, // 0.06%
			{9798.81468562009, "10Rnd_93x64_DMR_05_Mag"}, // 0.06%
			{9804.16731697367, "CUP_srifle_AWM_des"}, // 0.05%
			{9809.51994832724, "CUP_srifle_AWM_wdl"}, // 0.05%
			{9814.21566583287, "10Rnd_338_Mag"}, // 0.05%
			{9818.91138333851, "CUP_5Rnd_127x99_as50_M"}, // 0.05%
			{9823.60710084414, "150Rnd_93x64_Mag"}, // 0.05%
			{9828.30281834978, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9832.99853585541, "5Rnd_127x108_Mag"}, // 0.05%
			{9837.69425336105, "130Rnd_338_Mag"}, // 0.05%
			{9842.35466472002, "srifle_DMR_02_F"}, // 0.05%
			{9847.015076079, "srifle_DMR_02_camo_F"}, // 0.05%
			{9851.67548743797, "CUP_srifle_M107_Base"}, // 0.05%
			{9856.31844407276, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.05%
			{9860.82633287817, "CUP_arifle_AK107_GL_pso"}, // 0.05%
			{9865.33422168358, "arifle_SDAR_F"}, // 0.05%
			{9869.84211048899, "CUP_arifle_AK107_GL_kobra"}, // 0.05%
			{9874.34999929439, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.05%
			{9878.8578880998, "CUP_arifle_G36C_camo_holo_snds"}, // 0.05%
			{9882.79334658072, "V_PlateCarrierGL_mtp"}, // 0.04%
			{9886.72880506163, "V_PlateCarrierGL_blk"}, // 0.04%
			{9890.66426354254, "V_PlateCarrierIAGL_dgtl"}, // 0.04%
			{9894.59972202346, "V_PlateCarrierIAGL_oli"}, // 0.04%
			{9898.53518050437, "V_PlateCarrier2_rgr_noflag_F"}, // 0.04%
			{9902.47063898528, "V_PlateCarrier1_rgr_noflag_F"}, // 0.04%
			{9906.4060974662, "V_PlateCarrierGL_rgr"}, // 0.04%
			{9910.34155594711, "V_BandollierB_ghex_F"}, // 0.04%
			{9914.27701442802, "V_HarnessOGL_ghex_F"}, // 0.04%
			{9918.21247290894, "V_HarnessO_ghex_F"}, // 0.04%
			{9922.14793138985, "V_PlateCarrierGL_tna_F"}, // 0.04%
			{9926.08338987076, "V_PlateCarrierSpec_tna_F"}, // 0.04%
			{9930.01884835168, "V_TacVest_gen_F"}, // 0.04%
			{9933.95430683259, "V_PlateCarrier1_tna_F"}, // 0.04%
			{9937.8897653135, "V_PlateCarrier2_tna_F"}, // 0.04%
			{9941.82522379442, "V_PlateCarrierSpec_mtp"}, // 0.04%
			{9945.76068227533, "V_PlateCarrierSpec_rgr"}, // 0.04%
			{9949.69614075624, "V_TacChestrig_grn_F"}, // 0.04%
			{9953.63159923716, "V_PlateCarrierSpec_blk"}, // 0.04%
			{9957.56705771807, "V_TacChestrig_cbr_F"}, // 0.04%
			{9961.50251619899, "V_TacChestrig_oli_F"}, // 0.04%
			{9965.25909020349, "CUP_M136_M"}, // 0.04%
			{9969.015664208, "CUP_OG7_M"}, // 0.04%
			{9972.12260511399, "srifle_DMR_05_tan_F"}, // 0.03%
			{9975.22954601997, "srifle_DMR_05_hex_F"}, // 0.03%
			{9978.33648692595, "srifle_DMR_05_blk_F"}, // 0.03%
			{9981.43179134914, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.03%
			{9983.68573575185, "CUP_arifle_AKS_Gold"}, // 0.02%
			{9985.93968015455, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.02%
			{9988.19362455726, "Exile_Weapon_AKS_Gold"}, // 0.02%
			{9990.05778910085, "CUP_srifle_AS50"}, // 0.02%
			{9991.92195364444, "MMG_02_sand_F"}, // 0.02%
			{9993.78611818803, "MMG_02_camo_F"}, // 0.02%
			{9995.65028273162, "MMG_02_black_F"}, // 0.02%
			{9996.89305909401, "MMG_01_tan_F"}, // 0.01%
			{9998.13583545641, "MMG_01_hex_F"}, // 0.01%
			{9999.0679177282, "CUP_launch_M136"}, // 0.01%
			{9999.99999999999, "CUP_launch_RPG7V"} // 0.01%
		};
	};


	/**
	  Result of 100 rounds:

	  H_Hat_tan
	  Exile_Item_ChristmasTinner
	  Exile_Item_MacasCheese
	  FlareGreen_F
	  CUP_hgun_MicroUzi
	  H_Cap_oli
	  Chemlight_red
	  B_AssaultPack_khk
	  U_C_man_sport_2_F
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_yellow
	  H_Cap_headphones
	  ItemRadio
	  B_Kitbag_mcamo
	  Exile_Item_CockONut
	  U_C_Poloshirt_salmon
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_Magazine01
	  Exile_Item_BeefParts
	  FlareRed_F
	  ItemRadio
	  CUP_hgun_Phantom
	  Exile_Item_Surstromming
	  ItemWatch
	  Exile_Item_BBQSandwich
	  U_C_Man_casual_5_F
	  CUP_smg_MP5A5
	  ItemGPS
	  H_Cap_blk_Raven
	  FlareYellow_F
	  Exile_Item_Noodles
	  FlareGreen_F
	  Exile_Item_Moobar
	  Exile_Item_ZipTie
	  H_Cap_red
	  CUP_20Rnd_B_765x17_Ball_M
	  U_I_C_Soldier_Bandit_2_F
	  B_OutdoorPack_tan
	  H_Cap_blu
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_ChristmasTinner
	  Exile_Item_Magazine02
	  U_C_Poloshirt_burgundy
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  optic_Holosight_smg_blk_F
	  Exile_Item_InstantCoffee
	  CUP_sgun_Saiga12K
	  U_C_Man_casual_3_F
	  Exile_Item_PlasticBottleCoffee
	  Chemlight_green
	  Exile_Magazine_8Rnd_74Slug
	  B_OutdoorPack_tan
	  Exile_Item_Can_Empty
	  B_HuntingBackpack
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  H_Bandanna_surfer
	  FlareGreen_F
	  U_I_C_Soldier_Bandit_3_F
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  U_C_Journalist
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_Magazine02
	  Exile_Item_ChristmasTinner
	  Exile_Weapon_Colt1911
	  Exile_Magazine_7Rnd_45ACP
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_CockONut
	  Exile_Item_CockONut
	  CUP_hgun_SA61
	  Exile_Item_BeefParts
	  H_Cap_blu
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_SausageGravy
	  30Rnd_9x21_Mag
	  U_C_Scientist
	  H_Cap_press
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Weapon_M1014
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_BBQSandwich
	  B_OutdoorPack_blk
	  H_Cap_headphones
	  U_I_C_Soldier_Bandit_4_F
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_CanOpener
	  Exile_Item_ToiletPaper
	  H_Hat_tan
	  Exile_Item_InstantCoffee
	  Exile_Item_Raisins
	  Exile_Item_Magazine01
	  Exile_Item_CanOpener
	  Exile_Item_ToiletPaper
	  FlareYellow_F
	*/
	// class CivillianLowerClass
	// {
		// count = 187;
		// half = 7842.10958962955;
		// halfIndex = 93;
		// sum = 9999.99999999999;
		// items[] = 
		// {
			// {398.936170212766, "Exile_Item_Can_Empty"}, // 3.99%
			// {797.872340425532, "Exile_Item_ToiletPaper"}, // 3.99%
			// {1196.8085106383, "Exile_Item_PlasticBottleEmpty"}, // 3.99%
			// {1329.78723404255, "FlareRed_F"}, // 1.33%
			// {1462.76595744681, "FlareGreen_F"}, // 1.33%
			// {1595.74468085106, "Chemlight_yellow"}, // 1.33%
			// {1728.72340425532, "Chemlight_red"}, // 1.33%
			// {1861.70212765957, "Chemlight_green"}, // 1.33%
			// {1994.68085106383, "Chemlight_blue"}, // 1.33%
			// {2127.65957446809, "V_Rangemaster_belt"}, // 1.33%
			// {2260.63829787234, "FlareWhite_F"}, // 1.33%
			// {2393.6170212766, "FlareYellow_F"}, // 1.33%
			// {2518.77346683354, "Exile_Item_Heatpack"}, // 1.25%
			// {2632.54415241274, "Exile_Item_InstantCoffee"}, // 1.14%
			// {2743.35975524962, "Exile_Item_PlasticBottleDirtyWater"}, // 1.11%
			// {2852.87164511194, "ItemMap"}, // 1.10%
			// {2959.25462383535, "Exile_Weapon_M1014"}, // 1.06%
			// {3065.63760255875, "CUP_sgun_Saiga12K"}, // 1.06%
			// {3165.37164511195, "Exile_Item_Magazine04"}, // 1.00%
			// {3265.10568766514, "Exile_Item_Magazine03"}, // 1.00%
			// {3364.83973021833, "Exile_Item_Magazine02"}, // 1.00%
			// {3464.57377277152, "Exile_Item_Magazine01"}, // 1.00%
			// {3558.44110693923, "ItemWatch"}, // 0.94%
			// {3652.30844110694, "ItemRadio"}, // 0.94%
			// {3745.39354748992, "Exile_Item_Moobar"}, // 0.93%
			// {3838.4786538729, "Exile_Item_Raisins"}, // 0.93%
			// {3927.1311361424, "Exile_Item_ChocolateMilk"}, // 0.89%
			// {4015.7836184119, "Exile_Item_MountainDupe"}, // 0.89%
			// {4098.52593519677, "Exile_Item_CockONut"}, // 0.83%
			// {4181.26825198164, "Exile_Item_SeedAstics"}, // 0.83%
			// {4256.62286191072, "Exile_Item_EnergyDrink"}, // 0.75%
			// {4329.02238909748, "Exile_Item_Surstromming"}, // 0.72%
			// {4401.42191628424, "Exile_Item_Noodles"}, // 0.72%
			// {4473.82144347101, "Exile_Item_SausageGravy"}, // 0.72%
			// {4546.22097065777, "Exile_Item_ChristmasTinner"}, // 0.72%
			// {4618.62049784453, "Exile_Item_MacasCheese"}, // 0.72%
			// {4691.02002503129, "Exile_Item_CatFood"}, // 0.72%
			// {4763.41955221805, "Exile_Item_Dogfood"}, // 0.72%
			// {4835.81907940481, "Exile_Item_BBQSandwich"}, // 0.72%
			// {4908.21860659158, "Exile_Item_BeefParts"}, // 0.72%
			// {4980.61813377834, "Exile_Item_Cheathas"}, // 0.72%
			// {5053.0176609651, "Exile_Item_DsNuts"}, // 0.72%
			// {5119.50702266723, "V_TacVest_blk_POLICE"}, // 0.66%
			// {5185.99638436935, "V_Press_F"}, // 0.66%
			// {5249.8261716034, "H_Cap_press"}, // 0.64%
			// {5313.65595883744, "H_Cap_tan"}, // 0.64%
			// {5377.48574607148, "H_Hat_blue"}, // 0.64%
			// {5441.31553330553, "H_Hat_brown"}, // 0.64%
			// {5505.14532053957, "H_Hat_grey"}, // 0.64%
			// {5568.97510777361, "H_Hat_tan"}, // 0.64%
			// {5632.80489500765, "H_Cap_red"}, // 0.64%
			// {5696.6346822417, "H_StrawHat"}, // 0.64%
			// {5760.46446947574, "H_Hat_checker"}, // 0.64%
			// {5824.29425670978, "H_StrawHat_dark"}, // 0.64%
			// {5886.87247948825, "Binocular"}, // 0.63%
			// {5948.92921707691, "Exile_Item_GloriousKnakworst"}, // 0.62%
			// {6010.98595466556, "Exile_Item_Beer"}, // 0.62%
			// {6066.97699609893, "U_C_HunterBody_grn"}, // 0.56%
			// {6122.9680375323, "U_C_Journalist"}, // 0.56%
			// {6178.95907896567, "U_C_Poor_1"}, // 0.56%
			// {6234.95012039904, "U_C_Poor_2"}, // 0.56%
			// {6290.94116183241, "U_C_Scientist"}, // 0.56%
			// {6346.93220326578, "U_C_Poor_shorts_1"}, // 0.56%
			// {6402.92324469915, "U_Rangemaster"}, // 0.56%
			// {6457.60608422988, "B_OutdoorPack_blk"}, // 0.55%
			// {6510.79757359158, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.53%
			// {6563.98906295328, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.53%
			// {6617.18055231498, "H_Bandanna_surfer"}, // 0.53%
			// {6670.37204167669, "Exile_Magazine_8Rnd_74Slug"}, // 0.53%
			// {6723.56353103839, "H_Beret_blk_POLICE"}, // 0.53%
			// {6776.75502040009, "Exile_Item_PlasticBottleFreshWater"}, // 0.53%
			// {6829.94650976179, "H_Cap_blk"}, // 0.53%
			// {6883.13799912349, "H_Cap_blk_Raven"}, // 0.53%
			// {6936.3294884852, "H_Cap_blu"}, // 0.53%
			// {6989.5209778469, "H_Cap_grn"}, // 0.53%
			// {7042.7124672086, "H_Cap_headphones"}, // 0.53%
			// {7095.9039565703, "H_Cap_oli"}, // 0.53%
			// {7149.09544593201, "Exile_Item_ZipTie"}, // 0.53%
			// {7200.80939392255, "Exile_Item_Matches"}, // 0.52%
			// {7252.52334191309, "Exile_Item_CanOpener"}, // 0.52%
			// {7301.73789749074, "B_OutdoorPack_tan"}, // 0.49%
			// {7350.95245306839, "B_OutdoorPack_blu"}, // 0.49%
			// {7394.69872469297, "B_HuntingBackpack"}, // 0.44%
			// {7438.24731247448, "U_C_Poloshirt_burgundy"}, // 0.44%
			// {7481.79590025599, "U_C_Poloshirt_stripped"}, // 0.44%
			// {7525.3444880375, "U_C_Poloshirt_blue"}, // 0.44%
			// {7568.89307581901, "U_C_Poloshirt_salmon"}, // 0.44%
			// {7612.44166360052, "U_C_Poloshirt_tricolour"}, // 0.44%
			// {7650.71965127203, "B_AssaultPack_mcamo"}, // 0.38%
			// {7688.99763894353, "B_AssaultPack_cbr"}, // 0.38%
			// {7727.27562661504, "B_AssaultPack_blk"}, // 0.38%
			// {7765.55361428654, "B_AssaultPack_sgg"}, // 0.38%
			// {7803.83160195805, "B_AssaultPack_rgr"}, // 0.38%
			// {7842.10958962955, "B_AssaultPack_dgtl"}, // 0.38%
			// {7880.38757730106, "B_AssaultPack_khk"}, // 0.38%
			// {7918.66556497256, "B_AssaultPack_tna_F"}, // 0.38%
			// {7956.05539849878, "hgun_P07_F"}, // 0.37%
			// {7993.0094858448, "SMG_05_F"}, // 0.37%
			// {8029.96357319083, "hgun_PDW2000_F"}, // 0.37%
			// {8065.57293845389, "hgun_Rook40_F"}, // 0.36%
			// {8101.18230371696, "hgun_ACPC2_F"}, // 0.36%
			// {8133.45579164428, "muzzle_snds_acp"}, // 0.32%
			// {8165.72927957161, "muzzle_snds_L"}, // 0.32%
			// {8197.77770830837, "CUP_hgun_Phantom"}, // 0.32%
			// {8229.0668196976, "ItemGPS"}, // 0.31%
			// {8260.17295382725, "U_I_C_Soldier_Bandit_4_F"}, // 0.31%
			// {8291.2790879569, "U_I_C_Soldier_Bandit_3_F"}, // 0.31%
			// {8322.38522208655, "U_I_C_Soldier_Bandit_2_F"}, // 0.31%
			// {8353.4913562162, "U_I_C_Soldier_Bandit_1_F"}, // 0.31%
			// {8384.59749034585, "U_C_man_sport_2_F"}, // 0.31%
			// {8415.7036244755, "U_C_man_sport_3_F"}, // 0.31%
			// {8446.80975860515, "U_C_Man_casual_1_F"}, // 0.31%
			// {8477.9158927348, "U_C_Man_casual_6_F"}, // 0.31%
			// {8509.02202686445, "U_C_Man_casual_5_F"}, // 0.31%
			// {8540.1281609941, "U_C_Man_casual_2_F"}, // 0.31%
			// {8571.23429512375, "U_C_Man_casual_3_F"}, // 0.31%
			// {8602.3404292534, "U_C_Man_casual_4_F"}, // 0.31%
			// {8633.44656338305, "U_I_C_Soldier_Bandit_5_F"}, // 0.31%
			// {8664.5526975127, "U_C_man_sport_1_F"}, // 0.31%
			// {8695.58106630703, "Exile_Item_CookingPot"}, // 0.31%
			// {8726.60943510135, "Exile_Item_EMRE"}, // 0.31%
			// {8757.63780389568, "Exile_Item_PowerDrink"}, // 0.31%
			// {8785.63332461237, "SMG_01_F"}, // 0.28%
			// {8813.62884532905, "CUP_smg_MP5A5"}, // 0.28%
			// {8840.97026509441, "B_Kitbag_cbr"}, // 0.27%
			// {8868.31168485977, "B_Kitbag_sgg"}, // 0.27%
			// {8895.65310462513, "B_Kitbag_mcamo"}, // 0.27%
			// {8919.29376656367, "optic_Holosight_smg"}, // 0.24%
			// {8942.9344285022, "optic_Aco"}, // 0.24%
			// {8966.57509044074, "optic_ACO_grn"}, // 0.24%
			// {8990.21575237927, "optic_Aco_smg"}, // 0.24%
			// {9013.8564143178, "optic_ACO_grn_smg"}, // 0.24%
			// {9037.49707625634, "optic_Holosight_smg_blk_F"}, // 0.24%
			// {9060.64316367733, "Exile_Weapon_Taurus"}, // 0.23%
			// {9083.78925109832, "CUP_hgun_SA61"}, // 0.23%
			// {9106.93533851931, "hgun_P07_khk_F"}, // 0.23%
			// {9130.08142594031, "hgun_Pistol_01_F"}, // 0.23%
			// {9153.2275133613, "Exile_Weapon_TaurusGold"}, // 0.23%
			// {9176.37360078229, "Exile_Weapon_Makarov"}, // 0.23%
			// {9199.51968820328, "hgun_Pistol_Signal_F"}, // 0.23%
			// {9222.66577562427, "hgun_Pistol_heavy_02_F"}, // 0.23%
			// {9245.81186304526, "hgun_Pistol_heavy_01_F"}, // 0.23%
			// {9268.95795046625, "Exile_Weapon_Colt1911"}, // 0.23%
			// {9291.3543670396, "SMG_02_F"}, // 0.22%
			// {9313.75078361295, "CUP_smg_bizon"}, // 0.22%
			// {9335.91390418033, "Exile_Item_PlasticBottleCoffee"}, // 0.22%
			// {9357.53646083143, "9Rnd_45ACP_Mag"}, // 0.22%
			// {9379.15901748253, "Exile_Magazine_7Rnd_45ACP"}, // 0.22%
			// {9400.78157413362, "Exile_Magazine_6Rnd_45ACP"}, // 0.22%
			// {9422.40413078472, "10Rnd_9x21_Mag"}, // 0.22%
			// {9444.02668743582, "11Rnd_45ACP_Mag"}, // 0.22%
			// {9465.64924408692, "Exile_Magazine_8Rnd_9x18"}, // 0.22%
			// {9487.27180073802, "30Rnd_9x21_Mag"}, // 0.22%
			// {9508.63741989586, "CUP_hgun_Duty_M3X"}, // 0.21%
			// {9528.09772088185, "CUP_18Rnd_9x19_Phantom"}, // 0.19%
			// {9547.55802186784, "CUP_30Rnd_9x19_UZI"}, // 0.19%
			// {9567.01832285382, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.19%
			// {9584.948038369, "CUP_acc_Glock17_Flashlight"}, // 0.18%
			// {9602.87775388418, "CUP_acc_CZ_M3X"}, // 0.18%
			// {9620.80746939936, "CUP_muzzle_snds_MicroUzi"}, // 0.18%
			// {9638.6121520309, "CUP_hgun_PB6P9_snds"}, // 0.18%
			// {9656.3426484848, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.18%
			// {9674.07314493869, "30Rnd_45ACP_Mag_SMG_01"}, // 0.18%
			// {9691.80364139259, "CUP_optic_ACOG"}, // 0.18%
			// {9709.53413784649, "CUP_30Rnd_9x19_EVO"}, // 0.18%
			// {9727.26463430039, "CUP_30Rnd_9x19_MP5"}, // 0.18%
			// {9744.99513075429, "CUP_64Rnd_9x19_Bizon_M"}, // 0.18%
			// {9762.72562720819, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.18%
			// {9780.45612366209, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.18%
			// {9798.18662011599, "30Rnd_9x21_Mag_SMG_02"}, // 0.18%
			// {9815.91711656989, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.18%
			// {9833.21516189077, "6Rnd_45ACP_Cylinder"}, // 0.17%
			// {9849.35190585444, "CUP_muzzle_snds_M9"}, // 0.16%
			// {9865.02939745578, "CUP_smg_MP5SD6"}, // 0.16%
			// {9880.6739531504, "Exile_Item_MobilePhone"}, // 0.16%
			// {9894.91769925562, "CUP_hgun_MicroUzi"}, // 0.14%
			// {9907.89123324628, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.13%
			// {9920.44203410691, "optic_MRD"}, // 0.13%
			// {9932.99283496753, "optic_Yorris"}, // 0.13%
			// {9944.19104325421, "CUP_smg_EVO"}, // 0.11%
			// {9955.38925154088, "CUP_smg_bizon_snds"}, // 0.11%
			// {9966.20052986643, "16Rnd_9x21_Mag"}, // 0.11%
			// {9973.76842469432, "6Rnd_GreenSignal_F"}, // 0.08%
			// {9981.3363195222, "6Rnd_RedSignal_F"}, // 0.08%
			// {9987.55754634813, "U_OrestesBody"}, // 0.06%
			// {9993.77877317406, "U_NikosAgedBody"}, // 0.06%
			// {9999.99999999999, "U_NikosBody"} // 0.06%
		// };
	// };

	/**
	  Result of 100 rounds:

	  Exile_Item_Raisins
	  U_C_Poor_1
	  V_Press_F
	  B_Kitbag_mcamo
	  Exile_Item_Dogfood
	  Exile_Item_CockONut
	  B_AssaultPack_dgtl
	  Exile_Item_Magazine01
	  U_C_Journalist
	  Exile_Item_ChocolateMilk
	  H_StrawHat_dark
	  Exile_Item_Matches
	  ItemMap
	  U_Rangemaster
	  6Rnd_RedSignal_F
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  CUP_sgun_Saiga12K
	  Binocular
	  H_Cap_grn
	  Exile_Item_ToiletPaper
	  B_AssaultPack_mcamo
	  Exile_Item_Surstromming
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_Noodles
	  SMG_01_F
	  Exile_Magazine_8Rnd_74Slug
	  H_StrawHat_dark
	  Exile_Item_Magazine02
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Magazine_8Rnd_74Slug
	  H_Cap_red
	  hgun_Pistol_heavy_01_F
	  Exile_Weapon_Makarov
	  Exile_Weapon_Colt1911
	  B_OutdoorPack_blk
	  FlareRed_F
	  30Rnd_65x39_caseless_green
	  Exile_Item_ToiletPaper
	  U_C_Scientist
	  Exile_Item_Magazine03
	  V_Rangemaster_belt
	  U_C_Poloshirt_salmon
	  hgun_Pistol_heavy_01_F
	  Exile_Weapon_TaurusGold
	  Exile_Item_ChocolateMilk
	  CUP_arifle_AK47
	  Chemlight_red
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Magazine03
	  FlareGreen_F
	  H_StrawHat_dark
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CookingPot
	  CUP_optic_ACOG
	  Exile_Item_Magazine02
	  CUP_smg_MP5SD6
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PowerDrink
	  Exile_Item_EMRE
	  Exile_Item_MacasCheese
	  Exile_Item_Matches
	  optic_Yorris
	  hgun_Pistol_heavy_01_F
	  H_Cap_blk_Raven
	  U_C_Man_casual_2_F
	  Exile_Item_CockONut
	  optic_Arco
	  hgun_Rook40_F
	  H_Beret_blk_POLICE
	  Chemlight_red
	  muzzle_snds_m_khk_F
	  ItemRadio
	  CUP_hgun_Duty_M3X
	  Exile_Item_Can_Empty
	  H_Hat_checker
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  CUP_smg_MP5A5
	  Exile_Item_EnergyDrink
	  CUP_sgun_Saiga12K
	  CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag
	  Exile_Item_Noodles
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_SausageGravy
	  Exile_Item_Can_Empty
	  CUP_smg_MP5SD6
	  U_C_Journalist
	  H_Beret_blk_POLICE
	  H_Cap_press
	  SMG_02_F
	  Exile_Item_ToiletPaper
	  B_AssaultPack_rgr
	  Exile_Item_CatFood
	  H_Cap_blk_Raven
	  Exile_Item_Can_Empty
	  CUP_30Rnd_9x19_UZI
	  Exile_Item_Can_Empty
	  B_HuntingBackpack
	*/
	// class CivillianUpperClass
	// {
		// count = 401;
		// half = 9688.97172193075;
		// halfIndex = 200;
		// sum = 9999.99999999997;
		// items[] = 
		// {
			// {384.615384615385, "Exile_Item_Can_Empty"}, // 3.85%
			// {769.230769230769, "Exile_Item_ToiletPaper"}, // 3.85%
			// {1153.84615384615, "Exile_Item_PlasticBottleEmpty"}, // 3.85%
			// {1282.05128205128, "FlareYellow_F"}, // 1.28%
			// {1410.25641025641, "V_Rangemaster_belt"}, // 1.28%
			// {1538.46153846154, "Chemlight_blue"}, // 1.28%
			// {1666.66666666667, "Chemlight_green"}, // 1.28%
			// {1794.87179487179, "FlareWhite_F"}, // 1.28%
			// {1923.07692307692, "FlareRed_F"}, // 1.28%
			// {2051.28205128205, "FlareGreen_F"}, // 1.28%
			// {2179.48717948718, "Chemlight_yellow"}, // 1.28%
			// {2307.69230769231, "Chemlight_red"}, // 1.28%
			// {2428.35595776772, "Exile_Item_Heatpack"}, // 1.21%
			// {2538.04256745433, "Exile_Item_InstantCoffee"}, // 1.10%
			// {2644.88017429194, "Exile_Item_PlasticBottleDirtyWater"}, // 1.07%
			// {2750.46086810793, "ItemMap"}, // 1.06%
			// {2853.02497067203, "CUP_sgun_Saiga12K"}, // 1.03%
			// {2955.58907323613, "Exile_Weapon_M1014"}, // 1.03%
			// {3051.74291938998, "Exile_Item_Magazine02"}, // 0.96%
			// {3147.89676554383, "Exile_Item_Magazine03"}, // 0.96%
			// {3244.05061169767, "Exile_Item_Magazine01"}, // 0.96%
			// {3340.20445785152, "Exile_Item_Magazine04"}, // 0.96%
			// {3430.70219540808, "ItemRadio"}, // 0.90%
			// {3521.19993296464, "ItemWatch"}, // 0.90%
			// {3610.94352270823, "Exile_Item_Raisins"}, // 0.90%
			// {3700.68711245182, "Exile_Item_Moobar"}, // 0.90%
			// {3786.1571979219, "Exile_Item_MountainDupe"}, // 0.85%
			// {3871.62728339199, "Exile_Item_ChocolateMilk"}, // 0.85%
			// {3951.39936316407, "Exile_Item_CockONut"}, // 0.80%
			// {4031.17144293615, "Exile_Item_SeedAstics"}, // 0.80%
			// {4103.82101558572, "Exile_Item_EnergyDrink"}, // 0.73%
			// {4173.62158538629, "Exile_Item_Surstromming"}, // 0.70%
			// {4243.42215518686, "Exile_Item_SausageGravy"}, // 0.70%
			// {4313.22272498743, "Exile_Item_Noodles"}, // 0.70%
			// {4383.023294788, "Exile_Item_DsNuts"}, // 0.70%
			// {4452.82386458857, "Exile_Item_Cheathas"}, // 0.70%
			// {4522.62443438914, "Exile_Item_BeefParts"}, // 0.70%
			// {4592.42500418971, "Exile_Item_MacasCheese"}, // 0.70%
			// {4662.22557399028, "Exile_Item_Dogfood"}, // 0.70%
			// {4732.02614379085, "Exile_Item_CatFood"}, // 0.70%
			// {4801.82671359142, "Exile_Item_ChristmasTinner"}, // 0.70%
			// {4871.62728339199, "Exile_Item_BBQSandwich"}, // 0.70%
			// {4935.72984749456, "V_TacVest_blk_POLICE"}, // 0.64%
			// {4999.83241159712, "V_Press_F"}, // 0.64%
			// {5061.37087313558, "H_Cap_press"}, // 0.62%
			// {5122.90933467404, "H_Cap_red"}, // 0.62%
			// {5184.44779621251, "H_Cap_tan"}, // 0.62%
			// {5245.98625775097, "H_Hat_tan"}, // 0.62%
			// {5307.52471928943, "H_Hat_brown"}, // 0.62%
			// {5369.06318082789, "H_Hat_checker"}, // 0.62%
			// {5430.60164236635, "H_StrawHat"}, // 0.62%
			// {5492.14010390482, "H_StrawHat_dark"}, // 0.62%
			// {5553.67856544328, "H_Hat_blue"}, // 0.62%
			// {5615.21702698174, "H_Hat_grey"}, // 0.62%
			// {5675.54885201945, "Binocular"}, // 0.60%
			// {5735.37791184851, "Exile_Item_GloriousKnakworst"}, // 0.60%
			// {5795.20697167757, "Exile_Item_Beer"}, // 0.60%
			// {5849.18807829025, "U_C_Journalist"}, // 0.54%
			// {5903.16918490294, "U_Rangemaster"}, // 0.54%
			// {5957.15029151562, "U_C_Scientist"}, // 0.54%
			// {6011.13139812831, "U_C_Poor_1"}, // 0.54%
			// {6065.112504741, "U_C_HunterBody_grn"}, // 0.54%
			// {6119.09361135368, "U_C_Poor_shorts_1"}, // 0.54%
			// {6173.07471796637, "U_C_Poor_2"}, // 0.54%
			// {6225.79458377034, "B_OutdoorPack_blk"}, // 0.53%
			// {6277.0766350524, "Exile_Magazine_8Rnd_74Slug"}, // 0.51%
			// {6328.35868633445, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.51%
			// {6379.6407376165, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.51%
			// {6430.92278889855, "H_Cap_oli"}, // 0.51%
			// {6482.2048401806, "H_Cap_blk"}, // 0.51%
			// {6533.48689146266, "H_Cap_headphones"}, // 0.51%
			// {6584.76894274471, "H_Cap_grn"}, // 0.51%
			// {6636.05099402676, "H_Bandanna_surfer"}, // 0.51%
			// {6687.33304530881, "H_Beret_blk_POLICE"}, // 0.51%
			// {6738.61509659086, "H_Cap_blk_Raven"}, // 0.51%
			// {6789.89714787291, "H_Cap_blu"}, // 0.51%
			// {6841.17919915497, "Exile_Item_ZipTie"}, // 0.51%
			// {6892.46125043702, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			// {6942.31880029457, "Exile_Item_CanOpener"}, // 0.50%
			// {6992.17635015212, "Exile_Item_Matches"}, // 0.50%
			// {7039.6242293757, "B_OutdoorPack_tan"}, // 0.47%
			// {7087.07210859928, "B_OutdoorPack_blu"}, // 0.47%
			// {7129.24800124246, "B_HuntingBackpack"}, // 0.42%
			// {7171.23330638566, "U_C_Poloshirt_stripped"}, // 0.42%
			// {7213.21861152886, "U_C_Poloshirt_salmon"}, // 0.42%
			// {7255.20391667206, "U_C_Poloshirt_tricolour"}, // 0.42%
			// {7297.18922181526, "U_C_Poloshirt_blue"}, // 0.42%
			// {7339.17452695846, "U_C_Poloshirt_burgundy"}, // 0.42%
			// {7376.07843302125, "B_AssaultPack_tna_F"}, // 0.37%
			// {7412.98233908403, "B_AssaultPack_mcamo"}, // 0.37%
			// {7449.88624514681, "B_AssaultPack_cbr"}, // 0.37%
			// {7486.7901512096, "B_AssaultPack_sgg"}, // 0.37%
			// {7523.69405727238, "B_AssaultPack_blk"}, // 0.37%
			// {7560.59796333517, "B_AssaultPack_rgr"}, // 0.37%
			// {7597.50186939795, "B_AssaultPack_dgtl"}, // 0.37%
			// {7634.40577546074, "B_AssaultPack_khk"}, // 0.37%
			// {7670.45340983473, "hgun_P07_F"}, // 0.36%
			// {7706.0809401991, "hgun_PDW2000_F"}, // 0.36%
			// {7741.70847056348, "SMG_05_F"}, // 0.36%
			// {7776.03955091966, "hgun_ACPC2_F"}, // 0.34%
			// {7810.37063127585, "hgun_Rook40_F"}, // 0.34%
			// {7841.48558373912, "muzzle_snds_L"}, // 0.31%
			// {7872.60053620238, "muzzle_snds_acp"}, // 0.31%
			// {7903.49850852295, "CUP_hgun_Phantom"}, // 0.31%
			// {7933.6644210418, "ItemGPS"}, // 0.30%
			// {7963.65392471552, "U_C_Man_casual_6_F"}, // 0.30%
			// {7993.64342838923, "U_C_man_sport_2_F"}, // 0.30%
			// {8023.63293206295, "U_C_Man_casual_1_F"}, // 0.30%
			// {8053.62243573666, "U_C_Man_casual_2_F"}, // 0.30%
			// {8083.61193941037, "U_C_Man_casual_3_F"}, // 0.30%
			// {8113.60144308409, "U_C_Man_casual_4_F"}, // 0.30%
			// {8143.5909467578, "U_C_man_sport_1_F"}, // 0.30%
			// {8173.58045043152, "U_I_C_Soldier_Bandit_5_F"}, // 0.30%
			// {8203.56995410523, "U_C_man_sport_3_F"}, // 0.30%
			// {8233.55945777895, "U_C_Man_casual_5_F"}, // 0.30%
			// {8263.54896145266, "U_I_C_Soldier_Bandit_1_F"}, // 0.30%
			// {8293.53846512637, "U_I_C_Soldier_Bandit_2_F"}, // 0.30%
			// {8323.52796880009, "U_I_C_Soldier_Bandit_4_F"}, // 0.30%
			// {8353.5174724738, "U_I_C_Soldier_Bandit_3_F"}, // 0.30%
			// {8383.43200238833, "Exile_Item_PowerDrink"}, // 0.30%
			// {8413.34653230286, "Exile_Item_EMRE"}, // 0.30%
			// {8443.26106221739, "Exile_Item_CookingPot"}, // 0.30%
			// {8470.25161552373, "SMG_01_F"}, // 0.27%
			// {8497.24216883008, "CUP_smg_MP5A5"}, // 0.27%
			// {8523.60210173207, "B_Kitbag_mcamo"}, // 0.26%
			// {8549.96203463405, "B_Kitbag_sgg"}, // 0.26%
			// {8576.32196753604, "B_Kitbag_cbr"}, // 0.26%
			// {8599.11399032807, "optic_Holosight_smg_blk_F"}, // 0.23%
			// {8621.90601312009, "optic_Aco"}, // 0.23%
			// {8644.69803591211, "optic_ACO_grn"}, // 0.23%
			// {8667.49005870413, "optic_Aco_smg"}, // 0.23%
			// {8690.28208149615, "optic_ACO_grn_smg"}, // 0.23%
			// {8713.07410428818, "optic_Holosight_smg"}, // 0.23%
			// {8735.3893065197, "hgun_Pistol_heavy_02_F"}, // 0.22%
			// {8757.70450875122, "hgun_Pistol_heavy_01_F"}, // 0.22%
			// {8780.01971098274, "hgun_Pistol_Signal_F"}, // 0.22%
			// {8802.33491321426, "CUP_hgun_SA61"}, // 0.22%
			// {8824.65011544578, "Exile_Weapon_Colt1911"}, // 0.22%
			// {8846.9653176773, "hgun_P07_khk_F"}, // 0.22%
			// {8869.28051990882, "hgun_Pistol_01_F"}, // 0.22%
			// {8891.59572214034, "Exile_Weapon_TaurusGold"}, // 0.22%
			// {8913.91092437186, "Exile_Weapon_Taurus"}, // 0.22%
			// {8936.22612660338, "Exile_Weapon_Makarov"}, // 0.22%
			// {8957.81856924846, "SMG_02_F"}, // 0.22%
			// {8979.41101189353, "CUP_smg_bizon"}, // 0.22%
			// {9000.77853326105, "Exile_Item_PlasticBottleCoffee"}, // 0.21%
			// {9021.62489557083, "30Rnd_9x21_Mag"}, // 0.21%
			// {9042.47125788061, "Exile_Magazine_6Rnd_45ACP"}, // 0.21%
			// {9063.31762019039, "10Rnd_9x21_Mag"}, // 0.21%
			// {9084.16398250017, "Exile_Magazine_8Rnd_9x18"}, // 0.21%
			// {9105.01034480994, "Exile_Magazine_7Rnd_45ACP"}, // 0.21%
			// {9125.85670711972, "11Rnd_45ACP_Mag"}, // 0.21%
			// {9146.7030694295, "9Rnd_45ACP_Mag"}, // 0.21%
			// {9167.30171764321, "CUP_hgun_Duty_M3X"}, // 0.21%
			// {9186.06344372201, "CUP_30Rnd_9x19_UZI"}, // 0.19%
			// {9204.82516980081, "CUP_18Rnd_9x19_Phantom"}, // 0.19%
			// {9223.58689587961, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.19%
			// {9240.87298058142, "CUP_acc_CZ_M3X"}, // 0.17%
			// {9258.15906528324, "CUP_acc_Glock17_Flashlight"}, // 0.17%
			// {9275.44514998505, "CUP_muzzle_snds_MicroUzi"}, // 0.17%
			// {9292.61069016314, "CUP_hgun_PB6P9_snds"}, // 0.17%
			// {9309.70470725716, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.17%
			// {9326.79872435118, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.17%
			// {9343.8927414452, "30Rnd_45ACP_Mag_SMG_01"}, // 0.17%
			// {9360.98675853921, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.17%
			// {9378.08077563323, "CUP_64Rnd_9x19_Bizon_M"}, // 0.17%
			// {9395.17479272725, "30Rnd_9x21_Mag_SMG_02"}, // 0.17%
			// {9412.26880982127, "CUP_30Rnd_9x19_MP5"}, // 0.17%
			// {9429.36282691528, "CUP_optic_ACOG"}, // 0.17%
			// {9446.4568440093, "CUP_30Rnd_9x19_EVO"}, // 0.17%
			// {9463.55086110332, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.17%
			// {9480.22795095114, "6Rnd_45ACP_Cylinder"}, // 0.17%
			// {9495.78542718277, "CUP_muzzle_snds_M9"}, // 0.16%
			// {9510.90013703432, "CUP_smg_MP5SD6"}, // 0.15%
			// {9525.98309329375, "Exile_Item_MobilePhone"}, // 0.15%
			// {9539.71552543623, "CUP_hgun_MicroUzi"}, // 0.14%
			// {9552.22334282209, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.13%
			// {9564.32360211336, "optic_MRD"}, // 0.12%
			// {9576.42386140463, "optic_Yorris"}, // 0.12%
			// {9587.22008272717, "CUP_smg_EVO"}, // 0.11%
			// {9598.0163040497, "CUP_smg_bizon_snds"}, // 0.11%
			// {9608.43948520459, "16Rnd_9x21_Mag"}, // 0.10%
			// {9615.73571201301, "6Rnd_RedSignal_F"}, // 0.07%
			// {9623.03193882144, "6Rnd_GreenSignal_F"}, // 0.07%
			// {9629.02983955618, "U_OrestesBody"}, // 0.06%
			// {9635.02774029092, "U_NikosBody"}, // 0.06%
			// {9641.02564102566, "U_NikosAgedBody"}, // 0.06%
			// {9645.45499286385, "30Rnd_556x45_Stanag_red"}, // 0.04%
			// {9649.88434470203, "30Rnd_556x45_Stanag_green"}, // 0.04%
			// {9654.31369654021, "30Rnd_556x45_Stanag"}, // 0.04%
			// {9658.74304837839, "30Rnd_65x39_caseless_green"}, // 0.04%
			// {9662.7614180684, "acc_flashlight"}, // 0.04%
			// {9666.0096094164, "20Rnd_556x45_UW_mag"}, // 0.03%
			// {9668.8798734807, "muzzle_snds_m_snd_F"}, // 0.03%
			// {9671.75013754499, "optic_Holosight_khk_F"}, // 0.03%
			// {9674.62040160928, "muzzle_snds_M"}, // 0.03%
			// {9677.49066567357, "acc_pointer_IR"}, // 0.03%
			// {9680.36092973787, "muzzle_snds_H_khk_F"}, // 0.03%
			// {9683.23119380216, "optic_Holosight_blk_F"}, // 0.03%
			// {9686.10145786645, "optic_Holosight"}, // 0.03%
			// {9688.97172193075, "optic_Hamr_khk_F"}, // 0.03%
			// {9691.84198599504, "muzzle_snds_H_snd_F"}, // 0.03%
			// {9694.71225005933, "optic_Hamr"}, // 0.03%
			// {9697.58251412363, "optic_Arco_ghex_F"}, // 0.03%
			// {9700.45277818792, "muzzle_snds_58_blk_F"}, // 0.03%
			// {9703.32304225221, "optic_Arco_blk_F"}, // 0.03%
			// {9706.19330631651, "optic_Arco"}, // 0.03%
			// {9709.0635703808, "muzzle_snds_H_MG_khk_F"}, // 0.03%
			// {9711.93383444509, "muzzle_snds_H_MG_blk_F"}, // 0.03%
			// {9714.80409850939, "muzzle_snds_65_TI_ghex_F"}, // 0.03%
			// {9717.67436257368, "muzzle_snds_65_TI_hex_F"}, // 0.03%
			// {9720.54462663797, "muzzle_snds_65_TI_blk_F"}, // 0.03%
			// {9723.41489070227, "muzzle_snds_58_wdm_F"}, // 0.03%
			// {9726.28515476656, "muzzle_snds_m_khk_F"}, // 0.03%
			// {9729.15541883085, "muzzle_snds_H"}, // 0.03%
			// {9732.02568289515, "CUP_optic_SUSAT"}, // 0.03%
			// {9734.89594695944, "optic_DMS"}, // 0.03%
			// {9737.76621102373, "CUP_muzzle_snds_XM8"}, // 0.03%
			// {9740.63647508803, "CUP_optic_CompM2_Desert"}, // 0.03%
			// {9743.50673915232, "CUP_optic_CompM2_Black"}, // 0.03%
			// {9746.37700321661, "CUP_optic_PSO_1"}, // 0.03%
			// {9749.24726728091, "CUP_optic_PSO_3"}, // 0.03%
			// {9752.1175313452, "CUP_optic_Kobra"}, // 0.03%
			// {9754.98779540949, "CUP_muzzle_Bizon"}, // 0.03%
			// {9757.85805947379, "optic_MRCO"}, // 0.03%
			// {9760.72832353808, "CUP_muzzle_PBS4"}, // 0.03%
			// {9763.59858760237, "CUP_optic_PechenegScope"}, // 0.03%
			// {9766.46885166666, "CUP_optic_HoloBlack"}, // 0.03%
			// {9769.33911573096, "CUP_muzzle_PB6P9"}, // 0.03%
			// {9772.20937979525, "CUP_optic_SB_11_4x20_PM"}, // 0.03%
			// {9775.07964385954, "CUP_optic_HoloDesert"}, // 0.03%
			// {9777.94990792384, "optic_ERCO_blk_F"}, // 0.03%
			// {9780.82017198813, "optic_ERCO_khk_F"}, // 0.03%
			// {9783.69043605242, "optic_ERCO_snd_F"}, // 0.03%
			// {9786.56070011672, "optic_DMS_ghex_F"}, // 0.03%
			// {9789.43096418101, "CUP_optic_CompM4"}, // 0.03%
			// {9792.3012282453, "CUP_optic_RCO"}, // 0.03%
			// {9795.1714923096, "CUP_optic_TrijiconRx01_desert"}, // 0.03%
			// {9798.04175637389, "CUP_optic_AN_PVS_4"}, // 0.03%
			// {9800.91202043818, "CUP_optic_ACOG"}, // 0.03%
			// {9803.56963154109, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			// {9806.227242644, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.03%
			// {9808.88485374691, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.03%
			// {9811.54246484982, "CUP_30Rnd_545x39_AK_M"}, // 0.03%
			// {9814.20007595272, "CUP_30Rnd_556x45_G36"}, // 0.03%
			// {9816.85768705563, "CUP_30Rnd_556x45_Stanag"}, // 0.03%
			// {9819.51529815854, "20Rnd_762x51_Mag"}, // 0.03%
			// {9822.17290926145, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			// {9824.83052036436, "30Rnd_762x39_AK47_M"}, // 0.03%
			// {9827.48813146726, "100Rnd_580x42_Mag_F"}, // 0.03%
			// {9830.14574257017, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			// {9832.80335367308, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			// {9835.46096477599, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			// {9838.1185758789, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			// {9840.7761869818, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			// {9843.43379808471, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			// {9846.09140918762, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			// {9848.74902029053, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			// {9851.40663139344, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			// {9854.06424249634, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			// {9856.72185359925, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			// {9859.37946470216, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			// {9862.03707580507, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			// {9864.69468690798, "30Rnd_65x39_caseless_mag"}, // 0.03%
			// {9867.35229801088, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			// {9870.00990911379, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			// {9872.6675202167, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			// {9875.32513131961, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			// {9877.98274242252, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			// {9880.64035352542, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			// {9883.29796462833, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			// {9885.95557573124, "30Rnd_762x39_Mag_F"}, // 0.03%
			// {9888.61318683415, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			// {9891.27079793706, "30Rnd_580x42_Mag_F"}, // 0.03%
			// {9893.92840903997, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			// {9896.58602014287, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			// {9899.24363124578, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			// {9901.90124234869, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			// {9904.5588534516, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			// {9907.21646455451, "30Rnd_545x39_Mag_F"}, // 0.03%
			// {9909.87407565741, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			// {9912.53168676032, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			// {9914.89400774068, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			// {9917.25632872105, "CUP_30Rnd_Sa58_M"}, // 0.02%
			// {9919.61864970141, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			// {9921.98097068177, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			// {9924.34329166214, "Exile_Magazine_10Rnd_303"}, // 0.02%
			// {9926.63950291357, "CUP_muzzle_snds_Mk12"}, // 0.02%
			// {9928.93571416501, "CUP_optic_Elcan"}, // 0.02%
			// {9931.23192541644, "CUP_muzzle_snds_G36_black"}, // 0.02%
			// {9933.52813666788, "CUP_muzzle_snds_L85"}, // 0.02%
			// {9935.5951675257, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			// {9937.66219838351, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			// {9939.72922924133, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			// {9941.5009699766, "CUP_100Rnd_556x45_BetaCMag"}, // 0.02%
			// {9942.97742058933, "10Rnd_50BW_Mag_F"}, // 0.01%
			// {9944.41255262148, "CUP_acc_ANPEQ_2_grey"}, // 0.01%
			// {9945.84768465363, "optic_NVS"}, // 0.01%
			// {9947.28281668577, "CUP_acc_ANPEQ_2_desert"}, // 0.01%
			// {9948.71794871792, "CUP_acc_ANPEQ_2_camo"}, // 0.01%
			// {9949.65034965032, "Exile_Weapon_AK47"}, // 0.01%
			// {9950.58275058272, "Exile_Weapon_LeeEnfield"}, // 0.01%
			// {9951.51515151512, "Exile_Weapon_AK74_GL"}, // 0.01%
			// {9952.44755244752, "Exile_Weapon_AK107_GL"}, // 0.01%
			// {9953.37995337992, "Exile_Weapon_AK107"}, // 0.01%
			// {9954.31235431233, "Exile_Weapon_AK74"}, // 0.01%
			// {9955.15151515149, "Exile_Weapon_CZ550"}, // 0.01%
			// {9955.89743589741, "arifle_TRG20_F"}, // 0.01%
			// {9956.64335664333, "CUP_arifle_AK107_GL"}, // 0.01%
			// {9957.38927738925, "arifle_TRG21_F"}, // 0.01%
			// {9958.13519813517, "CUP_arifle_AK74M"}, // 0.01%
			// {9958.88111888109, "CUP_arifle_AKM"}, // 0.01%
			// {9959.62703962702, "arifle_MX_F"}, // 0.01%
			// {9960.37296037294, "arifle_MXC_F"}, // 0.01%
			// {9961.11888111886, "arifle_MX_khk_F"}, // 0.01%
			// {9961.86480186478, "CUP_arifle_AK107_kobra"}, // 0.01%
			// {9962.6107226107, "arifle_MXC_khk_F"}, // 0.01%
			// {9963.26340326338, "CUP_arifle_M4A1_camo"}, // 0.01%
			// {9963.91608391606, "CUP_arifle_AK47"}, // 0.01%
			// {9964.56876456874, "arifle_Mk20C_F"}, // 0.01%
			// {9965.22144522142, "arifle_Mk20_F"}, // 0.01%
			// {9965.8741258741, "CUP_arifle_Sa58P_des"}, // 0.01%
			// {9966.52680652678, "CUP_srifle_Mk12SPR"}, // 0.01%
			// {9967.17948717946, "CUP_arifle_M4A1"}, // 0.01%
			// {9967.83216783214, "CUP_arifle_AK107"}, // 0.01%
			// {9968.48484848482, "CUP_arifle_M16A2"}, // 0.01%
			// {9969.04428904426, "arifle_MXM_F"}, // 0.01%
			// {9969.6037296037, "Exile_Weapon_SVD"}, // 0.01%
			// {9970.16317016314, "arifle_Katiba_GL_F"}, // 0.01%
			// {9970.72261072258, "Exile_Weapon_SVDCamo"}, // 0.01%
			// {9971.28205128202, "Exile_Weapon_VSSVintorez"}, // 0.01%
			// {9971.84149184146, "arifle_Katiba_F"}, // 0.01%
			// {9972.4009324009, "CUP_arifle_Sa58P"}, // 0.01%
			// {9972.96037296034, "CUP_arifle_XM8_Railed"}, // 0.01%
			// {9973.51981351978, "CUP_arifle_AK74"}, // 0.01%
			// {9974.07925407922, "CUP_arifle_CZ805_B"}, // 0.01%
			// {9974.63869463866, "CUP_arifle_CZ805_A1"}, // 0.01%
			// {9975.1981351981, "CUP_arifle_M4A3_desert"}, // 0.01%
			// {9975.6643356643, "arifle_ARX_hex_F"}, // 0.00%
			// {9976.1305361305, "arifle_ARX_ghex_F"}, // 0.00%
			// {9976.5967365967, "arifle_ARX_blk_F"}, // 0.00%
			// {9977.0629370629, "arifle_AKS_F"}, // 0.00%
			// {9977.52913752911, "arifle_AKM_FL_F"}, // 0.00%
			// {9977.99533799531, "arifle_AKM_F"}, // 0.00%
			// {9978.46153846151, "arifle_AK12_GL_F"}, // 0.00%
			// {9978.92773892771, "arifle_AK12_F"}, // 0.00%
			// {9979.39393939391, "CUP_arifle_G36C"}, // 0.00%
			// {9979.86013986011, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.00%
			// {9980.32634032631, "CUP_arifle_CZ805_GL"}, // 0.00%
			// {9980.79254079251, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.00%
			// {9981.25874125871, "CUP_arifle_Mk16_STD_EGLM"}, // 0.00%
			// {9981.72494172491, "CUP_arifle_AKS74U"}, // 0.00%
			// {9982.19114219111, "CUP_arifle_Mk16_CQC"}, // 0.00%
			// {9982.65734265731, "CUP_arifle_Mk16_SV"}, // 0.00%
			// {9983.12354312351, "arifle_CTAR_blk_F"}, // 0.00%
			// {9983.58974358971, "arifle_CTAR_hex_F"}, // 0.00%
			// {9984.05594405591, "CUP_arifle_AK74_GL"}, // 0.00%
			// {9984.52214452211, "arifle_CTAR_GL_blk_F"}, // 0.00%
			// {9984.98834498831, "CUP_arifle_G36A"}, // 0.00%
			// {9985.45454545451, "CUP_arifle_L85A2_GL"}, // 0.00%
			// {9985.92074592071, "CUP_arifle_L85A2_NG"}, // 0.00%
			// {9986.38694638691, "arifle_CTAR_ghex_F"}, // 0.00%
			// {9986.85314685311, "arifle_SPAR_03_snd_F"}, // 0.00%
			// {9987.31934731932, "arifle_SPAR_03_khk_F"}, // 0.00%
			// {9987.78554778552, "arifle_SPAR_03_blk_F"}, // 0.00%
			// {9988.25174825172, "arifle_SPAR_02_snd_F"}, // 0.00%
			// {9988.71794871792, "arifle_SPAR_02_khk_F"}, // 0.00%
			// {9989.18414918412, "arifle_SPAR_02_blk_F"}, // 0.00%
			// {9989.65034965032, "CUP_arifle_L86A2"}, // 0.00%
			// {9990.11655011652, "arifle_SPAR_01_blk_F"}, // 0.00%
			// {9990.58275058272, "arifle_CTARS_blk_F"}, // 0.00%
			// {9991.04895104892, "arifle_CTARS_hex_F"}, // 0.00%
			// {9991.51515151512, "arifle_SPAR_01_khk_F"}, // 0.00%
			// {9991.98135198132, "arifle_SPAR_01_snd_F"}, // 0.00%
			// {9992.44755244752, "arifle_CTARS_ghex_F"}, // 0.00%
			// {9992.91375291372, "arifle_SPAR_01_GL_khk_F"}, // 0.00%
			// {9993.37995337992, "arifle_SPAR_01_GL_snd_F"}, // 0.00%
			// {9993.84615384612, "arifle_SPAR_01_GL_blk_F"}, // 0.00%
			// {9994.21911421908, "CUP_arifle_Sa58RIS2_gl"}, // 0.00%
			// {9994.59207459204, "CUP_arifle_Sa58RIS1"}, // 0.00%
			// {9994.965034965, "arifle_TRG21_GL_F"}, // 0.00%
			// {9995.33799533796, "CUP_arifle_Sa58RIS2_camo"}, // 0.00%
			// {9995.71095571093, "arifle_MX_GL_F"}, // 0.00%
			// {9996.08391608389, "CUP_arifle_Mk16_CQC_FG"}, // 0.00%
			// {9996.45687645685, "arifle_MX_GL_khk_F"}, // 0.00%
			// {9996.82983682981, "arifle_Mk20_GL_F"}, // 0.00%
			// {9997.10955710953, "arifle_MXM_Black_F"}, // 0.00%
			// {9997.38927738925, "arifle_MXC_Black_F"}, // 0.00%
			// {9997.66899766897, "arifle_MXM_khk_F"}, // 0.00%
			// {9997.94871794869, "arifle_MX_Black_F"}, // 0.00%
			// {9998.22843822841, "arifle_MX_GL_Black_F"}, // 0.00%
			// {9998.50815850813, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.00%
			// {9998.78787878785, "Exile_Weapon_DMR"}, // 0.00%
			// {9998.97435897433, "arifle_SDAR_F"}, // 0.00%
			// {9999.16083916081, "CUP_arifle_AK107_GL_kobra"}, // 0.00%
			// {9999.34731934729, "CUP_arifle_G36C_camo_holo_snds"}, // 0.00%
			// {9999.53379953377, "CUP_arifle_AK107_GL_pso"}, // 0.00%
			// {9999.72027972025, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.00%
			// {9999.81351981349, "CUP_arifle_AKS_Gold"}, // 0.00%
			// {9999.90675990673, "Exile_Weapon_AKS_Gold"}, // 0.00%
			// {9999.99999999997, "CUP_arifle_Sa58RIS2_Arco_Laser"} // 0.00%
		// };
	// };

	/**
	  Result of 100 rounds:

	  Exile_Item_Magazine03
	  hgun_Rook40_F
	  FlareYellow_F
	  CUP_hgun_MicroUzi
	  FlareGreen_F
	  Exile_Item_Beer
	  Exile_Weapon_Taurus
	  Exile_Item_Magazine01
	  hgun_PDW2000_F
	  Exile_Item_Beer
	  Exile_Item_Heatpack
	  Exile_Item_Surstromming
	  Exile_Item_EnergyDrink
	  hgun_PDW2000_F
	  optic_Holosight_smg_blk_F
	  CUP_hgun_Phantom
	  Exile_Item_EnergyDrink
	  Exile_Item_Raisins
	  Exile_Item_BeefParts
	  Exile_Item_Can_Empty
	  SmokeShellYellow
	  Exile_Item_PlasticBottleFreshWater
	  H_Hat_brown
	  ItemMap
	  ItemGPS
	  Binocular
	  Exile_Item_Heatpack
	  Exile_Weapon_M1014
	  Binocular
	  Binocular
	  ItemRadio
	  B_AssaultPack_mcamo
	  CUP_smg_EVO
	  B_AssaultPack_khk
	  Exile_Item_SeedAstics
	  Exile_Item_PlasticBottleDirtyWater
	  CUP_30Rnd_9x19_UZI
	  Exile_Item_Can_Empty
	  SMG_05_F
	  CUP_sgun_Saiga12K
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleCoffee
	  B_AssaultPack_mcamo
	  CUP_smg_bizon_snds
	  Exile_Item_Beer
	  Exile_Item_Knife
	  Exile_Item_ZipTie
	  Exile_Item_ChocolateMilk
	  CUP_sgun_Saiga12K
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Magazine_8Rnd_9x18
	  Exile_Weapon_M1014
	  H_Cap_grn
	  Exile_Item_MacasCheese
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  CUP_hgun_PB6P9_snds
	  Exile_Item_InstaDoc
	  Chemlight_yellow
	  Exile_Item_Surstromming
	  optic_Aco_smg
	  B_AssaultPack_mcamo
	  Exile_Item_BBQSandwich
	  SMG_02_F
	  Exile_Item_Beer
	  CUP_acc_Glock17_Flashlight
	  hgun_Pistol_01_F
	  Exile_Item_Dogfood
	  Exile_Item_ZipTie
	  30Rnd_45ACP_Mag_SMG_01
	  Exile_Item_Magazine02
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Item_InstantCoffee
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  CUP_smg_MP5SD6
	  Exile_Item_Heatpack
	  Exile_Item_EnergyDrink
	  U_C_Journalist
	  ItemMap
	  Exile_Item_ToiletPaper
	  ItemMap
	  Exile_Item_Can_Empty
	  H_Cap_grn
	  Exile_Item_PowerDrink
	  Exile_Item_CatFood
	  Chemlight_green
	  Exile_Item_ScrewDriver
	  Exile_Item_Can_Empty
	  Exile_Weapon_Taurus
	  FlareRed_F
	  Exile_Item_CatFood
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  CUP_smg_MP5A5
	*/
	class Shop
	{
		count = 222;
		half = 9047.72518156302;
		halfIndex = 111;
		sum = 10000;
		items[] = 
		{
			{600, "Exile_Item_Can_Empty"}, // 6.00%
			{1200, "Exile_Item_ToiletPaper"}, // 6.00%
			{1800, "Exile_Item_PlasticBottleEmpty"}, // 6.00%
			{2050, "Exile_Item_PlasticBottleDirtyWater"}, // 2.50%
			{2290, "Exile_Item_ZipTie"}, // 2.40%
			{2490, "Exile_Item_MountainDupe"}, // 2.00%
			{2690, "Exile_Item_ChocolateMilk"}, // 2.00%
			{2860, "Exile_Item_EnergyDrink"}, // 1.70%
			{3020, "Exile_Weapon_M1014"}, // 1.60%
			{3180, "CUP_sgun_Saiga12K"}, // 1.60%
			{3330, "Exile_Item_Magazine01"}, // 1.50%
			{3480, "Exile_Item_Magazine02"}, // 1.50%
			{3630, "Exile_Item_Magazine03"}, // 1.50%
			{3780, "Exile_Item_Magazine04"}, // 1.50%
			{3920, "Exile_Item_Beer"}, // 1.40%
			{4051.76470588235, "Exile_Item_Heatpack"}, // 1.32%
			{4171.76470588235, "Exile_Item_PlasticBottleFreshWater"}, // 1.20%
			{4287.05882352941, "ItemMap"}, // 1.15%
			{4387.05882352941, "Chemlight_blue"}, // 1.00%
			{4487.05882352941, "Chemlight_red"}, // 1.00%
			{4587.05882352941, "Chemlight_yellow"}, // 1.00%
			{4687.05882352941, "FlareGreen_F"}, // 1.00%
			{4787.05882352941, "FlareRed_F"}, // 1.00%
			{4887.05882352941, "FlareWhite_F"}, // 1.00%
			{4987.05882352941, "FlareYellow_F"}, // 1.00%
			{5087.05882352941, "Chemlight_green"}, // 1.00%
			{5185.88235294118, "ItemRadio"}, // 0.99%
			{5284.70588235294, "ItemWatch"}, // 0.99%
			{5376.37254901961, "Exile_Item_InstantCoffee"}, // 0.92%
			{5459.13116970926, "Exile_Item_Vishpirin"}, // 0.83%
			{5541.88979039892, "Exile_Item_Heatpack"}, // 0.83%
			{5616.88979039892, "Exile_Item_Moobar"}, // 0.75%
			{5691.88979039892, "Exile_Item_Raisins"}, // 0.75%
			{5762.18267742821, "hgun_P07_F"}, // 0.70%
			{5832.18267742821, "Exile_Item_PowerDrink"}, // 0.70%
			{5901.65636163873, "hgun_PDW2000_F"}, // 0.69%
			{5971.13004584926, "SMG_05_F"}, // 0.69%
			{6038.07565254382, "hgun_Rook40_F"}, // 0.67%
			{6105.02125923838, "hgun_ACPC2_F"}, // 0.67%
			{6171.68792590505, "Exile_Item_CockONut"}, // 0.67%
			{6238.35459257172, "Exile_Item_SeedAstics"}, // 0.67%
			{6304.23694551289, "Binocular"}, // 0.66%
			{6364.487991538, "CUP_hgun_Phantom"}, // 0.60%
			{6422.82132487133, "Exile_Item_Cheathas"}, // 0.58%
			{6481.15465820466, "Exile_Item_DsNuts"}, // 0.58%
			{6539.487991538, "Exile_Item_Noodles"}, // 0.58%
			{6597.82132487133, "Exile_Item_BeefParts"}, // 0.58%
			{6656.15465820466, "Exile_Item_Dogfood"}, // 0.58%
			{6714.48799153799, "Exile_Item_CatFood"}, // 0.58%
			{6772.82132487133, "Exile_Item_BBQSandwich"}, // 0.58%
			{6831.15465820466, "Exile_Item_MacasCheese"}, // 0.58%
			{6889.48799153799, "Exile_Item_ChristmasTinner"}, // 0.58%
			{6947.82132487133, "Exile_Item_SausageGravy"}, // 0.58%
			{7006.15465820466, "Exile_Item_Surstromming"}, // 0.58%
			{7058.78623715203, "SMG_01_F"}, // 0.53%
			{7111.4178160994, "CUP_smg_MP5A5"}, // 0.53%
			{7161.4178160994, "Exile_Item_GloriousKnakworst"}, // 0.50%
			{7211.4178160994, "Exile_Item_PlasticBottleCoffee"}, // 0.50%
			{7257.13210181368, "SmokeShellOrange"}, // 0.46%
			{7302.84638752797, "SmokeShellBlue"}, // 0.46%
			{7348.56067324225, "SmokeShellPurple"}, // 0.46%
			{7394.27495895654, "SmokeShellYellow"}, // 0.46%
			{7439.98924467082, "SmokeShellGreen"}, // 0.46%
			{7485.70353038511, "SmokeShellRed"}, // 0.46%
			{7531.41781609939, "SmokeShell"}, // 0.46%
			{7574.93246045086, "Exile_Weapon_Taurus"}, // 0.44%
			{7618.44710480232, "Exile_Weapon_Makarov"}, // 0.44%
			{7661.96174915379, "hgun_Pistol_Signal_F"}, // 0.44%
			{7705.47639350525, "Exile_Weapon_TaurusGold"}, // 0.44%
			{7748.99103785671, "hgun_Pistol_heavy_02_F"}, // 0.44%
			{7792.50568220818, "hgun_Pistol_01_F"}, // 0.44%
			{7836.02032655964, "CUP_hgun_SA61"}, // 0.44%
			{7879.53497091111, "hgun_Pistol_heavy_01_F"}, // 0.44%
			{7923.04961526257, "hgun_P07_khk_F"}, // 0.44%
			{7966.56425961403, "Exile_Weapon_Colt1911"}, // 0.44%
			{8008.66952277193, "CUP_smg_bizon"}, // 0.42%
			{8050.77478592982, "SMG_02_F"}, // 0.42%
			{8092.44145259649, "Exile_Item_Matches"}, // 0.42%
			{8134.10811926316, "Exile_Item_CanOpener"}, // 0.42%
			{8175.48742960799, "Exile_Item_Bandage"}, // 0.41%
			{8215.65479362472, "CUP_hgun_Duty_M3X"}, // 0.40%
			{8255.65479362472, "V_Rangemaster_belt"}, // 0.40%
			{8293.03797119482, "B_OutdoorPack_blk"}, // 0.37%
			{8326.6828310079, "B_OutdoorPack_blu"}, // 0.34%
			{8360.32769082098, "B_OutdoorPack_tan"}, // 0.34%
			{8393.80049416826, "CUP_hgun_PB6P9_snds"}, // 0.33%
			{8426.90394244413, "Exile_Item_InstaDoc"}, // 0.33%
			{8459.84511891471, "ItemGPS"}, // 0.33%
			{8489.75166097079, "B_HuntingBackpack"}, // 0.30%
			{8519.22534518132, "CUP_smg_MP5SD6"}, // 0.29%
			{8546.00358785914, "CUP_hgun_MicroUzi"}, // 0.27%
			{8572.67025452581, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.27%
			{8599.33692119247, "Exile_Magazine_8Rnd_74Slug"}, // 0.27%
			{8626.00358785914, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.27%
			{8652.1718121582, "B_AssaultPack_blk"}, // 0.26%
			{8678.34003645727, "B_AssaultPack_sgg"}, // 0.26%
			{8704.50826075633, "B_AssaultPack_rgr"}, // 0.26%
			{8730.6764850554, "B_AssaultPack_dgtl"}, // 0.26%
			{8756.84470935446, "B_AssaultPack_mcamo"}, // 0.26%
			{8783.01293365353, "B_AssaultPack_tna_F"}, // 0.26%
			{8809.18115795259, "B_AssaultPack_cbr"}, // 0.26%
			{8835.34938225166, "B_AssaultPack_khk"}, // 0.26%
			{8860.34938225166, "Exile_Item_CookingPot"}, // 0.25%
			{8885.34938225166, "Exile_Item_EMRE"}, // 0.25%
			{8906.4020138306, "CUP_smg_bizon_snds"}, // 0.21%
			{8927.45464540955, "CUP_smg_EVO"}, // 0.21%
			{8947.98096119902, "Exile_Item_ScrewDriver"}, // 0.21%
			{8968.5072769885, "Exile_Item_Pliers"}, // 0.21%
			{8989.03359277797, "Exile_Item_Handsaw"}, // 0.21%
			{9009.03359277797, "V_TacVest_blk_POLICE"}, // 0.20%
			{9029.03359277797, "V_Press_F"}, // 0.20%
			{9047.72518156302, "B_Kitbag_cbr"}, // 0.19%
			{9066.41677034806, "B_Kitbag_sgg"}, // 0.19%
			{9085.10835913311, "B_Kitbag_mcamo"}, // 0.19%
			{9102.47678018574, "Exile_Item_JunkMetal"}, // 0.17%
			{9118.94736842103, "Exile_Item_MobilePhone"}, // 0.16%
			{9135.12714370193, "muzzle_snds_L"}, // 0.16%
			{9151.30691898283, "muzzle_snds_acp"}, // 0.16%
			{9167.09639266704, "Exile_Item_MetalScrews"}, // 0.16%
			{9182.88586635125, "Exile_Item_WaterCanisterEmpty"}, // 0.16%
			{9198.67534003546, "Exile_Melee_Axe"}, // 0.16%
			{9213.07534003546, "H_Hat_brown"}, // 0.14%
			{9227.47534003546, "H_Cap_tan"}, // 0.14%
			{9241.87534003546, "H_Hat_tan"}, // 0.14%
			{9256.27534003546, "H_StrawHat"}, // 0.14%
			{9270.67534003546, "H_StrawHat_dark"}, // 0.14%
			{9285.07534003546, "H_Cap_red"}, // 0.14%
			{9299.47534003546, "H_Cap_press"}, // 0.14%
			{9313.87534003546, "H_Hat_grey"}, // 0.14%
			{9328.27534003546, "H_Hat_checker"}, // 0.14%
			{9342.67534003546, "H_Hat_blue"}, // 0.14%
			{9356.88586635125, "Exile_Item_LightBulb"}, // 0.14%
			{9369.89399643255, "11Rnd_45ACP_Mag"}, // 0.13%
			{9382.90212651385, "30Rnd_9x21_Mag"}, // 0.13%
			{9395.91025659515, "9Rnd_45ACP_Mag"}, // 0.13%
			{9408.91838667646, "10Rnd_9x21_Mag"}, // 0.13%
			{9421.92651675776, "Exile_Magazine_8Rnd_9x18"}, // 0.13%
			{9434.93464683906, "Exile_Magazine_6Rnd_45ACP"}, // 0.13%
			{9447.94277692036, "Exile_Magazine_7Rnd_45ACP"}, // 0.13%
			{9460.57435586773, "Exile_Item_ExtensionCord"}, // 0.13%
			{9472.57435586773, "H_Beret_blk_POLICE"}, // 0.12%
			{9484.57435586773, "H_Cap_oli"}, // 0.12%
			{9496.57435586773, "H_Cap_headphones"}, // 0.12%
			{9508.57435586773, "H_Cap_grn"}, // 0.12%
			{9520.57435586773, "H_Cap_blu"}, // 0.12%
			{9532.57435586773, "H_Cap_blk_Raven"}, // 0.12%
			{9544.57435586773, "H_Cap_blk"}, // 0.12%
			{9556.57435586773, "H_Bandanna_surfer"}, // 0.12%
			{9568.42620771958, "optic_ACO_grn_smg"}, // 0.12%
			{9580.27805957143, "optic_Aco_smg"}, // 0.12%
			{9592.12991142329, "optic_ACO_grn"}, // 0.12%
			{9603.98176327514, "optic_Aco"}, // 0.12%
			{9615.83361512699, "optic_Holosight_smg_blk_F"}, // 0.12%
			{9627.68546697884, "optic_Holosight_smg"}, // 0.12%
			{9639.39278405201, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.12%
			{9651.10010112518, "CUP_18Rnd_9x19_Phantom"}, // 0.12%
			{9662.80741819836, "CUP_30Rnd_9x19_UZI"}, // 0.12%
			{9673.2139222634, "6Rnd_45ACP_Cylinder"}, // 0.10%
			{9682.68760647392, "Exile_Item_CamoTentKit"}, // 0.09%
			{9692.16129068445, "Exile_Item_Foolbox"}, // 0.09%
			{9701.15005472939, "CUP_muzzle_snds_MicroUzi"}, // 0.09%
			{9710.13881877434, "CUP_acc_Glock17_Flashlight"}, // 0.09%
			{9719.12758281928, "CUP_acc_CZ_M3X"}, // 0.09%
			{9728.01647170817, "30Rnd_45ACP_Mag_SMG_01"}, // 0.09%
			{9736.90536059706, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.09%
			{9745.79424948595, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.09%
			{9754.68313837483, "30Rnd_9x21_Mag_SMG_02"}, // 0.09%
			{9763.57202726372, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.09%
			{9772.46091615261, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.09%
			{9781.3498050415, "CUP_64Rnd_9x19_Bizon_M"}, // 0.09%
			{9790.23869393039, "CUP_30Rnd_9x19_MP5"}, // 0.09%
			{9799.12758281928, "CUP_30Rnd_9x19_EVO"}, // 0.09%
			{9808.01647170817, "CUP_optic_ACOG"}, // 0.09%
			{9816.10635934862, "CUP_muzzle_snds_M9"}, // 0.08%
			{9824.00109619072, "Exile_Melee_SledgeHammer"}, // 0.08%
			{9831.89583303283, "Exile_Item_Grinder"}, // 0.08%
			{9839.70071108161, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.08%
			{9846.20477612226, "16Rnd_9x21_Mag"}, // 0.07%
			{9852.52056559594, "Exile_Item_MetalBoard"}, // 0.06%
			{9858.83635506963, "Exile_Item_Sand"}, // 0.06%
			{9865.15214454331, "Exile_Item_Rope"}, // 0.06%
			{9871.44427937477, "optic_MRD"}, // 0.06%
			{9877.73641420623, "optic_Yorris"}, // 0.06%
			{9882.4732563115, "Exile_Item_PortableGeneratorKit"}, // 0.05%
			{9887.21009841676, "Exile_Item_FloodLightKit"}, // 0.05%
			{9891.94694052202, "Exile_Item_Cement"}, // 0.05%
			{9896.68378262729, "Exile_Item_FireExtinguisher"}, // 0.05%
			{9901.42062473255, "Exile_Item_CordlessScrewdriver"}, // 0.05%
			{9905.97347026101, "6Rnd_RedSignal_F"}, // 0.05%
			{9910.52631578946, "6Rnd_GreenSignal_F"}, // 0.05%
			{9914.73684210525, "U_C_HunterBody_grn"}, // 0.04%
			{9918.94736842104, "U_C_Poor_1"}, // 0.04%
			{9923.15789473683, "U_C_Journalist"}, // 0.04%
			{9927.36842105262, "U_C_Scientist"}, // 0.04%
			{9931.57894736841, "U_Rangemaster"}, // 0.04%
			{9935.7894736842, "U_C_Poor_shorts_1"}, // 0.04%
			{9939.99999999999, "U_C_Poor_2"}, // 0.04%
			{9943.27485380116, "U_C_Poloshirt_tricolour"}, // 0.03%
			{9946.54970760233, "U_C_Poloshirt_salmon"}, // 0.03%
			{9949.8245614035, "U_C_Poloshirt_stripped"}, // 0.03%
			{9953.09941520467, "U_C_Poloshirt_burgundy"}, // 0.03%
			{9956.37426900584, "U_C_Poloshirt_blue"}, // 0.03%
			{9959.53216374268, "Exile_Item_ThermalScannerPro"}, // 0.03%
			{9962.69005847952, "Exile_Melee_Shovel"}, // 0.03%
			{9965.84795321636, "Exile_Item_Knife"}, // 0.03%
			{9968.18713450291, "U_C_Man_casual_4_F"}, // 0.02%
			{9970.52631578946, "U_C_Man_casual_3_F"}, // 0.02%
			{9972.86549707601, "U_C_Man_casual_2_F"}, // 0.02%
			{9975.20467836256, "U_C_Man_casual_1_F"}, // 0.02%
			{9977.54385964911, "U_C_man_sport_3_F"}, // 0.02%
			{9979.88304093566, "U_C_man_sport_2_F"}, // 0.02%
			{9982.22222222221, "U_C_man_sport_1_F"}, // 0.02%
			{9984.56140350876, "U_I_C_Soldier_Bandit_2_F"}, // 0.02%
			{9986.90058479531, "U_I_C_Soldier_Bandit_4_F"}, // 0.02%
			{9989.23976608186, "U_I_C_Soldier_Bandit_3_F"}, // 0.02%
			{9991.57894736841, "U_I_C_Soldier_Bandit_1_F"}, // 0.02%
			{9993.91812865496, "U_C_Man_casual_6_F"}, // 0.02%
			{9996.25730994151, "U_I_C_Soldier_Bandit_5_F"}, // 0.02%
			{9998.59649122807, "U_C_Man_casual_5_F"}, // 0.02%
			{9999.06432748538, "U_NikosAgedBody"}, // 0.00%
			{9999.53216374269, "U_NikosBody"}, // 0.00%
			{10000, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  FlareWhite_F
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_MetalBoard
	  FlareYellow_F
	  FlareRed_F
	  Exile_Item_Magazine02
	  Exile_Item_Laptop
	  Exile_Item_JunkMetal
	  FlareRed_F
	  Exile_Item_Handsaw
	  Exile_Item_ExtensionCord
	  Exile_Item_BaseCameraKit
	  Exile_Item_JunkMetal
	  Exile_Item_Moobar
	  Exile_Melee_Axe
	  Exile_Item_BaseCameraKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  FlareGreen_F
	  Exile_Item_CordlessScrewdriver
	  FlareGreen_F
	  Exile_Item_Sand
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Item_BaseCameraKit
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_Pliers
	  Exile_Item_Wrench
	  Exile_Item_ChocolateMilk
	  Exile_Item_FuelCanisterFull
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_PowerDrink
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_Laptop
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  Exile_Item_Wrench
	  Exile_Item_MountainDupe
	  FlareRed_F
	  Exile_Item_Matches
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_Rope
	  Exile_Melee_Shovel
	  Exile_Item_BaseCameraKit
	  Exile_Item_Knife
	  Exile_Item_LightBulb
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Rope
	  Exile_Item_Rope
	  FlareYellow_F
	  Exile_Item_ExtensionCord
	  Exile_Item_InstantCoffee
	  Exile_Item_Wrench
	  Exile_Item_LightBulb
	  Exile_Item_CamoTentKit
	  FlareRed_F
	  Exile_Item_CockONut
	  Exile_Item_Magazine03
	  Exile_Item_LightBulb
	  Exile_Item_DuctTape
	  Exile_Item_Surstromming
	  Exile_Item_Laptop
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Sand
	  FlareRed_F
	  Exile_Item_BaseCameraKit
	  Exile_Item_Noodles
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  Exile_Item_Can_Empty
	  Exile_Item_Knife
	  Exile_Item_JunkMetal
	  Exile_Item_LightBulb
	  Exile_Item_Pliers
	  Exile_Item_ChocolateMilk
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_ScrewDriver
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	*/
	class Industrial
	{
		count = 73;
		half = 8841.22807017544;
		halfIndex = 36;
		sum = 10000;
		items[] = 
		{
			{600, "Exile_Item_Can_Empty"}, // 6.00%
			{1200, "Exile_Item_ToiletPaper"}, // 6.00%
			{1800, "Exile_Item_PlasticBottleEmpty"}, // 6.00%
			{2280, "Exile_Item_DuctTape"}, // 4.80%
			{2680, "Exile_Item_ZipTie"}, // 4.00%
			{3080, "Exile_Item_BaseCameraKit"}, // 4.00%
			{3480, "Exile_Item_Laptop"}, // 4.00%
			{3780, "FlareWhite_F"}, // 3.00%
			{4080, "FlareRed_F"}, // 3.00%
			{4380, "FlareGreen_F"}, // 3.00%
			{4680, "FlareYellow_F"}, // 3.00%
			{4953.68421052632, "Exile_Item_ScrewDriver"}, // 2.74%
			{5227.36842105263, "Exile_Item_Pliers"}, // 2.74%
			{5501.05263157895, "Exile_Item_Handsaw"}, // 2.74%
			{5741.05263157895, "Exile_Item_FuelCanisterEmpty"}, // 2.40%
			{5972.63157894737, "Exile_Item_JunkMetal"}, // 2.32%
			{6183.15789473684, "Exile_Item_WaterCanisterEmpty"}, // 2.11%
			{6393.68421052631, "Exile_Melee_Axe"}, // 2.11%
			{6604.21052631579, "Exile_Item_MetalScrews"}, // 2.11%
			{6793.68421052631, "Exile_Item_LightBulb"}, // 1.89%
			{6962.10526315789, "Exile_Item_ExtensionCord"}, // 1.68%
			{7122.10526315789, "Exile_Item_OilCanister"}, // 1.60%
			{7282.10526315789, "Exile_Item_Carwheel"}, // 1.60%
			{7432.10526315789, "Exile_Item_Magazine04"}, // 1.50%
			{7582.10526315789, "Exile_Item_Magazine02"}, // 1.50%
			{7732.10526315789, "Exile_Item_Magazine01"}, // 1.50%
			{7882.10526315789, "Exile_Item_Magazine03"}, // 1.50%
			{8008.42105263158, "Exile_Item_Foolbox"}, // 1.26%
			{8134.73684210526, "Exile_Item_CamoTentKit"}, // 1.26%
			{8240, "Exile_Melee_SledgeHammer"}, // 1.05%
			{8345.26315789474, "Exile_Item_Grinder"}, // 1.05%
			{8429.47368421053, "Exile_Item_Rope"}, // 0.84%
			{8513.68421052632, "Exile_Item_Sand"}, // 0.84%
			{8597.89473684211, "Exile_Item_MetalBoard"}, // 0.84%
			{8681.22807017544, "Exile_Item_PlasticBottleDirtyWater"}, // 0.83%
			{8761.22807017544, "Exile_Item_Wrench"}, // 0.80%
			{8841.22807017544, "Exile_Item_FuelCanisterFull"}, // 0.80%
			{8907.89473684211, "Exile_Item_MountainDupe"}, // 0.67%
			{8974.56140350877, "Exile_Item_ChocolateMilk"}, // 0.67%
			{9037.71929824561, "Exile_Item_Cement"}, // 0.63%
			{9100.87719298246, "Exile_Item_FloodLightKit"}, // 0.63%
			{9164.0350877193, "Exile_Item_PortableGeneratorKit"}, // 0.63%
			{9227.19298245614, "Exile_Item_CordlessScrewdriver"}, // 0.63%
			{9290.35087719298, "Exile_Item_FireExtinguisher"}, // 0.63%
			{9347.01754385965, "Exile_Item_EnergyDrink"}, // 0.57%
			{9393.68421052631, "Exile_Item_Beer"}, // 0.47%
			{9435.78947368421, "Exile_Melee_Shovel"}, // 0.42%
			{9477.8947368421, "Exile_Item_ThermalScannerPro"}, // 0.42%
			{9520, "Exile_Item_Knife"}, // 0.42%
			{9560, "Exile_Item_PlasticBottleFreshWater"}, // 0.40%
			{9590.55555555555, "Exile_Item_InstantCoffee"}, // 0.31%
			{9615.55555555555, "Exile_Item_Moobar"}, // 0.25%
			{9640.55555555555, "Exile_Item_Raisins"}, // 0.25%
			{9663.88888888889, "Exile_Item_PowerDrink"}, // 0.23%
			{9686.11111111111, "Exile_Item_SeedAstics"}, // 0.22%
			{9708.33333333333, "Exile_Item_CockONut"}, // 0.22%
			{9727.77777777778, "Exile_Item_Surstromming"}, // 0.19%
			{9747.22222222222, "Exile_Item_SausageGravy"}, // 0.19%
			{9766.66666666667, "Exile_Item_ChristmasTinner"}, // 0.19%
			{9786.11111111111, "Exile_Item_DsNuts"}, // 0.19%
			{9805.55555555556, "Exile_Item_Cheathas"}, // 0.19%
			{9825, "Exile_Item_MacasCheese"}, // 0.19%
			{9844.44444444445, "Exile_Item_BBQSandwich"}, // 0.19%
			{9863.88888888889, "Exile_Item_CatFood"}, // 0.19%
			{9883.33333333334, "Exile_Item_Dogfood"}, // 0.19%
			{9902.77777777778, "Exile_Item_BeefParts"}, // 0.19%
			{9922.22222222223, "Exile_Item_Noodles"}, // 0.19%
			{9938.8888888889, "Exile_Item_GloriousKnakworst"}, // 0.17%
			{9955.55555555556, "Exile_Item_PlasticBottleCoffee"}, // 0.17%
			{9969.44444444445, "Exile_Item_Matches"}, // 0.14%
			{9983.33333333334, "Exile_Item_CanOpener"}, // 0.14%
			{9991.66666666667, "Exile_Item_EMRE"}, // 0.08%
			{10000, "Exile_Item_CookingPot"} // 0.08%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_BaseCameraKit
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Foolbox
	  Exile_Item_Pliers
	  Exile_Item_BaseCameraKit
	  Exile_Item_Magazine04
	  Exile_Item_Laptop
	  Exile_Melee_Axe
	  Exile_Item_BaseCameraKit
	  Exile_Item_JunkMetal
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Item_FloodLightKit
	  Exile_Item_MetalScrews
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_Handsaw
	  Exile_Item_MetalBoard
	  Exile_Item_Handsaw
	  Exile_Item_Foolbox
	  Exile_Item_MetalScrews
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_MetalScrews
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_SledgeHammer
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FloodLightKit
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_OilCanister
	  Exile_Melee_SledgeHammer
	  Exile_Item_FuelCanisterFull
	  Exile_Item_BaseCameraKit
	  Exile_Melee_Shovel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Carwheel
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_CamoTentKit
	  Exile_Item_CamoTentKit
	  Exile_Item_Pliers
	  Exile_Item_Carwheel
	  Exile_Item_FireExtinguisher
	  Exile_Item_Grinder
	  Exile_Item_LightBulb
	  Exile_Item_Magazine03
	  Exile_Item_BaseCameraKit
	  Exile_Item_Cement
	  Exile_Item_Magazine01
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Cement
	  Exile_Item_Laptop
	  Exile_Item_MetalBoard
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Foolbox
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_ThermalScannerPro
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_FireExtinguisher
	  Exile_Melee_Axe
	  Exile_Item_LightBulb
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_ScrewDriver
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_MetalBoard
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	*/
	class Factories
	{
		count = 39;
		half = 7853.43567251462;
		halfIndex = 19;
		sum = 10000;
		items[] = 
		{
			{833.333333333333, "Exile_Item_Can_Empty"}, // 8.33%
			{1666.66666666667, "Exile_Item_ToiletPaper"}, // 8.33%
			{2500, "Exile_Item_PlasticBottleEmpty"}, // 8.33%
			{3166.66666666667, "Exile_Item_DuctTape"}, // 6.67%
			{3583.33333333333, "Exile_Item_Laptop"}, // 4.17%
			{4000, "Exile_Item_BaseCameraKit"}, // 4.17%
			{4356.35964912281, "Exile_Item_Handsaw"}, // 3.56%
			{4712.71929824561, "Exile_Item_Pliers"}, // 3.56%
			{5069.07894736842, "Exile_Item_ScrewDriver"}, // 3.56%
			{5402.41228070175, "Exile_Item_FuelCanisterEmpty"}, // 3.33%
			{5703.94736842105, "Exile_Item_JunkMetal"}, // 3.02%
			{5978.0701754386, "Exile_Melee_Axe"}, // 2.74%
			{6252.19298245614, "Exile_Item_WaterCanisterEmpty"}, // 2.74%
			{6526.31578947369, "Exile_Item_MetalScrews"}, // 2.74%
			{6773.02631578947, "Exile_Item_LightBulb"}, // 2.47%
			{6995.2485380117, "Exile_Item_Carwheel"}, // 2.22%
			{7217.47076023392, "Exile_Item_OilCanister"}, // 2.22%
			{7436.76900584795, "Exile_Item_ExtensionCord"}, // 2.19%
			{7645.10233918129, "Exile_Item_Magazine04"}, // 2.08%
			{7853.43567251462, "Exile_Item_Magazine01"}, // 2.08%
			{8061.76900584795, "Exile_Item_Magazine03"}, // 2.08%
			{8270.10233918129, "Exile_Item_Magazine02"}, // 2.08%
			{8434.57602339181, "Exile_Item_CamoTentKit"}, // 1.64%
			{8599.04970760234, "Exile_Item_Foolbox"}, // 1.64%
			{8736.11111111111, "Exile_Item_Grinder"}, // 1.37%
			{8873.17251461988, "Exile_Melee_SledgeHammer"}, // 1.37%
			{8984.28362573099, "Exile_Item_FuelCanisterFull"}, // 1.11%
			{9095.39473684211, "Exile_Item_Wrench"}, // 1.11%
			{9205.04385964912, "Exile_Item_MetalBoard"}, // 1.10%
			{9314.69298245614, "Exile_Item_Sand"}, // 1.10%
			{9424.34210526316, "Exile_Item_Rope"}, // 1.10%
			{9506.57894736842, "Exile_Item_PortableGeneratorKit"}, // 0.82%
			{9588.81578947368, "Exile_Item_FireExtinguisher"}, // 0.82%
			{9671.05263157895, "Exile_Item_FloodLightKit"}, // 0.82%
			{9753.28947368421, "Exile_Item_Cement"}, // 0.82%
			{9835.52631578947, "Exile_Item_CordlessScrewdriver"}, // 0.82%
			{9890.35087719298, "Exile_Item_Knife"}, // 0.55%
			{9945.17543859649, "Exile_Item_ThermalScannerPro"}, // 0.55%
			{10000, "Exile_Melee_Shovel"} // 0.55%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  FlareRed_F
	  Exile_Item_ZipTie
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  FlareRed_F
	  Exile_Item_Sand
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  FlareWhite_F
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_ScrewDriver
	  Exile_Item_Carwheel
	  Exile_Item_ExtensionCord
	  Exile_Item_Carwheel
	  Exile_Item_JunkMetal
	  FlareGreen_F
	  FlareWhite_F
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  FlareGreen_F
	  Exile_Item_ZipTie
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Melee_Axe
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_DuctTape
	  FlareRed_F
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_Handsaw
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ThermalScannerPro
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Melee_SledgeHammer
	  Exile_Item_ToiletPaper
	  Exile_Item_Grinder
	  Exile_Item_Wrench
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Magazine04
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Rope
	  Exile_Melee_Axe
	  Exile_Item_Wrench
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FireExtinguisher
	  Exile_Item_Magazine03
	  FlareYellow_F
	  Exile_Item_Can_Empty
	  Exile_Item_FireExtinguisher
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Shovel
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Grinder
	  FlareRed_F
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_OilCanister
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	*/
	class VehicleService
	{
		count = 42;
		half = 8541.18993135012;
		halfIndex = 21;
		sum = 10000;
		items[] = 
		{
			{1391.30434782609, "Exile_Item_DuctTape"}, // 13.91%
			{2086.95652173913, "Exile_Item_FuelCanisterEmpty"}, // 6.96%
			{2739.13043478261, "Exile_Item_Can_Empty"}, // 6.52%
			{3391.30434782609, "Exile_Item_ToiletPaper"}, // 6.52%
			{4043.47826086957, "Exile_Item_PlasticBottleEmpty"}, // 6.52%
			{4507.24637681159, "Exile_Item_Carwheel"}, // 4.64%
			{4971.01449275362, "Exile_Item_OilCanister"}, // 4.64%
			{5405.79710144928, "Exile_Item_ZipTie"}, // 4.35%
			{5731.88405797101, "FlareWhite_F"}, // 3.26%
			{6057.97101449275, "FlareRed_F"}, // 3.26%
			{6384.05797101449, "FlareGreen_F"}, // 3.26%
			{6710.14492753623, "FlareYellow_F"}, // 3.26%
			{6942.02898550725, "Exile_Item_Wrench"}, // 2.32%
			{7173.91304347826, "Exile_Item_FuelCanisterFull"}, // 2.32%
			{7359.83981693364, "Exile_Item_Handsaw"}, // 1.86%
			{7545.76659038902, "Exile_Item_ScrewDriver"}, // 1.86%
			{7731.69336384439, "Exile_Item_Pliers"}, // 1.86%
			{7894.73684210526, "Exile_Item_Magazine03"}, // 1.63%
			{8057.78032036613, "Exile_Item_Magazine02"}, // 1.63%
			{8220.823798627, "Exile_Item_Magazine01"}, // 1.63%
			{8383.86727688787, "Exile_Item_Magazine04"}, // 1.63%
			{8541.18993135012, "Exile_Item_JunkMetal"}, // 1.57%
			{8684.21052631579, "Exile_Item_MetalScrews"}, // 1.43%
			{8827.23112128147, "Exile_Melee_Axe"}, // 1.43%
			{8970.25171624714, "Exile_Item_WaterCanisterEmpty"}, // 1.43%
			{9098.97025171625, "Exile_Item_LightBulb"}, // 1.29%
			{9213.38672768879, "Exile_Item_ExtensionCord"}, // 1.14%
			{9299.1990846682, "Exile_Item_Foolbox"}, // 0.86%
			{9385.0114416476, "Exile_Item_CamoTentKit"}, // 0.86%
			{9456.52173913044, "Exile_Melee_SledgeHammer"}, // 0.72%
			{9528.03203661327, "Exile_Item_Grinder"}, // 0.72%
			{9585.24027459954, "Exile_Item_Rope"}, // 0.57%
			{9642.44851258581, "Exile_Item_Sand"}, // 0.57%
			{9699.65675057208, "Exile_Item_MetalBoard"}, // 0.57%
			{9742.56292906179, "Exile_Item_FireExtinguisher"}, // 0.43%
			{9785.46910755149, "Exile_Item_CordlessScrewdriver"}, // 0.43%
			{9828.37528604119, "Exile_Item_PortableGeneratorKit"}, // 0.43%
			{9871.28146453089, "Exile_Item_FloodLightKit"}, // 0.43%
			{9914.18764302059, "Exile_Item_Cement"}, // 0.43%
			{9942.79176201373, "Exile_Melee_Shovel"}, // 0.29%
			{9971.39588100686, "Exile_Item_ThermalScannerPro"}, // 0.29%
			{10000, "Exile_Item_Knife"} // 0.29%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Magazine03
	  V_PlateCarrier1_rgr
	  MiniGrenade
	  H_MilCap_rucamo
	  Exile_Item_ZipTie
	  Exile_Item_Magazine04
	  3Rnd_UGL_FlareGreen_F
	  Exile_Item_ToiletPaper
	  APERSMine_Range_Mag
	  Exile_Item_Magazine03
	  U_IG_Guerilla1_1
	  1Rnd_SmokeBlue_Grenade_shell
	  Exile_Item_ToiletPaper
	  APERSBoundingMine_Range_Mag
	  muzzle_snds_H
	  hgun_ACPC2_F
	  Exile_Item_ToiletPaper
	  10Rnd_338_Mag
	  CUP_hgun_Phantom
	  Exile_Item_PlasticBottleEmpty
	  optic_LRPS_ghex_F
	  Exile_Item_Magazine04
	  H_Shemag_olive_hs
	  Exile_Item_Magazine01
	  H_Booniehat_mcamo
	  SmokeShellOrange
	  U_IG_Guerilla1_1
	  Exile_Item_ToiletPaper
	  SmokeShellOrange
	  SmokeShellOrange
	  muzzle_snds_L
	  U_B_PilotCoveralls
	  H_HelmetB_plain_blk
	  H_Watchcap_khk
	  SmokeShellRed
	  Exile_Item_Can_Empty
	  30Rnd_762x39_Mag_F
	  Exile_Item_PlasticBottleEmpty
	  IEDUrbanSmall_Remote_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  O_NVGoggles_urb_F
	  U_I_CombatUniform
	  3Rnd_SmokeOrange_Grenade_shell
	  Exile_Item_Magazine03
	  CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  U_IG_Guerilla1_1
	  Exile_Item_PlasticBottleEmpty
	  H_Booniehat_dirty
	  U_O_CombatUniform_ocamo
	  Exile_Item_ToiletPaper
	  CUP_arifle_AK107
	  muzzle_snds_338_green
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  U_B_CTRG_Soldier_2_F
	  U_B_GEN_Commander_F
	  Exile_Item_ZipTie
	  1Rnd_SmokeGreen_Grenade_shell
	  CUP_optic_TrijiconRx01_desert
	  U_B_PilotCoveralls
	  V_RebreatherIR
	  U_I_C_Soldier_Para_4_F
	  Exile_Item_Magazine04
	  30Rnd_556x45_Stanag_Tracer_Green
	  CUP_lmg_PKM
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M
	  Exile_Item_Magazine02
	  30Rnd_65x39_caseless_green
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  H_MilCap_ocamo
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  H_HelmetSpecO_ocamo
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  optic_Holosight_khk_F
	  IEDLandSmall_Remote_Mag
	  muzzle_snds_338_sand
	  muzzle_snds_acp
	  H_HelmetB_paint
	  Exile_Item_PlasticBottleEmpty
	  3Rnd_UGL_FlareWhite_F
	  3Rnd_HE_Grenade_shell
	  U_O_GhillieSuit
	  Exile_Item_PlasticBottleEmpty
	  CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
	  Exile_Item_PlasticBottleEmpty
	  optic_AMS_snd
	*/
	class Military
	{
		count = 746;
		half = 9088.61731357014;
		halfIndex = 373;
		sum = 10000;
		items[] = 
		{
			{1096.49122807018, "Exile_Item_PlasticBottleEmpty"}, // 10.96%
			{2192.98245614035, "Exile_Item_Can_Empty"}, // 10.96%
			{3289.47368421053, "Exile_Item_ToiletPaper"}, // 10.96%
			{3563.59649122807, "Exile_Item_Magazine02"}, // 2.74%
			{3837.71929824561, "Exile_Item_Magazine03"}, // 2.74%
			{4111.84210526316, "Exile_Item_Magazine04"}, // 2.74%
			{4385.9649122807, "Exile_Item_Magazine01"}, // 2.74%
			{4562.28070175439, "1Rnd_HE_Grenade_shell"}, // 1.76%
			{4650, "Exile_Item_ZipTie"}, // 0.88%
			{4736.84210526316, "3Rnd_HE_Grenade_shell"}, // 0.87%
			{4813.11975591152, "ItemCompass"}, // 0.76%
			{4878.90922959573, "DemoCharge_Remote_Mag"}, // 0.66%
			{4944.69870327994, "HandGrenade"}, // 0.66%
			{5010.48817696415, "MiniGrenade"}, // 0.66%
			{5054.84063113328, "muzzle_snds_acp"}, // 0.44%
			{5099.19308530241, "muzzle_snds_L"}, // 0.44%
			{5143.05273442522, "SatchelCharge_Remote_Mag"}, // 0.44%
			{5184.33240418786, "Exile_Item_Heatpack"}, // 0.41%
			{5222.47122951204, "Rangefinder"}, // 0.38%
			{5258.59094055435, "ItemMap"}, // 0.36%
			{5289.55069287633, "ItemWatch"}, // 0.31%
			{5320.51044519832, "ItemRadio"}, // 0.31%
			{5350.75847907611, "Exile_Item_Heatpack"}, // 0.30%
			{5381.00651295391, "Exile_Item_Vishpirin"}, // 0.30%
			{5407.99706626025, "U_IG_Guerilla2_1"}, // 0.27%
			{5434.9876195666, "U_IG_Guerilla2_3"}, // 0.27%
			{5461.97817287294, "U_IG_Guerilla2_2"}, // 0.27%
			{5488.96872617928, "U_IG_Guerilla1_1"}, // 0.27%
			{5514.27236990398, "U_IG_Guerilla3_1"}, // 0.25%
			{5539.57601362868, "U_IG_Guerilla3_2"}, // 0.25%
			{5564.21626594486, "CUP_acc_Glock17_Flashlight"}, // 0.25%
			{5588.85651826104, "CUP_acc_CZ_M3X"}, // 0.25%
			{5613.49677057723, "CUP_muzzle_snds_MicroUzi"}, // 0.25%
			{5638.11973148828, "10Rnd_93x64_DMR_05_Mag"}, // 0.25%
			{5662.74269239933, "10Rnd_338_Mag"}, // 0.25%
			{5685.11111345196, "UGL_FlareYellow_F"}, // 0.22%
			{5707.47953450459, "UGL_FlareRed_F"}, // 0.22%
			{5729.84795555722, "UGL_FlareWhite_F"}, // 0.22%
			{5752.21637660985, "UGL_FlareGreen_F"}, // 0.22%
			{5774.39260369442, "CUP_muzzle_snds_M9"}, // 0.22%
			{5796.32242825582, "IEDLandSmall_Remote_Mag"}, // 0.22%
			{5818.25225281723, "APERSTripMine_Wire_Mag"}, // 0.22%
			{5840.18207737863, "V_PlateCarrierIAGL_dgtl"}, // 0.22%
			{5862.11190194003, "APERSMine_Range_Mag"}, // 0.22%
			{5884.04172650144, "APERSBoundingMine_Range_Mag"}, // 0.22%
			{5905.97155106284, "V_PlateCarrierIA2_dgtl"}, // 0.22%
			{5927.90137562424, "IEDUrbanSmall_Remote_Mag"}, // 0.22%
			{5949.83120018565, "V_PlateCarrierIA1_dgtl"}, // 0.22%
			{5971.76102474705, "V_PlateCarrier2_rgr"}, // 0.22%
			{5993.69084930846, "V_PlateCarrier3_rgr"}, // 0.22%
			{6015.62067386986, "V_PlateCarrier1_rgr"}, // 0.22%
			{6037.55049843126, "V_PlateCarrier1_blk"}, // 0.22%
			{6059.48032299267, "V_PlateCarrierGL_rgr"}, // 0.22%
			{6081.41014755407, "V_PlateCarrierSpec_rgr"}, // 0.22%
			{6102.95523835124, "10Rnd_127x54_Mag"}, // 0.22%
			{6123.59507323256, "Binocular"}, // 0.21%
			{6142.8639567384, "hgun_P07_F"}, // 0.19%
			{6161.6609492196, "SmokeShell"}, // 0.19%
			{6180.4579417008, "SmokeShellRed"}, // 0.19%
			{6199.254934182, "SmokeShellGreen"}, // 0.19%
			{6218.05192666321, "SmokeShellYellow"}, // 0.19%
			{6236.84891914441, "SmokeShellPurple"}, // 0.19%
			{6255.64591162561, "SmokeShellBlue"}, // 0.19%
			{6274.44290410682, "SmokeShellOrange"}, // 0.19%
			{6292.79422173142, "hgun_Rook40_F"}, // 0.18%
			{6311.14553935603, "hgun_ACPC2_F"}, // 0.18%
			{6328.97466501571, "30Rnd_9x21_Mag"}, // 0.18%
			{6346.80379067538, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{6364.63291633506, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{6382.46204199474, "10Rnd_9x21_Mag"}, // 0.18%
			{6400.29116765442, "11Rnd_45ACP_Mag"}, // 0.18%
			{6418.12029331409, "9Rnd_45ACP_Mag"}, // 0.18%
			{6435.94941897377, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{6453.1975955951, "optic_Yorris"}, // 0.17%
			{6470.44577221643, "optic_MRD"}, // 0.17%
			{6487.37405784278, "20Rnd_762x51_Mag"}, // 0.17%
			{6504.15258133271, "B_Carryall_ghex_F"}, // 0.17%
			{6520.93110482264, "B_Carryall_cbr"}, // 0.17%
			{6537.60777749291, "Exile_Weapon_RPK"}, // 0.17%
			{6554.12396335505, "CUP_hgun_Phantom"}, // 0.17%
			{6570.17017644877, "CUP_18Rnd_9x19_Phantom"}, // 0.16%
			{6586.21638954248, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.16%
			{6602.26260263619, "CUP_30Rnd_9x19_UZI"}, // 0.16%
			{6618.15804594244, "B_Carryall_khk"}, // 0.16%
			{6634.05348924869, "B_Carryall_oli"}, // 0.16%
			{6649.17750618759, "Exile_Item_Bandage"}, // 0.15%
			{6663.84532327128, "150Rnd_93x64_Mag"}, // 0.15%
			{6678.46520631222, "muzzle_snds_338_sand"}, // 0.15%
			{6693.08508935315, "muzzle_snds_93mmg"}, // 0.15%
			{6707.70497239409, "U_O_GhillieSuit"}, // 0.15%
			{6722.32485543502, "V_RebreatherB"}, // 0.15%
			{6736.94473847596, "V_RebreatherIA"}, // 0.15%
			{6751.5646215169, "V_RebreatherIR"}, // 0.15%
			{6766.18450455783, "muzzle_snds_93mmg_tan"}, // 0.15%
			{6780.80438759877, "muzzle_snds_338_black"}, // 0.15%
			{6795.4242706397, "muzzle_snds_338_green"}, // 0.15%
			{6810.04415368064, "U_I_GhillieSuit"}, // 0.15%
			{6824.66403672158, "muzzle_snds_B"}, // 0.15%
			{6839.28391976251, "U_B_GhillieSuit"}, // 0.15%
			{6853.54722029025, "6Rnd_45ACP_Cylinder"}, // 0.14%
			{6867.77197135711, "srifle_DMR_05_blk_F"}, // 0.14%
			{6881.99672242397, "srifle_DMR_05_hex_F"}, // 0.14%
			{6896.22147349082, "srifle_DMR_05_tan_F"}, // 0.14%
			{6909.64789669168, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.13%
			{6923.07431989254, "1Rnd_SmokeRed_Grenade_shell"}, // 0.13%
			{6936.5007430934, "1Rnd_Smoke_Grenade_shell"}, // 0.13%
			{6949.92716629426, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.13%
			{6963.35358949512, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.13%
			{6976.78001269598, "1Rnd_SmokePurple_Grenade_shell"}, // 0.13%
			{6990.20643589684, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.13%
			{7003.54777403305, "arifle_MX_SW_Black_F"}, // 0.13%
			{7016.79397678826, "B_Carryall_oucamo"}, // 0.13%
			{7030.04017954347, "B_Carryall_mcamo"}, // 0.13%
			{7043.28638229868, "B_Carryall_ocamo"}, // 0.13%
			{7055.81771061948, "optic_KHS_blk"}, // 0.13%
			{7068.34903894029, "optic_KHS_hex"}, // 0.13%
			{7080.88036726109, "optic_KHS_old"}, // 0.13%
			{7093.41169558189, "optic_AMS_snd"}, // 0.13%
			{7105.94302390269, "optic_AMS_khk"}, // 0.13%
			{7118.47435222349, "optic_AMS"}, // 0.13%
			{7131.00568054429, "optic_KHS_tan"}, // 0.13%
			{7143.45233772779, "srifle_DMR_04_Tan_F"}, // 0.12%
			{7155.89899491129, "srifle_DMR_04_F"}, // 0.12%
			{7168.10341901503, "O_NVGoggles_ghex_F"}, // 0.12%
			{7180.30784311877, "NVGoggles"}, // 0.12%
			{7192.5122672225, "O_NVGoggles_urb_F"}, // 0.12%
			{7204.71669132624, "NVGoggles_tna_F"}, // 0.12%
			{7216.92111542998, "O_NVGoggles_hex_F"}, // 0.12%
			{7229.0203289811, "Exile_Item_InstaDoc"}, // 0.12%
			{7241.10410986187, "optic_DMS"}, // 0.12%
			{7253.11131418446, "CUP_arifle_RPK74"}, // 0.12%
			{7265.03967064046, "hgun_Pistol_heavy_02_F"}, // 0.12%
			{7276.96802709645, "hgun_Pistol_heavy_01_F"}, // 0.12%
			{7288.89638355245, "hgun_Pistol_Signal_F"}, // 0.12%
			{7300.82474000844, "Exile_Weapon_Colt1911"}, // 0.12%
			{7312.75309646443, "CUP_hgun_SA61"}, // 0.12%
			{7324.68145292043, "Exile_Weapon_Makarov"}, // 0.12%
			{7336.60980937642, "Exile_Weapon_TaurusGold"}, // 0.12%
			{7348.53816583241, "hgun_Pistol_01_F"}, // 0.12%
			{7360.46652228841, "Exile_Weapon_Taurus"}, // 0.12%
			{7372.3948787444, "hgun_P07_khk_F"}, // 0.12%
			{7384.03111218515, "optic_SOS_khk_F"}, // 0.12%
			{7395.66734562589, "optic_LRPS_ghex_F"}, // 0.12%
			{7407.30357906664, "optic_SOS"}, // 0.12%
			{7418.93981250738, "optic_LRPS"}, // 0.12%
			{7430.57604594813, "optic_LRPS_tna_F"}, // 0.12%
			{7441.6730656057, "srifle_EBR_F"}, // 0.11%
			{7452.77008526328, "srifle_DMR_01_F"}, // 0.11%
			{7463.78087583805, "CUP_hgun_Duty_M3X"}, // 0.11%
			{7474.74578811875, "V_PlateCarrierL_CTRG"}, // 0.11%
			{7485.71070039945, "V_PlateCarrierH_CTRG"}, // 0.11%
			{7496.40817579526, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.11%
			{7507.08124630423, "CUP_lmg_m249_para"}, // 0.11%
			{7517.7543168132, "CUP_lmg_minimi_railed"}, // 0.11%
			{7528.42288011334, "srifle_DMR_02_F"}, // 0.11%
			{7539.09144341348, "srifle_DMR_02_sniper_F"}, // 0.11%
			{7549.76000671363, "srifle_DMR_02_camo_F"}, // 0.11%
			{7560.2863225031, "3Rnd_UGL_FlareWhite_F"}, // 0.11%
			{7570.81263829257, "3Rnd_UGL_FlareGreen_F"}, // 0.11%
			{7581.33895408205, "3Rnd_UGL_FlareRed_F"}, // 0.11%
			{7591.86526987152, "3Rnd_UGL_FlareYellow_F"}, // 0.11%
			{7602.18518731218, "ItemGPS"}, // 0.10%
			{7612.4895627085, "CUP_srifle_SVD"}, // 0.10%
			{7622.5971361689, "B_FieldPack_cbr"}, // 0.10%
			{7632.7047096293, "B_FieldPack_oucamo"}, // 0.10%
			{7642.8122830897, "B_FieldPack_ocamo"}, // 0.10%
			{7652.9198565501, "B_FieldPack_blk"}, // 0.10%
			{7662.92586015227, "CUP_lmg_Pecheneg"}, // 0.10%
			{7672.93186375443, "LMG_Mk200_F"}, // 0.10%
			{7682.93786735659, "arifle_MX_SW_F"}, // 0.10%
			{7692.84592062228, "CUP_srifle_M24_des"}, // 0.10%
			{7702.75397388798, "CUP_srifle_M24_wdl"}, // 0.10%
			{7712.66202715367, "CUP_srifle_M40A3"}, // 0.10%
			{7722.53770973761, "bipod_01_F_blk"}, // 0.10%
			{7732.41339232156, "bipod_03_F_oli"}, // 0.10%
			{7742.2890749055, "bipod_03_F_blk"}, // 0.10%
			{7752.16475748945, "bipod_02_F_tan"}, // 0.10%
			{7762.04044007339, "bipod_02_F_blk"}, // 0.10%
			{7771.91612265733, "bipod_01_F_snd"}, // 0.10%
			{7781.79180524128, "bipod_01_F_khk"}, // 0.10%
			{7791.13074193663, "CUP_lmg_PKM"}, // 0.09%
			{7800.46967863198, "CUP_lmg_L110A1"}, // 0.09%
			{7809.76443871098, "bipod_02_F_hex"}, // 0.09%
			{7819.05919878999, "bipod_01_F_mtp"}, // 0.09%
			{7828.26972510578, "V_HarnessOSpec_gry"}, // 0.09%
			{7837.48025142157, "V_HarnessOSpec_brn"}, // 0.09%
			{7846.69077773736, "V_HarnessOGL_gry"}, // 0.09%
			{7855.90130405315, "V_HarnessO_gry"}, // 0.09%
			{7865.11183036894, "V_HarnessOGL_brn"}, // 0.09%
			{7874.32235668472, "V_HarnessO_brn"}, // 0.09%
			{7883.53288300051, "V_BandollierB_blk"}, // 0.09%
			{7892.7434093163, "V_BandollierB_oli"}, // 0.09%
			{7901.95393563209, "V_BandollierB_rgr"}, // 0.09%
			{7911.16446194788, "V_BandollierB_cbr"}, // 0.09%
			{7920.37498826367, "V_BandollierB_khk"}, // 0.09%
			{7929.55064707597, "CUP_hgun_PB6P9_snds"}, // 0.09%
			{7938.46520990581, "16Rnd_9x21_Mag"}, // 0.09%
			{7947.13707969435, "CUP_lmg_M240"}, // 0.09%
			{7955.80894948289, "Exile_Weapon_PKP"}, // 0.09%
			{7964.48081927143, "CUP_lmg_Mk48_des"}, // 0.09%
			{7973.15268905997, "CUP_lmg_M60E4"}, // 0.09%
			{7981.82455884851, "Exile_Weapon_PK"}, // 0.09%
			{7990.32796020906, "muzzle_snds_B"}, // 0.09%
			{7998.76250811729, "CUP_arifle_FNFAL"}, // 0.08%
			{8007.19705602552, "U_I_C_Soldier_Para_1_F"}, // 0.08%
			{8015.63160393375, "U_I_C_Soldier_Para_2_F"}, // 0.08%
			{8024.06615184198, "U_I_C_Soldier_Para_3_F"}, // 0.08%
			{8032.50069975022, "U_I_C_Soldier_Para_4_F"}, // 0.08%
			{8040.93524765845, "U_I_C_Soldier_Para_5_F"}, // 0.08%
			{8049.36979556668, "U_I_C_Soldier_Camo_F"}, // 0.08%
			{8057.31146042842, "B_Bergen_rgr"}, // 0.08%
			{8065.25312529017, "B_Bergen_sgg"}, // 0.08%
			{8073.19479015191, "B_Bergen_mcamo"}, // 0.08%
			{8081.13645501365, "B_Bergen_blk"}, // 0.08%
			{8089.07811987539, "B_FieldPack_ghex_F"}, // 0.08%
			{8097.01978473714, "B_ViperHarness_base_F"}, // 0.08%
			{8104.96144959888, "B_ViperLightHarness_blk_F"}, // 0.08%
			{8112.90311446062, "B_ViperHarness_ghex_F"}, // 0.08%
			{8120.84477932236, "B_ViperLightHarness_oli_F"}, // 0.08%
			{8128.78644418411, "B_ViperHarness_blk_F"}, // 0.08%
			{8136.72810904585, "B_ViperLightHarness_hex_F"}, // 0.08%
			{8144.66977390759, "B_ViperLightHarness_ghex_F"}, // 0.08%
			{8152.61143876933, "B_ViperLightHarness_base_F"}, // 0.08%
			{8160.55310363108, "B_ViperLightHarness_khk_F"}, // 0.08%
			{8168.49476849282, "B_ViperHarness_oli_F"}, // 0.08%
			{8176.43643335456, "B_ViperHarness_khk_F"}, // 0.08%
			{8184.3780982163, "B_ViperHarness_hex_F"}, // 0.08%
			{8192.30454082886, "CUP_srifle_VSSVintorez"}, // 0.08%
			{8199.9323058937, "optic_LRPS"}, // 0.08%
			{8207.56007095853, "optic_AMS"}, // 0.08%
			{8215.18783602337, "muzzle_snds_B"}, // 0.08%
			{8222.8156010882, "optic_KHS_hex"}, // 0.08%
			{8230.44336615304, "CUP_optic_ACOG"}, // 0.08%
			{8238.07113121787, "CUP_optic_LeupoldM3LR"}, // 0.08%
			{8245.69889628271, "CUP_optic_SB_11_4x20_PM"}, // 0.08%
			{8253.32666134754, "CUP_muzzle_snds_M14"}, // 0.08%
			{8260.95442641238, "optic_SOS"}, // 0.08%
			{8268.58219147721, "optic_DMS"}, // 0.08%
			{8276.20995654205, "optic_KHS_blk"}, // 0.08%
			{8283.55048359189, "CUP_hgun_MicroUzi"}, // 0.07%
			{8290.7642416713, "U_B_CTRG_Soldier_urb_2_F"}, // 0.07%
			{8297.97799975071, "U_O_T_Soldier_F"}, // 0.07%
			{8305.19175783012, "U_O_T_Officer_F"}, // 0.07%
			{8312.40551590953, "U_B_CombatUniform_mcam_tshirt"}, // 0.07%
			{8319.61927398894, "U_B_CTRG_Soldier_urb_3_F"}, // 0.07%
			{8326.83303206835, "U_B_CTRG_Soldier_urb_1_F"}, // 0.07%
			{8334.04679014776, "U_B_CombatUniform_mcam"}, // 0.07%
			{8341.26054822717, "U_B_CTRG_3"}, // 0.07%
			{8348.47430630658, "U_B_CTRG_2"}, // 0.07%
			{8355.68806438599, "U_B_CTRG_1"}, // 0.07%
			{8362.9018224654, "U_B_CTRG_Soldier_3_F"}, // 0.07%
			{8370.11558054481, "U_B_CTRG_Soldier_2_F"}, // 0.07%
			{8377.32933862422, "U_B_CTRG_Soldier_F"}, // 0.07%
			{8384.54309670363, "U_B_T_Soldier_SL_F"}, // 0.07%
			{8391.75685478304, "U_B_T_Soldier_AR_F"}, // 0.07%
			{8398.97061286245, "U_B_CombatUniform_mcam_vest"}, // 0.07%
			{8406.18437094186, "U_B_CombatUniform_mcam_worn"}, // 0.07%
			{8413.39812902127, "U_B_GEN_Commander_F"}, // 0.07%
			{8420.61188710067, "U_B_GEN_Soldier_F"}, // 0.07%
			{8427.80199351425, "H_Booniehat_dirty"}, // 0.07%
			{8434.99209992782, "H_Booniehat_tan"}, // 0.07%
			{8442.1822063414, "H_Booniehat_khk"}, // 0.07%
			{8449.37231275497, "H_Booniehat_indp"}, // 0.07%
			{8456.56241916855, "H_Booniehat_mcamo"}, // 0.07%
			{8463.75252558212, "H_Booniehat_grn"}, // 0.07%
			{8470.9426319957, "Exile_Headgear_GasMask"}, // 0.07%
			{8478.13273840927, "H_Booniehat_khk_hs"}, // 0.07%
			{8485.32284482285, "H_Booniehat_dgtl"}, // 0.07%
			{8492.45449508672, "H_MilCap_ocamo"}, // 0.07%
			{8499.58614535059, "H_MilCap_mcamo"}, // 0.07%
			{8506.71779561446, "H_MilCap_oucamo"}, // 0.07%
			{8513.84944587833, "H_MilCap_blue"}, // 0.07%
			{8520.9810961422, "H_MilCap_rucamo"}, // 0.07%
			{8528.11274640607, "H_MilCap_dgtl"}, // 0.07%
			{8535.24439666994, "Exile_Headgear_GasMask"}, // 0.07%
			{8542.14366731847, "20Rnd_650x39_Cased_Mag_F"}, // 0.07%
			{8548.89130564506, "U_IG_leader"}, // 0.07%
			{8555.62878186573, "srifle_DMR_07_hex_F"}, // 0.07%
			{8562.36625808641, "srifle_DMR_07_ghex_F"}, // 0.07%
			{8569.10373430708, "srifle_DMR_07_blk_F"}, // 0.07%
			{8575.77440337519, "LMG_03_F"}, // 0.07%
			{8582.44507244329, "CUP_lmg_L7A2"}, // 0.07%
			{8589.1157415114, "LMG_Zafir_F"}, // 0.07%
			{8595.69468887982, "V_Chestrig_khk"}, // 0.07%
			{8602.27363624824, "V_Chestrig_rgr"}, // 0.07%
			{8608.85258361667, "V_Chestrig_oli"}, // 0.07%
			{8615.43153098509, "V_Chestrig_blk"}, // 0.07%
			{8622.00226493607, "CUP_5Rnd_762x51_M24"}, // 0.07%
			{8628.57299888705, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.07%
			{8635.14373283804, "CUP_10Rnd_762x54_SVD_M"}, // 0.07%
			{8641.71446678902, "CUP_srifle_SVD_des"}, // 0.07%
			{8648.16441518943, "U_B_T_Sniper_F"}, // 0.06%
			{8654.61436358985, "U_B_T_Soldier_F"}, // 0.06%
			{8661.06431199026, "U_O_T_Sniper_F"}, // 0.06%
			{8667.51426039067, "U_O_T_FullGhillie_tna_F"}, // 0.06%
			{8673.96420879109, "U_B_T_FullGhillie_tna_F"}, // 0.06%
			{8680.20640604452, "20Rnd_762x51_Mag"}, // 0.06%
			{8686.44660002541, "6Rnd_GreenSignal_F"}, // 0.06%
			{8692.6867940063, "6Rnd_RedSignal_F"}, // 0.06%
			{8698.63162596571, "srifle_LRR_tna_F"}, // 0.06%
			{8704.57645792513, "srifle_LRR_F"}, // 0.06%
			{8710.52128988454, "CUP_srifle_CZ750"}, // 0.06%
			{8716.43495044043, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8722.20595690395, "U_I_CombatUniform_tshirt"}, // 0.06%
			{8727.97696336748, "U_I_HeliPilotCoveralls"}, // 0.06%
			{8733.74796983101, "U_I_pilotCoveralls"}, // 0.06%
			{8739.51897629453, "U_B_PilotCoveralls"}, // 0.06%
			{8745.28998275806, "U_B_HeliPilotCoveralls"}, // 0.06%
			{8751.06098922159, "U_I_CombatUniform_shortsleeve"}, // 0.06%
			{8756.83199568511, "U_I_CombatUniform"}, // 0.06%
			{8762.60300214864, "U_O_PilotCoveralls"}, // 0.06%
			{8768.22603408746, "CUP_arifle_Mk17_STD_EGLM"}, // 0.06%
			{8773.84906602628, "CUP_srifle_M14"}, // 0.06%
			{8779.4720979651, "CUP_arifle_FNFAL_railed"}, // 0.06%
			{8785.05722182344, "10Rnd_762x54_Mag"}, // 0.06%
			{8790.44980163362, "H_Cap_khaki_specops_UK"}, // 0.05%
			{8795.8423814438, "H_Bandanna_sgg"}, // 0.05%
			{8801.23496125398, "H_Hat_camo"}, // 0.05%
			{8806.62754106416, "H_Bandanna_cbr"}, // 0.05%
			{8812.02012087434, "H_Watchcap_khk"}, // 0.05%
			{8817.41270068452, "H_BandMask_blk"}, // 0.05%
			{8822.80528049471, "H_Watchcap_blk"}, // 0.05%
			{8828.19786030489, "H_Bandanna_gry"}, // 0.05%
			{8833.59044011507, "H_Bandanna_mcamo"}, // 0.05%
			{8838.98301992525, "H_Bandanna_camo"}, // 0.05%
			{8844.37559973543, "H_Cap_tan_specops_US"}, // 0.05%
			{8849.76817954561, "H_Cap_brn_SPECOPS"}, // 0.05%
			{8855.16075935579, "H_Bandanna_khk_hs"}, // 0.05%
			{8860.55333916597, "H_Bandanna_khk"}, // 0.05%
			{8865.92390844632, "3Rnd_SmokePurple_Grenade_shell"}, // 0.05%
			{8871.29447772666, "3Rnd_SmokeRed_Grenade_shell"}, // 0.05%
			{8876.665047007, "3Rnd_Smoke_Grenade_shell"}, // 0.05%
			{8882.03561628735, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.05%
			{8887.40618556769, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.05%
			{8892.77675484803, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.05%
			{8898.14732412837, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.05%
			{8903.49606182628, "H_HelmetSpecB"}, // 0.05%
			{8908.84479952418, "H_HelmetSpecB_paint1"}, // 0.05%
			{8914.19353722208, "H_HelmetSpecB_blk"}, // 0.05%
			{8919.54227491999, "H_HelmetB_light"}, // 0.05%
			{8924.89101261789, "H_HelmetB_plain_blk"}, // 0.05%
			{8930.23975031579, "H_HelmetB"}, // 0.05%
			{8935.58848801369, "H_HelmetSpecB_paint2"}, // 0.05%
			{8940.9372257116, "H_HelmetIA"}, // 0.05%
			{8946.2859634095, "H_HelmetB_paint"}, // 0.05%
			{8951.62024505957, "srifle_DMR_03_woodland_F"}, // 0.05%
			{8956.95452670964, "srifle_DMR_06_camo_F"}, // 0.05%
			{8962.28880835972, "srifle_DMR_06_olive_F"}, // 0.05%
			{8967.62309000979, "srifle_DMR_03_F"}, // 0.05%
			{8972.95737165986, "srifle_DMR_03_khaki_F"}, // 0.05%
			{8978.29165330993, "srifle_DMR_03_tan_F"}, // 0.05%
			{8983.59013441201, "B_Bergen_tna_F"}, // 0.05%
			{8988.8886155141, "B_Bergen_hex_F"}, // 0.05%
			{8994.18709661618, "B_Bergen_dgtl_F"}, // 0.05%
			{8999.48557771826, "B_Bergen_mcamo_F"}, // 0.05%
			{9004.78405882035, "B_Bergen_Base_F"}, // 0.05%
			{9010.04064598113, "CUP_5Rnd_762x67_G22"}, // 0.05%
			{9015.20060470146, "Exile_Item_MobilePhone"}, // 0.05%
			{9020.35279239962, "CUP_srifle_AWM_wdl"}, // 0.05%
			{9025.50498009778, "CUP_srifle_AWM_des"}, // 0.05%
			{9030.65716779595, "CUP_srifle_G22_des"}, // 0.05%
			{9035.58521825918, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.05%
			{9040.51326872242, "CUP_10Rnd_762x51_CZ750"}, // 0.05%
			{9045.01169427348, "CUP_arifle_Mk20"}, // 0.04%
			{9049.51011982453, "CUP_arifle_Mk17_STD_FG"}, // 0.04%
			{9053.98559422482, "muzzle_snds_B_snd_F"}, // 0.04%
			{9058.46106862511, "muzzle_snds_B_khk_F"}, // 0.04%
			{9062.78932347275, "U_B_SpecopsUniform_sgg"}, // 0.04%
			{9067.1033873209, "CUP_30Rnd_545x39_AK_M"}, // 0.04%
			{9071.41745116904, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.04%
			{9075.71741676932, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.04%
			{9080.01738236959, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.04%
			{9084.31734796987, "CUP_20Rnd_762x51_B_SCAR"}, // 0.04%
			{9088.61731357014, "CUP_20Rnd_762x51_DMR"}, // 0.04%
			{9092.91727917042, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.04%
			{9097.2172447707, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.04%
			{9101.51721037097, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.04%
			{9105.78818743911, "CUP_5Rnd_86x70_L115A1"}, // 0.04%
			{9109.81464703071, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.04%
			{9113.84110662231, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.04%
			{9117.86756621391, "CUP_30Rnd_762x39_AK47_M"}, // 0.04%
			{9121.85480704326, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9125.84204787261, "Exile_Weapon_AK47"}, // 0.04%
			{9129.82928870195, "Exile_Weapon_AK107_GL"}, // 0.04%
			{9133.8165295313, "Exile_Weapon_AK74_GL"}, // 0.04%
			{9137.80377036065, "Exile_Weapon_AK107"}, // 0.04%
			{9141.79101118999, "Exile_Weapon_AK74"}, // 0.04%
			{9145.75423249627, "srifle_GM6_ghex_F"}, // 0.04%
			{9149.71745380255, "srifle_GM6_F"}, // 0.04%
			{9153.6648222236, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9157.60094458078, "CUP_srifle_M110"}, // 0.04%
			{9161.4148271132, "CUP_muzzle_snds_M110"}, // 0.04%
			{9165.20308855375, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9168.9913499943, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9172.77961143485, "30Rnd_556x45_Stanag"}, // 0.04%
			{9176.5678728754, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9180.30672821045, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.04%
			{9183.90178141724, "H_Watchcap_camo"}, // 0.04%
			{9187.49683462403, "H_Watchcap_sgg"}, // 0.04%
			{9191.09188783082, "H_TurbanO_blk"}, // 0.04%
			{9194.6869410376, "H_Shemag_khk"}, // 0.04%
			{9198.28199424439, "H_Shemag_tan"}, // 0.04%
			{9201.87704745118, "H_Cap_tan_Syndikat_F"}, // 0.04%
			{9205.47210065797, "H_Shemag_olive_hs"}, // 0.04%
			{9209.06715386475, "H_ShemagOpen_khk"}, // 0.04%
			{9212.66220707154, "H_ShemagOpen_tan"}, // 0.04%
			{9216.25726027833, "H_MilCap_tna_F"}, // 0.04%
			{9219.85231348511, "H_MilCap_ghex_F"}, // 0.04%
			{9223.4473666919, "H_Booniehat_tna_F"}, // 0.04%
			{9227.04241989869, "H_MilCap_gen_F"}, // 0.04%
			{9230.63747310548, "H_Cap_oli_Syndikat_F"}, // 0.04%
			{9234.23252631226, "H_Cap_blk_Syndikat_F"}, // 0.04%
			{9237.82757951905, "H_Cap_grn_Syndikat_F"}, // 0.04%
			{9241.42263272584, "H_FakeHeadgear_Syndikat_F"}, // 0.04%
			{9245.01768593263, "H_Shemag_olive"}, // 0.04%
			{9248.60620267904, "Exile_Weapon_CZ550"}, // 0.04%
			{9252.17202781097, "H_HelmetIA_net"}, // 0.04%
			{9255.73785294291, "H_BandMask_khk"}, // 0.04%
			{9259.30367807485, "H_BandMask_reaper"}, // 0.04%
			{9262.86950320678, "H_BandMask_demon"}, // 0.04%
			{9266.43532833872, "H_Helmet_Skate"}, // 0.04%
			{9270.00115347066, "H_HelmetB_Enh_tna_F"}, // 0.04%
			{9273.56697860259, "H_HelmetB_Light_tna_F"}, // 0.04%
			{9277.13280373453, "H_Beret_gen_F"}, // 0.04%
			{9280.69862886646, "H_HelmetB_tna_F"}, // 0.04%
			{9284.2644539984, "H_HelmetSpecO_ghex_F"}, // 0.04%
			{9287.83027913034, "H_HelmetLeaderO_ghex_F"}, // 0.04%
			{9291.39610426227, "H_HelmetCrew_O_ghex_F"}, // 0.04%
			{9294.96192939421, "H_HelmetB_TI_tna_F"}, // 0.04%
			{9298.52775452615, "H_HelmetB_light_sand"}, // 0.04%
			{9302.09357965808, "H_HelmetB_light_black"}, // 0.04%
			{9305.65940479002, "H_HelmetB_light_desert"}, // 0.04%
			{9309.22522992196, "H_HelmetB_light_snakeskin"}, // 0.04%
			{9312.79105505389, "H_HelmetB_light_grass"}, // 0.04%
			{9316.35688018583, "H_HelmetB_black"}, // 0.04%
			{9319.92270531777, "H_HelmetB_desert"}, // 0.04%
			{9323.4885304497, "H_HelmetB_snakeskin"}, // 0.04%
			{9327.05435558164, "H_HelmetB_grass"}, // 0.04%
			{9330.62018071357, "H_HelmetIA_camo"}, // 0.04%
			{9334.18600584551, "H_HelmetB_sand"}, // 0.04%
			{9337.63725692403, "150Rnd_762x54_Box"}, // 0.03%
			{9341.08850800254, "100Rnd_65x39_caseless_mag"}, // 0.03%
			{9344.52848048276, "CUP_20Rnd_762x51_L129_M"}, // 0.03%
			{9347.96845296298, "CUP_20Rnd_762x51_B_M110"}, // 0.03%
			{9351.4084254432, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.03%
			{9354.84839792342, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.03%
			{9358.28516147409, "acc_flashlight"}, // 0.03%
			{9361.65898063739, "U_I_G_resistanceLeader_F"}, // 0.03%
			{9364.94434761288, "7Rnd_408_Mag"}, // 0.03%
			{9368.22971458837, "5Rnd_127x108_Mag"}, // 0.03%
			{9371.41950725185, "CUP_arifle_AKM"}, // 0.03%
			{9374.60929991532, "arifle_MXC_F"}, // 0.03%
			{9377.7990925788, "arifle_MX_F"}, // 0.03%
			{9380.98888524228, "CUP_arifle_AK107_kobra"}, // 0.03%
			{9384.17867790575, "arifle_TRG21_F"}, // 0.03%
			{9387.36847056923, "arifle_TRG20_F"}, // 0.03%
			{9390.55826323271, "CUP_arifle_AK107_GL"}, // 0.03%
			{9393.74805589619, "arifle_MX_khk_F"}, // 0.03%
			{9396.93784855966, "arifle_MXC_khk_F"}, // 0.03%
			{9400.12764122314, "CUP_arifle_AK74M"}, // 0.03%
			{9403.01314445491, "U_O_Wetsuit"}, // 0.03%
			{9405.89864768667, "U_I_OfficerUniform"}, // 0.03%
			{9408.78415091843, "U_B_Wetsuit"}, // 0.03%
			{9411.6696541502, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9414.55515738196, "U_I_Wetsuit"}, // 0.03%
			{9417.44066061373, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9420.32616384549, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9423.21166707726, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9426.09717030902, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9428.98267354078, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9431.86817677255, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9434.74421933798, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.03%
			{9437.62026190341, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.03%
			{9440.49630446884, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.03%
			{9443.37234703426, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.03%
			{9446.24838959969, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.03%
			{9449.12443216512, "200Rnd_556x45_Box_Tracer_F"}, // 0.03%
			{9452.00047473055, "200Rnd_556x45_Box_Red_F"}, // 0.03%
			{9454.87651729598, "200Rnd_556x45_Box_F"}, // 0.03%
			{9457.75255986141, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.03%
			{9460.62860242684, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.03%
			{9463.50464499227, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.03%
			{9466.3806875577, "150Rnd_762x54_Box_Tracer"}, // 0.03%
			{9469.25673012313, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9472.06824609254, "CUP_srifle_L129A1_HG"}, // 0.03%
			{9474.87976206195, "CUP_srifle_L129A1"}, // 0.03%
			{9477.67083064249, "arifle_Mk20C_F"}, // 0.03%
			{9480.46189922303, "arifle_Mk20_F"}, // 0.03%
			{9483.25296780357, "CUP_arifle_Sa58P_des"}, // 0.03%
			{9486.04403638411, "CUP_srifle_Mk12SPR"}, // 0.03%
			{9488.83510496466, "CUP_arifle_M16A2"}, // 0.03%
			{9491.6261735452, "CUP_arifle_M4A1"}, // 0.03%
			{9494.41724212574, "CUP_arifle_M4A1_camo"}, // 0.03%
			{9497.20831070628, "CUP_arifle_AK47"}, // 0.03%
			{9499.99937928682, "CUP_arifle_AK107"}, // 0.03%
			{9502.77743767656, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9505.40573125695, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9507.86056236457, "optic_Holosight_khk_F"}, // 0.02%
			{9510.31539347219, "optic_Holosight_blk_F"}, // 0.02%
			{9512.77022457981, "optic_Holosight"}, // 0.02%
			{9515.22505568743, "muzzle_snds_65_TI_hex_F"}, // 0.02%
			{9517.67988679505, "optic_Hamr"}, // 0.02%
			{9520.13471790267, "muzzle_snds_65_TI_ghex_F"}, // 0.02%
			{9522.58954901029, "muzzle_snds_H_MG_blk_F"}, // 0.02%
			{9525.04438011791, "muzzle_snds_H_MG_khk_F"}, // 0.02%
			{9527.49921122553, "optic_Hamr_khk_F"}, // 0.02%
			{9529.95404233315, "optic_Arco"}, // 0.02%
			{9532.40887344077, "optic_Arco_blk_F"}, // 0.02%
			{9534.86370454839, "muzzle_snds_65_TI_blk_F"}, // 0.02%
			{9537.31853565601, "optic_Arco_ghex_F"}, // 0.02%
			{9539.77336676363, "CUP_muzzle_snds_XM8"}, // 0.02%
			{9542.22819787125, "optic_MRCO"}, // 0.02%
			{9544.68302897887, "optic_DMS"}, // 0.02%
			{9547.13786008649, "muzzle_snds_58_wdm_F"}, // 0.02%
			{9549.59269119411, "optic_DMS_ghex_F"}, // 0.02%
			{9552.04752230173, "optic_ERCO_blk_F"}, // 0.02%
			{9554.50235340935, "optic_ERCO_khk_F"}, // 0.02%
			{9556.95718451696, "optic_ERCO_snd_F"}, // 0.02%
			{9559.41201562458, "CUP_optic_SB_11_4x20_PM"}, // 0.02%
			{9561.8668467322, "CUP_optic_ACOG"}, // 0.02%
			{9564.32167783982, "CUP_optic_SUSAT"}, // 0.02%
			{9566.77650894744, "CUP_optic_CompM4"}, // 0.02%
			{9569.23134005506, "CUP_optic_RCO"}, // 0.02%
			{9571.68617116268, "acc_pointer_IR"}, // 0.02%
			{9574.1410022703, "muzzle_snds_m_snd_F"}, // 0.02%
			{9576.59583337792, "CUP_optic_TrijiconRx01_desert"}, // 0.02%
			{9579.05066448554, "muzzle_snds_58_blk_F"}, // 0.02%
			{9581.50549559316, "CUP_optic_AN_PVS_4"}, // 0.02%
			{9583.96032670078, "CUP_optic_CompM2_Desert"}, // 0.02%
			{9586.4151578084, "muzzle_snds_m_khk_F"}, // 0.02%
			{9588.86998891602, "CUP_optic_PSO_1"}, // 0.02%
			{9591.32482002364, "CUP_optic_PSO_3"}, // 0.02%
			{9593.77965113126, "CUP_optic_Kobra"}, // 0.02%
			{9596.23448223888, "CUP_muzzle_Bizon"}, // 0.02%
			{9598.6893133465, "CUP_muzzle_PB6P9"}, // 0.02%
			{9601.14414445412, "CUP_optic_CompM2_Black"}, // 0.02%
			{9603.59897556174, "CUP_optic_PechenegScope"}, // 0.02%
			{9606.05380666936, "CUP_optic_HoloBlack"}, // 0.02%
			{9608.50863777698, "CUP_optic_HoloDesert"}, // 0.02%
			{9610.9634688846, "muzzle_snds_M"}, // 0.02%
			{9613.41829999222, "muzzle_snds_H"}, // 0.02%
			{9615.87313109984, "muzzle_snds_H_khk_F"}, // 0.02%
			{9618.32796220746, "CUP_muzzle_PBS4"}, // 0.02%
			{9620.78279331507, "muzzle_snds_H_snd_F"}, // 0.02%
			{9623.17513781268, "CUP_arifle_AK74"}, // 0.02%
			{9625.56748231029, "CUP_arifle_CZ805_B"}, // 0.02%
			{9627.9598268079, "CUP_arifle_CZ805_A1"}, // 0.02%
			{9630.35217130551, "CUP_arifle_XM8_Railed"}, // 0.02%
			{9632.74451580312, "CUP_arifle_M4A3_desert"}, // 0.02%
			{9635.13686030072, "Exile_Weapon_SVD"}, // 0.02%
			{9637.52920479833, "Exile_Weapon_SVDCamo"}, // 0.02%
			{9639.92154929594, "arifle_MXM_F"}, // 0.02%
			{9642.31389379355, "arifle_Katiba_GL_F"}, // 0.02%
			{9644.70623829116, "arifle_Katiba_F"}, // 0.02%
			{9647.09858278876, "Exile_Weapon_VSSVintorez"}, // 0.02%
			{9649.49092728637, "CUP_arifle_Sa58P"}, // 0.02%
			{9651.7638841507, "30Rnd_762x39_Mag_Tracer_F"}, // 0.02%
			{9654.03684101503, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.02%
			{9656.30979787936, "Exile_Magazine_20Rnd_9x39"}, // 0.02%
			{9658.58275474369, "30Rnd_762x39_Mag_F"}, // 0.02%
			{9660.85571160802, "30Rnd_762x39_Mag_Green_F"}, // 0.02%
			{9663.12866847235, "20Rnd_762x51_Mag"}, // 0.02%
			{9665.40162533668, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.02%
			{9667.67458220101, "30Rnd_762x39_AK47_M"}, // 0.02%
			{9669.94753906534, "30Rnd_545x39_Mag_F"}, // 0.02%
			{9672.22049592967, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.02%
			{9674.493452794, "30Rnd_545x39_Mag_Green_F"}, // 0.02%
			{9676.76640965833, "30Rnd_545x39_Mag_Tracer_F"}, // 0.02%
			{9679.03936652266, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.02%
			{9681.31232338699, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.02%
			{9683.58528025132, "30Rnd_580x42_Mag_F"}, // 0.02%
			{9685.85823711565, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.02%
			{9688.13119397998, "150Rnd_556x45_Drum_Mag_F"}, // 0.02%
			{9690.40415084431, "100Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9692.67710770864, "100Rnd_580x42_Mag_F"}, // 0.02%
			{9694.95006457297, "CUP_30Rnd_556x45_Stanag"}, // 0.02%
			{9697.2230214373, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.02%
			{9699.49597830163, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.02%
			{9701.76893516596, "Exile_Magazine_10Rnd_9x39"}, // 0.02%
			{9704.04189203029, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.02%
			{9706.31484889462, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.02%
			{9708.58780575895, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.02%
			{9710.86076262328, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.02%
			{9713.13371948761, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.02%
			{9715.40667635194, "30Rnd_65x39_caseless_mag"}, // 0.02%
			{9717.67963321627, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.02%
			{9719.9525900806, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.02%
			{9722.22554694493, "30Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9724.49850380926, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.02%
			{9726.77146067359, "Exile_Magazine_5Rnd_22LR"}, // 0.02%
			{9729.04441753792, "Exile_Magazine_10Rnd_762x54"}, // 0.02%
			{9731.31737440225, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.02%
			{9733.59033126658, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.02%
			{9735.86328813091, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.02%
			{9738.13624499524, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.02%
			{9740.40920185957, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.02%
			{9742.6821587239, "CUP_30Rnd_556x45_G36"}, // 0.02%
			{9744.95511558823, "CUP_30Rnd_545x39_AK_M"}, // 0.02%
			{9747.04367030836, "V_PlateCarrierGL_mtp"}, // 0.02%
			{9749.1322250285, "V_TacChestrig_oli_F"}, // 0.02%
			{9751.22077974863, "V_PlateCarrierIAGL_oli"}, // 0.02%
			{9753.30933446876, "V_PlateCarrier2_rgr_noflag_F"}, // 0.02%
			{9755.3978891889, "V_PlateCarrier1_rgr_noflag_F"}, // 0.02%
			{9757.48644390903, "V_PlateCarrierGL_blk"}, // 0.02%
			{9759.57499862917, "V_TacVest_gen_F"}, // 0.02%
			{9761.6635533493, "V_BandollierB_ghex_F"}, // 0.02%
			{9763.75210806944, "V_HarnessOGL_ghex_F"}, // 0.02%
			{9765.84066278957, "V_HarnessO_ghex_F"}, // 0.02%
			{9767.9292175097, "V_PlateCarrierIAGL_dgtl"}, // 0.02%
			{9770.01777222984, "V_PlateCarrierGL_tna_F"}, // 0.02%
			{9772.10632694997, "V_PlateCarrier2_tna_F"}, // 0.02%
			{9774.19488167011, "V_PlateCarrier1_tna_F"}, // 0.02%
			{9776.28343639024, "V_TacChestrig_cbr_F"}, // 0.02%
			{9778.37199111037, "V_TacChestrig_grn_F"}, // 0.02%
			{9780.46054583051, "V_PlateCarrierSpec_rgr"}, // 0.02%
			{9782.54910055064, "V_PlateCarrierSpec_mtp"}, // 0.02%
			{9784.63765527078, "V_PlateCarrierSpec_blk"}, // 0.02%
			{9786.72620999091, "V_PlateCarrierSpec_tna_F"}, // 0.02%
			{9788.81476471105, "V_PlateCarrierGL_rgr"}, // 0.02%
			{9790.83517081267, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9792.8555769143, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9794.87598301593, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9796.89638911755, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9798.91679521918, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9800.91041563385, "arifle_AK12_F"}, // 0.02%
			{9802.90403604852, "CUP_arifle_L85A2_NG"}, // 0.02%
			{9804.8976564632, "arifle_CTAR_ghex_F"}, // 0.02%
			{9806.89127687787, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9808.88489729254, "CUP_arifle_G36A"}, // 0.02%
			{9810.87851770721, "CUP_arifle_G36C"}, // 0.02%
			{9812.87213812189, "arifle_CTAR_hex_F"}, // 0.02%
			{9814.86575853656, "arifle_CTAR_blk_F"}, // 0.02%
			{9816.85937895123, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.02%
			{9818.8529993659, "CUP_arifle_AK74_GL"}, // 0.02%
			{9820.84661978058, "CUP_arifle_CZ805_GL"}, // 0.02%
			{9822.84024019525, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.02%
			{9824.83386060992, "CUP_arifle_L86A2"}, // 0.02%
			{9826.82748102459, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9828.82110143927, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9830.81472185394, "CUP_arifle_Mk16_STD_EGLM"}, // 0.02%
			{9832.80834226861, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9834.80196268328, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9836.79558309796, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9838.78920351263, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9840.7828239273, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9842.77644434197, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9844.77006475665, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9846.76368517132, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9848.75730558599, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9850.75092600066, "arifle_CTARS_hex_F"}, // 0.02%
			{9852.74454641534, "arifle_CTARS_ghex_F"}, // 0.02%
			{9854.73816683001, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9856.73178724468, "CUP_arifle_AKS74U"}, // 0.02%
			{9858.72540765935, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9860.71902807403, "arifle_CTARS_blk_F"}, // 0.02%
			{9862.7126484887, "CUP_arifle_Mk16_CQC"}, // 0.02%
			{9864.70626890337, "arifle_ARX_hex_F"}, // 0.02%
			{9866.69988931804, "arifle_ARX_ghex_F"}, // 0.02%
			{9868.69350973272, "arifle_ARX_blk_F"}, // 0.02%
			{9870.68713014739, "arifle_AKS_F"}, // 0.02%
			{9872.68075056206, "CUP_arifle_Mk16_SV"}, // 0.02%
			{9874.67437097673, "arifle_AK12_GL_F"}, // 0.02%
			{9876.6679913914, "arifle_AKM_FL_F"}, // 0.02%
			{9878.66161180608, "arifle_AKM_F"}, // 0.02%
			{9880.62547669217, "CUP_muzzle_snds_Mk12"}, // 0.02%
			{9882.58934157827, "CUP_muzzle_snds_L85"}, // 0.02%
			{9884.55320646437, "CUP_muzzle_snds_G36_black"}, // 0.02%
			{9886.51707135046, "CUP_optic_Elcan"}, // 0.02%
			{9888.31459795386, "H_Beret_Colonel"}, // 0.02%
			{9890.11212455725, "H_Beret_blk"}, // 0.02%
			{9891.90965116064, "H_Beret_red"}, // 0.02%
			{9893.70717776404, "H_Beret_grn"}, // 0.02%
			{9895.50470436743, "H_Beret_ocamo"}, // 0.02%
			{9897.30223097082, "H_Beret_02"}, // 0.02%
			{9899.09975757422, "H_Beret_brn_SF"}, // 0.02%
			{9900.89728417761, "H_Beret_grn_SF"}, // 0.02%
			{9902.68019674358, "H_PilotHelmetHeli_I"}, // 0.02%
			{9904.46310930955, "H_PilotHelmetHeli_O"}, // 0.02%
			{9906.24602187552, "H_PilotHelmetHeli_B"}, // 0.02%
			{9908.02893444149, "H_CrewHelmetHeli_B"}, // 0.02%
			{9909.81184700745, "H_PilotHelmetFighter_I"}, // 0.02%
			{9911.59475957342, "H_PilotHelmetFighter_O"}, // 0.02%
			{9913.37767213939, "H_PilotHelmetFighter_B"}, // 0.02%
			{9915.16058470536, "H_CrewHelmetHeli_O"}, // 0.02%
			{9916.94349727133, "H_HelmetCrew_O"}, // 0.02%
			{9918.72640983729, "H_HelmetO_oucamo"}, // 0.02%
			{9920.50932240326, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9922.29223496923, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9924.0751475352, "H_HelmetSpecO_blk"}, // 0.02%
			{9925.85806010117, "H_HelmetCrew_I"}, // 0.02%
			{9927.64097266714, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9929.4238852331, "H_HelmetO_ocamo"}, // 0.02%
			{9931.20679779907, "H_CrewHelmetHeli_I"}, // 0.02%
			{9932.98971036504, "H_HelmetCrew_B"}, // 0.02%
			{9934.77262293101, "H_HelmetO_ghex_F"}, // 0.02%
			{9936.55553549698, "H_HelmetB_camo"}, // 0.02%
			{9938.3233908359, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9940.09124617482, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9941.85910151375, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9943.50178500149, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.02%
			{9945.14446848924, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.02%
			{9946.78715197698, "CUP_5Rnd_127x99_as50_M"}, // 0.02%
			{9948.42983546473, "CUP_10Rnd_127x99_M107"}, // 0.02%
			{9950.02473179647, "arifle_MX_GL_F"}, // 0.02%
			{9951.61962812821, "CUP_arifle_Sa58RIS1"}, // 0.02%
			{9953.21452445995, "arifle_MX_GL_khk_F"}, // 0.02%
			{9954.80942079168, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9956.40431712342, "CUP_arifle_Sa58RIS2_gl"}, // 0.02%
			{9957.99921345516, "arifle_Mk20_GL_F"}, // 0.02%
			{9959.5941097869, "arifle_TRG21_GL_F"}, // 0.02%
			{9961.18900611864, "CUP_arifle_Mk16_CQC_FG"}, // 0.02%
			{9962.70431069486, "CUP_100Rnd_556x45_BetaCMag"}, // 0.02%
			{9964.14233197757, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.01%
			{9965.58035326029, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.01%
			{9967.018374543, "130Rnd_338_Mag"}, // 0.01%
			{9968.30836422308, "U_O_FullGhillie_sard"}, // 0.01%
			{9969.59835390317, "U_O_FullGhillie_lsh"}, // 0.01%
			{9970.88834358325, "U_O_FullGhillie_ard"}, // 0.01%
			{9972.17833326333, "U_B_FullGhillie_sard"}, // 0.01%
			{9973.46832294342, "U_I_FullGhillie_lsh"}, // 0.01%
			{9974.7583126235, "U_B_FullGhillie_ard"}, // 0.01%
			{9976.04830230358, "U_I_FullGhillie_sard"}, // 0.01%
			{9977.33829198366, "U_I_FullGhillie_ard"}, // 0.01%
			{9978.62828166375, "U_B_FullGhillie_lsh"}, // 0.01%
			{9979.89103547726, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9981.11845103107, "optic_NVS"}, // 0.01%
			{9982.34586658488, "CUP_acc_ANPEQ_2_camo"}, // 0.01%
			{9983.5732821387, "CUP_acc_ANPEQ_2_desert"}, // 0.01%
			{9984.80069769251, "CUP_acc_ANPEQ_2_grey"}, // 0.01%
			{9985.99686994131, "arifle_MXC_Black_F"}, // 0.01%
			{9987.19304219011, "arifle_MX_Black_F"}, // 0.01%
			{9988.38921443892, "arifle_MX_GL_Black_F"}, // 0.01%
			{9989.58538668772, "Exile_Weapon_DMR"}, // 0.01%
			{9990.78155893652, "arifle_MXM_khk_F"}, // 0.01%
			{9991.97773118533, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9993.17390343413, "arifle_MXM_Black_F"}, // 0.01%
			{9994.15951352678, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{9994.95696169265, "arifle_SDAR_F"}, // 0.01%
			{9995.75440985851, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.01%
			{9996.55185802438, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9997.34930619025, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9998.14675435612, "CUP_arifle_AK107_GL_pso"}, // 0.01%
			{9998.80382775122, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.01%
			{9999.20255183415, "CUP_arifle_AKS_Gold"}, // 0.00%
			{9999.60127591709, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.00%
			{10000, "Exile_Weapon_AKS_Gold"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine03
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  Exile_Item_Magazine02
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine03
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	*/
	class Medical
	{
		count = 11;
		half = 8500;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{2413.79310344828, "Exile_Item_Vishpirin"}, // 24.14%
			{4827.58620689655, "Exile_Item_Heatpack"}, // 24.14%
			{6034.48275862069, "Exile_Item_Bandage"}, // 12.07%
			{7000, "Exile_Item_InstaDoc"}, // 9.66%
			{7750, "Exile_Item_Can_Empty"}, // 7.50%
			{8500, "Exile_Item_ToiletPaper"}, // 7.50%
			{9250, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9437.5, "Exile_Item_Magazine01"}, // 1.88%
			{9625, "Exile_Item_Magazine02"}, // 1.88%
			{9812.5, "Exile_Item_Magazine03"}, // 1.88%
			{10000, "Exile_Item_Magazine04"} // 1.88%
		};
	};

	/**
	  Result of 100 rounds:

	  U_IG_Guerilla2_3
	  B_ViperHarness_base_F
	  B_Kitbag_cbr
	  H_HelmetSpecB
	  B_Carryall_mcamo
	  U_IG_Guerilla1_1
	  U_B_CTRG_2
	  B_AssaultPack_mcamo
	  B_ViperLightHarness_oli_F
	  U_IG_Guerilla2_1
	  10Rnd_93x64_DMR_05_Mag
	  O_NVGoggles_hex_F
	  B_AssaultPack_khk
	  B_ViperHarness_hex_F
	  U_I_OfficerUniform
	  srifle_EBR_F
	  B_AssaultPack_sgg
	  B_ViperLightHarness_base_F
	  20Rnd_762x51_Mag
	  Exile_Item_Heatpack
	  U_B_CombatUniform_mcam_vest
	  B_Carryall_khk
	  H_HelmetB_sand
	  Binocular
	  srifle_DMR_07_blk_F
	  srifle_DMR_01_F
	  10Rnd_93x64_DMR_05_Mag
	  B_AssaultPack_tna_F
	  srifle_DMR_01_F
	  srifle_DMR_01_F
	  Exile_Item_Bandage
	  srifle_DMR_05_hex_F
	  muzzle_snds_93mmg_tan
	  CUP_srifle_AWM_des
	  B_Bergen_sgg
	  B_OutdoorPack_tan
	  U_O_Wetsuit
	  ItemCompass
	  B_ViperHarness_ghex_F
	  B_AssaultPack_cbr
	  B_OutdoorPack_blk
	  U_B_GEN_Soldier_F
	  srifle_DMR_05_tan_F
	  srifle_DMR_04_Tan_F
	  U_IG_Guerilla2_1
	  CUP_10Rnd_127x99_M107
	  Exile_Item_Vishpirin
	  B_AssaultPack_dgtl
	  B_AssaultPack_tna_F
	  B_OutdoorPack_blu
	  10Rnd_93x64_DMR_05_Mag
	  ItemMap
	  srifle_DMR_07_ghex_F
	  srifle_GM6_ghex_F
	  B_AssaultPack_tna_F
	  U_B_T_Soldier_F
	  CUP_srifle_M24_des
	  ItemCompass
	  Exile_Item_ZipTie
	  U_B_HeliPilotCoveralls
	  U_I_CombatUniform_shortsleeve
	  B_Carryall_mcamo
	  O_NVGoggles_urb_F
	  U_O_OfficerUniform_ocamo
	  srifle_DMR_05_hex_F
	  U_I_C_Soldier_Para_1_F
	  optic_KHS_old
	  U_IG_Guerilla1_1
	  CUP_5Rnd_762x67_G22
	  H_MilCap_dgtl
	  U_I_C_Soldier_Para_5_F
	  Exile_Item_Vishpirin
	  CUP_10Rnd_762x51_CZ750
	  B_Carryall_ghex_F
	  H_HelmetSpecO_ghex_F
	  Exile_Item_ZipTie
	  B_FieldPack_blk
	  Exile_Item_ZipTie
	  Exile_Item_Heatpack
	  H_HelmetB
	  B_Carryall_oli
	  B_AssaultPack_sgg
	  srifle_DMR_03_khaki_F
	  Binocular
	  ItemMap
	  Binocular
	  Exile_Item_ZipTie
	  U_B_T_FullGhillie_tna_F
	  B_ViperLightHarness_khk_F
	  U_I_C_Soldier_Camo_F
	  B_Kitbag_mcamo
	  muzzle_snds_93mmg
	  Exile_Item_Heatpack
	  U_B_CTRG_2
	  B_Carryall_ocamo
	  U_I_C_Soldier_Para_2_F
	  Exile_Item_ZipTie
	  H_HelmetB_light_snakeskin
	  Exile_Item_ZipTie
	  U_I_GhillieSuit
	*/
	class Tourist
	{
		count = 278;
		half = 8344.00604791257;
		halfIndex = 139;
		sum = 9999.99999999998;
		items[] = 
		{
			{347.826086956522, "Exile_Item_ZipTie"}, // 3.48%
			{552.429667519182, "Exile_Item_Heatpack"}, // 2.05%
			{741.465584343378, "ItemCompass"}, // 1.89%
			{920.493717335706, "ItemMap"}, // 1.79%
			{1094.40676081397, "MiniGrenade"}, // 1.74%
			{1268.31980429223, "HandGrenade"}, // 1.74%
			{1430.85535894481, "B_OutdoorPack_blk"}, // 1.63%
			{1584.3080443668, "ItemWatch"}, // 1.53%
			{1737.7607297888, "ItemRadio"}, // 1.53%
			{1884.04272897612, "B_OutdoorPack_tan"}, // 1.46%
			{2030.32472816344, "B_OutdoorPack_blu"}, // 1.46%
			{2160.35317188551, "B_HuntingBackpack"}, // 1.30%
			{2280.29320187051, "Exile_Item_Vishpirin"}, // 1.20%
			{2400.23323185552, "Exile_Item_Heatpack"}, // 1.20%
			{2514.00812011233, "B_AssaultPack_rgr"}, // 1.14%
			{2627.78300836913, "B_AssaultPack_dgtl"}, // 1.14%
			{2741.55789662594, "B_AssaultPack_khk"}, // 1.14%
			{2855.33278488275, "B_AssaultPack_sgg"}, // 1.14%
			{2969.10767313955, "B_AssaultPack_blk"}, // 1.14%
			{3082.88256139636, "B_AssaultPack_tna_F"}, // 1.14%
			{3196.65744965316, "B_AssaultPack_cbr"}, // 1.14%
			{3310.43233790997, "B_AssaultPack_mcamo"}, // 1.14%
			{3421.31649314779, "B_Carryall_cbr"}, // 1.11%
			{3532.20064838561, "B_Carryall_ghex_F"}, // 1.11%
			{3639.22405975684, "U_IG_Guerilla2_3"}, // 1.07%
			{3746.24747112808, "U_IG_Guerilla2_2"}, // 1.07%
			{3853.27088249932, "U_IG_Guerilla2_1"}, // 1.07%
			{3960.29429387056, "U_IG_Guerilla1_1"}, // 1.07%
			{4065.34244093796, "B_Carryall_oli"}, // 1.05%
			{4170.39058800537, "B_Carryall_khk"}, // 1.05%
			{4272.6923782867, "Binocular"}, // 1.02%
			{4373.02682644723, "U_IG_Guerilla3_2"}, // 1.00%
			{4473.36127460777, "U_IG_Guerilla3_1"}, // 1.00%
			{4567.87923301987, "Rangefinder"}, // 0.95%
			{4655.41935557604, "B_Carryall_mcamo"}, // 0.88%
			{4742.95947813221, "B_Carryall_ocamo"}, // 0.88%
			{4830.49960068838, "B_Carryall_oucamo"}, // 0.88%
			{4911.76737801467, "B_Kitbag_sgg"}, // 0.81%
			{4993.03515534096, "B_Kitbag_cbr"}, // 0.81%
			{5074.30293266725, "B_Kitbag_mcamo"}, // 0.81%
			{5134.27294765976, "Exile_Item_Bandage"}, // 0.60%
			{5185.42384280042, "ItemGPS"}, // 0.51%
			{5235.52225038675, "B_FieldPack_cbr"}, // 0.50%
			{5285.62065797308, "B_FieldPack_oucamo"}, // 0.50%
			{5335.71906555941, "B_FieldPack_ocamo"}, // 0.50%
			{5385.81747314574, "B_FieldPack_blk"}, // 0.50%
			{5434.6351695607, "10Rnd_338_Mag"}, // 0.49%
			{5483.45286597565, "10Rnd_93x64_DMR_05_Mag"}, // 0.49%
			{5531.42887796965, "Exile_Item_InstaDoc"}, // 0.48%
			{5574.14436233273, "10Rnd_127x54_Mag"}, // 0.43%
			{5613.50739686485, "B_ViperHarness_oli_F"}, // 0.39%
			{5652.87043139696, "B_ViperLightHarness_base_F"}, // 0.39%
			{5692.23346592908, "B_ViperLightHarness_blk_F"}, // 0.39%
			{5731.5965004612, "B_ViperLightHarness_ghex_F"}, // 0.39%
			{5770.95953499331, "B_ViperLightHarness_hex_F"}, // 0.39%
			{5810.32256952543, "B_ViperLightHarness_khk_F"}, // 0.39%
			{5849.68560405754, "B_ViperLightHarness_oli_F"}, // 0.39%
			{5889.04863858966, "B_ViperHarness_hex_F"}, // 0.39%
			{5928.41167312178, "B_ViperHarness_ghex_F"}, // 0.39%
			{5967.77470765389, "B_ViperHarness_blk_F"}, // 0.39%
			{6007.13774218601, "B_ViperHarness_base_F"}, // 0.39%
			{6046.50077671813, "B_FieldPack_ghex_F"}, // 0.39%
			{6085.86381125024, "B_Bergen_blk"}, // 0.39%
			{6125.22684578236, "B_Bergen_rgr"}, // 0.39%
			{6164.58988031447, "B_Bergen_mcamo"}, // 0.39%
			{6203.95291484659, "B_Bergen_sgg"}, // 0.39%
			{6243.31594937871, "B_ViperHarness_khk_F"}, // 0.39%
			{6279.98436216027, "srifle_DMR_01_F"}, // 0.37%
			{6316.65277494183, "srifle_EBR_F"}, // 0.37%
			{6351.6688239643, "B_Bergen_tna_F"}, // 0.35%
			{6386.68487298677, "B_Bergen_hex_F"}, // 0.35%
			{6421.70092200923, "B_Bergen_dgtl_F"}, // 0.35%
			{6456.7169710317, "B_Bergen_mcamo_F"}, // 0.35%
			{6491.73302005417, "B_Bergen_Base_F"}, // 0.35%
			{6525.78226049419, "CUP_srifle_SVD"}, // 0.34%
			{6559.34442677947, "20Rnd_762x51_Mag"}, // 0.34%
			{6592.78924283298, "U_I_C_Soldier_Para_3_F"}, // 0.33%
			{6626.2340588865, "U_I_C_Soldier_Para_4_F"}, // 0.33%
			{6659.67887494001, "U_I_C_Soldier_Para_5_F"}, // 0.33%
			{6693.12369099352, "U_I_C_Soldier_Camo_F"}, // 0.33%
			{6726.56850704703, "U_I_C_Soldier_Para_2_F"}, // 0.33%
			{6760.01332310054, "U_I_C_Soldier_Para_1_F"}, // 0.33%
			{6792.7529773698, "CUP_srifle_M24_des"}, // 0.33%
			{6825.49263163905, "CUP_srifle_M40A3"}, // 0.33%
			{6858.2322859083, "CUP_srifle_M24_wdl"}, // 0.33%
			{6888.47803260017, "O_NVGoggles_ghex_F"}, // 0.30%
			{6918.72377929204, "NVGoggles"}, // 0.30%
			{6948.96952598391, "O_NVGoggles_hex_F"}, // 0.30%
			{6979.21527267578, "O_NVGoggles_urb_F"}, // 0.30%
			{7009.46101936765, "NVGoggles_tna_F"}, // 0.30%
			{7038.44652661403, "U_B_GhillieSuit"}, // 0.29%
			{7067.43203386041, "U_O_GhillieSuit"}, // 0.29%
			{7096.41754110679, "U_I_GhillieSuit"}, // 0.29%
			{7125.02166009992, "U_B_CTRG_Soldier_F"}, // 0.29%
			{7153.62577909305, "U_B_GEN_Commander_F"}, // 0.29%
			{7182.22989808619, "U_B_CTRG_Soldier_2_F"}, // 0.29%
			{7210.83401707932, "U_B_GEN_Soldier_F"}, // 0.29%
			{7239.43813607246, "U_B_CTRG_Soldier_urb_1_F"}, // 0.29%
			{7268.04225506559, "U_B_CTRG_Soldier_urb_2_F"}, // 0.29%
			{7296.64637405873, "U_O_T_Soldier_F"}, // 0.29%
			{7325.25049305186, "U_B_CombatUniform_mcam_worn"}, // 0.29%
			{7353.854612045, "U_B_CTRG_Soldier_urb_3_F"}, // 0.29%
			{7382.45873103813, "U_B_CTRG_Soldier_3_F"}, // 0.29%
			{7411.06285003127, "U_B_CombatUniform_mcam_vest"}, // 0.29%
			{7439.6669690244, "U_O_T_Officer_F"}, // 0.29%
			{7468.27108801754, "U_B_CombatUniform_mcam_tshirt"}, // 0.29%
			{7496.87520701067, "U_B_CombatUniform_mcam"}, // 0.29%
			{7525.47932600381, "U_B_CTRG_3"}, // 0.29%
			{7554.08344499694, "U_B_T_Soldier_AR_F"}, // 0.29%
			{7582.68756399008, "U_B_CTRG_2"}, // 0.29%
			{7611.29168298321, "U_B_T_Soldier_SL_F"}, // 0.29%
			{7639.89580197635, "U_B_CTRG_1"}, // 0.29%
			{7668.17434563135, "Exile_Headgear_GasMask"}, // 0.28%
			{7696.45288928635, "H_MilCap_rucamo"}, // 0.28%
			{7724.73143294135, "H_MilCap_mcamo"}, // 0.28%
			{7753.00997659635, "H_MilCap_oucamo"}, // 0.28%
			{7781.28852025136, "H_MilCap_blue"}, // 0.28%
			{7809.56706390636, "H_MilCap_dgtl"}, // 0.28%
			{7837.84560756136, "H_MilCap_ocamo"}, // 0.28%
			{7864.60146040417, "U_IG_leader"}, // 0.27%
			{7890.79318381957, "CUP_srifle_VSSVintorez"}, // 0.26%
			{7916.3686313899, "Exile_Item_MobilePhone"}, // 0.26%
			{7941.2133518868, "optic_AMS_snd"}, // 0.25%
			{7966.05807238369, "optic_AMS"}, // 0.25%
			{7990.90279288059, "optic_AMS_khk"}, // 0.25%
			{8015.74751337748, "optic_KHS_tan"}, // 0.25%
			{8040.59223387437, "optic_KHS_old"}, // 0.25%
			{8065.43695437127, "optic_KHS_blk"}, // 0.25%
			{8090.28167486816, "optic_KHS_hex"}, // 0.25%
			{8114.23908391874, "optic_DMS"}, // 0.24%
			{8137.309181523, "optic_SOS"}, // 0.23%
			{8160.37927912726, "optic_LRPS_ghex_F"}, // 0.23%
			{8183.44937673152, "optic_LRPS_tna_F"}, // 0.23%
			{8206.51947433578, "optic_SOS_khk_F"}, // 0.23%
			{8229.58957194003, "optic_LRPS"}, // 0.23%
			{8252.47286713454, "U_I_pilotCoveralls"}, // 0.23%
			{8275.35616232905, "U_I_HeliPilotCoveralls"}, // 0.23%
			{8298.23945752356, "U_I_CombatUniform"}, // 0.23%
			{8321.12275271807, "U_I_CombatUniform_tshirt"}, // 0.23%
			{8344.00604791257, "U_B_PilotCoveralls"}, // 0.23%
			{8366.88934310708, "U_O_PilotCoveralls"}, // 0.23%
			{8389.77263830159, "U_B_HeliPilotCoveralls"}, // 0.23%
			{8412.6559334961, "U_I_CombatUniform_shortsleeve"}, // 0.23%
			{8434.91889839919, "srifle_DMR_07_ghex_F"}, // 0.22%
			{8457.18186330228, "srifle_DMR_07_blk_F"}, // 0.22%
			{8479.44482820537, "srifle_DMR_07_hex_F"}, // 0.22%
			{8500.65373594662, "H_HelmetB"}, // 0.21%
			{8521.86264368787, "H_HelmetSpecB"}, // 0.21%
			{8543.07155142912, "H_HelmetSpecB_paint1"}, // 0.21%
			{8564.28045917038, "H_HelmetB_light"}, // 0.21%
			{8585.48936691163, "H_HelmetSpecB_paint2"}, // 0.21%
			{8606.69827465288, "H_HelmetSpecB_blk"}, // 0.21%
			{8627.90718239413, "H_HelmetIA"}, // 0.21%
			{8649.11609013538, "H_HelmetB_paint"}, // 0.21%
			{8670.32499787663, "H_HelmetB_plain_blk"}, // 0.21%
			{8689.96879043818, "srifle_LRR_F"}, // 0.20%
			{8709.61258299973, "srifle_LRR_tna_F"}, // 0.20%
			{8729.25637556128, "CUP_srifle_CZ750"}, // 0.20%
			{8748.05778566704, "srifle_DMR_05_hex_F"}, // 0.19%
			{8766.8591957728, "srifle_DMR_05_tan_F"}, // 0.19%
			{8785.66060587855, "srifle_DMR_05_blk_F"}, // 0.19%
			{8802.82307727444, "U_B_SpecopsUniform_sgg"}, // 0.17%
			{8819.84769749445, "CUP_srifle_AWM_des"}, // 0.17%
			{8836.87231771446, "CUP_srifle_AWM_wdl"}, // 0.17%
			{8853.89693793447, "CUP_srifle_G22_des"}, // 0.17%
			{8870.7558554145, "muzzle_snds_B"}, // 0.17%
			{8887.20708925704, "srifle_DMR_04_F"}, // 0.16%
			{8903.65832309958, "srifle_DMR_04_Tan_F"}, // 0.16%
			{8918.15107672277, "muzzle_snds_B"}, // 0.14%
			{8932.64383034595, "muzzle_snds_93mmg_tan"}, // 0.14%
			{8947.13658396914, "muzzle_snds_93mmg"}, // 0.14%
			{8961.62933759233, "muzzle_snds_338_sand"}, // 0.14%
			{8976.12209121552, "muzzle_snds_338_green"}, // 0.14%
			{8990.61484483871, "muzzle_snds_338_black"}, // 0.14%
			{9004.75411666621, "H_HelmetCrew_O_ghex_F"}, // 0.14%
			{9018.89338849371, "H_HelmetLeaderO_ghex_F"}, // 0.14%
			{9033.03266032121, "H_Beret_gen_F"}, // 0.14%
			{9047.17193214871, "H_HelmetB_tna_F"}, // 0.14%
			{9061.31120397621, "H_HelmetB_TI_tna_F"}, // 0.14%
			{9075.45047580371, "H_HelmetB_Light_tna_F"}, // 0.14%
			{9089.58974763121, "H_HelmetB_Enh_tna_F"}, // 0.14%
			{9103.72901945871, "H_Helmet_Skate"}, // 0.14%
			{9117.86829128621, "H_HelmetB_light_desert"}, // 0.14%
			{9132.00756311371, "H_HelmetB_light_black"}, // 0.14%
			{9146.14683494121, "H_HelmetB_light_sand"}, // 0.14%
			{9160.28610676871, "H_BandMask_demon"}, // 0.14%
			{9174.42537859621, "H_HelmetSpecO_ghex_F"}, // 0.14%
			{9188.56465042371, "H_HelmetB_light_snakeskin"}, // 0.14%
			{9202.70392225121, "H_BandMask_reaper"}, // 0.14%
			{9216.84319407871, "H_HelmetB_sand"}, // 0.14%
			{9230.98246590621, "H_HelmetB_black"}, // 0.14%
			{9245.12173773371, "H_HelmetB_desert"}, // 0.14%
			{9259.26100956121, "H_HelmetB_snakeskin"}, // 0.14%
			{9273.40028138871, "H_HelmetB_grass"}, // 0.14%
			{9287.53955321621, "H_HelmetIA_camo"}, // 0.14%
			{9301.67882504371, "H_HelmetIA_net"}, // 0.14%
			{9315.81809687121, "H_BandMask_khk"}, // 0.14%
			{9329.95736869871, "H_HelmetB_light_grass"}, // 0.14%
			{9344.05842627803, "srifle_DMR_02_camo_F"}, // 0.14%
			{9358.15948385735, "srifle_DMR_02_F"}, // 0.14%
			{9372.26054143667, "srifle_DMR_02_sniper_F"}, // 0.14%
			{9385.9390954181, "20Rnd_650x39_Cased_Mag_F"}, // 0.14%
			{9399.31702183951, "U_I_G_resistanceLeader_F"}, // 0.13%
			{9412.41288354721, "srifle_GM6_F"}, // 0.13%
			{9425.50874525491, "srifle_GM6_ghex_F"}, // 0.13%
			{9438.53593952294, "CUP_srifle_SVD_des"}, // 0.13%
			{9451.56313379098, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.13%
			{9464.59032805901, "CUP_5Rnd_762x51_M24"}, // 0.13%
			{9477.61752232704, "CUP_10Rnd_762x54_SVD_M"}, // 0.13%
			{9490.40524611221, "U_B_T_Sniper_F"}, // 0.13%
			{9503.19296989738, "U_B_T_Soldier_F"}, // 0.13%
			{9515.98069368254, "U_B_T_FullGhillie_tna_F"}, // 0.13%
			{9528.76841746771, "U_O_T_Sniper_F"}, // 0.13%
			{9541.55614125288, "U_O_T_FullGhillie_tna_F"}, // 0.13%
			{9553.93197580751, "20Rnd_762x51_Mag"}, // 0.12%
			{9565.65645064874, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{9577.09809824599, "U_O_OfficerUniform_ocamo"}, // 0.11%
			{9588.53974584325, "U_O_V_Soldier_Viper_hex_F"}, // 0.11%
			{9599.9813934405, "U_O_V_Soldier_Viper_F"}, // 0.11%
			{9611.42304103775, "U_O_SpecopsUniform_blk"}, // 0.11%
			{9622.86468863501, "U_I_OfficerUniform"}, // 0.11%
			{9634.30633623226, "U_O_CombatUniform_oucamo"}, // 0.11%
			{9645.74798382951, "U_O_CombatUniform_ocamo"}, // 0.11%
			{9657.18963142677, "U_I_Wetsuit"}, // 0.11%
			{9668.63127902402, "U_O_Wetsuit"}, // 0.11%
			{9680.07292662128, "U_B_Wetsuit"}, // 0.11%
			{9691.51457421853, "U_O_SpecopsUniform_ocamo"}, // 0.11%
			{9702.58768934636, "10Rnd_762x54_Mag"}, // 0.11%
			{9713.00944476079, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{9722.77984046181, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.10%
			{9732.55023616284, "CUP_10Rnd_762x51_CZ750"}, // 0.10%
			{9741.42335062601, "muzzle_snds_B_khk_F"}, // 0.09%
			{9750.29646508919, "muzzle_snds_B_snd_F"}, // 0.09%
			{9758.76414136341, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{9765.83377727716, "H_CrewHelmetHeli_B"}, // 0.07%
			{9772.90341319091, "H_CrewHelmetHeli_O"}, // 0.07%
			{9779.97304910466, "H_HelmetO_ghex_F"}, // 0.07%
			{9787.04268501842, "H_HelmetO_oucamo"}, // 0.07%
			{9794.11232093217, "H_HelmetLeaderO_oucamo"}, // 0.07%
			{9801.18195684592, "H_HelmetSpecO_ocamo"}, // 0.07%
			{9808.25159275967, "H_HelmetB_camo"}, // 0.07%
			{9815.32122867342, "H_HelmetLeaderO_ocamo"}, // 0.07%
			{9822.39086458717, "H_CrewHelmetHeli_I"}, // 0.07%
			{9829.46050050092, "H_PilotHelmetHeli_I"}, // 0.07%
			{9836.53013641467, "H_PilotHelmetHeli_O"}, // 0.07%
			{9843.59977232842, "H_HelmetO_ocamo"}, // 0.07%
			{9850.66940824217, "H_PilotHelmetHeli_B"}, // 0.07%
			{9857.73904415593, "H_PilotHelmetFighter_I"}, // 0.07%
			{9864.80868006968, "H_PilotHelmetFighter_O"}, // 0.07%
			{9871.87831598343, "H_PilotHelmetFighter_B"}, // 0.07%
			{9878.94795189718, "H_HelmetCrew_I"}, // 0.07%
			{9886.01758781093, "H_HelmetCrew_O"}, // 0.07%
			{9893.08722372468, "H_HelmetCrew_B"}, // 0.07%
			{9900.15685963843, "H_HelmetSpecO_blk"}, // 0.07%
			{9907.20738842809, "srifle_DMR_06_camo_F"}, // 0.07%
			{9914.25791721775, "srifle_DMR_06_olive_F"}, // 0.07%
			{9921.30844600741, "srifle_DMR_03_tan_F"}, // 0.07%
			{9928.35897479707, "srifle_DMR_03_khaki_F"}, // 0.07%
			{9935.40950358673, "srifle_DMR_03_F"}, // 0.07%
			{9942.46003237639, "srifle_DMR_03_woodland_F"}, // 0.07%
			{9948.9736295104, "5Rnd_127x108_Mag"}, // 0.07%
			{9955.48722664442, "7Rnd_408_Mag"}, // 0.07%
			{9960.69810435164, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9963.95490291864, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9967.21170148565, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9970.46850005266, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9973.72529861967, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9976.2828433767, "U_B_FullGhillie_ard"}, // 0.03%
			{9978.84038813374, "U_B_FullGhillie_lsh"}, // 0.03%
			{9981.39793289077, "U_I_FullGhillie_lsh"}, // 0.03%
			{9983.9554776478, "U_O_FullGhillie_sard"}, // 0.03%
			{9986.51302240484, "U_O_FullGhillie_lsh"}, // 0.03%
			{9989.07056716187, "U_O_FullGhillie_ard"}, // 0.03%
			{9991.6281119189, "U_B_FullGhillie_sard"}, // 0.03%
			{9994.18565667594, "U_I_FullGhillie_sard"}, // 0.03%
			{9996.74320143297, "U_I_FullGhillie_ard"}, // 0.03%
			{9998.69728057318, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{9999.99999999998, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  HandGrenade
	  srifle_DMR_06_olive_F
	  Exile_Item_Heatpack
	  H_MilCap_blue
	  srifle_DMR_07_hex_F
	  SatchelCharge_Remote_Mag
	  U_B_T_Sniper_F
	  CUP_srifle_M24_des
	  srifle_DMR_03_woodland_F
	  SatchelCharge_Remote_Mag
	  B_Carryall_ghex_F
	  IEDLandSmall_Remote_Mag
	  srifle_DMR_02_sniper_F
	  srifle_DMR_03_woodland_F
	  CUP_5Rnd_762x51_M24
	  B_Carryall_oli
	  CUP_srifle_SVD
	  srifle_DMR_03_F
	  CUP_srifle_AWM_des
	  srifle_DMR_05_tan_F
	  srifle_GM6_F
	  U_O_GhillieSuit
	  MMG_02_black_F
	  U_I_GhillieSuit
	  muzzle_snds_93mmg
	  B_Carryall_khk
	  B_Carryall_ghex_F
	  CUP_srifle_M40A3
	  B_Carryall_khk
	  B_Carryall_khk
	  srifle_LRR_tna_F
	  optic_AMS_khk
	  optic_SOS_khk_F
	  optic_KHS_hex
	  srifle_DMR_03_khaki_F
	  srifle_DMR_01_F
	  U_I_FullGhillie_ard
	  srifle_DMR_05_tan_F
	  srifle_DMR_06_camo_F
	  CUP_srifle_M40A3
	  DemoCharge_Remote_Mag
	  APERSTripMine_Wire_Mag
	  optic_AMS_khk
	  optic_DMS
	  SatchelCharge_Remote_Mag
	  H_PilotHelmetFighter_I
	  srifle_DMR_02_camo_F
	  srifle_DMR_02_sniper_F
	  CUP_srifle_M40A3
	  srifle_EBR_F
	  B_Carryall_ghex_F
	  srifle_DMR_05_hex_F
	  muzzle_snds_338_green
	  H_HelmetB_light_snakeskin
	  CUP_srifle_M40A3
	  H_HelmetIA_camo
	  B_Carryall_oucamo
	  srifle_DMR_05_blk_F
	  Exile_Item_ZipTie
	  muzzle_snds_338_black
	  muzzle_snds_338_sand
	  srifle_DMR_07_blk_F
	  IEDLandSmall_Remote_Mag
	  CUP_srifle_SVD_des
	  optic_AMS
	  B_Carryall_ocamo
	  CUP_srifle_M107_Base
	  SatchelCharge_Remote_Mag
	  U_I_FullGhillie_lsh
	  Exile_Item_Bandage
	  CUP_srifle_G22_des
	  srifle_DMR_02_camo_F
	  20Rnd_762x51_Mag
	  CUP_srifle_M24_wdl
	  H_HelmetB_light
	  Exile_Item_ZipTie
	  CUP_srifle_CZ750
	  Exile_Item_ZipTie
	  srifle_DMR_05_tan_F
	  H_MilCap_rucamo
	  CUP_srifle_VSSVintorez
	  CUP_srifle_SVD
	  H_HelmetO_ghex_F
	  U_I_GhillieSuit
	  srifle_DMR_05_blk_F
	  U_O_GhillieSuit
	  Exile_Item_ZipTie
	  H_HelmetIA_net
	  srifle_DMR_03_tan_F
	  B_Carryall_ocamo
	  Exile_Item_Heatpack
	  optic_LRPS_ghex_F
	  srifle_DMR_05_tan_F
	  U_B_T_Soldier_F
	  srifle_DMR_07_hex_F
	  B_Carryall_ocamo
	  Exile_Item_ZipTie
	  muzzle_snds_B
	  Exile_Item_ZipTie
	  APERSBoundingMine_Range_Mag
	*/
	class Radiation
	{
		count = 197;
		half = 8916.7343282648;
		halfIndex = 98;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "Exile_Item_ZipTie"}, // 3.17%
			{574.860574860575, "srifle_DMR_05_tan_F"}, // 2.57%
			{832.260832260832, "srifle_DMR_05_blk_F"}, // 2.57%
			{1089.66108966109, "srifle_DMR_05_hex_F"}, // 2.57%
			{1327.75632775633, "DemoCharge_Remote_Mag"}, // 2.38%
			{1552.98155298155, "srifle_DMR_04_F"}, // 2.25%
			{1778.20677820678, "srifle_DMR_04_Tan_F"}, // 2.25%
			{1979.00999105818, "srifle_DMR_01_F"}, // 2.01%
			{2179.81320390959, "srifle_EBR_F"}, // 2.01%
			{2372.86339695978, "srifle_DMR_02_camo_F"}, // 1.93%
			{2565.91359000998, "srifle_DMR_02_F"}, // 1.93%
			{2758.96378306017, "srifle_DMR_02_sniper_F"}, // 1.93%
			{2945.42390927933, "CUP_srifle_SVD"}, // 1.86%
			{3124.71249218237, "CUP_srifle_M40A3"}, // 1.79%
			{3304.00107508541, "CUP_srifle_M24_des"}, // 1.79%
			{3483.28965798845, "CUP_srifle_M24_wdl"}, // 1.79%
			{3642.01981671861, "HandGrenade"}, // 1.59%
			{3800.74997544877, "MiniGrenade"}, // 1.59%
			{3959.48013417893, "SatchelCharge_Remote_Mag"}, // 1.59%
			{4102.91100050136, "CUP_srifle_VSSVintorez"}, // 1.43%
			{4235.18613277649, "U_O_GhillieSuit"}, // 1.32%
			{4367.46126505163, "U_I_GhillieSuit"}, // 1.32%
			{4499.73639732676, "U_B_GhillieSuit"}, // 1.32%
			{4621.65263370083, "srifle_DMR_07_blk_F"}, // 1.22%
			{4743.56887007489, "srifle_DMR_07_hex_F"}, // 1.22%
			{4865.48510644896, "srifle_DMR_07_ghex_F"}, // 1.22%
			{4974.95418143528, "Exile_Item_Vishpirin"}, // 1.09%
			{5084.42325642159, "Exile_Item_Heatpack"}, // 1.09%
			{5191.99640616342, "srifle_LRR_tna_F"}, // 1.08%
			{5299.56955590524, "srifle_LRR_F"}, // 1.08%
			{5407.14270564707, "CUP_srifle_CZ750"}, // 1.08%
			{5508.34649812603, "B_Carryall_ghex_F"}, // 1.01%
			{5609.55029060499, "B_Carryall_cbr"}, // 1.01%
			{5706.07538713008, "srifle_DMR_03_F"}, // 0.97%
			{5802.60048365518, "srifle_DMR_03_tan_F"}, // 0.97%
			{5899.12558018028, "srifle_DMR_03_woodland_F"}, // 0.97%
			{5995.65067670537, "srifle_DMR_06_camo_F"}, // 0.97%
			{6092.17577323047, "srifle_DMR_06_olive_F"}, // 0.97%
			{6188.70086975557, "srifle_DMR_03_khaki_F"}, // 0.97%
			{6284.5781468409, "B_Carryall_khk"}, // 0.96%
			{6380.45542392623, "B_Carryall_oli"}, // 0.96%
			{6473.68548703581, "CUP_srifle_AWM_wdl"}, // 0.93%
			{6566.91555014539, "CUP_srifle_AWM_des"}, // 0.93%
			{6660.14561325497, "CUP_srifle_G22_des"}, // 0.93%
			{6740.04334415941, "B_Carryall_ocamo"}, // 0.80%
			{6819.94107506386, "B_Carryall_oucamo"}, // 0.80%
			{6899.8388059683, "B_Carryall_mcamo"}, // 0.80%
			{6979.20388533338, "IEDLandSmall_Remote_Mag"}, // 0.79%
			{7058.56896469846, "APERSMine_Range_Mag"}, // 0.79%
			{7137.93404406354, "APERSBoundingMine_Range_Mag"}, // 0.79%
			{7217.29912342862, "APERSTripMine_Wire_Mag"}, // 0.79%
			{7296.6642027937, "IEDUrbanSmall_Remote_Mag"}, // 0.79%
			{7368.37963595491, "srifle_GM6_ghex_F"}, // 0.72%
			{7440.09506911613, "srifle_GM6_F"}, // 0.72%
			{7498.45174511986, "U_O_T_Sniper_F"}, // 0.58%
			{7556.8084211236, "U_B_T_Soldier_F"}, // 0.58%
			{7615.16509712733, "U_B_T_Sniper_F"}, // 0.58%
			{7673.52177313107, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7731.8784491348, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7786.61298662796, "Exile_Item_Bandage"}, // 0.55%
			{7834.35138023102, "srifle_GM6_F"}, // 0.48%
			{7878.90721426053, "10Rnd_338_Mag"}, // 0.45%
			{7923.46304829005, "10Rnd_93x64_DMR_05_Mag"}, // 0.45%
			{7967.25067828458, "Exile_Item_InstaDoc"}, // 0.44%
			{8006.23703306041, "10Rnd_127x54_Mag"}, // 0.39%
			{8042.0408282627, "CUP_srifle_M107_Base"}, // 0.36%
			{8077.84462346499, "srifle_DMR_02_F"}, // 0.36%
			{8113.64841866728, "srifle_DMR_02_camo_F"}, // 0.36%
			{8145.60751102906, "B_Bergen_Base_F"}, // 0.32%
			{8177.56660339084, "B_Bergen_dgtl_F"}, // 0.32%
			{8209.52569575261, "B_Bergen_hex_F"}, // 0.32%
			{8241.48478811439, "B_Bergen_mcamo_F"}, // 0.32%
			{8273.44388047616, "B_Bergen_tna_F"}, // 0.32%
			{8304.07601637146, "20Rnd_762x51_Mag"}, // 0.31%
			{8330.53104282649, "muzzle_snds_B"}, // 0.26%
			{8356.98606928151, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8383.44109573654, "muzzle_snds_338_black"}, // 0.26%
			{8409.89612219157, "muzzle_snds_338_sand"}, // 0.26%
			{8436.35114864659, "muzzle_snds_338_green"}, // 0.26%
			{8462.80617510162, "muzzle_snds_93mmg"}, // 0.26%
			{8488.61595700896, "H_MilCap_dgtl"}, // 0.26%
			{8514.42573891631, "H_MilCap_rucamo"}, // 0.26%
			{8540.23552082365, "H_MilCap_blue"}, // 0.26%
			{8566.04530273099, "H_MilCap_mcamo"}, // 0.26%
			{8591.85508463834, "H_MilCap_ocamo"}, // 0.26%
			{8617.66486654568, "Exile_Headgear_GasMask"}, // 0.26%
			{8643.47464845302, "H_MilCap_oucamo"}, // 0.26%
			{8667.34384525455, "srifle_DMR_05_tan_F"}, // 0.24%
			{8691.21304205608, "srifle_DMR_05_blk_F"}, // 0.24%
			{8715.08223885761, "srifle_DMR_05_hex_F"}, // 0.24%
			{8737.75797581906, "optic_AMS"}, // 0.23%
			{8760.43371278051, "optic_AMS_khk"}, // 0.23%
			{8783.10944974196, "optic_AMS_snd"}, // 0.23%
			{8805.78518670341, "optic_KHS_blk"}, // 0.23%
			{8828.46092366486, "optic_KHS_hex"}, // 0.23%
			{8851.13666062631, "optic_KHS_tan"}, // 0.23%
			{8873.81239758777, "optic_KHS_old"}, // 0.23%
			{8895.67828680059, "optic_DMS"}, // 0.22%
			{8916.7343282648, "optic_SOS"}, // 0.21%
			{8937.790369729, "optic_SOS_khk_F"}, // 0.21%
			{8958.84641119321, "optic_LRPS_ghex_F"}, // 0.21%
			{8979.90245265741, "optic_LRPS"}, // 0.21%
			{9000.95849412161, "optic_LRPS_tna_F"}, // 0.21%
			{9020.31583055212, "H_HelmetSpecB_blk"}, // 0.19%
			{9039.67316698263, "H_HelmetB_paint"}, // 0.19%
			{9059.03050341313, "H_HelmetB"}, // 0.19%
			{9078.38783984364, "H_HelmetSpecB"}, // 0.19%
			{9097.74517627415, "H_HelmetSpecB_paint1"}, // 0.19%
			{9117.10251270465, "H_HelmetSpecB_paint2"}, // 0.19%
			{9136.45984913516, "H_HelmetB_plain_blk"}, // 0.19%
			{9155.81718556567, "H_HelmetIA"}, // 0.19%
			{9175.17452199617, "H_HelmetB_light"}, // 0.19%
			{9190.56162922002, "muzzle_snds_B"}, // 0.15%
			{9204.88314730093, "MMG_02_black_F"}, // 0.14%
			{9219.20466538185, "MMG_02_camo_F"}, // 0.14%
			{9233.52618346277, "MMG_02_sand_F"}, // 0.14%
			{9247.84770154368, "CUP_srifle_AS50"}, // 0.14%
			{9260.75259249735, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9273.65748345103, "H_HelmetB_tna_F"}, // 0.13%
			{9286.5623744047, "H_Beret_gen_F"}, // 0.13%
			{9299.46726535837, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9312.37215631204, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9325.27704726572, "H_Helmet_Skate"}, // 0.13%
			{9338.18193821939, "H_BandMask_demon"}, // 0.13%
			{9351.08682917306, "H_BandMask_reaper"}, // 0.13%
			{9363.99172012673, "H_BandMask_khk"}, // 0.13%
			{9376.8966110804, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9389.80150203408, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9402.70639298775, "H_HelmetB_sand"}, // 0.13%
			{9415.61128394142, "H_HelmetB_grass"}, // 0.13%
			{9428.51617489509, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9441.42106584877, "H_HelmetB_black"}, // 0.13%
			{9454.32595680244, "H_HelmetB_desert"}, // 0.13%
			{9467.23084775611, "H_HelmetB_snakeskin"}, // 0.13%
			{9480.13573870978, "H_HelmetB_light_desert"}, // 0.13%
			{9493.04062966346, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9505.94552061713, "H_HelmetIA_camo"}, // 0.13%
			{9518.8504115708, "H_HelmetIA_net"}, // 0.13%
			{9531.75530252447, "H_HelmetB_light_black"}, // 0.13%
			{9544.66019347814, "H_HelmetB_light_sand"}, // 0.13%
			{9557.56508443182, "H_HelmetB_light_grass"}, // 0.13%
			{9570.04947893868, "20Rnd_650x39_Cased_Mag_F"}, // 0.12%
			{9581.93937846903, "CUP_srifle_SVD_des"}, // 0.12%
			{9593.82927799938, "CUP_10Rnd_762x54_SVD_M"}, // 0.12%
			{9605.71917752973, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{9617.60907706008, "CUP_5Rnd_762x51_M24"}, // 0.12%
			{9629.28041226083, "U_B_FullGhillie_ard"}, // 0.12%
			{9640.95174746158, "U_B_FullGhillie_lsh"}, // 0.12%
			{9652.62308266232, "U_O_FullGhillie_sard"}, // 0.12%
			{9664.29441786307, "U_I_FullGhillie_ard"}, // 0.12%
			{9675.96575306381, "U_O_FullGhillie_ard"}, // 0.12%
			{9687.63708826456, "U_I_FullGhillie_sard"}, // 0.12%
			{9699.30842346531, "U_O_FullGhillie_lsh"}, // 0.12%
			{9710.97975866605, "U_I_FullGhillie_lsh"}, // 0.12%
			{9722.6510938668, "U_B_FullGhillie_sard"}, // 0.12%
			{9733.94649842063, "20Rnd_762x51_Mag"}, // 0.11%
			{9744.64740799795, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.11%
			{9754.75382259874, "10Rnd_762x54_Mag"}, // 0.10%
			{9764.30150131935, "MMG_01_hex_F"}, // 0.10%
			{9773.84918003997, "MMG_01_tan_F"}, // 0.10%
			{9783.36109966425, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{9792.27852431201, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.09%
			{9801.19594895977, "CUP_10Rnd_762x51_CZ750"}, // 0.09%
			{9809.294426446, "muzzle_snds_B_khk_F"}, // 0.08%
			{9817.39290393223, "muzzle_snds_B_snd_F"}, // 0.08%
			{9825.12133862696, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{9832.28209766742, "CUP_launch_M136"}, // 0.07%
			{9839.44285670788, "CUP_launch_RPG7V"}, // 0.07%
			{9845.89530218471, "H_PilotHelmetHeli_O"}, // 0.06%
			{9852.34774766155, "H_PilotHelmetHeli_I"}, // 0.06%
			{9858.80019313838, "H_HelmetO_ocamo"}, // 0.06%
			{9865.25263861522, "H_CrewHelmetHeli_B"}, // 0.06%
			{9871.70508409206, "H_CrewHelmetHeli_O"}, // 0.06%
			{9878.15752956889, "H_CrewHelmetHeli_I"}, // 0.06%
			{9884.60997504573, "H_HelmetO_oucamo"}, // 0.06%
			{9891.06242052256, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9897.5148659994, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9903.96731147624, "H_HelmetSpecO_blk"}, // 0.06%
			{9910.41975695307, "H_PilotHelmetHeli_B"}, // 0.06%
			{9916.87220242991, "H_HelmetB_camo"}, // 0.06%
			{9923.32464790675, "H_HelmetO_ghex_F"}, // 0.06%
			{9929.77709338358, "H_PilotHelmetFighter_B"}, // 0.06%
			{9936.22953886042, "H_HelmetCrew_I"}, // 0.06%
			{9942.68198433725, "H_HelmetCrew_O"}, // 0.06%
			{9949.13442981409, "H_HelmetCrew_B"}, // 0.06%
			{9955.58687529093, "H_PilotHelmetFighter_O"}, // 0.06%
			{9962.03932076776, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9968.4917662446, "H_PilotHelmetFighter_I"}, // 0.06%
			{9974.43671600977, "5Rnd_127x108_Mag"}, // 0.06%
			{9980.38166577495, "7Rnd_408_Mag"}, // 0.06%
			{9985.13762558709, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9988.11010046967, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9991.08257535226, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9994.05505023485, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9997.02752511743, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9998.81101004699, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  muzzle_snds_338_black
	  CUP_5Rnd_127x99_as50_M
	  U_B_T_Sniper_F
	  V_PlateCarrier2_tna_F
	  U_B_T_Soldier_F
	  muzzle_snds_93mmg_tan
	  srifle_GM6_F
	  muzzle_snds_338_green
	  10Rnd_338_Mag
	  muzzle_snds_93mmg_tan
	  U_O_T_FullGhillie_tna_F
	  Exile_Item_Magazine01
	  U_O_GhillieSuit
	  CUP_5Rnd_127x99_as50_M
	  U_O_FullGhillie_ard
	  130Rnd_338_Mag
	  U_O_GhillieSuit
	  10Rnd_93x64_DMR_05_Mag
	  5Rnd_127x108_Mag
	  Exile_Item_PlasticBottleEmpty
	  CUP_M136_M
	  muzzle_snds_B
	  V_TacChestrig_cbr_F
	  muzzle_snds_93mmg
	  V_PlateCarrierGL_blk
	  130Rnd_338_Mag
	  U_O_T_FullGhillie_tna_F
	  U_O_GhillieSuit
	  130Rnd_338_Mag
	  130Rnd_338_Mag
	  U_B_T_FullGhillie_tna_F
	  V_HarnessO_ghex_F
	  V_TacVest_gen_F
	  V_HarnessOGL_ghex_F
	  150Rnd_93x64_Mag
	  U_B_GhillieSuit
	  U_O_FullGhillie_lsh
	  Exile_Item_ToiletPaper
	  CUP_5Rnd_127x99_as50_M
	  muzzle_snds_338_green
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  V_HarnessO_ghex_F
	  V_BandollierB_ghex_F
	  muzzle_snds_93mmg_tan
	  MMG_01_hex_F
	  U_I_GhillieSuit
	  U_O_GhillieSuit
	  muzzle_snds_338_green
	  U_B_GhillieSuit
	  U_O_T_FullGhillie_tna_F
	  Exile_Item_ToiletPaper
	  V_PlateCarrierGL_mtp
	  srifle_DMR_05_tan_F
	  U_O_GhillieSuit
	  U_B_FullGhillie_ard
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  V_PlateCarrierGL_rgr
	  V_PlateCarrierGL_mtp
	  U_B_T_Soldier_F
	  Exile_Item_Magazine02
	  U_B_FullGhillie_sard
	  V_HarnessO_ghex_F
	  Exile_Item_Magazine04
	  V_PlateCarrierSpec_rgr
	  muzzle_snds_93mmg_tan
	  U_O_FullGhillie_sard
	  srifle_DMR_02_camo_F
	  5Rnd_127x108_Mag
	  U_I_GhillieSuit
	  U_I_FullGhillie_ard
	  muzzle_snds_338_sand
	  V_PlateCarrierSpec_tna_F
	  Exile_Item_PlasticBottleEmpty
	  U_O_T_FullGhillie_tna_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  V_PlateCarrierGL_blk
	  muzzle_snds_B
	  U_O_GhillieSuit
	  MMG_02_black_F
	  muzzle_snds_93mmg
	  Exile_Item_ToiletPaper
	  muzzle_snds_B
	  Exile_Item_PlasticBottleEmpty
	  U_B_FullGhillie_lsh
	  10Rnd_338_Mag
	  5Rnd_127x108_Mag
	  U_B_T_Sniper_F
	  V_TacVest_gen_F
	  Exile_Item_PlasticBottleEmpty
	  srifle_GM6_F
	  U_O_T_Sniper_F
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  V_PlateCarrierSpec_tna_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	*/
	class SuperCrate
	{
		count = 75;
		half = 8100.18744339841;
		halfIndex = 37;
		sum = 9999.99999999999;
		items[] = 
		{
			{535.714285714286, "Exile_Item_PlasticBottleEmpty"}, // 5.36%
			{1071.42857142857, "Exile_Item_ToiletPaper"}, // 5.36%
			{1607.14285714286, "Exile_Item_Can_Empty"}, // 5.36%
			{2083.33333333333, "U_B_GhillieSuit"}, // 4.76%
			{2559.52380952381, "U_I_GhillieSuit"}, // 4.76%
			{3035.71428571429, "U_O_GhillieSuit"}, // 4.76%
			{3273.80952380952, "muzzle_snds_338_green"}, // 2.38%
			{3511.90476190476, "muzzle_snds_338_sand"}, // 2.38%
			{3750, "muzzle_snds_338_black"}, // 2.38%
			{3988.09523809524, "muzzle_snds_93mmg_tan"}, // 2.38%
			{4226.19047619048, "muzzle_snds_B"}, // 2.38%
			{4464.28571428571, "muzzle_snds_93mmg"}, // 2.38%
			{4674.36974789916, "U_B_T_Soldier_F"}, // 2.10%
			{4884.45378151261, "U_O_T_Sniper_F"}, // 2.10%
			{5094.53781512605, "U_B_T_Sniper_F"}, // 2.10%
			{5304.6218487395, "U_B_T_FullGhillie_tna_F"}, // 2.10%
			{5514.70588235294, "U_O_T_FullGhillie_tna_F"}, // 2.10%
			{5709.51107715814, "10Rnd_93x64_DMR_05_Mag"}, // 1.95%
			{5871.8487394958, "10Rnd_338_Mag"}, // 1.62%
			{6034.18640183346, "CUP_5Rnd_127x99_as50_M"}, // 1.62%
			{6196.52406417112, "150Rnd_93x64_Mag"}, // 1.62%
			{6358.86172650879, "130Rnd_338_Mag"}, // 1.62%
			{6521.19938884645, "5Rnd_127x108_APDS_Mag"}, // 1.62%
			{6683.53705118411, "5Rnd_127x108_Mag"}, // 1.62%
			{6817.46562261268, "Exile_Item_Magazine04"}, // 1.34%
			{6951.39419404125, "Exile_Item_Magazine01"}, // 1.34%
			{7085.32276546983, "Exile_Item_Magazine02"}, // 1.34%
			{7219.2513368984, "Exile_Item_Magazine03"}, // 1.34%
			{7349.12146676853, "CUP_OG7_M"}, // 1.30%
			{7478.99159663866, "CUP_M136_M"}, // 1.30%
			{7586.40298224553, "srifle_GM6_F"}, // 1.07%
			{7666.96152145069, "CUP_srifle_M107_Base"}, // 0.81%
			{7747.52006065584, "srifle_DMR_02_F"}, // 0.81%
			{7828.078599861, "srifle_DMR_02_camo_F"}, // 0.81%
			{7896.10581074535, "V_PlateCarrierSpec_blk"}, // 0.68%
			{7964.13302162971, "V_TacChestrig_grn_F"}, // 0.68%
			{8032.16023251406, "V_PlateCarrierSpec_rgr"}, // 0.68%
			{8100.18744339841, "V_PlateCarrierSpec_mtp"}, // 0.68%
			{8168.21465428277, "V_PlateCarrier1_tna_F"}, // 0.68%
			{8236.24186516712, "V_PlateCarrierIAGL_oli"}, // 0.68%
			{8304.26907605147, "V_PlateCarrierIAGL_dgtl"}, // 0.68%
			{8372.29628693583, "V_PlateCarrierGL_rgr"}, // 0.68%
			{8440.32349782018, "V_PlateCarrierGL_mtp"}, // 0.68%
			{8508.35070870453, "V_PlateCarrierGL_blk"}, // 0.68%
			{8576.37791958889, "V_PlateCarrier2_tna_F"}, // 0.68%
			{8644.40513047324, "V_PlateCarrierGL_tna_F"}, // 0.68%
			{8712.43234135759, "V_TacChestrig_oli_F"}, // 0.68%
			{8780.45955224194, "V_HarnessO_ghex_F"}, // 0.68%
			{8848.4867631263, "V_HarnessOGL_ghex_F"}, // 0.68%
			{8916.51397401065, "V_BandollierB_ghex_F"}, // 0.68%
			{8984.541184895, "V_TacVest_gen_F"}, // 0.68%
			{9052.56839577936, "V_PlateCarrier1_rgr_noflag_F"}, // 0.68%
			{9120.59560666371, "V_PlateCarrier2_rgr_noflag_F"}, // 0.68%
			{9188.62281754806, "V_PlateCarrierSpec_tna_F"}, // 0.68%
			{9256.65002843241, "V_TacChestrig_cbr_F"}, // 0.68%
			{9310.35572123585, "srifle_DMR_05_blk_F"}, // 0.54%
			{9364.06141403929, "srifle_DMR_05_hex_F"}, // 0.54%
			{9417.76710684272, "srifle_DMR_05_tan_F"}, // 0.54%
			{9459.78391356541, "U_I_FullGhillie_lsh"}, // 0.42%
			{9501.8007202881, "U_B_FullGhillie_ard"}, // 0.42%
			{9543.81752701079, "U_B_FullGhillie_lsh"}, // 0.42%
			{9585.83433373348, "U_B_FullGhillie_sard"}, // 0.42%
			{9627.85114045617, "U_O_FullGhillie_ard"}, // 0.42%
			{9669.86794717886, "U_O_FullGhillie_lsh"}, // 0.42%
			{9711.88475390155, "U_O_FullGhillie_sard"}, // 0.42%
			{9753.90156062424, "U_I_FullGhillie_ard"}, // 0.42%
			{9795.91836734693, "U_I_FullGhillie_sard"}, // 0.42%
			{9828.14178302899, "CUP_srifle_AS50"}, // 0.32%
			{9860.36519871106, "MMG_02_sand_F"}, // 0.32%
			{9892.58861439312, "MMG_02_camo_F"}, // 0.32%
			{9924.81203007518, "MMG_02_black_F"}, // 0.32%
			{9946.29430719656, "MMG_01_tan_F"}, // 0.21%
			{9967.77658431793, "MMG_01_hex_F"}, // 0.21%
			{9983.88829215896, "CUP_launch_RPG7V"}, // 0.16%
			{9999.99999999999, "CUP_launch_M136"} // 0.16%
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
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 7;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 3;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 3;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 2;
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
		minRespectTransfer = 50;

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
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

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
			"Exile_Item_PlasticBottleFreshWater"
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
		spawnZoneRadius = 500;

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
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
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
		keyframes[] = {"Sunny", "Cloudy"}; 

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
			overcast = 0.8;
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
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

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
			types[] = {"Beer", "Tools", "Food", "Drinks", "RepairParts", "Medical", "Technology", "Explosives", "BuildingSupplies"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 48}
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
						{"Exile_Item_Codelock", 2}
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
				
				class Explosives 
				{
					items[] = 
					{
						{"Exile_Item_BreachingCharge_Wood", 3},
						{"Exile_Item_BreachingCharge_Metal", 3}
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

