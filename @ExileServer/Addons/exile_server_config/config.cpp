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

	  Exile_Item_Can_Empty
	  muzzle_snds_acp
	  Exile_Item_PlasticBottleEmpty
	  H_Bandanna_surfer
	  U_C_Poor_shorts_1
	  H_Cap_press
	  Exile_Item_CatFood
	  H_Cap_headphones
	  hgun_Pistol_heavy_02_F
	  Exile_Item_Magazine01
	  6Rnd_45ACP_Cylinder
	  CUP_8Rnd_9x18_MakarovSD_M
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  B_AssaultPack_rgr
	  Exile_Item_MountainDupe
	  Exile_Weapon_CZ550
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Chemlight_green
	  Exile_Item_Surstromming
	  Exile_Magazine_5Rnd_22LR
	  H_Bandanna_surfer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  FlareRed_F
	  hgun_P07_khk_F
	  H_Hat_brown
	  Exile_Item_Can_Empty
	  9Rnd_45ACP_Mag
	  Exile_Weapon_LeeEnfield
	  H_Hat_brown
	  Exile_Item_PlasticBottleEmpty
	  H_Beret_blk_POLICE
	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  U_C_Man_casual_1_F
	  muzzle_snds_acp
	  Exile_Item_ChocolateMilk
	  Exile_Magazine_7Rnd_45ACP
	  U_C_Journalist
	  Exile_Item_Magazine03
	  Exile_Item_BeefParts
	  Exile_Magazine_8Rnd_74Slug
	  hgun_P07_khk_F
	  Chemlight_green
	  FlareRed_F
	  Exile_Item_ZipTie
	  Chemlight_green
	  H_Hat_checker
	  U_I_C_Soldier_Bandit_1_F
	  U_C_Poloshirt_salmon
	  CUP_sgun_Saiga12K
	  Exile_Item_ToiletPaper
	  ItemWatch
	  Exile_Item_Magazine04
	  H_StrawHat
	  V_Rangemaster_belt
	  Exile_Weapon_LeeEnfield
	  Exile_Weapon_M1014
	  Exile_Item_PlasticBottleEmpty
	  H_Hat_blue
	  U_C_Scientist
	  Chemlight_red
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_MountainDupe
	  B_AssaultPack_rgr
	  U_C_Man_casual_3_F
	  hgun_Rook40_F
	  FlareGreen_F
	  B_AssaultPack_mcamo
	  Exile_Weapon_M1014
	  Exile_Item_CatFood
	  optic_MRD
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Magazine_8Rnd_9x18
	  Exile_Item_Can_Empty
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  optic_Yorris
	  Exile_Magazine_8Rnd_9x18
	  CUP_smg_MP5A5
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  B_OutdoorPack_tan
	  Exile_Item_BeefParts
	  Exile_Weapon_TaurusGold
	  CUP_64Rnd_9x19_Bizon_M
	  U_C_Journalist
	  FlareYellow_F
	  FlareRed_F
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Chemlight_blue
	  Exile_Item_ToiletPaper
	  CUP_30Rnd_9x19_UZI
	  FlareYellow_F
	*/
	class CivillianLowerClass
	{
		count = 192;
		half = 8106.67023603437;
		halfIndex = 96;
		sum = 10000;
		items[] = 
		{
			{551.470588235294, "Exile_Item_Can_Empty"}, // 5.51%
			{1102.94117647059, "Exile_Item_ToiletPaper"}, // 5.51%
			{1654.41176470588, "Exile_Item_PlasticBottleEmpty"}, // 5.51%
			{1819.85294117647, "Exile_Weapon_LeeEnfield"}, // 1.65%
			{1985.29411764706, "CUP_sgun_Saiga12K"}, // 1.65%
			{2150.73529411765, "Exile_Weapon_M1014"}, // 1.65%
			{2314.1339869281, "ItemWatch"}, // 1.63%
			{2461.19281045752, "Exile_Magazine_8Rnd_74Slug"}, // 1.47%
			{2608.25163398693, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.47%
			{2755.31045751634, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.47%
			{2902.36928104575, "Exile_Magazine_10Rnd_303"}, // 1.47%
			{3049.42810457516, "Exile_Magazine_5Rnd_22LR"}, // 1.47%
			{3187.29575163399, "Exile_Item_Magazine04"}, // 1.38%
			{3325.16339869281, "Exile_Item_Magazine01"}, // 1.38%
			{3463.03104575163, "Exile_Item_Magazine02"}, // 1.38%
			{3600.89869281046, "Exile_Item_Magazine03"}, // 1.38%
			{3731.61764705882, "Exile_Item_Heatpack"}, // 1.31%
			{3845.99673202614, "ItemMap"}, // 1.14%
			{3944.03594771242, "ItemCompass"}, // 0.98%
			{4042.07516339869, "Binocular"}, // 0.98%
			{4140.11437908497, "ItemRadio"}, // 0.98%
			{4232.02614379085, "V_Rangemaster_belt"}, // 0.92%
			{4323.93790849673, "FlareWhite_F"}, // 0.92%
			{4415.84967320261, "Chemlight_blue"}, // 0.92%
			{4507.76143790849, "Chemlight_green"}, // 0.92%
			{4599.67320261438, "Chemlight_red"}, // 0.92%
			{4691.58496732026, "Chemlight_yellow"}, // 0.92%
			{4783.49673202614, "FlareGreen_F"}, // 0.92%
			{4875.40849673202, "FlareRed_F"}, // 0.92%
			{4967.3202614379, "FlareYellow_F"}, // 0.92%
			{5043.91339869281, "Exile_Item_PlasticBottleDirtyWater"}, // 0.77%
			{5118.26898362341, "muzzle_snds_L"}, // 0.74%
			{5192.62456855401, "muzzle_snds_acp"}, // 0.74%
			{5257.23200148534, "hgun_P07_F"}, // 0.65%
			{5318.76288999137, "hgun_ACPC2_F"}, // 0.62%
			{5380.2937784974, "hgun_Rook40_F"}, // 0.62%
			{5441.56828830132, "Exile_Item_MountainDupe"}, // 0.61%
			{5502.84279810524, "Exile_Item_ChocolateMilk"}, // 0.61%
			{5562.62280767005, "10Rnd_9x21_Mag"}, // 0.60%
			{5622.40281723485, "11Rnd_45ACP_Mag"}, // 0.60%
			{5682.18282679965, "Exile_Magazine_6Rnd_45ACP"}, // 0.60%
			{5741.96283636445, "30Rnd_9x21_Mag"}, // 0.60%
			{5801.74284592925, "Exile_Magazine_7Rnd_45ACP"}, // 0.60%
			{5861.52285549405, "9Rnd_45ACP_Mag"}, // 0.60%
			{5921.30286505886, "Exile_Magazine_8Rnd_9x18"}, // 0.60%
			{5976.68066471428, "CUP_hgun_Phantom"}, // 0.55%
			{6031.82772353781, "Exile_Weapon_CZ550"}, // 0.55%
			{6085.62973214613, "CUP_18Rnd_9x19_Phantom"}, // 0.54%
			{6139.43174075446, "CUP_30Rnd_9x19_UZI"}, // 0.54%
			{6193.23374936278, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.54%
			{6245.31708269611, "Exile_Item_EnergyDrink"}, // 0.52%
			{6293.14109034795, "6Rnd_45ACP_Cylinder"}, // 0.48%
			{6339.09697270089, "V_TacVest_blk_POLICE"}, // 0.46%
			{6385.05285505383, "V_Press_F"}, // 0.46%
			{6429.17050211266, "H_Hat_grey"}, // 0.44%
			{6473.28814917148, "H_StrawHat"}, // 0.44%
			{6517.40579623031, "H_Hat_checker"}, // 0.44%
			{6561.52344328913, "H_Cap_red"}, // 0.44%
			{6605.64109034795, "H_Cap_press"}, // 0.44%
			{6649.75873740678, "H_Hat_brown"}, // 0.44%
			{6693.8763844656, "H_Hat_blue"}, // 0.44%
			{6737.99403152442, "H_StrawHat_dark"}, // 0.44%
			{6782.11167858325, "H_Hat_tan"}, // 0.44%
			{6826.22932564207, "H_Cap_tan"}, // 0.44%
			{6869.12148250481, "Exile_Item_Beer"}, // 0.43%
			{6910.43014079959, "CUP_acc_Glock17_Flashlight"}, // 0.41%
			{6951.73879909437, "CUP_acc_CZ_M3X"}, // 0.41%
			{6993.04745738915, "CUP_muzzle_snds_MicroUzi"}, // 0.41%
			{7033.04253491807, "hgun_Pistol_heavy_01_F"}, // 0.40%
			{7073.03761244699, "hgun_Pistol_heavy_02_F"}, // 0.40%
			{7113.03268997591, "hgun_Pistol_Signal_F"}, // 0.40%
			{7153.02776750483, "CUP_hgun_SA61"}, // 0.40%
			{7193.02284503375, "Exile_Weapon_Makarov"}, // 0.40%
			{7233.01792256267, "Exile_Weapon_Taurus"}, // 0.40%
			{7273.01300009159, "Exile_Weapon_TaurusGold"}, // 0.40%
			{7313.00807762051, "hgun_Pistol_01_F"}, // 0.40%
			{7353.00315514943, "hgun_P07_khk_F"}, // 0.40%
			{7392.99823267835, "Exile_Weapon_Colt1911"}, // 0.40%
			{7431.69792308083, "U_C_Poor_shorts_1"}, // 0.39%
			{7470.3976134833, "U_Rangemaster"}, // 0.39%
			{7509.09730388578, "U_C_Scientist"}, // 0.39%
			{7547.79699428825, "U_C_Journalist"}, // 0.39%
			{7586.49668469073, "U_C_HunterBody_grn"}, // 0.39%
			{7625.19637509321, "U_C_Poor_2"}, // 0.39%
			{7663.89606549568, "U_C_Poor_1"}, // 0.39%
			{7701.69155752427, "B_OutdoorPack_blk"}, // 0.38%
			{7738.86934998957, "CUP_muzzle_snds_M9"}, // 0.37%
			{7775.78788309319, "CUP_hgun_Duty_M3X"}, // 0.37%
			{7812.55258897554, "H_Cap_grn"}, // 0.37%
			{7849.3172948579, "H_Cap_blk"}, // 0.37%
			{7886.08200074025, "H_Cap_blk_Raven"}, // 0.37%
			{7922.8467066226, "H_Cap_blu"}, // 0.37%
			{7959.61141250496, "H_Cap_headphones"}, // 0.37%
			{7996.37611838731, "H_Cap_oli"}, // 0.37%
			{8033.14082426966, "Exile_Item_PlasticBottleFreshWater"}, // 0.37%
			{8069.90553015201, "H_Bandanna_surfer"}, // 0.37%
			{8106.67023603437, "Exile_Item_ZipTie"}, // 0.37%
			{8143.43494191672, "H_Beret_blk_POLICE"}, // 0.37%
			{8179.3029476556, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.36%
			{8213.31889048133, "B_OutdoorPack_tan"}, // 0.34%
			{8247.33483330706, "B_OutdoorPack_blu"}, // 0.34%
			{8278.10027756007, "CUP_hgun_PB6P9_snds"}, // 0.31%
			{8308.33667118294, "B_HuntingBackpack"}, // 0.30%
			{8338.43643038487, "U_C_Poloshirt_blue"}, // 0.30%
			{8368.5361895868, "U_C_Poloshirt_burgundy"}, // 0.30%
			{8398.63594878872, "U_C_Poloshirt_stripped"}, // 0.30%
			{8428.73570799065, "U_C_Poloshirt_salmon"}, // 0.30%
			{8458.83546719258, "U_C_Poloshirt_tricolour"}, // 0.30%
			{8488.72547197498, "16Rnd_9x21_Mag"}, // 0.30%
			{8517.64153278132, "optic_Yorris"}, // 0.29%
			{8546.55759358767, "optic_MRD"}, // 0.29%
			{8574.64174391446, "Exile_Item_InstantCoffee"}, // 0.28%
			{8601.09858833447, "B_AssaultPack_sgg"}, // 0.26%
			{8627.55543275449, "B_AssaultPack_blk"}, // 0.26%
			{8654.0122771745, "B_AssaultPack_rgr"}, // 0.26%
			{8680.46912159451, "B_AssaultPack_dgtl"}, // 0.26%
			{8706.92596601452, "B_AssaultPack_khk"}, // 0.26%
			{8733.38281043453, "B_AssaultPack_cbr"}, // 0.26%
			{8759.83965485454, "B_AssaultPack_mcamo"}, // 0.26%
			{8786.29649927455, "B_AssaultPack_tna_F"}, // 0.26%
			{8811.83829494018, "SMG_05_F"}, // 0.26%
			{8837.38009060582, "hgun_PDW2000_F"}, // 0.26%
			{8861.99244600823, "CUP_hgun_MicroUzi"}, // 0.25%
			{8884.9703871847, "Exile_Item_Raisins"}, // 0.23%
			{8907.94832836117, "Exile_Item_Moobar"}, // 0.23%
			{8929.44815636255, "U_C_man_sport_1_F"}, // 0.21%
			{8950.94798436392, "U_C_Man_casual_5_F"}, // 0.21%
			{8972.4478123653, "U_C_Man_casual_4_F"}, // 0.21%
			{8993.94764036667, "U_C_Man_casual_3_F"}, // 0.21%
			{9015.44746836805, "U_C_Man_casual_2_F"}, // 0.21%
			{9036.94729636942, "U_C_Man_casual_1_F"}, // 0.21%
			{9058.4471243708, "U_C_man_sport_3_F"}, // 0.21%
			{9079.94695237217, "U_C_Man_casual_6_F"}, // 0.21%
			{9101.44678037355, "U_I_C_Soldier_Bandit_5_F"}, // 0.21%
			{9122.94660837492, "U_I_C_Soldier_Bandit_4_F"}, // 0.21%
			{9144.4464363763, "U_I_C_Soldier_Bandit_3_F"}, // 0.21%
			{9165.94626437767, "U_I_C_Soldier_Bandit_2_F"}, // 0.21%
			{9187.44609237905, "U_I_C_Soldier_Bandit_1_F"}, // 0.21%
			{9208.94592038042, "U_C_man_sport_2_F"}, // 0.21%
			{9230.39199881179, "Exile_Item_PowerDrink"}, // 0.21%
			{9251.31500215947, "6Rnd_GreenSignal_F"}, // 0.21%
			{9272.23800550715, "6Rnd_RedSignal_F"}, // 0.21%
			{9292.66284210846, "Exile_Item_SeedAstics"}, // 0.20%
			{9313.08767870977, "Exile_Item_CockONut"}, // 0.20%
			{9332.43752391101, "SMG_01_F"}, // 0.19%
			{9351.78736911225, "CUP_smg_MP5A5"}, // 0.19%
			{9370.68511512654, "B_Kitbag_mcamo"}, // 0.19%
			{9389.58286114083, "B_Kitbag_sgg"}, // 0.19%
			{9408.48060715513, "B_Kitbag_cbr"}, // 0.19%
			{9426.35233918127, "Exile_Item_Dogfood"}, // 0.18%
			{9444.22407120742, "Exile_Item_CatFood"}, // 0.18%
			{9462.09580323356, "Exile_Item_Noodles"}, // 0.18%
			{9479.9675352597, "Exile_Item_Cheathas"}, // 0.18%
			{9497.83926728585, "Exile_Item_BBQSandwich"}, // 0.18%
			{9515.71099931199, "Exile_Item_BeefParts"}, // 0.18%
			{9533.58273133814, "Exile_Item_MacasCheese"}, // 0.18%
			{9551.45446336428, "Exile_Item_ChristmasTinner"}, // 0.18%
			{9569.32619539042, "Exile_Item_DsNuts"}, // 0.18%
			{9587.19792741657, "Exile_Item_SausageGravy"}, // 0.18%
			{9605.06965944271, "Exile_Item_Surstromming"}, // 0.18%
			{9621.40952872376, "Exile_Item_MobilePhone"}, // 0.16%
			{9637.7493980048, "optic_ACO_grn_smg"}, // 0.16%
			{9654.08926728585, "optic_Holosight_smg_blk_F"}, // 0.16%
			{9670.4291365669, "optic_Aco_smg"}, // 0.16%
			{9686.76900584794, "optic_ACO_grn"}, // 0.16%
			{9703.10887512899, "optic_Aco"}, // 0.16%
			{9719.44874441003, "ItemGPS"}, // 0.16%
			{9735.78861369108, "optic_Holosight_smg"}, // 0.16%
			{9751.26848985207, "CUP_smg_bizon"}, // 0.15%
			{9766.74836601306, "SMG_02_F"}, // 0.15%
			{9782.06699346404, "Exile_Item_PlasticBottleCoffee"}, // 0.15%
			{9797.38562091502, "Exile_Item_GloriousKnakworst"}, // 0.15%
			{9810.15114379084, "Exile_Item_Matches"}, // 0.13%
			{9822.91666666666, "Exile_Item_CanOpener"}, // 0.13%
			{9835.17156862744, "30Rnd_45ACP_Mag_SMG_01"}, // 0.12%
			{9847.42647058823, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.12%
			{9859.68137254901, "30Rnd_9x21_Mag_SMG_02"}, // 0.12%
			{9871.9362745098, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.12%
			{9884.19117647058, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.12%
			{9896.44607843137, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.12%
			{9908.70098039215, "CUP_64Rnd_9x19_Bizon_M"}, // 0.12%
			{9920.95588235294, "CUP_30Rnd_9x19_MP5"}, // 0.12%
			{9933.21078431372, "CUP_30Rnd_9x19_EVO"}, // 0.12%
			{9945.46568627451, "CUP_optic_ACOG"}, // 0.12%
			{9956.3015995872, "CUP_smg_MP5SD6"}, // 0.11%
			{9964.0415376677, "CUP_smg_EVO"}, // 0.08%
			{9971.78147574819, "CUP_smg_bizon_snds"}, // 0.08%
			{9979.44078947368, "Exile_Item_EMRE"}, // 0.08%
			{9987.10010319917, "Exile_Item_CookingPot"}, // 0.08%
			{9991.40006879945, "U_OrestesBody"}, // 0.04%
			{9995.70003439972, "U_NikosBody"}, // 0.04%
			{10000, "U_NikosAgedBody"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  CUP_18Rnd_9x19_Phantom
	  hgun_PDW2000_F
	  SmokeShell
	  hgun_Rook40_F
	  30Rnd_9x21_Mag
	  optic_ACO_grn_smg
	  Exile_Weapon_LeeEnfield
	  H_Hat_tan
	  30Rnd_9x21_Mag_SMG_02_Tracer_Yellow
	  U_C_Poloshirt_burgundy
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  hgun_Rook40_F
	  6Rnd_45ACP_Cylinder
	  B_AssaultPack_mcamo
	  Exile_Item_ChristmasTinner
	  Exile_Item_EnergyDrink
	  hgun_ACPC2_F
	  Exile_Magazine_7Rnd_45ACP
	  optic_Holosight_smg_blk_F
	  U_C_man_sport_1_F
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_red
	  Exile_Item_CatFood
	  B_AssaultPack_mcamo
	  11Rnd_45ACP_Mag
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_ToiletPaper
	  Exile_Magazine_7Rnd_45ACP
	  CUP_20Rnd_B_765x17_Ball_M
	  Exile_Item_CockONut
	  Exile_Item_Surstromming
	  Exile_Item_GloriousKnakworst
	  Exile_Item_Can_Empty
	  CUP_hgun_PB6P9_snds
	  U_C_Poor_shorts_1
	  Exile_Weapon_M1014
	  Exile_Weapon_LeeEnfield
	  Exile_Magazine_10Rnd_303
	  Chemlight_yellow
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Weapon_Colt1911
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  CUP_hgun_MicroUzi
	  9Rnd_45ACP_Mag
	  Exile_Weapon_TaurusGold
	  Exile_Item_Moobar
	  FlareGreen_F
	  Exile_Weapon_LeeEnfield
	  Exile_Weapon_M1014
	  U_C_Scientist
	  Exile_Item_Surstromming
	  optic_Holosight_smg
	  CUP_sgun_Saiga12K
	  Exile_Item_Dogfood
	  9Rnd_45ACP_Mag
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_Magazine02
	  H_Bandanna_surfer
	  Exile_Item_Can_Empty
	  U_C_Journalist
	  CUP_sgun_Saiga12K
	  Exile_Magazine_10Rnd_303
	  Exile_Item_EnergyDrink
	  FlareWhite_F
	  ItemWatch
	  hgun_P07_khk_F
	  B_AssaultPack_cbr
	  hgun_Pistol_heavy_01_F
	  U_Rangemaster
	  Chemlight_blue
	  FlareGreen_F
	  Exile_Item_ChocolateMilk
	  B_AssaultPack_sgg
	  6Rnd_45ACP_Cylinder
	  H_Cap_blu
	  SMG_05_F
	  hgun_P07_F
	  CUP_sgun_Saiga12K
	  B_Kitbag_mcamo
	  Exile_Item_ToiletPaper
	  B_Kitbag_mcamo
	  U_C_Poloshirt_burgundy
	  Exile_Item_InstantCoffee
	  CUP_hgun_SA61
	  6Rnd_GreenSignal_F
	  Exile_Item_MacasCheese
	  Exile_Item_Noodles
	  Exile_Item_InstantCoffee
	  Exile_Item_Magazine04
	  Exile_Item_Magazine03
	  H_Cap_blk_Raven
	  Chemlight_blue
	  Exile_Magazine_10Rnd_303
	  ItemMap
	  CUP_sgun_Saiga12K
	  ItemMap
	  U_C_Scientist
	*/
	class CivillianUpperClass
	{
		count = 199;
		half = 7548.50061897721;
		halfIndex = 99;
		sum = 9999.99999999999;
		items[] = 
		{
			{342.465753424658, "Exile_Item_Can_Empty"}, // 3.42%
			{684.931506849315, "Exile_Item_ToiletPaper"}, // 3.42%
			{1027.39726027397, "Exile_Item_PlasticBottleEmpty"}, // 3.42%
			{1232.87671232877, "Exile_Weapon_M1014"}, // 2.05%
			{1438.35616438356, "CUP_sgun_Saiga12K"}, // 2.05%
			{1643.83561643836, "Exile_Weapon_LeeEnfield"}, // 2.05%
			{1815.06849315069, "Exile_Magazine_8Rnd_74Slug"}, // 1.71%
			{1986.30136986301, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.71%
			{2157.53424657534, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.71%
			{2328.76712328767, "Exile_Magazine_10Rnd_303"}, // 1.71%
			{2500, "Exile_Magazine_5Rnd_22LR"}, // 1.71%
			{2607.02054794521, "Exile_Item_PlasticBottleDirtyWater"}, // 1.07%
			{2692.63698630137, "Exile_Item_MountainDupe"}, // 0.86%
			{2778.25342465753, "Exile_Item_ChocolateMilk"}, // 0.86%
			{2863.8698630137, "Exile_Item_Magazine02"}, // 0.86%
			{2949.48630136986, "Exile_Item_Magazine03"}, // 0.86%
			{3035.10273972603, "Chemlight_blue"}, // 0.86%
			{3120.71917808219, "Chemlight_green"}, // 0.86%
			{3206.33561643836, "FlareRed_F"}, // 0.86%
			{3291.95205479452, "Chemlight_yellow"}, // 0.86%
			{3377.56849315069, "FlareGreen_F"}, // 0.86%
			{3463.18493150685, "FlareWhite_F"}, // 0.86%
			{3548.80136986301, "FlareYellow_F"}, // 0.86%
			{3634.41780821918, "Exile_Item_Magazine01"}, // 0.86%
			{3720.03424657534, "Chemlight_red"}, // 0.86%
			{3805.65068493151, "Exile_Item_Magazine04"}, // 0.86%
			{3891.26712328767, "V_Rangemaster_belt"}, // 0.86%
			{3967.37062404871, "ItemWatch"}, // 0.76%
			{4040.6202435312, "Exile_Item_InstantCoffee"}, // 0.73%
			{4113.39421613394, "Exile_Item_EnergyDrink"}, // 0.73%
			{4182.65695278163, "muzzle_snds_acp"}, // 0.69%
			{4251.91968942931, "muzzle_snds_L"}, // 0.69%
			{4320.41284011424, "Exile_Weapon_CZ550"}, // 0.68%
			{4384.42513047399, "B_OutdoorPack_blk"}, // 0.64%
			{4445.30793108282, "Exile_Item_Heatpack"}, // 0.61%
			{4505.49019737502, "hgun_P07_F"}, // 0.60%
			{4565.42170422433, "Exile_Item_Moobar"}, // 0.60%
			{4625.35321107365, "Exile_Item_Raisins"}, // 0.60%
			{4685.28471792296, "Exile_Item_Beer"}, // 0.60%
			{4742.89577924674, "B_OutdoorPack_tan"}, // 0.58%
			{4800.50684057051, "B_OutdoorPack_blu"}, // 0.58%
			{4857.82328465832, "hgun_ACPC2_F"}, // 0.57%
			{4915.13972874613, "hgun_Rook40_F"}, // 0.57%
			{4970.82521710786, "10Rnd_9x21_Mag"}, // 0.56%
			{5026.5107054696, "9Rnd_45ACP_Mag"}, // 0.56%
			{5082.19619383133, "Exile_Magazine_7Rnd_45ACP"}, // 0.56%
			{5137.88168219306, "11Rnd_45ACP_Mag"}, // 0.56%
			{5193.56717055479, "Exile_Magazine_6Rnd_45ACP"}, // 0.56%
			{5249.25265891653, "Exile_Magazine_8Rnd_9x18"}, // 0.56%
			{5304.93814727826, "30Rnd_9x21_Mag"}, // 0.56%
			{5358.21059781098, "Exile_Item_SeedAstics"}, // 0.53%
			{5411.48304834371, "ItemMap"}, // 0.53%
			{5464.75549887643, "Exile_Item_CockONut"}, // 0.53%
			{5516.34029855546, "CUP_hgun_Phantom"}, // 0.52%
			{5567.71016156916, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{5618.91999385696, "B_HuntingBackpack"}, // 0.51%
			{5669.03693338252, "CUP_30Rnd_9x19_UZI"}, // 0.50%
			{5719.15387290808, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.50%
			{5769.27081243364, "CUP_18Rnd_9x19_Phantom"}, // 0.50%
			{5815.88420664977, "Exile_Item_SausageGravy"}, // 0.47%
			{5862.4976008659, "Exile_Item_Surstromming"}, // 0.47%
			{5909.11099508204, "Exile_Item_BBQSandwich"}, // 0.47%
			{5955.72438929817, "Exile_Item_MacasCheese"}, // 0.47%
			{6002.33778351431, "Exile_Item_Noodles"}, // 0.47%
			{6048.95117773044, "Exile_Item_ChristmasTinner"}, // 0.47%
			{6095.56457194657, "Exile_Item_DsNuts"}, // 0.47%
			{6142.17796616271, "Exile_Item_Dogfood"}, // 0.47%
			{6188.79136037884, "Exile_Item_Cheathas"}, // 0.47%
			{6235.40475459498, "Exile_Item_BeefParts"}, // 0.47%
			{6282.01814881111, "Exile_Item_CatFood"}, // 0.47%
			{6327.68024926773, "Binocular"}, // 0.46%
			{6373.34234972435, "ItemRadio"}, // 0.46%
			{6419.00445018097, "ItemCompass"}, // 0.46%
			{6463.8130534328, "B_AssaultPack_mcamo"}, // 0.45%
			{6508.62165668462, "B_AssaultPack_khk"}, // 0.45%
			{6553.43025993645, "B_AssaultPack_dgtl"}, // 0.45%
			{6598.23886318827, "B_AssaultPack_rgr"}, // 0.45%
			{6643.04746644009, "B_AssaultPack_sgg"}, // 0.45%
			{6687.85606969192, "B_AssaultPack_tna_F"}, // 0.45%
			{6732.66467294374, "B_AssaultPack_cbr"}, // 0.45%
			{6777.47327619557, "B_AssaultPack_blk"}, // 0.45%
			{6822.02166688495, "6Rnd_45ACP_Cylinder"}, // 0.45%
			{6864.82988606303, "V_Press_F"}, // 0.43%
			{6907.63810524112, "V_TacVest_blk_POLICE"}, // 0.43%
			{6948.73399565208, "H_Cap_press"}, // 0.41%
			{6989.82988606304, "H_Cap_red"}, // 0.41%
			{7030.925776474, "H_Cap_tan"}, // 0.41%
			{7072.02166688495, "H_Hat_blue"}, // 0.41%
			{7113.11755729591, "H_Hat_brown"}, // 0.41%
			{7154.21344770687, "H_Hat_checker"}, // 0.41%
			{7195.30933811783, "H_Hat_grey"}, // 0.41%
			{7236.40522852879, "H_Hat_tan"}, // 0.41%
			{7277.50111893975, "H_StrawHat"}, // 0.41%
			{7318.59700935071, "H_StrawHat_dark"}, // 0.41%
			{7358.55134725025, "Exile_Item_GloriousKnakworst"}, // 0.40%
			{7397.03064538786, "CUP_acc_CZ_M3X"}, // 0.38%
			{7435.50994352546, "CUP_acc_Glock17_Flashlight"}, // 0.38%
			{7473.98924166306, "CUP_muzzle_snds_MicroUzi"}, // 0.38%
			{7511.24493032014, "hgun_Pistol_01_F"}, // 0.37%
			{7548.50061897721, "Exile_Weapon_Colt1911"}, // 0.37%
			{7585.75630763429, "hgun_P07_khk_F"}, // 0.37%
			{7623.01199629136, "hgun_Pistol_heavy_02_F"}, // 0.37%
			{7660.26768494844, "hgun_Pistol_Signal_F"}, // 0.37%
			{7697.52337360551, "hgun_Pistol_heavy_01_F"}, // 0.37%
			{7734.77906226259, "CUP_hgun_SA61"}, // 0.37%
			{7772.03475091966, "Exile_Weapon_Makarov"}, // 0.37%
			{7809.29043957674, "Exile_Weapon_TaurusGold"}, // 0.37%
			{7846.54612823382, "Exile_Weapon_Taurus"}, // 0.37%
			{7882.5951549101, "U_C_Journalist"}, // 0.36%
			{7918.64418158638, "U_C_HunterBody_grn"}, // 0.36%
			{7954.69320826266, "U_C_Scientist"}, // 0.36%
			{7990.74223493894, "U_C_Poor_shorts_1"}, // 0.36%
			{8026.79126161522, "U_C_Poor_1"}, // 0.36%
			{8062.8402882915, "U_C_Poor_2"}, // 0.36%
			{8098.88931496778, "U_Rangemaster"}, // 0.36%
			{8133.52068329162, "CUP_muzzle_snds_M9"}, // 0.35%
			{8167.9105497443, "CUP_hgun_Duty_M3X"}, // 0.34%
			{8202.15712508677, "H_Cap_blu"}, // 0.34%
			{8236.40370042923, "H_Cap_grn"}, // 0.34%
			{8270.6502757717, "H_Cap_headphones"}, // 0.34%
			{8304.89685111416, "H_Cap_oli"}, // 0.34%
			{8339.14342645663, "H_Cap_blk_Raven"}, // 0.34%
			{8373.3900017991, "H_Beret_blk_POLICE"}, // 0.34%
			{8407.63657714156, "H_Cap_blk"}, // 0.34%
			{8441.88315248403, "Exile_Item_ZipTie"}, // 0.34%
			{8476.12972782649, "H_Bandanna_surfer"}, // 0.34%
			{8509.54102084353, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.33%
			{8542.83630242649, "Exile_Item_Matches"}, // 0.33%
			{8576.13158400944, "Exile_Item_CanOpener"}, // 0.33%
			{8608.13772918931, "B_Kitbag_sgg"}, // 0.32%
			{8640.14387436919, "B_Kitbag_cbr"}, // 0.32%
			{8672.15001954906, "B_Kitbag_mcamo"}, // 0.32%
			{8702.11577297372, "Exile_Item_PowerDrink"}, // 0.30%
			{8731.85621998165, "SMG_05_F"}, // 0.30%
			{8761.59666698958, "hgun_PDW2000_F"}, // 0.30%
			{8790.25488903348, "CUP_hgun_PB6P9_snds"}, // 0.29%
			{8818.29302089281, "U_C_Poloshirt_salmon"}, // 0.28%
			{8846.33115275214, "U_C_Poloshirt_blue"}, // 0.28%
			{8874.36928461147, "U_C_Poloshirt_burgundy"}, // 0.28%
			{8902.4074164708, "U_C_Poloshirt_stripped"}, // 0.28%
			{8930.44554833012, "U_C_Poloshirt_tricolour"}, // 0.28%
			{8958.28829251099, "16Rnd_9x21_Mag"}, // 0.28%
			{8985.22380120731, "optic_MRD"}, // 0.27%
			{9012.15930990363, "optic_Yorris"}, // 0.27%
			{9036.62114943397, "SmokeShellGreen"}, // 0.24%
			{9061.0829889643, "SmokeShell"}, // 0.24%
			{9085.54482849463, "SmokeShellYellow"}, // 0.24%
			{9110.00666802497, "SmokeShellRed"}, // 0.24%
			{9134.4685075553, "SmokeShellPurple"}, // 0.24%
			{9158.93034708563, "SmokeShellOrange"}, // 0.24%
			{9183.39218661597, "SmokeShellBlue"}, // 0.24%
			{9206.31876425109, "CUP_hgun_MicroUzi"}, // 0.23%
			{9228.84940592376, "SMG_01_F"}, // 0.23%
			{9251.38004759644, "CUP_smg_MP5A5"}, // 0.23%
			{9272.78415718548, "Exile_Item_PlasticBottleCoffee"}, // 0.21%
			{9292.81139422786, "U_C_Man_casual_6_F"}, // 0.20%
			{9312.83863127023, "U_I_C_Soldier_Bandit_1_F"}, // 0.20%
			{9332.86586831261, "U_I_C_Soldier_Bandit_2_F"}, // 0.20%
			{9352.89310535499, "U_I_C_Soldier_Bandit_3_F"}, // 0.20%
			{9372.92034239736, "U_I_C_Soldier_Bandit_4_F"}, // 0.20%
			{9392.94757943974, "U_C_man_sport_1_F"}, // 0.20%
			{9412.97481648212, "U_C_man_sport_2_F"}, // 0.20%
			{9433.0020535245, "U_C_man_sport_3_F"}, // 0.20%
			{9453.02929056687, "U_C_Man_casual_1_F"}, // 0.20%
			{9473.05652760925, "U_C_Man_casual_2_F"}, // 0.20%
			{9493.08376465163, "U_C_Man_casual_3_F"}, // 0.20%
			{9513.11100169401, "U_C_Man_casual_4_F"}, // 0.20%
			{9533.13823873638, "U_I_C_Soldier_Bandit_5_F"}, // 0.20%
			{9553.16547577876, "U_C_Man_casual_5_F"}, // 0.20%
			{9573.14264472853, "Exile_Item_CookingPot"}, // 0.20%
			{9593.1198136783, "Exile_Item_EMRE"}, // 0.20%
			{9612.60973460491, "6Rnd_GreenSignal_F"}, // 0.19%
			{9632.09965553152, "6Rnd_RedSignal_F"}, // 0.19%
			{9651.12553072177, "30Rnd_45ACP_Mag_SMG_01"}, // 0.19%
			{9670.15140591203, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.19%
			{9689.17728110229, "30Rnd_9x21_Mag_SMG_02"}, // 0.19%
			{9708.20315629255, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.19%
			{9727.22903148281, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.19%
			{9746.25490667307, "CUP_30Rnd_9x19_MP5"}, // 0.19%
			{9765.28078186332, "CUP_64Rnd_9x19_Bizon_M"}, // 0.19%
			{9784.30665705358, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.19%
			{9803.33253224384, "CUP_30Rnd_9x19_EVO"}, // 0.19%
			{9821.35704558198, "SMG_02_F"}, // 0.18%
			{9839.38155892012, "CUP_smg_bizon"}, // 0.18%
			{9854.60225907233, "optic_ACO_grn_smg"}, // 0.15%
			{9869.82295922454, "optic_Holosight_smg"}, // 0.15%
			{9885.04365937674, "optic_Aco_smg"}, // 0.15%
			{9900.26435952895, "optic_ACO_grn"}, // 0.15%
			{9915.48505968116, "optic_Aco"}, // 0.15%
			{9930.70575983336, "optic_Holosight_smg_blk_F"}, // 0.15%
			{9943.32291917006, "CUP_smg_MP5SD6"}, // 0.13%
			{9954.73844428422, "CUP_optic_ACOG"}, // 0.11%
			{9963.75070095329, "CUP_smg_EVO"}, // 0.09%
			{9972.76295762236, "CUP_smg_bizon_snds"}, // 0.09%
			{9980.37330769846, "ItemGPS"}, // 0.08%
			{9987.98365777456, "Exile_Item_MobilePhone"}, // 0.08%
			{9991.98910518304, "U_OrestesBody"}, // 0.04%
			{9995.99455259152, "U_NikosBody"}, // 0.04%
			{9999.99999999999, "U_NikosAgedBody"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  CUP_sgun_Saiga12K
	  Exile_Item_Cheathas
	  Exile_Weapon_TaurusGold
	  Exile_Item_CookingPot
	  Exile_Item_PowerDrink
	  Exile_Item_Surstromming
	  CUP_acc_CZ_M3X
	  CUP_sgun_Saiga12K
	  10Rnd_9x21_Mag
	  ItemGPS
	  B_Kitbag_sgg
	  H_Bandanna_surfer
	  Exile_Item_PowerDrink
	  FlareRed_F
	  FlareYellow_F
	  hgun_P07_F
	  Exile_Item_ZipTie
	  Exile_Item_Magazine03
	  Exile_Item_SeedAstics
	  Exile_Item_MetalBoard
	  CUP_hgun_MicroUzi
	  Exile_Item_Cheathas
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_PlasticBottleCoffee
	  FlareYellow_F
	  ItemWatch
	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	  Exile_Item_SeedAstics
	  Exile_Item_DsNuts
	  Exile_Item_MacasCheese
	  Exile_Item_BeefParts
	  CUP_hgun_Phantom
	  Exile_Item_Can_Empty
	  CUP_hgun_Duty_M3X
	  B_AssaultPack_cbr
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Weapon_LeeEnfield
	  Exile_Item_MountainDupe
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_ChocolateMilk
	  CUP_20Rnd_B_765x17_Ball_M
	  Exile_Weapon_M1014
	  SmokeShellPurple
	  Exile_Item_CockONut
	  B_AssaultPack_rgr
	  Exile_Item_Moobar
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Weapon_LeeEnfield
	  Exile_Item_PlasticBottleDirtyWater
	  B_AssaultPack_blk
	  Exile_Item_Dogfood
	  30Rnd_45ACP_Mag_SMG_01
	  Exile_Weapon_LeeEnfield
	  B_OutdoorPack_blu
	  Exile_Item_SeedAstics
	  Exile_Item_SeedAstics
	  Exile_Item_EnergyDrink
	  CUP_hgun_SA61
	  Exile_Item_Can_Empty
	  B_AssaultPack_sgg
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_MountainDupe
	  Exile_Item_ZipTie
	  Exile_Magazine_10Rnd_303
	  Exile_Item_PlasticBottleFreshWater
	  ItemMap
	  Chemlight_yellow
	  Exile_Item_Matches
	  B_AssaultPack_dgtl
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Magazine_10Rnd_303
	  Exile_Item_EnergyDrink
	  FlareGreen_F
	  FlareRed_F
	  ItemCompass
	  hgun_Pistol_heavy_01_F
	  Exile_Item_Raisins
	  Exile_Item_PlasticBottleDirtyWater
	  hgun_Pistol_Signal_F
	  Exile_Item_ToiletPaper
	  hgun_Pistol_heavy_02_F
	  B_Kitbag_cbr
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Heatpack
	  Exile_Melee_Axe
	  B_OutdoorPack_blk
	  B_OutdoorPack_blk
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Beer
	  Exile_Magazine_8Rnd_74Slug
	  hgun_PDW2000_F
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_MountainDupe
	  Exile_Item_ChristmasTinner
	  Exile_Weapon_LeeEnfield
	  Exile_Item_ChristmasTinner
	  B_AssaultPack_blk
	*/
	class Shop
	{
		count = 227;
		half = 9208.27750844023;
		halfIndex = 113;
		sum = 9999.99999999998;
		items[] = 
		{
			{344.036697247706, "Exile_Item_Can_Empty"}, // 3.44%
			{688.073394495413, "Exile_Item_ToiletPaper"}, // 3.44%
			{1032.11009174312, "Exile_Item_PlasticBottleEmpty"}, // 3.44%
			{1318.80733944954, "Exile_Item_PlasticBottleDirtyWater"}, // 2.87%
			{1594.03669724771, "Exile_Weapon_LeeEnfield"}, // 2.75%
			{1869.26605504587, "CUP_sgun_Saiga12K"}, // 2.75%
			{2144.49541284404, "Exile_Weapon_M1014"}, // 2.75%
			{2373.85321100917, "Exile_Item_MountainDupe"}, // 2.29%
			{2603.21100917431, "Exile_Item_ChocolateMilk"}, // 2.29%
			{2798.16513761468, "Exile_Item_EnergyDrink"}, // 1.95%
			{2981.65137614679, "Exile_Magazine_8Rnd_74Slug"}, // 1.83%
			{3165.1376146789, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.83%
			{3348.62385321101, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.83%
			{3532.11009174312, "Exile_Magazine_10Rnd_303"}, // 1.83%
			{3715.59633027523, "Exile_Magazine_5Rnd_22LR"}, // 1.83%
			{3876.14678899083, "Exile_Item_Beer"}, // 1.61%
			{4013.76146788991, "Exile_Item_PlasticBottleFreshWater"}, // 1.38%
			{4151.37614678899, "Exile_Item_ZipTie"}, // 1.38%
			{4256.49847094801, "Exile_Item_InstantCoffee"}, // 1.05%
			{4348.24159021407, "Exile_Weapon_CZ550"}, // 0.92%
			{4434.250764526, "Exile_Item_Magazine04"}, // 0.86%
			{4520.25993883792, "Exile_Item_Raisins"}, // 0.86%
			{4606.26911314985, "Exile_Item_Moobar"}, // 0.86%
			{4692.27828746178, "Exile_Item_Magazine01"}, // 0.86%
			{4778.2874617737, "Exile_Item_Magazine02"}, // 0.86%
			{4864.29663608563, "Exile_Item_Magazine03"}, // 0.86%
			{4944.57186544343, "Exile_Item_PowerDrink"}, // 0.80%
			{5021.0244648318, "Exile_Item_CockONut"}, // 0.76%
			{5097.47706422018, "Exile_Item_SeedAstics"}, // 0.76%
			{5168.83282364934, "ItemWatch"}, // 0.71%
			{5235.72884811417, "Exile_Item_CatFood"}, // 0.67%
			{5302.624872579, "Exile_Item_Surstromming"}, // 0.67%
			{5369.52089704383, "Exile_Item_SausageGravy"}, // 0.67%
			{5436.41692150866, "Exile_Item_ChristmasTinner"}, // 0.67%
			{5503.3129459735, "Exile_Item_MacasCheese"}, // 0.67%
			{5570.20897043833, "Exile_Item_BBQSandwich"}, // 0.67%
			{5637.10499490316, "Exile_Item_Noodles"}, // 0.67%
			{5704.00101936799, "Exile_Item_DsNuts"}, // 0.67%
			{5770.89704383282, "Exile_Item_Cheathas"}, // 0.67%
			{5837.79306829765, "Exile_Item_BeefParts"}, // 0.67%
			{5904.68909276248, "Exile_Item_Dogfood"}, // 0.67%
			{5968.99501748168, "B_OutdoorPack_blk"}, // 0.64%
			{6029.45334921559, "hgun_P07_F"}, // 0.60%
			{6087.32868146287, "B_OutdoorPack_tan"}, // 0.58%
			{6145.20401371014, "B_OutdoorPack_blu"}, // 0.58%
			{6202.78337726625, "hgun_ACPC2_F"}, // 0.58%
			{6260.36274082235, "hgun_Rook40_F"}, // 0.58%
			{6317.70219036363, "Exile_Item_PlasticBottleCoffee"}, // 0.57%
			{6375.04163990491, "Exile_Item_GloriousKnakworst"}, // 0.57%
			{6432.3810894462, "Chemlight_blue"}, // 0.57%
			{6489.72053898748, "FlareYellow_F"}, // 0.57%
			{6547.05998852877, "FlareWhite_F"}, // 0.57%
			{6604.39943807005, "Chemlight_red"}, // 0.57%
			{6661.73888761133, "FlareGreen_F"}, // 0.57%
			{6719.07833715262, "Chemlight_yellow"}, // 0.57%
			{6776.4177866939, "Chemlight_green"}, // 0.57%
			{6833.75723623519, "FlareRed_F"}, // 0.57%
			{6890.84184377851, "Exile_Item_Heatpack"}, // 0.57%
			{6946.78277016025, "11Rnd_45ACP_Mag"}, // 0.56%
			{7002.72369654199, "9Rnd_45ACP_Mag"}, // 0.56%
			{7058.66462292373, "Exile_Magazine_7Rnd_45ACP"}, // 0.56%
			{7114.60554930547, "Exile_Magazine_8Rnd_9x18"}, // 0.56%
			{7170.54647568721, "Exile_Magazine_6Rnd_45ACP"}, // 0.56%
			{7226.48740206895, "10Rnd_9x21_Mag"}, // 0.56%
			{7282.42832845069, "30Rnd_9x21_Mag"}, // 0.56%
			{7334.24975565119, "CUP_hgun_Phantom"}, // 0.52%
			{7385.69449542654, "B_HuntingBackpack"}, // 0.51%
			{7436.04132917011, "CUP_18Rnd_9x19_Phantom"}, // 0.50%
			{7486.38816291368, "CUP_30Rnd_9x19_UZI"}, // 0.50%
			{7536.73499665724, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.50%
			{7586.68402825765, "ItemMap"}, // 0.50%
			{7634.46690287539, "Exile_Item_CanOpener"}, // 0.48%
			{7682.24977749313, "Exile_Item_Matches"}, // 0.48%
			{7729.70311504453, "Exile_Item_Heatpack"}, // 0.47%
			{7777.15645259594, "Exile_Item_Vishpirin"}, // 0.47%
			{7822.17059989938, "B_AssaultPack_rgr"}, // 0.45%
			{7867.18474720282, "B_AssaultPack_khk"}, // 0.45%
			{7912.19889450626, "B_AssaultPack_sgg"}, // 0.45%
			{7957.21304180969, "B_AssaultPack_blk"}, // 0.45%
			{8002.22718911313, "B_AssaultPack_cbr"}, // 0.45%
			{8047.24133641657, "B_AssaultPack_tna_F"}, // 0.45%
			{8092.25548372001, "B_AssaultPack_dgtl"}, // 0.45%
			{8137.26963102345, "B_AssaultPack_mcamo"}, // 0.45%
			{8182.02237212884, "6Rnd_45ACP_Cylinder"}, // 0.45%
			{8224.83582778633, "ItemCompass"}, // 0.43%
			{8267.64928344383, "Binocular"}, // 0.43%
			{8310.46273910132, "ItemRadio"}, // 0.43%
			{8350.29856720369, "hgun_PDW2000_F"}, // 0.40%
			{8390.13439530605, "SMG_05_F"}, // 0.40%
			{8427.56098161752, "hgun_Pistol_01_F"}, // 0.37%
			{8464.98756792898, "CUP_hgun_SA61"}, // 0.37%
			{8502.41415424045, "hgun_P07_khk_F"}, // 0.37%
			{8539.84074055191, "Exile_Weapon_Taurus"}, // 0.37%
			{8577.26732686338, "Exile_Weapon_Makarov"}, // 0.37%
			{8614.69391317484, "Exile_Weapon_Colt1911"}, // 0.37%
			{8652.12049948631, "hgun_Pistol_Signal_F"}, // 0.37%
			{8689.54708579777, "hgun_Pistol_heavy_02_F"}, // 0.37%
			{8726.97367210924, "hgun_Pistol_heavy_01_F"}, // 0.37%
			{8764.4002584207, "Exile_Weapon_TaurusGold"}, // 0.37%
			{8798.94787655437, "CUP_hgun_Duty_M3X"}, // 0.35%
			{8832.51243238341, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.34%
			{8864.66539474301, "B_Kitbag_cbr"}, // 0.32%
			{8896.81835710261, "B_Kitbag_sgg"}, // 0.32%
			{8928.97131946221, "B_Kitbag_mcamo"}, // 0.32%
			{8959.14997711551, "SMG_01_F"}, // 0.30%
			{8989.32863476882, "CUP_smg_MP5A5"}, // 0.30%
			{9018.11831654687, "CUP_hgun_PB6P9_snds"}, // 0.29%
			{9046.78804131751, "Exile_Item_EMRE"}, // 0.29%
			{9075.45776608815, "Exile_Item_CookingPot"}, // 0.29%
			{9103.42822927902, "16Rnd_9x21_Mag"}, // 0.28%
			{9129.64054906933, "SmokeShell"}, // 0.26%
			{9155.85286885963, "SmokeShellGreen"}, // 0.26%
			{9182.06518864993, "SmokeShellYellow"}, // 0.26%
			{9208.27750844023, "SmokeShellPurple"}, // 0.26%
			{9234.48982823053, "SmokeShellBlue"}, // 0.26%
			{9260.70214802084, "SmokeShellOrange"}, // 0.26%
			{9286.91446781114, "SmokeShellRed"}, // 0.26%
			{9311.05739393378, "CUP_smg_bizon"}, // 0.24%
			{9335.20032005643, "SMG_02_F"}, // 0.24%
			{9358.92698883213, "Exile_Item_Bandage"}, // 0.24%
			{9381.95873425457, "CUP_hgun_MicroUzi"}, // 0.23%
			{9404.89451407109, "V_Rangemaster_belt"}, // 0.23%
			{9424.4738383047, "6Rnd_RedSignal_F"}, // 0.20%
			{9444.0531625383, "6Rnd_GreenSignal_F"}, // 0.20%
			{9463.03449755887, "Exile_Item_InstaDoc"}, // 0.19%
			{9479.93454584472, "CUP_smg_MP5SD6"}, // 0.17%
			{9492.00600890604, "CUP_smg_EVO"}, // 0.12%
			{9504.07747196737, "CUP_smg_bizon_snds"}, // 0.12%
			{9515.84714845216, "Exile_Item_ScrewDriver"}, // 0.12%
			{9527.61682493695, "Exile_Item_Pliers"}, // 0.12%
			{9539.38650142174, "Exile_Item_Handsaw"}, // 0.12%
			{9550.85439132999, "V_Press_F"}, // 0.11%
			{9562.32228123825, "V_TacVest_blk_POLICE"}, // 0.11%
			{9572.28123826384, "Exile_Item_JunkMetal"}, // 0.10%
			{9581.55863234693, "muzzle_snds_acp"}, // 0.09%
			{9590.83602643001, "muzzle_snds_L"}, // 0.09%
			{9599.889623726, "Exile_Melee_Axe"}, // 0.09%
			{9608.94322102199, "Exile_Item_MetalScrews"}, // 0.09%
			{9617.99681831799, "Exile_Item_WaterCanisterEmpty"}, // 0.09%
			{9626.25369905193, "H_Hat_checker"}, // 0.08%
			{9634.51057978588, "H_Hat_blue"}, // 0.08%
			{9642.76746051982, "H_Cap_tan"}, // 0.08%
			{9651.02434125377, "H_Hat_grey"}, // 0.08%
			{9659.28122198771, "H_Hat_tan"}, // 0.08%
			{9667.53810272166, "H_Cap_press"}, // 0.08%
			{9675.7949834556, "H_Hat_brown"}, // 0.08%
			{9684.05186418955, "H_Cap_red"}, // 0.08%
			{9692.30874492349, "H_StrawHat_dark"}, // 0.08%
			{9700.56562565743, "H_StrawHat"}, // 0.08%
			{9708.71386322383, "Exile_Item_LightBulb"}, // 0.08%
			{9715.95674106062, "Exile_Item_ExtensionCord"}, // 0.07%
			{9723.09231700354, "ItemGPS"}, // 0.07%
			{9730.22789294645, "Exile_Item_MobilePhone"}, // 0.07%
			{9737.10862689141, "H_Cap_oli"}, // 0.07%
			{9743.98936083636, "H_Cap_headphones"}, // 0.07%
			{9750.87009478131, "H_Cap_blu"}, // 0.07%
			{9757.75082872627, "H_Cap_blk_Raven"}, // 0.07%
			{9764.63156267122, "H_Cap_grn"}, // 0.07%
			{9771.51229661618, "H_Beret_blk_POLICE"}, // 0.07%
			{9778.39303056113, "H_Bandanna_surfer"}, // 0.07%
			{9785.27376450608, "H_Cap_blk"}, // 0.07%
			{9792.06955111838, "optic_Aco"}, // 0.07%
			{9798.86533773068, "optic_ACO_grn"}, // 0.07%
			{9805.66112434298, "optic_Aco_smg"}, // 0.07%
			{9812.45691095528, "optic_ACO_grn_smg"}, // 0.07%
			{9819.25269756758, "optic_Holosight_smg_blk_F"}, // 0.07%
			{9826.04848417988, "optic_Holosight_smg"}, // 0.07%
			{9831.48064255748, "Exile_Item_Foolbox"}, // 0.05%
			{9836.91280093507, "Exile_Item_CamoTentKit"}, // 0.05%
			{9842.06690875901, "CUP_muzzle_snds_MicroUzi"}, // 0.05%
			{9847.22101658294, "CUP_acc_Glock17_Flashlight"}, // 0.05%
			{9852.37512440688, "CUP_acc_CZ_M3X"}, // 0.05%
			{9857.4719643661, "CUP_30Rnd_9x19_MP5"}, // 0.05%
			{9862.56880432533, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.05%
			{9867.66564428455, "30Rnd_45ACP_Mag_SMG_01"}, // 0.05%
			{9872.76248424378, "30Rnd_9x21_Mag_SMG_02"}, // 0.05%
			{9877.85932420301, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.05%
			{9882.95616416223, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.05%
			{9888.05300412146, "CUP_64Rnd_9x19_Bizon_M"}, // 0.05%
			{9893.14984408068, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.05%
			{9898.24668403991, "CUP_optic_ACOG"}, // 0.05%
			{9903.34352399913, "CUP_30Rnd_9x19_EVO"}, // 0.05%
			{9907.98222104068, "CUP_muzzle_snds_M9"}, // 0.05%
			{9912.50901968867, "Exile_Item_Grinder"}, // 0.05%
			{9917.03581833667, "Exile_Melee_SledgeHammer"}, // 0.05%
			{9920.65725725506, "Exile_Item_Rope"}, // 0.04%
			{9924.27869617346, "Exile_Item_Sand"}, // 0.04%
			{9927.90013509186, "Exile_Item_MetalBoard"}, // 0.04%
			{9931.50801056861, "optic_MRD"}, // 0.04%
			{9935.11588604537, "optic_Yorris"}, // 0.04%
			{9937.83196523417, "Exile_Item_CordlessScrewdriver"}, // 0.03%
			{9940.54804442297, "Exile_Item_Cement"}, // 0.03%
			{9943.26412361176, "Exile_Item_PortableGeneratorKit"}, // 0.03%
			{9945.98020280056, "Exile_Item_FloodLightKit"}, // 0.03%
			{9948.69628198936, "Exile_Item_FireExtinguisher"}, // 0.03%
			{9951.11057460162, "U_C_Poor_shorts_1"}, // 0.02%
			{9953.52486721389, "U_C_Journalist"}, // 0.02%
			{9955.93915982615, "U_C_Scientist"}, // 0.02%
			{9958.35345243842, "U_Rangemaster"}, // 0.02%
			{9960.76774505068, "U_C_HunterBody_grn"}, // 0.02%
			{9963.18203766294, "U_C_Poor_2"}, // 0.02%
			{9965.59633027521, "U_C_Poor_1"}, // 0.02%
			{9967.47411341808, "U_C_Poloshirt_burgundy"}, // 0.02%
			{9969.35189656095, "U_C_Poloshirt_stripped"}, // 0.02%
			{9971.22967970383, "U_C_Poloshirt_tricolour"}, // 0.02%
			{9973.1074628467, "U_C_Poloshirt_salmon"}, // 0.02%
			{9974.98524598957, "U_C_Poloshirt_blue"}, // 0.02%
			{9976.79596544877, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9978.60668490797, "Exile_Melee_Shovel"}, // 0.02%
			{9980.41740436716, "Exile_Item_Knife"}, // 0.02%
			{9981.75867804064, "U_C_Man_casual_6_F"}, // 0.01%
			{9983.09995171412, "U_I_C_Soldier_Bandit_1_F"}, // 0.01%
			{9984.44122538761, "U_I_C_Soldier_Bandit_2_F"}, // 0.01%
			{9985.78249906109, "U_I_C_Soldier_Bandit_3_F"}, // 0.01%
			{9987.12377273457, "U_I_C_Soldier_Bandit_4_F"}, // 0.01%
			{9988.46504640805, "U_I_C_Soldier_Bandit_5_F"}, // 0.01%
			{9989.80632008153, "U_C_man_sport_1_F"}, // 0.01%
			{9991.14759375501, "U_C_man_sport_3_F"}, // 0.01%
			{9992.48886742849, "U_C_Man_casual_1_F"}, // 0.01%
			{9993.83014110197, "U_C_Man_casual_2_F"}, // 0.01%
			{9995.17141477545, "U_C_Man_casual_3_F"}, // 0.01%
			{9996.51268844893, "U_C_Man_casual_4_F"}, // 0.01%
			{9997.85396212241, "U_C_Man_casual_5_F"}, // 0.01%
			{9999.19523579589, "U_C_man_sport_2_F"}, // 0.01%
			{9999.46349053059, "U_NikosBody"}, // 0.00%
			{9999.73174526529, "U_NikosAgedBody"}, // 0.00%
			{9999.99999999998, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_Sand
	  Exile_Item_Wrench
	  Exile_Item_ScrewDriver
	  Exile_Item_Pliers
	  Exile_Item_MountainDupe
	  Exile_Item_ToiletPaper
	  Exile_Item_Carwheel
	  Exile_Item_BaseCameraKit
	  Exile_Item_MetalBoard
	  Exile_Item_Laptop
	  Exile_Item_ScrewDriver
	  Exile_Item_LightBulb
	  Exile_Item_WaterCanisterEmpty
	  Exile_Melee_Axe
	  FlareWhite_F
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  Exile_Item_CockONut
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  FlareRed_F
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  Exile_Item_Sand
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ScrewDriver
	  Exile_Item_Magazine01
	  Exile_Item_Handsaw
	  FlareGreen_F
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_JunkMetal
	  Exile_Item_EnergyDrink
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  Exile_Item_ZipTie
	  Exile_Item_CamoTentKit
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  FlareWhite_F
	  FlareGreen_F
	  FlareWhite_F
	  Exile_Item_Magazine02
	  Exile_Item_MetalScrews
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_ZipTie
	  FlareGreen_F
	  Exile_Item_ZipTie
	  Exile_Item_MetalScrews
	  Exile_Item_LightBulb
	  Exile_Item_Magazine03
	  Exile_Item_Grinder
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Grinder
	  Exile_Item_Can_Empty
	  Exile_Item_Grinder
	  Exile_Item_MetalBoard
	  FlareWhite_F
	  Exile_Item_Magazine01
	  Exile_Item_Knife
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  FlareWhite_F
	  FlareRed_F
	  Exile_Item_ZipTie
	  Exile_Item_Foolbox
	  Exile_Item_ZipTie
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  Exile_Item_Magazine04
	*/
	class Industrial
	{
		count = 73;
		half = 9429.82456140352;
		halfIndex = 36;
		sum = 10000;
		items[] = 
		{
			{694.444444444444, "Exile_Item_Can_Empty"}, // 6.94%
			{1388.88888888889, "Exile_Item_PlasticBottleEmpty"}, // 6.94%
			{2083.33333333333, "Exile_Item_ToiletPaper"}, // 6.94%
			{2638.88888888889, "Exile_Item_DuctTape"}, // 5.56%
			{3101.85185185185, "Exile_Item_ZipTie"}, // 4.63%
			{3449.07407407407, "FlareGreen_F"}, // 3.47%
			{3796.2962962963, "FlareRed_F"}, // 3.47%
			{4143.51851851852, "FlareWhite_F"}, // 3.47%
			{4490.74074074074, "FlareYellow_F"}, // 3.47%
			{4807.50487329435, "Exile_Item_Handsaw"}, // 3.17%
			{5124.26900584795, "Exile_Item_ScrewDriver"}, // 3.17%
			{5441.03313840156, "Exile_Item_Pliers"}, // 3.17%
			{5718.81091617934, "Exile_Item_FuelCanisterEmpty"}, // 2.78%
			{5986.84210526316, "Exile_Item_JunkMetal"}, // 2.68%
			{6230.50682261209, "Exile_Melee_Axe"}, // 2.44%
			{6474.17153996101, "Exile_Item_WaterCanisterEmpty"}, // 2.44%
			{6717.83625730994, "Exile_Item_MetalScrews"}, // 2.44%
			{6937.13450292398, "Exile_Item_LightBulb"}, // 2.19%
			{7132.06627680312, "Exile_Item_ExtensionCord"}, // 1.95%
			{7317.25146198831, "Exile_Item_Carwheel"}, // 1.85%
			{7502.43664717349, "Exile_Item_OilCanister"}, // 1.85%
			{7676.0477582846, "Exile_Item_Magazine02"}, // 1.74%
			{7849.65886939571, "Exile_Item_Magazine01"}, // 1.74%
			{8023.26998050683, "Exile_Item_Magazine04"}, // 1.74%
			{8196.88109161794, "Exile_Item_Magazine03"}, // 1.74%
			{8343.07992202729, "Exile_Item_Foolbox"}, // 1.46%
			{8489.27875243665, "Exile_Item_CamoTentKit"}, // 1.46%
			{8611.11111111112, "Exile_Melee_SledgeHammer"}, // 1.22%
			{8732.94346978558, "Exile_Item_Grinder"}, // 1.22%
			{8830.40935672515, "Exile_Item_Sand"}, // 0.97%
			{8927.87524366472, "Exile_Item_MetalBoard"}, // 0.97%
			{9025.34113060429, "Exile_Item_Rope"}, // 0.97%
			{9117.93372319689, "Exile_Item_Wrench"}, // 0.93%
			{9210.52631578948, "Exile_Item_FuelCanisterFull"}, // 0.93%
			{9283.62573099416, "Exile_Item_FireExtinguisher"}, // 0.73%
			{9356.72514619884, "Exile_Item_CordlessScrewdriver"}, // 0.73%
			{9429.82456140352, "Exile_Item_PortableGeneratorKit"}, // 0.73%
			{9502.9239766082, "Exile_Item_FloodLightKit"}, // 0.73%
			{9576.02339181287, "Exile_Item_Cement"}, // 0.73%
			{9624.75633528266, "Exile_Item_Knife"}, // 0.49%
			{9673.48927875245, "Exile_Melee_Shovel"}, // 0.49%
			{9722.22222222223, "Exile_Item_ThermalScannerPro"}, // 0.49%
			{9768.51851851853, "Exile_Item_BaseCameraKit"}, // 0.46%
			{9814.81481481482, "Exile_Item_Laptop"}, // 0.46%
			{9834.10493827161, "Exile_Item_PlasticBottleDirtyWater"}, // 0.19%
			{9849.53703703705, "Exile_Item_ChocolateMilk"}, // 0.15%
			{9864.96913580248, "Exile_Item_MountainDupe"}, // 0.15%
			{9878.0864197531, "Exile_Item_EnergyDrink"}, // 0.13%
			{9888.8888888889, "Exile_Item_Beer"}, // 0.11%
			{9898.14814814816, "Exile_Item_PlasticBottleFreshWater"}, // 0.09%
			{9905.22119341565, "Exile_Item_InstantCoffee"}, // 0.07%
			{9911.00823045268, "Exile_Item_Raisins"}, // 0.06%
			{9916.79526748972, "Exile_Item_Moobar"}, // 0.06%
			{9922.19650205762, "Exile_Item_PowerDrink"}, // 0.05%
			{9927.34053497943, "Exile_Item_CockONut"}, // 0.05%
			{9932.48456790124, "Exile_Item_SeedAstics"}, // 0.05%
			{9936.98559670783, "Exile_Item_Dogfood"}, // 0.05%
			{9941.48662551441, "Exile_Item_Surstromming"}, // 0.05%
			{9945.987654321, "Exile_Item_SausageGravy"}, // 0.05%
			{9950.48868312758, "Exile_Item_BeefParts"}, // 0.05%
			{9954.98971193416, "Exile_Item_Noodles"}, // 0.05%
			{9959.49074074075, "Exile_Item_ChristmasTinner"}, // 0.05%
			{9963.99176954733, "Exile_Item_Cheathas"}, // 0.05%
			{9968.49279835392, "Exile_Item_MacasCheese"}, // 0.05%
			{9972.9938271605, "Exile_Item_BBQSandwich"}, // 0.05%
			{9977.49485596708, "Exile_Item_CatFood"}, // 0.05%
			{9981.99588477367, "Exile_Item_DsNuts"}, // 0.05%
			{9985.85390946503, "Exile_Item_GloriousKnakworst"}, // 0.04%
			{9989.71193415639, "Exile_Item_PlasticBottleCoffee"}, // 0.04%
			{9992.92695473252, "Exile_Item_Matches"}, // 0.03%
			{9996.14197530865, "Exile_Item_CanOpener"}, // 0.03%
			{9998.07098765433, "Exile_Item_EMRE"}, // 0.02%
			{10000, "Exile_Item_CookingPot"} // 0.02%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_Grinder
	  Exile_Item_Rope
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_Knife
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_Grinder
	  Exile_Melee_Shovel
	  Exile_Item_ScrewDriver
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_Handsaw
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_BaseCameraKit
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_OilCanister
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_JunkMetal
	  Exile_Item_Magazine04
	  Exile_Item_DuctTape
	  Exile_Item_Grinder
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalBoard
	  Exile_Item_ScrewDriver
	  Exile_Item_Magazine01
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_JunkMetal
	  Exile_Item_ThermalScannerPro
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CamoTentKit
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Melee_Axe
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_Wrench
	  Exile_Item_Foolbox
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_Foolbox
	  Exile_Item_DuctTape
	  Exile_Item_Foolbox
	  Exile_Item_Grinder
	  Exile_Item_Handsaw
	  Exile_Item_Magazine01
	  Exile_Item_FireExtinguisher
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Carwheel
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  Exile_Item_Magazine03
	*/
	class Factories
	{
		count = 39;
		half = 8091.56154849935;
		halfIndex = 19;
		sum = 10000;
		items[] = 
		{
			{991.735537190083, "Exile_Item_DuctTape"}, // 9.92%
			{1818.18181818182, "Exile_Item_Can_Empty"}, // 8.26%
			{2644.62809917355, "Exile_Item_ToiletPaper"}, // 8.26%
			{3471.07438016529, "Exile_Item_PlasticBottleEmpty"}, // 8.26%
			{3966.94214876033, "Exile_Item_FuelCanisterEmpty"}, // 4.96%
			{4320.35667681601, "Exile_Item_Handsaw"}, // 3.53%
			{4673.77120487168, "Exile_Item_Pliers"}, // 3.53%
			{5027.18573292736, "Exile_Item_ScrewDriver"}, // 3.53%
			{5357.76424532406, "Exile_Item_OilCanister"}, // 3.31%
			{5688.34275772075, "Exile_Item_Carwheel"}, // 3.31%
			{5987.38581992171, "Exile_Item_JunkMetal"}, // 2.99%
			{6259.2431491953, "Exile_Item_MetalScrews"}, // 2.72%
			{6531.1004784689, "Exile_Item_WaterCanisterEmpty"}, // 2.72%
			{6802.9578077425, "Exile_Melee_Axe"}, // 2.72%
			{7047.62940408874, "Exile_Item_LightBulb"}, // 2.45%
			{7265.11526750761, "Exile_Item_ExtensionCord"}, // 2.17%
			{7471.72683775555, "Exile_Item_Magazine04"}, // 2.07%
			{7678.33840800348, "Exile_Item_Magazine02"}, // 2.07%
			{7884.94997825141, "Exile_Item_Magazine01"}, // 2.07%
			{8091.56154849935, "Exile_Item_Magazine03"}, // 2.07%
			{8256.85080469769, "Exile_Item_Wrench"}, // 1.65%
			{8422.14006089604, "Exile_Item_FuelCanisterFull"}, // 1.65%
			{8585.2544584602, "Exile_Item_CamoTentKit"}, // 1.63%
			{8748.36885602436, "Exile_Item_Foolbox"}, // 1.63%
			{8884.29752066116, "Exile_Item_Grinder"}, // 1.36%
			{9020.22618529796, "Exile_Melee_SledgeHammer"}, // 1.36%
			{9128.96911700739, "Exile_Item_Rope"}, // 1.09%
			{9237.71204871683, "Exile_Item_MetalBoard"}, // 1.09%
			{9346.45498042627, "Exile_Item_Sand"}, // 1.09%
			{9428.01217920835, "Exile_Item_PortableGeneratorKit"}, // 0.82%
			{9509.56937799043, "Exile_Item_FloodLightKit"}, // 0.82%
			{9591.12657677251, "Exile_Item_Cement"}, // 0.82%
			{9672.68377555459, "Exile_Item_FireExtinguisher"}, // 0.82%
			{9754.24097433667, "Exile_Item_CordlessScrewdriver"}, // 0.82%
			{9808.61244019139, "Exile_Melee_Shovel"}, // 0.54%
			{9862.98390604611, "Exile_Item_Knife"}, // 0.54%
			{9917.35537190083, "Exile_Item_ThermalScannerPro"}, // 0.54%
			{9958.67768595041, "Exile_Item_BaseCameraKit"}, // 0.41%
			{10000, "Exile_Item_Laptop"} // 0.41%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  Exile_Melee_Axe
	  Exile_Item_LightBulb
	  Exile_Item_OilCanister
	  Exile_Item_ZipTie
	  Exile_Item_FloodLightKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_FireExtinguisher
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_OilCanister
	  Exile_Item_Wrench
	  FlareYellow_F
	  FlareRed_F
	  Exile_Item_Carwheel
	  Exile_Item_OilCanister
	  Exile_Item_ZipTie
	  Exile_Melee_Shovel
	  Exile_Item_CamoTentKit
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  FlareWhite_F
	  FlareWhite_F
	  FlareRed_F
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_ZipTie
	  Exile_Item_Magazine03
	  Exile_Item_OilCanister
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine02
	  FlareRed_F
	  Exile_Item_FloodLightKit
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  Exile_Item_Wrench
	  Exile_Item_Pliers
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  Exile_Item_Wrench
	  Exile_Item_Magazine01
	  Exile_Melee_Axe
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  Exile_Item_Sand
	  FlareRed_F
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_Magazine02
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

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  optic_SOS
	  6Rnd_GreenSignal_F
	  CUP_5Rnd_762x67_G22
	  TRYK_U_B_PCUHsW2
	  TRYK_U_B_PCUHsW5
	  H_Beret_02
	  Exile_Item_ToiletPaper
	  B_Carryall_khk
	  arifle_AKS_F
	  CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
	  30Rnd_762x39_Mag_F
	  TRYK_U_B_PCUHsW2
	  CUP_optic_LeupoldM3LR
	  bipod_02_F_tan
	  U_IG_Guerilla3_2
	  Exile_Item_Magazine02
	  muzzle_snds_L
	  TRYK_H_Helmet_Winter
	  arifle_SPAR_03_snd_F
	  CUP_optic_AN_PVS_4
	  optic_SOS
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  UGL_FlareYellow_F
	  bipod_01_F_snd
	  TRYK_U_B_PCUHsW3nh
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  TRYK_H_Helmet_Winter
	  optic_DMS
	  optic_KHS_tan
	  optic_LRPS_tna_F
	  U_B_GhillieSuit
	  Exile_Item_PlasticBottleEmpty
	  CUP_30Rnd_762x39_AK47_M
	  APERSMine_Range_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Weapon_Colt1911
	  Exile_Item_ToiletPaper
	  Exile_Weapon_LeeEnfield
	  TRYK_U_B_Snow_CombatUniform
	  V_BandollierB_rgr
	  10Rnd_127x54_Mag
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  APERSBoundingMine_Range_Mag
	  CUP_optic_ACOG
	  H_HelmetLeaderO_oucamo
	  Exile_Item_ToiletPaper
	  CUP_muzzle_snds_MicroUzi
	  TRYK_H_Helmet_Winter_2
	  TRYK_H_Helmet_Winter
	  Exile_Item_Can_Empty
	  U_B_T_Soldier_SL_F
	  Exile_Item_PlasticBottleEmpty
	  CUP_muzzle_snds_M110
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Magazine04
	  Exile_Item_Magazine02
	  hgun_Pistol_heavy_01_F
	  O_NVGoggles_urb_F
	  CUP_hgun_Duty_M3X
	  CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  hgun_ACPC2_F
	  CUP_optic_LeupoldM3LR
	  B_ViperLightHarness_ghex_F
	  CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
	  10Rnd_127x54_Mag
	  Exile_Item_ToiletPaper
	  V_Chestrig_blk
	  Exile_Item_PlasticBottleEmpty
	  CUP_10Rnd_9x39_SP5_VSS_M
	  CUP_srifle_M24_des
	  Exile_Item_Magazine02
	  B_FieldPack_blk
	  CUP_arifle_CZ805_A1
	  U_IG_Guerilla2_3
	  U_IG_Guerilla2_3
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  muzzle_snds_338_green
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  optic_AMS_snd
	  Exile_Item_ToiletPaper
	  optic_AMS
	  APERSTripMine_Wire_Mag
	*/
	class Military
	{
		count = 712;
		half = 9026.4488896607;
		halfIndex = 356;
		sum = 9999.99999999998;
		items[] = 
		{
			{1033.05785123967, "Exile_Item_PlasticBottleEmpty"}, // 10.33%
			{2066.11570247934, "Exile_Item_ToiletPaper"}, // 10.33%
			{3099.17355371901, "Exile_Item_Can_Empty"}, // 10.33%
			{3357.43801652893, "Exile_Item_Magazine01"}, // 2.58%
			{3615.70247933884, "Exile_Item_Magazine04"}, // 2.58%
			{3873.96694214876, "Exile_Item_Magazine03"}, // 2.58%
			{4132.23140495868, "Exile_Item_Magazine02"}, // 2.58%
			{4256.19834710744, "20Rnd_762x51_Mag"}, // 1.24%
			{4363.99568810636, "ItemCompass"}, // 1.08%
			{4446.64031620553, "Exile_Item_ZipTie"}, // 0.83%
			{4529.28494430471, "10Rnd_127x54_Mag"}, // 0.83%
			{4593.17559910445, "1Rnd_HE_Grenade_shell"}, // 0.64%
			{4655.15907017883, "MiniGrenade"}, // 0.62%
			{4717.14254125321, "HandGrenade"}, // 0.62%
			{4771.04121175267, "Rangefinder"}, // 0.54%
			{4812.82782146574, "muzzle_snds_acp"}, // 0.42%
			{4854.6144311788, "muzzle_snds_L"}, // 0.42%
			{4891.34537700066, "ItemWatch"}, // 0.37%
			{4923.13177242342, "TRYK_U_B_PCUHsW2"}, // 0.32%
			{4954.91816784618, "TRYK_U_B_PCUHsW"}, // 0.32%
			{4986.70456326894, "TRYK_U_B_Snowt"}, // 0.32%
			{5018.49095869169, "TRYK_U_B_Snow_CombatUniform"}, // 0.32%
			{5050.27735411445, "TRYK_H_Helmet_Winter_2"}, // 0.32%
			{5082.06374953721, "TRYK_H_Helmet_Winter"}, // 0.32%
			{5113.85014495997, "TRYK_V_ArmorVest_Winter"}, // 0.32%
			{5145.63654038273, "TRYK_U_B_PCUHsW3nh"}, // 0.32%
			{5177.42293580549, "TRYK_U_B_PCUHsW4"}, // 0.32%
			{5209.20933122825, "TRYK_Winter_pack"}, // 0.32%
			{5240.995726651, "TRYK_B_Coyotebackpack_WH"}, // 0.32%
			{5272.78212207376, "TRYK_U_B_PCUHsW5"}, // 0.32%
			{5304.56851749652, "TRYK_U_B_PCUHsW6"}, // 0.32%
			{5336.03704896505, "3Rnd_HE_Grenade_shell"}, // 0.31%
			{5365.5529875719, "optic_KHS_blk"}, // 0.30%
			{5395.06892617875, "optic_AMS"}, // 0.30%
			{5424.5848647856, "optic_AMS_snd"}, // 0.30%
			{5454.10080339245, "optic_KHS_tan"}, // 0.30%
			{5483.61674199929, "optic_AMS_khk"}, // 0.30%
			{5513.13268060614, "optic_KHS_old"}, // 0.30%
			{5542.64861921299, "optic_KHS_hex"}, // 0.30%
			{5572.03337587047, "Exile_Item_Heatpack"}, // 0.29%
			{5600.64113175096, "CUP_6Rnd_HE_M203"}, // 0.29%
			{5629.13927937136, "Exile_Item_Heatpack"}, // 0.28%
			{5657.63742699177, "Exile_Item_Vishpirin"}, // 0.28%
			{5686.09922493408, "optic_DMS"}, // 0.28%
			{5713.50688221187, "optic_LRPS"}, // 0.27%
			{5740.91453948966, "optic_SOS"}, // 0.27%
			{5768.32219676744, "optic_LRPS_ghex_F"}, // 0.27%
			{5795.72985404523, "optic_SOS_khk_F"}, // 0.27%
			{5823.13751132302, "optic_LRPS_tna_F"}, // 0.27%
			{5848.96395760401, "CUP_optic_ACOG"}, // 0.26%
			{5874.67561967931, "ItemMap"}, // 0.26%
			{5900.10473601752, "U_IG_Guerilla1_1"}, // 0.25%
			{5925.53385235572, "U_IG_Guerilla2_2"}, // 0.25%
			{5950.96296869393, "U_IG_Guerilla2_1"}, // 0.25%
			{5976.39208503214, "U_IG_Guerilla2_3"}, // 0.25%
			{6001.18547346189, "DemoCharge_Remote_Mag"}, // 0.25%
			{6025.02527002896, "U_IG_Guerilla3_1"}, // 0.24%
			{6048.86506659603, "U_IG_Guerilla3_2"}, // 0.24%
			{6072.07984976995, "CUP_acc_CZ_M3X"}, // 0.23%
			{6095.29463294388, "CUP_acc_Glock17_Flashlight"}, // 0.23%
			{6118.5094161178, "CUP_muzzle_snds_MicroUzi"}, // 0.23%
			{6140.54798361092, "ItemRadio"}, // 0.22%
			{6162.58655110403, "ItemCompass"}, // 0.22%
			{6184.62511859714, "Binocular"}, // 0.22%
			{6205.69949876243, "UGL_FlareWhite_F"}, // 0.21%
			{6226.77387892772, "UGL_FlareGreen_F"}, // 0.21%
			{6247.84825909301, "UGL_FlareRed_F"}, // 0.21%
			{6268.9226392583, "UGL_FlareYellow_F"}, // 0.21%
			{6289.81594411483, "CUP_muzzle_snds_M9"}, // 0.21%
			{6310.54484263807, "150Rnd_93x64_Mag"}, // 0.21%
			{6330.57351526414, "muzzle_snds_B"}, // 0.20%
			{6349.1822394719, "bipod_01_F_khk"}, // 0.19%
			{6367.79096367966, "bipod_01_F_blk"}, // 0.19%
			{6386.39968788742, "bipod_03_F_oli"}, // 0.19%
			{6405.00841209519, "bipod_03_F_blk"}, // 0.19%
			{6423.61713630295, "bipod_02_F_blk"}, // 0.19%
			{6442.22586051071, "bipod_02_F_tan"}, // 0.19%
			{6460.83458471847, "bipod_01_F_snd"}, // 0.19%
			{6478.98873942645, "hgun_P07_F"}, // 0.18%
			{6496.69830259055, "SmokeShellOrange"}, // 0.18%
			{6514.40786575466, "SmokeShellBlue"}, // 0.18%
			{6532.11742891877, "SmokeShellPurple"}, // 0.18%
			{6549.82699208288, "SmokeShellYellow"}, // 0.18%
			{6567.53655524699, "SmokeShellGreen"}, // 0.18%
			{6585.2461184111, "SmokeShellRed"}, // 0.18%
			{6602.95568157521, "SmokeShell"}, // 0.18%
			{6620.46977494722, "bipod_02_F_hex"}, // 0.18%
			{6637.98386831923, "bipod_01_F_mtp"}, // 0.18%
			{6655.27353946968, "hgun_ACPC2_F"}, // 0.17%
			{6672.56321062014, "hgun_Rook40_F"}, // 0.17%
			{6689.81078517996, "NVGoggles"}, // 0.17%
			{6707.05835973979, "O_NVGoggles_hex_F"}, // 0.17%
			{6724.30593429962, "O_NVGoggles_urb_F"}, // 0.17%
			{6741.55350885945, "NVGoggles_tna_F"}, // 0.17%
			{6758.80108341927, "O_NVGoggles_ghex_F"}, // 0.17%
			{6776.01871427327, "optic_KHS_blk"}, // 0.17%
			{6793.23634512726, "muzzle_snds_B"}, // 0.17%
			{6810.45397598126, "CUP_optic_LeupoldM3LR"}, // 0.17%
			{6827.67160683525, "CUP_optic_SB_11_4x20_PM"}, // 0.17%
			{6844.88923768925, "CUP_muzzle_snds_M14"}, // 0.17%
			{6862.10686854324, "optic_KHS_hex"}, // 0.17%
			{6879.32449939724, "optic_AMS"}, // 0.17%
			{6896.54213025123, "optic_LRPS"}, // 0.17%
			{6913.75976110523, "optic_DMS"}, // 0.17%
			{6930.97739195922, "optic_SOS"}, // 0.17%
			{6947.77508059727, "10Rnd_9x21_Mag"}, // 0.17%
			{6964.57276923531, "Exile_Magazine_8Rnd_9x18"}, // 0.17%
			{6981.37045787335, "Exile_Magazine_7Rnd_45ACP"}, // 0.17%
			{6998.1681465114, "30Rnd_9x21_Mag"}, // 0.17%
			{7014.96583514944, "Exile_Magazine_6Rnd_45ACP"}, // 0.17%
			{7031.76352378748, "11Rnd_45ACP_Mag"}, // 0.17%
			{7048.56121242553, "9Rnd_45ACP_Mag"}, // 0.17%
			{7065.09013804536, "SatchelCharge_Remote_Mag"}, // 0.17%
			{7081.34048626711, "optic_Yorris"}, // 0.16%
			{7097.59083448886, "optic_MRD"}, // 0.16%
			{7113.48403220024, "CUP_arifle_FNFAL"}, // 0.16%
			{7129.29189730646, "B_Carryall_ghex_F"}, // 0.16%
			{7145.09976241267, "B_Carryall_cbr"}, // 0.16%
			{7160.66046644808, "CUP_hgun_Phantom"}, // 0.16%
			{7175.77838622232, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.15%
			{7190.89630599656, "CUP_18Rnd_9x19_Phantom"}, // 0.15%
			{7206.0142257708, "CUP_30Rnd_9x19_UZI"}, // 0.15%
			{7220.99009797669, "B_Carryall_oli"}, // 0.15%
			{7235.96597018258, "B_Carryall_khk"}, // 0.15%
			{7250.21504399279, "Exile_Item_Bandage"}, // 0.14%
			{7263.98914867598, "V_RebreatherIA"}, // 0.14%
			{7277.76325335918, "V_RebreatherIR"}, // 0.14%
			{7291.53735804237, "V_RebreatherB"}, // 0.14%
			{7305.31146272557, "U_I_GhillieSuit"}, // 0.14%
			{7319.08556740876, "U_O_GhillieSuit"}, // 0.14%
			{7332.85967209196, "U_B_GhillieSuit"}, // 0.14%
			{7346.29782300239, "6Rnd_45ACP_Cylinder"}, // 0.13%
			{7358.94751097676, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.13%
			{7371.59719895112, "1Rnd_SmokePurple_Grenade_shell"}, // 0.13%
			{7384.24688692548, "1Rnd_Smoke_Grenade_shell"}, // 0.13%
			{7396.89657489985, "1Rnd_SmokeRed_Grenade_shell"}, // 0.13%
			{7409.54626287421, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.13%
			{7422.19595084857, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.13%
			{7434.84563882294, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.13%
			{7447.32553232785, "B_Carryall_mcamo"}, // 0.12%
			{7459.80542583275, "B_Carryall_oucamo"}, // 0.12%
			{7472.28531933766, "B_Carryall_ocamo"}, // 0.12%
			{7484.06924919971, "Exile_Weapon_RPK"}, // 0.12%
			{7495.46850824787, "Exile_Item_InstaDoc"}, // 0.11%
			{7506.70679449567, "Exile_Weapon_TaurusGold"}, // 0.11%
			{7517.94508074346, "Exile_Weapon_Taurus"}, // 0.11%
			{7529.18336699126, "Exile_Weapon_Makarov"}, // 0.11%
			{7540.42165323905, "Exile_Weapon_Colt1911"}, // 0.11%
			{7551.65993948685, "hgun_Pistol_Signal_F"}, // 0.11%
			{7562.89822573465, "hgun_Pistol_heavy_02_F"}, // 0.11%
			{7574.13651198244, "hgun_Pistol_heavy_01_F"}, // 0.11%
			{7585.37479823024, "hgun_P07_khk_F"}, // 0.11%
			{7596.61308447803, "hgun_Pistol_01_F"}, // 0.11%
			{7607.85137072583, "CUP_hgun_SA61"}, // 0.11%
			{7618.44683586675, "CUP_arifle_Mk17_STD_EGLM"}, // 0.11%
			{7629.04230100766, "CUP_arifle_FNFAL_railed"}, // 0.11%
			{7639.63776614858, "CUP_srifle_M14"}, // 0.11%
			{7650.17917279389, "muzzle_snds_B_snd_F"}, // 0.11%
			{7660.72057943919, "muzzle_snds_B_khk_F"}, // 0.11%
			{7671.09438212946, "CUP_hgun_Duty_M3X"}, // 0.10%
			{7681.17299531229, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.10%
			{7691.09035068419, "3Rnd_UGL_FlareGreen_F"}, // 0.10%
			{7701.00770605609, "3Rnd_UGL_FlareRed_F"}, // 0.10%
			{7710.92506142799, "3Rnd_UGL_FlareWhite_F"}, // 0.10%
			{7720.84241679989, "3Rnd_UGL_FlareYellow_F"}, // 0.10%
			{7730.36525460556, "B_FieldPack_blk"}, // 0.10%
			{7739.88809241123, "B_FieldPack_ocamo"}, // 0.10%
			{7749.41093021689, "B_FieldPack_cbr"}, // 0.10%
			{7758.93376802256, "B_FieldPack_oucamo"}, // 0.10%
			{7768.3609119122, "arifle_MX_SW_Black_F"}, // 0.09%
			{7777.03859786261, "V_HarnessOGL_brn"}, // 0.09%
			{7785.71628381303, "V_BandollierB_blk"}, // 0.09%
			{7794.39396976344, "V_BandollierB_rgr"}, // 0.09%
			{7803.07165571385, "V_BandollierB_cbr"}, // 0.09%
			{7811.74934166427, "V_BandollierB_khk"}, // 0.09%
			{7820.42702761468, "V_HarnessO_gry"}, // 0.09%
			{7829.10471356509, "V_HarnessOSpec_brn"}, // 0.09%
			{7837.78239951551, "V_HarnessOSpec_gry"}, // 0.09%
			{7846.46008546592, "V_HarnessO_brn"}, // 0.09%
			{7855.13777141633, "V_BandollierB_oli"}, // 0.09%
			{7863.81545736675, "V_HarnessOGL_gry"}, // 0.09%
			{7872.46029294197, "CUP_hgun_PB6P9_snds"}, // 0.09%
			{7881.06910836897, "CUP_muzzle_snds_M110"}, // 0.09%
			{7889.55353786965, "CUP_arifle_RPK74"}, // 0.08%
			{7898.02990998238, "CUP_arifle_Mk17_STD_FG"}, // 0.08%
			{7906.50628209512, "CUP_arifle_Mk20"}, // 0.08%
			{7914.90512641414, "16Rnd_9x21_Mag"}, // 0.08%
			{7923.16958922406, "V_PlateCarrierSpec_rgr"}, // 0.08%
			{7931.43405203397, "V_PlateCarrier2_rgr"}, // 0.08%
			{7939.69851484389, "APERSTripMine_Wire_Mag"}, // 0.08%
			{7947.96297765381, "V_PlateCarrier3_rgr"}, // 0.08%
			{7956.22744046372, "APERSBoundingMine_Range_Mag"}, // 0.08%
			{7964.49190327364, "APERSMine_Range_Mag"}, // 0.08%
			{7972.75636608356, "IEDLandSmall_Remote_Mag"}, // 0.08%
			{7981.02082889348, "V_PlateCarrierGL_rgr"}, // 0.08%
			{7989.28529170339, "V_PlateCarrierIAGL_dgtl"}, // 0.08%
			{7997.54975451331, "V_PlateCarrierIA2_dgtl"}, // 0.08%
			{8005.81421732323, "V_PlateCarrier1_blk"}, // 0.08%
			{8014.07868013314, "IEDUrbanSmall_Remote_Mag"}, // 0.08%
			{8022.34314294306, "V_PlateCarrierIA1_dgtl"}, // 0.08%
			{8030.60760575298, "V_PlateCarrier1_rgr"}, // 0.08%
			{8038.7100202725, "CUP_20Rnd_762x51_B_SCAR"}, // 0.08%
			{8046.81243479203, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.08%
			{8054.91484931156, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.08%
			{8063.01726383109, "CUP_20Rnd_762x51_DMR"}, // 0.08%
			{8071.11967835061, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.08%
			{8079.22209287014, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.08%
			{8087.32450738967, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.08%
			{8095.27110624536, "U_I_C_Soldier_Para_5_F"}, // 0.08%
			{8103.21770510104, "U_I_C_Soldier_Para_4_F"}, // 0.08%
			{8111.16430395673, "U_I_C_Soldier_Para_3_F"}, // 0.08%
			{8119.11090281242, "U_I_C_Soldier_Para_2_F"}, // 0.08%
			{8127.05750166811, "U_I_C_Soldier_Para_1_F"}, // 0.08%
			{8135.0041005238, "U_I_C_Soldier_Camo_F"}, // 0.08%
			{8142.54581563551, "CUP_lmg_m249_para"}, // 0.08%
			{8150.08753074723, "CUP_lmg_minimi_railed"}, // 0.08%
			{8157.56976045168, "B_ViperLightHarness_oli_F"}, // 0.07%
			{8165.05199015613, "B_Bergen_sgg"}, // 0.07%
			{8172.53421986058, "B_ViperLightHarness_khk_F"}, // 0.07%
			{8180.01644956503, "B_Bergen_rgr"}, // 0.07%
			{8187.49867926949, "B_ViperLightHarness_hex_F"}, // 0.07%
			{8194.98090897394, "B_ViperLightHarness_ghex_F"}, // 0.07%
			{8202.46313867839, "B_ViperLightHarness_blk_F"}, // 0.07%
			{8209.94536838284, "B_ViperLightHarness_base_F"}, // 0.07%
			{8217.42759808729, "B_Bergen_mcamo"}, // 0.07%
			{8224.90982779175, "B_ViperHarness_khk_F"}, // 0.07%
			{8232.3920574962, "B_ViperHarness_hex_F"}, // 0.07%
			{8239.87428720065, "B_ViperHarness_oli_F"}, // 0.07%
			{8247.3565169051, "B_ViperHarness_blk_F"}, // 0.07%
			{8254.83874660955, "B_ViperHarness_base_F"}, // 0.07%
			{8262.32097631401, "B_FieldPack_ghex_F"}, // 0.07%
			{8269.80320601846, "B_Bergen_blk"}, // 0.07%
			{8277.28543572291, "B_ViperHarness_ghex_F"}, // 0.07%
			{8284.70226132155, "CUP_srifle_M110"}, // 0.07%
			{8291.77261923878, "CUP_lmg_Pecheneg"}, // 0.07%
			{8298.84297715601, "arifle_MX_SW_F"}, // 0.07%
			{8305.91333507324, "LMG_Mk200_F"}, // 0.07%
			{8312.82920353343, "CUP_hgun_MicroUzi"}, // 0.07%
			{8319.71625587502, "muzzle_snds_338_green"}, // 0.07%
			{8326.60330821662, "muzzle_snds_B"}, // 0.07%
			{8333.49036055822, "muzzle_snds_93mmg_tan"}, // 0.07%
			{8340.37741289981, "muzzle_snds_93mmg"}, // 0.07%
			{8347.26446524141, "muzzle_snds_338_black"}, // 0.07%
			{8354.15151758301, "muzzle_snds_338_sand"}, // 0.07%
			{8360.94795081485, "U_B_CTRG_Soldier_3_F"}, // 0.07%
			{8367.74438404669, "U_B_CombatUniform_mcam"}, // 0.07%
			{8374.54081727853, "U_B_CombatUniform_mcam_tshirt"}, // 0.07%
			{8381.33725051037, "U_B_CombatUniform_mcam_worn"}, // 0.07%
			{8388.13368374221, "U_B_CombatUniform_mcam_vest"}, // 0.07%
			{8394.93011697405, "U_B_GEN_Commander_F"}, // 0.07%
			{8401.72655020589, "U_B_GEN_Soldier_F"}, // 0.07%
			{8408.52298343773, "U_B_CTRG_Soldier_urb_3_F"}, // 0.07%
			{8415.31941666957, "U_B_CTRG_Soldier_urb_2_F"}, // 0.07%
			{8422.11584990141, "U_B_CTRG_3"}, // 0.07%
			{8428.91228313326, "U_B_CTRG_Soldier_urb_1_F"}, // 0.07%
			{8435.7087163651, "U_O_T_Officer_F"}, // 0.07%
			{8442.50514959694, "U_O_T_Soldier_F"}, // 0.07%
			{8449.30158282878, "U_B_CTRG_Soldier_F"}, // 0.07%
			{8456.09801606062, "U_B_T_Soldier_SL_F"}, // 0.07%
			{8462.89444929246, "U_B_CTRG_2"}, // 0.07%
			{8469.6908825243, "U_B_CTRG_1"}, // 0.07%
			{8476.48731575614, "U_B_T_Soldier_AR_F"}, // 0.07%
			{8483.28374898798, "U_B_CTRG_Soldier_2_F"}, // 0.07%
			{8490.05789883217, "H_Booniehat_dirty"}, // 0.07%
			{8496.83204867637, "H_Booniehat_tan"}, // 0.07%
			{8503.60619852056, "H_Booniehat_khk_hs"}, // 0.07%
			{8510.38034836476, "H_Booniehat_grn"}, // 0.07%
			{8517.15449820895, "H_Booniehat_mcamo"}, // 0.07%
			{8523.92864805314, "H_Booniehat_indp"}, // 0.07%
			{8530.70279789734, "H_Booniehat_dgtl"}, // 0.07%
			{8537.47694774153, "Exile_Headgear_GasMask"}, // 0.07%
			{8544.25109758572, "H_Booniehat_khk"}, // 0.07%
			{8550.97017304094, "H_MilCap_dgtl"}, // 0.07%
			{8557.68924849616, "H_MilCap_rucamo"}, // 0.07%
			{8564.40832395138, "H_MilCap_blue"}, // 0.07%
			{8571.12739940659, "H_MilCap_oucamo"}, // 0.07%
			{8577.84647486181, "H_MilCap_mcamo"}, // 0.07%
			{8584.56555031703, "Exile_Headgear_GasMask"}, // 0.07%
			{8591.28462577225, "H_MilCap_ocamo"}, // 0.07%
			{8597.883626495, "CUP_lmg_L110A1"}, // 0.07%
			{8604.48262721774, "CUP_lmg_PKM"}, // 0.07%
			{8610.98276650644, "20Rnd_650x39_Cased_Mag_F"}, // 0.07%
			{8617.46469812206, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.06%
			{8623.94662973768, "CUP_20Rnd_762x51_L129_M"}, // 0.06%
			{8630.4285613533, "CUP_20Rnd_762x51_B_M110"}, // 0.06%
			{8636.91049296893, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.06%
			{8643.26777205348, "U_IG_leader"}, // 0.06%
			{8649.46611916092, "V_Chestrig_oli"}, // 0.06%
			{8655.66446626835, "V_Chestrig_blk"}, // 0.06%
			{8661.86281337579, "V_Chestrig_rgr"}, // 0.06%
			{8668.06116048323, "V_Chestrig_khk"}, // 0.06%
			{8674.25176932961, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8680.44237817599, "CUP_5Rnd_762x51_M24"}, // 0.06%
			{8686.63298702237, "CUP_10Rnd_762x54_SVD_M"}, // 0.06%
			{8692.82359586875, "CUP_srifle_SVD_des"}, // 0.06%
			{8698.95123939702, "Exile_Weapon_PKP"}, // 0.06%
			{8705.07888292528, "Exile_Weapon_PK"}, // 0.06%
			{8711.20652645355, "CUP_lmg_Mk48_des"}, // 0.06%
			{8717.33416998181, "CUP_lmg_M60E4"}, // 0.06%
			{8723.46181351008, "CUP_lmg_M240"}, // 0.06%
			{8729.55854836985, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.06%
			{8735.65528322963, "CUP_30Rnd_545x39_AK_M"}, // 0.06%
			{8741.65023034563, "srifle_DMR_01_F"}, // 0.06%
			{8747.64517746163, "srifle_EBR_F"}, // 0.06%
			{8753.52625586569, "20Rnd_762x51_Mag"}, // 0.06%
			{8759.40544688901, "6Rnd_GreenSignal_F"}, // 0.06%
			{8765.28463791232, "6Rnd_RedSignal_F"}, // 0.06%
			{8770.97492378145, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.06%
			{8776.66520965057, "CUP_30Rnd_762x39_AK47_M"}, // 0.06%
			{8782.35549551969, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.06%
			{8787.92704348144, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8793.49378008915, "CUP_srifle_SVD"}, // 0.06%
			{8798.93092667462, "U_I_CombatUniform"}, // 0.05%
			{8804.36807326009, "U_I_CombatUniform_tshirt"}, // 0.05%
			{8809.80521984556, "U_B_HeliPilotCoveralls"}, // 0.05%
			{8815.24236643104, "U_B_PilotCoveralls"}, // 0.05%
			{8820.67951301651, "U_I_pilotCoveralls"}, // 0.05%
			{8826.11665960198, "U_I_CombatUniform_shortsleeve"}, // 0.05%
			{8831.55380618745, "U_O_PilotCoveralls"}, // 0.05%
			{8836.99095277292, "U_I_HeliPilotCoveralls"}, // 0.05%
			{8842.3875236376, "acc_flashlight"}, // 0.05%
			{8847.74015499118, "CUP_srifle_M40A3"}, // 0.05%
			{8853.09278634475, "CUP_srifle_M24_wdl"}, // 0.05%
			{8858.44541769832, "CUP_srifle_M24_des"}, // 0.05%
			{8863.74315026878, "CUP_srifle_L129A1_HG"}, // 0.05%
			{8869.04088283924, "CUP_srifle_L129A1"}, // 0.05%
			{8874.32471971772, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.05%
			{8879.58673723714, "10Rnd_762x54_Mag"}, // 0.05%
			{8884.66734962028, "H_Cap_khaki_specops_UK"}, // 0.05%
			{8889.74796200343, "H_Watchcap_khk"}, // 0.05%
			{8894.82857438658, "H_Watchcap_blk"}, // 0.05%
			{8899.90918676972, "H_Cap_tan_specops_US"}, // 0.05%
			{8904.98979915287, "H_Bandanna_gry"}, // 0.05%
			{8910.07041153601, "H_Hat_camo"}, // 0.05%
			{8915.15102391916, "H_BandMask_blk"}, // 0.05%
			{8920.23163630231, "H_Bandanna_mcamo"}, // 0.05%
			{8925.31224868545, "H_Bandanna_camo"}, // 0.05%
			{8930.3928610686, "H_Bandanna_sgg"}, // 0.05%
			{8935.47347345175, "H_Bandanna_cbr"}, // 0.05%
			{8940.55408583489, "H_Bandanna_khk"}, // 0.05%
			{8945.63469821804, "H_Cap_brn_SPECOPS"}, // 0.05%
			{8950.71531060118, "H_Bandanna_khk_hs"}, // 0.05%
			{8955.77518579093, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.05%
			{8960.83506098067, "3Rnd_SmokeRed_Grenade_shell"}, // 0.05%
			{8965.89493617042, "3Rnd_Smoke_Grenade_shell"}, // 0.05%
			{8970.95481136017, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.05%
			{8976.01468654991, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.05%
			{8981.07456173966, "3Rnd_SmokePurple_Grenade_shell"}, // 0.05%
			{8986.1344369294, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.05%
			{8991.17374352081, "H_HelmetIA"}, // 0.05%
			{8996.21305011222, "H_HelmetSpecB_blk"}, // 0.05%
			{9001.25235670364, "H_HelmetSpecB_paint2"}, // 0.05%
			{9006.29166329505, "H_HelmetSpecB_paint1"}, // 0.05%
			{9011.33096988646, "H_HelmetB"}, // 0.05%
			{9016.37027647787, "H_HelmetSpecB"}, // 0.05%
			{9021.40958306929, "H_HelmetB_paint"}, // 0.05%
			{9026.4488896607, "H_HelmetB_light"}, // 0.05%
			{9031.48819625211, "H_HelmetB_plain_blk"}, // 0.05%
			{9036.48015365407, "B_Bergen_mcamo_F"}, // 0.05%
			{9041.47211105604, "B_Bergen_hex_F"}, // 0.05%
			{9046.464068458, "B_Bergen_tna_F"}, // 0.05%
			{9051.45602585997, "B_Bergen_Base_F"}, // 0.05%
			{9056.44798326193, "B_Bergen_dgtl_F"}, // 0.05%
			{9061.40047033903, "CUP_5Rnd_762x67_G22"}, // 0.05%
			{9066.27785822685, "100Rnd_65x39_caseless_mag"}, // 0.05%
			{9071.15524611467, "150Rnd_762x54_Box"}, // 0.05%
			{9075.86881805949, "LMG_Zafir_F"}, // 0.05%
			{9080.58239000431, "LMG_03_F"}, // 0.05%
			{9085.29596194913, "CUP_lmg_L7A2"}, // 0.05%
			{9089.93891858392, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.05%
			{9094.5818752187, "CUP_10Rnd_762x51_CZ750"}, // 0.05%
			{9098.90012347147, "CUP_srifle_Mk12SPR"}, // 0.04%
			{9103.18222855433, "srifle_DMR_06_camo_F"}, // 0.04%
			{9107.46433363719, "CUP_srifle_VSSVintorez"}, // 0.04%
			{9111.74643872005, "srifle_DMR_03_woodland_F"}, // 0.04%
			{9116.02854380291, "srifle_DMR_03_F"}, // 0.04%
			{9120.31064888577, "srifle_DMR_03_khaki_F"}, // 0.04%
			{9124.59275396863, "srifle_DMR_03_tan_F"}, // 0.04%
			{9128.87485905149, "srifle_DMR_06_olive_F"}, // 0.04%
			{9133.00709045645, "V_PlateCarrierH_CTRG"}, // 0.04%
			{9137.1393218614, "V_PlateCarrierL_CTRG"}, // 0.04%
			{9141.21718180051, "U_B_SpecopsUniform_sgg"}, // 0.04%
			{9145.28167170703, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.04%
			{9149.34616161354, "150Rnd_762x54_Box_Tracer"}, // 0.04%
			{9153.41065152006, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.04%
			{9157.47514142658, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.04%
			{9161.53963133309, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.04%
			{9165.60412123961, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.04%
			{9169.66861114613, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.04%
			{9173.73310105265, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.04%
			{9177.79759095916, "200Rnd_556x45_Box_Tracer_F"}, // 0.04%
			{9181.86208086568, "200Rnd_556x45_Box_Red_F"}, // 0.04%
			{9185.9265707722, "200Rnd_556x45_Box_F"}, // 0.04%
			{9189.99106067872, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.04%
			{9194.05555058523, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.04%
			{9198.07944633538, "CUP_5Rnd_86x70_L115A1"}, // 0.04%
			{9202.06552164563, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9206.05159695588, "CUP_arifle_AK74"}, // 0.04%
			{9209.90629043066, "optic_ERCO_blk_F"}, // 0.04%
			{9213.76098390543, "optic_Holosight_khk_F"}, // 0.04%
			{9217.61567738021, "optic_DMS_ghex_F"}, // 0.04%
			{9221.47037085498, "optic_DMS"}, // 0.04%
			{9225.32506432976, "optic_MRCO"}, // 0.04%
			{9229.17975780453, "CUP_optic_ACOG"}, // 0.04%
			{9233.03445127931, "CUP_optic_SUSAT"}, // 0.04%
			{9236.88914475408, "acc_pointer_IR"}, // 0.04%
			{9240.74383822886, "muzzle_snds_M"}, // 0.04%
			{9244.59853170364, "CUP_optic_CompM4"}, // 0.04%
			{9248.45322517841, "optic_ERCO_khk_F"}, // 0.04%
			{9252.30791865319, "optic_ERCO_snd_F"}, // 0.04%
			{9256.16261212796, "optic_Hamr"}, // 0.04%
			{9260.01730560274, "muzzle_snds_H_khk_F"}, // 0.04%
			{9263.87199907751, "muzzle_snds_58_blk_F"}, // 0.04%
			{9267.72669255229, "muzzle_snds_m_khk_F"}, // 0.04%
			{9271.58138602706, "muzzle_snds_m_snd_F"}, // 0.04%
			{9275.43607950184, "muzzle_snds_58_wdm_F"}, // 0.04%
			{9279.29077297662, "muzzle_snds_65_TI_blk_F"}, // 0.04%
			{9283.14546645139, "muzzle_snds_65_TI_hex_F"}, // 0.04%
			{9287.00015992617, "muzzle_snds_65_TI_ghex_F"}, // 0.04%
			{9290.85485340094, "muzzle_snds_H"}, // 0.04%
			{9294.70954687572, "muzzle_snds_H_MG_blk_F"}, // 0.04%
			{9298.56424035049, "CUP_optic_RCO"}, // 0.04%
			{9302.41893382527, "optic_Arco_blk_F"}, // 0.04%
			{9306.27362730004, "optic_Arco_ghex_F"}, // 0.04%
			{9310.12832077482, "muzzle_snds_H_snd_F"}, // 0.04%
			{9313.9830142496, "optic_Hamr_khk_F"}, // 0.04%
			{9317.83770772437, "optic_Holosight"}, // 0.04%
			{9321.69240119915, "optic_Holosight_blk_F"}, // 0.04%
			{9325.54709467392, "muzzle_snds_H_MG_khk_F"}, // 0.04%
			{9329.4017881487, "optic_Arco"}, // 0.04%
			{9333.25648162347, "CUP_muzzle_PB6P9"}, // 0.04%
			{9337.11117509825, "CUP_muzzle_PBS4"}, // 0.04%
			{9340.96586857302, "CUP_optic_CompM2_Desert"}, // 0.04%
			{9344.8205620478, "CUP_optic_CompM2_Black"}, // 0.04%
			{9348.67525552258, "CUP_optic_PSO_1"}, // 0.04%
			{9352.52994899735, "CUP_optic_PSO_3"}, // 0.04%
			{9356.38464247213, "CUP_optic_Kobra"}, // 0.04%
			{9360.2393359469, "CUP_muzzle_Bizon"}, // 0.04%
			{9364.09402942168, "CUP_muzzle_snds_XM8"}, // 0.04%
			{9367.94872289645, "CUP_optic_TrijiconRx01_desert"}, // 0.04%
			{9371.80341637123, "CUP_optic_HoloBlack"}, // 0.04%
			{9375.658109846, "CUP_optic_HoloDesert"}, // 0.04%
			{9379.51280332078, "CUP_optic_SB_11_4x20_PM"}, // 0.04%
			{9383.36749679556, "CUP_optic_AN_PVS_4"}, // 0.04%
			{9387.22219027033, "CUP_optic_PechenegScope"}, // 0.04%
			{9390.94119853479, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9394.61429311698, "ItemGPS"}, // 0.04%
			{9398.28738769917, "Exile_Item_MobilePhone"}, // 0.04%
			{9401.9271770196, "srifle_DMR_07_ghex_F"}, // 0.04%
			{9405.56696634003, "srifle_DMR_07_hex_F"}, // 0.04%
			{9409.20675566046, "srifle_DMR_07_blk_F"}, // 0.04%
			{9412.77586148048, "30Rnd_556x45_Stanag"}, // 0.04%
			{9416.3449673005, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9419.91407312052, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9423.48317894055, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9426.87025386264, "H_TurbanO_blk"}, // 0.03%
			{9430.25732878474, "H_Watchcap_sgg"}, // 0.03%
			{9433.64440370684, "H_Shemag_olive"}, // 0.03%
			{9437.03147862893, "H_Watchcap_camo"}, // 0.03%
			{9440.41855355103, "H_ShemagOpen_tan"}, // 0.03%
			{9443.80562847313, "H_Shemag_khk"}, // 0.03%
			{9447.19270339523, "H_Shemag_tan"}, // 0.03%
			{9450.57977831732, "H_Cap_blk_Syndikat_F"}, // 0.03%
			{9453.96685323942, "H_MilCap_ghex_F"}, // 0.03%
			{9457.35392816152, "H_Booniehat_tna_F"}, // 0.03%
			{9460.74100308361, "H_MilCap_gen_F"}, // 0.03%
			{9464.12807800571, "H_Cap_oli_Syndikat_F"}, // 0.03%
			{9467.51515292781, "H_Cap_tan_Syndikat_F"}, // 0.03%
			{9470.9022278499, "H_Cap_grn_Syndikat_F"}, // 0.03%
			{9474.289302772, "H_FakeHeadgear_Syndikat_F"}, // 0.03%
			{9477.6763776941, "H_ShemagOpen_khk"}, // 0.03%
			{9481.06345261619, "H_MilCap_tna_F"}, // 0.03%
			{9484.45052753829, "H_Shemag_olive_hs"}, // 0.03%
			{9487.8100652659, "H_BandMask_reaper"}, // 0.03%
			{9491.16960299351, "H_HelmetCrew_O_ghex_F"}, // 0.03%
			{9494.52914072112, "H_HelmetB_grass"}, // 0.03%
			{9497.88867844873, "H_HelmetB_snakeskin"}, // 0.03%
			{9501.24821617633, "H_HelmetB_desert"}, // 0.03%
			{9504.60775390394, "H_BandMask_demon"}, // 0.03%
			{9507.96729163155, "H_HelmetB_black"}, // 0.03%
			{9511.32682935916, "H_HelmetB_sand"}, // 0.03%
			{9514.68636708677, "H_HelmetB_light_grass"}, // 0.03%
			{9518.04590481438, "H_HelmetB_light_snakeskin"}, // 0.03%
			{9521.40544254199, "H_HelmetB_light_desert"}, // 0.03%
			{9524.7649802696, "H_HelmetB_light_black"}, // 0.03%
			{9528.1245179972, "H_HelmetB_light_sand"}, // 0.03%
			{9531.48405572481, "H_HelmetB_TI_tna_F"}, // 0.03%
			{9534.84359345242, "H_HelmetIA_camo"}, // 0.03%
			{9538.20313118003, "H_HelmetLeaderO_ghex_F"}, // 0.03%
			{9541.56266890764, "H_HelmetIA_net"}, // 0.03%
			{9544.92220663525, "H_HelmetB_tna_F"}, // 0.03%
			{9548.28174436286, "H_Beret_gen_F"}, // 0.03%
			{9551.64128209047, "H_BandMask_khk"}, // 0.03%
			{9555.00081981807, "H_Helmet_Skate"}, // 0.03%
			{9558.36035754568, "H_HelmetB_Enh_tna_F"}, // 0.03%
			{9561.71989527329, "H_HelmetSpecO_ghex_F"}, // 0.03%
			{9565.0794330009, "H_HelmetB_Light_tna_F"}, // 0.03%
			{9568.40116242611, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.03%
			{9571.72289185132, "Exile_Weapon_AK107_GL"}, // 0.03%
			{9575.04462127653, "Exile_Weapon_AK74_GL"}, // 0.03%
			{9578.36635070173, "CUP_arifle_Mk16_STD_EGLM"}, // 0.03%
			{9581.68808012694, "CUP_arifle_CZ805_B"}, // 0.03%
			{9585.00980955215, "Exile_Weapon_AK74"}, // 0.03%
			{9588.33153897736, "CUP_arifle_AK107"}, // 0.03%
			{9591.65326840257, "CUP_arifle_Sa58P"}, // 0.03%
			{9594.97499782777, "Exile_Weapon_CZ550"}, // 0.03%
			{9598.29672725298, "CUP_arifle_CZ805_A1"}, // 0.03%
			{9601.61845667819, "CUP_arifle_AK74M"}, // 0.03%
			{9604.9401861034, "Exile_Weapon_AK47"}, // 0.03%
			{9608.26191552861, "Exile_Weapon_AK107"}, // 0.03%
			{9611.47349434075, "CUP_srifle_CZ750"}, // 0.03%
			{9614.65213388303, "U_I_G_resistanceLeader_F"}, // 0.03%
			{9617.74743830622, "5Rnd_127x108_Mag"}, // 0.03%
			{9620.84274272941, "7Rnd_408_Mag"}, // 0.03%
			{9623.92649750923, "CUP_muzzle_snds_G36_black"}, // 0.03%
			{9627.01025228905, "CUP_muzzle_snds_L85"}, // 0.03%
			{9630.09400706887, "CUP_muzzle_snds_Mk12"}, // 0.03%
			{9633.17776184869, "CUP_optic_Elcan"}, // 0.03%
			{9635.96113015255, "CUP_srifle_G22_des"}, // 0.03%
			{9638.67970344528, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9641.39827673802, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9644.11685003075, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9646.83542332349, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9649.55399661622, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9652.27256990896, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9654.99114320169, "U_I_Wetsuit"}, // 0.03%
			{9657.70971649443, "U_O_Wetsuit"}, // 0.03%
			{9660.42828978717, "U_I_OfficerUniform"}, // 0.03%
			{9663.1468630799, "U_B_Wetsuit"}, // 0.03%
			{9665.86543637264, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9668.5228199128, "CUP_arifle_CZ805_GL"}, // 0.03%
			{9671.18020345297, "CUP_arifle_XM8_Railed"}, // 0.03%
			{9673.83758699314, "CUP_arifle_AK107_GL"}, // 0.03%
			{9676.4949705333, "CUP_arifle_Mk16_CQC_FG"}, // 0.03%
			{9679.15235407347, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.03%
			{9681.80973761364, "arifle_MX_F"}, // 0.03%
			{9684.4671211538, "CUP_arifle_AKM"}, // 0.03%
			{9687.12450469397, "CUP_arifle_Sa58RIS1"}, // 0.03%
			{9689.78188823414, "CUP_arifle_Sa58RIS2_gl"}, // 0.03%
			{9692.4392717743, "arifle_MX_khk_F"}, // 0.03%
			{9695.09665531447, "CUP_arifle_AK107_kobra"}, // 0.03%
			{9697.75403885464, "arifle_MX_GL_khk_F"}, // 0.03%
			{9700.41142239481, "arifle_MXC_khk_F"}, // 0.03%
			{9703.02876666282, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9705.50501020137, "5Rnd_127x108_APDS_Mag"}, // 0.02%
			{9707.83022079902, "arifle_MXC_F"}, // 0.02%
			{9710.15543139667, "CUP_arifle_M4A1_camo"}, // 0.02%
			{9712.48064199431, "CUP_arifle_Mk16_CQC"}, // 0.02%
			{9714.80585259196, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9717.1310631896, "CUP_arifle_Sa58P_des"}, // 0.02%
			{9719.45627378725, "CUP_arifle_M16A2"}, // 0.02%
			{9721.7814843849, "CUP_arifle_AK47"}, // 0.02%
			{9724.10669498254, "arifle_AKS_F"}, // 0.02%
			{9726.43190558019, "CUP_arifle_M4A1"}, // 0.02%
			{9728.5733690722, "CUP_30Rnd_556x45_Stanag"}, // 0.02%
			{9730.71483256422, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.02%
			{9732.85629605623, "30Rnd_762x39_Mag_Tracer_F"}, // 0.02%
			{9734.99775954824, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.02%
			{9737.13922304025, "30Rnd_762x39_AK47_M"}, // 0.02%
			{9739.28068653227, "30Rnd_545x39_Mag_F"}, // 0.02%
			{9741.42215002428, "30Rnd_545x39_Mag_Green_F"}, // 0.02%
			{9743.56361351629, "30Rnd_545x39_Mag_Tracer_F"}, // 0.02%
			{9745.70507700831, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.02%
			{9747.84654050032, "30Rnd_580x42_Mag_F"}, // 0.02%
			{9749.98800399233, "30Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9752.12946748434, "100Rnd_580x42_Mag_F"}, // 0.02%
			{9754.27093097636, "100Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9756.41239446837, "150Rnd_556x45_Drum_Mag_F"}, // 0.02%
			{9758.55385796038, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.02%
			{9760.6953214524, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.02%
			{9762.83678494441, "CUP_30Rnd_545x39_AK_M"}, // 0.02%
			{9764.97824843642, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.02%
			{9767.11971192844, "CUP_30Rnd_556x45_G36"}, // 0.02%
			{9769.26117542045, "30Rnd_762x39_Mag_Green_F"}, // 0.02%
			{9771.40263891246, "20Rnd_762x51_Mag"}, // 0.02%
			{9773.54410240447, "30Rnd_762x39_Mag_F"}, // 0.02%
			{9775.68556589649, "Exile_Magazine_10Rnd_762x54"}, // 0.02%
			{9777.8270293885, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.02%
			{9779.96849288051, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.02%
			{9782.10995637253, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.02%
			{9784.25141986454, "30Rnd_65x39_caseless_mag"}, // 0.02%
			{9786.39288335655, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.02%
			{9788.53434684856, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.02%
			{9790.67581034058, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.02%
			{9792.81727383259, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.02%
			{9794.9587373246, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.02%
			{9797.10020081662, "Exile_Magazine_20Rnd_9x39"}, // 0.02%
			{9799.24166430863, "Exile_Magazine_10Rnd_9x39"}, // 0.02%
			{9801.38312780064, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.02%
			{9803.52459129265, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.02%
			{9805.66605478467, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.02%
			{9807.80751827668, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.02%
			{9809.94898176869, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.02%
			{9812.09044526071, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.02%
			{9814.23190875272, "Exile_Magazine_5Rnd_22LR"}, // 0.02%
			{9816.37337224473, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.02%
			{9818.40561719799, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.02%
			{9820.43786215125, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.02%
			{9822.47010710451, "130Rnd_338_Mag"}, // 0.02%
			{9824.46314475963, "Exile_Weapon_SVD"}, // 0.02%
			{9826.45618241476, "Exile_Weapon_SVDCamo"}, // 0.02%
			{9828.44922006988, "arifle_MXM_F"}, // 0.02%
			{9830.44225772501, "CUP_arifle_M4A3_desert"}, // 0.02%
			{9832.43529538013, "Exile_Weapon_VSSVintorez"}, // 0.02%
			{9834.36264211752, "CUP_acc_ANPEQ_2_grey"}, // 0.02%
			{9836.28998885491, "CUP_acc_ANPEQ_2_desert"}, // 0.02%
			{9838.2173355923, "CUP_acc_ANPEQ_2_camo"}, // 0.02%
			{9840.14468232968, "optic_NVS"}, // 0.02%
			{9842.0482054337, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9843.95172853771, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9845.85525164172, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9847.75877474573, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9849.66229784975, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9851.3558353108, "H_Beret_02"}, // 0.02%
			{9853.04937277185, "H_Beret_grn_SF"}, // 0.02%
			{9854.7429102329, "H_Beret_Colonel"}, // 0.02%
			{9856.43644769394, "H_Beret_ocamo"}, // 0.02%
			{9858.12998515499, "H_Beret_blk"}, // 0.02%
			{9859.82352261604, "H_Beret_grn"}, // 0.02%
			{9861.51706007709, "H_Beret_red"}, // 0.02%
			{9863.21059753814, "H_Beret_brn_SF"}, // 0.02%
			{9864.89036640195, "H_CrewHelmetHeli_I"}, // 0.02%
			{9866.57013526575, "H_HelmetO_oucamo"}, // 0.02%
			{9868.24990412955, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9869.92967299336, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9871.60944185716, "H_PilotHelmetFighter_I"}, // 0.02%
			{9873.28921072096, "H_HelmetO_ocamo"}, // 0.02%
			{9874.96897958477, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9876.64874844857, "H_CrewHelmetHeli_O"}, // 0.02%
			{9878.32851731237, "H_HelmetO_ghex_F"}, // 0.02%
			{9880.00828617618, "H_HelmetSpecO_blk"}, // 0.02%
			{9881.68805503998, "H_CrewHelmetHeli_B"}, // 0.02%
			{9883.36782390378, "H_HelmetCrew_I"}, // 0.02%
			{9885.04759276759, "H_PilotHelmetHeli_I"}, // 0.02%
			{9886.72736163139, "H_PilotHelmetHeli_O"}, // 0.02%
			{9888.40713049519, "H_PilotHelmetHeli_B"}, // 0.02%
			{9890.086899359, "H_PilotHelmetFighter_O"}, // 0.02%
			{9891.7666682228, "H_PilotHelmetFighter_B"}, // 0.02%
			{9893.4464370866, "H_HelmetCrew_O"}, // 0.02%
			{9895.12620595041, "H_HelmetCrew_B"}, // 0.02%
			{9896.80597481421, "H_HelmetB_camo"}, // 0.02%
			{9898.47155753022, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9900.13714024623, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9901.80272296224, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9903.46358767485, "arifle_ARX_blk_F"}, // 0.02%
			{9905.12445238745, "arifle_AKM_FL_F"}, // 0.02%
			{9906.78531710005, "arifle_AKM_F"}, // 0.02%
			{9908.44618181265, "arifle_ARX_hex_F"}, // 0.02%
			{9910.10704652526, "arifle_AK12_F"}, // 0.02%
			{9911.76791123786, "Exile_Weapon_DMR"}, // 0.02%
			{9913.42877595046, "arifle_ARX_ghex_F"}, // 0.02%
			{9915.08964066307, "arifle_AK12_GL_F"}, // 0.02%
			{9916.75050537567, "arifle_CTAR_blk_F"}, // 0.02%
			{9918.41137008827, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.02%
			{9920.07223480088, "arifle_CTAR_ghex_F"}, // 0.02%
			{9921.73309951348, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9923.39396422608, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9925.05482893869, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9926.71569365129, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9928.37655836389, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9930.0374230765, "CUP_arifle_L86A2"}, // 0.02%
			{9931.6982877891, "CUP_arifle_L85A2_NG"}, // 0.02%
			{9933.3591525017, "arifle_CTAR_hex_F"}, // 0.02%
			{9935.02001721431, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9936.68088192691, "CUP_arifle_G36C"}, // 0.02%
			{9938.34174663951, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.02%
			{9940.00261135211, "CUP_arifle_AK74_GL"}, // 0.02%
			{9941.66347606472, "CUP_arifle_AKS74U"}, // 0.02%
			{9943.32434077732, "CUP_arifle_AK107_GL_pso"}, // 0.02%
			{9944.98520548992, "CUP_arifle_Mk16_SV"}, // 0.02%
			{9946.64607020253, "CUP_arifle_AKS_Gold"}, // 0.02%
			{9948.30693491513, "CUP_arifle_G36A"}, // 0.02%
			{9949.96779962773, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9951.62866434034, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9953.28952905294, "arifle_CTARS_ghex_F"}, // 0.02%
			{9954.95039376554, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9956.61125847815, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9958.27212319075, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9959.93298790335, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9961.59385261596, "arifle_CTARS_blk_F"}, // 0.02%
			{9963.25471732856, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9964.91558204116, "arifle_CTARS_hex_F"}, // 0.02%
			{9966.57644675376, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9968.12409896536, "CUP_10Rnd_127x99_M107"}, // 0.02%
			{9969.67175117695, "CUP_5Rnd_127x99_as50_M"}, // 0.02%
			{9971.21940338855, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.02%
			{9972.76705560014, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.02%
			{9974.19469792815, "CUP_100Rnd_556x45_BetaCMag"}, // 0.01%
			{9975.52338969824, "arifle_Mk20_GL_F"}, // 0.01%
			{9976.85208146832, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9978.1807732384, "arifle_Katiba_GL_F"}, // 0.01%
			{9979.50946500848, "arifle_MX_GL_F"}, // 0.01%
			{9980.83815677857, "arifle_MXM_Black_F"}, // 0.01%
			{9982.16684854865, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9983.49554031873, "arifle_TRG21_GL_F"}, // 0.01%
			{9984.68524225874, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9985.75576852945, "CUP_srifle_AWM_des"}, // 0.01%
			{9986.82629480017, "CUP_srifle_AWM_wdl"}, // 0.01%
			{9987.82281362773, "arifle_MXM_khk_F"}, // 0.01%
			{9988.81933245529, "Exile_Weapon_AKS_Gold"}, // 0.01%
			{9989.81585128285, "arifle_MX_GL_Black_F"}, // 0.01%
			{9990.81237011041, "arifle_MX_Black_F"}, // 0.01%
			{9991.80888893798, "arifle_MXC_Black_F"}, // 0.01%
			{9992.80540776554, "arifle_Mk20C_F"}, // 0.01%
			{9993.8019265931, "arifle_Katiba_F"}, // 0.01%
			{9994.79844542066, "arifle_Mk20_F"}, // 0.01%
			{9995.79496424822, "arifle_TRG21_F"}, // 0.01%
			{9996.79148307579, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9997.78800190335, "arifle_TRG20_F"}, // 0.01%
			{9998.71659323031, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{9999.38093911535, "arifle_SDAR_F"}, // 0.01%
			{9999.99999999998, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	  Exile_Item_Magazine01
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_InstaDoc
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
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

	  muzzle_snds_L
	  ItemMap
	  Exile_Magazine_8Rnd_9x18
	  U_B_CombatUniform_mcam
	  U_I_CombatUniform
	  B_Carryall_ocamo
	  hgun_P07_F
	  U_O_Wetsuit
	  B_OutdoorPack_blu
	  B_FieldPack_ghex_F
	  H_HelmetB_light_black
	  H_MilCap_oucamo
	  U_O_OfficerUniform_ocamo
	  B_Carryall_ocamo
	  Exile_Weapon_Colt1911
	  B_FieldPack_blk
	  CUP_hgun_Phantom
	  B_Carryall_khk
	  B_Carryall_mcamo
	  B_Kitbag_mcamo
	  H_HelmetLeaderO_oucamo
	  H_HelmetB
	  Exile_Magazine_8Rnd_9x18
	  muzzle_snds_L
	  U_IG_Guerilla2_3
	  Exile_Item_Bandage
	  B_FieldPack_cbr
	  B_Kitbag_sgg
	  B_HuntingBackpack
	  ItemWatch
	  B_Kitbag_mcamo
	  Exile_Magazine_6Rnd_45ACP
	  hgun_Rook40_F
	  10Rnd_9x21_Mag
	  B_Bergen_mcamo
	  Exile_Item_ZipTie
	  U_B_CTRG_3
	  U_I_C_Soldier_Para_4_F
	  HandGrenade
	  Exile_Item_Heatpack
	  ItemRadio
	  B_AssaultPack_tna_F
	  Binocular
	  B_ViperLightHarness_blk_F
	  B_HuntingBackpack
	  U_I_HeliPilotCoveralls
	  B_Carryall_oucamo
	  B_Bergen_dgtl_F
	  CUP_acc_Glock17_Flashlight
	  B_AssaultPack_tna_F
	  Exile_Item_Heatpack
	  HandGrenade
	  U_I_C_Soldier_Para_4_F
	  Exile_Magazine_7Rnd_45ACP
	  U_O_V_Soldier_Viper_F
	  B_OutdoorPack_blk
	  CUP_30Rnd_9x19_UZI
	  B_Carryall_oucamo
	  B_Kitbag_mcamo
	  B_AssaultPack_dgtl
	  U_B_CTRG_Soldier_urb_3_F
	  Exile_Item_ZipTie
	  B_Bergen_Base_F
	  MiniGrenade
	  Exile_Item_Vishpirin
	  B_Carryall_khk
	  B_Carryall_cbr
	  U_IG_Guerilla2_2
	  B_ViperLightHarness_ghex_F
	  Exile_Weapon_Taurus
	  B_ViperLightHarness_khk_F
	  U_I_C_Soldier_Para_5_F
	  B_AssaultPack_sgg
	  B_AssaultPack_blk
	  B_AssaultPack_dgtl
	  hgun_Pistol_01_F
	  Exile_Weapon_Colt1911
	  O_NVGoggles_urb_F
	  U_B_CombatUniform_mcam_tshirt
	  CUP_acc_Glock17_Flashlight
	  MiniGrenade
	  U_B_CTRG_2
	  ItemCompass
	  U_B_CombatUniform_mcam_worn
	  H_MilCap_rucamo
	  U_IG_Guerilla2_2
	  16Rnd_9x21_Mag
	  H_HelmetB_snakeskin
	  optic_Yorris
	  optic_MRD
	  U_IG_Guerilla2_2
	  U_IG_Guerilla1_1
	  B_AssaultPack_rgr
	  U_O_GhillieSuit
	  B_AssaultPack_sgg
	  Exile_Item_Heatpack
	  hgun_Rook40_F
	  B_OutdoorPack_blk
	  hgun_ACPC2_F
	  U_I_C_Soldier_Para_4_F
	*/
	class Tourist
	{
		count = 226;
		half = 8136.46133661077;
		halfIndex = 113;
		sum = 10000;
		items[] = 
		{
			{312.5, "Exile_Item_ZipTie"}, // 3.13%
			{486.111111111111, "ItemWatch"}, // 1.74%
			{655.94806763285, "ItemCompass"}, // 1.70%
			{813.953685610378, "muzzle_snds_L"}, // 1.58%
			{971.959303587906, "muzzle_snds_acp"}, // 1.58%
			{1128.20930358791, "HandGrenade"}, // 1.56%
			{1284.45930358791, "MiniGrenade"}, // 1.56%
			{1430.48734097108, "B_OutdoorPack_blk"}, // 1.46%
			{1569.37622985997, "Exile_Item_Heatpack"}, // 1.39%
			{1700.80146350483, "B_OutdoorPack_blu"}, // 1.31%
			{1832.22669714969, "B_OutdoorPack_tan"}, // 1.31%
			{1953.75447492747, "ItemMap"}, // 1.22%
			{2070.57690483401, "B_HuntingBackpack"}, // 1.17%
			{2178.33552552367, "Exile_Item_Vishpirin"}, // 1.08%
			{2286.09414621332, "Exile_Item_Heatpack"}, // 1.08%
			{2390.26081287999, "ItemRadio"}, // 1.04%
			{2494.42747954666, "ItemCompass"}, // 1.04%
			{2598.59414621332, "Binocular"}, // 1.04%
			{2700.81377238155, "B_AssaultPack_khk"}, // 1.02%
			{2803.03339854977, "B_AssaultPack_dgtl"}, // 1.02%
			{2905.253024718, "B_AssaultPack_rgr"}, // 1.02%
			{3007.47265088622, "B_AssaultPack_sgg"}, // 1.02%
			{3109.69227705444, "B_AssaultPack_mcamo"}, // 1.02%
			{3211.91190322267, "B_AssaultPack_cbr"}, // 1.02%
			{3314.13152939089, "B_AssaultPack_tna_F"}, // 1.02%
			{3416.35115555912, "B_AssaultPack_blk"}, // 1.02%
			{3515.97363878059, "B_Carryall_cbr"}, // 1.00%
			{3615.59612200207, "B_Carryall_ghex_F"}, // 1.00%
			{3711.74996815592, "U_IG_Guerilla2_3"}, // 0.96%
			{3807.90381430976, "U_IG_Guerilla1_1"}, // 0.96%
			{3904.05766046361, "U_IG_Guerilla2_1"}, // 0.96%
			{4000.21150661746, "U_IG_Guerilla2_2"}, // 0.96%
			{4094.59070124833, "B_Carryall_khk"}, // 0.94%
			{4188.9698958792, "B_Carryall_oli"}, // 0.94%
			{4279.11412664843, "U_IG_Guerilla3_1"}, // 0.90%
			{4369.25835741766, "U_IG_Guerilla3_2"}, // 0.90%
			{4457.03925629407, "CUP_muzzle_snds_MicroUzi"}, // 0.88%
			{4544.82015517047, "CUP_acc_Glock17_Flashlight"}, // 0.88%
			{4632.60105404688, "CUP_acc_CZ_M3X"}, // 0.88%
			{4717.51953230775, "Rangefinder"}, // 0.85%
			{4796.52234129651, "CUP_muzzle_snds_M9"}, // 0.79%
			{4875.17167015557, "B_Carryall_mcamo"}, // 0.79%
			{4953.82099901463, "B_Carryall_ocamo"}, // 0.79%
			{5032.47032787369, "B_Carryall_oucamo"}, // 0.79%
			{5105.48434656528, "B_Kitbag_mcamo"}, // 0.73%
			{5178.49836525687, "B_Kitbag_sgg"}, // 0.73%
			{5251.51238394846, "B_Kitbag_cbr"}, // 0.73%
			{5320.15778143799, "hgun_P07_F"}, // 0.69%
			{5385.53435047565, "hgun_ACPC2_F"}, // 0.65%
			{5450.91091951331, "hgun_Rook40_F"}, // 0.65%
			{5514.42717967591, "11Rnd_45ACP_Mag"}, // 0.64%
			{5577.94343983851, "30Rnd_9x21_Mag"}, // 0.64%
			{5641.45970000111, "9Rnd_45ACP_Mag"}, // 0.64%
			{5704.97596016371, "Exile_Magazine_6Rnd_45ACP"}, // 0.64%
			{5768.49222032632, "Exile_Magazine_8Rnd_9x18"}, // 0.64%
			{5832.00848048892, "10Rnd_9x21_Mag"}, // 0.64%
			{5895.52474065152, "Exile_Magazine_7Rnd_45ACP"}, // 0.64%
			{5956.971369865, "optic_Yorris"}, // 0.61%
			{6018.41799907849, "optic_MRD"}, // 0.61%
			{6077.25691121238, "CUP_hgun_Phantom"}, // 0.59%
			{6134.42154535872, "CUP_30Rnd_9x19_UZI"}, // 0.57%
			{6191.58617950506, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.57%
			{6248.7508136514, "CUP_18Rnd_9x19_Phantom"}, // 0.57%
			{6302.63012399623, "Exile_Item_Bandage"}, // 0.54%
			{6353.44313212631, "6Rnd_45ACP_Cylinder"}, // 0.51%
			{6398.45342019215, "B_FieldPack_oucamo"}, // 0.45%
			{6443.463708258, "B_FieldPack_blk"}, // 0.45%
			{6488.47399632384, "B_FieldPack_cbr"}, // 0.45%
			{6533.48428438968, "B_FieldPack_ocamo"}, // 0.45%
			{6576.58773266554, "Exile_Item_InstaDoc"}, // 0.43%
			{6619.08250254002, "hgun_P07_khk_F"}, // 0.42%
			{6661.5772724145, "hgun_Pistol_01_F"}, // 0.42%
			{6704.07204228898, "Exile_Weapon_TaurusGold"}, // 0.42%
			{6746.56681216345, "Exile_Weapon_Taurus"}, // 0.42%
			{6789.06158203793, "Exile_Weapon_Makarov"}, // 0.42%
			{6831.55635191241, "Exile_Weapon_Colt1911"}, // 0.42%
			{6874.05112178689, "hgun_Pistol_Signal_F"}, // 0.42%
			{6916.54589166136, "hgun_Pistol_heavy_02_F"}, // 0.42%
			{6959.04066153584, "hgun_Pistol_heavy_01_F"}, // 0.42%
			{7001.53543141032, "CUP_hgun_SA61"}, // 0.42%
			{7040.76137283291, "CUP_hgun_Duty_M3X"}, // 0.39%
			{7078.87112893047, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.38%
			{7114.23635526792, "B_ViperHarness_base_F"}, // 0.35%
			{7149.60158160537, "B_ViperHarness_ghex_F"}, // 0.35%
			{7184.96680794282, "B_ViperHarness_hex_F"}, // 0.35%
			{7220.33203428027, "B_ViperHarness_khk_F"}, // 0.35%
			{7255.69726061772, "B_FieldPack_ghex_F"}, // 0.35%
			{7291.06248695517, "B_Bergen_blk"}, // 0.35%
			{7326.42771329261, "B_Bergen_rgr"}, // 0.35%
			{7361.79293963006, "B_Bergen_mcamo"}, // 0.35%
			{7397.15816596751, "B_Bergen_sgg"}, // 0.35%
			{7432.52339230496, "B_ViperHarness_blk_F"}, // 0.35%
			{7467.88861864241, "B_ViperHarness_oli_F"}, // 0.35%
			{7503.25384497986, "B_ViperLightHarness_oli_F"}, // 0.35%
			{7538.61907131731, "B_ViperLightHarness_blk_F"}, // 0.35%
			{7573.98429765476, "B_ViperLightHarness_ghex_F"}, // 0.35%
			{7609.3495239922, "B_ViperLightHarness_base_F"}, // 0.35%
			{7644.71475032965, "B_ViperLightHarness_hex_F"}, // 0.35%
			{7680.0799766671, "B_ViperLightHarness_khk_F"}, // 0.35%
			{7712.76826118593, "CUP_hgun_PB6P9_snds"}, // 0.33%
			{7744.52639126723, "16Rnd_9x21_Mag"}, // 0.32%
			{7775.98612281086, "B_Bergen_hex_F"}, // 0.31%
			{7807.44585435448, "B_Bergen_dgtl_F"}, // 0.31%
			{7838.9055858981, "B_Bergen_mcamo_F"}, // 0.31%
			{7870.36531744173, "B_Bergen_tna_F"}, // 0.31%
			{7901.82504898535, "B_Bergen_Base_F"}, // 0.31%
			{7931.87312590843, "U_I_C_Soldier_Camo_F"}, // 0.30%
			{7961.92120283151, "U_I_C_Soldier_Para_4_F"}, // 0.30%
			{7991.96927975458, "U_I_C_Soldier_Para_3_F"}, // 0.30%
			{8022.01735667766, "U_I_C_Soldier_Para_2_F"}, // 0.30%
			{8052.06543360074, "U_I_C_Soldier_Para_1_F"}, // 0.30%
			{8082.11351052381, "U_I_C_Soldier_Para_5_F"}, // 0.30%
			{8109.28742356729, "NVGoggles_tna_F"}, // 0.27%
			{8136.46133661077, "NVGoggles"}, // 0.27%
			{8163.63524965425, "O_NVGoggles_hex_F"}, // 0.27%
			{8190.80916269773, "O_NVGoggles_ghex_F"}, // 0.27%
			{8217.98307574121, "O_NVGoggles_urb_F"}, // 0.27%
			{8244.13370335627, "CUP_hgun_MicroUzi"}, // 0.26%
			{8270.17537002293, "U_B_GhillieSuit"}, // 0.26%
			{8296.2170366896, "U_I_GhillieSuit"}, // 0.26%
			{8322.25870335627, "U_O_GhillieSuit"}, // 0.26%
			{8347.95771651416, "U_B_CTRG_Soldier_2_F"}, // 0.26%
			{8373.65672967206, "U_B_CTRG_Soldier_F"}, // 0.26%
			{8399.35574282995, "U_B_T_Soldier_SL_F"}, // 0.26%
			{8425.05475598785, "U_B_CTRG_Soldier_urb_2_F"}, // 0.26%
			{8450.75376914574, "U_B_CTRG_Soldier_urb_3_F"}, // 0.26%
			{8476.45278230364, "U_B_GEN_Soldier_F"}, // 0.26%
			{8502.15179546153, "U_B_GEN_Commander_F"}, // 0.26%
			{8527.85080861943, "U_O_T_Soldier_F"}, // 0.26%
			{8553.54982177732, "U_O_T_Officer_F"}, // 0.26%
			{8579.24883493522, "U_B_CTRG_Soldier_urb_1_F"}, // 0.26%
			{8604.94784809311, "U_B_CTRG_Soldier_3_F"}, // 0.26%
			{8630.64686125101, "U_B_T_Soldier_AR_F"}, // 0.26%
			{8656.3458744089, "U_B_CTRG_2"}, // 0.26%
			{8682.0448875668, "U_B_CombatUniform_mcam_worn"}, // 0.26%
			{8707.74390072469, "U_B_CombatUniform_mcam_vest"}, // 0.26%
			{8733.44291388259, "U_B_CombatUniform_mcam_tshirt"}, // 0.26%
			{8759.14192704048, "U_B_CombatUniform_mcam"}, // 0.26%
			{8784.84094019838, "U_B_CTRG_3"}, // 0.26%
			{8810.53995335627, "U_B_CTRG_1"}, // 0.26%
			{8835.94645742131, "H_MilCap_dgtl"}, // 0.25%
			{8861.35296148635, "H_MilCap_rucamo"}, // 0.25%
			{8886.75946555139, "H_MilCap_oucamo"}, // 0.25%
			{8912.16596961643, "H_MilCap_mcamo"}, // 0.25%
			{8937.57247368147, "H_MilCap_ocamo"}, // 0.25%
			{8962.97897774651, "Exile_Headgear_GasMask"}, // 0.25%
			{8988.38548181155, "H_MilCap_blue"}, // 0.25%
			{9012.42394335002, "U_IG_leader"}, // 0.24%
			{9034.65463440693, "6Rnd_GreenSignal_F"}, // 0.22%
			{9056.88532546384, "6Rnd_RedSignal_F"}, // 0.22%
			{9077.44453599015, "U_I_CombatUniform"}, // 0.21%
			{9098.00374651647, "U_I_CombatUniform_tshirt"}, // 0.21%
			{9118.56295704278, "U_I_CombatUniform_shortsleeve"}, // 0.21%
			{9139.1221675691, "U_B_HeliPilotCoveralls"}, // 0.21%
			{9159.68137809541, "U_O_PilotCoveralls"}, // 0.21%
			{9180.24058862173, "U_B_PilotCoveralls"}, // 0.21%
			{9200.79979914804, "U_I_HeliPilotCoveralls"}, // 0.21%
			{9221.35900967436, "U_I_pilotCoveralls"}, // 0.21%
			{9240.41388772314, "H_HelmetSpecB_paint1"}, // 0.19%
			{9259.46876577192, "H_HelmetSpecB"}, // 0.19%
			{9278.5236438207, "H_HelmetSpecB_paint2"}, // 0.19%
			{9297.57852186948, "H_HelmetSpecB_blk"}, // 0.19%
			{9316.63339991826, "H_HelmetIA"}, // 0.19%
			{9335.68827796704, "H_HelmetB_plain_blk"}, // 0.19%
			{9354.74315601582, "H_HelmetB_light"}, // 0.19%
			{9373.7980340646, "H_HelmetB_paint"}, // 0.19%
			{9392.85291211338, "H_HelmetB"}, // 0.19%
			{9410.21402322449, "ItemGPS"}, // 0.17%
			{9427.57513433561, "Exile_Item_MobilePhone"}, // 0.17%
			{9442.99454223034, "U_B_SpecopsUniform_sgg"}, // 0.15%
			{9455.69779426286, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9468.40104629538, "H_BandMask_reaper"}, // 0.13%
			{9481.10429832791, "H_BandMask_demon"}, // 0.13%
			{9493.80755036043, "H_HelmetB_grass"}, // 0.13%
			{9506.51080239295, "H_HelmetIA_camo"}, // 0.13%
			{9519.21405442547, "H_HelmetIA_net"}, // 0.13%
			{9531.91730645799, "H_HelmetB_light_sand"}, // 0.13%
			{9544.62055849051, "H_HelmetB_desert"}, // 0.13%
			{9557.32381052303, "H_Helmet_Skate"}, // 0.13%
			{9570.02706255555, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9582.73031458807, "H_BandMask_khk"}, // 0.13%
			{9595.4335666206, "H_Beret_gen_F"}, // 0.13%
			{9608.13681865312, "H_HelmetB_snakeskin"}, // 0.13%
			{9620.84007068564, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9633.54332271816, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9646.24657475068, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9658.9498267832, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9671.65307881572, "H_HelmetB_black"}, // 0.13%
			{9684.35633084824, "H_HelmetB_sand"}, // 0.13%
			{9697.05958288076, "H_HelmetB_light_grass"}, // 0.13%
			{9709.76283491328, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9722.46608694581, "H_HelmetB_light_desert"}, // 0.13%
			{9735.16933897833, "H_HelmetB_light_black"}, // 0.13%
			{9747.87259101085, "H_HelmetB_tna_F"}, // 0.13%
			{9759.89182178008, "U_I_G_resistanceLeader_F"}, // 0.12%
			{9770.17142704324, "U_I_OfficerUniform"}, // 0.10%
			{9780.4510323064, "U_O_OfficerUniform_ocamo"}, // 0.10%
			{9790.73063756955, "U_O_SpecopsUniform_blk"}, // 0.10%
			{9801.01024283271, "U_O_V_Soldier_Viper_hex_F"}, // 0.10%
			{9811.28984809587, "U_O_SpecopsUniform_ocamo"}, // 0.10%
			{9821.56945335903, "U_O_CombatUniform_oucamo"}, // 0.10%
			{9831.84905862219, "U_O_CombatUniform_ocamo"}, // 0.10%
			{9842.12866388535, "U_I_Wetsuit"}, // 0.10%
			{9852.4082691485, "U_O_Wetsuit"}, // 0.10%
			{9862.68787441166, "U_B_Wetsuit"}, // 0.10%
			{9872.96747967482, "U_O_V_Soldier_Viper_F"}, // 0.10%
			{9879.31910569108, "H_HelmetCrew_B"}, // 0.06%
			{9885.67073170734, "H_CrewHelmetHeli_O"}, // 0.06%
			{9892.0223577236, "H_HelmetCrew_I"}, // 0.06%
			{9898.37398373986, "H_HelmetO_ghex_F"}, // 0.06%
			{9904.72560975612, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9911.07723577238, "H_HelmetO_ocamo"}, // 0.06%
			{9917.42886178864, "H_HelmetSpecO_blk"}, // 0.06%
			{9923.7804878049, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9930.13211382116, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9936.48373983742, "H_CrewHelmetHeli_I"}, // 0.06%
			{9942.83536585368, "H_CrewHelmetHeli_B"}, // 0.06%
			{9949.18699186994, "H_HelmetB_camo"}, // 0.06%
			{9955.5386178862, "H_PilotHelmetHeli_I"}, // 0.06%
			{9961.89024390246, "H_PilotHelmetHeli_O"}, // 0.06%
			{9968.24186991871, "H_PilotHelmetHeli_B"}, // 0.06%
			{9974.59349593497, "H_PilotHelmetFighter_I"}, // 0.06%
			{9980.94512195123, "H_PilotHelmetFighter_O"}, // 0.06%
			{9987.29674796749, "H_PilotHelmetFighter_B"}, // 0.06%
			{9993.64837398375, "H_HelmetCrew_O"}, // 0.06%
			{10000, "H_HelmetO_oucamo"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  srifle_LRR_tna_F
	  srifle_DMR_01_F
	  srifle_DMR_07_hex_F
	  optic_KHS_old
	  H_HelmetSpecB
	  CUP_srifle_VSSVintorez
	  srifle_DMR_02_F
	  H_HelmetLeaderO_ocamo
	  srifle_EBR_F
	  U_B_T_Sniper_F
	  U_B_FullGhillie_lsh
	  optic_DMS
	  MMG_01_hex_F
	  CUP_srifle_VSSVintorez
	  IEDUrbanSmall_Remote_Mag
	  CUP_srifle_G22_des
	  B_Carryall_ghex_F
	  U_B_GhillieSuit
	  srifle_DMR_03_woodland_F
	  srifle_DMR_02_sniper_F
	  H_PilotHelmetFighter_I
	  H_HelmetB_TI_tna_F
	  srifle_DMR_07_hex_F
	  srifle_LRR_tna_F
	  srifle_DMR_04_F
	  20Rnd_762x51_Mag
	  CUP_srifle_G22_des
	  srifle_DMR_02_camo_F
	  CUP_srifle_SVD
	  srifle_LRR_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_07_hex_F
	  Exile_Item_Vishpirin
	  srifle_DMR_07_ghex_F
	  U_B_T_FullGhillie_tna_F
	  Exile_Item_ZipTie
	  optic_KHS_hex
	  Exile_Item_InstaDoc
	  DemoCharge_Remote_Mag
	  srifle_GM6_ghex_F
	  HandGrenade
	  srifle_DMR_05_tan_F
	  CUP_srifle_M40A3
	  srifle_DMR_03_khaki_F
	  CUP_srifle_SVD
	  MMG_02_camo_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_03_tan_F
	  srifle_DMR_06_camo_F
	  srifle_DMR_05_tan_F
	  srifle_GM6_ghex_F
	  DemoCharge_Remote_Mag
	  Exile_Item_InstaDoc
	  B_Carryall_cbr
	  H_HelmetSpecO_ocamo
	  srifle_GM6_ghex_F
	  B_Carryall_khk
	  srifle_DMR_02_sniper_F
	  srifle_DMR_02_camo_F
	  CUP_srifle_M24_des
	  muzzle_snds_338_sand
	  Exile_Item_ZipTie
	  Exile_Item_Bandage
	  srifle_GM6_F
	  MiniGrenade
	  U_B_GhillieSuit
	  srifle_DMR_04_Tan_F
	  U_I_GhillieSuit
	  srifle_DMR_03_F
	  B_Carryall_mcamo
	  srifle_DMR_06_camo_F
	  CUP_srifle_M107_Base
	  CUP_srifle_M24_wdl
	  srifle_DMR_05_tan_F
	  CUP_srifle_M24_des
	  B_Carryall_oucamo
	  IEDUrbanSmall_Remote_Mag
	  B_Bergen_mcamo_F
	  optic_KHS_tan
	  srifle_DMR_06_camo_F
	  srifle_GM6_F
	  optic_KHS_blk
	  srifle_LRR_F
	  optic_AMS
	  srifle_DMR_05_hex_F
	  U_B_GhillieSuit
	  srifle_DMR_03_woodland_F
	  CUP_srifle_SVD_des
	  B_Carryall_ghex_F
	  B_Carryall_ghex_F
	  U_B_GhillieSuit
	  U_O_GhillieSuit
	  CUP_srifle_M24_wdl
	  muzzle_snds_B
	  srifle_DMR_05_hex_F
	  HandGrenade
	  Exile_Item_Vishpirin
	  srifle_GM6_F
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	*/
	class Radiation
	{
		count = 202;
		half = 8882.81262043948;
		halfIndex = 101;
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
			{3555.46402638163, "srifle_DMR_04_Tan_F"}, // 1.34%
			{3689.87262853216, "srifle_DMR_04_F"}, // 1.34%
			{3822.1477608073, "U_O_GhillieSuit"}, // 1.32%
			{3954.42289308243, "U_I_GhillieSuit"}, // 1.32%
			{4086.69802535756, "U_B_GhillieSuit"}, // 1.32%
			{4210.06343369706, "srifle_DMR_03_khaki_F"}, // 1.23%
			{4333.42884203656, "srifle_DMR_03_tan_F"}, // 1.23%
			{4456.79425037607, "srifle_DMR_06_olive_F"}, // 1.23%
			{4580.15965871557, "srifle_DMR_06_camo_F"}, // 1.23%
			{4703.52506705507, "srifle_DMR_03_F"}, // 1.23%
			{4826.89047539457, "srifle_DMR_03_woodland_F"}, // 1.23%
			{4950.25588373407, "CUP_srifle_VSSVintorez"}, // 1.23%
			{5065.46325700596, "srifle_DMR_02_sniper_F"}, // 1.15%
			{5180.67063027785, "srifle_DMR_02_camo_F"}, // 1.15%
			{5295.87800354974, "srifle_DMR_02_F"}, // 1.15%
			{5405.34707853605, "Exile_Item_Heatpack"}, // 1.09%
			{5514.81615352237, "Exile_Item_Vishpirin"}, // 1.09%
			{5619.67675061095, "srifle_DMR_07_blk_F"}, // 1.05%
			{5724.53734769952, "srifle_DMR_07_hex_F"}, // 1.05%
			{5829.3979447881, "srifle_DMR_07_ghex_F"}, // 1.05%
			{5930.60173726706, "B_Carryall_cbr"}, // 1.01%
			{6031.80552974602, "B_Carryall_ghex_F"}, // 1.01%
			{6127.68280683135, "B_Carryall_khk"}, // 0.96%
			{6223.56008391668, "B_Carryall_oli"}, // 0.96%
			{6318.79817915478, "20Rnd_762x51_Mag"}, // 0.95%
			{6411.3222354094, "CUP_srifle_CZ750"}, // 0.93%
			{6491.50975083008, "CUP_srifle_G22_des"}, // 0.80%
			{6571.40748173452, "B_Carryall_ocamo"}, // 0.80%
			{6651.30521263896, "B_Carryall_oucamo"}, // 0.80%
			{6731.20294354341, "B_Carryall_mcamo"}, // 0.80%
			{6810.56802290849, "IEDUrbanSmall_Remote_Mag"}, // 0.79%
			{6889.93310227357, "IEDLandSmall_Remote_Mag"}, // 0.79%
			{6969.29818163865, "APERSTripMine_Wire_Mag"}, // 0.79%
			{7048.66326100373, "APERSMine_Range_Mag"}, // 0.79%
			{7128.0283403688, "APERSBoundingMine_Range_Mag"}, // 0.79%
			{7191.52040386087, "10Rnd_127x54_Mag"}, // 0.63%
			{7249.8770798646, "U_B_T_Sniper_F"}, // 0.58%
			{7308.23375586834, "U_B_T_Soldier_F"}, // 0.58%
			{7366.59043187207, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7424.94710787581, "U_O_T_Sniper_F"}, // 0.58%
			{7483.30378387954, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7540.90747051549, "srifle_DMR_03_khaki_F"}, // 0.58%
			{7598.51115715143, "srifle_DMR_03_F"}, // 0.58%
			{7656.11484378738, "srifle_DMR_06_olive_F"}, // 0.58%
			{7713.71853042332, "srifle_DMR_06_camo_F"}, // 0.58%
			{7771.32221705926, "srifle_DMR_03_woodland_F"}, // 0.58%
			{7828.92590369521, "srifle_DMR_03_tan_F"}, // 0.58%
			{7883.66044118837, "Exile_Item_Bandage"}, // 0.55%
			{7928.69027345224, "srifle_GM6_F"}, // 0.45%
			{7972.47790344677, "Exile_Item_InstaDoc"}, // 0.44%
			{8006.25027764467, "srifle_DMR_02_camo_F"}, // 0.34%
			{8040.02265184258, "srifle_DMR_02_F"}, // 0.34%
			{8073.79502604049, "CUP_srifle_M107_Base"}, // 0.34%
			{8105.75411840226, "B_Bergen_tna_F"}, // 0.32%
			{8137.71321076404, "B_Bergen_hex_F"}, // 0.32%
			{8169.67230312582, "B_Bergen_dgtl_F"}, // 0.32%
			{8201.6313954876, "B_Bergen_mcamo_F"}, // 0.32%
			{8233.59048784937, "B_Bergen_Base_F"}, // 0.32%
			{8264.43183993425, "CUP_srifle_AWM_des"}, // 0.31%
			{8295.27319201912, "CUP_srifle_AWM_wdl"}, // 0.31%
			{8321.72821847415, "muzzle_snds_B"}, // 0.26%
			{8348.18324492918, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8374.6382713842, "muzzle_snds_93mmg"}, // 0.26%
			{8401.09329783923, "muzzle_snds_338_black"}, // 0.26%
			{8427.54832429426, "muzzle_snds_338_green"}, // 0.26%
			{8454.00335074928, "muzzle_snds_338_sand"}, // 0.26%
			{8479.81313265663, "H_MilCap_dgtl"}, // 0.26%
			{8505.62291456397, "Exile_Headgear_GasMask"}, // 0.26%
			{8531.43269647131, "H_MilCap_ocamo"}, // 0.26%
			{8557.24247837866, "H_MilCap_mcamo"}, // 0.26%
			{8583.052260286, "H_MilCap_rucamo"}, // 0.26%
			{8608.86204219334, "H_MilCap_oucamo"}, // 0.26%
			{8634.67182410068, "H_MilCap_blue"}, // 0.26%
			{8657.34756106214, "optic_KHS_blk"}, // 0.23%
			{8680.02329802359, "optic_AMS"}, // 0.23%
			{8702.69903498504, "optic_AMS_khk"}, // 0.23%
			{8725.37477194649, "optic_AMS_snd"}, // 0.23%
			{8748.05050890794, "optic_KHS_tan"}, // 0.23%
			{8770.72624586939, "optic_KHS_old"}, // 0.23%
			{8793.40198283084, "optic_KHS_hex"}, // 0.23%
			{8815.91689896278, "srifle_DMR_05_tan_F"}, // 0.23%
			{8838.43181509472, "srifle_DMR_05_blk_F"}, // 0.23%
			{8860.94673122666, "srifle_DMR_05_hex_F"}, // 0.23%
			{8882.81262043948, "optic_DMS"}, // 0.22%
			{8903.86866190369, "optic_LRPS_tna_F"}, // 0.21%
			{8924.92470336789, "optic_LRPS_ghex_F"}, // 0.21%
			{8945.9807448321, "optic_SOS"}, // 0.21%
			{8967.0367862963, "optic_LRPS"}, // 0.21%
			{8988.0928277605, "optic_SOS_khk_F"}, // 0.21%
			{9007.45016419101, "H_HelmetB_paint"}, // 0.19%
			{9026.80750062152, "H_HelmetB_light"}, // 0.19%
			{9046.16483705202, "H_HelmetB_plain_blk"}, // 0.19%
			{9065.52217348253, "H_HelmetSpecB"}, // 0.19%
			{9084.87950991304, "H_HelmetSpecB_paint1"}, // 0.19%
			{9104.23684634354, "H_HelmetSpecB_paint2"}, // 0.19%
			{9123.59418277405, "H_HelmetSpecB_blk"}, // 0.19%
			{9142.95151920456, "H_HelmetIA"}, // 0.19%
			{9162.30885563506, "H_HelmetB"}, // 0.19%
			{9180.32078854061, "CUP_glaunch_M32"}, // 0.18%
			{9195.70789576446, "muzzle_snds_B"}, // 0.15%
			{9209.21684544362, "MMG_02_camo_F"}, // 0.14%
			{9222.72579512278, "MMG_02_sand_F"}, // 0.14%
			{9236.23474480194, "CUP_srifle_AS50"}, // 0.14%
			{9249.74369448111, "MMG_02_black_F"}, // 0.14%
			{9262.64858543478, "H_HelmetB_grass"}, // 0.13%
			{9275.55347638845, "H_HelmetB_snakeskin"}, // 0.13%
			{9288.45836734212, "H_HelmetB_desert"}, // 0.13%
			{9301.36325829579, "H_HelmetB_black"}, // 0.13%
			{9314.26814924947, "H_HelmetB_sand"}, // 0.13%
			{9327.17304020314, "H_HelmetB_light_grass"}, // 0.13%
			{9340.07793115681, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9352.98282211048, "H_HelmetB_light_desert"}, // 0.13%
			{9365.88771306416, "H_HelmetB_light_black"}, // 0.13%
			{9378.79260401783, "H_Helmet_Skate"}, // 0.13%
			{9391.6974949715, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9404.60238592517, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9417.50727687885, "H_HelmetIA_camo"}, // 0.13%
			{9430.41216783252, "H_HelmetIA_net"}, // 0.13%
			{9443.31705878619, "H_HelmetB_light_sand"}, // 0.13%
			{9456.22194973986, "H_BandMask_khk"}, // 0.13%
			{9469.12684069353, "H_BandMask_reaper"}, // 0.13%
			{9482.03173164721, "H_BandMask_demon"}, // 0.13%
			{9494.93662260088, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9507.84151355455, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9520.74640450822, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9533.6512954619, "H_Beret_gen_F"}, // 0.13%
			{9546.55618641557, "H_HelmetB_tna_F"}, // 0.13%
			{9559.46107736924, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9571.94547187611, "20Rnd_650x39_Cased_Mag_F"}, // 0.12%
			{9583.83537140646, "CUP_5Rnd_762x51_M24"}, // 0.12%
			{9595.72527093681, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{9607.61517046716, "CUP_srifle_SVD_des"}, // 0.12%
			{9619.50506999751, "CUP_10Rnd_762x54_SVD_M"}, // 0.12%
			{9631.17640519825, "U_O_FullGhillie_ard"}, // 0.12%
			{9642.847740399, "U_O_FullGhillie_lsh"}, // 0.12%
			{9654.51907559974, "U_O_FullGhillie_sard"}, // 0.12%
			{9666.19041080049, "U_I_FullGhillie_ard"}, // 0.12%
			{9677.86174600124, "U_I_FullGhillie_lsh"}, // 0.12%
			{9689.53308120198, "U_I_FullGhillie_sard"}, // 0.12%
			{9701.20441640273, "U_B_FullGhillie_sard"}, // 0.12%
			{9712.87575160348, "U_B_FullGhillie_ard"}, // 0.12%
			{9724.54708680422, "U_B_FullGhillie_lsh"}, // 0.12%
			{9735.84249135805, "20Rnd_762x51_Mag"}, // 0.11%
			{9746.54340093537, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.11%
			{9756.64981553617, "10Rnd_762x54_Mag"}, // 0.10%
			{9766.16173516045, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{9775.16770161322, "MMG_01_hex_F"}, // 0.09%
			{9784.17366806599, "MMG_01_tan_F"}, // 0.09%
			{9793.09109271376, "CUP_10Rnd_762x51_CZ750"}, // 0.09%
			{9802.00851736152, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.09%
			{9810.10699484775, "muzzle_snds_B_khk_F"}, // 0.08%
			{9818.20547233398, "muzzle_snds_B_snd_F"}, // 0.08%
			{9825.93390702871, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{9832.68838186829, "CUP_launch_RPG7V"}, // 0.07%
			{9839.44285670787, "CUP_launch_M136"}, // 0.07%
			{9845.89530218471, "H_HelmetO_ghex_F"}, // 0.06%
			{9852.34774766154, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9858.80019313838, "H_HelmetO_ocamo"}, // 0.06%
			{9865.25263861521, "H_HelmetSpecO_blk"}, // 0.06%
			{9871.70508409205, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9878.15752956889, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9884.60997504572, "H_HelmetO_oucamo"}, // 0.06%
			{9891.06242052256, "H_CrewHelmetHeli_I"}, // 0.06%
			{9897.5148659994, "H_HelmetCrew_O"}, // 0.06%
			{9903.96731147623, "H_CrewHelmetHeli_B"}, // 0.06%
			{9910.41975695307, "H_HelmetCrew_I"}, // 0.06%
			{9916.8722024299, "H_PilotHelmetFighter_B"}, // 0.06%
			{9923.32464790674, "H_PilotHelmetFighter_O"}, // 0.06%
			{9929.77709338358, "H_PilotHelmetFighter_I"}, // 0.06%
			{9936.22953886041, "H_PilotHelmetHeli_B"}, // 0.06%
			{9942.68198433725, "H_PilotHelmetHeli_O"}, // 0.06%
			{9949.13442981408, "H_PilotHelmetHeli_I"}, // 0.06%
			{9955.58687529092, "H_CrewHelmetHeli_O"}, // 0.06%
			{9962.03932076776, "H_HelmetB_camo"}, // 0.06%
			{9968.49176624459, "H_HelmetCrew_B"}, // 0.06%
			{9974.43671600977, "7Rnd_408_Mag"}, // 0.06%
			{9980.38166577494, "5Rnd_127x108_Mag"}, // 0.06%
			{9985.13762558708, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9988.11010046967, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9991.08257535225, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9994.05505023484, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9997.02752511743, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9998.81101004698, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  optic_KHS_hex
	  srifle_DMR_05_tan_F
	  U_B_T_Soldier_F
	  muzzle_snds_93mmg_tan
	  muzzle_snds_93mmg
	  srifle_DMR_05_hex_F
	  Exile_Item_Can_Empty
	  TRYK_U_B_PCUHsW2
	  V_PlateCarrierGL_tna_F
	  srifle_DMR_04_F
	  V_BandollierB_ghex_F
	  muzzle_snds_93mmg_tan
	  TRYK_U_B_PCUHsW6
	  srifle_LRR_tna_F
	  optic_AMS_khk
	  Exile_Item_Magazine04
	  muzzle_snds_338_black
	  muzzle_snds_B
	  U_I_FullGhillie_lsh
	  srifle_DMR_03_F
	  optic_KHS_hex
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  srifle_LRR_F
	  srifle_LRR_tna_F
	  muzzle_snds_B
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_B
	  optic_KHS_hex
	  optic_KHS_tan
	  optic_KHS_blk
	  TRYK_B_Coyotebackpack_WH
	  Exile_Item_PlasticBottleEmpty
	  srifle_DMR_05_tan_F
	  10Rnd_338_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  TRYK_H_Helmet_Winter
	  Exile_Item_Can_Empty
	  U_O_T_FullGhillie_tna_F
	  muzzle_snds_B
	  TRYK_U_B_Snow_CombatUniform
	  muzzle_snds_338_green
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  10Rnd_338_Mag
	  optic_KHS_blk
	  srifle_DMR_05_blk_F
	  Exile_Item_Can_Empty
	  optic_AMS_khk
	  muzzle_snds_B
	  muzzle_snds_B
	  Exile_Item_ToiletPaper
	  srifle_GM6_F
	  Exile_Item_PlasticBottleEmpty
	  TRYK_Winter_pack
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_Magazine02
	  Exile_Item_Magazine04
	  TRYK_H_Helmet_Winter
	  TRYK_U_B_PCUHsW5
	  TRYK_U_B_Snowt
	  5Rnd_127x108_APDS_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  10Rnd_93x64_DMR_05_Mag
	  TRYK_U_B_PCUHsW6
	  5Rnd_127x108_Mag
	  srifle_DMR_05_tan_F
	  muzzle_snds_338_green
	  Exile_Item_Can_Empty
	  CUP_M136_M
	  Exile_Item_PlasticBottleEmpty
	  srifle_DMR_05_blk_F
	  srifle_DMR_04_F
	  Exile_Item_Magazine04
	  TRYK_U_B_Snow_CombatUniform
	  V_PlateCarrierSpec_rgr
	  optic_AMS_snd
	  optic_AMS_snd
	  Exile_Item_Magazine04
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  150Rnd_93x64_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  U_B_GhillieSuit
	  Exile_Item_Can_Empty
	  U_B_GhillieSuit
	  10Rnd_338_Mag
	*/
	class SuperCrate
	{
		count = 115;
		half = 9045.69892473118;
		halfIndex = 57;
		sum = 10000;
		items[] = 
		{
			{1041.66666666667, "Exile_Item_PlasticBottleEmpty"}, // 10.42%
			{2083.33333333333, "Exile_Item_Can_Empty"}, // 10.42%
			{3125, "Exile_Item_ToiletPaper"}, // 10.42%
			{3385.41666666667, "Exile_Item_Magazine01"}, // 2.60%
			{3645.83333333333, "Exile_Item_Magazine02"}, // 2.60%
			{3906.25, "Exile_Item_Magazine03"}, // 2.60%
			{4166.66666666667, "Exile_Item_Magazine04"}, // 2.60%
			{4305.55555555555, "U_I_GhillieSuit"}, // 1.39%
			{4444.44444444444, "U_O_GhillieSuit"}, // 1.39%
			{4583.33333333333, "muzzle_snds_338_green"}, // 1.39%
			{4722.22222222222, "muzzle_snds_338_sand"}, // 1.39%
			{4861.11111111111, "muzzle_snds_338_black"}, // 1.39%
			{5000, "muzzle_snds_93mmg_tan"}, // 1.39%
			{5138.88888888889, "muzzle_snds_B"}, // 1.39%
			{5277.77777777778, "muzzle_snds_93mmg"}, // 1.39%
			{5416.66666666666, "U_B_GhillieSuit"}, // 1.39%
			{5535.71428571428, "optic_KHS_tan"}, // 1.19%
			{5654.7619047619, "optic_KHS_old"}, // 1.19%
			{5773.80952380952, "optic_KHS_hex"}, // 1.19%
			{5892.85714285714, "optic_KHS_blk"}, // 1.19%
			{6011.90476190476, "optic_AMS_snd"}, // 1.19%
			{6130.95238095238, "optic_AMS_khk"}, // 1.19%
			{6250, "optic_AMS"}, // 1.19%
			{6350.8064516129, "srifle_LRR_F"}, // 1.01%
			{6451.61290322581, "srifle_LRR_tna_F"}, // 1.01%
			{6551.61290322581, "CUP_6Rnd_HE_M203"}, // 1.00%
			{6651.61290322581, "10Rnd_93x64_DMR_05_Mag"}, // 1.00%
			{6747.76674937965, "TRYK_U_B_PCUHsW5"}, // 0.96%
			{6843.9205955335, "TRYK_U_B_PCUHsW6"}, // 0.96%
			{6940.07444168734, "TRYK_H_Helmet_Winter_2"}, // 0.96%
			{7036.22828784119, "TRYK_U_B_PCUHsW4"}, // 0.96%
			{7132.38213399503, "TRYK_U_B_PCUHsW3nh"}, // 0.96%
			{7228.53598014888, "TRYK_U_B_PCUHsW2"}, // 0.96%
			{7324.68982630273, "TRYK_V_ArmorVest_Winter"}, // 0.96%
			{7420.84367245657, "TRYK_B_Coyotebackpack_WH"}, // 0.96%
			{7516.99751861042, "TRYK_U_B_PCUHsW"}, // 0.96%
			{7613.15136476426, "TRYK_H_Helmet_Winter"}, // 0.96%
			{7709.30521091811, "TRYK_U_B_Snowt"}, // 0.96%
			{7805.45905707195, "TRYK_U_B_Snow_CombatUniform"}, // 0.96%
			{7901.6129032258, "TRYK_Winter_pack"}, // 0.96%
			{7984.94623655913, "10Rnd_338_Mag"}, // 0.83%
			{8068.27956989247, "CUP_5Rnd_127x99_as50_M"}, // 0.83%
			{8151.6129032258, "5Rnd_127x108_APDS_Mag"}, // 0.83%
			{8234.94623655913, "5Rnd_127x108_Mag"}, // 0.83%
			{8318.27956989247, "130Rnd_338_Mag"}, // 0.83%
			{8401.6129032258, "150Rnd_93x64_Mag"}, // 0.83%
			{8468.81720430107, "srifle_GM6_F"}, // 0.67%
			{8536.02150537634, "srifle_GM6_ghex_F"}, // 0.67%
			{8602.68817204301, "CUP_OG7_M"}, // 0.67%
			{8669.35483870967, "CUP_M136_M"}, // 0.67%
			{8723.11827956989, "srifle_DMR_05_blk_F"}, // 0.54%
			{8776.8817204301, "srifle_DMR_05_tan_F"}, // 0.54%
			{8830.64516129032, "srifle_DMR_05_hex_F"}, // 0.54%
			{8877.68817204301, "srifle_DMR_04_F"}, // 0.47%
			{8924.73118279569, "srifle_DMR_04_Tan_F"}, // 0.47%
			{8965.05376344086, "srifle_DMR_02_camo_F"}, // 0.40%
			{9005.37634408602, "srifle_DMR_02_F"}, // 0.40%
			{9045.69892473118, "srifle_DMR_02_sniper_F"}, // 0.40%
			{9076.33617963314, "U_B_T_Soldier_F"}, // 0.31%
			{9106.9734345351, "U_B_T_FullGhillie_tna_F"}, // 0.31%
			{9137.61068943706, "U_B_T_Sniper_F"}, // 0.31%
			{9168.24794433902, "U_O_T_Sniper_F"}, // 0.31%
			{9198.88519924099, "U_O_T_FullGhillie_tna_F"}, // 0.31%
			{9228.43602666415, "srifle_GM6_F"}, // 0.30%
			{9250.59914723153, "CUP_srifle_M107_Base"}, // 0.22%
			{9272.76226779891, "srifle_DMR_02_F"}, // 0.22%
			{9294.92538836628, "srifle_DMR_02_camo_F"}, // 0.22%
			{9315.08667868886, "srifle_DMR_03_khaki_F"}, // 0.20%
			{9335.24796901145, "srifle_DMR_03_tan_F"}, // 0.20%
			{9355.40925933403, "srifle_DMR_06_camo_F"}, // 0.20%
			{9375.57054965661, "srifle_DMR_06_olive_F"}, // 0.20%
			{9395.73183997919, "srifle_DMR_03_F"}, // 0.20%
			{9415.89313030177, "srifle_DMR_03_woodland_F"}, // 0.20%
			{9435.73440014304, "V_TacChestrig_grn_F"}, // 0.20%
			{9455.57566998431, "V_PlateCarrier1_rgr_noflag_F"}, // 0.20%
			{9475.41693982558, "V_PlateCarrier2_rgr_noflag_F"}, // 0.20%
			{9495.25820966685, "V_PlateCarrierGL_blk"}, // 0.20%
			{9515.09947950812, "V_PlateCarrierGL_mtp"}, // 0.20%
			{9534.94074934939, "V_PlateCarrierGL_rgr"}, // 0.20%
			{9554.78201919066, "V_PlateCarrierIAGL_dgtl"}, // 0.20%
			{9574.62328903193, "V_PlateCarrierIAGL_oli"}, // 0.20%
			{9594.4645588732, "V_PlateCarrierSpec_mtp"}, // 0.20%
			{9614.30582871447, "V_PlateCarrierSpec_rgr"}, // 0.20%
			{9634.14709855574, "V_TacChestrig_oli_F"}, // 0.20%
			{9653.98836839701, "V_PlateCarrierSpec_blk"}, // 0.20%
			{9673.82963823829, "V_PlateCarrier1_tna_F"}, // 0.20%
			{9693.67090807956, "V_PlateCarrier2_tna_F"}, // 0.20%
			{9713.51217792083, "V_PlateCarrierSpec_tna_F"}, // 0.20%
			{9733.3534477621, "V_PlateCarrierGL_tna_F"}, // 0.20%
			{9753.19471760337, "V_HarnessO_ghex_F"}, // 0.20%
			{9773.03598744464, "V_HarnessOGL_ghex_F"}, // 0.20%
			{9792.87725728591, "V_BandollierB_ghex_F"}, // 0.20%
			{9812.71852712718, "V_TacChestrig_cbr_F"}, // 0.20%
			{9832.55979696845, "V_TacVest_gen_F"}, // 0.20%
			{9847.33521068003, "srifle_DMR_05_tan_F"}, // 0.15%
			{9862.11062439162, "srifle_DMR_05_hex_F"}, // 0.15%
			{9876.8860381032, "srifle_DMR_05_blk_F"}, // 0.15%
			{9888.70636907247, "CUP_glaunch_M32"}, // 0.12%
			{9897.57161729942, "MMG_02_sand_F"}, // 0.09%
			{9906.43686552637, "MMG_02_camo_F"}, // 0.09%
			{9915.30211375332, "CUP_srifle_AS50"}, // 0.09%
			{9924.16736198027, "MMG_02_black_F"}, // 0.09%
			{9930.29481296066, "U_I_FullGhillie_lsh"}, // 0.06%
			{9936.42226394105, "U_B_FullGhillie_lsh"}, // 0.06%
			{9942.54971492144, "U_B_FullGhillie_sard"}, // 0.06%
			{9948.67716590183, "U_O_FullGhillie_ard"}, // 0.06%
			{9954.80461688223, "U_O_FullGhillie_lsh"}, // 0.06%
			{9960.93206786262, "U_O_FullGhillie_sard"}, // 0.06%
			{9967.05951884301, "U_I_FullGhillie_ard"}, // 0.06%
			{9973.1869698234, "U_I_FullGhillie_sard"}, // 0.06%
			{9979.31442080379, "U_B_FullGhillie_ard"}, // 0.06%
			{9985.22458628842, "MMG_01_tan_F"}, // 0.06%
			{9991.13475177306, "MMG_01_hex_F"}, // 0.06%
			{9995.56737588653, "CUP_launch_M136"}, // 0.04%
			{10000, "CUP_launch_RPG7V"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_srifle_M14
	  TRYK_U_B_PCUHsW2
	  U_B_GEN_Commander_F
	  CUP_arifle_Sa58RIS1
	  arifle_AKS_F
	  V_PlateCarrierGL_rgr
	  CUP_10Rnd_9x39_SP5_VSS_M
	  10Rnd_93x64_DMR_05_Mag
	  TRYK_U_B_Snowt
	  U_I_pilotCoveralls
	  arifle_MXM_Black_F
	  CUP_30Rnd_Sa58_M
	  CUP_10Rnd_127x99_M107
	  U_I_GhillieSuit
	  muzzle_snds_m_khk_F
	  optic_MRCO
	  CUP_srifle_M24_wdl
	  O_NVGoggles_urb_F
	  V_PlateCarrierIA2_dgtl
	  IEDLandSmall_Remote_Mag
	  V_PlateCarrierSpec_tna_F
	  arifle_SPAR_01_blk_F
	  U_B_GEN_Commander_F
	  DemoCharge_Remote_Mag
	  CUP_20Rnd_762x51_B_M110
	  optic_DMS
	  optic_MRCO
	  CUP_muzzle_snds_M110
	  TRYK_U_B_PCUHsW4
	  Rangefinder
	  IEDLandSmall_Remote_Mag
	  U_B_CTRG_Soldier_F
	  30Rnd_556x45_Stanag_green
	  U_B_CombatUniform_mcam
	  U_I_CombatUniform_tshirt
	  ItemCompass
	  arifle_MX_GL_khk_F
	  30Rnd_545x39_Mag_Green_F
	  TRYK_U_B_PCUHsW5
	  TRYK_H_Helmet_Winter
	  CUP_arifle_Mk17_STD_FG
	  optic_DMS
	  CUP_20Rnd_762x51_FNFAL_M
	  V_PlateCarrierH_CTRG
	  TRYK_U_B_PCUHsW4
	  optic_NVS
	  APERSBoundingMine_Range_Mag
	  CUP_optic_Elcan
	  V_PlateCarrierIA1_dgtl
	  optic_DMS
	  TRYK_H_Helmet_Winter_2
	  CUP_optic_ACOG
	  Exile_Magazine_30Rnd_545x39_AK_Green
	  U_B_CombatUniform_mcam_vest
	  srifle_DMR_02_F
	  TRYK_H_Helmet_Winter
	  CUP_srifle_Mk12SPR
	  APERSBoundingMine_Range_Mag
	  IEDLandSmall_Remote_Mag
	  CUP_20Rnd_762x51_B_SCAR
	  30Rnd_762x39_Mag_Tracer_F
	  ItemCompass
	  srifle_DMR_07_ghex_F
	  TRYK_B_Coyotebackpack_WH
	  TRYK_U_B_PCUHsW6
	  NVGoggles
	  optic_LRPS
	  NVGoggles_tna_F
	  Exile_Weapon_AK74
	  muzzle_snds_H
	  Exile_Weapon_CZ550
	  CUP_30Rnd_545x39_AK_M
	  CUP_srifle_M110
	  optic_KHS_blk
	  CUP_20Rnd_762x51_B_SCAR
	  CUP_optic_TrijiconRx01_desert
	  muzzle_snds_m_khk_F
	  Exile_Magazine_30Rnd_545x39_AK
	  CUP_arifle_Sa58RIS2_Arco_Laser
	  B_Carryall_ocamo
	  TRYK_B_Coyotebackpack_WH
	  U_B_SpecopsUniform_sgg
	  CUP_arifle_FNFAL
	  CUP_srifle_CZ750
	  arifle_MXC_khk_F
	  NVGoggles_tna_F
	  CUP_arifle_AK107
	  CUP_arifle_M4A1_camo_AIM_snds
	  U_B_CTRG_3
	  U_O_T_Soldier_F
	  NVGoggles_tna_F
	  CUP_20Rnd_TE1_Red_Tracer_762x51_M110
	  CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
	  30Rnd_556x45_Stanag_Tracer_Red
	  CUP_srifle_M110
	  TRYK_U_B_PCUHsW6
	  30Rnd_556x45_Stanag_red
	  TRYK_Winter_pack
	  30Rnd_65x39_caseless_green
	  30Rnd_545x39_Mag_Tracer_F
	*/
	class ChopperCrash
	{
		count = 426;
		half = 8002.24150075024;
		halfIndex = 213;
		sum = 9999.99999999999;
		items[] = 
		{
			{319.693094629156, "ItemCompass"}, // 3.20%
			{479.539641943734, "Rangefinder"}, // 1.60%
			{620.942356875861, "CUP_arifle_FNFAL"}, // 1.41%
			{731.236474522919, "DemoCharge_Remote_Mag"}, // 1.10%
			{825.504951144337, "CUP_srifle_M14"}, // 0.94%
			{919.773427765755, "CUP_arifle_Mk17_STD_EGLM"}, // 0.94%
			{1014.04190438717, "CUP_arifle_FNFAL_railed"}, // 0.94%
			{1105.95366909306, "CUP_optic_ACOG"}, // 0.92%
			{1190.79529805233, "TRYK_U_B_PCUHsW5"}, // 0.85%
			{1275.63692701161, "TRYK_B_Coyotebackpack_WH"}, // 0.85%
			{1360.47855597088, "TRYK_Winter_pack"}, // 0.85%
			{1445.32018493016, "TRYK_H_Helmet_Winter"}, // 0.85%
			{1530.16181388944, "TRYK_H_Helmet_Winter_2"}, // 0.85%
			{1615.00344284871, "TRYK_U_B_Snow_CombatUniform"}, // 0.85%
			{1699.84507180799, "TRYK_U_B_Snowt"}, // 0.85%
			{1784.68670076726, "TRYK_U_B_PCUHsW"}, // 0.85%
			{1869.52832972654, "TRYK_U_B_PCUHsW2"}, // 0.85%
			{1954.36995868582, "TRYK_U_B_PCUHsW3nh"}, // 0.85%
			{2039.21158764509, "TRYK_U_B_PCUHsW4"}, // 0.85%
			{2124.05321660437, "TRYK_V_ArmorVest_Winter"}, // 0.85%
			{2208.89484556364, "TRYK_U_B_PCUHsW6"}, // 0.85%
			{2284.30962686078, "CUP_arifle_Mk20"}, // 0.75%
			{2359.72440815791, "CUP_arifle_Mk17_STD_FG"}, // 0.75%
			{2433.25381992262, "SatchelCharge_Remote_Mag"}, // 0.74%
			{2505.34147851547, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.72%
			{2577.42913710832, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.72%
			{2649.51679570116, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.72%
			{2721.60445429401, "CUP_20Rnd_762x51_DMR"}, // 0.72%
			{2793.69211288686, "CUP_20Rnd_762x51_B_SCAR"}, // 0.72%
			{2865.77977147971, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.72%
			{2937.86743007256, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.72%
			{3003.85536370755, "CUP_srifle_M110"}, // 0.66%
			{3065.12987351148, "CUP_muzzle_snds_M14"}, // 0.61%
			{3126.4043833154, "muzzle_snds_B"}, // 0.61%
			{3187.67889311932, "optic_SOS"}, // 0.61%
			{3248.95340292324, "CUP_optic_SB_11_4x20_PM"}, // 0.61%
			{3310.22791272716, "optic_DMS"}, // 0.61%
			{3371.50242253108, "CUP_optic_LeupoldM3LR"}, // 0.61%
			{3432.77693233501, "optic_KHS_blk"}, // 0.61%
			{3494.05144213893, "optic_LRPS"}, // 0.61%
			{3555.32595194285, "optic_KHS_hex"}, // 0.61%
			{3616.60046174677, "optic_AMS"}, // 0.61%
			{3674.27058862105, "CUP_20Rnd_762x51_L129_M"}, // 0.58%
			{3731.94071549533, "CUP_20Rnd_762x51_B_M110"}, // 0.58%
			{3789.61084236961, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.58%
			{3847.28096924389, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.58%
			{3898.43186438455, "O_NVGoggles_hex_F"}, // 0.51%
			{3949.58275952522, "O_NVGoggles_ghex_F"}, // 0.51%
			{4000.73365466588, "NVGoggles_tna_F"}, // 0.51%
			{4051.88454980655, "NVGoggles"}, // 0.51%
			{4103.03544494721, "O_NVGoggles_urb_F"}, // 0.51%
			{4150.16968325792, "CUP_srifle_L129A1_HG"}, // 0.47%
			{4197.30392156863, "CUP_srifle_L129A1"}, // 0.47%
			{4244.18509014344, "B_Carryall_ghex_F"}, // 0.47%
			{4291.06625871825, "B_Carryall_cbr"}, // 0.47%
			{4335.47999736808, "B_Carryall_khk"}, // 0.44%
			{4379.8937360179, "B_Carryall_oli"}, // 0.44%
			{4416.90518489275, "B_Carryall_mcamo"}, // 0.37%
			{4453.9166337676, "B_Carryall_oucamo"}, // 0.37%
			{4490.92808264246, "B_Carryall_ocamo"}, // 0.37%
			{4527.69278852481, "V_PlateCarrierIA1_dgtl"}, // 0.37%
			{4564.45749440716, "V_PlateCarrierSpec_rgr"}, // 0.37%
			{4601.22220028952, "U_O_GhillieSuit"}, // 0.37%
			{4637.98690617187, "V_PlateCarrier1_blk"}, // 0.37%
			{4674.75161205422, "V_PlateCarrier1_rgr"}, // 0.37%
			{4711.51631793657, "V_PlateCarrier2_rgr"}, // 0.37%
			{4748.28102381893, "V_PlateCarrier3_rgr"}, // 0.37%
			{4785.04572970128, "V_PlateCarrierIAGL_dgtl"}, // 0.37%
			{4821.81043558363, "V_PlateCarrierIA2_dgtl"}, // 0.37%
			{4858.57514146599, "U_B_GhillieSuit"}, // 0.37%
			{4895.33984734834, "V_PlateCarrierGL_rgr"}, // 0.37%
			{4932.10455323069, "U_I_GhillieSuit"}, // 0.37%
			{4968.86925911305, "APERSMine_Range_Mag"}, // 0.37%
			{5005.6339649954, "APERSTripMine_Wire_Mag"}, // 0.37%
			{5042.39867087775, "APERSBoundingMine_Range_Mag"}, // 0.37%
			{5079.16337676011, "IEDLandSmall_Remote_Mag"}, // 0.37%
			{5115.92808264246, "IEDUrbanSmall_Remote_Mag"}, // 0.37%
			{5146.56533754442, "CUP_muzzle_snds_M110"}, // 0.31%
			{5175.48139835076, "20Rnd_650x39_Cased_Mag_F"}, // 0.29%
			{5204.28956340783, "acc_flashlight"}, // 0.29%
			{5231.82866893768, "CUP_srifle_SVD_des"}, // 0.28%
			{5259.36777446754, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.28%
			{5286.90687999739, "CUP_5Rnd_762x51_M24"}, // 0.28%
			{5314.44598552724, "CUP_10Rnd_762x54_SVD_M"}, // 0.28%
			{5341.11468409475, "srifle_EBR_F"}, // 0.27%
			{5367.78338266226, "srifle_DMR_01_F"}, // 0.27%
			{5394.24550301904, "30Rnd_65x39_caseless_green"}, // 0.26%
			{5420.70762337582, "30Rnd_556x45_Stanag_red"}, // 0.26%
			{5447.1697437326, "30Rnd_556x45_Stanag_green"}, // 0.26%
			{5473.63186408938, "30Rnd_556x45_Stanag"}, // 0.26%
			{5499.79401434274, "20Rnd_762x51_Mag"}, // 0.26%
			{5524.57920931961, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.25%
			{5549.34300084658, "CUP_srifle_SVD"}, // 0.25%
			{5573.53030734813, "U_B_CTRG_Soldier_urb_1_F"}, // 0.24%
			{5597.71761384968, "U_B_CTRG_Soldier_2_F"}, // 0.24%
			{5621.90492035123, "U_B_CTRG_Soldier_urb_2_F"}, // 0.24%
			{5646.09222685277, "U_B_CTRG_Soldier_urb_3_F"}, // 0.24%
			{5670.27953335432, "U_B_GEN_Soldier_F"}, // 0.24%
			{5694.46683985587, "U_B_CTRG_Soldier_F"}, // 0.24%
			{5718.65414635742, "U_B_CTRG_Soldier_3_F"}, // 0.24%
			{5742.84145285897, "U_B_GEN_Commander_F"}, // 0.24%
			{5767.02875936051, "U_B_CombatUniform_mcam_tshirt"}, // 0.24%
			{5791.21606586206, "U_O_T_Officer_F"}, // 0.24%
			{5815.40337236361, "U_B_CombatUniform_mcam_worn"}, // 0.24%
			{5839.59067886516, "U_B_CombatUniform_mcam"}, // 0.24%
			{5863.77798536671, "U_B_CombatUniform_mcam_vest"}, // 0.24%
			{5887.96529186825, "U_B_T_Soldier_SL_F"}, // 0.24%
			{5912.1525983698, "U_B_CTRG_1"}, // 0.24%
			{5936.33990487135, "U_B_CTRG_2"}, // 0.24%
			{5960.5272113729, "U_B_CTRG_3"}, // 0.24%
			{5984.71451787445, "U_O_T_Soldier_F"}, // 0.24%
			{6008.90182437599, "U_B_T_Soldier_AR_F"}, // 0.24%
			{6032.7131623827, "CUP_srifle_M24_wdl"}, // 0.24%
			{6056.5245003894, "CUP_srifle_M24_des"}, // 0.24%
			{6080.33583839611, "CUP_srifle_M40A3"}, // 0.24%
			{6103.74407809648, "10Rnd_762x54_Mag"}, // 0.23%
			{6126.79590332819, "CUP_srifle_Mk12SPR"}, // 0.23%
			{6148.82718775207, "CUP_5Rnd_762x67_G22"}, // 0.22%
			{6170.10579565825, "Exile_Weapon_LeeEnfield"}, // 0.21%
			{6191.38440356444, "CUP_arifle_AK74"}, // 0.21%
			{6212.03873271183, "CUP_10Rnd_762x51_CZ750"}, // 0.21%
			{6232.69306185922, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.21%
			{6253.27032261426, "CUP_muzzle_Bizon"}, // 0.21%
			{6273.84758336931, "optic_DMS"}, // 0.21%
			{6294.42484412436, "optic_DMS_ghex_F"}, // 0.21%
			{6315.00210487941, "optic_ERCO_blk_F"}, // 0.21%
			{6335.57936563445, "optic_ERCO_khk_F"}, // 0.21%
			{6356.1566263895, "optic_ERCO_snd_F"}, // 0.21%
			{6376.73388714455, "CUP_optic_ACOG"}, // 0.21%
			{6397.3111478996, "CUP_optic_PSO_3"}, // 0.21%
			{6417.88840865465, "CUP_optic_CompM4"}, // 0.21%
			{6438.46566940969, "CUP_optic_RCO"}, // 0.21%
			{6459.04293016474, "optic_MRCO"}, // 0.21%
			{6479.62019091979, "CUP_optic_AN_PVS_4"}, // 0.21%
			{6500.19745167484, "CUP_optic_SB_11_4x20_PM"}, // 0.21%
			{6520.77471242989, "CUP_optic_HoloDesert"}, // 0.21%
			{6541.35197318493, "CUP_optic_HoloBlack"}, // 0.21%
			{6561.92923393998, "CUP_optic_PechenegScope"}, // 0.21%
			{6582.50649469503, "CUP_muzzle_PBS4"}, // 0.21%
			{6603.08375545008, "CUP_muzzle_PB6P9"}, // 0.21%
			{6623.66101620513, "CUP_optic_Kobra"}, // 0.21%
			{6644.23827696017, "CUP_optic_TrijiconRx01_desert"}, // 0.21%
			{6664.81553771522, "acc_pointer_IR"}, // 0.21%
			{6685.39279847027, "optic_Holosight_blk_F"}, // 0.21%
			{6705.97005922532, "muzzle_snds_M"}, // 0.21%
			{6726.54731998037, "muzzle_snds_H"}, // 0.21%
			{6747.12458073541, "muzzle_snds_H_khk_F"}, // 0.21%
			{6767.70184149046, "muzzle_snds_H_snd_F"}, // 0.21%
			{6788.27910224551, "muzzle_snds_58_blk_F"}, // 0.21%
			{6808.85636300056, "muzzle_snds_m_khk_F"}, // 0.21%
			{6829.43362375561, "muzzle_snds_m_snd_F"}, // 0.21%
			{6850.01088451065, "muzzle_snds_58_wdm_F"}, // 0.21%
			{6870.5881452657, "muzzle_snds_65_TI_blk_F"}, // 0.21%
			{6891.16540602075, "muzzle_snds_65_TI_hex_F"}, // 0.21%
			{6911.7426667758, "muzzle_snds_65_TI_ghex_F"}, // 0.21%
			{6932.31992753085, "muzzle_snds_H_MG_blk_F"}, // 0.21%
			{6952.89718828589, "muzzle_snds_H_MG_khk_F"}, // 0.21%
			{6973.47444904094, "optic_Arco"}, // 0.21%
			{6994.05170979599, "optic_Arco_blk_F"}, // 0.21%
			{7014.62897055104, "optic_Arco_ghex_F"}, // 0.21%
			{7035.20623130609, "optic_Hamr"}, // 0.21%
			{7055.78349206113, "optic_Hamr_khk_F"}, // 0.21%
			{7076.36075281618, "optic_Holosight"}, // 0.21%
			{7096.93801357123, "optic_Holosight_khk_F"}, // 0.21%
			{7117.51527432628, "CUP_optic_PSO_1"}, // 0.21%
			{7138.09253508133, "CUP_optic_SUSAT"}, // 0.21%
			{7158.66979583637, "CUP_optic_CompM2_Desert"}, // 0.21%
			{7179.24705659142, "CUP_optic_CompM2_Black"}, // 0.21%
			{7199.82431734647, "CUP_muzzle_snds_XM8"}, // 0.21%
			{7219.22987227478, "20Rnd_556x45_UW_mag"}, // 0.19%
			{7238.57971747601, "U_I_pilotCoveralls"}, // 0.19%
			{7257.92956267725, "U_I_HeliPilotCoveralls"}, // 0.19%
			{7277.27940787849, "U_B_PilotCoveralls"}, // 0.19%
			{7296.62925307973, "U_B_HeliPilotCoveralls"}, // 0.19%
			{7315.97909828097, "U_O_PilotCoveralls"}, // 0.19%
			{7335.3289434822, "U_I_CombatUniform_tshirt"}, // 0.19%
			{7354.67878868344, "U_I_CombatUniform"}, // 0.19%
			{7374.02863388468, "U_I_CombatUniform_shortsleeve"}, // 0.19%
			{7393.07770429005, "srifle_DMR_06_olive_F"}, // 0.19%
			{7412.12677469541, "srifle_DMR_06_camo_F"}, // 0.19%
			{7431.17584510077, "CUP_srifle_VSSVintorez"}, // 0.19%
			{7450.22491550614, "srifle_DMR_03_tan_F"}, // 0.19%
			{7469.2739859115, "srifle_DMR_03_khaki_F"}, // 0.19%
			{7488.32305631687, "srifle_DMR_03_F"}, // 0.19%
			{7507.37212672223, "srifle_DMR_03_woodland_F"}, // 0.19%
			{7525.75447966341, "V_PlateCarrierL_CTRG"}, // 0.18%
			{7544.13683260459, "V_PlateCarrierH_CTRG"}, // 0.18%
			{7562.03725119899, "CUP_5Rnd_86x70_L115A1"}, // 0.18%
			{7579.76942445414, "Exile_Weapon_AK74"}, // 0.18%
			{7597.5015977093, "Exile_Weapon_AK47"}, // 0.18%
			{7615.23377096445, "Exile_Weapon_AK107_GL"}, // 0.18%
			{7632.96594421961, "CUP_arifle_CZ805_A1"}, // 0.18%
			{7650.69811747476, "Exile_Weapon_AK107"}, // 0.18%
			{7668.43029072992, "Exile_Weapon_CZ550"}, // 0.18%
			{7686.16246398507, "CUP_arifle_Mk16_STD_EGLM"}, // 0.18%
			{7703.89463724023, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.18%
			{7721.62681049538, "CUP_arifle_AK74M"}, // 0.18%
			{7739.35898375054, "CUP_arifle_AK107"}, // 0.18%
			{7757.09115700569, "Exile_Weapon_AK74_GL"}, // 0.18%
			{7774.82333026084, "CUP_arifle_Sa58P"}, // 0.18%
			{7792.555503516, "CUP_arifle_CZ805_B"}, // 0.18%
			{7809.01731212004, "CUP_optic_Elcan"}, // 0.16%
			{7825.47912072408, "CUP_muzzle_snds_L85"}, // 0.16%
			{7841.94092932811, "CUP_muzzle_snds_G36_black"}, // 0.16%
			{7858.40273793215, "CUP_muzzle_snds_Mk12"}, // 0.16%
			{7874.59444777671, "srifle_DMR_07_hex_F"}, // 0.16%
			{7890.78615762127, "srifle_DMR_07_ghex_F"}, // 0.16%
			{7906.97786746583, "srifle_DMR_07_blk_F"}, // 0.16%
			{7922.8551396799, "30Rnd_545x39_Mag_F"}, // 0.16%
			{7938.73241189397, "30Rnd_545x39_Mag_Tracer_F"}, // 0.16%
			{7954.60968410803, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.16%
			{7970.4869563221, "30Rnd_545x39_Mag_Green_F"}, // 0.16%
			{7986.36422853617, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.16%
			{8002.24150075024, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.16%
			{8018.11877296431, "CUP_30Rnd_556x45_G36"}, // 0.16%
			{8033.99604517838, "100Rnd_580x42_Mag_F"}, // 0.16%
			{8049.87331739244, "100Rnd_580x42_Mag_Tracer_F"}, // 0.16%
			{8065.75058960651, "150Rnd_556x45_Drum_Mag_F"}, // 0.16%
			{8081.62786182058, "CUP_30Rnd_545x39_AK_M"}, // 0.16%
			{8097.50513403465, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.16%
			{8113.38240624872, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.16%
			{8129.25967846279, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.16%
			{8145.13695067686, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.16%
			{8161.01422289092, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.16%
			{8176.89149510499, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.16%
			{8192.76876731906, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.16%
			{8208.64603953313, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.16%
			{8224.52331174719, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.16%
			{8240.40058396126, "30Rnd_65x39_caseless_mag"}, // 0.16%
			{8256.27785617533, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.16%
			{8272.1551283894, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.16%
			{8288.03240060346, "30Rnd_580x42_Mag_F"}, // 0.16%
			{8303.90967281753, "CUP_30Rnd_556x45_Stanag"}, // 0.16%
			{8319.7869450316, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.16%
			{8335.66421724567, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.16%
			{8351.54148945973, "Exile_Magazine_5Rnd_22LR"}, // 0.16%
			{8367.4187616738, "Exile_Magazine_10Rnd_762x54"}, // 0.16%
			{8383.29603388787, "Exile_Magazine_10Rnd_9x39"}, // 0.16%
			{8399.17330610194, "30Rnd_580x42_Mag_Tracer_F"}, // 0.16%
			{8415.050578316, "Exile_Magazine_20Rnd_9x39"}, // 0.16%
			{8430.92785053007, "30Rnd_762x39_Mag_F"}, // 0.16%
			{8446.80512274414, "30Rnd_762x39_Mag_Green_F"}, // 0.16%
			{8462.68239495821, "30Rnd_762x39_Mag_Tracer_F"}, // 0.16%
			{8478.55966717227, "30Rnd_762x39_AK47_M"}, // 0.16%
			{8494.43693938634, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.16%
			{8510.31421160041, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.16%
			{8526.19148381448, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.16%
			{8542.06875602854, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.16%
			{8557.94602824261, "20Rnd_762x51_Mag"}, // 0.16%
			{8573.82330045668, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.16%
			{8588.62788000662, "B_Bergen_dgtl_F"}, // 0.15%
			{8603.43245955656, "B_Bergen_Base_F"}, // 0.15%
			{8618.2370391065, "B_Bergen_mcamo_F"}, // 0.15%
			{8633.04161865644, "B_Bergen_tna_F"}, // 0.15%
			{8647.84619820638, "B_Bergen_hex_F"}, // 0.15%
			{8662.35858210731, "U_B_SpecopsUniform_sgg"}, // 0.15%
			{8676.64538491133, "CUP_srifle_CZ750"}, // 0.14%
			{8690.83112351545, "arifle_MX_khk_F"}, // 0.14%
			{8705.01686211958, "CUP_arifle_CZ805_GL"}, // 0.14%
			{8719.2026007237, "arifle_MX_F"}, // 0.14%
			{8733.38833932782, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.14%
			{8747.57407793195, "CUP_arifle_Sa58RIS2_gl"}, // 0.14%
			{8761.75981653607, "CUP_arifle_Sa58RIS1"}, // 0.14%
			{8775.94555514019, "arifle_MX_GL_khk_F"}, // 0.14%
			{8790.13129374431, "CUP_arifle_AKM"}, // 0.14%
			{8804.31703234844, "CUP_arifle_Mk16_CQC_FG"}, // 0.14%
			{8818.50277095256, "CUP_arifle_AK107_kobra"}, // 0.14%
			{8832.68850955668, "CUP_arifle_XM8_Railed"}, // 0.14%
			{8846.87424816081, "CUP_arifle_AK107_GL"}, // 0.14%
			{8861.05998676493, "arifle_MXC_khk_F"}, // 0.14%
			{8875.17311762188, "CUP_30Rnd_Sa58_M"}, // 0.14%
			{8889.28624847883, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.14%
			{8903.39937933578, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.14%
			{8917.51251019273, "Exile_Magazine_10Rnd_303"}, // 0.14%
			{8931.62564104968, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.14%
			{8945.3951938146, "7Rnd_408_Mag"}, // 0.14%
			{8959.16474657953, "5Rnd_127x108_Mag"}, // 0.14%
			{8971.57726785814, "CUP_arifle_M16A2"}, // 0.12%
			{8983.98978913674, "arifle_MXC_F"}, // 0.12%
			{8996.40231041535, "CUP_arifle_M4A1"}, // 0.12%
			{9008.81483169396, "CUP_arifle_Sa58RIS2_camo"}, // 0.12%
			{9021.22735297257, "CUP_arifle_Sa58P_des"}, // 0.12%
			{9033.63987425117, "CUP_arifle_M4A1_camo"}, // 0.12%
			{9046.05239552978, "CUP_arifle_Mk16_CQC"}, // 0.12%
			{9058.46491680839, "CUP_arifle_AK47"}, // 0.12%
			{9070.877438087, "arifle_AKS_F"}, // 0.12%
			{9083.25933385048, "CUP_srifle_G22_des"}, // 0.12%
			{9095.60832335031, "CUP_30Rnd_762x39_AK47_M"}, // 0.12%
			{9107.95731285015, "CUP_20Rnd_556x45_Stanag"}, // 0.12%
			{9120.30630234998, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.12%
			{9131.32194456192, "5Rnd_127x108_APDS_Mag"}, // 0.11%
			{9141.96124851501, "Exile_Weapon_VSSVintorez"}, // 0.11%
			{9152.6005524681, "Exile_Weapon_SVD"}, // 0.11%
			{9163.23985642119, "Exile_Weapon_SVDCamo"}, // 0.11%
			{9173.87916037429, "arifle_MXM_F"}, // 0.11%
			{9184.51846432738, "CUP_arifle_M4A3_desert"}, // 0.11%
			{9195.10331247009, "CUP_100Rnd_556x45_BetaCMag"}, // 0.11%
			{9205.39194284762, "optic_NVS"}, // 0.10%
			{9215.68057322514, "CUP_acc_ANPEQ_2_grey"}, // 0.10%
			{9225.96920360267, "CUP_acc_ANPEQ_2_desert"}, // 0.10%
			{9236.25783398019, "CUP_acc_ANPEQ_2_camo"}, // 0.10%
			{9245.93275658081, "U_O_V_Soldier_Viper_F"}, // 0.10%
			{9255.60767918143, "U_O_SpecopsUniform_blk"}, // 0.10%
			{9265.28260178205, "U_I_OfficerUniform"}, // 0.10%
			{9274.95752438267, "U_B_Wetsuit"}, // 0.10%
			{9284.63244698329, "U_O_Wetsuit"}, // 0.10%
			{9294.30736958391, "U_I_Wetsuit"}, // 0.10%
			{9303.98229218453, "U_O_CombatUniform_ocamo"}, // 0.10%
			{9313.65721478515, "U_O_CombatUniform_oucamo"}, // 0.10%
			{9323.33213738577, "U_O_V_Soldier_Viper_hex_F"}, // 0.10%
			{9333.00705998639, "U_O_OfficerUniform_ocamo"}, // 0.10%
			{9342.68198258701, "U_O_SpecopsUniform_ocamo"}, // 0.10%
			{9351.54806921458, "arifle_CTARS_blk_F"}, // 0.09%
			{9360.41415584216, "CUP_arifle_AKS_Gold"}, // 0.09%
			{9369.28024246974, "arifle_SPAR_01_GL_blk_F"}, // 0.09%
			{9378.14632909731, "arifle_SPAR_01_snd_F"}, // 0.09%
			{9387.01241572489, "arifle_SPAR_01_blk_F"}, // 0.09%
			{9395.87850235247, "arifle_CTARS_hex_F"}, // 0.09%
			{9404.74458898004, "arifle_CTARS_ghex_F"}, // 0.09%
			{9413.61067560762, "arifle_CTAR_GL_blk_F"}, // 0.09%
			{9422.4767622352, "arifle_CTAR_ghex_F"}, // 0.09%
			{9431.34284886277, "arifle_CTAR_hex_F"}, // 0.09%
			{9440.20893549035, "arifle_CTAR_blk_F"}, // 0.09%
			{9449.07502211793, "arifle_ARX_hex_F"}, // 0.09%
			{9457.9411087455, "arifle_ARX_ghex_F"}, // 0.09%
			{9466.80719537308, "arifle_ARX_blk_F"}, // 0.09%
			{9475.67328200066, "arifle_AKM_FL_F"}, // 0.09%
			{9484.53936862824, "arifle_AKM_F"}, // 0.09%
			{9493.40545525581, "arifle_AK12_GL_F"}, // 0.09%
			{9502.27154188339, "arifle_AK12_F"}, // 0.09%
			{9511.13762851097, "Exile_Weapon_DMR"}, // 0.09%
			{9520.00371513854, "arifle_SPAR_01_GL_khk_F"}, // 0.09%
			{9528.86980176612, "arifle_SPAR_01_GL_snd_F"}, // 0.09%
			{9537.7358883937, "arifle_SPAR_01_khk_F"}, // 0.09%
			{9546.60197502127, "arifle_SPAR_02_khk_F"}, // 0.09%
			{9555.46806164885, "CUP_arifle_Mk16_SV"}, // 0.09%
			{9564.33414827643, "CUP_arifle_AK107_GL_pso"}, // 0.09%
			{9573.200234904, "CUP_arifle_AKS74U"}, // 0.09%
			{9582.06632153158, "CUP_arifle_AK74_GL"}, // 0.09%
			{9590.93240815916, "arifle_SPAR_02_blk_F"}, // 0.09%
			{9599.79849478673, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.09%
			{9608.66458141431, "CUP_arifle_G36C"}, // 0.09%
			{9617.53066804189, "CUP_arifle_G36A"}, // 0.09%
			{9626.39675466946, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.09%
			{9635.26284129704, "CUP_arifle_L85A2_NG"}, // 0.09%
			{9644.12892792462, "CUP_arifle_L86A2"}, // 0.09%
			{9652.99501455219, "arifle_SPAR_03_snd_F"}, // 0.09%
			{9661.86110117977, "arifle_SPAR_03_khk_F"}, // 0.09%
			{9670.72718780735, "arifle_SPAR_03_blk_F"}, // 0.09%
			{9679.59327443492, "CUP_arifle_L85A2_GL"}, // 0.09%
			{9688.4593610625, "arifle_SPAR_02_snd_F"}, // 0.09%
			{9697.28006784809, "10Rnd_50BW_Mag_F"}, // 0.09%
			{9704.37293715016, "CUP_arifle_G36C_camo_holo_snds"}, // 0.07%
			{9711.46580645222, "arifle_TRG21_GL_F"}, // 0.07%
			{9718.55867575428, "CUP_arifle_AK107_GL_kobra"}, // 0.07%
			{9725.65154505634, "arifle_MXM_Black_F"}, // 0.07%
			{9732.7444143584, "arifle_MX_GL_F"}, // 0.07%
			{9739.83728366046, "arifle_Katiba_GL_F"}, // 0.07%
			{9746.93015296252, "arifle_Mk20_GL_F"}, // 0.07%
			{9753.81492934499, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.07%
			{9760.69970572745, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.07%
			{9767.58448210991, "CUP_5Rnd_127x99_as50_M"}, // 0.07%
			{9774.46925849238, "CUP_10Rnd_127x99_M107"}, // 0.07%
			{9779.78891046892, "arifle_TRG21_F"}, // 0.05%
			{9785.10856244547, "arifle_Katiba_F"}, // 0.05%
			{9790.42821442202, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.05%
			{9795.74786639856, "arifle_MXM_khk_F"}, // 0.05%
			{9801.06751837511, "arifle_TRG20_F"}, // 0.05%
			{9806.38717035165, "Exile_Weapon_AKS_Gold"}, // 0.05%
			{9811.7068223282, "arifle_MX_GL_Black_F"}, // 0.05%
			{9817.02647430475, "arifle_Mk20_F"}, // 0.05%
			{9822.34612628129, "arifle_Mk20C_F"}, // 0.05%
			{9827.66577825784, "arifle_MXC_Black_F"}, // 0.05%
			{9832.98543023438, "arifle_MX_Black_F"}, // 0.05%
			{9838.20028213259, "srifle_GM6_F"}, // 0.05%
			{9842.96254973393, "CUP_srifle_AWM_des"}, // 0.05%
			{9847.72481733527, "CUP_srifle_AWM_wdl"}, // 0.05%
			{9852.13658204116, "10Rnd_93x64_DMR_05_Mag"}, // 0.04%
			{9856.54834674704, "CUP_6Rnd_HE_M203"}, // 0.04%
			{9860.67921257652, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.04%
			{9864.59035150017, "CUP_srifle_M107_Base"}, // 0.04%
			{9868.50149042383, "srifle_DMR_02_F"}, // 0.04%
			{9872.41262934748, "srifle_DMR_02_camo_F"}, // 0.04%
			{9876.08909993572, "CUP_5Rnd_127x99_as50_M"}, // 0.04%
			{9879.76557052396, "150Rnd_93x64_Mag"}, // 0.04%
			{9883.44204111219, "5Rnd_127x108_APDS_Mag"}, // 0.04%
			{9887.11851170043, "5Rnd_127x108_Mag"}, // 0.04%
			{9890.79498228866, "10Rnd_338_Mag"}, // 0.04%
			{9894.4714528769, "130Rnd_338_Mag"}, // 0.04%
			{9898.01788752793, "arifle_SDAR_F"}, // 0.04%
			{9901.51928808816, "V_PlateCarrierGL_blk"}, // 0.04%
			{9905.02068864838, "V_PlateCarrier2_rgr_noflag_F"}, // 0.04%
			{9908.5220892086, "V_PlateCarrier1_rgr_noflag_F"}, // 0.04%
			{9912.02348976883, "V_TacVest_gen_F"}, // 0.04%
			{9915.52489032905, "V_BandollierB_ghex_F"}, // 0.04%
			{9919.02629088928, "V_HarnessOGL_ghex_F"}, // 0.04%
			{9922.5276914495, "V_PlateCarrierGL_mtp"}, // 0.04%
			{9926.02909200973, "V_PlateCarrierGL_tna_F"}, // 0.04%
			{9929.53049256995, "V_PlateCarrierSpec_tna_F"}, // 0.04%
			{9933.03189313017, "V_PlateCarrier2_tna_F"}, // 0.04%
			{9936.5332936904, "V_PlateCarrier1_tna_F"}, // 0.04%
			{9940.03469425062, "V_HarnessO_ghex_F"}, // 0.04%
			{9943.53609481085, "V_PlateCarrierSpec_blk"}, // 0.04%
			{9947.03749537107, "V_PlateCarrierGL_rgr"}, // 0.04%
			{9950.5388959313, "V_TacChestrig_oli_F"}, // 0.04%
			{9954.04029649152, "V_TacChestrig_grn_F"}, // 0.04%
			{9957.54169705174, "V_PlateCarrierSpec_rgr"}, // 0.04%
			{9961.04309761197, "V_PlateCarrierIAGL_dgtl"}, // 0.04%
			{9964.54449817219, "V_PlateCarrierSpec_mtp"}, // 0.04%
			{9968.04589873242, "V_PlateCarrierIAGL_oli"}, // 0.04%
			{9971.54729929264, "V_TacChestrig_cbr_F"}, // 0.04%
			{9974.48847576323, "CUP_OG7_M"}, // 0.03%
			{9977.42965223382, "CUP_M136_M"}, // 0.03%
			{9980.1835627868, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.03%
			{9982.7909887359, "srifle_DMR_05_blk_F"}, // 0.03%
			{9985.39841468501, "srifle_DMR_05_tan_F"}, // 0.03%
			{9988.00584063411, "srifle_DMR_05_hex_F"}, // 0.03%
			{9990.09178139339, "CUP_glaunch_M32"}, // 0.02%
			{9991.65623696285, "CUP_srifle_AS50"}, // 0.02%
			{9993.22069253232, "MMG_02_sand_F"}, // 0.02%
			{9994.78514810178, "MMG_02_camo_F"}, // 0.02%
			{9996.34960367124, "MMG_02_black_F"}, // 0.02%
			{9997.39257405088, "MMG_01_tan_F"}, // 0.01%
			{9998.43554443052, "MMG_01_hex_F"}, // 0.01%
			{9999.21777221525, "CUP_launch_M136"}, // 0.01%
			{9999.99999999999, "CUP_launch_RPG7V"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_ToiletPaper
	  Exile_Weapon_M1014
	  Exile_Item_Bandage
	  CUP_hgun_MicroUzi
	  H_Hat_grey
	  30Rnd_9x21_Mag
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_Dogfood
	  CUP_sgun_Saiga12K
	  hgun_P07_khk_F
	  Exile_Item_Raisins
	  Exile_Item_ZipTie
	  Exile_Item_CockONut
	  30Rnd_9x21_Mag
	  hgun_Pistol_heavy_02_F
	  Exile_Item_Carwheel
	  CUP_30Rnd_9x19_UZI
	  ItemCompass
	  hgun_Rook40_F
	  10Rnd_9x21_Mag
	  Exile_Item_Surstromming
	  6Rnd_GreenSignal_F
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  ItemMap
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Magazine_8Rnd_9x18
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  10Rnd_9x21_Mag
	  Exile_Item_Bandage
	  11Rnd_45ACP_Mag
	  CUP_hgun_Phantom
	  CUP_hgun_Duty_M3X
	  Exile_Item_Can_Empty
	  CUP_hgun_MicroUzi
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  CUP_sgun_Saiga12K
	  Exile_Weapon_LeeEnfield
	  Exile_Magazine_10Rnd_303
	  Exile_Magazine_8Rnd_74Slug
	  SmokeShell
	  Exile_Weapon_M1014
	  H_Cap_tan
	  10Rnd_9x21_Mag
	  FlareRed_F
	  Exile_Item_Magazine03
	  Exile_Magazine_10Rnd_303
	  CUP_sgun_Saiga12K
	  Exile_Item_PlasticBottleEmpty
	  FlareYellow_F
	  Exile_Item_ExtensionCord
	  Exile_Item_CatFood
	  CUP_sgun_Saiga12K
	  CUP_20Rnd_B_765x17_Ball_M
	  10Rnd_9x21_Mag
	  10Rnd_9x21_Mag
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  ItemRadio
	  Exile_Item_Can_Empty
	  Chemlight_red
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_LeeEnfield
	  ItemCompass
	  Exile_Magazine_5Rnd_22LR
	  Binocular
	  SmokeShellPurple
	  hgun_Pistol_Signal_F
	  FlareWhite_F
	  SmokeShellYellow
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Magazine_5Rnd_22LR
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  hgun_Pistol_heavy_01_F
	  hgun_Pistol_heavy_02_F
	  SmokeShellOrange
	  Exile_Item_EnergyDrink
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ChocolateMilk
	  Exile_Item_ToiletPaper
	  16Rnd_9x21_Mag
	  Exile_Melee_Axe
	  Binocular
	  Chemlight_green
	  H_Cap_grn
	  CUP_18Rnd_9x19_Phantom
	  CUP_18Rnd_9x19_Phantom
	  Binocular
	  Exile_Weapon_CZ550
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_OilCanister
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Weapon_LeeEnfield
	  11Rnd_45ACP_Mag
	  Exile_Item_PlasticBottleEmpty
	  11Rnd_45ACP_Mag
	  Chemlight_yellow
	*/
	class BarnLoot
	{
		count = 131;
		half = 8002.68879208131;
		halfIndex = 65;
		sum = 10000;
		items[] = 
		{
			{441.176470588235, "Exile_Item_Can_Empty"}, // 4.41%
			{882.352941176471, "Exile_Item_ToiletPaper"}, // 4.41%
			{1323.52941176471, "Exile_Item_PlasticBottleEmpty"}, // 4.41%
			{1676.47058823529, "CUP_sgun_Saiga12K"}, // 3.53%
			{2029.41176470588, "Exile_Weapon_M1014"}, // 3.53%
			{2382.35294117647, "Exile_Weapon_LeeEnfield"}, // 3.53%
			{2617.64705882353, "Exile_Magazine_8Rnd_74Slug"}, // 2.35%
			{2852.94117647059, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 2.35%
			{3088.23529411765, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 2.35%
			{3323.52941176471, "Exile_Magazine_10Rnd_303"}, // 2.35%
			{3558.82352941177, "Exile_Magazine_5Rnd_22LR"}, // 2.35%
			{3690.79939668175, "ItemMap"}, // 1.32%
			{3808.44645550528, "Exile_Weapon_CZ550"}, // 1.18%
			{3921.56862745098, "ItemWatch"}, // 1.13%
			{4034.69079939668, "Binocular"}, // 1.13%
			{4147.81297134238, "ItemCompass"}, // 1.13%
			{4258.10708898944, "Exile_Item_Magazine04"}, // 1.10%
			{4368.4012066365, "Exile_Item_Magazine02"}, // 1.10%
			{4478.69532428356, "Exile_Item_Magazine01"}, // 1.10%
			{4588.98944193062, "Exile_Item_Magazine03"}, // 1.10%
			{4692.36133462075, "hgun_P07_F"}, // 1.03%
			{4790.8107562304, "hgun_ACPC2_F"}, // 0.98%
			{4889.26017784004, "hgun_Rook40_F"}, // 0.98%
			{4984.90819314373, "30Rnd_9x21_Mag"}, // 0.96%
			{5080.55620844741, "10Rnd_9x21_Mag"}, // 0.96%
			{5176.20422375109, "Exile_Magazine_8Rnd_9x18"}, // 0.96%
			{5271.85223905478, "Exile_Magazine_7Rnd_45ACP"}, // 0.96%
			{5367.50025435846, "9Rnd_45ACP_Mag"}, // 0.96%
			{5463.14826966214, "11Rnd_45ACP_Mag"}, // 0.96%
			{5558.79628496582, "Exile_Magazine_6Rnd_45ACP"}, // 0.96%
			{5653.06476158724, "Exile_Item_Heatpack"}, // 0.94%
			{5747.33323820866, "Exile_Item_Bandage"}, // 0.94%
			{5835.93771765734, "CUP_hgun_Phantom"}, // 0.89%
			{5922.66471614905, "Exile_Item_ExtensionCord"}, // 0.87%
			{6008.74792992236, "CUP_18Rnd_9x19_Phantom"}, // 0.86%
			{6094.83114369568, "CUP_30Rnd_9x19_UZI"}, // 0.86%
			{6180.91435746899, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.86%
			{6257.43276971194, "6Rnd_45ACP_Cylinder"}, // 0.77%
			{6332.84755100907, "Exile_Item_DuctTape"}, // 0.75%
			{6408.26233230621, "Exile_Item_FuelCanisterEmpty"}, // 0.75%
			{6483.67711360334, "Exile_Item_Carwheel"}, // 0.75%
			{6551.55041677076, "Exile_Item_CamoTentKit"}, // 0.68%
			{6619.42371993818, "Exile_Item_WaterCanisterEmpty"}, // 0.68%
			{6683.41584398445, "hgun_Pistol_heavy_01_F"}, // 0.64%
			{6747.40796803072, "hgun_Pistol_Signal_F"}, // 0.64%
			{6811.40009207699, "hgun_Pistol_heavy_02_F"}, // 0.64%
			{6875.39221612326, "CUP_hgun_SA61"}, // 0.64%
			{6939.38434016954, "Exile_Weapon_Colt1911"}, // 0.64%
			{7003.37646421581, "Exile_Weapon_Makarov"}, // 0.64%
			{7067.36858826208, "Exile_Weapon_Taurus"}, // 0.64%
			{7131.36071230835, "Exile_Weapon_TaurusGold"}, // 0.64%
			{7195.35283635462, "hgun_Pistol_01_F"}, // 0.64%
			{7259.34496040089, "hgun_P07_khk_F"}, // 0.64%
			{7320.61947020481, "Exile_Item_PlasticBottleDirtyWater"}, // 0.61%
			{7379.6891231706, "CUP_hgun_Duty_M3X"}, // 0.59%
			{7437.07793235281, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.57%
			{7493.63901832566, "SmokeShellRed"}, // 0.57%
			{7550.20010429851, "SmokeShell"}, // 0.57%
			{7606.76119027136, "SmokeShellPurple"}, // 0.57%
			{7663.32227624421, "Chemlight_blue"}, // 0.57%
			{7719.88336221706, "FlareWhite_F"}, // 0.57%
			{7776.44444818991, "Chemlight_green"}, // 0.57%
			{7833.00553416276, "FlareRed_F"}, // 0.57%
			{7889.56662013561, "Chemlight_red"}, // 0.57%
			{7946.12770610846, "Chemlight_yellow"}, // 0.57%
			{8002.68879208131, "FlareYellow_F"}, // 0.57%
			{8059.24987805416, "FlareGreen_F"}, // 0.57%
			{8115.81096402701, "SmokeShellYellow"}, // 0.57%
			{8172.37204999986, "SmokeShellBlue"}, // 0.57%
			{8228.93313597271, "SmokeShellOrange"}, // 0.57%
			{8285.49422194557, "Exile_Item_Rope"}, // 0.57%
			{8342.05530791842, "Exile_Item_OilCanister"}, // 0.57%
			{8398.61639389127, "Exile_Item_Hammer"}, // 0.57%
			{8455.17747986412, "ItemRadio"}, // 0.57%
			{8511.73856583697, "SmokeShellGreen"}, // 0.57%
			{8560.96327664179, "CUP_hgun_PB6P9_snds"}, // 0.49%
			{8609.98288448493, "Exile_Item_MountainDupe"}, // 0.49%
			{8659.00249232807, "Exile_Item_ChocolateMilk"}, // 0.49%
			{8706.82649997991, "16Rnd_9x21_Mag"}, // 0.48%
			{8748.49316664658, "Exile_Item_EnergyDrink"}, // 0.42%
			{8787.87293529044, "CUP_hgun_MicroUzi"}, // 0.39%
			{8825.58032593901, "Exile_Item_Wrench"}, // 0.38%
			{8863.28771658757, "Exile_Melee_Axe"}, // 0.38%
			{8900.99510723614, "Exile_Item_ZipTie"}, // 0.38%
			{8938.70249788471, "Exile_Item_FuelCanisterFull"}, // 0.38%
			{8973.99661553177, "H_StrawHat_dark"}, // 0.35%
			{9009.29073317883, "H_StrawHat"}, // 0.35%
			{9044.58485082589, "H_Hat_tan"}, // 0.35%
			{9079.87896847295, "H_Hat_grey"}, // 0.35%
			{9115.17308612, "H_Hat_checker"}, // 0.35%
			{9150.46720376706, "H_Hat_brown"}, // 0.35%
			{9185.76132141412, "H_Hat_blue"}, // 0.35%
			{9221.05543906118, "H_Cap_tan"}, // 0.35%
			{9256.34955670824, "H_Cap_red"}, // 0.35%
			{9291.6436743553, "H_Cap_press"}, // 0.35%
			{9325.9573998455, "Exile_Item_Beer"}, // 0.34%
			{9359.43420520179, "6Rnd_RedSignal_F"}, // 0.33%
			{9392.91101055808, "6Rnd_GreenSignal_F"}, // 0.33%
			{9422.32277526396, "Exile_Item_PlasticBottleFreshWater"}, // 0.29%
			{9451.73453996984, "H_Bandanna_surfer"}, // 0.29%
			{9481.14630467573, "H_Beret_blk_POLICE"}, // 0.29%
			{9510.55806938161, "H_Cap_blk"}, // 0.29%
			{9539.96983408749, "H_Cap_blk_Raven"}, // 0.29%
			{9569.38159879337, "H_Cap_blu"}, // 0.29%
			{9598.79336349926, "H_Cap_grn"}, // 0.29%
			{9628.20512820514, "H_Cap_headphones"}, // 0.29%
			{9657.61689291102, "H_Cap_oli"}, // 0.29%
			{9680.08421317246, "Exile_Item_InstantCoffee"}, // 0.22%
			{9698.93790849674, "Exile_Item_MobilePhone"}, // 0.19%
			{9717.32026143792, "Exile_Item_Moobar"}, // 0.18%
			{9735.7026143791, "Exile_Item_Raisins"}, // 0.18%
			{9752.8594771242, "Exile_Item_PowerDrink"}, // 0.17%
			{9769.19934640524, "Exile_Item_SeedAstics"}, // 0.16%
			{9785.53921568629, "Exile_Item_CockONut"}, // 0.16%
			{9799.8366013072, "Exile_Item_Noodles"}, // 0.14%
			{9814.13398692812, "Exile_Item_DsNuts"}, // 0.14%
			{9828.43137254903, "Exile_Item_SausageGravy"}, // 0.14%
			{9842.72875816995, "Exile_Item_BeefParts"}, // 0.14%
			{9857.02614379086, "Exile_Item_Dogfood"}, // 0.14%
			{9871.32352941178, "Exile_Item_CatFood"}, // 0.14%
			{9885.6209150327, "Exile_Item_BBQSandwich"}, // 0.14%
			{9899.91830065361, "Exile_Item_MacasCheese"}, // 0.14%
			{9914.21568627453, "Exile_Item_ChristmasTinner"}, // 0.14%
			{9928.51307189544, "Exile_Item_Surstromming"}, // 0.14%
			{9942.81045751636, "Exile_Item_Cheathas"}, // 0.14%
			{9955.06535947714, "Exile_Item_GloriousKnakworst"}, // 0.12%
			{9967.32026143793, "Exile_Item_PlasticBottleCoffee"}, // 0.12%
			{9977.53267973858, "Exile_Item_Matches"}, // 0.10%
			{9987.74509803924, "Exile_Item_CanOpener"}, // 0.10%
			{9993.87254901963, "Exile_Item_EMRE"}, // 0.06%
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
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 3;

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
			stolenFlagLifeTime = 7;
			
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
};

