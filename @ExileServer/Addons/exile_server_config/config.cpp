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

	  Exile_Item_ToiletPaper
	  Exile_Magazine_5Rnd_22LR
	  SMG_01_F
	  FlareYellow_F
	  10Rnd_9x21_Mag
	  FlareGreen_F
	  ItemGPS
	  CUP_hgun_Phantom
	  CUP_hgun_Phantom
	  30Rnd_9x21_Mag_SMG_02_Tracer_Red
	  FlareWhite_F
	  11Rnd_45ACP_Mag
	  Exile_Weapon_CZ550
	  Exile_Item_Can_Empty
	  U_C_Poor_2
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  B_AssaultPack_rgr
	  muzzle_snds_L
	  Exile_Item_ChocolateMilk
	  CUP_hgun_Phantom
	  Exile_Weapon_CZ550
	  Exile_Item_Magazine04
	  Exile_Item_Magazine01
	  hgun_P07_khk_F
	  V_Press_F
	  B_OutdoorPack_blu
	  Exile_Item_SausageGravy
	  Exile_Magazine_8Rnd_9x18
	  hgun_Pistol_heavy_01_F
	  Exile_Weapon_LeeEnfield
	  B_Kitbag_cbr
	  H_Cap_red
	  Exile_Item_MountainDupe
	  30Rnd_45ACP_Mag_SMG_01
	  hgun_Pistol_Signal_F
	  FlareYellow_F
	  Exile_Item_MobilePhone
	  Exile_Item_Magazine03
	  CUP_30Rnd_9x19_UZI
	  Exile_Item_Heatpack
	  Exile_Item_MountainDupe
	  hgun_Pistol_heavy_01_F
	  CUP_hgun_SA61
	  CUP_smg_bizon_snds
	  Exile_Item_Heatpack
	  B_AssaultPack_cbr
	  FlareRed_F
	  V_Rangemaster_belt
	  CUP_sgun_Saiga12K
	  U_C_Poor_1
	  H_Cap_tan
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MountainDupe
	  hgun_Pistol_Signal_F
	  Exile_Item_Magazine01
	  Exile_Weapon_LeeEnfield
	  ItemWatch
	  Exile_Weapon_Colt1911
	  Exile_Item_Magazine02
	  CUP_muzzle_snds_M9
	  H_Hat_grey
	  Binocular
	  Exile_Weapon_Taurus
	  ItemCompass
	  H_Cap_press
	  Exile_Item_Heatpack
	  ItemWatch
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  muzzle_snds_L
	  Exile_Item_Magazine04
	  muzzle_snds_L
	  U_C_Man_casual_3_F
	  Exile_Weapon_LeeEnfield
	  Exile_Item_ToiletPaper
	  U_C_Man_casual_3_F
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  B_OutdoorPack_blk
	  Exile_Item_Magazine02
	  Exile_Item_MountainDupe
	  Binocular
	  B_Kitbag_cbr
	  FlareRed_F
	  H_Cap_oli
	  Exile_Item_PlasticBottleEmpty
	  B_HuntingBackpack
	  H_Cap_red
	  hgun_Rook40_F
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  ItemWatch
	  Exile_Item_Can_Empty
	  U_C_Poloshirt_stripped
	  hgun_P07_khk_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Matches
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

	  U_C_Poloshirt_tricolour
	  hgun_P07_F
	  30Rnd_9x21_Mag_SMG_02_Tracer_Red
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  CUP_20Rnd_B_765x17_Ball_M
	  CUP_sgun_Saiga12K
	  FlareWhite_F
	  Exile_Item_PlasticBottleDirtyWater
	  CUP_hgun_Duty_M3X
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Magazine_7Rnd_45ACP
	  H_Hat_grey
	  FlareRed_F
	  B_Kitbag_mcamo
	  ItemCompass
	  Exile_Magazine_10Rnd_303
	  B_OutdoorPack_blk
	  Exile_Weapon_Taurus
	  U_C_Poloshirt_tricolour
	  CUP_sgun_Saiga12K
	  Exile_Item_PlasticBottleEmpty
	  B_AssaultPack_blk
	  V_Press_F
	  Exile_Weapon_M1014
	  Exile_Item_InstantCoffee
	  Exile_Weapon_M1014
	  hgun_Pistol_Signal_F
	  Exile_Item_Magazine01
	  B_AssaultPack_sgg
	  B_OutdoorPack_blk
	  H_Cap_press
	  Exile_Weapon_M1014
	  H_Hat_checker
	  hgun_Pistol_heavy_01_F
	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	  ItemWatch
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  hgun_Pistol_Signal_F
	  U_C_Poloshirt_salmon
	  SmokeShellBlue
	  V_Press_F
	  H_Beret_blk_POLICE
	  B_AssaultPack_cbr
	  FlareRed_F
	  Exile_Item_Magazine04
	  CUP_hgun_PB6P9_snds
	  H_Cap_oli
	  Exile_Item_Can_Empty
	  Exile_Weapon_M1014
	  U_C_man_sport_3_F
	  optic_MRD
	  B_OutdoorPack_blk
	  hgun_P07_khk_F
	  Chemlight_red
	  Exile_Item_Magazine03
	  Exile_Magazine_8Rnd_9x18
	  SMG_01_F
	  hgun_Pistol_01_F
	  Exile_Item_Moobar
	  Chemlight_red
	  optic_ACO_grn
	  Exile_Item_Noodles
	  Exile_Item_Magazine04
	  B_Kitbag_cbr
	  ItemWatch
	  Exile_Item_Can_Empty
	  CUP_hgun_Phantom
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_ChristmasTinner
	  H_Cap_blk_Raven
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Magazine_10Rnd_303
	  Exile_Item_InstantCoffee
	  H_Cap_blk
	  Exile_Item_Can_Empty
	  U_C_Journalist
	  Exile_Item_Can_Empty
	  Exile_Magazine_5Rnd_22LR
	  U_I_C_Soldier_Bandit_4_F
	  Chemlight_yellow
	  CUP_hgun_Phantom
	  10Rnd_9x21_Mag
	  U_C_Scientist
	  B_AssaultPack_blk
	  Exile_Item_CookingPot
	  Exile_Item_InstantCoffee
	  H_Cap_headphones
	  11Rnd_45ACP_Mag
	  Exile_Item_Beer
	  Exile_Item_Heatpack
	  FlareRed_F
	  Exile_Magazine_6Rnd_45ACP
	  U_C_Man_casual_6_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Moobar
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

	  B_Kitbag_mcamo
	  Exile_Item_Raisins
	  Exile_Item_LightBulb
	  Exile_Weapon_M1014
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  Exile_Item_DsNuts
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Magazine_10Rnd_303
	  Exile_Item_ChocolateMilk
	  6Rnd_45ACP_Cylinder
	  Exile_Item_BBQSandwich
	  Exile_Item_SeedAstics
	  10Rnd_9x21_Mag
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hgun_Pistol_heavy_02_F
	  Chemlight_blue
	  Exile_Item_MountainDupe
	  Exile_Item_Magazine04
	  B_AssaultPack_khk
	  B_Kitbag_mcamo
	  Exile_Weapon_LeeEnfield
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_green
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Matches
	  Exile_Magazine_5Rnd_22LR
	  Chemlight_red
	  Exile_Weapon_CZ550
	  11Rnd_45ACP_Mag
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_Matches
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Weapon_M1014
	  Exile_Item_Matches
	  CUP_8Rnd_9x18_MakarovSD_M
	  SmokeShellYellow
	  Exile_Item_Heatpack
	  SMG_05_F
	  Chemlight_green
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_Beer
	  CUP_hgun_Duty_M3X
	  ItemRadio
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleDirtyWater
	  6Rnd_RedSignal_F
	  SMG_01_F
	  Exile_Weapon_CZ550
	  ItemMap
	  Exile_Magazine_5Rnd_22LR
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_CatFood
	  SmokeShellBlue
	  CUP_20Rnd_B_765x17_Ball_M
	  Exile_Item_Moobar
	  Exile_Magazine_5Rnd_22LR
	  CUP_64Rnd_9x19_Bizon_M
	  B_OutdoorPack_blk
	  Exile_Item_Beer
	  hgun_Pistol_Signal_F
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Can_Empty
	  Exile_Item_BBQSandwich
	  CUP_30Rnd_9x19_UZI
	  hgun_P07_F
	  hgun_PDW2000_F
	  Exile_Item_ChocolateMilk
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_MountainDupe
	  Exile_Item_PlasticBottleFreshWater
	  hgun_Pistol_01_F
	  Exile_Item_Can_Empty
	  B_AssaultPack_khk
	  Exile_Item_Can_Empty
	  Exile_Item_ChocolateMilk
	  Exile_Item_Bandage
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_BBQSandwich
	  Exile_Item_PowerDrink
	  B_AssaultPack_blk
	  Chemlight_green
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleFreshWater
	  Binocular
	  ItemWatch
	  Exile_Item_Magazine01
	  Exile_Item_Magazine04
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  ItemWatch
	  SmokeShellRed
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Moobar
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

	  Exile_Item_MetalBoard
	  Exile_Item_Handsaw
	  Exile_Item_ThermalScannerPro
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Carwheel
	  FlareGreen_F
	  Exile_Item_Grinder
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  FlareYellow_F
	  Exile_Item_Magazine01
	  Exile_Item_MetalBoard
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_LightBulb
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  FlareRed_F
	  Exile_Item_MetalScrews
	  FlareYellow_F
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  FlareWhite_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Sand
	  Exile_Item_FuelCanisterFull
	  Exile_Item_LightBulb
	  Exile_Item_CamoTentKit
	  Exile_Item_LightBulb
	  FlareGreen_F
	  FlareRed_F
	  Exile_Item_Sand
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_Rope
	  FlareYellow_F
	  Exile_Item_Magazine02
	  FlareRed_F
	  Exile_Item_ZipTie
	  Exile_Item_Pliers
	  Exile_Item_FireExtinguisher
	  Exile_Item_OilCanister
	  Exile_Item_Handsaw
	  FlareRed_F
	  Exile_Item_Beer
	  Exile_Item_JunkMetal
	  FlareWhite_F
	  Exile_Item_Grinder
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Melee_Axe
	  Exile_Item_Foolbox
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_CamoTentKit
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_CordlessScrewdriver
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Magazine04
	  Exile_Item_LightBulb
	  Exile_Item_Cement
	  FlareWhite_F
	  Exile_Item_Foolbox
	  Exile_Item_Pliers
	  Exile_Item_Handsaw
	  FlareYellow_F
	  FlareGreen_F
	  Exile_Item_Pliers
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Handsaw
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

	  Exile_Melee_SledgeHammer
	  Exile_Item_Pliers
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Wrench
	  Exile_Item_Carwheel
	  Exile_Item_OilCanister
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Foolbox
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_Magazine01
	  Exile_Melee_SledgeHammer
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_Pliers
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Grinder
	  Exile_Item_MetalBoard
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterFull
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Grinder
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_PortableGeneratorKit
	  Exile_Melee_SledgeHammer
	  Exile_Item_Pliers
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_OilCanister
	  Exile_Item_MetalBoard
	  Exile_Item_Magazine02
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ThermalScannerPro
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Foolbox
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Magazine04
	  Exile_Item_MetalScrews
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  Exile_Item_ScrewDriver
	  Exile_Item_Magazine03
	  Exile_Melee_Axe
	  Exile_Item_Cement
	  Exile_Item_Handsaw
	  Exile_Item_Wrench
	  Exile_Item_OilCanister
	  Exile_Item_ScrewDriver
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_OilCanister
	  Exile_Item_Sand
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
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

	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_FireExtinguisher
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  FlareWhite_F
	  Exile_Item_ZipTie
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalScrews
	  FlareGreen_F
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  Exile_Item_Magazine03
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Exile_Item_Wrench
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  FlareYellow_F
	  Exile_Item_Carwheel
	  Exile_Item_Wrench
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Melee_Axe
	  Exile_Item_ExtensionCord
	  Exile_Item_Wrench
	  Exile_Item_Magazine04
	  Exile_Item_Wrench
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Axe
	  Exile_Item_Magazine04
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Melee_SledgeHammer
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ZipTie
	  Exile_Item_Foolbox
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Cement
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_ScrewDriver
	  FlareRed_F
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_CamoTentKit
	  Exile_Item_ToiletPaper
	  FlareWhite_F
	  Exile_Item_OilCanister
	  Exile_Item_Magazine02
	  Exile_Item_Wrench
	  Exile_Item_Rope
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_ZipTie
	  Exile_Item_OilCanister
	  Exile_Item_Carwheel
	  Exile_Item_ToiletPaper
	  Exile_Item_ZipTie
	  Exile_Item_Foolbox
	  Exile_Item_DuctTape
	  Exile_Item_OilCanister
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

	  3Rnd_SmokeGreen_Grenade_shell
	  ItemCompass
	  CUP_arifle_Sa58RIS2_camo
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  ItemMap
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  B_ViperHarness_khk_F
	  optic_SOS_khk_F
	  muzzle_snds_acp
	  U_I_GhillieSuit
	  Exile_Item_PlasticBottleEmpty
	  CUP_lmg_Mk48_des
	  SmokeShellYellow
	  Exile_Item_PlasticBottleEmpty
	  20Rnd_762x51_Mag
	  V_PlateCarrierGL_rgr
	  3Rnd_SmokeGreen_Grenade_shell
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  CUP_optic_SB_11_4x20_PM
	  10Rnd_9x21_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  B_FieldPack_oucamo
	  Exile_Item_Magazine01
	  O_NVGoggles_ghex_F
	  20Rnd_762x51_Mag
	  9Rnd_45ACP_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  arifle_MX_SW_Black_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  B_FieldPack_cbr
	  CUP_srifle_L129A1
	  optic_Hamr
	  Exile_Magazine_8Rnd_9x18
	  U_B_CombatUniform_mcam_worn
	  optic_LRPS
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  U_I_CombatUniform
	  U_B_CTRG_Soldier_2_F
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  H_MilCap_ghex_F
	  H_HelmetB
	  20Rnd_762x51_Mag
	  muzzle_snds_B_snd_F
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  optic_AMS_snd
	  muzzle_snds_H_snd_F
	  CUP_hgun_SA61
	  ItemCompass
	  Exile_Item_Magazine01
	  H_HelmetO_oucamo
	  ItemCompass
	  Exile_Item_Magazine04
	  CUP_5Rnd_762x51_M24
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  optic_LRPS
	  hgun_P07_khk_F
	  UGL_FlareYellow_F
	  U_B_CombatUniform_mcam
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  U_O_T_Officer_F
	  Exile_Item_Can_Empty
	  V_PlateCarrierIA2_dgtl
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_M
	  Exile_Item_Magazine02
	  optic_LRPS
	  HandGrenade
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  CUP_optic_SB_11_4x20_PM
	  Exile_Weapon_AK47
	  Exile_Item_Magazine04
	  muzzle_snds_338_sand
	  3Rnd_HE_Grenade_shell
	  10Rnd_127x54_Mag
	  20Rnd_762x51_Mag
	  Exile_Item_PlasticBottleEmpty
	  ItemWatch
	  CUP_optic_AN_PVS_4
	  Exile_Item_Can_Empty
	  1Rnd_HE_Grenade_shell
	*/
	class Military
	{
		count = 698;
		half = 9020.94359406057;
		halfIndex = 349;
		sum = 9999.99999999997;
		items[] = 
		{
			{1077.58620689655, "Exile_Item_Can_Empty"}, // 10.78%
			{2155.1724137931, "Exile_Item_ToiletPaper"}, // 10.78%
			{3232.75862068966, "Exile_Item_PlasticBottleEmpty"}, // 10.78%
			{3502.15517241379, "Exile_Item_Magazine02"}, // 2.69%
			{3771.55172413793, "Exile_Item_Magazine01"}, // 2.69%
			{4040.94827586207, "Exile_Item_Magazine04"}, // 2.69%
			{4310.34482758621, "Exile_Item_Magazine03"}, // 2.69%
			{4439.65517241379, "20Rnd_762x51_Mag"}, // 1.29%
			{4552.09895052474, "ItemCompass"}, // 1.12%
			{4638.73688155922, "1Rnd_HE_Grenade_shell"}, // 0.87%
			{4724.94377811095, "10Rnd_127x54_Mag"}, // 0.86%
			{4811.15067466267, "Exile_Item_ZipTie"}, // 0.86%
			{4875.80584707646, "MiniGrenade"}, // 0.65%
			{4940.46101949026, "HandGrenade"}, // 0.65%
			{4996.68290854573, "Rangefinder"}, // 0.56%
			{5040.27066522918, "muzzle_snds_L"}, // 0.44%
			{5083.85842191264, "muzzle_snds_acp"}, // 0.44%
			{5126.53083570574, "3Rnd_HE_Grenade_shell"}, // 0.43%
			{5164.84501195095, "ItemWatch"}, // 0.38%
			{5195.63318929086, "optic_AMS"}, // 0.31%
			{5226.42136663076, "optic_AMS_khk"}, // 0.31%
			{5257.20954397066, "optic_AMS_snd"}, // 0.31%
			{5287.99772131056, "optic_KHS_blk"}, // 0.31%
			{5318.78589865046, "optic_KHS_hex"}, // 0.31%
			{5349.57407599036, "optic_KHS_old"}, // 0.31%
			{5380.36225333026, "optic_KHS_tan"}, // 0.31%
			{5411.01359432643, "Exile_Item_Heatpack"}, // 0.31%
			{5440.74011037875, "Exile_Item_Vishpirin"}, // 0.30%
			{5470.46662643107, "Exile_Item_Heatpack"}, // 0.30%
			{5500.15522600883, "optic_DMS"}, // 0.30%
			{5528.74424782445, "optic_LRPS"}, // 0.29%
			{5557.33326964008, "optic_SOS_khk_F"}, // 0.29%
			{5585.9222914557, "optic_SOS"}, // 0.29%
			{5614.51131327132, "optic_LRPS_tna_F"}, // 0.29%
			{5643.10033508695, "optic_LRPS_ghex_F"}, // 0.29%
			{5670.03999025936, "CUP_optic_ACOG"}, // 0.27%
			{5696.85991363101, "ItemMap"}, // 0.27%
			{5723.38511257, "U_IG_Guerilla2_2"}, // 0.27%
			{5749.91031150899, "U_IG_Guerilla2_1"}, // 0.27%
			{5776.43551044798, "U_IG_Guerilla1_1"}, // 0.27%
			{5802.96070938697, "U_IG_Guerilla2_3"}, // 0.27%
			{5828.82277835249, "DemoCharge_Remote_Mag"}, // 0.26%
			{5853.6901523578, "U_IG_Guerilla3_1"}, // 0.25%
			{5878.5575263631, "U_IG_Guerilla3_2"}, // 0.25%
			{5902.7729467428, "CUP_acc_CZ_M3X"}, // 0.24%
			{5926.9883671225, "CUP_acc_Glock17_Flashlight"}, // 0.24%
			{5951.2037875022, "CUP_muzzle_snds_MicroUzi"}, // 0.24%
			{5974.19229324932, "ItemCompass"}, // 0.23%
			{5997.18079899645, "ItemRadio"}, // 0.23%
			{6020.16930474358, "Binocular"}, // 0.23%
			{6042.15206336426, "UGL_FlareYellow_F"}, // 0.22%
			{6064.13482198495, "UGL_FlareWhite_F"}, // 0.22%
			{6086.11758060564, "UGL_FlareGreen_F"}, // 0.22%
			{6108.10033922633, "UGL_FlareRed_F"}, // 0.22%
			{6129.89421756806, "CUP_muzzle_snds_M9"}, // 0.22%
			{6151.51660309661, "150Rnd_93x64_Mag"}, // 0.22%
			{6172.40858057725, "muzzle_snds_B"}, // 0.21%
			{6191.81940496638, "bipod_01_F_blk"}, // 0.19%
			{6211.23022935551, "bipod_01_F_snd"}, // 0.19%
			{6230.64105374464, "bipod_02_F_blk"}, // 0.19%
			{6250.05187813377, "bipod_02_F_tan"}, // 0.19%
			{6269.4627025229, "bipod_03_F_blk"}, // 0.19%
			{6288.87352691203, "bipod_03_F_oli"}, // 0.19%
			{6308.28435130116, "bipod_01_F_khk"}, // 0.19%
			{6327.22101267759, "hgun_P07_F"}, // 0.19%
			{6345.69391908153, "SmokeShellBlue"}, // 0.18%
			{6364.16682548547, "SmokeShellPurple"}, // 0.18%
			{6382.63973188941, "SmokeShellYellow"}, // 0.18%
			{6401.11263829335, "SmokeShellGreen"}, // 0.18%
			{6419.58554469729, "SmokeShellOrange"}, // 0.18%
			{6438.05845110123, "SmokeShellRed"}, // 0.18%
			{6456.53135750518, "SmokeShell"}, // 0.18%
			{6474.80036869494, "bipod_01_F_mtp"}, // 0.18%
			{6493.06937988471, "bipod_02_F_hex"}, // 0.18%
			{6511.10429548131, "hgun_ACPC2_F"}, // 0.18%
			{6529.1392110779, "hgun_Rook40_F"}, // 0.18%
			{6547.13021557565, "NVGoggles_tna_F"}, // 0.18%
			{6565.12122007341, "O_NVGoggles_hex_F"}, // 0.18%
			{6583.11222457116, "O_NVGoggles_urb_F"}, // 0.18%
			{6601.10322906891, "O_NVGoggles_ghex_F"}, // 0.18%
			{6619.09423356666, "NVGoggles"}, // 0.18%
			{6637.0540036816, "CUP_muzzle_snds_M14"}, // 0.18%
			{6655.01377379655, "optic_KHS_hex"}, // 0.18%
			{6672.97354391149, "CUP_optic_LeupoldM3LR"}, // 0.18%
			{6690.93331402643, "muzzle_snds_B"}, // 0.18%
			{6708.89308414137, "optic_SOS"}, // 0.18%
			{6726.85285425631, "optic_DMS"}, // 0.18%
			{6744.81262437126, "optic_LRPS"}, // 0.18%
			{6762.7723944862, "optic_AMS"}, // 0.18%
			{6780.73216460114, "CUP_optic_SB_11_4x20_PM"}, // 0.18%
			{6798.69193471608, "optic_KHS_blk"}, // 0.18%
			{6816.21366165749, "Exile_Magazine_6Rnd_45ACP"}, // 0.18%
			{6833.7353885989, "Exile_Magazine_7Rnd_45ACP"}, // 0.18%
			{6851.2571155403, "10Rnd_9x21_Mag"}, // 0.18%
			{6868.77884248171, "Exile_Magazine_8Rnd_9x18"}, // 0.18%
			{6886.30056942312, "30Rnd_9x21_Mag"}, // 0.18%
			{6903.82229636453, "11Rnd_45ACP_Mag"}, // 0.18%
			{6921.34402330593, "9Rnd_45ACP_Mag"}, // 0.18%
			{6938.58540261628, "SatchelCharge_Remote_Mag"}, // 0.17%
			{6955.53619688207, "optic_MRD"}, // 0.17%
			{6972.48699114785, "optic_Yorris"}, // 0.17%
			{6989.06524048472, "CUP_arifle_FNFAL"}, // 0.17%
			{7005.5544790869, "B_Carryall_ghex_F"}, // 0.16%
			{7022.04371768908, "B_Carryall_cbr"}, // 0.16%
			{7038.27514172601, "CUP_hgun_Phantom"}, // 0.16%
			{7054.04469597328, "CUP_30Rnd_9x19_UZI"}, // 0.16%
			{7069.81425022054, "CUP_18Rnd_9x19_Phantom"}, // 0.16%
			{7085.58380446781, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.16%
			{7101.20518840671, "B_Carryall_khk"}, // 0.16%
			{7116.82657234562, "B_Carryall_oli"}, // 0.16%
			{7131.68983037178, "Exile_Item_Bandage"}, // 0.15%
			{7146.05764646373, "V_RebreatherB"}, // 0.14%
			{7160.42546255568, "V_RebreatherIA"}, // 0.14%
			{7174.79327864764, "V_RebreatherIR"}, // 0.14%
			{7189.16109473959, "U_I_GhillieSuit"}, // 0.14%
			{7203.52891083155, "U_B_GhillieSuit"}, // 0.14%
			{7217.8967269235, "U_O_GhillieSuit"}, // 0.14%
			{7231.91410847663, "6Rnd_45ACP_Cylinder"}, // 0.14%
			{7245.1090416223, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.13%
			{7258.30397476797, "1Rnd_SmokePurple_Grenade_shell"}, // 0.13%
			{7271.49890791364, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.13%
			{7284.69384105931, "1Rnd_SmokeRed_Grenade_shell"}, // 0.13%
			{7297.88877420499, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.13%
			{7311.08370735066, "1Rnd_Smoke_Grenade_shell"}, // 0.13%
			{7324.27864049633, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.13%
			{7337.29646044542, "B_Carryall_ocamo"}, // 0.13%
			{7350.3142803945, "B_Carryall_mcamo"}, // 0.13%
			{7363.33210034359, "B_Carryall_oucamo"}, // 0.13%
			{7375.62395821693, "Exile_Weapon_RPK"}, // 0.12%
			{7387.51456463786, "Exile_Item_InstaDoc"}, // 0.12%
			{7399.23725977565, "hgun_Pistol_heavy_01_F"}, // 0.12%
			{7410.95995491343, "Exile_Weapon_Colt1911"}, // 0.12%
			{7422.68265005122, "Exile_Weapon_Makarov"}, // 0.12%
			{7434.40534518901, "Exile_Weapon_Taurus"}, // 0.12%
			{7446.12804032679, "Exile_Weapon_TaurusGold"}, // 0.12%
			{7457.85073546458, "hgun_Pistol_01_F"}, // 0.12%
			{7469.57343060237, "hgun_P07_khk_F"}, // 0.12%
			{7481.29612574015, "hgun_Pistol_Signal_F"}, // 0.12%
			{7493.01882087794, "hgun_Pistol_heavy_02_F"}, // 0.12%
			{7504.74151601573, "CUP_hgun_SA61"}, // 0.12%
			{7515.79368224031, "CUP_arifle_Mk17_STD_EGLM"}, // 0.11%
			{7526.84584846489, "CUP_srifle_M14"}, // 0.11%
			{7537.89801468947, "CUP_arifle_FNFAL_railed"}, // 0.11%
			{7548.89379231086, "muzzle_snds_B_khk_F"}, // 0.11%
			{7559.88956993226, "muzzle_snds_B_snd_F"}, // 0.11%
			{7570.71051929021, "CUP_hgun_Duty_M3X"}, // 0.11%
			{7581.22355545506, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.11%
			{7591.56838304126, "3Rnd_UGL_FlareYellow_F"}, // 0.10%
			{7601.91321062747, "3Rnd_UGL_FlareGreen_F"}, // 0.10%
			{7612.25803821368, "3Rnd_UGL_FlareRed_F"}, // 0.10%
			{7622.60286579988, "3Rnd_UGL_FlareWhite_F"}, // 0.10%
			{7632.53617075235, "B_FieldPack_blk"}, // 0.10%
			{7642.46947570481, "B_FieldPack_ocamo"}, // 0.10%
			{7652.40278065727, "B_FieldPack_oucamo"}, // 0.10%
			{7662.33608560973, "B_FieldPack_cbr"}, // 0.10%
			{7672.16957190841, "arifle_MX_SW_Black_F"}, // 0.10%
			{7681.22129604634, "V_HarnessOGL_brn"}, // 0.09%
			{7690.27302018427, "V_HarnessOGL_gry"}, // 0.09%
			{7699.3247443222, "V_HarnessOSpec_brn"}, // 0.09%
			{7708.37646846013, "V_HarnessOSpec_gry"}, // 0.09%
			{7717.42819259806, "V_BandollierB_oli"}, // 0.09%
			{7726.47991673599, "V_BandollierB_cbr"}, // 0.09%
			{7735.53164087393, "V_BandollierB_rgr"}, // 0.09%
			{7744.58336501186, "V_HarnessO_gry"}, // 0.09%
			{7753.63508914979, "V_BandollierB_khk"}, // 0.09%
			{7762.68681328772, "V_BandollierB_blk"}, // 0.09%
			{7771.73853742565, "V_HarnessO_brn"}, // 0.09%
			{7780.75599522395, "CUP_hgun_PB6P9_snds"}, // 0.09%
			{7789.73588028142, "CUP_muzzle_snds_M110"}, // 0.09%
			{7798.58601795023, "CUP_arifle_RPK74"}, // 0.09%
			{7807.42775092989, "CUP_arifle_Mk20"}, // 0.09%
			{7816.26948390955, "CUP_arifle_Mk17_STD_FG"}, // 0.09%
			{7825.03034738026, "16Rnd_9x21_Mag"}, // 0.09%
			{7833.65103703543, "V_PlateCarrier3_rgr"}, // 0.09%
			{7842.2717266906, "V_PlateCarrierGL_rgr"}, // 0.09%
			{7850.89241634578, "V_PlateCarrierIA1_dgtl"}, // 0.09%
			{7859.51310600095, "V_PlateCarrierIA2_dgtl"}, // 0.09%
			{7868.13379565612, "V_PlateCarrier1_rgr"}, // 0.09%
			{7876.75448531129, "APERSTripMine_Wire_Mag"}, // 0.09%
			{7885.37517496646, "APERSBoundingMine_Range_Mag"}, // 0.09%
			{7893.99586462164, "APERSMine_Range_Mag"}, // 0.09%
			{7902.61655427681, "IEDLandSmall_Remote_Mag"}, // 0.09%
			{7911.23724393198, "IEDUrbanSmall_Remote_Mag"}, // 0.09%
			{7919.85793358715, "V_PlateCarrierIAGL_dgtl"}, // 0.09%
			{7928.47862324232, "V_PlateCarrier2_rgr"}, // 0.09%
			{7937.0993128975, "V_PlateCarrierSpec_rgr"}, // 0.09%
			{7945.72000255267, "V_PlateCarrier1_blk"}, // 0.09%
			{7954.17165907735, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.08%
			{7962.62331560203, "CUP_20Rnd_762x51_B_SCAR"}, // 0.08%
			{7971.0749721267, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.08%
			{7979.52662865138, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.08%
			{7987.97828517606, "CUP_20Rnd_762x51_DMR"}, // 0.08%
			{7996.42994170074, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.08%
			{8004.88159822542, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.08%
			{8013.17072289385, "U_I_C_Soldier_Para_4_F"}, // 0.08%
			{8021.45984756229, "U_I_C_Soldier_Para_5_F"}, // 0.08%
			{8029.74897223072, "U_I_C_Soldier_Camo_F"}, // 0.08%
			{8038.03809689916, "U_I_C_Soldier_Para_3_F"}, // 0.08%
			{8046.32722156759, "U_I_C_Soldier_Para_2_F"}, // 0.08%
			{8054.61634623603, "U_I_C_Soldier_Para_1_F"}, // 0.08%
			{8062.48313527497, "CUP_lmg_minimi_railed"}, // 0.08%
			{8070.34992431391, "CUP_lmg_m249_para"}, // 0.08%
			{8078.15466391941, "B_ViperLightHarness_oli_F"}, // 0.08%
			{8085.95940352492, "B_Bergen_sgg"}, // 0.08%
			{8093.76414313043, "B_Bergen_mcamo"}, // 0.08%
			{8101.56888273593, "B_ViperLightHarness_khk_F"}, // 0.08%
			{8109.37362234144, "B_Bergen_blk"}, // 0.08%
			{8117.17836194695, "B_ViperLightHarness_hex_F"}, // 0.08%
			{8124.98310155245, "B_ViperLightHarness_ghex_F"}, // 0.08%
			{8132.78784115796, "B_ViperLightHarness_blk_F"}, // 0.08%
			{8140.59258076346, "B_ViperLightHarness_base_F"}, // 0.08%
			{8148.39732036897, "B_Bergen_rgr"}, // 0.08%
			{8156.20205997448, "B_ViperHarness_khk_F"}, // 0.08%
			{8164.00679957998, "B_ViperHarness_hex_F"}, // 0.08%
			{8171.81153918549, "B_ViperHarness_ghex_F"}, // 0.08%
			{8179.616278791, "B_ViperHarness_blk_F"}, // 0.08%
			{8187.4210183965, "B_ViperHarness_oli_F"}, // 0.08%
			{8195.22575800201, "B_FieldPack_ghex_F"}, // 0.08%
			{8203.03049760751, "B_ViperHarness_base_F"}, // 0.08%
			{8210.76701396472, "CUP_srifle_M110"}, // 0.08%
			{8218.14212868873, "LMG_Mk200_F"}, // 0.07%
			{8225.51724341274, "arifle_MX_SW_F"}, // 0.07%
			{8232.89235813674, "CUP_lmg_Pecheneg"}, // 0.07%
			{8240.10632437538, "CUP_hgun_MicroUzi"}, // 0.07%
			{8247.29023242136, "muzzle_snds_338_black"}, // 0.07%
			{8254.47414046734, "muzzle_snds_338_green"}, // 0.07%
			{8261.65804851331, "muzzle_snds_338_sand"}, // 0.07%
			{8268.84195655929, "muzzle_snds_B"}, // 0.07%
			{8276.02586460527, "muzzle_snds_93mmg_tan"}, // 0.07%
			{8283.20977265125, "muzzle_snds_93mmg"}, // 0.07%
			{8290.29915559136, "U_B_CTRG_Soldier_F"}, // 0.07%
			{8297.38853853146, "U_B_CTRG_Soldier_2_F"}, // 0.07%
			{8304.47792147157, "U_B_GEN_Commander_F"}, // 0.07%
			{8311.56730441168, "U_B_GEN_Soldier_F"}, // 0.07%
			{8318.65668735179, "U_B_CombatUniform_mcam"}, // 0.07%
			{8325.7460702919, "U_B_T_Soldier_SL_F"}, // 0.07%
			{8332.83545323201, "U_O_T_Soldier_F"}, // 0.07%
			{8339.92483617211, "U_B_CombatUniform_mcam_vest"}, // 0.07%
			{8347.01421911222, "U_B_T_Soldier_AR_F"}, // 0.07%
			{8354.10360205233, "U_B_CTRG_2"}, // 0.07%
			{8361.19298499244, "U_B_CTRG_1"}, // 0.07%
			{8368.28236793255, "U_B_CombatUniform_mcam_worn"}, // 0.07%
			{8375.37175087266, "U_B_CTRG_Soldier_3_F"}, // 0.07%
			{8382.46113381277, "U_B_CTRG_Soldier_urb_1_F"}, // 0.07%
			{8389.55051675287, "U_B_CTRG_Soldier_urb_2_F"}, // 0.07%
			{8396.63989969298, "U_B_CTRG_Soldier_urb_3_F"}, // 0.07%
			{8403.72928263309, "U_O_T_Officer_F"}, // 0.07%
			{8410.8186655732, "U_B_CombatUniform_mcam_tshirt"}, // 0.07%
			{8417.90804851331, "U_B_CTRG_3"}, // 0.07%
			{8424.97418757492, "H_Booniehat_grn"}, // 0.07%
			{8432.04032663654, "H_Booniehat_mcamo"}, // 0.07%
			{8439.10646569816, "H_Booniehat_tan"}, // 0.07%
			{8446.17260475977, "H_Booniehat_dgtl"}, // 0.07%
			{8453.23874382139, "H_Booniehat_khk_hs"}, // 0.07%
			{8460.30488288301, "H_Booniehat_dirty"}, // 0.07%
			{8467.37102194463, "H_Booniehat_khk"}, // 0.07%
			{8474.43716100624, "Exile_Headgear_GasMask"}, // 0.07%
			{8481.50330006786, "H_Booniehat_indp"}, // 0.07%
			{8488.51199084442, "H_MilCap_oucamo"}, // 0.07%
			{8495.52068162099, "H_MilCap_dgtl"}, // 0.07%
			{8502.52937239755, "H_MilCap_rucamo"}, // 0.07%
			{8509.53806317411, "Exile_Headgear_GasMask"}, // 0.07%
			{8516.54675395068, "H_MilCap_ocamo"}, // 0.07%
			{8523.55544472724, "H_MilCap_mcamo"}, // 0.07%
			{8530.5641355038, "H_MilCap_blue"}, // 0.07%
			{8537.44757591288, "CUP_lmg_L110A1"}, // 0.07%
			{8544.33101632195, "CUP_lmg_PKM"}, // 0.07%
			{8551.11133402826, "20Rnd_650x39_Cased_Mag_F"}, // 0.07%
			{8557.87265924801, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.07%
			{8564.63398446775, "CUP_20Rnd_762x51_L129_M"}, // 0.07%
			{8571.39530968749, "CUP_20Rnd_762x51_B_M110"}, // 0.07%
			{8578.15663490723, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.07%
			{8584.78793464198, "U_IG_leader"}, // 0.07%
			{8591.25345188336, "V_Chestrig_khk"}, // 0.06%
			{8597.71896912474, "V_Chestrig_rgr"}, // 0.06%
			{8604.18448636612, "V_Chestrig_blk"}, // 0.06%
			{8610.6500036075, "V_Chestrig_oli"}, // 0.06%
			{8617.10744904208, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8623.56489447667, "CUP_10Rnd_762x54_SVD_M"}, // 0.06%
			{8630.02233991125, "CUP_srifle_SVD_des"}, // 0.06%
			{8636.47978534584, "CUP_5Rnd_762x51_M24"}, // 0.06%
			{8642.87155143998, "Exile_Weapon_PK"}, // 0.06%
			{8649.26331753412, "Exile_Weapon_PKP"}, // 0.06%
			{8655.65508362826, "CUP_lmg_Mk48_des"}, // 0.06%
			{8662.0468497224, "CUP_lmg_M240"}, // 0.06%
			{8668.43861581653, "CUP_lmg_M60E4"}, // 0.06%
			{8674.79814097199, "CUP_30Rnd_545x39_AK_M"}, // 0.06%
			{8681.15766612744, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.06%
			{8687.41101613638, "srifle_EBR_F"}, // 0.06%
			{8693.66436614531, "srifle_DMR_01_F"}, // 0.06%
			{8699.79893930817, "20Rnd_762x51_Mag"}, // 0.06%
			{8705.93154373766, "6Rnd_GreenSignal_F"}, // 0.06%
			{8712.06414816715, "6Rnd_RedSignal_F"}, // 0.06%
			{8717.99970497891, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.06%
			{8723.93526179067, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.06%
			{8729.87081860243, "CUP_30Rnd_762x39_AK47_M"}, // 0.06%
			{8735.68251949356, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.06%
			{8741.48920164471, "CUP_srifle_SVD"}, // 0.06%
			{8747.1607079968, "U_O_PilotCoveralls"}, // 0.06%
			{8752.83221434889, "U_B_HeliPilotCoveralls"}, // 0.06%
			{8758.50372070097, "U_I_CombatUniform_shortsleeve"}, // 0.06%
			{8764.17522705306, "U_I_CombatUniform_tshirt"}, // 0.06%
			{8769.84673340515, "U_I_pilotCoveralls"}, // 0.06%
			{8775.51823975724, "U_B_PilotCoveralls"}, // 0.06%
			{8781.18974610932, "U_I_HeliPilotCoveralls"}, // 0.06%
			{8786.86125246141, "U_I_CombatUniform"}, // 0.06%
			{8792.49043413923, "acc_flashlight"}, // 0.06%
			{8798.07378236149, "CUP_srifle_M24_des"}, // 0.06%
			{8803.65713058376, "CUP_srifle_M24_wdl"}, // 0.06%
			{8809.24047880602, "CUP_srifle_M40A3"}, // 0.06%
			{8814.76656191831, "CUP_srifle_L129A1_HG"}, // 0.06%
			{8820.2926450306, "CUP_srifle_L129A1"}, // 0.06%
			{8825.80423349866, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.06%
			{8831.29306211806, "10Rnd_762x54_Mag"}, // 0.05%
			{8836.59266641427, "H_Bandanna_khk_hs"}, // 0.05%
			{8841.89227071048, "H_Cap_brn_SPECOPS"}, // 0.05%
			{8847.1918750067, "H_Cap_khaki_specops_UK"}, // 0.05%
			{8852.49147930291, "H_Cap_tan_specops_US"}, // 0.05%
			{8857.79108359912, "H_Hat_camo"}, // 0.05%
			{8863.09068789534, "H_BandMask_blk"}, // 0.05%
			{8868.39029219155, "H_Bandanna_mcamo"}, // 0.05%
			{8873.68989648776, "H_Bandanna_camo"}, // 0.05%
			{8878.98950078398, "H_Bandanna_gry"}, // 0.05%
			{8884.28910508019, "H_Bandanna_sgg"}, // 0.05%
			{8889.5887093764, "H_Bandanna_cbr"}, // 0.05%
			{8894.88831367262, "H_Bandanna_khk"}, // 0.05%
			{8900.18791796883, "H_Watchcap_khk"}, // 0.05%
			{8905.48752226504, "H_Watchcap_blk"}, // 0.05%
			{8910.76549552331, "3Rnd_Smoke_Grenade_shell"}, // 0.05%
			{8916.04346878158, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.05%
			{8921.32144203985, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.05%
			{8926.59941529812, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.05%
			{8931.87738855639, "3Rnd_SmokePurple_Grenade_shell"}, // 0.05%
			{8937.15536181466, "3Rnd_SmokeRed_Grenade_shell"}, // 0.05%
			{8942.43333507293, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.05%
			{8947.68985315535, "H_HelmetB_plain_blk"}, // 0.05%
			{8952.94637123777, "H_HelmetIA"}, // 0.05%
			{8958.2028893202, "H_HelmetSpecB_paint2"}, // 0.05%
			{8963.45940740262, "H_HelmetB"}, // 0.05%
			{8968.71592548504, "H_HelmetB_paint"}, // 0.05%
			{8973.97244356746, "H_HelmetB_light"}, // 0.05%
			{8979.22896164988, "H_HelmetSpecB_paint1"}, // 0.05%
			{8984.48547973231, "H_HelmetSpecB"}, // 0.05%
			{8989.74199781473, "H_HelmetSpecB_blk"}, // 0.05%
			{8994.94912579436, "B_Bergen_Base_F"}, // 0.05%
			{9000.156253774, "B_Bergen_mcamo_F"}, // 0.05%
			{9005.36338175363, "B_Bergen_hex_F"}, // 0.05%
			{9010.57050973327, "B_Bergen_tna_F"}, // 0.05%
			{9015.7776377129, "B_Bergen_dgtl_F"}, // 0.05%
			{9020.94359406057, "CUP_5Rnd_762x67_G22"}, // 0.05%
			{9026.03121418494, "150Rnd_762x54_Box"}, // 0.05%
			{9031.1188343093, "100Rnd_65x39_caseless_mag"}, // 0.05%
			{9036.03557745864, "CUP_lmg_L7A2"}, // 0.05%
			{9040.95232060797, "LMG_03_F"}, // 0.05%
			{9045.86906375731, "LMG_Zafir_F"}, // 0.05%
			{9050.71214783325, "CUP_10Rnd_762x51_CZ750"}, // 0.05%
			{9055.55523190919, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.05%
			{9060.05961155217, "CUP_srifle_Mk12SPR"}, // 0.05%
			{9064.52629012998, "CUP_srifle_VSSVintorez"}, // 0.04%
			{9068.99296870779, "srifle_DMR_03_F"}, // 0.04%
			{9073.4596472856, "srifle_DMR_03_khaki_F"}, // 0.04%
			{9077.92632586341, "srifle_DMR_03_tan_F"}, // 0.04%
			{9082.39300444122, "srifle_DMR_03_woodland_F"}, // 0.04%
			{9086.85968301903, "srifle_DMR_06_camo_F"}, // 0.04%
			{9091.32636159684, "srifle_DMR_06_olive_F"}, // 0.04%
			{9095.63670642442, "V_PlateCarrierL_CTRG"}, // 0.04%
			{9099.94705125201, "V_PlateCarrierH_CTRG"}, // 0.04%
			{9104.20068101607, "U_B_SpecopsUniform_sgg"}, // 0.04%
			{9108.44036445304, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.04%
			{9112.68004789002, "150Rnd_762x54_Box_Tracer"}, // 0.04%
			{9116.91973132699, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.04%
			{9121.15941476396, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.04%
			{9125.39909820093, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.04%
			{9129.6387816379, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.04%
			{9133.87846507487, "200Rnd_556x45_Box_F"}, // 0.04%
			{9138.11814851184, "200Rnd_556x45_Box_Red_F"}, // 0.04%
			{9142.35783194881, "200Rnd_556x45_Box_Tracer_F"}, // 0.04%
			{9146.59751538578, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.04%
			{9150.83719882275, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.04%
			{9155.07688225972, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.04%
			{9159.31656569669, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.04%
			{9163.51390522917, "CUP_5Rnd_86x70_L115A1"}, // 0.04%
			{9167.67179413038, "Exile_Weapon_LeeEnfield"}, // 0.04%
			{9171.82968303158, "CUP_arifle_AK74"}, // 0.04%
			{9175.85052708717, "optic_Hamr"}, // 0.04%
			{9179.87137114275, "muzzle_snds_65_TI_ghex_F"}, // 0.04%
			{9183.89221519834, "optic_Arco_blk_F"}, // 0.04%
			{9187.91305925392, "optic_Arco"}, // 0.04%
			{9191.9339033095, "muzzle_snds_H_MG_khk_F"}, // 0.04%
			{9195.95474736509, "muzzle_snds_H_MG_blk_F"}, // 0.04%
			{9199.97559142067, "muzzle_snds_65_TI_hex_F"}, // 0.04%
			{9203.99643547625, "muzzle_snds_65_TI_blk_F"}, // 0.04%
			{9208.01727953184, "muzzle_snds_58_wdm_F"}, // 0.04%
			{9212.03812358742, "muzzle_snds_m_snd_F"}, // 0.04%
			{9216.058967643, "muzzle_snds_m_khk_F"}, // 0.04%
			{9220.07981169859, "muzzle_snds_58_blk_F"}, // 0.04%
			{9224.10065575417, "muzzle_snds_H_snd_F"}, // 0.04%
			{9228.12149980975, "muzzle_snds_H_khk_F"}, // 0.04%
			{9232.14234386534, "optic_Arco_ghex_F"}, // 0.04%
			{9236.16318792092, "CUP_optic_CompM2_Black"}, // 0.04%
			{9240.1840319765, "optic_Holosight_blk_F"}, // 0.04%
			{9244.20487603209, "CUP_optic_CompM2_Desert"}, // 0.04%
			{9248.22572008767, "CUP_optic_PSO_1"}, // 0.04%
			{9252.24656414325, "CUP_optic_PSO_3"}, // 0.04%
			{9256.26740819884, "CUP_optic_Kobra"}, // 0.04%
			{9260.28825225442, "CUP_muzzle_Bizon"}, // 0.04%
			{9264.30909631, "CUP_muzzle_PB6P9"}, // 0.04%
			{9268.32994036559, "CUP_muzzle_PBS4"}, // 0.04%
			{9272.35078442117, "CUP_optic_PechenegScope"}, // 0.04%
			{9276.37162847675, "CUP_optic_HoloBlack"}, // 0.04%
			{9280.39247253234, "CUP_optic_HoloDesert"}, // 0.04%
			{9284.41331658792, "CUP_optic_SB_11_4x20_PM"}, // 0.04%
			{9288.4341606435, "CUP_optic_AN_PVS_4"}, // 0.04%
			{9292.45500469909, "CUP_optic_TrijiconRx01_desert"}, // 0.04%
			{9296.47584875467, "CUP_optic_RCO"}, // 0.04%
			{9300.49669281025, "CUP_optic_CompM4"}, // 0.04%
			{9304.51753686584, "CUP_optic_SUSAT"}, // 0.04%
			{9308.53838092142, "CUP_muzzle_snds_XM8"}, // 0.04%
			{9312.55922497701, "CUP_optic_ACOG"}, // 0.04%
			{9316.58006903259, "optic_ERCO_snd_F"}, // 0.04%
			{9320.60091308817, "optic_ERCO_khk_F"}, // 0.04%
			{9324.62175714376, "optic_ERCO_blk_F"}, // 0.04%
			{9328.64260119934, "optic_DMS_ghex_F"}, // 0.04%
			{9332.66344525492, "optic_DMS"}, // 0.04%
			{9336.68428931051, "optic_MRCO"}, // 0.04%
			{9340.70513336609, "acc_pointer_IR"}, // 0.04%
			{9344.72597742167, "optic_Holosight_khk_F"}, // 0.04%
			{9348.74682147726, "optic_Hamr_khk_F"}, // 0.04%
			{9352.76766553284, "optic_Holosight"}, // 0.04%
			{9356.78850958842, "muzzle_snds_M"}, // 0.04%
			{9360.80935364401, "muzzle_snds_H"}, // 0.04%
			{9364.68866398883, "V_I_G_resistanceLeader_F"}, // 0.04%
			{9368.52008161335, "Exile_Item_MobilePhone"}, // 0.04%
			{9372.35149923788, "ItemGPS"}, // 0.04%
			{9376.14817602901, "srifle_DMR_07_blk_F"}, // 0.04%
			{9379.94485282015, "srifle_DMR_07_hex_F"}, // 0.04%
			{9383.74152961129, "srifle_DMR_07_ghex_F"}, // 0.04%
			{9387.46447619942, "30Rnd_556x45_Stanag"}, // 0.04%
			{9391.18742278754, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9394.91036937567, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9398.6333159638, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9402.1663854946, "H_Booniehat_tna_F"}, // 0.04%
			{9405.69945502541, "H_Cap_grn_Syndikat_F"}, // 0.04%
			{9409.23252455622, "H_Cap_blk_Syndikat_F"}, // 0.04%
			{9412.76559408703, "H_Cap_tan_Syndikat_F"}, // 0.04%
			{9416.29866361783, "H_Cap_oli_Syndikat_F"}, // 0.04%
			{9419.83173314864, "H_MilCap_gen_F"}, // 0.04%
			{9423.36480267945, "H_MilCap_ghex_F"}, // 0.04%
			{9426.89787221026, "H_Shemag_olive"}, // 0.04%
			{9430.43094174106, "H_ShemagOpen_tan"}, // 0.04%
			{9433.96401127187, "H_ShemagOpen_khk"}, // 0.04%
			{9437.49708080268, "H_Shemag_olive_hs"}, // 0.04%
			{9441.03015033349, "H_FakeHeadgear_Syndikat_F"}, // 0.04%
			{9444.56321986429, "H_Shemag_tan"}, // 0.04%
			{9448.0962893951, "H_Shemag_khk"}, // 0.04%
			{9451.62935892591, "H_TurbanO_blk"}, // 0.04%
			{9455.16242845672, "H_Watchcap_sgg"}, // 0.04%
			{9458.69549798752, "H_Watchcap_camo"}, // 0.04%
			{9462.22856751833, "H_MilCap_tna_F"}, // 0.04%
			{9465.73291290661, "H_HelmetIA_net"}, // 0.04%
			{9469.23725829489, "H_HelmetB_black"}, // 0.04%
			{9472.74160368317, "H_HelmetB_grass"}, // 0.04%
			{9476.24594907146, "H_HelmetB_TI_tna_F"}, // 0.04%
			{9479.75029445974, "H_HelmetCrew_O_ghex_F"}, // 0.04%
			{9483.25463984802, "H_HelmetLeaderO_ghex_F"}, // 0.04%
			{9486.7589852363, "H_HelmetSpecO_ghex_F"}, // 0.04%
			{9490.26333062458, "H_HelmetB_tna_F"}, // 0.04%
			{9493.76767601286, "H_Beret_gen_F"}, // 0.04%
			{9497.27202140114, "H_HelmetB_Light_tna_F"}, // 0.04%
			{9500.77636678942, "H_HelmetB_Enh_tna_F"}, // 0.04%
			{9504.2807121777, "H_Helmet_Skate"}, // 0.04%
			{9507.78505756598, "H_BandMask_demon"}, // 0.04%
			{9511.28940295426, "H_BandMask_reaper"}, // 0.04%
			{9514.79374834254, "H_BandMask_khk"}, // 0.04%
			{9518.29809373083, "H_HelmetB_light_sand"}, // 0.04%
			{9521.80243911911, "H_HelmetB_light_black"}, // 0.04%
			{9525.30678450739, "H_HelmetB_light_desert"}, // 0.04%
			{9528.81112989567, "H_HelmetB_light_grass"}, // 0.04%
			{9532.31547528395, "H_HelmetB_sand"}, // 0.04%
			{9535.81982067223, "H_HelmetB_desert"}, // 0.04%
			{9539.32416606051, "H_HelmetB_snakeskin"}, // 0.04%
			{9542.82851144879, "H_HelmetIA_camo"}, // 0.04%
			{9546.33285683707, "H_HelmetB_light_snakeskin"}, // 0.04%
			{9549.79776425475, "Exile_Weapon_AK74"}, // 0.03%
			{9553.26267167242, "CUP_arifle_Mk16_STD_EGLM"}, // 0.03%
			{9556.72757909009, "CUP_arifle_Sa58P"}, // 0.03%
			{9560.19248650777, "CUP_arifle_AK107"}, // 0.03%
			{9563.65739392544, "CUP_arifle_AK74M"}, // 0.03%
			{9567.12230134312, "Exile_Weapon_CZ550"}, // 0.03%
			{9570.58720876079, "Exile_Weapon_AK47"}, // 0.03%
			{9574.05211617847, "Exile_Weapon_AK74_GL"}, // 0.03%
			{9577.51702359614, "Exile_Weapon_AK107_GL"}, // 0.03%
			{9580.98193101381, "Exile_Weapon_AK107"}, // 0.03%
			{9584.44683843149, "CUP_arifle_CZ805_B"}, // 0.03%
			{9587.91174584916, "CUP_arifle_CZ805_A1"}, // 0.03%
			{9591.37665326684, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.03%
			{9594.72666220019, "CUP_srifle_CZ750"}, // 0.03%
			{9598.04231206757, "U_I_G_resistanceLeader_F"}, // 0.03%
			{9601.27103478486, "5Rnd_127x108_Mag"}, // 0.03%
			{9604.49975750215, "7Rnd_408_Mag"}, // 0.03%
			{9607.71643274662, "CUP_muzzle_snds_G36_black"}, // 0.03%
			{9610.93310799109, "CUP_muzzle_snds_Mk12"}, // 0.03%
			{9614.14978323556, "CUP_optic_Elcan"}, // 0.03%
			{9617.36645848003, "CUP_muzzle_snds_L85"}, // 0.03%
			{9620.2697995556, "CUP_srifle_G22_des"}, // 0.03%
			{9623.10555273165, "U_O_CombatUniform_oucamo"}, // 0.03%
			{9625.94130590769, "U_O_V_Soldier_Viper_hex_F"}, // 0.03%
			{9628.77705908373, "U_I_OfficerUniform"}, // 0.03%
			{9631.61281225977, "U_O_OfficerUniform_ocamo"}, // 0.03%
			{9634.44856543582, "U_O_SpecopsUniform_ocamo"}, // 0.03%
			{9637.28431861186, "U_O_SpecopsUniform_blk"}, // 0.03%
			{9640.1200717879, "U_O_CombatUniform_ocamo"}, // 0.03%
			{9642.95582496395, "U_B_Wetsuit"}, // 0.03%
			{9645.79157813999, "U_I_Wetsuit"}, // 0.03%
			{9648.62733131603, "U_O_V_Soldier_Viper_F"}, // 0.03%
			{9651.46308449208, "U_O_Wetsuit"}, // 0.03%
			{9654.23501042622, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.03%
			{9657.00693636035, "CUP_arifle_Sa58RIS2_gl"}, // 0.03%
			{9659.77886229449, "CUP_arifle_Sa58RIS1"}, // 0.03%
			{9662.55078822863, "CUP_arifle_XM8_Railed"}, // 0.03%
			{9665.32271416277, "CUP_arifle_Mk16_CQC_FG"}, // 0.03%
			{9668.09464009691, "arifle_MX_GL_khk_F"}, // 0.03%
			{9670.86656603105, "CUP_arifle_AK107_kobra"}, // 0.03%
			{9673.63849196519, "CUP_arifle_AK107_GL"}, // 0.03%
			{9676.41041789933, "arifle_MX_khk_F"}, // 0.03%
			{9679.18234383347, "arifle_MX_F"}, // 0.03%
			{9681.95426976761, "CUP_arifle_AKM"}, // 0.03%
			{9684.72619570175, "CUP_arifle_CZ805_GL"}, // 0.03%
			{9687.49812163589, "arifle_MXC_khk_F"}, // 0.03%
			{9690.22828246718, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9692.81126064101, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9695.23669583338, "CUP_arifle_Mk16_CQC"}, // 0.02%
			{9697.66213102576, "CUP_arifle_AK47"}, // 0.02%
			{9700.08756621813, "CUP_arifle_Sa58P_des"}, // 0.02%
			{9702.5130014105, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9704.93843660287, "CUP_arifle_M4A1"}, // 0.02%
			{9707.36387179524, "CUP_arifle_M16A2"}, // 0.02%
			{9709.78930698762, "CUP_arifle_M4A1_camo"}, // 0.02%
			{9712.21474217999, "arifle_MXC_F"}, // 0.02%
			{9714.64017737236, "arifle_AKS_F"}, // 0.02%
			{9716.87394532523, "20Rnd_762x51_Mag"}, // 0.02%
			{9719.10771327811, "30Rnd_762x39_AK47_M"}, // 0.02%
			{9721.34148123099, "30Rnd_545x39_Mag_F"}, // 0.02%
			{9723.57524918386, "30Rnd_545x39_Mag_Green_F"}, // 0.02%
			{9725.80901713674, "30Rnd_545x39_Mag_Tracer_F"}, // 0.02%
			{9728.04278508961, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.02%
			{9730.27655304249, "30Rnd_580x42_Mag_F"}, // 0.02%
			{9732.51032099536, "30Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9734.74408894824, "100Rnd_580x42_Mag_F"}, // 0.02%
			{9736.97785690111, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.02%
			{9739.21162485399, "100Rnd_580x42_Mag_Tracer_F"}, // 0.02%
			{9741.44539280687, "150Rnd_556x45_Drum_Mag_F"}, // 0.02%
			{9743.67916075974, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.02%
			{9745.91292871262, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.02%
			{9748.14669666549, "CUP_30Rnd_545x39_AK_M"}, // 0.02%
			{9750.38046461837, "CUP_30Rnd_556x45_G36"}, // 0.02%
			{9752.61423257124, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.02%
			{9754.84800052412, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.02%
			{9757.08176847699, "CUP_30Rnd_556x45_Stanag"}, // 0.02%
			{9759.31553642987, "30Rnd_762x39_Mag_Tracer_F"}, // 0.02%
			{9761.54930438274, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.02%
			{9763.78307233562, "30Rnd_762x39_Mag_F"}, // 0.02%
			{9766.0168402885, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.02%
			{9768.25060824137, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.02%
			{9770.48437619425, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.02%
			{9772.71814414712, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.02%
			{9774.9519121, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.02%
			{9777.18568005287, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.02%
			{9779.41944800575, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.02%
			{9781.65321595862, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.02%
			{9783.8869839115, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.02%
			{9786.12075186438, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.02%
			{9788.35451981725, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.02%
			{9790.58828777013, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.02%
			{9792.822055723, "Exile_Magazine_5Rnd_22LR"}, // 0.02%
			{9795.05582367588, "Exile_Magazine_10Rnd_762x54"}, // 0.02%
			{9797.28959162875, "30Rnd_65x39_caseless_mag"}, // 0.02%
			{9799.52335958163, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.02%
			{9801.7571275345, "Exile_Magazine_10Rnd_9x39"}, // 0.02%
			{9803.99089548738, "Exile_Magazine_20Rnd_9x39"}, // 0.02%
			{9806.22466344025, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.02%
			{9808.45843139313, "30Rnd_762x39_Mag_Green_F"}, // 0.02%
			{9810.57827311161, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.02%
			{9812.6981148301, "130Rnd_338_Mag"}, // 0.02%
			{9814.81795654858, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.02%
			{9816.89690099919, "Exile_Weapon_SVD"}, // 0.02%
			{9818.97584544979, "CUP_arifle_M4A3_desert"}, // 0.02%
			{9821.0547899004, "Exile_Weapon_SVDCamo"}, // 0.02%
			{9823.133734351, "arifle_MXM_F"}, // 0.02%
			{9825.2126788016, "Exile_Weapon_VSSVintorez"}, // 0.02%
			{9827.2231008294, "CUP_acc_ANPEQ_2_camo"}, // 0.02%
			{9829.23352285719, "CUP_acc_ANPEQ_2_grey"}, // 0.02%
			{9831.24394488498, "optic_NVS"}, // 0.02%
			{9833.25436691277, "CUP_acc_ANPEQ_2_desert"}, // 0.02%
			{9835.23993842644, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9837.22550994011, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9839.21108145377, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9841.19665296744, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9843.18222448111, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9844.94875924651, "H_Beret_grn_SF"}, // 0.02%
			{9846.71529401192, "H_Beret_blk"}, // 0.02%
			{9848.48182877732, "H_Beret_red"}, // 0.02%
			{9850.24836354272, "H_Beret_grn"}, // 0.02%
			{9852.01489830813, "H_Beret_Colonel"}, // 0.02%
			{9853.78143307353, "H_Beret_02"}, // 0.02%
			{9855.54796783893, "H_Beret_ocamo"}, // 0.02%
			{9857.31450260434, "H_Beret_brn_SF"}, // 0.02%
			{9859.06667529848, "H_HelmetO_ghex_F"}, // 0.02%
			{9860.81884799262, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9862.57102068676, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9864.3231933809, "H_HelmetSpecO_blk"}, // 0.02%
			{9866.07536607505, "H_HelmetCrew_B"}, // 0.02%
			{9867.82753876919, "H_HelmetCrew_O"}, // 0.02%
			{9869.57971146333, "H_HelmetCrew_I"}, // 0.02%
			{9871.33188415747, "H_PilotHelmetFighter_B"}, // 0.02%
			{9873.08405685161, "H_PilotHelmetFighter_O"}, // 0.02%
			{9874.83622954575, "H_PilotHelmetHeli_B"}, // 0.02%
			{9876.58840223989, "H_HelmetO_ocamo"}, // 0.02%
			{9878.34057493403, "H_PilotHelmetHeli_O"}, // 0.02%
			{9880.09274762818, "H_HelmetB_camo"}, // 0.02%
			{9881.84492032232, "H_CrewHelmetHeli_B"}, // 0.02%
			{9883.59709301646, "H_CrewHelmetHeli_O"}, // 0.02%
			{9885.3492657106, "H_CrewHelmetHeli_I"}, // 0.02%
			{9887.10143840474, "H_HelmetO_oucamo"}, // 0.02%
			{9888.85361109888, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9890.60578379302, "H_PilotHelmetHeli_I"}, // 0.02%
			{9892.35795648717, "H_PilotHelmetFighter_I"}, // 0.02%
			{9894.09533156162, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9895.83270663608, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9897.57008171054, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9899.30253541938, "arifle_AK12_F"}, // 0.02%
			{9901.03498912822, "arifle_CTARS_blk_F"}, // 0.02%
			{9902.76744283705, "arifle_CTARS_hex_F"}, // 0.02%
			{9904.49989654589, "arifle_SPAR_01_blk_F"}, // 0.02%
			{9906.23235025473, "arifle_SPAR_01_khk_F"}, // 0.02%
			{9907.96480396356, "arifle_SPAR_01_snd_F"}, // 0.02%
			{9909.6972576724, "arifle_SPAR_01_GL_blk_F"}, // 0.02%
			{9911.42971138124, "arifle_SPAR_01_GL_khk_F"}, // 0.02%
			{9913.16216509008, "arifle_SPAR_01_GL_snd_F"}, // 0.02%
			{9914.89461879891, "arifle_SPAR_02_blk_F"}, // 0.02%
			{9916.62707250775, "arifle_SPAR_02_khk_F"}, // 0.02%
			{9918.35952621659, "arifle_SPAR_02_snd_F"}, // 0.02%
			{9920.09197992542, "arifle_SPAR_03_blk_F"}, // 0.02%
			{9921.82443363426, "arifle_SPAR_03_khk_F"}, // 0.02%
			{9923.5568873431, "arifle_SPAR_03_snd_F"}, // 0.02%
			{9925.28934105194, "CUP_arifle_L86A2"}, // 0.02%
			{9927.02179476077, "CUP_arifle_L85A2_NG"}, // 0.02%
			{9928.75424846961, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9930.48670217845, "CUP_arifle_G36A"}, // 0.02%
			{9932.21915588728, "CUP_arifle_G36C"}, // 0.02%
			{9933.95160959612, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.02%
			{9935.68406330496, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.02%
			{9937.41651701379, "CUP_arifle_AK74_GL"}, // 0.02%
			{9939.14897072263, "CUP_arifle_AKS74U"}, // 0.02%
			{9940.88142443147, "CUP_arifle_AK107_GL_pso"}, // 0.02%
			{9942.61387814031, "CUP_arifle_Mk16_SV"}, // 0.02%
			{9944.34633184914, "CUP_arifle_AKS_Gold"}, // 0.02%
			{9946.07878555798, "arifle_CTAR_GL_blk_F"}, // 0.02%
			{9947.81123926682, "arifle_CTAR_ghex_F"}, // 0.02%
			{9949.54369297565, "arifle_CTARS_ghex_F"}, // 0.02%
			{9951.27614668449, "arifle_CTAR_blk_F"}, // 0.02%
			{9953.00860039333, "arifle_AK12_GL_F"}, // 0.02%
			{9954.74105410217, "arifle_AKM_F"}, // 0.02%
			{9956.473507811, "arifle_AKM_FL_F"}, // 0.02%
			{9958.20596151984, "arifle_ARX_blk_F"}, // 0.02%
			{9959.93841522868, "Exile_Weapon_DMR"}, // 0.02%
			{9961.67086893751, "arifle_ARX_ghex_F"}, // 0.02%
			{9963.40332264635, "arifle_ARX_hex_F"}, // 0.02%
			{9965.13577635519, "arifle_CTAR_hex_F"}, // 0.02%
			{9966.75013771383, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.02%
			{9968.36449907248, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.02%
			{9969.97886043113, "CUP_10Rnd_127x99_M107"}, // 0.02%
			{9971.59322178977, "CUP_5Rnd_127x99_as50_M"}, // 0.02%
			{9973.08240042502, "CUP_100Rnd_556x45_BetaCMag"}, // 0.01%
			{9974.46836339209, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9975.85432635916, "arifle_Mk20_GL_F"}, // 0.01%
			{9977.24028932623, "arifle_MX_GL_F"}, // 0.01%
			{9978.6262522933, "arifle_Katiba_GL_F"}, // 0.01%
			{9980.01221526037, "arifle_TRG21_GL_F"}, // 0.01%
			{9981.39817822744, "arifle_MXM_Black_F"}, // 0.01%
			{9982.78414119451, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9984.02512339055, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9985.14179303501, "CUP_srifle_AWM_des"}, // 0.01%
			{9986.25846267946, "CUP_srifle_AWM_wdl"}, // 0.01%
			{9987.29793490476, "arifle_MXM_khk_F"}, // 0.01%
			{9988.33740713006, "arifle_Katiba_F"}, // 0.01%
			{9989.37687935537, "arifle_Mk20C_F"}, // 0.01%
			{9990.41635158067, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9991.45582380597, "arifle_MX_Black_F"}, // 0.01%
			{9992.49529603127, "arifle_TRG20_F"}, // 0.01%
			{9993.53476825658, "arifle_MXC_Black_F"}, // 0.01%
			{9994.57424048188, "arifle_TRG21_F"}, // 0.01%
			{9995.61371270718, "arifle_MX_GL_Black_F"}, // 0.01%
			{9996.65318493248, "Exile_Weapon_AKS_Gold"}, // 0.01%
			{9997.69265715778, "arifle_Mk20_F"}, // 0.01%
			{9998.66127397297, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{9999.35425545651, "arifle_SDAR_F"}, // 0.01%
			{9999.99999999997, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine01
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine01
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
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

	  H_MilCap_ocamo
	  CUP_acc_Glock17_Flashlight
	  H_HelmetB_light_snakeskin
	  Exile_Item_Vishpirin
	  Exile_Item_ZipTie
	  Exile_Item_Heatpack
	  Exile_Magazine_6Rnd_45ACP
	  B_OutdoorPack_blk
	  B_Carryall_cbr
	  Binocular
	  O_NVGoggles_hex_F
	  30Rnd_9x21_Mag
	  B_Kitbag_mcamo
	  B_ViperHarness_hex_F
	  B_AssaultPack_cbr
	  U_B_CTRG_2
	  B_FieldPack_oucamo
	  Exile_Item_Heatpack
	  CUP_muzzle_snds_MicroUzi
	  B_Bergen_tna_F
	  H_MilCap_ocamo
	  B_OutdoorPack_blk
	  muzzle_snds_acp
	  Exile_Weapon_Makarov
	  hgun_Pistol_Signal_F
	  HandGrenade
	  B_Carryall_khk
	  MiniGrenade
	  B_ViperLightHarness_khk_F
	  B_Carryall_ghex_F
	  hgun_P07_khk_F
	  U_IG_Guerilla3_2
	  hgun_Pistol_heavy_02_F
	  HandGrenade
	  B_ViperHarness_ghex_F
	  B_ViperLightHarness_khk_F
	  MiniGrenade
	  ItemWatch
	  U_IG_Guerilla2_1
	  ItemMap
	  B_ViperLightHarness_khk_F
	  H_MilCap_dgtl
	  U_B_PilotCoveralls
	  hgun_Pistol_Signal_F
	  U_B_CTRG_Soldier_F
	  Exile_Weapon_Taurus
	  B_AssaultPack_cbr
	  U_IG_Guerilla1_1
	  U_B_CTRG_3
	  U_I_GhillieSuit
	  Exile_Item_ZipTie
	  HandGrenade
	  Exile_Item_MobilePhone
	  Exile_Headgear_GasMask
	  U_IG_Guerilla3_2
	  B_ViperLightHarness_ghex_F
	  U_IG_Guerilla2_3
	  B_AssaultPack_sgg
	  B_Kitbag_cbr
	  H_HelmetSpecB_paint1
	  B_ViperLightHarness_oli_F
	  CUP_acc_Glock17_Flashlight
	  U_IG_Guerilla2_3
	  H_HelmetCrew_I
	  optic_MRD
	  U_IG_Guerilla1_1
	  U_B_CTRG_2
	  U_IG_Guerilla2_2
	  Exile_Item_ZipTie
	  11Rnd_45ACP_Mag
	  B_ViperHarness_oli_F
	  CUP_hgun_Phantom
	  U_O_GhillieSuit
	  ItemCompass
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  Exile_Item_Heatpack
	  U_IG_Guerilla2_2
	  U_B_T_Soldier_SL_F
	  Exile_Item_ZipTie
	  B_Bergen_tna_F
	  Exile_Item_ZipTie
	  ItemRadio
	  H_HelmetB_paint
	  B_AssaultPack_tna_F
	  11Rnd_45ACP_Mag
	  B_Carryall_ocamo
	  U_I_C_Soldier_Para_4_F
	  Exile_Weapon_Makarov
	  H_HelmetB_Enh_tna_F
	  U_IG_Guerilla2_2
	  U_B_GhillieSuit
	  B_Kitbag_sgg
	  Rangefinder
	  CUP_muzzle_snds_MicroUzi
	  B_AssaultPack_cbr
	  B_Kitbag_sgg
	  H_HelmetSpecB_blk
	  muzzle_snds_acp
	  CUP_acc_CZ_M3X
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

	  optic_SOS_khk_F
	  srifle_DMR_06_camo_F
	  U_B_FullGhillie_ard
	  MiniGrenade
	  Exile_Item_ZipTie
	  srifle_EBR_F
	  srifle_DMR_07_hex_F
	  srifle_GM6_F
	  srifle_DMR_04_Tan_F
	  CUP_srifle_M40A3
	  B_Bergen_dgtl_F
	  srifle_DMR_07_blk_F
	  srifle_DMR_02_sniper_F
	  10Rnd_127x54_Mag
	  srifle_DMR_05_blk_F
	  srifle_DMR_05_hex_F
	  CUP_srifle_CZ750
	  HandGrenade
	  srifle_DMR_06_olive_F
	  Exile_Item_Bandage
	  optic_SOS_khk_F
	  srifle_GM6_ghex_F
	  srifle_LRR_tna_F
	  IEDUrbanSmall_Remote_Mag
	  IEDLandSmall_Remote_Mag
	  DemoCharge_Remote_Mag
	  U_B_GhillieSuit
	  srifle_GM6_F
	  srifle_DMR_06_olive_F
	  srifle_DMR_04_F
	  B_Carryall_oucamo
	  srifle_DMR_06_olive_F
	  APERSTripMine_Wire_Mag
	  DemoCharge_Remote_Mag
	  APERSBoundingMine_Range_Mag
	  srifle_DMR_06_camo_F
	  srifle_GM6_F
	  srifle_LRR_F
	  U_I_GhillieSuit
	  CUP_srifle_SVD
	  srifle_DMR_06_olive_F
	  optic_AMS_snd
	  H_HelmetB
	  IEDLandSmall_Remote_Mag
	  muzzle_snds_93mmg_tan
	  B_Carryall_mcamo
	  srifle_DMR_05_blk_F
	  U_O_GhillieSuit
	  optic_KHS_old
	  CUP_srifle_AWM_wdl
	  Exile_Item_ZipTie
	  DemoCharge_Remote_Mag
	  H_HelmetSpecO_ghex_F
	  optic_LRPS_ghex_F
	  srifle_DMR_03_tan_F
	  srifle_DMR_03_F
	  srifle_DMR_04_F
	  CUP_srifle_M24_wdl
	  srifle_DMR_02_F
	  CUP_srifle_AS50
	  srifle_DMR_03_khaki_F
	  srifle_DMR_06_camo_F
	  srifle_DMR_04_F
	  H_CrewHelmetHeli_I
	  B_Carryall_ghex_F
	  U_O_GhillieSuit
	  H_MilCap_blue
	  U_I_GhillieSuit
	  Exile_Item_ZipTie
	  Exile_Item_Vishpirin
	  U_O_T_FullGhillie_tna_F
	  B_Carryall_ghex_F
	  muzzle_snds_338_sand
	  SatchelCharge_Remote_Mag
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  HandGrenade
	  U_B_GhillieSuit
	  muzzle_snds_338_black
	  Exile_Item_ZipTie
	  Exile_Item_Bandage
	  Exile_Item_ZipTie
	  SatchelCharge_Remote_Mag
	  H_HelmetIA_net
	  srifle_DMR_05_tan_F
	  Exile_Item_Vishpirin
	  CUP_srifle_VSSVintorez
	  Exile_Item_InstaDoc
	  IEDUrbanSmall_Remote_Mag
	  20Rnd_650x39_Cased_Mag_F
	  U_B_GhillieSuit
	  CUP_srifle_AWM_des
	  srifle_DMR_02_camo_F
	  srifle_DMR_03_F
	  srifle_DMR_06_olive_F
	  srifle_DMR_05_blk_F
	  srifle_DMR_02_camo_F
	  H_HelmetB_black
	  srifle_LRR_tna_F
	  srifle_DMR_06_camo_F
	*/
	class Radiation
	{
		count = 201;
		half = 8873.81239758777;
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
			{8330.53104282649, "muzzle_snds_338_sand"}, // 0.26%
			{8356.98606928151, "muzzle_snds_B"}, // 0.26%
			{8383.44109573654, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8409.89612219157, "muzzle_snds_338_black"}, // 0.26%
			{8436.35114864659, "muzzle_snds_338_green"}, // 0.26%
			{8462.80617510162, "muzzle_snds_93mmg"}, // 0.26%
			{8488.61595700896, "Exile_Headgear_GasMask"}, // 0.26%
			{8514.42573891631, "H_MilCap_ocamo"}, // 0.26%
			{8540.23552082365, "H_MilCap_mcamo"}, // 0.26%
			{8566.04530273099, "H_MilCap_dgtl"}, // 0.26%
			{8591.85508463834, "H_MilCap_oucamo"}, // 0.26%
			{8617.66486654568, "H_MilCap_rucamo"}, // 0.26%
			{8643.47464845302, "H_MilCap_blue"}, // 0.26%
			{8667.34384525455, "srifle_DMR_05_hex_F"}, // 0.24%
			{8691.21304205608, "srifle_DMR_05_tan_F"}, // 0.24%
			{8715.08223885761, "srifle_DMR_05_blk_F"}, // 0.24%
			{8737.75797581906, "optic_KHS_tan"}, // 0.23%
			{8760.43371278051, "optic_AMS"}, // 0.23%
			{8783.10944974196, "optic_KHS_old"}, // 0.23%
			{8805.78518670341, "optic_AMS_khk"}, // 0.23%
			{8828.46092366486, "optic_AMS_snd"}, // 0.23%
			{8851.13666062631, "optic_KHS_hex"}, // 0.23%
			{8873.81239758777, "optic_KHS_blk"}, // 0.23%
			{8895.67828680059, "optic_DMS"}, // 0.22%
			{8916.7343282648, "optic_SOS"}, // 0.21%
			{8937.790369729, "optic_SOS_khk_F"}, // 0.21%
			{8958.84641119321, "optic_LRPS"}, // 0.21%
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
			{9190.56162922002, "muzzle_snds_B"}, // 0.15%
			{9204.88314730093, "MMG_02_black_F"}, // 0.14%
			{9219.20466538185, "MMG_02_sand_F"}, // 0.14%
			{9233.52618346277, "CUP_srifle_AS50"}, // 0.14%
			{9247.84770154368, "MMG_02_camo_F"}, // 0.14%
			{9260.75259249735, "H_HelmetB_snakeskin"}, // 0.13%
			{9273.65748345103, "H_HelmetB_desert"}, // 0.13%
			{9286.5623744047, "H_HelmetB_black"}, // 0.13%
			{9299.46726535837, "H_HelmetB_sand"}, // 0.13%
			{9312.37215631204, "H_HelmetB_light_grass"}, // 0.13%
			{9325.27704726572, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9338.18193821939, "H_HelmetB_light_desert"}, // 0.13%
			{9351.08682917306, "H_HelmetB_grass"}, // 0.13%
			{9363.99172012673, "H_HelmetIA_net"}, // 0.13%
			{9376.8966110804, "H_Helmet_Skate"}, // 0.13%
			{9389.80150203408, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9402.70639298775, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9415.61128394142, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9428.51617489509, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9441.42106584877, "H_HelmetB_tna_F"}, // 0.13%
			{9454.32595680244, "H_Beret_gen_F"}, // 0.13%
			{9467.23084775611, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9480.13573870978, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9493.04062966346, "H_HelmetB_light_sand"}, // 0.13%
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
			{9640.95174746158, "U_O_FullGhillie_lsh"}, // 0.12%
			{9652.62308266232, "U_O_FullGhillie_sard"}, // 0.12%
			{9664.29441786307, "U_I_FullGhillie_ard"}, // 0.12%
			{9675.96575306381, "U_I_FullGhillie_lsh"}, // 0.12%
			{9687.63708826456, "U_I_FullGhillie_sard"}, // 0.12%
			{9699.30842346531, "U_B_FullGhillie_sard"}, // 0.12%
			{9710.97975866605, "U_B_FullGhillie_ard"}, // 0.12%
			{9722.6510938668, "U_B_FullGhillie_lsh"}, // 0.12%
			{9733.94649842063, "20Rnd_762x51_Mag"}, // 0.11%
			{9744.64740799795, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.11%
			{9754.75382259874, "10Rnd_762x54_Mag"}, // 0.10%
			{9764.30150131935, "MMG_01_hex_F"}, // 0.10%
			{9773.84918003997, "MMG_01_tan_F"}, // 0.10%
			{9783.36109966425, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{9792.27852431201, "CUP_10Rnd_762x51_CZ750"}, // 0.09%
			{9801.19594895977, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.09%
			{9809.294426446, "muzzle_snds_B_khk_F"}, // 0.08%
			{9817.39290393223, "muzzle_snds_B_snd_F"}, // 0.08%
			{9825.12133862696, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{9832.28209766742, "CUP_launch_RPG7V"}, // 0.07%
			{9839.44285670788, "CUP_launch_M136"}, // 0.07%
			{9845.89530218471, "H_HelmetO_ghex_F"}, // 0.06%
			{9852.34774766155, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9858.80019313838, "H_HelmetO_ocamo"}, // 0.06%
			{9865.25263861522, "H_HelmetSpecO_blk"}, // 0.06%
			{9871.70508409206, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9878.15752956889, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9884.60997504573, "H_HelmetO_oucamo"}, // 0.06%
			{9891.06242052256, "H_CrewHelmetHeli_I"}, // 0.06%
			{9897.5148659994, "H_HelmetCrew_O"}, // 0.06%
			{9903.96731147624, "H_CrewHelmetHeli_B"}, // 0.06%
			{9910.41975695307, "H_HelmetCrew_I"}, // 0.06%
			{9916.87220242991, "H_PilotHelmetFighter_B"}, // 0.06%
			{9923.32464790675, "H_PilotHelmetFighter_O"}, // 0.06%
			{9929.77709338358, "H_PilotHelmetFighter_I"}, // 0.06%
			{9936.22953886042, "H_PilotHelmetHeli_B"}, // 0.06%
			{9942.68198433725, "H_PilotHelmetHeli_O"}, // 0.06%
			{9949.13442981409, "H_PilotHelmetHeli_I"}, // 0.06%
			{9955.58687529093, "H_CrewHelmetHeli_O"}, // 0.06%
			{9962.03932076776, "H_HelmetB_camo"}, // 0.06%
			{9968.4917662446, "H_HelmetCrew_B"}, // 0.06%
			{9974.43671600977, "7Rnd_408_Mag"}, // 0.06%
			{9980.38166577495, "5Rnd_127x108_Mag"}, // 0.06%
			{9985.13762558709, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9988.11010046967, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9991.08257535226, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9994.05505023485, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9997.02752511743, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9998.81101004699, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  srifle_GM6_F
	  Exile_Item_Magazine04
	  V_PlateCarrier1_tna_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  muzzle_snds_93mmg_tan
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  150Rnd_93x64_Mag
	  U_B_GhillieSuit
	  muzzle_snds_338_black
	  10Rnd_93x64_DMR_05_Mag
	  Exile_Item_PlasticBottleEmpty
	  srifle_DMR_05_tan_F
	  optic_KHS_tan
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  5Rnd_127x108_Mag
	  srifle_GM6_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  optic_AMS_snd
	  optic_AMS_snd
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  130Rnd_338_Mag
	  Exile_Item_PlasticBottleEmpty
	  optic_KHS_blk
	  Exile_Item_Magazine03
	  optic_AMS_khk
	  Exile_Item_Can_Empty
	  optic_AMS
	  130Rnd_338_Mag
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  130Rnd_338_Mag
	  srifle_DMR_02_camo_F
	  srifle_DMR_02_F
	  optic_AMS_snd
	  srifle_GM6_ghex_F
	  optic_KHS_blk
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  srifle_DMR_02_F
	  CUP_OG7_M
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  V_BandollierB_ghex_F
	  U_B_T_Sniper_F
	  Exile_Item_Magazine03
	  10Rnd_338_Mag
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_338_green
	  srifle_DMR_03_tan_F
	  srifle_LRR_F
	  Exile_Item_Magazine04
	  Exile_Item_Magazine01
	  MMG_02_camo_F
	  U_O_GhillieSuit
	  Exile_Item_Magazine01
	  srifle_DMR_05_tan_F
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  U_B_GhillieSuit
	  srifle_LRR_F
	  U_O_GhillieSuit
	  CUP_OG7_M
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  srifle_GM6_ghex_F
	  Exile_Item_Can_Empty
	  5Rnd_127x108_Mag
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  V_TacVest_gen_F
	  Exile_Item_PlasticBottleEmpty
	  U_B_GhillieSuit
	  muzzle_snds_338_black
	  CUP_5Rnd_127x99_as50_M
	  optic_AMS_snd
	  V_PlateCarrierSpec_blk
	  Exile_Item_Magazine02
	  CUP_OG7_M
	  muzzle_snds_338_green
	  Exile_Item_Magazine04
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_338_green
	  srifle_DMR_03_F
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	*/
	class SuperCrate
	{
		count = 100;
		half = 9147.096869308;
		halfIndex = 50;
		sum = 10000;
		items[] = 
		{
			{1190.47619047619, "Exile_Item_Can_Empty"}, // 11.90%
			{2380.95238095238, "Exile_Item_ToiletPaper"}, // 11.90%
			{3571.42857142857, "Exile_Item_PlasticBottleEmpty"}, // 11.90%
			{3869.04761904762, "Exile_Item_Magazine01"}, // 2.98%
			{4166.66666666667, "Exile_Item_Magazine02"}, // 2.98%
			{4464.28571428571, "Exile_Item_Magazine03"}, // 2.98%
			{4761.90476190476, "Exile_Item_Magazine04"}, // 2.98%
			{4920.63492063492, "U_I_GhillieSuit"}, // 1.59%
			{5079.36507936508, "muzzle_snds_338_black"}, // 1.59%
			{5238.09523809524, "muzzle_snds_338_green"}, // 1.59%
			{5396.8253968254, "muzzle_snds_338_sand"}, // 1.59%
			{5555.55555555556, "U_B_GhillieSuit"}, // 1.59%
			{5714.28571428572, "muzzle_snds_93mmg_tan"}, // 1.59%
			{5873.01587301588, "muzzle_snds_B"}, // 1.59%
			{6031.74603174603, "U_O_GhillieSuit"}, // 1.59%
			{6190.47619047619, "muzzle_snds_93mmg"}, // 1.59%
			{6326.5306122449, "optic_KHS_old"}, // 1.36%
			{6462.58503401361, "optic_KHS_tan"}, // 1.36%
			{6598.63945578232, "optic_KHS_hex"}, // 1.36%
			{6734.69387755102, "optic_KHS_blk"}, // 1.36%
			{6870.74829931973, "optic_AMS_snd"}, // 1.36%
			{7006.80272108844, "optic_AMS_khk"}, // 1.36%
			{7142.85714285715, "optic_AMS"}, // 1.36%
			{7272.72727272728, "10Rnd_93x64_DMR_05_Mag"}, // 1.30%
			{7387.93464599916, "srifle_LRR_tna_F"}, // 1.15%
			{7503.14201927105, "srifle_LRR_F"}, // 1.15%
			{7611.36712749616, "10Rnd_338_Mag"}, // 1.08%
			{7719.59223572127, "130Rnd_338_Mag"}, // 1.08%
			{7827.81734394638, "5Rnd_127x108_APDS_Mag"}, // 1.08%
			{7936.04245217149, "5Rnd_127x108_Mag"}, // 1.08%
			{8044.2675603966, "CUP_5Rnd_127x99_as50_M"}, // 1.08%
			{8152.49266862171, "150Rnd_93x64_Mag"}, // 1.08%
			{8239.07275520179, "CUP_M136_M"}, // 0.87%
			{8325.65284178188, "CUP_OG7_M"}, // 0.87%
			{8402.45775729647, "srifle_GM6_ghex_F"}, // 0.77%
			{8479.26267281106, "srifle_GM6_F"}, // 0.77%
			{8540.70660522274, "srifle_DMR_05_hex_F"}, // 0.61%
			{8602.15053763441, "srifle_DMR_05_blk_F"}, // 0.61%
			{8663.59447004609, "srifle_DMR_05_tan_F"}, // 0.61%
			{8717.3579109063, "srifle_DMR_04_Tan_F"}, // 0.54%
			{8771.12135176652, "srifle_DMR_04_F"}, // 0.54%
			{8817.20430107527, "srifle_DMR_02_F"}, // 0.46%
			{8863.28725038403, "srifle_DMR_02_camo_F"}, // 0.46%
			{8909.37019969278, "srifle_DMR_02_sniper_F"}, // 0.46%
			{8945.17399489507, "srifle_GM6_F"}, // 0.36%
			{8980.18800049731, "U_B_T_Sniper_F"}, // 0.35%
			{9015.20200609955, "U_B_T_Soldier_F"}, // 0.35%
			{9050.2160117018, "U_B_T_FullGhillie_tna_F"}, // 0.35%
			{9085.23001730404, "U_O_T_Sniper_F"}, // 0.35%
			{9120.24402290628, "U_O_T_FullGhillie_tna_F"}, // 0.35%
			{9147.096869308, "srifle_DMR_02_camo_F"}, // 0.27%
			{9173.94971570971, "srifle_DMR_02_F"}, // 0.27%
			{9200.80256211143, "CUP_srifle_M107_Base"}, // 0.27%
			{9223.84403676581, "srifle_DMR_03_woodland_F"}, // 0.23%
			{9246.88551142019, "srifle_DMR_03_tan_F"}, // 0.23%
			{9269.92698607456, "srifle_DMR_06_camo_F"}, // 0.23%
			{9292.96846072894, "srifle_DMR_03_F"}, // 0.23%
			{9316.00993538332, "srifle_DMR_06_olive_F"}, // 0.23%
			{9339.0514100377, "srifle_DMR_03_khaki_F"}, // 0.23%
			{9361.72714699915, "V_TacVest_gen_F"}, // 0.23%
			{9384.4028839606, "V_PlateCarrier2_rgr_noflag_F"}, // 0.23%
			{9407.07862092205, "V_PlateCarrier1_rgr_noflag_F"}, // 0.23%
			{9429.7543578835, "V_BandollierB_ghex_F"}, // 0.23%
			{9452.43009484495, "V_PlateCarrierGL_rgr"}, // 0.23%
			{9475.10583180641, "V_HarnessO_ghex_F"}, // 0.23%
			{9497.78156876786, "V_HarnessOGL_ghex_F"}, // 0.23%
			{9520.45730572931, "V_PlateCarrierGL_blk"}, // 0.23%
			{9543.13304269076, "V_PlateCarrierGL_mtp"}, // 0.23%
			{9565.80877965221, "V_PlateCarrierIAGL_dgtl"}, // 0.23%
			{9588.48451661366, "V_PlateCarrierSpec_blk"}, // 0.23%
			{9611.16025357512, "V_PlateCarrierSpec_mtp"}, // 0.23%
			{9633.83599053657, "V_PlateCarrierSpec_rgr"}, // 0.23%
			{9656.51172749802, "V_PlateCarrierIAGL_oli"}, // 0.23%
			{9679.18746445947, "V_TacChestrig_oli_F"}, // 0.23%
			{9701.86320142092, "V_TacChestrig_cbr_F"}, // 0.23%
			{9724.53893838237, "V_PlateCarrier1_tna_F"}, // 0.23%
			{9747.21467534382, "V_PlateCarrier2_tna_F"}, // 0.23%
			{9769.89041230528, "V_PlateCarrierSpec_tna_F"}, // 0.23%
			{9792.56614926673, "V_PlateCarrierGL_tna_F"}, // 0.23%
			{9815.24188622818, "V_TacChestrig_grn_F"}, // 0.23%
			{9833.14378382932, "srifle_DMR_05_hex_F"}, // 0.18%
			{9851.04568143047, "srifle_DMR_05_blk_F"}, // 0.18%
			{9868.94757903162, "srifle_DMR_05_tan_F"}, // 0.18%
			{9879.6887175923, "MMG_02_black_F"}, // 0.11%
			{9890.42985615299, "MMG_02_camo_F"}, // 0.11%
			{9901.17099471368, "MMG_02_sand_F"}, // 0.11%
			{9911.91213327436, "CUP_srifle_AS50"}, // 0.11%
			{9919.07289231482, "MMG_01_tan_F"}, // 0.07%
			{9926.23365135528, "MMG_01_hex_F"}, // 0.07%
			{9933.23645247573, "U_B_FullGhillie_lsh"}, // 0.07%
			{9940.23925359618, "U_B_FullGhillie_sard"}, // 0.07%
			{9947.24205471663, "U_O_FullGhillie_ard"}, // 0.07%
			{9954.24485583707, "U_O_FullGhillie_lsh"}, // 0.07%
			{9961.24765695752, "U_O_FullGhillie_sard"}, // 0.07%
			{9968.25045807797, "U_I_FullGhillie_lsh"}, // 0.07%
			{9975.25325919842, "U_I_FullGhillie_sard"}, // 0.07%
			{9982.25606031887, "U_B_FullGhillie_ard"}, // 0.07%
			{9989.25886143932, "U_I_FullGhillie_ard"}, // 0.07%
			{9994.62943071966, "CUP_launch_M136"}, // 0.05%
			{10000, "CUP_launch_RPG7V"} // 0.05%
		};
	};

	/**
	  Result of 100 rounds:

	  arifle_AKS_F
	  V_PlateCarrierGL_rgr
	  CUP_arifle_AK107_GL_kobra
	  CUP_srifle_M110
	  ItemCompass
	  CUP_20Rnd_762x51_DMR
	  Exile_Weapon_LeeEnfield
	  CUP_arifle_Mk20
	  CUP_srifle_L129A1
	  optic_KHS_hex
	  Exile_Magazine_30Rnd_545x39_AK_White
	  CUP_srifle_M24_wdl
	  U_B_CTRG_3
	  CUP_srifle_VSSVintorez
	  O_NVGoggles_urb_F
	  CUP_arifle_AK107_GL
	  CUP_optic_CompM2_Black
	  optic_DMS
	  V_PlateCarrierIAGL_dgtl
	  CUP_30Rnd_556x45_G36
	  arifle_AKS_F
	  CUP_arifle_Mk17_STD_FG
	  CUP_srifle_M14
	  CUP_optic_PechenegScope
	  CUP_optic_PSO_3
	  CUP_arifle_FNFAL_railed
	  V_PlateCarrier2_rgr
	  CUP_optic_ACOG
	  srifle_DMR_07_hex_F
	  B_Carryall_ghex_F
	  CUP_optic_HoloBlack
	  V_PlateCarrierIAGL_dgtl
	  U_O_PilotCoveralls
	  CUP_arifle_Mk17_STD_EGLM
	  srifle_DMR_03_woodland_F
	  30Rnd_545x39_Mag_Tracer_Green_F
	  CUP_optic_ACOG
	  ItemCompass
	  V_PlateCarrier1_blk
	  CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
	  30Rnd_545x39_Mag_Tracer_Green_F
	  5Rnd_127x108_Mag
	  U_O_Wetsuit
	  20Rnd_556x45_UW_mag
	  Exile_Magazine_20Rnd_762x51_DMR_Yellow
	  CUP_optic_CompM2_Desert
	  O_NVGoggles_urb_F
	  B_Carryall_oucamo
	  CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag
	  30Rnd_762x39_AK47_M
	  ItemCompass
	  CUP_arifle_Mk17_STD_EGLM
	  arifle_AKM_F
	  CUP_srifle_G22_des
	  APERSMine_Range_Mag
	  CUP_muzzle_snds_Mk12
	  B_Carryall_oli
	  CUP_20Rnd_TE1_Red_Tracer_762x51_M110
	  U_B_CTRG_Soldier_F
	  U_O_SpecopsUniform_blk
	  CUP_arifle_AK74M
	  CUP_muzzle_snds_M110
	  B_Carryall_oli
	  V_PlateCarrierGL_blk
	  CUP_optic_CompM4
	  B_Carryall_oucamo
	  CUP_arifle_AKM
	  U_B_GhillieSuit
	  ItemCompass
	  U_O_T_Soldier_F
	  CUP_arifle_CZ805_B
	  optic_ERCO_snd_F
	  Exile_Magazine_30Rnd_545x39_AK
	  muzzle_snds_B
	  ItemCompass
	  ItemCompass
	  optic_KHS_blk
	  U_B_GhillieSuit
	  B_Bergen_hex_F
	  ItemCompass
	  CUP_30Rnd_556x45_Stanag
	  ItemCompass
	  optic_LRPS
	  arifle_CTAR_GL_blk_F
	  NVGoggles
	  U_O_T_Soldier_F
	  20Rnd_762x51_Mag
	  100Rnd_580x42_Mag_Tracer_F
	  CUP_optic_PechenegScope
	  CUP_arifle_G36A
	  U_O_GhillieSuit
	  Exile_Magazine_30Rnd_545x39_AK_Green
	  U_B_CombatUniform_mcam_vest
	  CUP_10Rnd_762x54_SVD_M
	  V_PlateCarrierSpec_rgr
	  O_NVGoggles_ghex_F
	  U_B_CombatUniform_mcam_worn
	  arifle_SPAR_01_GL_blk_F
	  CUP_srifle_M14
	  20Rnd_650x39_Cased_Mag_F
	*/
	class ChopperCrash
	{
		count = 411;
		half = 7843.81313394711;
		halfIndex = 205;
		sum = 10000;
		items[] = 
		{
			{359.324469996407, "ItemCompass"}, // 3.59%
			{538.98670499461, "Rangefinder"}, // 1.80%
			{697.918682108405, "CUP_arifle_FNFAL"}, // 1.59%
			{821.885624257166, "DemoCharge_Remote_Mag"}, // 1.24%
			{927.840275666363, "CUP_srifle_M14"}, // 1.06%
			{1033.79492707556, "CUP_arifle_FNFAL_railed"}, // 1.06%
			{1139.74957848476, "CUP_arifle_Mk17_STD_EGLM"}, // 1.06%
			{1243.05536360872, "CUP_optic_ACOG"}, // 1.03%
			{1327.81908473608, "CUP_arifle_Mk20"}, // 0.85%
			{1412.58280586344, "CUP_arifle_Mk17_STD_FG"}, // 0.85%
			{1495.22743396261, "SatchelCharge_Remote_Mag"}, // 0.83%
			{1576.25157915788, "CUP_20Rnd_762x51_DMR"}, // 0.81%
			{1657.27572435315, "CUP_20Rnd_762x51_B_SCAR"}, // 0.81%
			{1738.29986954842, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.81%
			{1819.32401474368, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.81%
			{1900.34815993895, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.81%
			{1981.37230513422, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.81%
			{2062.39645032949, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.81%
			{2136.56470631593, "CUP_srifle_M110"}, // 0.74%
			{2205.43522973191, "optic_KHS_blk"}, // 0.69%
			{2274.30575314788, "optic_DMS"}, // 0.69%
			{2343.17627656386, "optic_AMS"}, // 0.69%
			{2412.04679997984, "optic_LRPS"}, // 0.69%
			{2480.91732339582, "optic_SOS"}, // 0.69%
			{2549.78784681179, "muzzle_snds_B"}, // 0.69%
			{2618.65837022777, "optic_KHS_hex"}, // 0.69%
			{2687.52889364375, "CUP_optic_SB_11_4x20_PM"}, // 0.69%
			{2756.39941705973, "CUP_muzzle_snds_M14"}, // 0.69%
			{2825.26994047571, "CUP_optic_LeupoldM3LR"}, // 0.69%
			{2890.08925663192, "CUP_20Rnd_762x51_L129_M"}, // 0.65%
			{2954.90857278814, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.65%
			{3019.72788894435, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.65%
			{3084.54720510056, "CUP_20Rnd_762x51_B_M110"}, // 0.65%
			{3142.03912029999, "O_NVGoggles_ghex_F"}, // 0.57%
			{3199.53103549941, "O_NVGoggles_urb_F"}, // 0.57%
			{3257.02295069884, "O_NVGoggles_hex_F"}, // 0.57%
			{3314.51486589826, "NVGoggles"}, // 0.57%
			{3372.00678109769, "NVGoggles_tna_F"}, // 0.57%
			{3424.98410680229, "CUP_srifle_L129A1_HG"}, // 0.53%
			{3477.96143250689, "CUP_srifle_L129A1"}, // 0.53%
			{3530.65431619428, "B_Carryall_cbr"}, // 0.53%
			{3583.34719988167, "B_Carryall_ghex_F"}, // 0.53%
			{3633.26677390131, "B_Carryall_khk"}, // 0.50%
			{3683.18634792094, "B_Carryall_oli"}, // 0.50%
			{3724.7859929373, "B_Carryall_ocamo"}, // 0.42%
			{3766.38563795367, "B_Carryall_mcamo"}, // 0.42%
			{3807.98528297003, "B_Carryall_oucamo"}, // 0.42%
			{3849.30759701962, "V_PlateCarrier1_rgr"}, // 0.41%
			{3890.6299110692, "APERSBoundingMine_Range_Mag"}, // 0.41%
			{3931.95222511879, "V_PlateCarrier1_blk"}, // 0.41%
			{3973.27453916838, "U_B_GhillieSuit"}, // 0.41%
			{4014.59685321796, "U_O_GhillieSuit"}, // 0.41%
			{4055.91916726755, "V_PlateCarrier2_rgr"}, // 0.41%
			{4097.24148131714, "IEDUrbanSmall_Remote_Mag"}, // 0.41%
			{4138.56379536672, "IEDLandSmall_Remote_Mag"}, // 0.41%
			{4179.88610941631, "U_I_GhillieSuit"}, // 0.41%
			{4221.2084234659, "V_PlateCarrier3_rgr"}, // 0.41%
			{4262.53073751548, "V_PlateCarrierIA2_dgtl"}, // 0.41%
			{4303.85305156507, "V_PlateCarrierIA1_dgtl"}, // 0.41%
			{4345.17536561465, "APERSMine_Range_Mag"}, // 0.41%
			{4386.49767966424, "V_PlateCarrierIAGL_dgtl"}, // 0.41%
			{4427.81999371383, "V_PlateCarrierSpec_rgr"}, // 0.41%
			{4469.14230776341, "APERSTripMine_Wire_Mag"}, // 0.41%
			{4510.464621813, "V_PlateCarrierGL_rgr"}, // 0.41%
			{4544.89988352099, "CUP_muzzle_snds_M110"}, // 0.34%
			{4577.40057996449, "20Rnd_650x39_Cased_Mag_F"}, // 0.33%
			{4609.78000515259, "acc_flashlight"}, // 0.32%
			{4640.73304938449, "CUP_5Rnd_762x51_M24"}, // 0.31%
			{4671.68609361639, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.31%
			{4702.63913784829, "CUP_10Rnd_762x54_SVD_M"}, // 0.31%
			{4733.5921820802, "CUP_srifle_SVD_des"}, // 0.31%
			{4763.56691766021, "srifle_EBR_F"}, // 0.30%
			{4793.54165324022, "srifle_DMR_01_F"}, // 0.30%
			{4823.2842017404, "30Rnd_65x39_caseless_green"}, // 0.30%
			{4853.02675024058, "30Rnd_556x45_Stanag_red"}, // 0.30%
			{4882.76929874076, "30Rnd_556x45_Stanag_green"}, // 0.30%
			{4912.51184724095, "30Rnd_556x45_Stanag"}, // 0.30%
			{4941.91723926125, "20Rnd_762x51_Mag"}, // 0.29%
			{4969.77497906996, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.28%
			{4997.60866210854, "CUP_srifle_SVD"}, // 0.28%
			{5024.7943950359, "U_B_CTRG_Soldier_urb_1_F"}, // 0.27%
			{5051.98012796326, "U_B_CTRG_3"}, // 0.27%
			{5079.16586089062, "U_B_CombatUniform_mcam"}, // 0.27%
			{5106.35159381798, "U_B_CombatUniform_mcam_tshirt"}, // 0.27%
			{5133.53732674534, "U_B_CombatUniform_mcam_vest"}, // 0.27%
			{5160.7230596727, "U_B_CombatUniform_mcam_worn"}, // 0.27%
			{5187.90879260006, "U_B_T_Soldier_AR_F"}, // 0.27%
			{5215.09452552742, "U_B_CTRG_2"}, // 0.27%
			{5242.28025845478, "U_B_CTRG_Soldier_F"}, // 0.27%
			{5269.46599138214, "U_B_CTRG_Soldier_2_F"}, // 0.27%
			{5296.6517243095, "U_B_CTRG_Soldier_3_F"}, // 0.27%
			{5323.83745723686, "U_O_T_Officer_F"}, // 0.27%
			{5351.02319016422, "U_B_GEN_Commander_F"}, // 0.27%
			{5378.20892309158, "U_B_GEN_Soldier_F"}, // 0.27%
			{5405.39465601894, "U_B_CTRG_Soldier_urb_3_F"}, // 0.27%
			{5432.5803889463, "U_B_CTRG_Soldier_urb_2_F"}, // 0.27%
			{5459.76612187366, "U_B_T_Soldier_SL_F"}, // 0.27%
			{5486.95185480102, "U_B_CTRG_1"}, // 0.27%
			{5514.13758772838, "U_O_T_Soldier_F"}, // 0.27%
			{5540.90074449625, "CUP_srifle_M24_des"}, // 0.27%
			{5567.66390126411, "CUP_srifle_M24_wdl"}, // 0.27%
			{5594.42705803198, "CUP_srifle_M40A3"}, // 0.27%
			{5620.7371456291, "10Rnd_762x54_Mag"}, // 0.26%
			{5646.64663514572, "CUP_srifle_Mk12SPR"}, // 0.26%
			{5671.40907053124, "CUP_5Rnd_762x67_G22"}, // 0.25%
			{5695.32552239273, "Exile_Weapon_LeeEnfield"}, // 0.24%
			{5719.24197425423, "CUP_arifle_AK74"}, // 0.24%
			{5742.45675742816, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.23%
			{5765.67154060208, "CUP_10Rnd_762x51_CZ750"}, // 0.23%
			{5788.79970145073, "muzzle_snds_58_wdm_F"}, // 0.23%
			{5811.92786229938, "CUP_muzzle_snds_XM8"}, // 0.23%
			{5835.05602314803, "muzzle_snds_M"}, // 0.23%
			{5858.18418399668, "muzzle_snds_H"}, // 0.23%
			{5881.31234484533, "muzzle_snds_H_khk_F"}, // 0.23%
			{5904.44050569398, "muzzle_snds_H_snd_F"}, // 0.23%
			{5927.56866654263, "muzzle_snds_58_blk_F"}, // 0.23%
			{5950.69682739128, "CUP_optic_RCO"}, // 0.23%
			{5973.82498823993, "CUP_optic_CompM4"}, // 0.23%
			{5996.95314908858, "CUP_optic_SUSAT"}, // 0.23%
			{6020.08130993723, "CUP_optic_ACOG"}, // 0.23%
			{6043.20947078588, "optic_ERCO_snd_F"}, // 0.23%
			{6066.33763163453, "optic_ERCO_khk_F"}, // 0.23%
			{6089.46579248318, "optic_ERCO_blk_F"}, // 0.23%
			{6112.59395333183, "optic_DMS_ghex_F"}, // 0.23%
			{6135.72211418048, "optic_DMS"}, // 0.23%
			{6158.85027502913, "optic_MRCO"}, // 0.23%
			{6181.97843587778, "acc_pointer_IR"}, // 0.23%
			{6205.10659672643, "muzzle_snds_65_TI_blk_F"}, // 0.23%
			{6228.23475757508, "muzzle_snds_65_TI_hex_F"}, // 0.23%
			{6251.36291842373, "muzzle_snds_65_TI_ghex_F"}, // 0.23%
			{6274.49107927237, "muzzle_snds_H_MG_blk_F"}, // 0.23%
			{6297.61924012102, "muzzle_snds_H_MG_khk_F"}, // 0.23%
			{6320.74740096967, "optic_Arco"}, // 0.23%
			{6343.87556181832, "muzzle_snds_m_snd_F"}, // 0.23%
			{6367.00372266697, "optic_Arco_blk_F"}, // 0.23%
			{6390.13188351562, "CUP_optic_CompM2_Black"}, // 0.23%
			{6413.26004436427, "optic_Hamr_khk_F"}, // 0.23%
			{6436.38820521292, "muzzle_snds_m_khk_F"}, // 0.23%
			{6459.51636606157, "optic_Holosight"}, // 0.23%
			{6482.64452691022, "optic_Holosight_blk_F"}, // 0.23%
			{6505.77268775887, "optic_Holosight_khk_F"}, // 0.23%
			{6528.90084860752, "optic_Arco_ghex_F"}, // 0.23%
			{6552.02900945617, "CUP_optic_PSO_1"}, // 0.23%
			{6575.15717030482, "optic_Hamr"}, // 0.23%
			{6598.28533115347, "CUP_optic_TrijiconRx01_desert"}, // 0.23%
			{6621.41349200212, "CUP_optic_HoloBlack"}, // 0.23%
			{6644.54165285077, "CUP_optic_HoloDesert"}, // 0.23%
			{6667.66981369942, "CUP_optic_SB_11_4x20_PM"}, // 0.23%
			{6690.79797454807, "CUP_optic_AN_PVS_4"}, // 0.23%
			{6713.92613539672, "CUP_muzzle_PB6P9"}, // 0.23%
			{6737.05429624537, "CUP_optic_CompM2_Desert"}, // 0.23%
			{6760.18245709402, "CUP_muzzle_Bizon"}, // 0.23%
			{6783.31061794267, "CUP_optic_PechenegScope"}, // 0.23%
			{6806.43877879132, "CUP_optic_Kobra"}, // 0.23%
			{6829.56693963997, "CUP_muzzle_PBS4"}, // 0.23%
			{6852.69510048862, "CUP_optic_PSO_3"}, // 0.23%
			{6874.50630272208, "20Rnd_556x45_UW_mag"}, // 0.22%
			{6896.25488906397, "U_I_CombatUniform_shortsleeve"}, // 0.22%
			{6918.00347540586, "U_O_PilotCoveralls"}, // 0.22%
			{6939.75206174775, "U_B_PilotCoveralls"}, // 0.22%
			{6961.50064808964, "U_I_pilotCoveralls"}, // 0.22%
			{6983.24923443152, "U_I_HeliPilotCoveralls"}, // 0.22%
			{7004.99782077341, "U_I_CombatUniform_tshirt"}, // 0.22%
			{7026.7464071153, "U_B_HeliPilotCoveralls"}, // 0.22%
			{7048.49499345719, "U_I_CombatUniform"}, // 0.22%
			{7069.90551887148, "srifle_DMR_03_F"}, // 0.21%
			{7091.31604428577, "srifle_DMR_03_khaki_F"}, // 0.21%
			{7112.72656970007, "srifle_DMR_03_tan_F"}, // 0.21%
			{7134.13709511436, "srifle_DMR_03_woodland_F"}, // 0.21%
			{7155.54762052865, "srifle_DMR_06_camo_F"}, // 0.21%
			{7176.95814594295, "CUP_srifle_VSSVintorez"}, // 0.21%
			{7198.36867135724, "srifle_DMR_06_olive_F"}, // 0.21%
			{7219.02982838203, "V_PlateCarrierH_CTRG"}, // 0.21%
			{7239.69098540683, "V_PlateCarrierL_CTRG"}, // 0.21%
			{7259.81046415756, "CUP_5Rnd_86x70_L115A1"}, // 0.20%
			{7279.74084070881, "Exile_Weapon_AK74"}, // 0.20%
			{7299.67121726006, "Exile_Weapon_AK107_GL"}, // 0.20%
			{7319.60159381131, "Exile_Weapon_AK107"}, // 0.20%
			{7339.53197036255, "Exile_Weapon_CZ550"}, // 0.20%
			{7359.4623469138, "Exile_Weapon_AK47"}, // 0.20%
			{7379.39272346505, "Exile_Weapon_AK74_GL"}, // 0.20%
			{7399.3231000163, "CUP_arifle_Sa58P"}, // 0.20%
			{7419.25347656754, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.20%
			{7439.18385311879, "CUP_arifle_Mk16_STD_EGLM"}, // 0.20%
			{7459.11422967004, "CUP_arifle_CZ805_A1"}, // 0.20%
			{7479.04460622129, "CUP_arifle_CZ805_B"}, // 0.20%
			{7498.97498277253, "CUP_arifle_AK74M"}, // 0.20%
			{7518.90535932378, "CUP_arifle_AK107"}, // 0.20%
			{7537.4078880027, "CUP_muzzle_snds_L85"}, // 0.19%
			{7555.91041668162, "CUP_muzzle_snds_Mk12"}, // 0.19%
			{7574.41294536054, "CUP_muzzle_snds_G36_black"}, // 0.19%
			{7592.91547403946, "CUP_optic_Elcan"}, // 0.19%
			{7611.11442064161, "srifle_DMR_07_blk_F"}, // 0.18%
			{7629.31336724376, "srifle_DMR_07_ghex_F"}, // 0.18%
			{7647.51231384591, "srifle_DMR_07_hex_F"}, // 0.18%
			{7665.35784294602, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.18%
			{7683.20337204613, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.18%
			{7701.04890114624, "30Rnd_545x39_Mag_Green_F"}, // 0.18%
			{7718.89443024635, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.18%
			{7736.73995934646, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.18%
			{7754.58548844656, "30Rnd_580x42_Mag_F"}, // 0.18%
			{7772.43101754667, "30Rnd_545x39_Mag_Tracer_F"}, // 0.18%
			{7790.27654664678, "CUP_30Rnd_545x39_AK_M"}, // 0.18%
			{7808.12207574689, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.18%
			{7825.967604847, "30Rnd_65x39_caseless_mag"}, // 0.18%
			{7843.81313394711, "CUP_30Rnd_556x45_G36"}, // 0.18%
			{7861.65866304722, "CUP_30Rnd_556x45_Stanag"}, // 0.18%
			{7879.50419214733, "20Rnd_762x51_Mag"}, // 0.18%
			{7897.34972124744, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.18%
			{7915.19525034755, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.18%
			{7933.04077944766, "30Rnd_580x42_Mag_Tracer_F"}, // 0.18%
			{7950.88630854777, "150Rnd_556x45_Drum_Mag_F"}, // 0.18%
			{7968.73183764787, "100Rnd_580x42_Mag_Tracer_F"}, // 0.18%
			{7986.57736674798, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.18%
			{8004.42289584809, "100Rnd_580x42_Mag_F"}, // 0.18%
			{8022.2684249482, "30Rnd_545x39_Mag_F"}, // 0.18%
			{8040.11395404831, "Exile_Magazine_10Rnd_762x54"}, // 0.18%
			{8057.95948314842, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.18%
			{8075.80501224853, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.18%
			{8093.65054134864, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.18%
			{8111.49607044875, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.18%
			{8129.34159954886, "Exile_Magazine_5Rnd_22LR"}, // 0.18%
			{8147.18712864897, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.18%
			{8165.03265774908, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.18%
			{8182.87818684918, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.18%
			{8200.72371594929, "Exile_Magazine_10Rnd_9x39"}, // 0.18%
			{8218.5692450494, "Exile_Magazine_20Rnd_9x39"}, // 0.18%
			{8236.41477414951, "30Rnd_762x39_Mag_F"}, // 0.18%
			{8254.26030324962, "30Rnd_762x39_Mag_Green_F"}, // 0.18%
			{8272.10583234973, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.18%
			{8289.95136144984, "30Rnd_762x39_Mag_Tracer_F"}, // 0.18%
			{8307.79689054995, "30Rnd_762x39_AK47_M"}, // 0.18%
			{8325.64241965006, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.18%
			{8343.48794875017, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.18%
			{8361.33347785028, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.18%
			{8379.1790069504, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.18%
			{8397.02453605051, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.18%
			{8413.66439405705, "B_Bergen_hex_F"}, // 0.17%
			{8430.3042520636, "B_Bergen_dgtl_F"}, // 0.17%
			{8446.94411007014, "B_Bergen_mcamo_F"}, // 0.17%
			{8463.58396807669, "B_Bergen_tna_F"}, // 0.17%
			{8480.22382608323, "B_Bergen_Base_F"}, // 0.17%
			{8496.53526583965, "U_B_SpecopsUniform_sgg"}, // 0.16%
			{8512.59315990037, "CUP_srifle_CZ750"}, // 0.16%
			{8528.53746114136, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.16%
			{8544.48176238236, "CUP_arifle_Sa58RIS2_gl"}, // 0.16%
			{8560.42606362336, "CUP_arifle_Sa58RIS1"}, // 0.16%
			{8576.37036486436, "CUP_arifle_CZ805_GL"}, // 0.16%
			{8592.31466610535, "CUP_arifle_Mk16_CQC_FG"}, // 0.16%
			{8608.25896734635, "CUP_arifle_AK107_kobra"}, // 0.16%
			{8624.20326858735, "arifle_MXC_khk_F"}, // 0.16%
			{8640.14756982835, "CUP_arifle_AKM"}, // 0.16%
			{8656.09187106934, "CUP_arifle_AK107_GL"}, // 0.16%
			{8672.03617231034, "arifle_MX_GL_khk_F"}, // 0.16%
			{8687.98047355134, "arifle_MX_F"}, // 0.16%
			{8703.92477479234, "CUP_arifle_XM8_Railed"}, // 0.16%
			{8719.86907603333, "arifle_MX_khk_F"}, // 0.16%
			{8735.73176856676, "Exile_Magazine_10Rnd_303"}, // 0.16%
			{8751.59446110019, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.16%
			{8767.45715363362, "CUP_30Rnd_Sa58_M"}, // 0.16%
			{8783.31984616705, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.16%
			{8799.18253870048, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.16%
			{8814.65906081644, "7Rnd_408_Mag"}, // 0.15%
			{8830.13558293239, "5Rnd_127x108_Mag"}, // 0.15%
			{8844.08684651826, "CUP_arifle_AK47"}, // 0.14%
			{8858.03811010413, "CUP_arifle_M4A1_camo"}, // 0.14%
			{8871.98937369001, "CUP_arifle_Sa58RIS2_camo"}, // 0.14%
			{8885.94063727588, "CUP_arifle_Mk16_CQC"}, // 0.14%
			{8899.89190086175, "CUP_arifle_M16A2"}, // 0.14%
			{8913.84316444763, "CUP_arifle_Sa58P_des"}, // 0.14%
			{8927.7944280335, "arifle_AKS_F"}, // 0.14%
			{8941.74569161938, "arifle_MXC_F"}, // 0.14%
			{8955.69695520525, "CUP_arifle_M4A1"}, // 0.14%
			{8969.61379672454, "CUP_srifle_G22_des"}, // 0.14%
			{8983.49365269129, "CUP_30Rnd_762x39_AK47_M"}, // 0.14%
			{8997.37350865804, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.14%
			{9011.2533646248, "CUP_20Rnd_556x45_Stanag"}, // 0.14%
			{9023.63458231756, "5Rnd_127x108_APDS_Mag"}, // 0.12%
			{9035.5928082483, "arifle_MXM_F"}, // 0.12%
			{9047.55103417905, "CUP_arifle_M4A3_desert"}, // 0.12%
			{9059.5092601098, "Exile_Weapon_SVD"}, // 0.12%
			{9071.46748604055, "Exile_Weapon_VSSVintorez"}, // 0.12%
			{9083.4257119713, "Exile_Weapon_SVDCamo"}, // 0.12%
			{9095.32273137137, "CUP_100Rnd_556x45_BetaCMag"}, // 0.12%
			{9106.88681179569, "CUP_acc_ANPEQ_2_desert"}, // 0.12%
			{9118.45089222002, "optic_NVS"}, // 0.12%
			{9130.01497264434, "CUP_acc_ANPEQ_2_camo"}, // 0.12%
			{9141.57905306867, "CUP_acc_ANPEQ_2_grey"}, // 0.12%
			{9152.45334623961, "U_O_OfficerUniform_ocamo"}, // 0.11%
			{9163.32763941056, "U_I_OfficerUniform"}, // 0.11%
			{9174.2019325815, "U_O_Wetsuit"}, // 0.11%
			{9185.07622575244, "U_I_Wetsuit"}, // 0.11%
			{9195.95051892339, "U_O_CombatUniform_ocamo"}, // 0.11%
			{9206.82481209433, "U_O_CombatUniform_oucamo"}, // 0.11%
			{9217.69910526528, "U_O_SpecopsUniform_ocamo"}, // 0.11%
			{9228.57339843622, "U_O_SpecopsUniform_blk"}, // 0.11%
			{9239.44769160716, "U_O_V_Soldier_Viper_F"}, // 0.11%
			{9250.32198477811, "U_O_V_Soldier_Viper_hex_F"}, // 0.11%
			{9261.19627794905, "U_B_Wetsuit"}, // 0.11%
			{9271.16146622468, "arifle_ARX_hex_F"}, // 0.10%
			{9281.1266545003, "CUP_arifle_Mk16_SV"}, // 0.10%
			{9291.09184277592, "arifle_SPAR_01_GL_blk_F"}, // 0.10%
			{9301.05703105155, "arifle_SPAR_01_snd_F"}, // 0.10%
			{9311.02221932717, "arifle_SPAR_01_khk_F"}, // 0.10%
			{9320.9874076028, "arifle_SPAR_01_blk_F"}, // 0.10%
			{9330.95259587842, "arifle_CTARS_hex_F"}, // 0.10%
			{9340.91778415405, "arifle_CTARS_ghex_F"}, // 0.10%
			{9350.88297242967, "arifle_CTARS_blk_F"}, // 0.10%
			{9360.84816070529, "arifle_CTAR_GL_blk_F"}, // 0.10%
			{9370.81334898092, "arifle_CTAR_ghex_F"}, // 0.10%
			{9380.77853725654, "arifle_CTAR_hex_F"}, // 0.10%
			{9390.74372553217, "arifle_CTAR_blk_F"}, // 0.10%
			{9400.70891380779, "arifle_ARX_ghex_F"}, // 0.10%
			{9410.67410208342, "arifle_ARX_blk_F"}, // 0.10%
			{9420.63929035904, "arifle_AKM_FL_F"}, // 0.10%
			{9430.60447863466, "arifle_AKM_F"}, // 0.10%
			{9440.56966691029, "arifle_AK12_GL_F"}, // 0.10%
			{9450.53485518591, "arifle_AK12_F"}, // 0.10%
			{9460.50004346154, "arifle_SPAR_01_GL_khk_F"}, // 0.10%
			{9470.46523173716, "Exile_Weapon_DMR"}, // 0.10%
			{9480.43042001279, "arifle_SPAR_01_GL_snd_F"}, // 0.10%
			{9490.39560828841, "arifle_SPAR_02_khk_F"}, // 0.10%
			{9500.36079656403, "CUP_arifle_AK107_GL_pso"}, // 0.10%
			{9510.32598483966, "CUP_arifle_AKS_Gold"}, // 0.10%
			{9520.29117311528, "CUP_arifle_AKS74U"}, // 0.10%
			{9530.25636139091, "CUP_arifle_AK74_GL"}, // 0.10%
			{9540.22154966653, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.10%
			{9550.18673794216, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.10%
			{9560.15192621778, "arifle_SPAR_02_blk_F"}, // 0.10%
			{9570.11711449341, "CUP_arifle_G36A"}, // 0.10%
			{9580.08230276903, "CUP_arifle_G36C"}, // 0.10%
			{9590.04749104465, "CUP_arifle_L85A2_NG"}, // 0.10%
			{9600.01267932028, "CUP_arifle_L86A2"}, // 0.10%
			{9609.9778675959, "arifle_SPAR_03_snd_F"}, // 0.10%
			{9619.94305587153, "arifle_SPAR_03_khk_F"}, // 0.10%
			{9629.90824414715, "arifle_SPAR_03_blk_F"}, // 0.10%
			{9639.87343242278, "arifle_SPAR_02_snd_F"}, // 0.10%
			{9649.8386206984, "CUP_arifle_L85A2_GL"}, // 0.10%
			{9659.75280353179, "10Rnd_50BW_Mag_F"}, // 0.10%
			{9667.72495415229, "arifle_MXM_Black_F"}, // 0.08%
			{9675.69710477279, "arifle_MX_GL_F"}, // 0.08%
			{9683.66925539329, "arifle_TRG21_GL_F"}, // 0.08%
			{9691.64140601379, "arifle_Mk20_GL_F"}, // 0.08%
			{9699.61355663429, "arifle_Katiba_GL_F"}, // 0.08%
			{9707.58570725479, "CUP_arifle_AK107_GL_kobra"}, // 0.08%
			{9715.55785787528, "CUP_arifle_G36C_camo_holo_snds"}, // 0.08%
			{9723.29611893326, "CUP_5Rnd_127x99_as50_M"}, // 0.08%
			{9731.03437999124, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.08%
			{9738.77264104921, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.08%
			{9746.51090210719, "CUP_10Rnd_127x99_M107"}, // 0.08%
			{9752.72478391915, "srifle_GM6_F"}, // 0.06%
			{9758.70389688453, "arifle_MX_Black_F"}, // 0.06%
			{9764.6830098499, "arifle_Katiba_F"}, // 0.06%
			{9770.66212281528, "arifle_MX_GL_Black_F"}, // 0.06%
			{9776.64123578065, "arifle_Mk20C_F"}, // 0.06%
			{9782.62034874603, "arifle_TRG21_F"}, // 0.06%
			{9788.5994617114, "arifle_TRG20_F"}, // 0.06%
			{9794.57857467678, "arifle_MXC_Black_F"}, // 0.06%
			{9800.55768764215, "arifle_MXM_khk_F"}, // 0.06%
			{9806.53680060753, "arifle_Mk20_F"}, // 0.06%
			{9812.5159135729, "Exile_Weapon_AKS_Gold"}, // 0.06%
			{9818.49502653828, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.06%
			{9824.12988754504, "10Rnd_93x64_DMR_05_Mag"}, // 0.06%
			{9829.48251889861, "CUP_srifle_AWM_wdl"}, // 0.05%
			{9834.83515025219, "CUP_srifle_AWM_des"}, // 0.05%
			{9839.53086775782, "10Rnd_338_Mag"}, // 0.05%
			{9844.22658526345, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{9848.92230276909, "130Rnd_338_Mag"}, // 0.05%
			{9853.61802027472, "5Rnd_127x108_Mag"}, // 0.05%
			{9858.31373778036, "CUP_5Rnd_127x99_as50_M"}, // 0.05%
			{9863.00945528599, "150Rnd_93x64_Mag"}, // 0.05%
			{9867.66986664497, "srifle_DMR_02_camo_F"}, // 0.05%
			{9872.33027800394, "srifle_DMR_02_F"}, // 0.05%
			{9876.99068936292, "CUP_srifle_M107_Base"}, // 0.05%
			{9881.6336459977, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.05%
			{9885.61972130795, "arifle_SDAR_F"}, // 0.04%
			{9889.55517978887, "V_PlateCarrierGL_blk"}, // 0.04%
			{9893.49063826978, "V_PlateCarrierGL_rgr"}, // 0.04%
			{9897.42609675069, "V_PlateCarrier2_rgr_noflag_F"}, // 0.04%
			{9901.36155523161, "V_PlateCarrier1_rgr_noflag_F"}, // 0.04%
			{9905.29701371252, "V_TacVest_gen_F"}, // 0.04%
			{9909.23247219343, "V_BandollierB_ghex_F"}, // 0.04%
			{9913.16793067435, "V_HarnessOGL_ghex_F"}, // 0.04%
			{9917.10338915526, "V_PlateCarrierGL_mtp"}, // 0.04%
			{9921.03884763618, "V_PlateCarrierGL_tna_F"}, // 0.04%
			{9924.97430611709, "V_PlateCarrierSpec_tna_F"}, // 0.04%
			{9928.909764598, "V_PlateCarrier2_tna_F"}, // 0.04%
			{9932.84522307892, "V_HarnessO_ghex_F"}, // 0.04%
			{9936.78068155983, "V_PlateCarrierSpec_blk"}, // 0.04%
			{9940.71614004074, "V_PlateCarrierIAGL_dgtl"}, // 0.04%
			{9944.65159852166, "V_TacChestrig_cbr_F"}, // 0.04%
			{9948.58705700257, "V_TacChestrig_oli_F"}, // 0.04%
			{9952.52251548348, "V_TacChestrig_grn_F"}, // 0.04%
			{9956.4579739644, "V_PlateCarrierIAGL_oli"}, // 0.04%
			{9960.39343244531, "V_PlateCarrierSpec_rgr"}, // 0.04%
			{9964.32889092622, "V_PlateCarrier1_tna_F"}, // 0.04%
			{9968.26434940714, "V_PlateCarrierSpec_mtp"}, // 0.04%
			{9972.02092341164, "CUP_OG7_M"}, // 0.04%
			{9975.77749741615, "CUP_M136_M"}, // 0.04%
			{9978.88443832214, "srifle_DMR_05_hex_F"}, // 0.03%
			{9981.99137922812, "srifle_DMR_05_tan_F"}, // 0.03%
			{9985.0983201341, "srifle_DMR_05_blk_F"}, // 0.03%
			{9988.19362455729, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.03%
			{9990.05778910089, "CUP_srifle_AS50"}, // 0.02%
			{9991.92195364448, "MMG_02_sand_F"}, // 0.02%
			{9993.78611818807, "MMG_02_camo_F"}, // 0.02%
			{9995.65028273166, "MMG_02_black_F"}, // 0.02%
			{9996.89305909405, "MMG_01_tan_F"}, // 0.01%
			{9998.13583545644, "MMG_01_hex_F"}, // 0.01%
			{9999.06791772824, "CUP_launch_M136"}, // 0.01%
			{10000, "CUP_launch_RPG7V"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FuelCanisterFull
	  Exile_Item_Magazine03
	  Exile_Item_Moobar
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Can_Empty
	  CUP_sgun_Saiga12K
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Magazine_5Rnd_22LR
	  Exile_Magazine_8Rnd_74Slug
	  SmokeShellBlue
	  Exile_Magazine_6Rnd_45ACP
	  10Rnd_9x21_Mag
	  hgun_Pistol_01_F
	  Exile_Magazine_10Rnd_303
	  Exile_Item_ChocolateMilk
	  Exile_Item_FuelCanisterEmpty
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Magazine01
	  Chemlight_red
	  Exile_Item_FuelCanisterFull
	  CUP_sgun_Saiga12K
	  Exile_Item_ToiletPaper
	  hgun_Pistol_heavy_02_F
	  CUP_hgun_SA61
	  Exile_Item_PlasticBottleEmpty
	  Binocular
	  Exile_Item_PlasticBottleEmpty
	  Chemlight_blue
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Weapon_Colt1911
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_TaurusGold
	  FlareWhite_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  ItemWatch
	  Exile_Weapon_M1014
	  Chemlight_blue
	  Exile_Item_Wrench
	  H_Hat_blue
	  CUP_hgun_SA61
	  Exile_Item_Hammer
	  hgun_Pistol_Signal_F
	  Exile_Magazine_10Rnd_303
	  Exile_Weapon_CZ550
	  CUP_hgun_MicroUzi
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  H_Bandanna_surfer
	  H_StrawHat_dark
	  Exile_Item_Magazine02
	  SmokeShellPurple
	  ItemMap
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Magazine_7Rnd_45ACP
	  H_Cap_red
	  SmokeShell
	  Exile_Item_Magazine03
	  ItemMap
	  Exile_Item_MacasCheese
	  CUP_18Rnd_9x19_Phantom
	  Exile_Weapon_CZ550
	  Exile_Item_ChocolateMilk
	  Binocular
	  Exile_Item_Can_Empty
	  Exile_Magazine_6Rnd_45ACP
	  SmokeShellRed
	  CUP_30Rnd_9x19_UZI
	  Exile_Item_OilCanister
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  Binocular
	  Exile_Item_Hammer
	  Exile_Item_Can_Empty
	  Chemlight_red
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  6Rnd_RedSignal_F
	  Exile_Magazine_10Rnd_303
	  Exile_Magazine_6Rnd_45ACP
	  30Rnd_9x21_Mag
	  FlareYellow_F
	  hgun_Pistol_heavy_02_F
	  H_Cap_grn
	  Binocular
	  Exile_Item_Rope
	  Exile_Magazine_8Rnd_9x18
	  hgun_P07_F
	  Exile_Item_Magazine01
	  Exile_Magazine_10Rnd_303
	  Exile_Magazine_8Rnd_9x18
	  H_Cap_press
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
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

