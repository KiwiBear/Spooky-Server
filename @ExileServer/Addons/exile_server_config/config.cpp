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

	  Exile_Weapon_LeeEnfield
	  Exile_Weapon_LeeEnfield
	  Chemlight_red
	  Exile_Item_PlasticBottleEmpty
	  H_Cap_blu
	  hgun_Pistol_Signal_F
	  muzzle_snds_acp
	  V_Press_F
	  FlareYellow_F
	  H_Hat_blue
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Can_Empty
	  U_C_Poor_2
	  CUP_hgun_MicroUzi
	  Exile_Item_Magazine01
	  ItemWatch
	  FlareRed_F
	  optic_ACO_grn_smg
	  U_C_Journalist
	  Exile_Item_Beer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_M1014
	  U_C_Scientist
	  hlc_10rnd_12g_buck_S12
	  H_Hat_brown
	  TRYK_shirts_BLK_PAD_RED2
	  CUP_acc_Glock17_Flashlight
	  CUP_30Rnd_9x19_UZI
	  CUP_smg_MP5A5
	  CUP_smg_EVO
	  hlc_rifle_saiga12k
	  ItemCompass
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  ItemWatch
	  CUP_sgun_Saiga12K
	  ItemRadio
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Chemlight_yellow
	  Exile_Item_PlasticBottleEmpty
	  TRYK_B_Belt_GR
	  Exile_Weapon_M1014
	  Chemlight_blue
	  Exile_Weapon_LeeEnfield
	  U_C_Man_casual_3_F
	  CUP_smg_MP5SD6
	  Exile_Item_PlasticBottleDirtyWater
	  Binocular
	  ItemCompass
	  Exile_Item_Can_Empty
	  FlareGreen_F
	  hlc_10rnd_12g_slug_S12
	  V_Rangemaster_belt
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Can_Empty
	  TRYK_shirts_DENIM_RED2_Sleeve
	  CUP_hgun_Duty_M3X
	  Exile_Item_Noodles
	  Exile_Item_PlasticBottleEmpty
	  CUP_hgun_Duty_M3X
	  Exile_Item_SeedAstics
	  Exile_Item_Can_Empty
	  Exile_Weapon_TaurusGold
	  CUP_8Rnd_9x18_MakarovSD_M
	  Chemlight_red
	  U_C_man_sport_2_F
	  Exile_Item_Can_Empty
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  H_Cap_red
	  Exile_Item_Can_Empty
	  optic_Holosight_smg
	  TRYK_B_USMC_R
	  CUP_30Rnd_9x19_UZI
	  30Rnd_9x21_Mag
	  Exile_Item_PlasticBottleFreshWater
	  SMG_05_F
	  Exile_Item_MobilePhone
	  10Rnd_9x21_Mag
	  Exile_Item_PlasticBottleDirtyWater
	  TRYK_U_B_PCUGs_OD
	  Exile_Magazine_8Rnd_9x18
	  hlc_10rnd_12g_slug_S12
	  Exile_Weapon_M1014
	  CUP_8Rnd_9x18_MakarovSD_M
	  11Rnd_45ACP_Mag
	  Exile_Item_BBQSandwich
	  TRYK_bandana_g
	  B_Kitbag_mcamo
	  CUP_sgun_Saiga12K
	  Exile_Item_Magazine01
	  30Rnd_9x21_Mag
	  Exile_Item_PlasticBottleDirtyWater
	  hlc_10rnd_12g_buck_S12
	  U_C_Poor_2
	  ItemMap
	  optic_Aco_smg
	  H_Cap_press
	  CUP_acc_Glock17_Flashlight
	  U_I_C_Soldier_Bandit_4_F
	*/
	class CivillianLowerClass
	{
		count = 538;
		half = 9328.9315884153;
		halfIndex = 269;
		sum = 9999.99999999999;
		items[] = 
		{
			{462.962962962963, "Exile_Item_Can_Empty"}, // 4.63%
			{925.925925925926, "Exile_Item_ToiletPaper"}, // 4.63%
			{1388.88888888889, "Exile_Item_PlasticBottleEmpty"}, // 4.63%
			{1591.942820013, "Exile_Weapon_LeeEnfield"}, // 2.03%
			{1781.45982239549, "hlc_rifle_saiga12k"}, // 1.90%
			{1918.63403364378, "ItemWatch"}, // 1.37%
			{2054.00332105985, "CUP_sgun_Saiga12K"}, // 1.35%
			{2189.37260847592, "Exile_Weapon_M1014"}, // 1.35%
			{2305.11334921666, "Exile_Item_Magazine03"}, // 1.16%
			{2420.8540899574, "Exile_Item_Magazine04"}, // 1.16%
			{2536.59483069815, "Exile_Item_Magazine01"}, // 1.16%
			{2652.33557143889, "Exile_Item_Magazine02"}, // 1.16%
			{2762.07494043751, "Exile_Item_Heatpack"}, // 1.10%
			{2861.14520411683, "hlc_10rnd_12g_buck_S12"}, // 0.99%
			{2957.16715199063, "ItemMap"}, // 0.96%
			{3040.99583664236, "hlc_10rnd_12g_slug_S12"}, // 0.84%
			{3123.30036339133, "ItemRadio"}, // 0.82%
			{3205.6048901403, "Binocular"}, // 0.82%
			{3287.90941688927, "ItemCompass"}, // 0.82%
			{3365.06991071643, "Chemlight_blue"}, // 0.77%
			{3442.23040454359, "Chemlight_red"}, // 0.77%
			{3519.39089837076, "Chemlight_yellow"}, // 0.77%
			{3596.55139219792, "FlareGreen_F"}, // 0.77%
			{3673.71188602508, "FlareRed_F"}, // 0.77%
			{3750.87237985224, "FlareWhite_F"}, // 0.77%
			{3828.0328736794, "FlareYellow_F"}, // 0.77%
			{3905.19336750656, "V_Rangemaster_belt"}, // 0.77%
			{3982.35386133372, "Chemlight_green"}, // 0.77%
			{4058.56175647165, "Exile_Magazine_10Rnd_303"}, // 0.76%
			{4134.76965160959, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.76%
			{4210.97754674753, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.76%
			{4287.18544188546, "Exile_Magazine_8Rnd_74Slug"}, // 0.76%
			{4363.3933370234, "Exile_Magazine_5Rnd_22LR"}, // 0.76%
			{4431.07798073143, "Exile_Weapon_CZ550"}, // 0.68%
			{4495.37839225407, "Exile_Item_PlasticBottleDirtyWater"}, // 0.64%
			{4557.8003647884, "muzzle_snds_L"}, // 0.62%
			{4620.22233732273, "muzzle_snds_acp"}, // 0.62%
			{4674.4606760799, "hgun_P07_F"}, // 0.54%
			{4726.11623680101, "hgun_Rook40_F"}, // 0.52%
			{4777.77179752212, "hgun_ACPC2_F"}, // 0.52%
			{4829.21212674023, "Exile_Item_ChocolateMilk"}, // 0.51%
			{4880.65245595833, "Exile_Item_MountainDupe"}, // 0.51%
			{4930.83814300039, "11Rnd_45ACP_Mag"}, // 0.50%
			{4981.02383004245, "10Rnd_9x21_Mag"}, // 0.50%
			{5031.2095170845, "Exile_Magazine_6Rnd_45ACP"}, // 0.50%
			{5081.39520412656, "Exile_Magazine_8Rnd_9x18"}, // 0.50%
			{5131.58089116861, "Exile_Magazine_7Rnd_45ACP"}, // 0.50%
			{5181.76657821067, "9Rnd_45ACP_Mag"}, // 0.50%
			{5231.95226525272, "30Rnd_9x21_Mag"}, // 0.50%
			{5278.44226990172, "CUP_hgun_Phantom"}, // 0.46%
			{5323.60938823957, "CUP_18Rnd_9x19_Phantom"}, // 0.45%
			{5368.77650657742, "CUP_30Rnd_9x19_UZI"}, // 0.45%
			{5413.94362491527, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.45%
			{5457.66790475066, "Exile_Item_EnergyDrink"}, // 0.44%
			{5498.27869097548, "hlc_rifle_L1A1SLR"}, // 0.41%
			{5538.42724060913, "6Rnd_45ACP_Cylinder"}, // 0.40%
			{5577.00748752271, "V_Press_F"}, // 0.39%
			{5615.58773443629, "V_TacVest_blk_POLICE"}, // 0.39%
			{5652.62477147333, "H_Cap_press"}, // 0.37%
			{5689.66180851036, "H_Hat_blue"}, // 0.37%
			{5726.6988455474, "H_Hat_brown"}, // 0.37%
			{5763.73588258444, "H_Hat_checker"}, // 0.37%
			{5800.77291962148, "H_Hat_grey"}, // 0.37%
			{5837.80995665851, "H_StrawHat"}, // 0.37%
			{5874.84699369555, "H_StrawHat_dark"}, // 0.37%
			{5911.88403073259, "CUP_smg_MP5SD6"}, // 0.37%
			{5948.92106776963, "H_Cap_red"}, // 0.37%
			{5985.95810480666, "H_Cap_tan"}, // 0.37%
			{6022.9951418437, "H_Hat_tan"}, // 0.37%
			{6059.00337229638, "Exile_Item_Beer"}, // 0.36%
			{6093.68224592656, "CUP_muzzle_snds_MicroUzi"}, // 0.35%
			{6128.36111955674, "CUP_acc_CZ_M3X"}, // 0.35%
			{6163.03999318693, "CUP_acc_Glock17_Flashlight"}, // 0.35%
			{6196.61610765565, "hgun_Pistol_heavy_01_F"}, // 0.34%
			{6230.19222212437, "CUP_hgun_SA61"}, // 0.34%
			{6263.7683365931, "Exile_Weapon_Taurus"}, // 0.34%
			{6297.34445106182, "hgun_P07_khk_F"}, // 0.34%
			{6330.92056553054, "hgun_Pistol_heavy_02_F"}, // 0.34%
			{6364.49667999926, "hgun_Pistol_Signal_F"}, // 0.34%
			{6398.07279446798, "hgun_Pistol_01_F"}, // 0.34%
			{6431.64890893671, "Exile_Weapon_Colt1911"}, // 0.34%
			{6465.22502340543, "Exile_Weapon_TaurusGold"}, // 0.34%
			{6498.80113787415, "Exile_Weapon_Makarov"}, // 0.34%
			{6531.28976685401, "U_Rangemaster"}, // 0.32%
			{6563.77839583386, "U_C_Scientist"}, // 0.32%
			{6596.26702481372, "U_C_Journalist"}, // 0.32%
			{6628.75565379358, "U_C_Poor_2"}, // 0.32%
			{6661.24428277343, "U_C_Poor_shorts_1"}, // 0.32%
			{6693.73291175329, "U_C_HunterBody_grn"}, // 0.32%
			{6726.22154073315, "U_C_Poor_1"}, // 0.32%
			{6757.96757247918, "hlc_rifle_hk53"}, // 0.32%
			{6789.69712134269, "B_OutdoorPack_blk"}, // 0.32%
			{6820.90810760985, "CUP_muzzle_snds_M9"}, // 0.31%
			{6851.90144404252, "CUP_hgun_Duty_M3X"}, // 0.31%
			{6882.76564157338, "Exile_Item_ZipTie"}, // 0.31%
			{6913.62983910425, "H_Bandanna_surfer"}, // 0.31%
			{6944.49403663511, "H_Cap_blk"}, // 0.31%
			{6975.35823416597, "H_Beret_blk_POLICE"}, // 0.31%
			{7006.22243169684, "H_Cap_blu"}, // 0.31%
			{7037.0866292277, "H_Cap_blk_Raven"}, // 0.31%
			{7067.95082675857, "Exile_Item_PlasticBottleFreshWater"}, // 0.31%
			{7098.81502428943, "H_Cap_grn"}, // 0.31%
			{7129.67922182029, "H_Cap_headphones"}, // 0.31%
			{7160.54341935116, "H_Cap_oli"}, // 0.31%
			{7191.02657740633, "hlc_20Rnd_762x51_B_fal"}, // 0.30%
			{7221.13798963156, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.30%
			{7249.69458360872, "B_OutdoorPack_tan"}, // 0.29%
			{7278.25117758587, "B_OutdoorPack_blu"}, // 0.29%
			{7304.7062040409, "CUP_smg_bizon"}, // 0.26%
			{7331.16123049593, "CUP_smg_MP5A5"}, // 0.26%
			{7356.98901085648, "CUP_hgun_PB6P9_snds"}, // 0.26%
			{7382.37264994729, "B_HuntingBackpack"}, // 0.25%
			{7407.64158359829, "U_C_Poloshirt_burgundy"}, // 0.25%
			{7432.91051724929, "U_C_Poloshirt_tricolour"}, // 0.25%
			{7458.17945090029, "U_C_Poloshirt_salmon"}, // 0.25%
			{7483.44838455129, "U_C_Poloshirt_blue"}, // 0.25%
			{7508.71731820229, "U_C_Poloshirt_stripped"}, // 0.25%
			{7533.81016172332, "16Rnd_9x21_Mag"}, // 0.25%
			{7558.08537326445, "optic_Yorris"}, // 0.24%
			{7582.36058480557, "optic_MRD"}, // 0.24%
			{7605.93740236387, "Exile_Item_InstantCoffee"}, // 0.24%
			{7628.79977090526, "hlc_optic_kobra"}, // 0.23%
			{7651.01045510971, "B_AssaultPack_dgtl"}, // 0.22%
			{7673.22113931416, "B_AssaultPack_rgr"}, // 0.22%
			{7695.43182351862, "B_AssaultPack_sgg"}, // 0.22%
			{7717.64250772307, "B_AssaultPack_blk"}, // 0.22%
			{7739.85319192753, "B_AssaultPack_cbr"}, // 0.22%
			{7762.06387613198, "B_AssaultPack_mcamo"}, // 0.22%
			{7784.27456033643, "B_AssaultPack_tna_F"}, // 0.22%
			{7806.48524454089, "B_AssaultPack_khk"}, // 0.22%
			{7827.14746882933, "CUP_hgun_MicroUzi"}, // 0.21%
			{7847.72360051658, "30Rnd_9x21_Mag_SMG_02"}, // 0.21%
			{7868.29973220382, "30Rnd_45ACP_Mag_SMG_01"}, // 0.21%
			{7888.87586389106, "CUP_64Rnd_9x19_Bizon_M"}, // 0.21%
			{7909.45199557831, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.21%
			{7930.02812726555, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.21%
			{7950.60425895279, "CUP_30Rnd_9x19_MP5"}, // 0.21%
			{7971.18039064003, "CUP_30Rnd_9x19_EVO"}, // 0.21%
			{7991.75652232728, "hlc_30rnd_556x45_b_hk33"}, // 0.21%
			{8012.33265401452, "hlc_30rnd_556x45_t_hk33"}, // 0.21%
			{8032.90878570176, "hlc_30rnd_556x45_epr_hk33"}, // 0.21%
			{8053.48491738901, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.21%
			{8074.06104907625, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.21%
			{8093.35117253304, "Exile_Item_Raisins"}, // 0.19%
			{8112.64129598983, "Exile_Item_Moobar"}, // 0.19%
			{8130.69053431197, "U_C_Man_casual_1_F"}, // 0.18%
			{8148.73977263412, "U_I_C_Soldier_Bandit_1_F"}, // 0.18%
			{8166.78901095626, "U_I_C_Soldier_Bandit_2_F"}, // 0.18%
			{8184.8382492784, "U_I_C_Soldier_Bandit_3_F"}, // 0.18%
			{8202.88748760054, "U_I_C_Soldier_Bandit_4_F"}, // 0.18%
			{8220.93672592269, "U_I_C_Soldier_Bandit_5_F"}, // 0.18%
			{8238.98596424483, "U_C_man_sport_1_F"}, // 0.18%
			{8257.03520256697, "U_C_man_sport_3_F"}, // 0.18%
			{8275.08444088911, "U_C_Man_casual_6_F"}, // 0.18%
			{8293.13367921126, "U_C_man_sport_2_F"}, // 0.18%
			{8311.1829175334, "U_C_Man_casual_5_F"}, // 0.18%
			{8329.23215585554, "U_C_Man_casual_4_F"}, // 0.18%
			{8347.28139417768, "U_C_Man_casual_3_F"}, // 0.18%
			{8365.33063249983, "U_C_Man_casual_2_F"}, // 0.18%
			{8383.33474772616, "Exile_Item_PowerDrink"}, // 0.18%
			{8400.89973819088, "6Rnd_GreenSignal_F"}, // 0.18%
			{8418.4647286556, "6Rnd_RedSignal_F"}, // 0.18%
			{8435.61150506164, "Exile_Item_SeedAstics"}, // 0.17%
			{8452.75828146768, "Exile_Item_CockONut"}, // 0.17%
			{8468.63129734069, "CUP_smg_EVO"}, // 0.16%
			{8484.50431321371, "CUP_smg_bizon_snds"}, // 0.16%
			{8500.36908764546, "B_Kitbag_mcamo"}, // 0.16%
			{8516.23386207721, "B_Kitbag_sgg"}, // 0.16%
			{8532.09863650897, "B_Kitbag_cbr"}, // 0.16%
			{8547.10206586425, "Exile_Item_SausageGravy"}, // 0.15%
			{8562.10549521953, "Exile_Item_Cheathas"}, // 0.15%
			{8577.10892457481, "Exile_Item_DsNuts"}, // 0.15%
			{8592.11235393009, "Exile_Item_Noodles"}, // 0.15%
			{8607.11578328538, "Exile_Item_Surstromming"}, // 0.15%
			{8622.11921264066, "Exile_Item_Dogfood"}, // 0.15%
			{8637.12264199594, "Exile_Item_BeefParts"}, // 0.15%
			{8652.12607135122, "Exile_Item_BBQSandwich"}, // 0.15%
			{8667.1295007065, "Exile_Item_MacasCheese"}, // 0.15%
			{8682.13293006178, "Exile_Item_ChristmasTinner"}, // 0.15%
			{8697.13635941707, "Exile_Item_CatFood"}, // 0.15%
			{8710.85378054189, "optic_Holosight_smg_blk_F"}, // 0.14%
			{8724.57120166672, "Exile_Item_MobilePhone"}, // 0.14%
			{8738.28862279155, "optic_Aco_smg"}, // 0.14%
			{8752.00604391638, "optic_ACO_grn"}, // 0.14%
			{8765.72346504121, "optic_Aco"}, // 0.14%
			{8779.44088616604, "optic_Holosight_smg"}, // 0.14%
			{8793.15830729087, "ItemGPS"}, // 0.14%
			{8806.8757284157, "optic_ACO_grn_smg"}, // 0.14%
			{8820.45235489555, "TRYK_B_Belt"}, // 0.14%
			{8834.02898137541, "TRYK_B_Kitbag_blk"}, // 0.14%
			{8847.60560785526, "TRYK_B_Kitbag_Base"}, // 0.14%
			{8860.46569015979, "Exile_Item_GloriousKnakworst"}, // 0.13%
			{8873.32577246431, "Exile_Item_PlasticBottleCoffee"}, // 0.13%
			{8885.09218208019, "TRYK_B_tube_cyt"}, // 0.12%
			{8896.85859169606, "TRYK_B_Kitbag_aaf"}, // 0.12%
			{8908.62500131193, "TRYK_B_Belt_CYT"}, // 0.12%
			{8919.48630249581, "TRYK_B_Kitbag_Base_JSDF"}, // 0.11%
			{8930.34760367969, "TRYK_B_Alicepack"}, // 0.11%
			{8941.20890486358, "TRYK_B_FieldPack_Wood"}, // 0.11%
			{8952.07020604746, "TRYK_B_BAF_BAG_BLK"}, // 0.11%
			{8962.93150723134, "TRYK_B_Belt_BLK"}, // 0.11%
			{8973.79280841522, "TRYK_B_Belt_br"}, // 0.11%
			{8984.65410959911, "TRYK_B_Belt_GR"}, // 0.11%
			{8995.51541078299, "TRYK_B_Belt_tan"}, // 0.11%
			{9006.23214603676, "Exile_Item_CanOpener"}, // 0.11%
			{9016.94888129053, "Exile_Item_Matches"}, // 0.11%
			{9027.53089187254, "hgun_PDW2000_F"}, // 0.11%
			{9038.11290245456, "SMG_05_F"}, // 0.11%
			{9048.40096829818, "CUP_optic_ACOG"}, // 0.10%
			{9058.35716105007, "TRYK_B_BAF_BAG_CYT"}, // 0.10%
			{9068.31335380196, "TRYK_B_Belt_AOR2"}, // 0.10%
			{9078.26954655385, "TRYK_B_Belt_AOR1"}, // 0.10%
			{9088.22573930574, "TRYK_B_BAF_BAG_OD"}, // 0.10%
			{9097.27682362564, "TRYK_B_tube_blk"}, // 0.09%
			{9106.32790794554, "TRYK_B_tube_od"}, // 0.09%
			{9115.37899226545, "TRYK_B_AssaultPack_Type2camo"}, // 0.09%
			{9124.43007658535, "TRYK_B_AssaultPack_UCP"}, // 0.09%
			{9132.57605247326, "TRYK_B_BAF_BAG_mcamo"}, // 0.08%
			{9139.81691992918, "TRYK_B_BAF_BAG_rgr"}, // 0.07%
			{9147.0577873851, "TRYK_B_Medbag_ucp"}, // 0.07%
			{9154.29865484102, "TRYK_B_Medbag_BK"}, // 0.07%
			{9161.53952229694, "TRYK_B_Medbag_OD"}, // 0.07%
			{9168.78038975286, "TRYK_B_Medbag"}, // 0.07%
			{9175.21043090513, "Exile_Item_EMRE"}, // 0.06%
			{9181.64047205739, "Exile_Item_CookingPot"}, // 0.06%
			{9186.93147734839, "SMG_02_F"}, // 0.05%
			{9192.2224826394, "SMG_01_F"}, // 0.05%
			{9197.2254074262, "TRYK_Hrp_vest_od"}, // 0.05%
			{9201.84349184478, "TRYK_Hrp_vest_ucp"}, // 0.05%
			{9206.46157626337, "TRYK_LOC_AK_chestrig_OD"}, // 0.05%
			{9210.98711842332, "TRYK_B_Coyotebackpack_BLK"}, // 0.05%
			{9215.51266058327, "TRYK_B_Coyotebackpack_OD"}, // 0.05%
			{9220.03820274322, "TRYK_B_Coyotebackpack"}, // 0.05%
			{9224.56374490317, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.05%
			{9229.08928706312, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.05%
			{9232.93769074527, "TRYK_V_Sheriff_BA_TB"}, // 0.04%
			{9236.5475384097, "U_OrestesBody"}, // 0.04%
			{9240.15738607413, "U_NikosBody"}, // 0.04%
			{9243.76723373856, "U_NikosAgedBody"}, // 0.04%
			{9246.84595668428, "TRYK_LOC_AK_chestrig_TAN"}, // 0.03%
			{9249.58214440865, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9252.31833213301, "TRYK_H_GR"}, // 0.03%
			{9255.05451985738, "TRYK_H_AOR1"}, // 0.03%
			{9257.79070758175, "TRYK_H_AOR2"}, // 0.03%
			{9260.52689530612, "TRYK_H_EARMUFF"}, // 0.03%
			{9263.26308303048, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9265.99927075485, "TRYK_H_Bandana_H"}, // 0.03%
			{9268.73545847922, "TRYK_H_Bandana_wig"}, // 0.03%
			{9271.47164620359, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9274.20783392795, "TRYK_H_wig"}, // 0.03%
			{9276.94402165232, "TRYK_H_headset2"}, // 0.03%
			{9279.68020937669, "TRYK_H_woolhat"}, // 0.03%
			{9282.41639710106, "TRYK_H_WH"}, // 0.03%
			{9285.15258482542, "TRYK_H_woolhat_CW"}, // 0.03%
			{9287.88877254979, "TRYK_H_woolhat_br"}, // 0.03%
			{9290.62496027416, "TRYK_H_woolhat_cu"}, // 0.03%
			{9293.36114799853, "TRYK_H_woolhat_tan"}, // 0.03%
			{9296.09733572289, "TRYK_H_headsetcap"}, // 0.03%
			{9298.83352344726, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9301.56971117163, "TRYK_H_headsetcap_od"}, // 0.03%
			{9304.305898896, "TRYK_H_pakol"}, // 0.03%
			{9307.04208662036, "TRYK_H_pakol2"}, // 0.03%
			{9309.77827434473, "TRYK_R_CAP_TAN"}, // 0.03%
			{9312.5144620691, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9315.25064979347, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9317.98683751783, "TRYK_H_woolhat_WH"}, // 0.03%
			{9320.7230252422, "TRYK_R_CAP_BLK"}, // 0.03%
			{9323.45921296657, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9326.19540069094, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9328.9315884153, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9331.66777613967, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9334.40396386404, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9337.14015158841, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9339.87633931277, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9342.61252703714, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{9345.34871476151, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9348.08490248588, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9350.82109021024, "TRYK_headset2"}, // 0.03%
			{9353.55727793461, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9356.29346565898, "TRYK_TAC_SET_bn"}, // 0.03%
			{9359.02965338335, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9361.76584110771, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9364.50202883208, "TRYK_TAC_SET_TAN"}, // 0.03%
			{9367.23821655645, "TRYK_H_PASGT_OD"}, // 0.03%
			{9369.97440428082, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{9372.71059200518, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9375.44677972955, "TRYK_bandana_g"}, // 0.03%
			{9378.18296745392, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{9380.91915517829, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9383.65534290265, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{9386.39153062702, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{9389.12771835139, "TRYK_TAC_SET_MESH"}, // 0.03%
			{9391.86390607576, "TRYK_TAC_SET_OD"}, // 0.03%
			{9394.60009380012, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{9397.31541909609, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9400.02280484442, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9402.73019059274, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9405.43757634106, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9408.14496208938, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9410.8523478377, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9413.55973358602, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9416.26711933434, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9418.97450508266, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9421.68189083098, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9424.3892765793, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9427.09666232763, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9429.80404807595, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9432.51143382427, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9435.21881957259, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9437.92620532091, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9440.63359106923, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9443.34097681755, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9446.04836256587, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9448.75574831419, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9451.46313406251, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9454.17051981084, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9456.87790555916, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9459.58529130748, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9462.2926770558, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9465.00006280412, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9467.70744855244, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9470.41483430076, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9473.12222004908, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9475.8296057974, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9478.53699154573, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9481.24437729405, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9483.95176304237, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9486.65914879069, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9489.36653453901, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9492.07392028733, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9494.78130603565, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9497.48869178397, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9500.19607753229, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9502.90346328061, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9505.61084902894, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9508.31823477726, "TRYK_U_B_PCUHs"}, // 0.03%
			{9511.02562052558, "TRYK_U_taki_wh"}, // 0.03%
			{9513.7330062739, "TRYK_DMARPAT_T"}, // 0.03%
			{9516.44039202222, "TRYK_C_AOR2_T"}, // 0.03%
			{9519.14777777054, "TRYK_U_B_Sage_T"}, // 0.03%
			{9521.85516351886, "TRYK_U_B_Wood_T"}, // 0.03%
			{9524.56254926718, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9527.2699350155, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9529.97732076382, "TRYK_OVERALL_flesh"}, // 0.03%
			{9532.68470651215, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9535.39209226047, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9538.09947800879, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9540.80686375711, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9543.51424950543, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9546.22163525375, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9548.92902100207, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9551.63640675039, "TRYK_SUITS_BR_F"}, // 0.03%
			{9554.34379249871, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9557.05117824703, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9559.75856399536, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9562.46594974368, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9565.173335492, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9567.88072124032, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9570.58810698864, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9573.29549273696, "TRYK_U_taki_COY"}, // 0.03%
			{9576.00287848528, "TRYK_U_taki_BL"}, // 0.03%
			{9578.7102642336, "TRYK_U_taki_BLK"}, // 0.03%
			{9581.41764998192, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9584.12503573025, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9586.83242147857, "TRYK_U_taki_G_WH"}, // 0.03%
			{9589.53980722689, "TRYK_U_taki_G_COY"}, // 0.03%
			{9592.24719297521, "TRYK_U_taki_G_BL"}, // 0.03%
			{9594.95457872353, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9597.66196447185, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9600.36935022017, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9603.07673596849, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9605.78412171681, "TRYK_B_USMC_R"}, // 0.03%
			{9608.49150746513, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9611.19889321346, "TRYK_ZARATAKI"}, // 0.03%
			{9613.90627896178, "TRYK_ZARATAKI2"}, // 0.03%
			{9616.6136647101, "TRYK_ZARATAKI3"}, // 0.03%
			{9619.32105045842, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9622.02843620674, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9624.73582195506, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9627.44320770338, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9630.1505934517, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9632.85797920002, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9635.56536494834, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9638.27275069667, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9640.98013644499, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9643.68752219331, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9646.39490794163, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9649.10229368995, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9651.80967943827, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9654.51706518659, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9657.22445093491, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9659.93183668323, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9662.63922243156, "TRYK_U_B_fleece"}, // 0.03%
			{9665.34660817988, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9668.0539939282, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9670.76137967652, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9673.46876542484, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9676.17615117316, "TRYK_U_B_PCUs"}, // 0.03%
			{9678.88353692148, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9681.5909226698, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9684.29830841812, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9687.00569416644, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9689.71307991477, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9692.42046566309, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9695.12785141141, "TRYK_U_B_ACU"}, // 0.03%
			{9697.83523715973, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9700.54262290805, "TRYK_U_B_3c"}, // 0.03%
			{9703.25000865637, "TRYK_shirts_PAD"}, // 0.03%
			{9705.95739440469, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9708.66478015301, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9711.37216590133, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9714.07955164965, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9716.78693739798, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9719.4943231463, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9722.20170889462, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9724.90909464294, "TRYK_U_B_ODTAN"}, // 0.03%
			{9727.61648039126, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9730.32386613958, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9733.0312518879, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9735.73863763622, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9738.44602338454, "TRYK_U_B_BLK"}, // 0.03%
			{9741.15340913286, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9743.86079488119, "TRYK_U_B_3cr"}, // 0.03%
			{9746.56818062951, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9749.27556637783, "TRYK_hoodie_FR"}, // 0.03%
			{9751.98295212615, "TRYK_hoodie_Wood"}, // 0.03%
			{9754.69033787447, "TRYK_hoodie_3c"}, // 0.03%
			{9757.39772362279, "TRYK_T_PAD"}, // 0.03%
			{9760.10510937111, "TRYK_T_OD_PAD"}, // 0.03%
			{9762.81249511943, "TRYK_T_TAN_PAD"}, // 0.03%
			{9765.51988086775, "TRYK_T_BLK_PAD"}, // 0.03%
			{9768.22726661608, "TRYK_T_T2_PAD"}, // 0.03%
			{9770.9346523644, "TRYK_hoodie_Blk"}, // 0.03%
			{9773.64203811272, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9776.34942386104, "TRYK_U_hood_nc"}, // 0.03%
			{9779.05680960936, "TRYK_U_hood_mc"}, // 0.03%
			{9781.76419535768, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9784.471581106, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9787.17896685432, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9789.88635260264, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9792.59373835096, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9795.30112409929, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9798.00850984761, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9800.71589559593, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9803.42328134425, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9806.13066709257, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9808.83805284089, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9811.54543858921, "TRYK_U_B_PCUGs"}, // 0.03%
			{9814.25282433753, "TRYK_U_B_PCUODs"}, // 0.03%
			{9816.96021008585, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9819.66759583417, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9822.3749815825, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9825.08236733082, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9827.78975307914, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9830.49713882746, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9833.20452457578, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9835.9119103241, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9838.61929607242, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9841.32668182074, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9844.03406756906, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9846.74145331739, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9849.44883906571, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9852.15622481403, "TRYK_U_pad_j_blk"}, // 0.03%
			{9854.86361056235, "TRYK_U_pad_j"}, // 0.03%
			{9857.57099631067, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9860.27838205899, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9862.9722646365, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9865.666147214, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9868.36002979151, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9870.548979971, "TRYK_H_LHS_HEL_G"}, // 0.02%
			{9872.7379301505, "TRYK_TAC_SET_WH"}, // 0.02%
			{9874.66213199158, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9876.58633383265, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9878.51053567373, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9880.43473751481, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9882.35893935588, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9884.28314119696, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9886.20734303804, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9888.13154487911, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9890.05574672019, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9891.97994856127, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9893.90415040234, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9895.82835224342, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9897.7525540845, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9899.67675592558, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9901.60095776665, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9903.52515960773, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9905.44936144881, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9907.37356328988, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9909.29776513096, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9911.22196697204, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9913.14616881311, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9915.07037065419, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9916.99457249527, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9918.91877433634, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9920.84297617742, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9922.7671780185, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9924.69137985957, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9926.61558170065, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9928.53978354173, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9930.4639853828, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9932.38818722388, "TRYK_V_harnes_od_L"}, // 0.02%
			{9934.31238906496, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9936.23659090604, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9938.16079274711, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9940.08499458819, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9942.00919642927, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9943.93339827034, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9945.85760011142, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9947.7818019525, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9949.70600379357, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9951.63020563465, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9953.55440747573, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9955.4786093168, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9957.40281115788, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9959.32701299896, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9961.25121484003, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9963.17541668111, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9965.09961852219, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9967.02382036327, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9968.94802220434, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9970.87222404542, "TRYK_V_tacv10_TN"}, // 0.02%
			{9972.7964258865, "TRYK_V_tacv10_OD"}, // 0.02%
			{9974.72062772757, "TRYK_V_tacv10_BK"}, // 0.02%
			{9976.64482956865, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9978.56903140973, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9980.4932332508, "TRYK_V_ChestRig_L"}, // 0.02%
			{9982.41743509188, "TRYK_V_ChestRig"}, // 0.02%
			{9984.34163693296, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9986.26583877403, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9988.19004061511, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9990.11424245619, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9992.03844429726, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9993.96264613834, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9995.88684797942, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9997.8110498205, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9998.90552491024, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9999.99999999999, "TRYK_H_Helmet_Winter_2"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Magazine_10Rnd_303
	  TRYK_B_BAF_BAG_BLK
	  TRYK_B_tube_cyt
	  Exile_Item_ChocolateMilk
	  U_C_Man_casual_2_F
	  CUP_smg_bizon
	  Exile_Item_ToiletPaper
	  Exile_Item_Matches
	  TRYK_B_Belt_AOR2
	  TRYK_SUITS_BLK_F
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Item_MountainDupe
	  H_Beret_blk_POLICE
	  Chemlight_red
	  TRYK_TAC_SET_OD_2
	  Chemlight_red
	  U_C_Poloshirt_burgundy
	  TRYK_U_B_3cr
	  Exile_Weapon_CZ550
	  hlc_10rnd_12g_buck_S12
	  hlc_10rnd_12g_buck_S12
	  Exile_Weapon_LeeEnfield
	  Exile_Item_DsNuts
	  TRYK_B_Coyotebackpack_WH
	  Exile_Item_ChristmasTinner
	  6Rnd_GreenSignal_F
	  hlc_rifle_saiga12k
	  hgun_ACPC2_F
	  Exile_Item_PlasticBottleEmpty
	  H_Cap_blu
	  Exile_Item_PowerDrink
	  V_Press_F
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  ItemMap
	  Exile_Item_PlasticBottleDirtyWater
	  TRYK_hoodie_FR
	  Exile_Item_Can_Empty
	  TRYK_U_B_PCUs
	  optic_Holosight_smg
	  TRYK_U_B_BLKTAN_Tshirt
	  TRYK_B_Belt_BLK
	  Exile_Weapon_Taurus
	  CUP_muzzle_snds_M9
	  H_Cap_blu
	  9Rnd_45ACP_Mag
	  ItemRadio
	  hgun_P07_F
	  U_C_Poloshirt_salmon
	  Chemlight_red
	  TRYK_B_AssaultPack_UCP
	  CUP_muzzle_snds_M9
	  TRYK_B_BAF_BAG_BLK
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  CUP_sgun_Saiga12K
	  TRYK_V_tacv1_MSL_BK
	  Exile_Weapon_LeeEnfield
	  CUP_smg_MP5SD6
	  6Rnd_RedSignal_F
	  CUP_hgun_Duty_M3X
	  TRYK_shirts_BLK_PAD
	  hgun_P07_F
	  hgun_Pistol_01_F
	  CUP_64Rnd_9x19_Bizon_M
	  hlc_rifle_saiga12k
	  Exile_Magazine_10Rnd_303
	  Chemlight_red
	  Exile_Item_Can_Empty
	  FlareGreen_F
	  Exile_Weapon_M1014
	  TRYK_V_ArmorVest_khk2
	  FlareYellow_F
	  TRYK_B_Belt_BLK
	  hgun_P07_F
	  muzzle_snds_L
	  Exile_Item_InstantCoffee
	  Exile_Item_BBQSandwich
	  hlc_rifle_hk53
	  Exile_Item_Matches
	  Binocular
	  TRYK_U_B_BLK_TAN_2
	  ItemCompass
	  Exile_Item_EnergyDrink
	  hlc_rifle_saiga12k
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  TRYK_shirts_DENIM_RED2_Sleeve
	  B_OutdoorPack_tan
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_BBQSandwich
	  Exile_Item_PlasticBottleEmpty
	  Exile_Weapon_Taurus
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_Magazine02
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_GloriousKnakworst
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  TRYK_U_B_BLK3CD
	  optic_Aco_smg
	  B_AssaultPack_rgr
	  Exile_Weapon_M1014
	*/
	class CivillianUpperClass
	{
		count = 545;
		half = 9092.97559391437;
		halfIndex = 272;
		sum = 10000;
		items[] = 
		{
			{266.666666666667, "Exile_Item_Can_Empty"}, // 2.67%
			{533.333333333333, "Exile_Item_ToiletPaper"}, // 2.67%
			{800, "Exile_Item_PlasticBottleEmpty"}, // 2.67%
			{975.438596491228, "Exile_Weapon_LeeEnfield"}, // 1.75%
			{1139.18128654971, "hlc_rifle_saiga12k"}, // 1.64%
			{1256.14035087719, "Exile_Weapon_M1014"}, // 1.17%
			{1373.09941520468, "CUP_sgun_Saiga12K"}, // 1.17%
			{1480.09529997834, "hlc_10rnd_12g_buck_S12"}, // 1.07%
			{1570.63027940221, "hlc_10rnd_12g_slug_S12"}, // 0.91%
			{1653.96361273554, "Exile_Item_PlasticBottleDirtyWater"}, // 0.83%
			{1736.26813948451, "Exile_Magazine_8Rnd_74Slug"}, // 0.82%
			{1818.57266623348, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.82%
			{1900.87719298246, "Exile_Magazine_10Rnd_303"}, // 0.82%
			{1983.18171973143, "Exile_Magazine_5Rnd_22LR"}, // 0.82%
			{2065.4862464804, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.82%
			{2132.15291314706, "Exile_Item_ChocolateMilk"}, // 0.67%
			{2198.81957981373, "Exile_Item_MountainDupe"}, // 0.67%
			{2265.4862464804, "V_Rangemaster_belt"}, // 0.67%
			{2332.15291314706, "Exile_Item_Magazine01"}, // 0.67%
			{2398.81957981373, "Chemlight_blue"}, // 0.67%
			{2465.4862464804, "Chemlight_yellow"}, // 0.67%
			{2532.15291314706, "Exile_Item_Magazine02"}, // 0.67%
			{2598.81957981373, "Exile_Item_Magazine03"}, // 0.67%
			{2665.4862464804, "Chemlight_green"}, // 0.67%
			{2732.15291314706, "FlareYellow_F"}, // 0.67%
			{2798.81957981373, "FlareWhite_F"}, // 0.67%
			{2865.4862464804, "Chemlight_red"}, // 0.67%
			{2932.15291314706, "FlareRed_F"}, // 0.67%
			{2998.81957981373, "FlareGreen_F"}, // 0.67%
			{3065.4862464804, "Exile_Item_Magazine04"}, // 0.67%
			{3124.74550573966, "ItemWatch"}, // 0.59%
			{3183.2250379034, "Exile_Weapon_CZ550"}, // 0.58%
			{3240.26207494043, "Exile_Item_InstantCoffee"}, // 0.57%
			{3296.9287416071, "Exile_Item_EnergyDrink"}, // 0.57%
			{3350.86132587676, "muzzle_snds_acp"}, // 0.54%
			{3404.79391014643, "muzzle_snds_L"}, // 0.54%
			{3458.12724347976, "CUP_smg_MP5SD6"}, // 0.53%
			{3507.97148023989, "B_OutdoorPack_blk"}, // 0.50%
			{3555.37888764729, "Exile_Item_Heatpack"}, // 0.47%
			{3602.24081233349, "hgun_P07_F"}, // 0.47%
			{3648.90747900015, "Exile_Item_Raisins"}, // 0.47%
			{3695.57414566682, "Exile_Item_Moobar"}, // 0.47%
			{3742.24081233348, "Exile_Item_Beer"}, // 0.47%
			{3787.95509804777, "hlc_rifle_hk53"}, // 0.46%
			{3832.81491113188, "B_OutdoorPack_blu"}, // 0.45%
			{3877.67472421599, "B_OutdoorPack_tan"}, // 0.45%
			{3922.30512867904, "hgun_Rook40_F"}, // 0.45%
			{3966.93553314208, "hgun_ACPC2_F"}, // 0.45%
			{4010.29596674641, "11Rnd_45ACP_Mag"}, // 0.43%
			{4053.65640035075, "9Rnd_45ACP_Mag"}, // 0.43%
			{4097.01683395508, "Exile_Magazine_8Rnd_9x18"}, // 0.43%
			{4140.37726755942, "Exile_Magazine_6Rnd_45ACP"}, // 0.43%
			{4183.73770116376, "10Rnd_9x21_Mag"}, // 0.43%
			{4227.09813476809, "Exile_Magazine_7Rnd_45ACP"}, // 0.43%
			{4270.45856837243, "30Rnd_9x21_Mag"}, // 0.43%
			{4311.94004985391, "Exile_Item_CockONut"}, // 0.41%
			{4353.42153133539, "Exile_Item_SeedAstics"}, // 0.41%
			{4394.90301281687, "ItemMap"}, // 0.41%
			{4435.07037683361, "CUP_hgun_Phantom"}, // 0.40%
			{4475.07037683361, "Exile_Item_PlasticBottleFreshWater"}, // 0.40%
			{4514.94576624171, "B_HuntingBackpack"}, // 0.40%
			{4553.97015648561, "CUP_18Rnd_9x19_Phantom"}, // 0.39%
			{4592.99454672952, "CUP_30Rnd_9x19_UZI"}, // 0.39%
			{4632.01893697342, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.39%
			{4670.11417506866, "CUP_smg_bizon"}, // 0.38%
			{4708.2094131639, "CUP_smg_MP5A5"}, // 0.38%
			{4744.50570946019, "Exile_Item_Noodles"}, // 0.36%
			{4780.80200575649, "Exile_Item_DsNuts"}, // 0.36%
			{4817.09830205278, "Exile_Item_Cheathas"}, // 0.36%
			{4853.39459834908, "Exile_Item_CatFood"}, // 0.36%
			{4889.69089464538, "Exile_Item_SausageGravy"}, // 0.36%
			{4925.98719094167, "Exile_Item_ChristmasTinner"}, // 0.36%
			{4962.28348723797, "Exile_Item_BBQSandwich"}, // 0.36%
			{4998.57978353427, "Exile_Item_BeefParts"}, // 0.36%
			{5034.87607983056, "Exile_Item_Surstromming"}, // 0.36%
			{5071.17237612686, "Exile_Item_Dogfood"}, // 0.36%
			{5107.46867242316, "Exile_Item_MacasCheese"}, // 0.36%
			{5143.02422797871, "ItemRadio"}, // 0.36%
			{5178.57978353427, "Binocular"}, // 0.36%
			{5214.13533908982, "ItemCompass"}, // 0.36%
			{5249.22305838807, "hlc_rifle_L1A1SLR"}, // 0.35%
			{5284.11402412016, "B_AssaultPack_mcamo"}, // 0.35%
			{5319.00498985224, "B_AssaultPack_tna_F"}, // 0.35%
			{5353.89595558433, "B_AssaultPack_blk"}, // 0.35%
			{5388.78692131642, "B_AssaultPack_sgg"}, // 0.35%
			{5423.67788704851, "B_AssaultPack_rgr"}, // 0.35%
			{5458.56885278059, "B_AssaultPack_khk"}, // 0.35%
			{5493.45981851268, "B_AssaultPack_dgtl"}, // 0.35%
			{5528.35078424477, "B_AssaultPack_cbr"}, // 0.35%
			{5563.03913112824, "6Rnd_45ACP_Cylinder"}, // 0.35%
			{5596.37246446157, "V_TacVest_blk_POLICE"}, // 0.33%
			{5629.7057977949, "V_Press_F"}, // 0.33%
			{5662.62760849449, "hlc_20Rnd_762x51_B_fal"}, // 0.33%
			{5694.62760849449, "H_Cap_tan"}, // 0.32%
			{5726.62760849449, "H_Cap_press"}, // 0.32%
			{5758.62760849449, "H_Cap_red"}, // 0.32%
			{5790.62760849449, "H_Hat_brown"}, // 0.32%
			{5822.62760849449, "H_Hat_checker"}, // 0.32%
			{5854.62760849449, "H_Hat_grey"}, // 0.32%
			{5886.62760849449, "H_Hat_tan"}, // 0.32%
			{5918.62760849449, "H_StrawHat_dark"}, // 0.32%
			{5950.62760849449, "H_StrawHat"}, // 0.32%
			{5982.62760849449, "H_Hat_blue"}, // 0.32%
			{6014.2325467661, "optic_Holosight_smg_blk_F"}, // 0.32%
			{6045.8374850377, "optic_Aco"}, // 0.32%
			{6077.44242330931, "optic_ACO_grn"}, // 0.32%
			{6109.04736158091, "optic_Aco_smg"}, // 0.32%
			{6140.65229985251, "optic_ACO_grn_smg"}, // 0.32%
			{6172.25723812412, "optic_Holosight_smg"}, // 0.32%
			{6203.36834923523, "Exile_Item_GloriousKnakworst"}, // 0.31%
			{6233.33089605171, "CUP_acc_Glock17_Flashlight"}, // 0.30%
			{6263.29344286819, "CUP_muzzle_snds_MicroUzi"}, // 0.30%
			{6293.25598968467, "CUP_acc_CZ_M3X"}, // 0.30%
			{6322.26575258564, "hgun_Pistol_Signal_F"}, // 0.29%
			{6351.27551548662, "hgun_Pistol_heavy_01_F"}, // 0.29%
			{6380.2852783876, "hgun_Pistol_heavy_02_F"}, // 0.29%
			{6409.29504128857, "CUP_hgun_SA61"}, // 0.29%
			{6438.30480418955, "hgun_P07_khk_F"}, // 0.29%
			{6467.31456709053, "hgun_Pistol_01_F"}, // 0.29%
			{6496.3243299915, "Exile_Weapon_TaurusGold"}, // 0.29%
			{6525.33409289248, "Exile_Weapon_Taurus"}, // 0.29%
			{6554.34385579345, "Exile_Weapon_Makarov"}, // 0.29%
			{6583.35361869443, "Exile_Weapon_Colt1911"}, // 0.29%
			{6612.24250758332, "hlc_30rnd_556x45_t_hk33"}, // 0.29%
			{6641.13139647221, "30Rnd_45ACP_Mag_SMG_01"}, // 0.29%
			{6670.0202853611, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.29%
			{6698.90917424998, "30Rnd_9x21_Mag_SMG_02"}, // 0.29%
			{6727.79806313887, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.29%
			{6756.68695202776, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.29%
			{6785.57584091665, "CUP_64Rnd_9x19_Bizon_M"}, // 0.29%
			{6814.46472980554, "CUP_30Rnd_9x19_MP5"}, // 0.29%
			{6843.35361869443, "CUP_30Rnd_9x19_EVO"}, // 0.29%
			{6872.24250758332, "hlc_30rnd_556x45_epr_hk33"}, // 0.29%
			{6901.1313964722, "hlc_30rnd_556x45_b_hk33"}, // 0.29%
			{6930.02028536109, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.29%
			{6958.09046079969, "U_C_Poor_2"}, // 0.28%
			{6986.16063623829, "U_C_Poor_1"}, // 0.28%
			{7014.23081167688, "U_C_Poor_shorts_1"}, // 0.28%
			{7042.30098711548, "U_C_HunterBody_grn"}, // 0.28%
			{7070.37116255408, "U_C_Journalist"}, // 0.28%
			{7098.44133799267, "U_C_Scientist"}, // 0.28%
			{7126.51151343127, "U_Rangemaster"}, // 0.28%
			{7153.4778055661, "CUP_muzzle_snds_M9"}, // 0.27%
			{7180.25604824392, "CUP_hgun_Duty_M3X"}, // 0.27%
			{7206.92271491059, "H_Cap_oli"}, // 0.27%
			{7233.58938157726, "H_Cap_headphones"}, // 0.27%
			{7260.25604824392, "H_Cap_grn"}, // 0.27%
			{7286.92271491059, "H_Cap_blu"}, // 0.27%
			{7313.58938157726, "H_Cap_blk_Raven"}, // 0.27%
			{7340.25604824393, "H_Beret_blk_POLICE"}, // 0.27%
			{7366.92271491059, "H_Bandanna_surfer"}, // 0.27%
			{7393.58938157726, "H_Cap_blk"}, // 0.27%
			{7420.25604824393, "Exile_Item_ZipTie"}, // 0.27%
			{7446.27230840653, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.26%
			{7472.19823433245, "Exile_Item_CanOpener"}, // 0.26%
			{7498.12416025838, "Exile_Item_Matches"}, // 0.26%
			{7523.04627863844, "B_Kitbag_mcamo"}, // 0.25%
			{7547.9683970185, "B_Kitbag_sgg"}, // 0.25%
			{7572.89051539857, "B_Kitbag_cbr"}, // 0.25%
			{7597.58187342326, "hlc_optic_kobra"}, // 0.25%
			{7621.28557712696, "CUP_optic_ACOG"}, // 0.24%
			{7644.74598768414, "TRYK_B_Belt"}, // 0.23%
			{7668.20639824133, "TRYK_B_Kitbag_Base"}, // 0.23%
			{7691.66680879851, "TRYK_B_Kitbag_blk"}, // 0.23%
			{7715.00014213185, "Exile_Item_PowerDrink"}, // 0.23%
			{7737.85728498899, "CUP_smg_bizon_snds"}, // 0.23%
			{7760.71442784613, "CUP_smg_EVO"}, // 0.23%
			{7783.02963007765, "CUP_hgun_PB6P9_snds"}, // 0.22%
			{7804.86198875212, "U_C_Poloshirt_salmon"}, // 0.22%
			{7826.69434742658, "U_C_Poloshirt_tricolour"}, // 0.22%
			{7848.52670610104, "U_C_Poloshirt_stripped"}, // 0.22%
			{7870.35906477551, "U_C_Poloshirt_burgundy"}, // 0.22%
			{7892.19142344997, "U_C_Poloshirt_blue"}, // 0.22%
			{7913.87164025214, "16Rnd_9x21_Mag"}, // 0.22%
			{7934.84542302367, "optic_Yorris"}, // 0.21%
			{7955.81920579521, "optic_MRD"}, // 0.21%
			{7976.15156161144, "TRYK_B_tube_cyt"}, // 0.20%
			{7996.48391742766, "TRYK_B_Belt_CYT"}, // 0.20%
			{8016.81627324389, "TRYK_B_Kitbag_aaf"}, // 0.20%
			{8035.86389229151, "SmokeShellOrange"}, // 0.19%
			{8054.91151133913, "SmokeShellPurple"}, // 0.19%
			{8073.95913038675, "SmokeShellGreen"}, // 0.19%
			{8093.00674943437, "SmokeShellYellow"}, // 0.19%
			{8112.05436848199, "SmokeShellBlue"}, // 0.19%
			{8131.1019875296, "SmokeShellRed"}, // 0.19%
			{8150.14960657722, "SmokeShell"}, // 0.19%
			{8168.91793502297, "TRYK_B_BAF_BAG_BLK"}, // 0.19%
			{8187.68626346872, "TRYK_B_Belt_br"}, // 0.19%
			{8206.45459191447, "TRYK_B_Belt_tan"}, // 0.19%
			{8225.22292036021, "TRYK_B_Belt_BLK"}, // 0.19%
			{8243.99124880596, "TRYK_B_Belt_GR"}, // 0.19%
			{8262.75957725171, "TRYK_B_Kitbag_Base_JSDF"}, // 0.19%
			{8281.52790569746, "TRYK_B_Alicepack"}, // 0.19%
			{8300.2962341432, "TRYK_B_FieldPack_Wood"}, // 0.19%
			{8318.14839592842, "CUP_hgun_MicroUzi"}, // 0.18%
			{8335.35269700369, "TRYK_B_Belt_AOR1"}, // 0.17%
			{8352.55699807896, "TRYK_B_Belt_AOR2"}, // 0.17%
			{8369.76129915423, "TRYK_B_BAF_BAG_CYT"}, // 0.17%
			{8386.9656002295, "TRYK_B_BAF_BAG_OD"}, // 0.17%
			{8403.63226689616, "Exile_Item_PlasticBottleCoffee"}, // 0.17%
			{8419.27254060095, "TRYK_B_AssaultPack_UCP"}, // 0.16%
			{8434.91281430574, "TRYK_B_AssaultPack_Type2camo"}, // 0.16%
			{8450.55308801053, "TRYK_B_tube_blk"}, // 0.16%
			{8466.19336171532, "TRYK_B_tube_od"}, // 0.16%
			{8481.78790362566, "U_I_C_Soldier_Bandit_2_F"}, // 0.16%
			{8497.38244553599, "U_C_Man_casual_1_F"}, // 0.16%
			{8512.97698744632, "U_I_C_Soldier_Bandit_3_F"}, // 0.16%
			{8528.57152935665, "U_I_C_Soldier_Bandit_1_F"}, // 0.16%
			{8544.16607126698, "U_I_C_Soldier_Bandit_4_F"}, // 0.16%
			{8559.76061317732, "U_I_C_Soldier_Bandit_5_F"}, // 0.16%
			{8575.35515508765, "U_C_man_sport_1_F"}, // 0.16%
			{8590.94969699798, "U_C_man_sport_2_F"}, // 0.16%
			{8606.54423890831, "U_C_man_sport_3_F"}, // 0.16%
			{8622.13878081864, "U_C_Man_casual_6_F"}, // 0.16%
			{8637.73332272897, "U_C_Man_casual_5_F"}, // 0.16%
			{8653.32786463931, "U_C_Man_casual_4_F"}, // 0.16%
			{8668.92240654964, "U_C_Man_casual_2_F"}, // 0.16%
			{8684.51694845997, "U_C_Man_casual_3_F"}, // 0.16%
			{8700.07250401552, "Exile_Item_EMRE"}, // 0.16%
			{8715.62805957108, "Exile_Item_CookingPot"}, // 0.16%
			{8730.86615480918, "hgun_PDW2000_F"}, // 0.15%
			{8746.10425004727, "SMG_05_F"}, // 0.15%
			{8761.28040180879, "6Rnd_GreenSignal_F"}, // 0.15%
			{8776.45655357031, "6Rnd_RedSignal_F"}, // 0.15%
			{8790.53279990462, "TRYK_B_BAF_BAG_mcamo"}, // 0.14%
			{8803.04501886845, "TRYK_B_Medbag_OD"}, // 0.13%
			{8815.55723783228, "TRYK_B_Medbag_BK"}, // 0.13%
			{8828.06945679611, "TRYK_B_Medbag_ucp"}, // 0.13%
			{8840.58167575994, "TRYK_B_BAF_BAG_rgr"}, // 0.13%
			{8853.09389472377, "TRYK_B_Medbag"}, // 0.13%
			{8861.73894875536, "TRYK_Hrp_vest_od"}, // 0.09%
			{8869.71899863067, "TRYK_LOC_AK_chestrig_OD"}, // 0.08%
			{8877.69904850599, "TRYK_Hrp_vest_ucp"}, // 0.08%
			{8885.51918535838, "TRYK_B_Coyotebackpack_OD"}, // 0.08%
			{8893.33932221078, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.08%
			{8901.15945906317, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.08%
			{8908.97959591557, "TRYK_B_Coyotebackpack_BLK"}, // 0.08%
			{8916.79973276796, "TRYK_B_Coyotebackpack"}, // 0.08%
			{8924.41878038701, "SMG_01_F"}, // 0.08%
			{8932.03782800606, "SMG_02_F"}, // 0.08%
			{8938.68786956882, "TRYK_V_Sheriff_BA_TB"}, // 0.07%
			{8944.61379549474, "ItemGPS"}, // 0.06%
			{8950.53972142067, "Exile_Item_MobilePhone"}, // 0.06%
			{8955.85975467087, "TRYK_LOC_AK_chestrig_TAN"}, // 0.05%
			{8960.58788705858, "TRYK_ESS_CAP_tan"}, // 0.05%
			{8965.31601944629, "TRYK_H_Helmet_Snow"}, // 0.05%
			{8970.04415183399, "TRYK_H_WH"}, // 0.05%
			{8974.7722842217, "TRYK_H_GR"}, // 0.05%
			{8979.50041660941, "TRYK_H_AOR1"}, // 0.05%
			{8984.22854899711, "TRYK_H_AOR2"}, // 0.05%
			{8988.95668138482, "TRYK_H_EARMUFF"}, // 0.05%
			{8993.68481377253, "TRYK_H_TACEARMUFF_H"}, // 0.05%
			{8998.41294616024, "TRYK_H_Bandana_H"}, // 0.05%
			{9003.14107854794, "TRYK_H_Bandana_wig"}, // 0.05%
			{9007.86921093565, "TRYK_H_Bandana_wig_g"}, // 0.05%
			{9012.59734332336, "TRYK_H_wig"}, // 0.05%
			{9017.32547571106, "TRYK_H_PASGT_TAN"}, // 0.05%
			{9022.05360809877, "TRYK_H_headset2"}, // 0.05%
			{9026.78174048648, "TRYK_H_woolhat_CW"}, // 0.05%
			{9031.50987287418, "TRYK_H_woolhat_WH"}, // 0.05%
			{9036.23800526189, "TRYK_H_woolhat_br"}, // 0.05%
			{9040.9661376496, "TRYK_H_woolhat_cu"}, // 0.05%
			{9045.6942700373, "TRYK_H_woolhat_tan"}, // 0.05%
			{9050.42240242501, "TRYK_H_headsetcap"}, // 0.05%
			{9055.15053481272, "TRYK_H_headsetcap_blk"}, // 0.05%
			{9059.87866720042, "TRYK_H_headsetcap_od"}, // 0.05%
			{9064.60679958813, "TRYK_H_pakol"}, // 0.05%
			{9069.33493197584, "TRYK_H_pakol2"}, // 0.05%
			{9074.06306436355, "TRYK_ESS_CAP_OD"}, // 0.05%
			{9078.79119675125, "TRYK_H_woolhat"}, // 0.05%
			{9083.51932913896, "TRYK_H_PASGT_COYO"}, // 0.05%
			{9088.24746152667, "TRYK_H_PASGT_OD"}, // 0.05%
			{9092.97559391437, "TRYK_r_cap_blk_Glasses"}, // 0.05%
			{9097.70372630208, "TRYK_r_cap_tan_Glasses"}, // 0.05%
			{9102.43185868979, "TRYK_H_PASGT_BLK"}, // 0.05%
			{9107.15999107749, "TRYK_r_cap_od_Glasses"}, // 0.05%
			{9111.8881234652, "TRYK_H_headsetcap_Glasses"}, // 0.05%
			{9116.61625585291, "TRYK_H_headsetcap_blk_Glasses"}, // 0.05%
			{9121.34438824061, "TRYK_H_headsetcap_od_Glasses"}, // 0.05%
			{9126.07252062832, "TRYK_TAC_EARMUFF_SHADE"}, // 0.05%
			{9130.80065301603, "TRYK_TAC_EARMUFF"}, // 0.05%
			{9135.52878540373, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.05%
			{9140.25691779144, "TRYK_headset2"}, // 0.05%
			{9144.98505017915, "TRYK_TAC_EARMUFF_Gs"}, // 0.05%
			{9149.71318256685, "TRYK_TAC_SET_bn"}, // 0.05%
			{9154.44131495456, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.05%
			{9159.16944734227, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.05%
			{9163.89757972998, "TRYK_TAC_SET_TAN"}, // 0.05%
			{9168.62571211768, "TRYK_TAC_SET_OD"}, // 0.05%
			{9173.35384450539, "TRYK_R_CAP_BLK"}, // 0.05%
			{9178.0819768931, "TRYK_TAC_SET_MESH"}, // 0.05%
			{9182.8101092808, "TRYK_TAC_SET_TAN_2"}, // 0.05%
			{9187.53824166851, "TRYK_TAC_SET_OD_2"}, // 0.05%
			{9192.26637405622, "TRYK_TAC_SET_WH_2"}, // 0.05%
			{9196.99450644392, "TRYK_TAC_SET_MESH_2"}, // 0.05%
			{9201.72263883163, "TRYK_bandana_g"}, // 0.05%
			{9206.45077121934, "TRYK_R_CAP_OD_US"}, // 0.05%
			{9211.17890360704, "TRYK_R_CAP_TAN"}, // 0.05%
			{9215.87098571848, "TRYK_B_Coyotebackpack_WH"}, // 0.05%
			{9220.52601481241, "TRYK_V_Sheriff_BA_TB2"}, // 0.05%
			{9225.18104390634, "TRYK_V_Sheriff_BA_T3"}, // 0.05%
			{9229.83607300028, "TRYK_V_Sheriff_BA_T2"}, // 0.05%
			{9233.61857891044, "TRYK_TAC_SET_WH"}, // 0.04%
			{9237.40108482061, "TRYK_H_LHS_HEL_G"}, // 0.04%
			{9240.72610560199, "TRYK_V_ArmorVest_rgr2"}, // 0.03%
			{9244.05112638337, "TRYK_V_ArmorVest_green2"}, // 0.03%
			{9247.37614716475, "TRYK_V_ArmorVest_tan2"}, // 0.03%
			{9250.70116794613, "TRYK_V_ArmorVest_Delta2"}, // 0.03%
			{9254.02618872751, "TRYK_V_TacVest_coyo"}, // 0.03%
			{9257.35120950889, "TRYK_V_harnes_blk_L"}, // 0.03%
			{9260.67623029027, "TRYK_V_ArmorVest_khk2"}, // 0.03%
			{9264.00125107165, "TRYK_V_harnes_TAN_L"}, // 0.03%
			{9267.32627185303, "TRYK_V_ChestRig_L"}, // 0.03%
			{9270.65129263441, "TRYK_V_ChestRig"}, // 0.03%
			{9273.97631341579, "TRYK_V_Sheriff_BA_OD"}, // 0.03%
			{9277.30133419717, "TRYK_V_tacv10_BK"}, // 0.03%
			{9280.62635497855, "TRYK_V_harnes_od_L"}, // 0.03%
			{9283.95137575993, "TRYK_V_ArmorVest_cbr2"}, // 0.03%
			{9287.27639654131, "TRYK_V_ArmorVest_coyo"}, // 0.03%
			{9290.60141732268, "TRYK_V_ArmorVest_coyo2"}, // 0.03%
			{9293.92643810406, "TRYK_V_ArmorVest_AOR2_2"}, // 0.03%
			{9297.25145888544, "TRYK_V_ArmorVest_AOR1_2"}, // 0.03%
			{9300.57647966682, "TRYK_V_ArmorVest_Ranger"}, // 0.03%
			{9303.9015004482, "TRYK_V_ArmorVest_Delta"}, // 0.03%
			{9307.22652122958, "TRYK_V_ArmorVest_tan"}, // 0.03%
			{9310.55154201096, "TRYK_V_ArmorVest_green"}, // 0.03%
			{9313.87656279234, "TRYK_V_ArmorVest_rgr"}, // 0.03%
			{9317.20158357372, "TRYK_V_ArmorVest_khk"}, // 0.03%
			{9320.5266043551, "TRYK_V_ArmorVest_CBR"}, // 0.03%
			{9323.85162513648, "TRYK_V_ArmorVest_Brown"}, // 0.03%
			{9327.17664591786, "TRYK_V_tacv10_OD"}, // 0.03%
			{9330.50166669924, "TRYK_V_ArmorVest_AOR2"}, // 0.03%
			{9333.82668748062, "TRYK_V_ArmorVest_AOR1"}, // 0.03%
			{9337.151708262, "TRYK_V_ArmorVest_Brown2"}, // 0.03%
			{9340.47672904338, "TRYK_V_tacv10_TN"}, // 0.03%
			{9343.80174982476, "TRYK_V_ArmorVest_Ranger2"}, // 0.03%
			{9347.12677060614, "TRYK_V_tacv10LC_OD"}, // 0.03%
			{9350.45179138752, "TRYK_V_tacv10LC_BK"}, // 0.03%
			{9353.7768121689, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.03%
			{9357.10183295028, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.03%
			{9360.42685373166, "TRYK_V_Sheriff_BA_TB5"}, // 0.03%
			{9363.75187451304, "TRYK_V_Sheriff_BA_T5"}, // 0.03%
			{9367.07689529442, "TRYK_V_Sheriff_BA_T4"}, // 0.03%
			{9370.4019160758, "TRYK_V_Sheriff_BA_TB3"}, // 0.03%
			{9373.72693685718, "TRYK_V_Sheriff_BA_T"}, // 0.03%
			{9377.05195763856, "TRYK_V_Sheriff_BA_TCL2"}, // 0.03%
			{9380.37697841994, "TRYK_V_Sheriff_BA_TBL2"}, // 0.03%
			{9383.70199920132, "TRYK_V_Sheriff_BA_TL2"}, // 0.03%
			{9387.0270199827, "TRYK_V_Sheriff_BA_TCL"}, // 0.03%
			{9390.35204076408, "TRYK_V_Sheriff_BA_TBL"}, // 0.03%
			{9393.67706154546, "TRYK_V_Sheriff_BA_TL"}, // 0.03%
			{9397.00208232684, "TRYK_V_tacSVD_OD"}, // 0.03%
			{9400.32710310822, "TRYK_V_Sheriff_BA_TB4"}, // 0.03%
			{9403.6521238896, "TRYK_V_tacv1LC_MSL_NV"}, // 0.03%
			{9406.97714467098, "TRYK_V_tacv10LC_TN"}, // 0.03%
			{9410.30216545236, "TRYK_V_tacv1L_BK"}, // 0.03%
			{9413.62718623374, "TRYK_V_tacSVD_BK"}, // 0.03%
			{9416.95220701512, "TRYK_V_tacv1L_OD"}, // 0.03%
			{9420.2772277965, "TRYK_V_tacv1L_CY"}, // 0.03%
			{9423.60224857788, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.03%
			{9426.92726935926, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.03%
			{9430.25229014064, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.03%
			{9433.57731092202, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.03%
			{9436.9023317034, "TRYK_V_tacv1LC_P2_BK"}, // 0.03%
			{9440.22735248478, "TRYK_V_tacv1LC_MSL_BK"}, // 0.03%
			{9443.55237326616, "TRYK_V_tacv1LMSL_BK"}, // 0.03%
			{9446.87739404754, "TRYK_V_tacv1_MSL_NV"}, // 0.03%
			{9450.20241482892, "TRYK_V_tacv1LMSL_NV"}, // 0.03%
			{9453.5274356103, "TRYK_V_tacv1_MSL_BK"}, // 0.03%
			{9456.64634399236, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9459.76525237443, "TRYK_ZARATAKI"}, // 0.03%
			{9462.8841607565, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9466.00306913856, "TRYK_B_USMC_R"}, // 0.03%
			{9469.12197752063, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9472.2408859027, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9475.35979428476, "TRYK_U_B_PCUHs"}, // 0.03%
			{9478.47870266683, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9481.5976110489, "TRYK_U_taki_G_BL"}, // 0.03%
			{9484.71651943096, "TRYK_U_taki_G_COY"}, // 0.03%
			{9487.83542781303, "TRYK_U_taki_G_WH"}, // 0.03%
			{9490.95433619509, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9494.07324457716, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9497.19215295923, "TRYK_ZARATAKI2"}, // 0.03%
			{9500.31106134129, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9503.42996972336, "TRYK_U_taki_BLK"}, // 0.03%
			{9506.54887810543, "TRYK_U_taki_BL"}, // 0.03%
			{9509.66778648749, "TRYK_U_taki_COY"}, // 0.03%
			{9512.78669486956, "TRYK_U_taki_wh"}, // 0.03%
			{9515.90560325163, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9519.02451163369, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9522.14342001576, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9525.26232839782, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9528.38123677989, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9531.50014516196, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9534.61905354402, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9537.73796192609, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9540.85687030816, "U_OrestesBody"}, // 0.03%
			{9543.97577869022, "U_NikosBody"}, // 0.03%
			{9547.09468707229, "U_NikosAgedBody"}, // 0.03%
			{9550.21359545436, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9553.33250383642, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9556.45141221849, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9559.57032060055, "TRYK_SUITS_BR_F"}, // 0.03%
			{9562.68922898262, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9565.80813736469, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9568.92704574675, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9572.04595412882, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9575.16486251089, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9578.28377089295, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9581.40267927502, "TRYK_OVERALL_flesh"}, // 0.03%
			{9584.52158765709, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9587.64049603915, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9590.75940442122, "TRYK_U_B_Wood_T"}, // 0.03%
			{9593.87831280328, "TRYK_U_B_Sage_T"}, // 0.03%
			{9596.99722118535, "TRYK_C_AOR2_T"}, // 0.03%
			{9600.11612956742, "TRYK_DMARPAT_T"}, // 0.03%
			{9603.23503794948, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9606.35394633155, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9609.47285471362, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9612.59176309568, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9615.71067147775, "TRYK_ZARATAKI3"}, // 0.03%
			{9618.82957985982, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9621.94848824188, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9625.06739662395, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9628.18630500601, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9631.30521338808, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9634.42412177015, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9637.54303015221, "TRYK_U_B_fleece"}, // 0.03%
			{9640.66193853428, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9643.78084691635, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9646.89975529841, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9650.01866368048, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9653.13757206255, "TRYK_U_B_PCUs"}, // 0.03%
			{9656.25648044461, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9659.37538882668, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9662.49429720874, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9665.61320559081, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9668.73211397288, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9671.85102235494, "TRYK_U_B_PCUODs"}, // 0.03%
			{9674.96993073701, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9678.08883911908, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9681.20774750114, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9684.32665588321, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9687.44556426528, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9690.56447264734, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9693.68338102941, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9696.80228941147, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9699.92119779354, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9703.04010617561, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9706.15901455767, "TRYK_U_pad_j"}, // 0.03%
			{9709.27792293974, "TRYK_U_B_PCUGs"}, // 0.03%
			{9712.39683132181, "TRYK_U_pad_j_blk"}, // 0.03%
			{9715.51573970387, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9718.63464808594, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9721.75355646801, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9724.87246485007, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9727.99137323214, "TRYK_U_B_ACU"}, // 0.03%
			{9731.1102816142, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9734.22918999627, "TRYK_U_B_3c"}, // 0.03%
			{9737.34809837834, "TRYK_U_B_3cr"}, // 0.03%
			{9740.4670067604, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9743.58591514247, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9746.70482352454, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9749.8237319066, "TRYK_U_B_BLK"}, // 0.03%
			{9752.94264028867, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9756.06154867074, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9759.1804570528, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9762.29936543487, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9765.41827381693, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9768.537182199, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9771.65609058107, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9774.77499896313, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9777.8939073452, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9781.01281572727, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9784.13172410933, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9787.2506324914, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9790.36954087347, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9793.48844925553, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9796.6073576376, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9799.72626601966, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9802.84517440173, "TRYK_U_B_ODTAN"}, // 0.03%
			{9805.9640827838, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9809.08299116586, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9812.20189954793, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9815.32080793, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9818.43971631206, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9821.55862469413, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9824.6775330762, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9827.79644145826, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9830.91534984033, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9834.03425822239, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9837.15316660446, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9840.27207498653, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9843.39098336859, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9846.50989175066, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9849.62880013273, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9852.74770851479, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9855.86661689686, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9858.98552527893, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9862.10443366099, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9865.22334204306, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9868.34225042512, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9871.46115880719, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9874.58006718926, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9877.69897557132, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9880.81788395339, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9883.93679233546, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9887.05570071752, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9890.17460909959, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9893.29351748166, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9896.41242586372, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9899.53133424579, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9902.65024262785, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9905.76915100992, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9908.88805939199, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9912.00696777405, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9915.12587615612, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9918.24478453819, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9921.36369292025, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9924.48260130232, "TRYK_hoodie_Blk"}, // 0.03%
			{9927.60150968439, "TRYK_hoodie_FR"}, // 0.03%
			{9930.72041806645, "TRYK_hoodie_Wood"}, // 0.03%
			{9933.83932644852, "TRYK_hoodie_3c"}, // 0.03%
			{9936.95823483058, "TRYK_T_PAD"}, // 0.03%
			{9940.07714321265, "TRYK_T_OD_PAD"}, // 0.03%
			{9943.19605159472, "TRYK_T_TAN_PAD"}, // 0.03%
			{9946.31495997678, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9949.43386835885, "TRYK_T_BLK_PAD"}, // 0.03%
			{9952.55277674092, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9955.67168512298, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9958.79059350505, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9961.90950188712, "TRYK_shirts_PAD"}, // 0.03%
			{9965.02841026918, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9968.14731865125, "TRYK_T_T2_PAD"}, // 0.03%
			{9971.26622703331, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9974.38513541538, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9977.50404379745, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9980.62295217951, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9983.74186056158, "TRYK_U_hood_mc"}, // 0.03%
			{9986.86076894365, "TRYK_U_hood_nc"}, // 0.03%
			{9989.97967732571, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9993.09858570778, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9996.21749408985, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9998.10874704493, "TRYK_H_Helmet_Winter_2"}, // 0.02%
			{10000, "TRYK_H_Helmet_Winter"} // 0.02%
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_rifle_saiga12k
	  V_Rangemaster_belt
	  SmokeShellGreen
	  Exile_Item_Heatpack
	  muzzle_snds_L
	  ItemWatch
	  Exile_Item_ToiletPaper
	  Exile_Weapon_TaurusGold
	  TRYK_B_Kitbag_Base_JSDF
	  TRYK_U_B_BLK_OD_Tshirt
	  TRYK_B_Belt_AOR1
	  Exile_Item_Heatpack
	  hlc_rifle_hk53
	  hlc_10rnd_12g_buck_S12
	  TRYK_shirts_PAD_RED2
	  hlc_10rnd_12g_buck_S12
	  B_Kitbag_cbr
	  hlc_30rnd_556x45_t_hk33
	  hlc_10rnd_12g_slug_S12
	  Exile_Item_MountainDupe
	  Exile_Item_MountainDupe
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_SausageGravy
	  TRYK_shirts_DENIM_BL
	  Exile_Item_MacasCheese
	  H_StrawHat
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Raisins
	  Exile_Item_PlasticBottleEmpty
	  ItemRadio
	  hlc_optic_kobra
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_Vishpirin
	  Exile_Weapon_CZ550
	  Exile_Item_ChocolateMilk
	  TRYK_V_tacv1LC_MSL_NV
	  Exile_Item_Can_Empty
	  TRYK_U_B_PCUGs_OD_R
	  10Rnd_9x21_Mag
	  CUP_30Rnd_9x19_MP5
	  CUP_smg_EVO
	  CUP_18Rnd_9x19_Phantom
	  B_AssaultPack_tna_F
	  Binocular
	  Exile_Item_Magazine04
	  Exile_Item_Dogfood
	  Exile_Magazine_5Rnd_22LR
	  CUP_smg_bizon
	  hlc_10rnd_12g_buck_S12
	  TRYK_B_Belt_GR
	  B_AssaultPack_tna_F
	  TRYK_B_Kitbag_Base
	  hlc_rifle_saiga12k
	  Exile_Weapon_LeeEnfield
	  TRYK_shirts_DENIM_ylb_Sleeve
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Magazine_10Rnd_303
	  Exile_Item_LightBulb
	  6Rnd_45ACP_Cylinder
	  TRYK_V_Sheriff_BA_TB4
	  Exile_Magazine_5Rnd_22LR
	  CUP_hgun_Phantom
	  Exile_Item_CanOpener
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Vishpirin
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Weapon_LeeEnfield
	  TRYK_hoodie_Blk
	  Exile_Item_Beer
	  CUP_smg_EVO
	  Exile_Magazine_5Rnd_22LR
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hlc_10rnd_12g_slug_S12
	  Exile_Item_MacasCheese
	  Exile_Item_InstantCoffee
	  Exile_Weapon_TaurusGold
	  Exile_Item_Dogfood
	  TRYK_H_LHS_HEL_G
	  Exile_Item_BeefParts
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_EnergyDrink
	  Exile_Item_Can_Empty
	  TRYK_U_B_Denim_T_WH
	  Exile_Item_Raisins
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MacasCheese
	  Exile_Item_PlasticBottleEmpty
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_MountainDupe
	  Exile_Weapon_M1014
	  Exile_Magazine_8Rnd_9x18
	  Exile_Magazine_6Rnd_45ACP
	  hlc_rifle_saiga12k
	  CUP_30Rnd_9x19_EVO
	  Exile_Item_Heatpack
	  B_OutdoorPack_tan
	  Exile_Weapon_LeeEnfield
	*/
	class Shop
	{
		count = 573;
		half = 9187.42633837085;
		halfIndex = 286;
		sum = 9999.99999999982;
		items[] = 
		{
			{285.171102661597, "Exile_Item_Can_Empty"}, // 2.85%
			{570.342205323194, "Exile_Item_ToiletPaper"}, // 2.85%
			{855.513307984791, "Exile_Item_PlasticBottleEmpty"}, // 2.85%
			{1093.15589353612, "Exile_Item_PlasticBottleDirtyWater"}, // 2.38%
			{1293.27596557935, "Exile_Weapon_LeeEnfield"}, // 2.00%
			{1483.39003402041, "Exile_Item_MountainDupe"}, // 1.90%
			{1673.50410246148, "Exile_Item_ChocolateMilk"}, // 1.90%
			{1860.28283636849, "hlc_rifle_saiga12k"}, // 1.87%
			{2030.7299322122, "Exile_Item_Vishpirin"}, // 1.70%
			{2201.17702805591, "Exile_Item_Heatpack"}, // 1.70%
			{2362.77398623082, "Exile_Item_EnergyDrink"}, // 1.62%
			{2496.18736759297, "Exile_Weapon_M1014"}, // 1.33%
			{2629.60074895512, "CUP_sgun_Saiga12K"}, // 1.33%
			{2762.68059686387, "Exile_Item_Beer"}, // 1.33%
			{2884.7291346285, "hlc_10rnd_12g_buck_S12"}, // 1.22%
			{2998.79757569314, "Exile_Item_ZipTie"}, // 1.14%
			{3112.86601675778, "Exile_Item_PlasticBottleFreshWater"}, // 1.14%
			{3216.13785640478, "hlc_10rnd_12g_slug_S12"}, // 1.03%
			{3310.02134699296, "Exile_Magazine_8Rnd_74Slug"}, // 0.94%
			{3403.90483758114, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.94%
			{3497.78832816932, "Exile_Magazine_10Rnd_303"}, // 0.94%
			{3591.6718187575, "Exile_Magazine_5Rnd_22LR"}, // 0.94%
			{3685.55530934568, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.94%
			{3772.69092404783, "Exile_Item_InstantCoffee"}, // 0.87%
			{3857.91447196969, "Exile_Item_Bandage"}, // 0.85%
			{3929.20724763509, "Exile_Item_Raisins"}, // 0.71%
			{4000.50002330049, "Exile_Item_Moobar"}, // 0.71%
			{4071.79279896588, "Exile_Item_Magazine04"}, // 0.71%
			{4143.08557463128, "Exile_Item_Magazine03"}, // 0.71%
			{4214.37835029668, "Exile_Item_Magazine02"}, // 0.71%
			{4285.67112596208, "Exile_Item_Magazine01"}, // 0.71%
			{4353.84996429957, "Exile_Item_InstaDoc"}, // 0.68%
			{4420.55665498064, "Exile_Weapon_CZ550"}, // 0.67%
			{4487.09657893501, "Exile_Item_PowerDrink"}, // 0.67%
			{4550.46793508204, "Exile_Item_CockONut"}, // 0.63%
			{4613.83929122906, "Exile_Item_SeedAstics"}, // 0.63%
			{4672.98589029961, "ItemWatch"}, // 0.59%
			{4728.43582692825, "Exile_Item_ChristmasTinner"}, // 0.55%
			{4783.8857635569, "Exile_Item_SausageGravy"}, // 0.55%
			{4839.33570018554, "Exile_Item_Surstromming"}, // 0.55%
			{4894.78563681418, "Exile_Item_BBQSandwich"}, // 0.55%
			{4950.23557344283, "Exile_Item_MacasCheese"}, // 0.55%
			{5005.68551007147, "Exile_Item_Cheathas"}, // 0.55%
			{5061.13544670012, "Exile_Item_CatFood"}, // 0.55%
			{5116.58538332876, "Exile_Item_Noodles"}, // 0.55%
			{5172.0353199574, "Exile_Item_Dogfood"}, // 0.55%
			{5227.48525658605, "Exile_Item_BeefParts"}, // 0.55%
			{5282.93519321469, "Exile_Item_DsNuts"}, // 0.55%
			{5336.23820305798, "B_OutdoorPack_blk"}, // 0.53%
			{5386.3519533165, "hgun_P07_F"}, // 0.50%
			{5434.32466217546, "B_OutdoorPack_tan"}, // 0.48%
			{5482.29737103442, "B_OutdoorPack_blu"}, // 0.48%
			{5530.02475223302, "hgun_ACPC2_F"}, // 0.48%
			{5577.75213343161, "hgun_Rook40_F"}, // 0.48%
			{5625.28065054188, "Exile_Item_PlasticBottleCoffee"}, // 0.48%
			{5672.80916765214, "Exile_Item_GloriousKnakworst"}, // 0.48%
			{5720.33768476241, "Chemlight_green"}, // 0.48%
			{5767.86620187267, "Chemlight_red"}, // 0.48%
			{5815.39471898294, "Chemlight_yellow"}, // 0.48%
			{5862.92323609321, "FlareGreen_F"}, // 0.48%
			{5910.45175320347, "FlareRed_F"}, // 0.48%
			{5957.98027031374, "FlareWhite_F"}, // 0.48%
			{6005.508787424, "Chemlight_blue"}, // 0.48%
			{6053.03730453427, "FlareYellow_F"}, // 0.48%
			{6100.35458379071, "Exile_Item_Heatpack"}, // 0.47%
			{6146.72386877634, "9Rnd_45ACP_Mag"}, // 0.46%
			{6193.09315376196, "10Rnd_9x21_Mag"}, // 0.46%
			{6239.46243874759, "Exile_Magazine_6Rnd_45ACP"}, // 0.46%
			{6285.83172373321, "Exile_Magazine_8Rnd_9x18"}, // 0.46%
			{6332.20100871884, "Exile_Magazine_7Rnd_45ACP"}, // 0.46%
			{6378.57029370446, "30Rnd_9x21_Mag"}, // 0.46%
			{6424.93957869009, "11Rnd_45ACP_Mag"}, // 0.46%
			{6467.89422176882, "CUP_hgun_Phantom"}, // 0.43%
			{6510.53662964345, "B_HuntingBackpack"}, // 0.43%
			{6552.26898613052, "CUP_18Rnd_9x19_Phantom"}, // 0.42%
			{6594.00134261758, "CUP_30Rnd_9x19_UZI"}, // 0.42%
			{6635.73369910464, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.42%
			{6677.13631845403, "ItemMap"}, // 0.41%
			{6717.16033286268, "hlc_rifle_L1A1SLR"}, // 0.40%
			{6756.76743045456, "Exile_Item_Matches"}, // 0.40%
			{6796.37452804645, "Exile_Item_CanOpener"}, // 0.40%
			{6834.39734173467, "CUP_smg_MP5SD6"}, // 0.38%
			{6871.95073796994, "hlc_20Rnd_762x51_B_fal"}, // 0.38%
			{6909.26284486024, "B_AssaultPack_khk"}, // 0.37%
			{6946.57495175054, "B_AssaultPack_dgtl"}, // 0.37%
			{6983.88705864085, "B_AssaultPack_rgr"}, // 0.37%
			{7021.19916553115, "B_AssaultPack_sgg"}, // 0.37%
			{7058.51127242145, "B_AssaultPack_blk"}, // 0.37%
			{7095.82337931176, "B_AssaultPack_cbr"}, // 0.37%
			{7133.13548620206, "B_AssaultPack_mcamo"}, // 0.37%
			{7170.44759309236, "B_AssaultPack_tna_F"}, // 0.37%
			{7207.54302108086, "6Rnd_45ACP_Cylinder"}, // 0.37%
			{7243.03098052319, "ItemCompass"}, // 0.35%
			{7278.51893996552, "Binocular"}, // 0.35%
			{7314.00689940786, "ItemRadio"}, // 0.35%
			{7346.59788256918, "hlc_rifle_hk53"}, // 0.33%
			{7377.62068034827, "CUP_hgun_SA61"}, // 0.31%
			{7408.64347812735, "hgun_Pistol_heavy_01_F"}, // 0.31%
			{7439.66627590644, "hgun_P07_khk_F"}, // 0.31%
			{7470.68907368552, "hgun_Pistol_01_F"}, // 0.31%
			{7501.71187146461, "Exile_Weapon_TaurusGold"}, // 0.31%
			{7532.7346692437, "Exile_Weapon_Taurus"}, // 0.31%
			{7563.75746702278, "hgun_Pistol_heavy_02_F"}, // 0.31%
			{7594.78026480187, "hgun_Pistol_Signal_F"}, // 0.31%
			{7625.80306258095, "Exile_Weapon_Colt1911"}, // 0.31%
			{7656.82586036004, "Exile_Weapon_Makarov"}, // 0.31%
			{7685.46228907919, "CUP_hgun_Duty_M3X"}, // 0.29%
			{7713.62733625565, "hlc_optic_kobra"}, // 0.28%
			{7741.44890724702, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.28%
			{7768.60805988146, "CUP_smg_MP5A5"}, // 0.27%
			{7795.7672125159, "CUP_smg_bizon"}, // 0.27%
			{7822.41871743754, "B_Kitbag_mcamo"}, // 0.27%
			{7849.07022235919, "B_Kitbag_sgg"}, // 0.27%
			{7875.72172728083, "B_Kitbag_cbr"}, // 0.27%
			{7899.58541788013, "CUP_hgun_PB6P9_snds"}, // 0.24%
			{7923.34967643526, "Exile_Item_EMRE"}, // 0.24%
			{7947.1139349904, "Exile_Item_CookingPot"}, // 0.24%
			{7970.29857748321, "16Rnd_9x21_Mag"}, // 0.23%
			{7992.02589959076, "SmokeShellGreen"}, // 0.22%
			{8013.75322169831, "SmokeShellYellow"}, // 0.22%
			{8035.48054380586, "SmokeShell"}, // 0.22%
			{8057.20786591341, "SmokeShellPurple"}, // 0.22%
			{8078.93518802096, "SmokeShellBlue"}, // 0.22%
			{8100.66251012851, "SmokeShellOrange"}, // 0.22%
			{8122.38983223606, "SmokeShellRed"}, // 0.22%
			{8141.4807847155, "CUP_hgun_MicroUzi"}, // 0.19%
			{8160.49219155961, "V_Rangemaster_belt"}, // 0.19%
			{8177.21776942832, "TRYK_B_Kitbag_Base"}, // 0.17%
			{8193.94334729704, "TRYK_B_Belt"}, // 0.17%
			{8210.66892516575, "TRYK_B_Kitbag_blk"}, // 0.17%
			{8226.96441674641, "CUP_smg_EVO"}, // 0.16%
			{8243.25990832708, "CUP_smg_bizon_snds"}, // 0.16%
			{8259.48915807205, "6Rnd_GreenSignal_F"}, // 0.16%
			{8275.71840781701, "6Rnd_RedSignal_F"}, // 0.16%
			{8290.21390863657, "TRYK_B_Belt_CYT"}, // 0.14%
			{8304.70940945612, "TRYK_B_Kitbag_aaf"}, // 0.14%
			{8319.20491027568, "TRYK_B_tube_cyt"}, // 0.14%
			{8332.58537257065, "TRYK_B_Alicepack"}, // 0.13%
			{8345.96583486562, "TRYK_B_Kitbag_Base_JSDF"}, // 0.13%
			{8359.34629716059, "TRYK_B_Belt_BLK"}, // 0.13%
			{8372.72675945556, "TRYK_B_Belt_br"}, // 0.13%
			{8386.10722175054, "TRYK_B_BAF_BAG_BLK"}, // 0.13%
			{8399.48768404551, "TRYK_B_Belt_tan"}, // 0.13%
			{8412.86814634048, "TRYK_B_FieldPack_Wood"}, // 0.13%
			{8426.24860863545, "TRYK_B_Belt_GR"}, // 0.13%
			{8438.51403240584, "TRYK_B_Belt_AOR2"}, // 0.12%
			{8450.77945617623, "TRYK_B_BAF_BAG_CYT"}, // 0.12%
			{8463.04487994663, "TRYK_B_BAF_BAG_OD"}, // 0.12%
			{8475.31030371702, "TRYK_B_Belt_AOR1"}, // 0.12%
			{8486.46068896283, "TRYK_B_AssaultPack_UCP"}, // 0.11%
			{8497.61107420864, "TRYK_B_AssaultPack_Type2camo"}, // 0.11%
			{8508.76145945445, "TRYK_B_tube_od"}, // 0.11%
			{8519.91184470026, "TRYK_B_tube_blk"}, // 0.11%
			{8530.77550575403, "hgun_PDW2000_F"}, // 0.11%
			{8541.63916680781, "SMG_05_F"}, // 0.11%
			{8551.67451352904, "TRYK_B_BAF_BAG_mcamo"}, // 0.10%
			{8561.43036704115, "Exile_Item_Handsaw"}, // 0.10%
			{8571.18622055326, "Exile_Item_ScrewDriver"}, // 0.10%
			{8580.94207406536, "Exile_Item_Pliers"}, // 0.10%
			{8590.44777748742, "V_Press_F"}, // 0.10%
			{8599.95348090947, "V_TacVest_blk_POLICE"}, // 0.10%
			{8608.87378910612, "TRYK_B_BAF_BAG_rgr"}, // 0.09%
			{8617.79409730277, "TRYK_B_Medbag_ucp"}, // 0.09%
			{8626.71440549942, "TRYK_B_Medbag_BK"}, // 0.09%
			{8635.63471369606, "TRYK_B_Medbag_OD"}, // 0.09%
			{8644.55502189271, "TRYK_B_Medbag"}, // 0.09%
			{8652.80997486449, "Exile_Item_JunkMetal"}, // 0.08%
			{8660.49998212728, "muzzle_snds_L"}, // 0.08%
			{8668.18998939006, "muzzle_snds_acp"}, // 0.08%
			{8675.69449209168, "Exile_Item_WaterCanisterEmpty"}, // 0.08%
			{8683.19899479331, "Exile_Item_MetalScrews"}, // 0.08%
			{8690.70349749493, "Exile_Melee_Axe"}, // 0.08%
			{8697.5476039588, "H_Cap_press"}, // 0.07%
			{8704.39171042268, "H_Cap_red"}, // 0.07%
			{8711.23581688656, "H_Cap_tan"}, // 0.07%
			{8718.07992335044, "H_Hat_blue"}, // 0.07%
			{8724.92402981432, "H_Hat_brown"}, // 0.07%
			{8731.7681362782, "H_Hat_checker"}, // 0.07%
			{8738.61224274208, "H_Hat_grey"}, // 0.07%
			{8745.45634920596, "H_Hat_tan"}, // 0.07%
			{8752.30045566984, "H_StrawHat"}, // 0.07%
			{8759.14456213372, "H_StrawHat_dark"}, // 0.07%
			{8765.89861456518, "Exile_Item_LightBulb"}, // 0.07%
			{8772.06191354207, "TRYK_Hrp_vest_od"}, // 0.06%
			{8778.06551570337, "Exile_Item_ExtensionCord"}, // 0.06%
			{8783.98017561042, "ItemGPS"}, // 0.06%
			{8789.89483551748, "Exile_Item_MobilePhone"}, // 0.06%
			{8795.59825757071, "H_Cap_grn"}, // 0.06%
			{8801.30167962394, "H_Cap_blu"}, // 0.06%
			{8807.00510167717, "H_Cap_blk_Raven"}, // 0.06%
			{8812.7085237304, "H_Beret_blk_POLICE"}, // 0.06%
			{8818.41194578363, "H_Cap_blk"}, // 0.06%
			{8824.11536783686, "H_Cap_headphones"}, // 0.06%
			{8829.8187898901, "H_Bandanna_surfer"}, // 0.06%
			{8835.52221194333, "H_Cap_oli"}, // 0.06%
			{8841.21141099892, "TRYK_LOC_AK_chestrig_OD"}, // 0.06%
			{8846.90061005451, "TRYK_Hrp_vest_ucp"}, // 0.06%
			{8852.5336194898, "optic_Aco_smg"}, // 0.06%
			{8858.16662892509, "optic_Holosight_smg_blk_F"}, // 0.06%
			{8863.79963836038, "optic_Holosight_smg"}, // 0.06%
			{8869.43264779567, "optic_Aco"}, // 0.06%
			{8875.06565723097, "optic_ACO_grn"}, // 0.06%
			{8880.69866666626, "optic_ACO_grn_smg"}, // 0.06%
			{8886.27385928916, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.06%
			{8891.84905191207, "TRYK_B_Coyotebackpack"}, // 0.06%
			{8897.42424453497, "TRYK_B_Coyotebackpack_OD"}, // 0.06%
			{8902.99943715788, "TRYK_B_Coyotebackpack_BLK"}, // 0.06%
			{8908.57462978079, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.06%
			{8914.00646030767, "SMG_02_F"}, // 0.05%
			{8919.43829083456, "SMG_01_F"}, // 0.05%
			{8924.17929004756, "TRYK_V_Sheriff_BA_TB"}, // 0.05%
			{8928.68199166853, "Exile_Item_CamoTentKit"}, // 0.05%
			{8933.1846932895, "Exile_Item_Foolbox"}, // 0.05%
			{8937.4569195466, "CUP_muzzle_snds_MicroUzi"}, // 0.04%
			{8941.72914580371, "CUP_acc_Glock17_Flashlight"}, // 0.04%
			{8946.00137206081, "CUP_acc_CZ_M3X"}, // 0.04%
			{8950.22612913728, "CUP_optic_ACOG"}, // 0.04%
			{8954.07113276867, "CUP_muzzle_snds_M9"}, // 0.04%
			{8957.86393213907, "TRYK_LOC_AK_chestrig_TAN"}, // 0.04%
			{8961.61618348988, "Exile_Melee_SledgeHammer"}, // 0.04%
			{8965.36843484069, "Exile_Item_Grinder"}, // 0.04%
			{8968.73925165702, "TRYK_bandana_g"}, // 0.03%
			{8972.11006847335, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{8975.48088528968, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{8978.85170210601, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{8982.22251892234, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{8985.59333573867, "TRYK_TAC_SET_MESH"}, // 0.03%
			{8988.964152555, "TRYK_TAC_SET_OD"}, // 0.03%
			{8992.33496937133, "TRYK_TAC_SET_TAN"}, // 0.03%
			{8995.70578618766, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{8999.07660300399, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9002.44741982032, "TRYK_TAC_SET_bn"}, // 0.03%
			{9005.81823663665, "TRYK_headset2"}, // 0.03%
			{9009.18905345298, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9012.55987026931, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9015.93068708564, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{9019.30150390197, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9022.6723207183, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9026.04313753463, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9029.41395435096, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9032.78477116729, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9036.15558798362, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9039.52640479995, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9042.89722161628, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9046.26803843261, "TRYK_H_PASGT_OD"}, // 0.03%
			{9049.63885524894, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9053.00967206527, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9056.3804888816, "TRYK_H_pakol2"}, // 0.03%
			{9059.75130569793, "TRYK_H_pakol"}, // 0.03%
			{9063.12212251426, "TRYK_H_headsetcap_od"}, // 0.03%
			{9066.49293933059, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9069.86375614692, "TRYK_H_headsetcap"}, // 0.03%
			{9073.23457296325, "TRYK_H_woolhat_tan"}, // 0.03%
			{9076.60538977958, "TRYK_H_woolhat_cu"}, // 0.03%
			{9079.97620659591, "TRYK_H_woolhat_br"}, // 0.03%
			{9083.34702341225, "TRYK_H_woolhat_WH"}, // 0.03%
			{9086.71784022858, "TRYK_H_woolhat_CW"}, // 0.03%
			{9090.08865704491, "TRYK_H_woolhat"}, // 0.03%
			{9093.45947386124, "TRYK_H_headset2"}, // 0.03%
			{9096.83029067757, "TRYK_H_wig"}, // 0.03%
			{9100.2011074939, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9103.57192431023, "TRYK_H_Bandana_wig"}, // 0.03%
			{9106.94274112656, "TRYK_H_Bandana_H"}, // 0.03%
			{9110.31355794289, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9113.68437475922, "TRYK_H_EARMUFF"}, // 0.03%
			{9117.05519157555, "TRYK_H_AOR2"}, // 0.03%
			{9120.42600839188, "TRYK_H_AOR1"}, // 0.03%
			{9123.79682520821, "TRYK_H_GR"}, // 0.03%
			{9127.16764202454, "TRYK_H_WH"}, // 0.03%
			{9130.53845884087, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9133.9092756572, "TRYK_R_CAP_TAN"}, // 0.03%
			{9137.28009247353, "TRYK_R_CAP_BLK"}, // 0.03%
			{9140.65090928986, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9144.02172610619, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9147.39254292252, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9150.73765849626, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9154.07299303032, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9157.40832756437, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9160.74366209842, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9164.07899663248, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9167.41433116653, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9170.74966570058, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9174.08500023463, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9177.42033476869, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9180.75566930274, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9184.09100383679, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9187.42633837085, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9190.7616729049, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9194.09700743895, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9197.432341973, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9200.76767650706, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9204.10301104111, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9207.43834557516, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9210.77368010922, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9214.10901464327, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9217.44434917732, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9220.77968371137, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9224.11501824543, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9227.45035277948, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9230.78568731353, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9234.12102184759, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9237.45635638164, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9240.79169091569, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9244.12702544974, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9247.4623599838, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9250.79769451785, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9254.1330290519, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9257.46836358596, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9260.80369812001, "TRYK_hoodie_Blk"}, // 0.03%
			{9264.13903265406, "TRYK_hoodie_Wood"}, // 0.03%
			{9267.47436718812, "TRYK_hoodie_3c"}, // 0.03%
			{9270.80970172217, "TRYK_T_PAD"}, // 0.03%
			{9274.14503625622, "TRYK_T_OD_PAD"}, // 0.03%
			{9277.48037079027, "TRYK_T_TAN_PAD"}, // 0.03%
			{9280.81570532433, "TRYK_T_BLK_PAD"}, // 0.03%
			{9284.15103985838, "TRYK_T_T2_PAD"}, // 0.03%
			{9287.48637439243, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9290.82170892649, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9294.15704346054, "TRYK_U_hood_nc"}, // 0.03%
			{9297.49237799459, "TRYK_U_hood_mc"}, // 0.03%
			{9300.82771252864, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9304.1630470627, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9307.49838159675, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9310.8337161308, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9314.16905066486, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9317.50438519891, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9320.83971973296, "TRYK_shirts_PAD"}, // 0.03%
			{9324.17505426701, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9327.51038880107, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9330.84572333512, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9334.18105786917, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9337.51639240323, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9340.85172693728, "TRYK_ZARATAKI3"}, // 0.03%
			{9344.18706147133, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9347.52239600538, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9350.85773053944, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9354.19306507349, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9357.52839960754, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9360.8637341416, "TRYK_DMARPAT_T"}, // 0.03%
			{9364.19906867565, "TRYK_C_AOR2_T"}, // 0.03%
			{9367.5344032097, "TRYK_U_B_Sage_T"}, // 0.03%
			{9370.86973774375, "TRYK_U_B_Wood_T"}, // 0.03%
			{9374.20507227781, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9377.54040681186, "TRYK_ZARATAKI2"}, // 0.03%
			{9380.87574134591, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9384.21107587997, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9387.54641041402, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9390.88174494807, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9394.21707948213, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9397.55241401618, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9400.88774855023, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9404.22308308428, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9407.55841761834, "TRYK_SUITS_BR_F"}, // 0.03%
			{9410.89375215239, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9414.22908668644, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9417.5644212205, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9420.89975575455, "TRYK_OVERALL_flesh"}, // 0.03%
			{9424.2350902886, "TRYK_ZARATAKI"}, // 0.03%
			{9427.57042482265, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9430.90575935671, "TRYK_B_USMC_R"}, // 0.03%
			{9434.24109389076, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9437.57642842481, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9440.91176295887, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9444.24709749292, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9447.58243202697, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9450.91776656102, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9454.25310109508, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9457.58843562913, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9460.92377016318, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9464.25910469724, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9467.59443923129, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9470.92977376534, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9474.26510829939, "TRYK_U_taki_wh"}, // 0.03%
			{9477.60044283345, "TRYK_U_taki_COY"}, // 0.03%
			{9480.9357773675, "TRYK_U_taki_BL"}, // 0.03%
			{9484.27111190155, "TRYK_U_taki_BLK"}, // 0.03%
			{9487.60644643561, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9490.94178096966, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9494.27711550371, "TRYK_U_taki_G_WH"}, // 0.03%
			{9497.61245003776, "TRYK_U_taki_G_COY"}, // 0.03%
			{9500.94778457182, "TRYK_U_taki_G_BL"}, // 0.03%
			{9504.28311910587, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9507.61845363992, "TRYK_U_B_PCUHs"}, // 0.03%
			{9510.95378817398, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9514.28912270803, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9517.62445724208, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9520.95979177613, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9524.29512631019, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9527.63046084424, "TRYK_U_pad_j_blk"}, // 0.03%
			{9530.96579537829, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9534.30112991235, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9537.6364644464, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9540.97179898045, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9544.30713351451, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9547.64246804856, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9550.97780258261, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9554.31313711666, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9557.64847165072, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9560.98380618477, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9564.31914071882, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9567.65447525288, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9570.98980978693, "TRYK_U_B_ODTAN"}, // 0.03%
			{9574.32514432098, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9577.66047885503, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9580.99581338909, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9584.33114792314, "TRYK_U_B_BLK"}, // 0.03%
			{9587.66648245719, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9591.00181699125, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9594.3371515253, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9597.67248605935, "TRYK_U_B_3cr"}, // 0.03%
			{9601.0078205934, "TRYK_U_B_3c"}, // 0.03%
			{9604.34315512746, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9607.67848966151, "TRYK_U_B_ACU"}, // 0.03%
			{9611.01382419556, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9614.34915872962, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9617.68449326367, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9621.01982779772, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9624.35516233177, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9627.69049686583, "TRYK_hoodie_FR"}, // 0.03%
			{9631.02583139988, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9634.36116593393, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9637.69650046799, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9641.03183500204, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9644.36716953609, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9647.70250407014, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9651.0378386042, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9654.37317313825, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9657.7085076723, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9661.04384220636, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9664.37917674041, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9667.71451127446, "TRYK_U_B_PCUODs"}, // 0.03%
			{9671.04984580851, "TRYK_U_B_PCUGs"}, // 0.03%
			{9674.38518034257, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9677.72051487662, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9681.05584941067, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9684.39118394473, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9687.72651847878, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9691.06185301283, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9694.39718754689, "TRYK_U_B_fleece"}, // 0.03%
			{9697.73252208094, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9701.06785661499, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9704.40319114904, "TRYK_U_pad_j"}, // 0.03%
			{9707.7385256831, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9711.07386021715, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9714.4091947512, "TRYK_U_B_PCUs"}, // 0.03%
			{9717.74452928526, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9721.07986381931, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9724.3985632684, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9727.7172627175, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9731.03596216659, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9734.20452997395, "hlc_30rnd_556x45_epr_hk33"}, // 0.03%
			{9737.3730977813, "hlc_30rnd_556x45_t_hk33"}, // 0.03%
			{9740.54166558865, "hlc_30rnd_556x45_b_hk33"}, // 0.03%
			{9743.710233396, "CUP_30Rnd_9x19_EVO"}, // 0.03%
			{9746.87880120335, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.03%
			{9750.0473690107, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.03%
			{9753.21593681806, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.03%
			{9756.38450462541, "30Rnd_9x21_Mag_SMG_02"}, // 0.03%
			{9759.55307243276, "30Rnd_45ACP_Mag_SMG_01"}, // 0.03%
			{9762.72164024011, "CUP_30Rnd_9x19_MP5"}, // 0.03%
			{9765.89020804746, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.03%
			{9769.05877585482, "CUP_64Rnd_9x19_Bizon_M"}, // 0.03%
			{9772.06057693546, "Exile_Item_MetalBoard"}, // 0.03%
			{9775.06237801611, "Exile_Item_Rope"}, // 0.03%
			{9778.06417909676, "Exile_Item_Sand"}, // 0.03%
			{9781.05473747673, "optic_MRD"}, // 0.03%
			{9784.04529585671, "optic_Yorris"}, // 0.03%
			{9786.74194930977, "TRYK_TAC_SET_WH"}, // 0.03%
			{9789.43860276283, "TRYK_H_LHS_HEL_G"}, // 0.03%
			{9791.80910236933, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9794.17960197583, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9796.55010158232, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9798.92060118882, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9801.29110079532, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9803.66160040182, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9806.03210000831, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9808.40259961481, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9810.77309922131, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9813.1435988278, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9815.5140984343, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9817.8845980408, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9820.2550976473, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9822.62559725379, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9824.99609686029, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9827.36659646679, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9829.73709607328, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9832.10759567978, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9834.47809528628, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9836.84859489278, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9839.21909449927, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9841.58959410577, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9843.96009371227, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9846.33059331876, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9848.70109292526, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9851.07159253176, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9853.44209213826, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9855.81259174475, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9858.18309135125, "TRYK_V_tacv10_TN"}, // 0.02%
			{9860.55359095775, "TRYK_V_tacv10_OD"}, // 0.02%
			{9862.92409056424, "TRYK_V_tacv10_BK"}, // 0.02%
			{9865.29459017074, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9867.66508977724, "TRYK_V_ChestRig"}, // 0.02%
			{9870.03558938374, "TRYK_V_ChestRig_L"}, // 0.02%
			{9872.40608899023, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9874.77658859673, "TRYK_V_harnes_od_L"}, // 0.02%
			{9877.14708820323, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9879.51758780972, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9881.88808741622, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9884.25858702272, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9886.62908662921, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9888.99958623571, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9891.37008584221, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9893.74058544871, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9896.1110850552, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9898.4815846617, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9900.8520842682, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9903.22258387469, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9905.59308348119, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9907.96358308769, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9910.33408269419, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9912.70458230068, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9915.07508190718, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9917.44558151368, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9919.81608112017, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9922.18658072667, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9924.55708033317, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9926.92757993967, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9929.29807954616, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9931.66857915266, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9934.03907875916, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9936.40957836565, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9938.78007797215, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9941.15057757865, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9943.52107718515, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9945.77242799563, "Exile_Item_Cement"}, // 0.02%
			{9948.02377880612, "Exile_Item_FloodLightKit"}, // 0.02%
			{9950.2751296166, "Exile_Item_PortableGeneratorKit"}, // 0.02%
			{9952.52648042709, "Exile_Item_CordlessScrewdriver"}, // 0.02%
			{9954.77783123757, "Exile_Item_FireExtinguisher"}, // 0.02%
			{9956.77903195801, "U_Rangemaster"}, // 0.02%
			{9958.78023267844, "U_C_HunterBody_grn"}, // 0.02%
			{9960.78143339887, "U_C_Scientist"}, // 0.02%
			{9962.7826341193, "U_C_Journalist"}, // 0.02%
			{9964.78383483973, "U_C_Poor_1"}, // 0.02%
			{9966.78503556016, "U_C_Poor_2"}, // 0.02%
			{9968.78623628059, "U_C_Poor_shorts_1"}, // 0.02%
			{9970.34272572982, "U_C_Poloshirt_burgundy"}, // 0.02%
			{9971.89921517904, "U_C_Poloshirt_salmon"}, // 0.02%
			{9973.45570462827, "U_C_Poloshirt_tricolour"}, // 0.02%
			{9975.0121940775, "U_C_Poloshirt_stripped"}, // 0.02%
			{9976.56868352672, "U_C_Poloshirt_blue"}, // 0.02%
			{9978.06958406705, "Exile_Melee_Shovel"}, // 0.02%
			{9979.57048460737, "Exile_Item_Knife"}, // 0.02%
			{9981.07138514769, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9982.41971187423, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9983.76803860076, "TRYK_H_Helmet_Winter_2"}, // 0.01%
			{9984.87981677878, "U_C_Man_casual_2_F"}, // 0.01%
			{9985.99159495679, "U_C_Man_casual_1_F"}, // 0.01%
			{9987.10337313481, "U_C_man_sport_3_F"}, // 0.01%
			{9988.21515131283, "U_C_man_sport_2_F"}, // 0.01%
			{9989.32692949085, "U_C_man_sport_1_F"}, // 0.01%
			{9990.43870766887, "U_I_C_Soldier_Bandit_5_F"}, // 0.01%
			{9991.55048584688, "U_I_C_Soldier_Bandit_4_F"}, // 0.01%
			{9992.6622640249, "U_I_C_Soldier_Bandit_1_F"}, // 0.01%
			{9993.77404220292, "U_I_C_Soldier_Bandit_2_F"}, // 0.01%
			{9994.88582038094, "U_C_Man_casual_4_F"}, // 0.01%
			{9995.99759855895, "U_C_Man_casual_5_F"}, // 0.01%
			{9997.10937673697, "U_C_Man_casual_6_F"}, // 0.01%
			{9998.22115491499, "U_I_C_Soldier_Bandit_3_F"}, // 0.01%
			{9999.33293309301, "U_C_Man_casual_3_F"}, // 0.01%
			{9999.55528872861, "U_NikosAgedBody"}, // 0.00%
			{9999.77764436421, "U_NikosBody"}, // 0.00%
			{9999.99999999982, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  FlareYellow_F
	  Exile_Item_Can_Empty
	  Exile_Item_LightBulb
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Carwheel
	  FlareYellow_F
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Item_DuctTape
	  Exile_Item_CamoTentKit
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  FlareRed_F
	  Exile_Melee_Shovel
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Melee_SledgeHammer
	  Exile_Item_Handsaw
	  Exile_Item_Pliers
	  FlareWhite_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  FlareGreen_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_WaterCanisterEmpty
	  FlareYellow_F
	  Exile_Item_ToiletPaper
	  Exile_Item_FloodLightKit
	  FlareRed_F
	  Exile_Item_ScrewDriver
	  Exile_Item_Cement
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine01
	  Exile_Item_MetalBoard
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_ScrewDriver
	  Exile_Item_Foolbox
	  Exile_Item_OilCanister
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_Laptop
	  Exile_Item_Handsaw
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_LightBulb
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_LightBulb
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Pliers
	  Exile_Item_FireExtinguisher
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleDirtyWater
	  FlareYellow_F
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  FlareWhite_F
	  Exile_Item_Knife
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_Magazine03
	  Exile_Item_Carwheel
	  Exile_Item_Sand
	  Exile_Item_Can_Empty
	  Exile_Item_Wrench
	  Exile_Melee_Shovel
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Item_Grinder
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  Exile_Item_MetalScrews
	  Exile_Item_ScrewDriver
	  Exile_Item_ScrewDriver
	  FlareYellow_F
	  Exile_Item_DuctTape
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

	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_Pliers
	  Exile_Item_MetalScrews
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterFull
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FireExtinguisher
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Item_Pliers
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_ExtensionCord
	  Exile_Item_Magazine02
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Item_FloodLightKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_Cement
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Melee_SledgeHammer
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Item_Rope
	  Exile_Item_JunkMetal
	  Exile_Item_Pliers
	  Exile_Item_ToiletPaper
	  Exile_Item_OilCanister
	  Exile_Item_OilCanister
	  Exile_Item_Wrench
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Shovel
	  Exile_Item_ScrewDriver
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_MetalBoard
	  Exile_Item_OilCanister
	  Exile_Item_MetalBoard
	  Exile_Item_Can_Empty
	  Exile_Melee_SledgeHammer
	  Exile_Item_ToiletPaper
	  Exile_Item_Knife
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterFull
	  Exile_Item_DuctTape
	  Exile_Item_Handsaw
	  Exile_Item_FireExtinguisher
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_Wrench
	  Exile_Item_Magazine04
	  Exile_Item_Grinder
	  Exile_Item_DuctTape
	  Exile_Item_Rope
	  Exile_Item_CordlessScrewdriver
	  Exile_Melee_SledgeHammer
	  Exile_Item_ToiletPaper
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_Pliers
	  Exile_Item_ToiletPaper
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

	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  FlareYellow_F
	  Exile_Item_Handsaw
	  Exile_Item_Carwheel
	  FlareGreen_F
	  FlareRed_F
	  Exile_Item_DuctTape
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  FlareGreen_F
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_MetalBoard
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Pliers
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  FlareWhite_F
	  FlareGreen_F
	  Exile_Item_Carwheel
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Grinder
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Pliers
	  Exile_Item_ExtensionCord
	  FlareWhite_F
	  Exile_Item_Carwheel
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  Exile_Item_Magazine01
	  Exile_Item_ScrewDriver
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_OilCanister
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Wrench
	  Exile_Item_ExtensionCord
	  Exile_Item_ZipTie
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_FloodLightKit
	  Exile_Item_Carwheel
	  Exile_Item_Magazine04
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Sand
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  FlareGreen_F
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  Exile_Item_Magazine01
	  Exile_Item_Handsaw
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  Exile_Item_MetalBoard
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_ZipTie
	  Exile_Item_Carwheel
	  Exile_Item_Can_Empty
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

	  Rangefinder
	  Exile_Item_Can_Empty
	  Exile_Magazine_7Rnd_45ACP
	  SmokeShellPurple
	  hgun_Pistol_heavy_02_F
	  optic_KHS_old
	  ItemRadio
	  U_IG_Guerilla2_1
	  Exile_Item_Can_Empty
	  optic_KHS_tan
	  Exile_Item_ToiletPaper
	  20Rnd_762x51_Mag
	  Exile_Item_PlasticBottleEmpty
	  V_Chestrig_blk
	  SmokeShellYellow
	  optic_SOS_khk_F
	  ItemCompass
	  arifle_SPAR_03_snd_F
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  CUP_optic_TrijiconRx01_desert
	  optic_AMS_khk
	  TRYK_H_Helmet_Winter
	  muzzle_snds_acp
	  TRYK_U_B_PCUHsW5
	  U_O_GhillieSuit
	  TRYK_V_tacv1MLC_BK
	  CUP_acc_Glock17_Flashlight
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  TRYK_U_B_PCUHsW6
	  bipod_03_F_blk
	  optic_KHS_old
	  Exile_Item_ToiletPaper
	  TRYK_U_B_BLKBLK_CombatUniform
	  ItemCompass
	  optic_Yorris
	  TRYK_U_B_TANOCP_R_CombatUniformTshirt
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  V_PlateCarrierIA2_dgtl
	  H_HelmetSpecB_paint2
	  Exile_Item_PlasticBottleEmpty
	  20Rnd_762x51_Mag
	  TRYK_V_PlateCarrier_ACU
	  hlc_50Rnd_762x51_B_M14
	  TRYK_B_Coyotebackpack_OD
	  Rangefinder
	  Exile_Item_PlasticBottleEmpty
	  TRYK_U_B_PCUHsW2
	  ItemWatch
	  U_B_CombatUniform_mcam_tshirt
	  TRYK_V_tacv1LC_FBI_BK
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleEmpty
	  CUP_arifle_L85A2_GL
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  SatchelCharge_Remote_Mag
	  Exile_Item_ToiletPaper
	  muzzle_snds_L
	  Exile_Magazine_8Rnd_9x18
	  V_I_G_resistanceLeader_F
	  TRYK_U_B_PCUHsW3nh
	  srifle_DMR_07_hex_F
	  Exile_Item_ToiletPaper
	  H_HelmetSpecB
	  Exile_Item_PlasticBottleEmpty
	  H_Beret_Colonel
	  TRYK_Winter_pack
	  CUP_lmg_Mk48_des
	  Exile_Item_Can_Empty
	  1Rnd_HE_Grenade_shell
	  5Rnd_127x108_Mag
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  UGL_FlareWhite_F
	  SmokeShellYellow
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  CUP_optic_LeupoldM3LR
	  U_O_T_Officer_F
	  Exile_Weapon_Makarov
	  H_Cap_tan_specops_US
	  Exile_Item_Can_Empty
	  hlc_rifle_SLRchopmod
	  arifle_AK12_GL_F
	  hlc_rifle_STG58F
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_65_TI_blk_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  hgun_Rook40_F
	  optic_SOS_khk_F
	  CUP_muzzle_snds_M9
	  optic_KHS_blk
	  Exile_Item_PlasticBottleEmpty
	*/
	class Military
	{
		count = 906;
		half = 8982.23029570219;
		halfIndex = 453;
		sum = 10000.0000000001;
		items[] = 
		{
			{896.057347670251, "Exile_Item_Can_Empty"}, // 8.96%
			{1792.1146953405, "Exile_Item_ToiletPaper"}, // 8.96%
			{2688.17204301075, "Exile_Item_PlasticBottleEmpty"}, // 8.96%
			{2912.18637992832, "Exile_Item_Magazine02"}, // 2.24%
			{3136.20071684588, "Exile_Item_Magazine03"}, // 2.24%
			{3360.21505376344, "Exile_Item_Magazine01"}, // 2.24%
			{3584.229390681, "Exile_Item_Magazine04"}, // 2.24%
			{3691.75627240143, "20Rnd_762x51_Mag"}, // 1.08%
			{3785.25790868007, "ItemCompass"}, // 0.94%
			{3857.74794130058, "muzzle_snds_acp"}, // 0.72%
			{3930.2379739211, "muzzle_snds_L"}, // 0.72%
			{4001.92256173472, "Exile_Item_ZipTie"}, // 0.72%
			{4073.60714954834, "10Rnd_127x54_Mag"}, // 0.72%
			{4129.02485012733, "1Rnd_HE_Grenade_shell"}, // 0.55%
			{4182.78829098754, "HandGrenade"}, // 0.54%
			{4236.55173184776, "MiniGrenade"}, // 0.54%
			{4288.68597753039, "TRYK_Winter_pack"}, // 0.52%
			{4340.82022321302, "TRYK_B_Coyotebackpack_WH"}, // 0.52%
			{4387.57104135234, "Rangefinder"}, // 0.47%
			{4428.53366296012, "optic_KHS_old"}, // 0.41%
			{4469.49628456791, "optic_KHS_hex"}, // 0.41%
			{4510.45890617569, "optic_KHS_blk"}, // 0.41%
			{4551.42152778347, "optic_AMS_snd"}, // 0.41%
			{4592.38414939126, "optic_AMS_khk"}, // 0.41%
			{4633.34677099904, "optic_AMS"}, // 0.41%
			{4674.30939260682, "optic_KHS_tan"}, // 0.41%
			{4714.58163295155, "CUP_acc_CZ_M3X"}, // 0.40%
			{4754.85387329628, "CUP_acc_Glock17_Flashlight"}, // 0.40%
			{4795.12611364101, "CUP_muzzle_snds_MicroUzi"}, // 0.40%
			{4834.62578447709, "optic_DMS"}, // 0.39%
			{4872.66250454146, "optic_LRPS_ghex_F"}, // 0.38%
			{4910.69922460583, "optic_LRPS_tna_F"}, // 0.38%
			{4948.7359446702, "optic_LRPS"}, // 0.38%
			{4986.77266473457, "optic_SOS_khk_F"}, // 0.38%
			{5024.80938479894, "optic_SOS"}, // 0.38%
			{5061.0544011092, "CUP_muzzle_snds_M9"}, // 0.36%
			{5092.91421791525, "ItemWatch"}, // 0.32%
			{5121.10478615656, "optic_Yorris"}, // 0.28%
			{5149.29535439787, "optic_MRD"}, // 0.28%
			{5177.0914190603, "muzzle_snds_B"}, // 0.28%
			{5204.66241437323, "TRYK_U_B_PCUHsW4"}, // 0.28%
			{5232.23340968616, "TRYK_U_B_PCUHsW3nh"}, // 0.28%
			{5259.80440499909, "TRYK_H_Helmet_Winter"}, // 0.28%
			{5287.37540031202, "TRYK_H_Helmet_Winter_2"}, // 0.28%
			{5314.94639562495, "TRYK_U_B_Snow_CombatUniform"}, // 0.28%
			{5342.51739093788, "TRYK_U_B_PCUHsW"}, // 0.28%
			{5370.08838625081, "TRYK_U_B_PCUHsW2"}, // 0.28%
			{5397.65938156374, "TRYK_U_B_Snowt"}, // 0.28%
			{5425.23037687668, "TRYK_B_Coyotebackpack_WH"}, // 0.28%
			{5452.80137218961, "TRYK_Winter_pack"}, // 0.28%
			{5480.37236750254, "TRYK_U_B_PCUHsW6"}, // 0.28%
			{5507.94336281547, "TRYK_U_B_PCUHsW5"}, // 0.28%
			{5535.5143581284, "TRYK_V_ArmorVest_Winter"}, // 0.28%
			{5562.8096434882, "3Rnd_HE_Grenade_shell"}, // 0.27%
			{5588.87676632952, "TRYK_B_Carryall_blk"}, // 0.26%
			{5614.94388917083, "TRYK_B_Carryall_wh"}, // 0.26%
			{5641.01101201215, "TRYK_B_Carryall_wood"}, // 0.26%
			{5667.07813485347, "TRYK_B_Carryall_JSDF"}, // 0.26%
			{5693.14525769478, "TRYK_B_Coyotebackpack"}, // 0.26%
			{5719.2123805361, "TRYK_B_Coyotebackpack_OD"}, // 0.26%
			{5745.27950337742, "TRYK_B_Coyotebackpack_BLK"}, // 0.26%
			{5770.76735682226, "Exile_Item_Heatpack"}, // 0.25%
			{5795.5812526039, "CUP_6Rnd_HE_M203"}, // 0.25%
			{5820.3000759879, "Exile_Item_Vishpirin"}, // 0.25%
			{5845.01889937191, "Exile_Item_Heatpack"}, // 0.25%
			{5867.42033306367, "CUP_optic_ACOG"}, // 0.22%
			{5889.7222048279, "ItemMap"}, // 0.22%
			{5911.77900107825, "U_IG_Guerilla1_1"}, // 0.22%
			{5933.83579732859, "U_IG_Guerilla2_1"}, // 0.22%
			{5955.89259357894, "U_IG_Guerilla2_2"}, // 0.22%
			{5977.94938982928, "U_IG_Guerilla2_3"}, // 0.22%
			{5999.45476617337, "DemoCharge_Remote_Mag"}, // 0.22%
			{6020.13301265807, "U_IG_Guerilla3_2"}, // 0.21%
			{6040.81125914277, "U_IG_Guerilla3_1"}, // 0.21%
			{6059.9271492264, "Binocular"}, // 0.19%
			{6079.04303931003, "ItemRadio"}, // 0.19%
			{6098.15892939366, "ItemCompass"}, // 0.19%
			{6116.43849928613, "UGL_FlareYellow_F"}, // 0.18%
			{6134.71806917861, "UGL_FlareGreen_F"}, // 0.18%
			{6152.99763907108, "UGL_FlareRed_F"}, // 0.18%
			{6171.27720896355, "UGL_FlareWhite_F"}, // 0.18%
			{6187.79489260133, "150Rnd_93x64_Mag"}, // 0.17%
			{6203.93579316863, "bipod_03_F_oli"}, // 0.16%
			{6220.07669373594, "bipod_01_F_khk"}, // 0.16%
			{6236.21759430324, "bipod_02_F_blk"}, // 0.16%
			{6252.35849487055, "bipod_01_F_snd"}, // 0.16%
			{6268.49939543785, "bipod_01_F_blk"}, // 0.16%
			{6284.64029600516, "bipod_02_F_tan"}, // 0.16%
			{6300.78119657246, "bipod_03_F_blk"}, // 0.16%
			{6316.52781105035, "hgun_P07_F"}, // 0.16%
			{6331.88879415327, "SmokeShell"}, // 0.15%
			{6347.24977725619, "SmokeShellRed"}, // 0.15%
			{6362.61076035911, "SmokeShellGreen"}, // 0.15%
			{6377.97174346203, "SmokeShellYellow"}, // 0.15%
			{6393.33272656495, "SmokeShellPurple"}, // 0.15%
			{6408.69370966786, "SmokeShellBlue"}, // 0.15%
			{6424.05469277078, "SmokeShellOrange"}, // 0.15%
			{6439.24612859884, "bipod_02_F_hex"}, // 0.15%
			{6454.43756442689, "bipod_01_F_mtp"}, // 0.15%
			{6469.43434012011, "hgun_ACPC2_F"}, // 0.15%
			{6484.43111581334, "hgun_Rook40_F"}, // 0.15%
			{6499.39137761792, "O_NVGoggles_ghex_F"}, // 0.15%
			{6514.3516394225, "O_NVGoggles_hex_F"}, // 0.15%
			{6529.31190122708, "NVGoggles"}, // 0.15%
			{6544.27216303167, "NVGoggles_tna_F"}, // 0.15%
			{6559.23242483625, "O_NVGoggles_urb_F"}, // 0.15%
			{6574.16671396409, "CUP_optic_SB_11_4x20_PM"}, // 0.15%
			{6589.10100309192, "optic_LRPS"}, // 0.15%
			{6604.03529221976, "CUP_muzzle_snds_M14"}, // 0.15%
			{6618.9695813476, "optic_SOS"}, // 0.15%
			{6633.90387047544, "optic_DMS"}, // 0.15%
			{6648.83815960327, "CUP_optic_LeupoldM3LR"}, // 0.15%
			{6663.77244873111, "optic_KHS_blk"}, // 0.15%
			{6678.70673785895, "optic_KHS_hex"}, // 0.15%
			{6693.64102698679, "optic_AMS"}, // 0.15%
			{6708.57531611462, "muzzle_snds_B"}, // 0.15%
			{6723.20482383169, "muzzle_snds_B_khk_F"}, // 0.15%
			{6737.83433154875, "muzzle_snds_B_snd_F"}, // 0.15%
			{6752.40436972225, "Exile_Magazine_6Rnd_45ACP"}, // 0.15%
			{6766.97440789575, "Exile_Magazine_8Rnd_9x18"}, // 0.15%
			{6781.54444606925, "Exile_Magazine_7Rnd_45ACP"}, // 0.15%
			{6796.11448424275, "9Rnd_45ACP_Mag"}, // 0.15%
			{6810.68452241625, "10Rnd_9x21_Mag"}, // 0.15%
			{6825.25456058975, "30Rnd_9x21_Mag"}, // 0.15%
			{6839.82459876325, "11Rnd_45ACP_Mag"}, // 0.15%
			{6854.16151632597, "SatchelCharge_Remote_Mag"}, // 0.14%
			{6867.87299788764, "B_Carryall_cbr"}, // 0.14%
			{6881.58447944931, "B_Carryall_ghex_F"}, // 0.14%
			{6895.08157757321, "CUP_hgun_Phantom"}, // 0.13%
			{6908.19461192936, "CUP_30Rnd_9x19_UZI"}, // 0.13%
			{6921.30764628551, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.13%
			{6934.42068064166, "CUP_18Rnd_9x19_Phantom"}, // 0.13%
			{6947.41050527903, "B_Carryall_oli"}, // 0.13%
			{6960.4003299164, "B_Carryall_khk"}, // 0.13%
			{6972.7597416084, "Exile_Item_Bandage"}, // 0.12%
			{6984.83293534543, "TRYK_V_ArmorVest_Winter"}, // 0.12%
			{6996.7803666477, "U_B_GhillieSuit"}, // 0.12%
			{7008.72779794997, "U_I_GhillieSuit"}, // 0.12%
			{7020.67522925224, "V_RebreatherB"}, // 0.12%
			{7032.62266055451, "V_RebreatherIR"}, // 0.12%
			{7044.57009185678, "V_RebreatherIA"}, // 0.12%
			{7056.51752315905, "U_O_GhillieSuit"}, // 0.12%
			{7068.17355369785, "6Rnd_45ACP_Cylinder"}, // 0.12%
			{7079.32779454022, "Exile_Weapon_RPK"}, // 0.11%
			{7090.29992532802, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.11%
			{7101.27205611582, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.11%
			{7112.24418690362, "1Rnd_SmokeRed_Grenade_shell"}, // 0.11%
			{7123.21631769141, "1Rnd_SmokePurple_Grenade_shell"}, // 0.11%
			{7134.18844847921, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.11%
			{7145.16057926701, "1Rnd_Smoke_Grenade_shell"}, // 0.11%
			{7156.13271005481, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.11%
			{7166.95756391928, "B_Carryall_mcamo"}, // 0.11%
			{7177.78241778376, "B_Carryall_ocamo"}, // 0.11%
			{7188.60727164823, "B_Carryall_oucamo"}, // 0.11%
			{7199.17131616813, "TRYK_V_PlateCarrier_wood"}, // 0.11%
			{7209.05884552173, "Exile_Item_InstaDoc"}, // 0.10%
			{7218.80674972233, "hgun_Pistol_heavy_01_F"}, // 0.10%
			{7228.55465392293, "hgun_Pistol_heavy_02_F"}, // 0.10%
			{7238.30255812353, "hgun_Pistol_Signal_F"}, // 0.10%
			{7248.05046232412, "CUP_hgun_SA61"}, // 0.10%
			{7257.79836652472, "Exile_Weapon_Colt1911"}, // 0.10%
			{7267.54627072532, "Exile_Weapon_Makarov"}, // 0.10%
			{7277.29417492591, "Exile_Weapon_Taurus"}, // 0.10%
			{7287.04207912651, "Exile_Weapon_TaurusGold"}, // 0.10%
			{7296.78998332711, "hgun_Pistol_01_F"}, // 0.10%
			{7306.53788752771, "hgun_P07_khk_F"}, // 0.10%
			{7315.53595294364, "CUP_hgun_Duty_M3X"}, // 0.09%
			{7324.27797584774, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.09%
			{7332.88012638538, "3Rnd_UGL_FlareYellow_F"}, // 0.09%
			{7341.48227692301, "3Rnd_UGL_FlareGreen_F"}, // 0.09%
			{7350.08442746065, "3Rnd_UGL_FlareRed_F"}, // 0.09%
			{7358.68657799828, "3Rnd_UGL_FlareWhite_F"}, // 0.09%
			{7366.94653050355, "B_FieldPack_oucamo"}, // 0.08%
			{7375.20648300883, "B_FieldPack_blk"}, // 0.08%
			{7383.4664355141, "B_FieldPack_ocamo"}, // 0.08%
			{7391.72638801937, "B_FieldPack_cbr"}, // 0.08%
			{7399.75744142588, "CUP_arifle_RPK74"}, // 0.08%
			{7407.30318751152, "TRYK_V_PlateCarrier_ACU_L"}, // 0.08%
			{7414.84893359716, "TRYK_V_tacv1LC_SRF_BK"}, // 0.08%
			{7422.39467968281, "TRYK_V_tacv1LC_SRF_OD"}, // 0.08%
			{7429.94042576845, "TRYK_V_tacv1LC_P_BK"}, // 0.08%
			{7437.4861718541, "TRYK_V_tacv1_BK"}, // 0.08%
			{7445.03191793974, "TRYK_V_tacv1_P_BK"}, // 0.08%
			{7452.57766402539, "TRYK_V_tacv1_SHERIFF_BK"}, // 0.08%
			{7460.12341011103, "TRYK_V_tacv1_FBI_BK"}, // 0.08%
			{7467.66915619667, "TRYK_V_tacv1LC_OD"}, // 0.08%
			{7475.21490228232, "TRYK_V_tacv1LC_CY"}, // 0.08%
			{7482.76064836796, "TRYK_V_tacv1LC_BK"}, // 0.08%
			{7490.30639445361, "TRYK_V_tacv1LSRF_BK"}, // 0.08%
			{7497.85214053925, "TRYK_V_tacv1LP_BK"}, // 0.08%
			{7505.39788662489, "TRYK_V_tacv1LC_FBI_BK"}, // 0.08%
			{7512.94363271054, "TRYK_V_PlateCarrier_blk"}, // 0.08%
			{7520.48937879618, "TRYK_V_PlateCarrier_oli"}, // 0.08%
			{7528.03512488183, "TRYK_V_PlateCarrier_coyo"}, // 0.08%
			{7535.58087096747, "TRYK_V_PlateCarrier_coyo_L"}, // 0.08%
			{7543.12661705312, "TRYK_V_Bulletproof"}, // 0.08%
			{7550.67236313876, "TRYK_V_Bulletproof_BLK"}, // 0.08%
			{7558.2181092244, "TRYK_V_Bulletproof_BL"}, // 0.08%
			{7565.76385531005, "TRYK_V_IOTV_BLK"}, // 0.08%
			{7573.30960139569, "TRYK_V_tacv1M_BK"}, // 0.08%
			{7580.85534748134, "TRYK_V_tacv1MLC_BK"}, // 0.08%
			{7588.40109356698, "TRYK_V_ArmorVest_HRT_B"}, // 0.08%
			{7595.94683965262, "TRYK_V_tacv1"}, // 0.08%
			{7603.49258573827, "TRYK_V_ArmorVest_HRT2_B"}, // 0.08%
			{7611.03833182391, "TRYK_V_tacv1_CY"}, // 0.08%
			{7618.58407790956, "TRYK_V_PlateCarrier_POLICE"}, // 0.08%
			{7626.1298239952, "TRYK_V_ArmorVest_HRT2_OD"}, // 0.08%
			{7633.67557008085, "TRYK_V_PlateCarrier_blk_L"}, // 0.08%
			{7641.22131616649, "TRYK_V_PlateCarrier_ACU"}, // 0.08%
			{7648.76706225213, "TRYK_V_PlateCarrier_wood_L"}, // 0.08%
			{7656.31280833778, "TRYK_V_ArmorVest_HRT_OD"}, // 0.08%
			{7663.85855442342, "TRYK_V_PlateCarrier_JSDF"}, // 0.08%
			{7671.38543614385, "V_BandollierB_khk"}, // 0.08%
			{7678.91231786428, "V_BandollierB_cbr"}, // 0.08%
			{7686.43919958471, "V_BandollierB_rgr"}, // 0.08%
			{7693.96608130514, "V_BandollierB_blk"}, // 0.08%
			{7701.49296302557, "V_HarnessO_brn"}, // 0.08%
			{7709.01984474601, "V_HarnessOGL_brn"}, // 0.08%
			{7716.54672646644, "V_BandollierB_oli"}, // 0.08%
			{7724.07360818687, "V_HarnessOGL_gry"}, // 0.08%
			{7731.6004899073, "V_HarnessOSpec_brn"}, // 0.08%
			{7739.12737162773, "V_HarnessOSpec_gry"}, // 0.08%
			{7746.65425334816, "V_HarnessO_gry"}, // 0.08%
			{7754.15264119477, "CUP_hgun_PB6P9_snds"}, // 0.07%
			{7761.61978575869, "CUP_muzzle_snds_M110"}, // 0.07%
			{7768.90480484544, "16Rnd_9x21_Mag"}, // 0.07%
			{7776.0732636268, "APERSTripMine_Wire_Mag"}, // 0.07%
			{7783.24172240816, "V_PlateCarrier1_blk"}, // 0.07%
			{7790.41018118953, "V_PlateCarrierSpec_rgr"}, // 0.07%
			{7797.57863997089, "V_PlateCarrier2_rgr"}, // 0.07%
			{7804.74709875225, "IEDLandSmall_Remote_Mag"}, // 0.07%
			{7811.91555753361, "V_PlateCarrierGL_rgr"}, // 0.07%
			{7819.08401631498, "V_PlateCarrierIA1_dgtl"}, // 0.07%
			{7826.25247509634, "V_PlateCarrierIA2_dgtl"}, // 0.07%
			{7833.4209338777, "V_PlateCarrierIAGL_dgtl"}, // 0.07%
			{7840.58939265906, "APERSBoundingMine_Range_Mag"}, // 0.07%
			{7847.75785144043, "V_PlateCarrier3_rgr"}, // 0.07%
			{7854.92631022179, "APERSMine_Range_Mag"}, // 0.07%
			{7862.09476900315, "V_PlateCarrier1_rgr"}, // 0.07%
			{7869.26322778451, "IEDUrbanSmall_Remote_Mag"}, // 0.07%
			{7876.40194192363, "CUP_lmg_m249_para"}, // 0.07%
			{7883.54065606275, "CUP_lmg_minimi_railed"}, // 0.07%
			{7890.43340489098, "U_I_C_Soldier_Para_5_F"}, // 0.07%
			{7897.32615371921, "U_I_C_Soldier_Para_3_F"}, // 0.07%
			{7904.21890254744, "U_I_C_Soldier_Para_2_F"}, // 0.07%
			{7911.11165137568, "U_I_C_Soldier_Para_1_F"}, // 0.07%
			{7918.00440020391, "U_I_C_Soldier_Camo_F"}, // 0.07%
			{7924.89714903214, "U_I_C_Soldier_Para_4_F"}, // 0.07%
			{7931.58969353756, "CUP_lmg_Pecheneg"}, // 0.07%
			{7938.28223804298, "hlc_lmg_M60E4"}, // 0.07%
			{7944.83549327221, "acc_flashlight"}, // 0.07%
			{7951.32545595493, "B_ViperHarness_blk_F"}, // 0.06%
			{7957.81541863764, "B_ViperHarness_base_F"}, // 0.06%
			{7964.30538132036, "B_FieldPack_ghex_F"}, // 0.06%
			{7970.79534400307, "B_Bergen_blk"}, // 0.06%
			{7977.28530668579, "B_Bergen_rgr"}, // 0.06%
			{7983.7752693685, "B_Bergen_mcamo"}, // 0.06%
			{7990.26523205122, "B_ViperLightHarness_khk_F"}, // 0.06%
			{7996.75519473393, "B_ViperLightHarness_hex_F"}, // 0.06%
			{8003.24515741664, "B_ViperLightHarness_ghex_F"}, // 0.06%
			{8009.73512009936, "B_ViperLightHarness_blk_F"}, // 0.06%
			{8016.22508278207, "B_ViperLightHarness_base_F"}, // 0.06%
			{8022.71504546479, "B_ViperHarness_ghex_F"}, // 0.06%
			{8029.2050081475, "B_ViperHarness_khk_F"}, // 0.06%
			{8035.69497083022, "B_ViperHarness_hex_F"}, // 0.06%
			{8042.18493351293, "B_ViperLightHarness_oli_F"}, // 0.06%
			{8048.67489619565, "B_ViperHarness_oli_F"}, // 0.06%
			{8055.16485887836, "B_Bergen_sgg"}, // 0.06%
			{8061.41123375009, "CUP_lmg_L110A1"}, // 0.06%
			{8067.65760862181, "CUP_lmg_PKM"}, // 0.06%
			{8073.6563188991, "CUP_hgun_MicroUzi"}, // 0.06%
			{8079.63003455024, "muzzle_snds_338_black"}, // 0.06%
			{8085.60375020137, "muzzle_snds_B"}, // 0.06%
			{8091.57746585251, "muzzle_snds_93mmg_tan"}, // 0.06%
			{8097.55118150364, "muzzle_snds_93mmg"}, // 0.06%
			{8103.52489715478, "muzzle_snds_338_green"}, // 0.06%
			{8109.49861280591, "muzzle_snds_338_sand"}, // 0.06%
			{8115.39372693532, "U_B_GEN_Soldier_F"}, // 0.06%
			{8121.28884106473, "U_B_T_Soldier_AR_F"}, // 0.06%
			{8127.18395519414, "U_B_CTRG_Soldier_2_F"}, // 0.06%
			{8133.07906932355, "U_B_CTRG_Soldier_F"}, // 0.06%
			{8138.97418345296, "U_B_GEN_Commander_F"}, // 0.06%
			{8144.86929758237, "U_B_CTRG_Soldier_3_F"}, // 0.06%
			{8150.76441171178, "U_B_CTRG_Soldier_urb_1_F"}, // 0.06%
			{8156.65952584119, "U_B_T_Soldier_SL_F"}, // 0.06%
			{8162.55463997059, "U_B_CombatUniform_mcam_vest"}, // 0.06%
			{8168.4497541, "U_B_CombatUniform_mcam_worn"}, // 0.06%
			{8174.34486822941, "U_O_T_Officer_F"}, // 0.06%
			{8180.23998235882, "U_B_CTRG_Soldier_urb_2_F"}, // 0.06%
			{8186.13509648823, "U_B_CombatUniform_mcam"}, // 0.06%
			{8192.03021061764, "U_B_CTRG_3"}, // 0.06%
			{8197.92532474705, "U_B_CTRG_2"}, // 0.06%
			{8203.82043887646, "U_B_CTRG_1"}, // 0.06%
			{8209.71555300587, "U_B_CombatUniform_mcam_tshirt"}, // 0.06%
			{8215.61066713528, "U_O_T_Soldier_F"}, // 0.06%
			{8221.50578126469, "U_B_CTRG_Soldier_urb_3_F"}, // 0.06%
			{8227.38156715105, "H_Booniehat_dgtl"}, // 0.06%
			{8233.25735303741, "H_Booniehat_dirty"}, // 0.06%
			{8239.13313892377, "H_Booniehat_grn"}, // 0.06%
			{8245.00892481014, "H_Booniehat_tan"}, // 0.06%
			{8250.8847106965, "H_Booniehat_mcamo"}, // 0.06%
			{8256.76049658286, "H_Booniehat_indp"}, // 0.06%
			{8262.63628246923, "H_Booniehat_khk"}, // 0.06%
			{8268.51206835559, "Exile_Headgear_GasMask"}, // 0.06%
			{8274.38785424195, "H_Booniehat_khk_hs"}, // 0.06%
			{8280.21586951135, "H_MilCap_blue"}, // 0.06%
			{8286.04388478075, "H_MilCap_rucamo"}, // 0.06%
			{8291.87190005015, "H_MilCap_mcamo"}, // 0.06%
			{8297.69991531955, "Exile_Headgear_GasMask"}, // 0.06%
			{8303.52793058895, "H_MilCap_ocamo"}, // 0.06%
			{8309.35594585836, "H_MilCap_dgtl"}, // 0.06%
			{8315.18396112776, "H_MilCap_oucamo"}, // 0.06%
			{8320.98416636579, "CUP_lmg_Mk48_des"}, // 0.06%
			{8326.78437160382, "Exile_Weapon_PKP"}, // 0.06%
			{8332.58457684185, "Exile_Weapon_PK"}, // 0.06%
			{8338.38478207988, "CUP_lmg_M240"}, // 0.06%
			{8344.18498731791, "CUP_lmg_M60E4"}, // 0.06%
			{8349.98519255594, "hlc_lmg_m60"}, // 0.06%
			{8355.6233062042, "20Rnd_650x39_Cased_Mag_F"}, // 0.06%
			{8361.13750526679, "U_IG_leader"}, // 0.06%
			{8366.51384935281, "V_Chestrig_rgr"}, // 0.05%
			{8371.89019343883, "V_Chestrig_khk"}, // 0.05%
			{8377.26653752485, "V_Chestrig_oli"}, // 0.05%
			{8382.64288161088, "V_Chestrig_blk"}, // 0.05%
			{8388.01251365684, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.05%
			{8393.3821457028, "CUP_10Rnd_762x54_SVD_M"}, // 0.05%
			{8398.75177774877, "CUP_srifle_SVD_des"}, // 0.05%
			{8404.12140979473, "CUP_5Rnd_762x51_M24"}, // 0.05%
			{8409.47715486127, "hlc_50rnd_762x51_M_G3"}, // 0.05%
			{8414.67707314826, "srifle_DMR_01_F"}, // 0.05%
			{8419.87699143526, "srifle_EBR_F"}, // 0.05%
			{8424.97814187893, "20Rnd_762x51_Mag"}, // 0.05%
			{8430.07765523965, "6Rnd_GreenSignal_F"}, // 0.05%
			{8435.17716860038, "6Rnd_RedSignal_F"}, // 0.05%
			{8440.15526497633, "HLC_Rifle_g3ka4_GL"}, // 0.05%
			{8445.13336135227, "CUP_arifle_FNFAL"}, // 0.05%
			{8450.07712602907, "hlc_20rnd_762x51_b_G3"}, // 0.05%
			{8454.93526827548, "CUP_30Rnd_545x39_AK_M"}, // 0.05%
			{8459.79341052188, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.05%
			{8464.62607936325, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.05%
			{8469.45457491546, "CUP_srifle_SVD"}, // 0.05%
			{8474.17066621899, "U_O_PilotCoveralls"}, // 0.05%
			{8478.88675752252, "U_I_CombatUniform"}, // 0.05%
			{8483.60284882605, "U_I_HeliPilotCoveralls"}, // 0.05%
			{8488.31894012957, "U_I_CombatUniform_tshirt"}, // 0.05%
			{8493.0350314331, "U_I_CombatUniform_shortsleeve"}, // 0.05%
			{8497.75112273663, "U_B_HeliPilotCoveralls"}, // 0.05%
			{8502.46721404016, "U_I_pilotCoveralls"}, // 0.05%
			{8507.18330534368, "U_B_PilotCoveralls"}, // 0.05%
			{8511.86420193599, "CUP_optic_HoloDesert"}, // 0.05%
			{8516.5450985283, "CUP_optic_SB_11_4x20_PM"}, // 0.05%
			{8521.2259951206, "CUP_optic_AN_PVS_4"}, // 0.05%
			{8525.90689171291, "CUP_optic_TrijiconRx01_desert"}, // 0.05%
			{8530.58778830522, "CUP_optic_RCO"}, // 0.05%
			{8535.26868489752, "CUP_optic_CompM4"}, // 0.05%
			{8539.94958148983, "optic_Arco_ghex_F"}, // 0.05%
			{8544.63047808214, "CUP_optic_SUSAT"}, // 0.05%
			{8549.31137467444, "CUP_optic_ACOG"}, // 0.05%
			{8553.99227126675, "optic_ERCO_snd_F"}, // 0.05%
			{8558.67316785906, "optic_ERCO_khk_F"}, // 0.05%
			{8563.35406445136, "optic_ERCO_blk_F"}, // 0.05%
			{8568.03496104367, "optic_DMS_ghex_F"}, // 0.05%
			{8572.71585763597, "optic_DMS"}, // 0.05%
			{8577.39675422828, "optic_MRCO"}, // 0.05%
			{8582.07765082059, "CUP_optic_HoloBlack"}, // 0.05%
			{8586.75854741289, "CUP_optic_PechenegScope"}, // 0.05%
			{8591.4394440052, "CUP_muzzle_PBS4"}, // 0.05%
			{8596.12034059751, "muzzle_snds_H_khk_F"}, // 0.05%
			{8600.80123718981, "optic_Arco_blk_F"}, // 0.05%
			{8605.48213378212, "optic_Arco"}, // 0.05%
			{8610.16303037443, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{8614.84392696673, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{8619.52482355904, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{8624.20572015135, "optic_Hamr_khk_F"}, // 0.05%
			{8628.88661674365, "optic_Holosight"}, // 0.05%
			{8633.56751333596, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{8638.24840992826, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{8642.92930652057, "muzzle_snds_58_wdm_F"}, // 0.05%
			{8647.61020311288, "muzzle_snds_m_snd_F"}, // 0.05%
			{8652.29109970518, "muzzle_snds_m_khk_F"}, // 0.05%
			{8656.97199629749, "optic_Holosight_blk_F"}, // 0.05%
			{8661.6528928898, "optic_Holosight_khk_F"}, // 0.05%
			{8666.3337894821, "acc_pointer_IR"}, // 0.05%
			{8671.01468607441, "CUP_optic_CompM2_Black"}, // 0.05%
			{8675.69558266672, "CUP_optic_PSO_1"}, // 0.05%
			{8680.37647925902, "CUP_optic_PSO_3"}, // 0.05%
			{8685.05737585133, "CUP_optic_Kobra"}, // 0.05%
			{8689.73827244364, "CUP_muzzle_Bizon"}, // 0.05%
			{8694.41916903594, "muzzle_snds_58_blk_F"}, // 0.05%
			{8699.10006562825, "CUP_muzzle_PB6P9"}, // 0.05%
			{8703.78096222056, "muzzle_snds_H_snd_F"}, // 0.05%
			{8708.46185881286, "optic_Hamr"}, // 0.05%
			{8713.14275540517, "CUP_muzzle_snds_XM8"}, // 0.05%
			{8717.82365199747, "CUP_optic_CompM2_Desert"}, // 0.05%
			{8722.50454858978, "muzzle_snds_M"}, // 0.05%
			{8727.18544518209, "muzzle_snds_H"}, // 0.05%
			{8731.82822936691, "CUP_srifle_M24_des"}, // 0.05%
			{8736.47101355173, "CUP_srifle_M24_wdl"}, // 0.05%
			{8741.11379773655, "CUP_srifle_M40A3"}, // 0.05%
			{8745.67798497562, "10Rnd_762x54_Mag"}, // 0.05%
			{8750.21225107226, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.05%
			{8754.74651716891, "CUP_30Rnd_762x39_AK47_M"}, // 0.05%
			{8759.28078326555, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.05%
			{8763.8150493622, "hlc_100Rnd_762x51_B_M60E4"}, // 0.05%
			{8768.34683364927, "hlc_20rnd_762x51_T_G3"}, // 0.05%
			{8772.80852998621, "LMG_Zafir_F"}, // 0.04%
			{8777.27022632316, "LMG_03_F"}, // 0.04%
			{8781.73192266011, "CUP_lmg_L7A2"}, // 0.04%
			{8786.13876207488, "H_Hat_camo"}, // 0.04%
			{8790.54560148966, "H_Cap_brn_SPECOPS"}, // 0.04%
			{8794.95244090443, "H_Cap_tan_specops_US"}, // 0.04%
			{8799.3592803192, "H_Cap_khaki_specops_UK"}, // 0.04%
			{8803.76611973397, "H_Watchcap_blk"}, // 0.04%
			{8808.17295914875, "H_Watchcap_khk"}, // 0.04%
			{8812.57979856352, "H_BandMask_blk"}, // 0.04%
			{8816.98663797829, "H_Bandanna_khk"}, // 0.04%
			{8821.39347739306, "H_Bandanna_mcamo"}, // 0.04%
			{8825.80031680784, "H_Bandanna_khk_hs"}, // 0.04%
			{8830.20715622261, "H_Bandanna_cbr"}, // 0.04%
			{8834.61399563738, "H_Bandanna_sgg"}, // 0.04%
			{8839.02083505215, "H_Bandanna_camo"}, // 0.04%
			{8843.42767446693, "H_Bandanna_gry"}, // 0.04%
			{8847.81652678205, "3Rnd_SmokePurple_Grenade_shell"}, // 0.04%
			{8852.20537909717, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.04%
			{8856.59423141229, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.04%
			{8860.98308372741, "3Rnd_Smoke_Grenade_shell"}, // 0.04%
			{8865.37193604253, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.04%
			{8869.76078835765, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.04%
			{8874.14964067277, "3Rnd_SmokeRed_Grenade_shell"}, // 0.04%
			{8878.52065212482, "H_HelmetSpecB_paint1"}, // 0.04%
			{8882.89166357687, "H_HelmetB"}, // 0.04%
			{8887.26267502892, "H_HelmetB_paint"}, // 0.04%
			{8891.63368648097, "H_HelmetB_light"}, // 0.04%
			{8896.00469793302, "H_HelmetB_plain_blk"}, // 0.04%
			{8900.37570938507, "H_HelmetIA"}, // 0.04%
			{8904.74672083712, "H_HelmetSpecB"}, // 0.04%
			{8909.11773228917, "H_HelmetSpecB_paint2"}, // 0.04%
			{8913.48874374122, "H_HelmetSpecB_blk"}, // 0.04%
			{8917.81868528701, "B_Bergen_Base_F"}, // 0.04%
			{8922.1486268328, "B_Bergen_mcamo_F"}, // 0.04%
			{8926.47856837859, "B_Bergen_dgtl_F"}, // 0.04%
			{8930.80850992438, "B_Bergen_hex_F"}, // 0.04%
			{8935.13845147017, "B_Bergen_tna_F"}, // 0.04%
			{8939.46657752684, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.04%
			{8943.79470358351, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.04%
			{8948.12282964018, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.04%
			{8952.45095569686, "TRYK_U_B_MARPAT_Wood"}, // 0.04%
			{8956.76530588934, "hlc_rifle_m14sopmod"}, // 0.04%
			{8961.07965608183, "hlc_rifle_STG58F"}, // 0.04%
			{8965.39400627431, "hlc_rifle_g3ka4"}, // 0.04%
			{8969.68971191108, "CUP_5Rnd_762x67_G22"}, // 0.04%
			{8973.90010185797, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.04%
			{8978.11049180485, "hlc_100Rnd_762x51_M_M60E4"}, // 0.04%
			{8982.23029570219, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.04%
			{8986.35009959952, "hlc_20Rnd_762x51_B_fal"}, // 0.04%
			{8990.46990349685, "hlc_20Rnd_762x51_B_M14"}, // 0.04%
			{8994.58970739419, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.04%
			{8998.70951129152, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.04%
			{9002.82931518886, "CUP_20Rnd_762x51_DMR"}, // 0.04%
			{9006.94911908619, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.04%
			{9011.06892298353, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.04%
			{9015.18872688086, "CUP_20Rnd_762x51_B_SCAR"}, // 0.04%
			{9019.21595091533, "CUP_10Rnd_762x51_CZ750"}, // 0.04%
			{9023.24317494981, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.04%
			{9027.22565205056, "hlc_rifle_SLRchopmod"}, // 0.04%
			{9031.20812915132, "hlc_rifle_M14"}, // 0.04%
			{9035.19060625208, "hlc_rifle_m14dmr"}, // 0.04%
			{9039.0771200492, "150Rnd_762x54_Box"}, // 0.04%
			{9042.96363384633, "100Rnd_65x39_caseless_mag"}, // 0.04%
			{9046.70835112017, "CUP_muzzle_snds_G36_black"}, // 0.04%
			{9050.45306839402, "CUP_muzzle_snds_Mk12"}, // 0.04%
			{9054.19778566787, "CUP_muzzle_snds_L85"}, // 0.04%
			{9057.94250294171, "CUP_optic_Elcan"}, // 0.04%
			{9061.65673028957, "CUP_srifle_VSSVintorez"}, // 0.04%
			{9065.37095763743, "srifle_DMR_03_tan_F"}, // 0.04%
			{9069.08518498528, "srifle_DMR_03_woodland_F"}, // 0.04%
			{9072.79941233314, "srifle_DMR_03_F"}, // 0.04%
			{9076.513639681, "srifle_DMR_06_olive_F"}, // 0.04%
			{9080.22786702885, "srifle_DMR_03_khaki_F"}, // 0.04%
			{9083.94209437671, "srifle_DMR_06_camo_F"}, // 0.04%
			{9087.59269838574, "hlc_rifle_FAL5061"}, // 0.04%
			{9091.24330239476, "hlc_rifle_psg1"}, // 0.04%
			{9094.82753178544, "V_PlateCarrierL_CTRG"}, // 0.04%
			{9098.41176117612, "V_PlateCarrierH_CTRG"}, // 0.04%
			{9101.94882965377, "U_B_SpecopsUniform_sgg"}, // 0.04%
			{9105.43909048365, "CUP_5Rnd_86x70_L115A1"}, // 0.03%
			{9108.75782140094, "CUP_arifle_Mk17_STD_EGLM"}, // 0.03%
			{9112.07655231824, "CUP_arifle_FNFAL_railed"}, // 0.03%
			{9115.39528323554, "hlc_rifle_falosw"}, // 0.03%
			{9118.71401415283, "CUP_srifle_M14"}, // 0.03%
			{9122.0098572707, "CUP_20Rnd_762x51_B_M110"}, // 0.03%
			{9125.30570038857, "hlc_50rnd_762x51_M_FAL"}, // 0.03%
			{9128.60154350643, "hlc_50Rnd_762x51_B_M14"}, // 0.03%
			{9131.8973866243, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.03%
			{9135.19322974217, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.03%
			{9138.48907286003, "CUP_20Rnd_762x51_L129_M"}, // 0.03%
			{9141.73516740254, "TRYK_U_B_MARPAT_Desert_Tshirt"}, // 0.03%
			{9144.98126194504, "TRYK_U_B_MARPAT_Desert"}, // 0.03%
			{9148.22735648754, "TRYK_U_B_MARPAT_Wood_Tshirt"}, // 0.03%
			{9151.47345103005, "TRYK_U_B_MARPAT_Desert2"}, // 0.03%
			{9154.71954557255, "TRYK_U_B_MARPAT_Desert2_Tshirt"}, // 0.03%
			{9157.95830707015, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.03%
			{9161.19706856776, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.03%
			{9164.43583006536, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9167.67459156296, "200Rnd_556x45_Box_F"}, // 0.03%
			{9170.91335306057, "200Rnd_556x45_Box_Red_F"}, // 0.03%
			{9174.15211455817, "200Rnd_556x45_Box_Tracer_F"}, // 0.03%
			{9177.39087605577, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.03%
			{9180.62963755337, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.03%
			{9183.86839905098, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.03%
			{9187.10716054858, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.03%
			{9190.34592204618, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.03%
			{9193.58468354379, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.03%
			{9196.82344504139, "150Rnd_762x54_Box_Tracer"}, // 0.03%
			{9200.049251493, "V_I_G_resistanceLeader_F"}, // 0.03%
			{9203.23523317361, "ItemGPS"}, // 0.03%
			{9206.42121485421, "Exile_Item_MobilePhone"}, // 0.03%
			{9209.57830809989, "srifle_DMR_07_ghex_F"}, // 0.03%
			{9212.73540134557, "srifle_DMR_07_hex_F"}, // 0.03%
			{9215.89249459125, "srifle_DMR_07_blk_F"}, // 0.03%
			{9218.99423156395, "CUP_arifle_AKM"}, // 0.03%
			{9222.09596853666, "CUP_arifle_AK107_GL"}, // 0.03%
			{9225.19770550936, "CUP_arifle_Mk16_CQC_FG"}, // 0.03%
			{9228.13559845254, "H_Watchcap_camo"}, // 0.03%
			{9231.07349139572, "H_Shemag_olive_hs"}, // 0.03%
			{9234.0113843389, "H_Watchcap_sgg"}, // 0.03%
			{9236.94927728208, "H_TurbanO_blk"}, // 0.03%
			{9239.88717022527, "H_Shemag_khk"}, // 0.03%
			{9242.82506316845, "H_Shemag_tan"}, // 0.03%
			{9245.76295611163, "H_Shemag_olive"}, // 0.03%
			{9248.70084905481, "H_ShemagOpen_khk"}, // 0.03%
			{9251.63874199799, "H_ShemagOpen_tan"}, // 0.03%
			{9254.57663494117, "H_MilCap_tna_F"}, // 0.03%
			{9257.51452788435, "H_MilCap_ghex_F"}, // 0.03%
			{9260.45242082753, "H_Booniehat_tna_F"}, // 0.03%
			{9263.39031377071, "H_MilCap_gen_F"}, // 0.03%
			{9266.32820671389, "H_Cap_blk_Syndikat_F"}, // 0.03%
			{9269.26609965707, "H_Cap_grn_Syndikat_F"}, // 0.03%
			{9272.20399260025, "H_FakeHeadgear_Syndikat_F"}, // 0.03%
			{9275.14188554343, "H_Cap_oli_Syndikat_F"}, // 0.03%
			{9278.07977848661, "H_Cap_tan_Syndikat_F"}, // 0.03%
			{9281.00919673861, "CUP_arifle_AK47"}, // 0.03%
			{9283.93861499061, "arifle_AKS_F"}, // 0.03%
			{9286.86803324261, "CUP_arifle_Mk16_CQC"}, // 0.03%
			{9289.78204087731, "H_HelmetB_tna_F"}, // 0.03%
			{9292.69604851201, "H_HelmetB_light_grass"}, // 0.03%
			{9295.61005614671, "H_HelmetB_Light_tna_F"}, // 0.03%
			{9298.52406378141, "H_HelmetB_Enh_tna_F"}, // 0.03%
			{9301.43807141611, "H_Beret_gen_F"}, // 0.03%
			{9304.3520790508, "H_HelmetSpecO_ghex_F"}, // 0.03%
			{9307.2660866855, "H_HelmetIA_net"}, // 0.03%
			{9310.1800943202, "H_HelmetCrew_O_ghex_F"}, // 0.03%
			{9313.0941019549, "H_HelmetB_TI_tna_F"}, // 0.03%
			{9316.0081095896, "H_BandMask_demon"}, // 0.03%
			{9318.9221172243, "H_HelmetB_light_black"}, // 0.03%
			{9321.836124859, "H_HelmetB_light_desert"}, // 0.03%
			{9324.7501324937, "H_HelmetB_light_snakeskin"}, // 0.03%
			{9327.6641401284, "H_HelmetLeaderO_ghex_F"}, // 0.03%
			{9330.5781477631, "H_BandMask_reaper"}, // 0.03%
			{9333.4921553978, "H_Helmet_Skate"}, // 0.03%
			{9336.4061630325, "H_HelmetB_light_sand"}, // 0.03%
			{9339.3201706672, "H_BandMask_khk"}, // 0.03%
			{9342.2341783019, "H_HelmetB_black"}, // 0.03%
			{9345.1481859366, "H_HelmetB_grass"}, // 0.03%
			{9348.0621935713, "H_HelmetB_sand"}, // 0.03%
			{9350.97620120599, "H_HelmetB_snakeskin"}, // 0.03%
			{9353.89020884069, "H_HelmetIA_camo"}, // 0.03%
			{9356.80421647539, "H_HelmetB_desert"}, // 0.03%
			{9359.58988698628, "CUP_srifle_CZ750"}, // 0.03%
			{9362.34698651758, "U_I_G_resistanceLeader_F"}, // 0.03%
			{9365.10408604887, "CUP_arifle_AK74_GL"}, // 0.03%
			{9367.86118558016, "CUP_srifle_Mk12SPR"}, // 0.03%
			{9370.61828511146, "hlc_rifle_SAMR"}, // 0.03%
			{9373.32336389688, "TRYK_U_B_NATO_OCP_BLK_R_CombatUniform"}, // 0.03%
			{9376.0284426823, "TRYK_U_B_NATO_OCP_BLK_CombatUniform"}, // 0.03%
			{9378.73352146772, "TRYK_U_B_NATO_OCPD_R_CombatUniform"}, // 0.03%
			{9381.43860025314, "TRYK_U_B_NATO_OCP_CombatUniform"}, // 0.03%
			{9384.14367903856, "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform"}, // 0.03%
			{9386.84875782398, "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform"}, // 0.03%
			{9389.5538366094, "TRYK_U_B_NATO_OCP_R_CombatUniform"}, // 0.03%
			{9392.25891539482, "TRYK_U_B_AOR1_Rollup_CombatUniform"}, // 0.03%
			{9394.96399418024, "TRYK_U_B_3CD_Ranger_BDUTshirt"}, // 0.03%
			{9397.66907296566, "TRYK_U_B_NATO_OCPD_CombatUniform"}, // 0.03%
			{9400.37415175108, "TRYK_U_B_AOR2_Rollup_CombatUniform"}, // 0.03%
			{9403.0792305365, "TRYK_U_B_MTP_R_CombatUniform"}, // 0.03%
			{9405.78430932192, "TRYK_U_B_MTP_BLK_CombatUniform"}, // 0.03%
			{9408.48938810734, "TRYK_U_B_ARO2_CombatUniform"}, // 0.03%
			{9411.19446689276, "TRYK_U_B_ARO1_CBR_R_CombatUniform"}, // 0.03%
			{9413.89954567818, "TRYK_U_B_ARO1_CBR_CombatUniform"}, // 0.03%
			{9416.6046244636, "TRYK_U_B_ARO1_BLK_R_CombatUniform"}, // 0.03%
			{9419.30970324902, "TRYK_U_B_ARO1_BLK_CombatUniform"}, // 0.03%
			{9422.01478203444, "TRYK_U_B_ARO1R_CombatUniform"}, // 0.03%
			{9424.71986081987, "TRYK_U_B_ARO1_CombatUniform"}, // 0.03%
			{9427.42493960529, "TRYK_U_B_MTP_CombatUniform"}, // 0.03%
			{9430.13001839071, "TRYK_U_B_ARO1_GRY_R_CombatUniform"}, // 0.03%
			{9432.83509717613, "TRYK_U_B_ARO1_GR_R_CombatUniform"}, // 0.03%
			{9435.54017596155, "TRYK_U_B_ARO1_GR_CombatUniform"}, // 0.03%
			{9438.24525474697, "TRYK_U_B_WDL_GRY_R_CombatUniform"}, // 0.03%
			{9440.95033353239, "TRYK_U_B_WDL_GRY_CombatUniform"}, // 0.03%
			{9443.65541231781, "TRYK_U_B_Woodland_Tshirt"}, // 0.03%
			{9446.36049110323, "TRYK_U_B_Woodland"}, // 0.03%
			{9449.06556988865, "TRYK_U_B_MTP_BLK_R_CombatUniform"}, // 0.03%
			{9451.77064867407, "TRYK_U_B_ARO1_GRY_CombatUniform"}, // 0.03%
			{9454.47572745949, "TRYK_U_B_NATO_UCP_R_CombatUniform"}, // 0.03%
			{9457.18080624491, "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform"}, // 0.03%
			{9459.88588503033, "TRYK_U_B_NATO_UCP_CombatUniform"}, // 0.03%
			{9462.59096381575, "TRYK_U_B_wh_blk_Rollup_CombatUniform"}, // 0.03%
			{9465.29604260117, "TRYK_U_B_3CD_Delta_BDU"}, // 0.03%
			{9468.00112138659, "TRYK_U_B_TANTAN_R_CombatUniform"}, // 0.03%
			{9470.70620017201, "TRYK_U_B_TANTAN_CombatUniform"}, // 0.03%
			{9473.41127895743, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.03%
			{9476.11635774285, "TRYK_U_B_GRTANR_CombatUniformTshirt"}, // 0.03%
			{9478.82143652827, "TRYK_U_B_OD_OD_CombatUniform"}, // 0.03%
			{9481.5265153137, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.03%
			{9484.23159409912, "TRYK_HRP_khk"}, // 0.03%
			{9486.93667288454, "TRYK_U_B_GRTAN_CombatUniform"}, // 0.03%
			{9489.64175166996, "TRYK_U_B_ODTANR_CombatUniformTshirt"}, // 0.03%
			{9492.34683045538, "TRYK_U_B_ODTAN_CombatUniform"}, // 0.03%
			{9495.0519092408, "TRYK_U_B_BLKTANR_CombatUniformTshirt"}, // 0.03%
			{9497.75698802622, "TRYK_U_B_ARO2R_CombatUniform"}, // 0.03%
			{9500.46206681164, "TRYK_U_B_BLKTAN_CombatUniform"}, // 0.03%
			{9503.16714559706, "TRYK_HRP_UCP"}, // 0.03%
			{9505.87222438248, "TRYK_HRP_USMC"}, // 0.03%
			{9508.5773031679, "TRYK_U_B_3CD_Ranger_BDU"}, // 0.03%
			{9511.28238195332, "TRYK_U_B_BLKOCP_R_CombatUniformTshirt"}, // 0.03%
			{9513.98746073874, "TRYK_U_B_BLKOCP_CombatUniform"}, // 0.03%
			{9516.69253952416, "TRYK_U_B_3CD_Delta_BDUTshirt"}, // 0.03%
			{9519.39761830958, "TRYK_U_B_JSDF_CombatUniformTshirt"}, // 0.03%
			{9522.102697095, "TRYK_U_B_JSDF_CombatUniform"}, // 0.03%
			{9524.80777588042, "TRYK_U_B_woodtanR_CombatUniformTshirt"}, // 0.03%
			{9527.51285466584, "TRYK_U_B_woodtan_CombatUniform"}, // 0.03%
			{9530.21793345126, "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt"}, // 0.03%
			{9532.92301223668, "TRYK_U_B_TANOCP_R_CombatUniformTshirt"}, // 0.03%
			{9535.6280910221, "TRYK_U_B_BLK_tan_Rollup_CombatUniform"}, // 0.03%
			{9538.33316980753, "TRYK_U_B_TANOCP_CombatUniform"}, // 0.03%
			{9541.03824859295, "TRYK_U_B_wood3c_CombatUniformTshirt"}, // 0.03%
			{9543.74332737837, "TRYK_U_B_wood3c_CombatUniform"}, // 0.03%
			{9546.44840616379, "TRYK_U_B_NATO_UCP_GRY_CombatUniform"}, // 0.03%
			{9549.15348494921, "TRYK_U_B_GRYOCP_CombatUniform"}, // 0.03%
			{9551.85856373463, "TRYK_U_B_woodR_CombatUniformTshirt"}, // 0.03%
			{9554.56364252005, "TRYK_U_B_BLKBLK_R_CombatUniform"}, // 0.03%
			{9557.26872130547, "TRYK_U_B_wood_CombatUniform"}, // 0.03%
			{9559.97380009089, "TRYK_U_B_GRYOCP_R_CombatUniformTshirt"}, // 0.03%
			{9562.67887887631, "TRYK_U_B_BLK_OD_Rollup_CombatUniform"}, // 0.03%
			{9565.38395766173, "TRYK_U_B_AOR2_GRY_R_CombatUniform"}, // 0.03%
			{9568.08903644715, "TRYK_U_B_wh_OD_Rollup_CombatUniform"}, // 0.03%
			{9570.79411523257, "TRYK_T_camo_Wood_BG"}, // 0.03%
			{9573.49919401799, "TRYK_T_camo_wood_marpat_BG"}, // 0.03%
			{9576.20427280341, "TRYK_T_camo_desert_marpat_BG"}, // 0.03%
			{9578.90935158883, "TRYK_T_camo_wood_marpat"}, // 0.03%
			{9581.61443037425, "TRYK_T_camo_Wood"}, // 0.03%
			{9584.31950915967, "TRYK_T_camo_3c"}, // 0.03%
			{9587.02458794509, "TRYK_T_camo_tan"}, // 0.03%
			{9589.72966673051, "TRYK_T_camo_3c_BG"}, // 0.03%
			{9592.43474551594, "TRYK_U_B_AOR2_BLK_CombatUniform"}, // 0.03%
			{9595.13982430136, "TRYK_T_camo_Desert_marpat"}, // 0.03%
			{9597.84490308678, "TRYK_U_B_AOR2_BLK_R_CombatUniform"}, // 0.03%
			{9600.5499818722, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.03%
			{9603.25506065762, "TRYK_U_B_Snow_CombatUniform"}, // 0.03%
			{9605.96013944304, "TRYK_U_B_wh_tan_Rollup_CombatUniform"}, // 0.03%
			{9608.66521822846, "TRYK_U_B_AOR2_OD_R_CombatUniform"}, // 0.03%
			{9611.37029701388, "TRYK_U_B_Snowt"}, // 0.03%
			{9614.0753757993, "TRYK_U_B_AOR2_GRY_CombatUniform"}, // 0.03%
			{9616.76019182228, "7Rnd_408_Mag"}, // 0.03%
			{9619.44500784526, "5Rnd_127x108_Mag"}, // 0.03%
			{9622.0999925791, "CUP_arifle_Mk17_STD_FG"}, // 0.03%
			{9624.75497731294, "hlc_rifle_c1A1"}, // 0.03%
			{9627.40996204678, "hlc_rifle_SLR"}, // 0.03%
			{9630.06494678061, "CUP_arifle_Mk20"}, // 0.03%
			{9632.6497275912, "CUP_arifle_Mk16_SV"}, // 0.03%
			{9635.23450840179, "hlc_rifle_rpk"}, // 0.03%
			{9637.81928921237, "CUP_arifle_AKS74U"}, // 0.03%
			{9640.40407002296, "hlc_rifle_vendimus"}, // 0.03%
			{9642.98885083354, "hlc_rifle_ak12"}, // 0.03%
			{9645.57363164413, "CUP_arifle_L86A2"}, // 0.03%
			{9648.15841245472, "arifle_AKM_F"}, // 0.03%
			{9650.7431932653, "CUP_arifle_G36A"}, // 0.03%
			{9653.32797407589, "CUP_arifle_G36C"}, // 0.03%
			{9655.91275488648, "arifle_AK12_F"}, // 0.03%
			{9658.49753569706, "arifle_SPAR_03_khk_F"}, // 0.03%
			{9661.08231650765, "CUP_arifle_M16A2"}, // 0.03%
			{9663.66709731824, "CUP_arifle_XM8_Railed"}, // 0.03%
			{9666.25187812882, "arifle_AKM_FL_F"}, // 0.03%
			{9668.83665893941, "arifle_SPAR_03_snd_F"}, // 0.03%
			{9671.42143974999, "arifle_SPAR_01_blk_F"}, // 0.03%
			{9674.00622056058, "arifle_AK12_GL_F"}, // 0.03%
			{9676.42046833669, "CUP_srifle_G22_des"}, // 0.02%
			{9678.83293042657, "arifle_MX_GL_F"}, // 0.02%
			{9681.24539251645, "CUP_arifle_CZ805_GL"}, // 0.02%
			{9683.65785460633, "hlc_rifle_RU556"}, // 0.02%
			{9686.07031669622, "hlc_rifle_samr2"}, // 0.02%
			{9688.4827787861, "CUP_arifle_M4A1"}, // 0.02%
			{9690.85469529464, "30Rnd_65x39_caseless_green"}, // 0.02%
			{9693.22661180317, "30Rnd_556x45_Stanag_red"}, // 0.02%
			{9695.59852831171, "30Rnd_556x45_Stanag_green"}, // 0.02%
			{9697.97044482025, "30Rnd_556x45_Stanag"}, // 0.02%
			{9700.32849047201, "U_O_Wetsuit"}, // 0.02%
			{9702.68653612378, "U_O_OfficerUniform_ocamo"}, // 0.02%
			{9705.04458177554, "U_I_OfficerUniform"}, // 0.02%
			{9707.4026274273, "U_O_V_Soldier_Viper_hex_F"}, // 0.02%
			{9709.76067307907, "U_I_Wetsuit"}, // 0.02%
			{9712.11871873083, "U_O_SpecopsUniform_blk"}, // 0.02%
			{9714.47676438259, "U_O_CombatUniform_ocamo"}, // 0.02%
			{9716.83481003436, "U_B_Wetsuit"}, // 0.02%
			{9719.19285568612, "U_O_CombatUniform_oucamo"}, // 0.02%
			{9721.55090133788, "U_O_V_Soldier_Viper_F"}, // 0.02%
			{9723.90894698964, "U_O_SpecopsUniform_ocamo"}, // 0.02%
			{9726.2493952858, "CUP_acc_ANPEQ_2_grey"}, // 0.02%
			{9728.58984358195, "CUP_acc_ANPEQ_2_desert"}, // 0.02%
			{9730.93029187811, "optic_NVS"}, // 0.02%
			{9733.27074017426, "CUP_acc_ANPEQ_2_camo"}, // 0.02%
			{9735.59385181637, "CUP_srifle_M110"}, // 0.02%
			{9737.83399518555, "hlc_rifle_RU5562"}, // 0.02%
			{9740.07413855472, "arifle_MXC_F"}, // 0.02%
			{9742.3142819239, "hlc_rifle_Bushmaster300"}, // 0.02%
			{9744.55442529307, "hlc_rifle_bcmjack"}, // 0.02%
			{9746.79456866225, "hlc_rifle_Colt727_GL"}, // 0.02%
			{9748.94242148063, "5Rnd_127x108_APDS_Mag"}, // 0.02%
			{9751.0102461291, "CUP_arifle_AK74"}, // 0.02%
			{9753.07807077757, "Exile_Weapon_LeeEnfield"}, // 0.02%
			{9755.13373175164, "29rnd_300BLK_STANAG_T"}, // 0.02%
			{9757.18939272571, "hlc_75Rnd_762x39_m_rpk"}, // 0.02%
			{9759.24505369977, "hlc_45Rnd_762x39_m_rpk"}, // 0.02%
			{9761.1425869066, "hlc_50rnd_556x45_EPR"}, // 0.02%
			{9763.04012011344, "hlc_30Rnd_545x39_B_AK"}, // 0.02%
			{9764.93765332027, "29rnd_300BLK_STANAG"}, // 0.02%
			{9766.83315924803, "arifle_MX_F"}, // 0.02%
			{9768.72866517579, "hlc_rifle_ak47"}, // 0.02%
			{9770.46807061539, "hlc_30Rnd_545x39_T_AK"}, // 0.02%
			{9772.20747605498, "HLC_45rnd_762x39_T_RPK"}, // 0.02%
			{9773.94688149458, "hlc_30Rnd_762x39_b_ak"}, // 0.02%
			{9775.68628693417, "hlc_30rnd_556x45_SOST"}, // 0.02%
			{9777.42569237377, "20Rnd_556x45_UW_mag"}, // 0.02%
			{9779.14887958083, "Exile_Weapon_AK107"}, // 0.02%
			{9780.87206678789, "CUP_arifle_AK74M"}, // 0.02%
			{9782.59525399495, "CUP_arifle_AK107"}, // 0.02%
			{9784.31844120201, "Exile_Weapon_AK107_GL"}, // 0.02%
			{9786.04162840906, "CUP_arifle_Mk16_STD_EGLM"}, // 0.02%
			{9787.76481561612, "Exile_Weapon_AK74"}, // 0.02%
			{9789.48800282318, "Exile_Weapon_AK47"}, // 0.02%
			{9791.21119003024, "CUP_arifle_CZ805_B"}, // 0.02%
			{9792.9343772373, "CUP_arifle_CZ805_A1"}, // 0.02%
			{9794.65756444436, "Exile_Weapon_CZ550"}, // 0.02%
			{9796.38075165142, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.02%
			{9798.10393885848, "Exile_Weapon_AK74_GL"}, // 0.02%
			{9799.82712606553, "CUP_arifle_Sa58P"}, // 0.02%
			{9801.55031327259, "hlc_rifle_akm"}, // 0.02%
			{9803.27350047965, "hlc_rifle_akmgl"}, // 0.02%
			{9804.99668768671, "hlc_rifle_ak74"}, // 0.02%
			{9806.71987489377, "hlc_rifle_honeybadger"}, // 0.02%
			{9808.44306210083, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9810.10242755948, "CUP_srifle_L129A1_HG"}, // 0.02%
			{9811.76179301813, "CUP_srifle_L129A1"}, // 0.02%
			{9813.38484028938, "TRYK_H_ghillie_over_green"}, // 0.02%
			{9815.00788756063, "TRYK_H_ghillie_top_headless_green"}, // 0.02%
			{9816.63093483188, "TRYK_H_ghillie_top_green"}, // 0.02%
			{9818.25398210314, "TRYK_H_ghillie_top"}, // 0.02%
			{9819.87702937439, "TRYK_H_ghillie_over"}, // 0.02%
			{9821.50007664564, "TRYK_H_ghillie_top_headless"}, // 0.02%
			{9823.11945739444, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.02%
			{9824.73883814324, "130Rnd_338_Mag"}, // 0.02%
			{9826.35821889204, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.02%
			{9827.9394965644, "hlc_30Rnd_545x39_EP_AK"}, // 0.02%
			{9829.52077423676, "hlc_45Rnd_545x39_t_rpk"}, // 0.02%
			{9831.10205190912, "hlc_30rnd_556x45_EPR"}, // 0.02%
			{9832.68332958148, "hlc_30rnd_556x45_SPR"}, // 0.02%
			{9834.15227605307, "H_Beret_Colonel"}, // 0.01%
			{9835.62122252466, "H_Beret_grn"}, // 0.01%
			{9837.09016899625, "H_Beret_02"}, // 0.01%
			{9838.55911546784, "H_Beret_ocamo"}, // 0.01%
			{9840.02806193943, "H_Beret_brn_SF"}, // 0.01%
			{9841.49700841102, "H_Beret_grn_SF"}, // 0.01%
			{9842.96595488261, "H_Beret_blk"}, // 0.01%
			{9844.43490135421, "H_Beret_red"}, // 0.01%
			{9845.89190517155, "H_HelmetO_ocamo"}, // 0.01%
			{9847.3489089889, "H_HelmetLeaderO_ocamo"}, // 0.01%
			{9848.80591280625, "H_HelmetCrew_B"}, // 0.01%
			{9850.2629166236, "H_PilotHelmetFighter_B"}, // 0.01%
			{9851.71992044095, "H_PilotHelmetFighter_O"}, // 0.01%
			{9853.1769242583, "H_PilotHelmetFighter_I"}, // 0.01%
			{9854.63392807565, "H_PilotHelmetHeli_B"}, // 0.01%
			{9856.090931893, "H_PilotHelmetHeli_O"}, // 0.01%
			{9857.54793571035, "H_PilotHelmetHeli_I"}, // 0.01%
			{9859.0049395277, "H_HelmetO_ghex_F"}, // 0.01%
			{9860.46194334505, "H_HelmetB_camo"}, // 0.01%
			{9861.9189471624, "H_CrewHelmetHeli_O"}, // 0.01%
			{9863.37595097975, "H_CrewHelmetHeli_I"}, // 0.01%
			{9864.8329547971, "H_HelmetO_oucamo"}, // 0.01%
			{9866.28995861445, "H_HelmetLeaderO_oucamo"}, // 0.01%
			{9867.7469624318, "H_HelmetSpecO_ocamo"}, // 0.01%
			{9869.20396624915, "H_HelmetSpecO_blk"}, // 0.01%
			{9870.6609700665, "H_HelmetCrew_I"}, // 0.01%
			{9872.11797388385, "H_CrewHelmetHeli_B"}, // 0.01%
			{9873.5749777012, "H_HelmetCrew_O"}, // 0.01%
			{9874.99812760632, "CUP_30Rnd_556x45_Stanag"}, // 0.01%
			{9876.42127751145, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.01%
			{9877.84442741657, "30Rnd_762x39_Mag_Green_F"}, // 0.01%
			{9879.26757732169, "30Rnd_762x39_Mag_F"}, // 0.01%
			{9880.69072722682, "Exile_Magazine_10Rnd_9x39"}, // 0.01%
			{9882.11387713194, "Exile_Magazine_10Rnd_762x54"}, // 0.01%
			{9883.53702703707, "Exile_Magazine_5Rnd_22LR"}, // 0.01%
			{9884.96017694219, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.01%
			{9886.38332684731, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.01%
			{9887.80647675244, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.01%
			{9889.22962665756, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.01%
			{9890.65277656269, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.01%
			{9892.07592646781, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.01%
			{9893.49907637293, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.01%
			{9894.92222627806, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.01%
			{9896.34537618318, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.01%
			{9897.7685260883, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.01%
			{9899.19167599343, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.01%
			{9900.61482589855, "30Rnd_65x39_caseless_mag"}, // 0.01%
			{9902.03797580368, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.01%
			{9903.4611257088, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.01%
			{9904.88427561392, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.01%
			{9906.30742551905, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.01%
			{9907.73057542417, "30Rnd_762x39_Mag_Tracer_F"}, // 0.01%
			{9909.1537253293, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.01%
			{9910.57687523442, "Exile_Magazine_20Rnd_9x39"}, // 0.01%
			{9912.00002513954, "30Rnd_545x39_Mag_F"}, // 0.01%
			{9913.42317504467, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.01%
			{9914.84632494979, "20Rnd_762x51_Mag"}, // 0.01%
			{9916.26947485491, "150Rnd_556x45_Drum_Mag_F"}, // 0.01%
			{9917.69262476004, "100Rnd_580x42_Mag_Tracer_F"}, // 0.01%
			{9919.11577466516, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.01%
			{9920.53892457029, "CUP_30Rnd_545x39_AK_M"}, // 0.01%
			{9921.96207447541, "30Rnd_762x39_AK47_M"}, // 0.01%
			{9923.38522438053, "CUP_30Rnd_556x45_G36"}, // 0.01%
			{9924.80837428566, "30Rnd_580x42_Mag_Tracer_F"}, // 0.01%
			{9926.23152419078, "30Rnd_580x42_Mag_F"}, // 0.01%
			{9927.65467409591, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.01%
			{9929.07782400103, "30Rnd_545x39_Mag_Tracer_F"}, // 0.01%
			{9930.50097390615, "30Rnd_545x39_Mag_Green_F"}, // 0.01%
			{9931.92412381128, "100Rnd_580x42_Mag_F"}, // 0.01%
			{9933.3472737164, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.01%
			{9934.72582348205, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.01%
			{9936.10437324769, "CUP_arifle_Sa58RIS1"}, // 0.01%
			{9937.48292301334, "arifle_MX_khk_F"}, // 0.01%
			{9938.86147277899, "arifle_MX_GL_khk_F"}, // 0.01%
			{9940.24002254463, "arifle_MXC_khk_F"}, // 0.01%
			{9941.61857231028, "CUP_arifle_Sa58RIS2_gl"}, // 0.01%
			{9942.96098032177, "CUP_5Rnd_127x99_as50_M"}, // 0.01%
			{9944.30338833326, "CUP_10Rnd_127x99_M107"}, // 0.01%
			{9945.64579634475, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.01%
			{9946.98820435624, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.01%
			{9948.25322649413, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.01%
			{9949.51824863202, "CUP_30Rnd_Sa58_M"}, // 0.01%
			{9950.78327076991, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.01%
			{9952.0482929078, "Exile_Magazine_10Rnd_303"}, // 0.01%
			{9953.31331504568, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.01%
			{9954.51954609062, "CUP_arifle_Sa58RIS2_camo"}, // 0.01%
			{9955.72577713556, "CUP_arifle_Sa58P_des"}, // 0.01%
			{9956.9320081805, "CUP_arifle_M4A1_camo"}, // 0.01%
			{9958.03890255116, "CUP_30Rnd_762x39_AK47_M"}, // 0.01%
			{9959.14579692181, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.01%
			{9960.25269129246, "CUP_20Rnd_556x45_Stanag"}, // 0.01%
			{9961.2866036167, "Exile_Weapon_SVDCamo"}, // 0.01%
			{9962.32051594093, "arifle_MXM_F"}, // 0.01%
			{9963.35442826517, "CUP_arifle_M4A3_desert"}, // 0.01%
			{9964.3883405894, "Exile_Weapon_SVD"}, // 0.01%
			{9965.42225291364, "Exile_Weapon_VSSVintorez"}, // 0.01%
			{9966.37101951705, "CUP_100Rnd_556x45_BetaCMag"}, // 0.01%
			{9967.29957635402, "CUP_srifle_AWM_wdl"}, // 0.01%
			{9968.22813319098, "CUP_srifle_AWM_des"}, // 0.01%
			{9969.08972679451, "arifle_CTAR_GL_blk_F"}, // 0.01%
			{9969.95132039804, "arifle_CTAR_ghex_F"}, // 0.01%
			{9970.81291400157, "arifle_CTAR_hex_F"}, // 0.01%
			{9971.6745076051, "arifle_CTAR_blk_F"}, // 0.01%
			{9972.53610120863, "CUP_arifle_AKS_Gold"}, // 0.01%
			{9973.39769481216, "arifle_ARX_ghex_F"}, // 0.01%
			{9974.25928841569, "arifle_ARX_blk_F"}, // 0.01%
			{9975.12088201922, "arifle_CTARS_ghex_F"}, // 0.01%
			{9975.98247562274, "Exile_Weapon_DMR"}, // 0.01%
			{9976.84406922627, "arifle_ARX_hex_F"}, // 0.01%
			{9977.7056628298, "arifle_CTARS_hex_F"}, // 0.01%
			{9978.56725643333, "arifle_CTARS_blk_F"}, // 0.01%
			{9979.42885003686, "arifle_SPAR_01_snd_F"}, // 0.01%
			{9980.29044364039, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.01%
			{9981.15203724392, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.01%
			{9982.01363084745, "arifle_SPAR_01_khk_F"}, // 0.01%
			{9982.87522445098, "CUP_arifle_AK107_kobra"}, // 0.01%
			{9983.73681805451, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9984.59841165804, "arifle_SPAR_03_blk_F"}, // 0.01%
			{9985.46000526157, "CUP_arifle_L85A2_NG"}, // 0.01%
			{9986.3215988651, "arifle_SPAR_02_khk_F"}, // 0.01%
			{9987.18319246863, "arifle_SPAR_02_blk_F"}, // 0.01%
			{9988.04478607216, "arifle_SPAR_01_GL_snd_F"}, // 0.01%
			{9988.90637967569, "arifle_SPAR_01_GL_khk_F"}, // 0.01%
			{9989.76797327921, "arifle_SPAR_01_GL_blk_F"}, // 0.01%
			{9990.62956688274, "arifle_SPAR_02_snd_F"}, // 0.01%
			{9991.49116048627, "CUP_arifle_AK107_GL_pso"}, // 0.01%
			{9992.29660529317, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{9993.08724412935, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9993.77651901217, "arifle_TRG21_GL_F"}, // 0.01%
			{9994.46579389499, "arifle_Mk20_GL_F"}, // 0.01%
			{9995.15506877782, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9995.84434366064, "arifle_MXM_Black_F"}, // 0.01%
			{9996.38130686524, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.01%
			{9996.89826302735, "arifle_MX_GL_Black_F"}, // 0.01%
			{9997.41521918947, "arifle_MX_Black_F"}, // 0.01%
			{9997.93217535159, "arifle_MXC_Black_F"}, // 0.01%
			{9998.4491315137, "arifle_Mk20C_F"}, // 0.01%
			{9998.96608767582, "arifle_MXM_khk_F"}, // 0.01%
			{9999.48304383794, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{10000.0000000001, "Exile_Weapon_AKS_Gold"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Bandage
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

	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_ZipTie
	  Exile_Weapon_Makarov
	  B_FieldPack_oucamo
	  B_FieldPack_ghex_F
	  CUP_muzzle_snds_MicroUzi
	  CUP_hgun_Phantom
	  optic_Yorris
	  Exile_Item_ZipTie
	  Rangefinder
	  Exile_Item_Heatpack
	  U_IG_Guerilla2_3
	  ItemCompass
	  U_B_T_Soldier_SL_F
	  B_FieldPack_oucamo
	  B_Carryall_ocamo
	  U_IG_Guerilla1_1
	  H_HelmetB_black
	  Exile_Item_ZipTie
	  ItemMap
	  U_O_T_Soldier_F
	  CUP_acc_CZ_M3X
	  B_Kitbag_cbr
	  U_IG_Guerilla1_1
	  11Rnd_45ACP_Mag
	  CUP_8Rnd_9x18_MakarovSD_M
	  B_ViperLightHarness_base_F
	  CUP_muzzle_snds_M9
	  B_HuntingBackpack
	  B_AssaultPack_tna_F
	  11Rnd_45ACP_Mag
	  Exile_Item_Bandage
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_Heatpack
	  H_BandMask_demon
	  U_IG_Guerilla1_1
	  B_Kitbag_sgg
	  H_HelmetB_desert
	  B_OutdoorPack_blk
	  Exile_Item_ZipTie
	  B_Bergen_mcamo_F
	  H_MilCap_mcamo
	  B_OutdoorPack_tan
	  U_IG_Guerilla2_3
	  B_ViperLightHarness_hex_F
	  U_B_HeliPilotCoveralls
	  Exile_Magazine_6Rnd_45ACP
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_Heatpack
	  hgun_ACPC2_F
	  B_Kitbag_mcamo
	  O_NVGoggles_urb_F
	  B_ViperLightHarness_oli_F
	  U_IG_Guerilla2_2
	  ItemCompass
	  U_O_SpecopsUniform_ocamo
	  CUP_muzzle_snds_M9
	  B_AssaultPack_sgg
	  muzzle_snds_acp
	  Exile_Item_ZipTie
	  hgun_Pistol_Signal_F
	  B_OutdoorPack_blk
	  U_IG_Guerilla2_2
	  Exile_Weapon_Makarov
	  U_I_HeliPilotCoveralls
	  B_Kitbag_cbr
	  U_I_pilotCoveralls
	  HandGrenade
	  H_MilCap_mcamo
	  B_AssaultPack_khk
	  U_I_Wetsuit
	  U_IG_Guerilla3_1
	  U_O_GhillieSuit
	  Exile_Item_ZipTie
	  B_Carryall_khk
	  H_HelmetSpecO_ghex_F
	  B_AssaultPack_dgtl
	  B_OutdoorPack_blu
	  CUP_20Rnd_B_765x17_Ball_M
	  B_FieldPack_oucamo
	  B_OutdoorPack_blk
	  B_AssaultPack_cbr
	  ItemCompass
	  hgun_Pistol_01_F
	  O_NVGoggles_ghex_F
	  B_Bergen_blk
	  U_B_CTRG_1
	  ItemWatch
	  6Rnd_GreenSignal_F
	  H_HelmetB_sand
	  Exile_Headgear_GasMask
	  Exile_Item_Vishpirin
	  U_B_CTRG_2
	  MiniGrenade
	  B_AssaultPack_tna_F
	  B_FieldPack_cbr
	  B_Carryall_oucamo
	  B_Kitbag_mcamo
	  CUP_acc_Glock17_Flashlight
	  ItemCompass
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

	  srifle_DMR_06_olive_F
	  Exile_Item_ZipTie
	  IEDUrbanSmall_Remote_Mag
	  CUP_srifle_CZ750
	  U_B_T_Sniper_F
	  srifle_DMR_06_olive_F
	  B_Carryall_khk
	  B_Carryall_cbr
	  Exile_Item_ZipTie
	  srifle_DMR_03_F
	  srifle_EBR_F
	  srifle_DMR_04_F
	  SatchelCharge_Remote_Mag
	  muzzle_snds_338_black
	  CUP_srifle_CZ750
	  srifle_DMR_02_sniper_F
	  U_O_GhillieSuit
	  U_I_FullGhillie_lsh
	  Exile_Item_ZipTie
	  CUP_srifle_SVD
	  H_MilCap_ocamo
	  srifle_DMR_06_camo_F
	  srifle_DMR_02_F
	  U_O_GhillieSuit
	  Exile_Item_Vishpirin
	  APERSBoundingMine_Range_Mag
	  srifle_DMR_03_F
	  srifle_DMR_03_woodland_F
	  CUP_srifle_SVD
	  srifle_DMR_05_blk_F
	  Exile_Item_Vishpirin
	  20Rnd_762x51_Mag
	  srifle_DMR_06_olive_F
	  srifle_GM6_ghex_F
	  H_BandMask_demon
	  U_O_GhillieSuit
	  srifle_DMR_02_camo_F
	  H_Beret_gen_F
	  srifle_GM6_ghex_F
	  Exile_Item_ZipTie
	  srifle_DMR_03_tan_F
	  optic_LRPS_ghex_F
	  srifle_DMR_01_F
	  srifle_DMR_04_F
	  srifle_DMR_06_olive_F
	  H_HelmetIA
	  srifle_DMR_07_hex_F
	  srifle_DMR_06_olive_F
	  HandGrenade
	  Exile_Item_Heatpack
	  srifle_DMR_02_camo_F
	  B_Bergen_Base_F
	  srifle_DMR_03_khaki_F
	  U_I_GhillieSuit
	  SatchelCharge_Remote_Mag
	  muzzle_snds_B_khk_F
	  srifle_DMR_03_woodland_F
	  srifle_DMR_05_hex_F
	  DemoCharge_Remote_Mag
	  Exile_Item_ZipTie
	  IEDLandSmall_Remote_Mag
	  srifle_GM6_ghex_F
	  U_I_GhillieSuit
	  IEDUrbanSmall_Remote_Mag
	  MMG_02_camo_F
	  srifle_DMR_02_F
	  MMG_02_sand_F
	  DemoCharge_Remote_Mag
	  optic_LRPS_tna_F
	  CUP_srifle_M40A3
	  CUP_launch_M136
	  srifle_DMR_03_tan_F
	  muzzle_snds_B
	  Exile_Item_ZipTie
	  U_B_GhillieSuit
	  CUP_10Rnd_762x54_SVD_M
	  CUP_srifle_M24_des
	  srifle_EBR_F
	  B_Carryall_oli
	  CUP_srifle_CZ750
	  srifle_GM6_ghex_F
	  srifle_DMR_05_blk_F
	  SatchelCharge_Remote_Mag
	  B_Carryall_oucamo
	  B_Bergen_mcamo_F
	  U_B_T_Soldier_F
	  srifle_DMR_05_tan_F
	  srifle_LRR_F
	  H_HelmetB_light
	  U_I_FullGhillie_lsh
	  optic_LRPS
	  MiniGrenade
	  H_MilCap_blue
	  srifle_GM6_F
	  srifle_DMR_05_blk_F
	  CUP_srifle_G22_des
	  srifle_DMR_02_sniper_F
	  srifle_DMR_02_sniper_F
	  srifle_DMR_06_camo_F
	  SatchelCharge_Remote_Mag
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

	  srifle_LRR_F
	  Exile_Item_PlasticBottleEmpty
	  CUP_M136_M
	  5Rnd_127x108_Mag
	  srifle_DMR_05_blk_F
	  CUP_6Rnd_HE_M203
	  CUP_5Rnd_127x99_as50_M
	  SatchelCharge_Remote_Mag
	  Exile_Item_PlasticBottleEmpty
	  TRYK_U_B_PCUHsW
	  Exile_Item_Can_Empty
	  optic_AMS_snd
	  Exile_Item_Magazine02
	  APERSBoundingMine_Range_Mag
	  5Rnd_127x108_Mag
	  TRYK_U_B_PCUHsW3nh
	  optic_KHS_hex
	  V_TacVest_gen_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  CUP_arifle_FNFAL_railed
	  10Rnd_93x64_DMR_05_Mag
	  TRYK_V_ArmorVest_Winter
	  optic_KHS_hex
	  TRYK_U_B_Snow_CombatUniform
	  hlc_20rnd_762x51_b_G3
	  CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
	  TRYK_U_B_PCUHsW4
	  Exile_Item_Magazine03
	  muzzle_snds_B
	  TRYK_U_B_Snow_CombatUniform
	  5Rnd_127x108_APDS_Mag
	  CUP_6Rnd_HE_M203
	  Exile_Item_Can_Empty
	  V_PlateCarrierSpec_blk
	  optic_AMS_snd
	  TRYK_B_Coyotebackpack_WH
	  V_TacChestrig_grn_F
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  CUP_arifle_Mk17_STD_FG
	  Exile_Item_Can_Empty
	  optic_AMS_snd
	  hlc_20Rnd_762x51_B_fal
	  U_O_T_Sniper_F
	  TRYK_U_B_PCUHsW6
	  srifle_LRR_F
	  Exile_Item_Magazine04
	  TRYK_H_Helmet_Winter
	  TRYK_B_Coyotebackpack_WH
	  APERSTripMine_Wire_Mag
	  hlc_20Rnd_762x51_B_M14
	  optic_KHS_old
	  Exile_Item_Magazine02
	  CUP_srifle_L129A1
	  TRYK_U_B_PCUHsW4
	  muzzle_snds_93mmg
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  CUP_OG7_M
	  Exile_Item_Can_Empty
	  optic_KHS_old
	  CUP_M136_M
	  CUP_srifle_M110
	  TRYK_V_ArmorVest_Winter
	  srifle_DMR_02_camo_F
	  Exile_Item_ToiletPaper
	  CUP_arifle_Mk17_STD_FG
	  muzzle_snds_338_green
	  CUP_srifle_L129A1_HG
	  srifle_LRR_tna_F
	  APERSMine_Range_Mag
	  Exile_Item_PlasticBottleEmpty
	  optic_KHS_tan
	  V_PlateCarrier2_tna_F
	  muzzle_snds_338_sand
	  Exile_Item_Can_Empty
	  130Rnd_338_Mag
	  5Rnd_127x108_Mag
	  Exile_Item_Can_Empty
	  muzzle_snds_B
	  muzzle_snds_338_black
	  srifle_GM6_F
	  hlc_rifle_psg1
	  hlc_20rnd_762x51_T_G3
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
	  Exile_Item_PlasticBottleEmpty
	  U_O_T_FullGhillie_tna_F
	  V_TacVest_gen_F
	  hlc_rifle_SLR
	  Exile_Item_Magazine04
	  CUP_arifle_Mk17_STD_EGLM
	  Exile_Item_ToiletPaper
	  muzzle_snds_B
	  U_O_GhillieSuit
	  TRYK_Winter_pack
	  TRYK_Winter_pack
	  CUP_6Rnd_HE_M203
	  Exile_Item_Magazine02
	*/
	class SuperCrate
	{
		count = 161;
		half = 8262.67617416513;
		halfIndex = 80;
		sum = 10000;
		items[] = 
		{
			{612.244897959184, "Exile_Item_PlasticBottleEmpty"}, // 6.12%
			{1224.48979591837, "Exile_Item_ToiletPaper"}, // 6.12%
			{1836.73469387755, "Exile_Item_Can_Empty"}, // 6.12%
			{1989.79591836735, "Exile_Item_Magazine01"}, // 1.53%
			{2142.85714285714, "Exile_Item_Magazine03"}, // 1.53%
			{2295.91836734694, "Exile_Item_Magazine04"}, // 1.53%
			{2448.97959183673, "Exile_Item_Magazine02"}, // 1.53%
			{2585.03401360544, "muzzle_snds_338_black"}, // 1.36%
			{2721.08843537415, "muzzle_snds_338_green"}, // 1.36%
			{2857.14285714286, "muzzle_snds_338_sand"}, // 1.36%
			{2993.19727891156, "muzzle_snds_93mmg"}, // 1.36%
			{3129.25170068027, "muzzle_snds_93mmg_tan"}, // 1.36%
			{3265.30612244898, "muzzle_snds_B"}, // 1.36%
			{3387.75510204082, "DemoCharge_Remote_Mag"}, // 1.22%
			{3504.37317784257, "optic_AMS"}, // 1.17%
			{3620.99125364431, "optic_KHS_blk"}, // 1.17%
			{3737.60932944606, "optic_AMS_snd"}, // 1.17%
			{3854.22740524781, "optic_KHS_hex"}, // 1.17%
			{3970.84548104956, "optic_KHS_old"}, // 1.17%
			{4087.46355685131, "optic_KHS_tan"}, // 1.17%
			{4204.08163265306, "optic_AMS_khk"}, // 1.17%
			{4302.83080974325, "srifle_LRR_tna_F"}, // 0.99%
			{4401.57998683344, "srifle_LRR_F"}, // 0.99%
			{4499.53917050691, "CUP_6Rnd_HE_M203"}, // 0.98%
			{4597.49835418038, "10Rnd_93x64_DMR_05_Mag"}, // 0.98%
			{4691.68987694333, "TRYK_U_B_PCUHsW"}, // 0.94%
			{4785.88139970628, "TRYK_U_B_PCUHsW4"}, // 0.94%
			{4880.07292246924, "TRYK_U_B_PCUHsW5"}, // 0.94%
			{4974.26444523219, "TRYK_U_B_PCUHsW3nh"}, // 0.94%
			{5068.45596799514, "TRYK_Winter_pack"}, // 0.94%
			{5162.64749075809, "TRYK_B_Coyotebackpack_WH"}, // 0.94%
			{5256.83901352104, "TRYK_V_ArmorVest_Winter"}, // 0.94%
			{5351.03053628399, "TRYK_H_Helmet_Winter"}, // 0.94%
			{5445.22205904695, "TRYK_H_Helmet_Winter_2"}, // 0.94%
			{5539.4135818099, "TRYK_U_B_Snow_CombatUniform"}, // 0.94%
			{5633.60510457285, "TRYK_U_B_Snowt"}, // 0.94%
			{5727.7966273358, "TRYK_U_B_PCUHsW6"}, // 0.94%
			{5821.98815009875, "TRYK_U_B_PCUHsW2"}, // 0.94%
			{5903.62080315998, "10Rnd_338_Mag"}, // 0.82%
			{5985.2534562212, "SatchelCharge_Remote_Mag"}, // 0.82%
			{6066.88610928242, "CUP_5Rnd_127x99_as50_M"}, // 0.82%
			{6148.51876234365, "150Rnd_93x64_Mag"}, // 0.82%
			{6230.15141540487, "130Rnd_338_Mag"}, // 0.82%
			{6311.7840684661, "5Rnd_127x108_APDS_Mag"}, // 0.82%
			{6393.41672152732, "5Rnd_127x108_Mag"}, // 0.82%
			{6461.44393241167, "U_I_GhillieSuit"}, // 0.68%
			{6529.47114329603, "U_O_GhillieSuit"}, // 0.68%
			{6597.49835418038, "U_B_GhillieSuit"}, // 0.68%
			{6663.33113890718, "srifle_GM6_F"}, // 0.66%
			{6729.16392363397, "srifle_GM6_ghex_F"}, // 0.66%
			{6794.47004608295, "CUP_M136_M"}, // 0.65%
			{6859.77616853193, "CUP_OG7_M"}, // 0.65%
			{6920.76608173859, "hlc_50rnd_762x51_M_G3"}, // 0.61%
			{6977.45542414222, "HLC_Rifle_g3ka4_GL"}, // 0.57%
			{7034.14476654585, "CUP_arifle_FNFAL"}, // 0.57%
			{7090.44314796738, "hlc_20rnd_762x51_b_G3"}, // 0.56%
			{7143.10937574881, "srifle_DMR_05_tan_F"}, // 0.53%
			{7195.77560353025, "srifle_DMR_05_hex_F"}, // 0.53%
			{7248.44183131168, "srifle_DMR_05_blk_F"}, // 0.53%
			{7300.04868094809, "hlc_20rnd_762x51_T_G3"}, // 0.52%
			{7349.17944436457, "hlc_rifle_m14sopmod"}, // 0.49%
			{7398.31020778105, "hlc_rifle_g3ka4"}, // 0.49%
			{7447.44097119752, "hlc_rifle_STG58F"}, // 0.49%
			{7494.3562890488, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.47%
			{7541.27160690008, "hlc_20Rnd_762x51_B_M14"}, // 0.47%
			{7588.18692475136, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.47%
			{7635.10224260264, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.47%
			{7682.01756045392, "hlc_20Rnd_762x51_B_fal"}, // 0.47%
			{7728.9328783052, "CUP_20Rnd_762x51_DMR"}, // 0.47%
			{7775.84819615647, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.47%
			{7822.76351400775, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.47%
			{7869.67883185903, "CUP_20Rnd_762x51_B_SCAR"}, // 0.47%
			{7915.76178116779, "srifle_DMR_04_Tan_F"}, // 0.46%
			{7961.84473047654, "srifle_DMR_04_F"}, // 0.46%
			{8007.19620439945, "hlc_rifle_M14"}, // 0.45%
			{8052.54767832235, "hlc_rifle_m14dmr"}, // 0.45%
			{8097.89915224525, "hlc_rifle_SLRchopmod"}, // 0.45%
			{8139.47133667458, "hlc_rifle_FAL5061"}, // 0.42%
			{8181.04352110391, "hlc_rifle_psg1"}, // 0.42%
			{8221.85984763452, "APERSTripMine_Wire_Mag"}, // 0.41%
			{8262.67617416513, "IEDUrbanSmall_Remote_Mag"}, // 0.41%
			{8303.49250069574, "IEDLandSmall_Remote_Mag"}, // 0.41%
			{8344.30882722635, "APERSMine_Range_Mag"}, // 0.41%
			{8385.12515375697, "APERSBoundingMine_Range_Mag"}, // 0.41%
			{8424.62482459304, "srifle_DMR_02_sniper_F"}, // 0.39%
			{8464.12449542912, "srifle_DMR_02_camo_F"}, // 0.39%
			{8503.62416626519, "srifle_DMR_02_F"}, // 0.39%
			{8541.41706120095, "CUP_arifle_FNFAL_railed"}, // 0.38%
			{8579.2099561367, "CUP_srifle_M14"}, // 0.38%
			{8617.00285107245, "hlc_rifle_falosw"}, // 0.38%
			{8654.7957460082, "CUP_arifle_Mk17_STD_EGLM"}, // 0.38%
			{8692.32800028922, "hlc_50rnd_762x51_M_FAL"}, // 0.38%
			{8729.86025457025, "hlc_50Rnd_762x51_B_M14"}, // 0.38%
			{8767.39250885127, "CUP_20Rnd_762x51_B_M110"}, // 0.38%
			{8804.92476313229, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.38%
			{8842.45701741332, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.38%
			{8879.98927169434, "CUP_20Rnd_762x51_L129_M"}, // 0.38%
			{8910.22358764294, "CUP_arifle_Mk17_STD_FG"}, // 0.30%
			{8940.45790359154, "hlc_rifle_c1A1"}, // 0.30%
			{8970.69221954014, "hlc_rifle_SLR"}, // 0.30%
			{9000.92653548874, "CUP_arifle_Mk20"}, // 0.30%
			{9030.93854029066, "U_O_T_FullGhillie_tna_F"}, // 0.30%
			{9060.95054509258, "U_B_T_Sniper_F"}, // 0.30%
			{9090.96254989451, "U_B_T_Soldier_F"}, // 0.30%
			{9120.97455469643, "U_B_T_FullGhillie_tna_F"}, // 0.30%
			{9150.98655949835, "U_O_T_Sniper_F"}, // 0.30%
			{9179.93430881084, "srifle_GM6_F"}, // 0.29%
			{9206.38933526587, "CUP_srifle_M110"}, // 0.26%
			{9228.10014725024, "srifle_DMR_02_camo_F"}, // 0.22%
			{9249.8109592346, "CUP_srifle_M107_Base"}, // 0.22%
			{9271.52177121897, "srifle_DMR_02_F"}, // 0.22%
			{9291.27160663701, "srifle_DMR_03_F"}, // 0.20%
			{9311.02144205505, "srifle_DMR_06_camo_F"}, // 0.20%
			{9330.77127747309, "srifle_DMR_03_woodland_F"}, // 0.20%
			{9350.52111289113, "srifle_DMR_03_tan_F"}, // 0.20%
			{9370.27094830917, "srifle_DMR_03_khaki_F"}, // 0.20%
			{9390.02078372721, "srifle_DMR_06_olive_F"}, // 0.20%
			{9409.45712969416, "V_PlateCarrierGL_blk"}, // 0.19%
			{9428.89347566112, "V_PlateCarrierGL_mtp"}, // 0.19%
			{9448.32982162808, "V_PlateCarrierIAGL_dgtl"}, // 0.19%
			{9467.76616759504, "V_PlateCarrierIAGL_oli"}, // 0.19%
			{9487.202513562, "V_PlateCarrierSpec_blk"}, // 0.19%
			{9506.63885952896, "V_PlateCarrierSpec_mtp"}, // 0.19%
			{9526.07520549592, "V_PlateCarrierSpec_rgr"}, // 0.19%
			{9545.51155146287, "V_TacChestrig_grn_F"}, // 0.19%
			{9564.94789742983, "V_TacChestrig_oli_F"}, // 0.19%
			{9584.38424339679, "V_TacChestrig_cbr_F"}, // 0.19%
			{9603.82058936375, "V_PlateCarrierGL_rgr"}, // 0.19%
			{9623.25693533071, "V_PlateCarrier2_tna_F"}, // 0.19%
			{9642.69328129767, "V_PlateCarrier1_tna_F"}, // 0.19%
			{9662.12962726463, "V_PlateCarrier2_rgr_noflag_F"}, // 0.19%
			{9681.56597323158, "V_TacVest_gen_F"}, // 0.19%
			{9701.00231919854, "V_BandollierB_ghex_F"}, // 0.19%
			{9720.4386651655, "V_HarnessOGL_ghex_F"}, // 0.19%
			{9739.87501113246, "V_PlateCarrier1_rgr_noflag_F"}, // 0.19%
			{9759.31135709942, "V_HarnessO_ghex_F"}, // 0.19%
			{9778.74770306638, "V_PlateCarrierGL_tna_F"}, // 0.19%
			{9798.18404903333, "V_PlateCarrierSpec_tna_F"}, // 0.19%
			{9817.08049650121, "CUP_srifle_L129A1"}, // 0.19%
			{9835.97694396909, "CUP_srifle_L129A1_HG"}, // 0.19%
			{9850.45081862533, "srifle_DMR_05_tan_F"}, // 0.14%
			{9864.92469328158, "srifle_DMR_05_blk_F"}, // 0.14%
			{9879.39856793782, "srifle_DMR_05_hex_F"}, // 0.14%
			{9890.97766766282, "CUP_glaunch_M32"}, // 0.12%
			{9899.66199245657, "MMG_02_black_F"}, // 0.09%
			{9908.34631725031, "MMG_02_camo_F"}, // 0.09%
			{9917.03064204406, "MMG_02_sand_F"}, // 0.09%
			{9925.71496683781, "CUP_srifle_AS50"}, // 0.09%
			{9931.71736779819, "U_O_FullGhillie_ard"}, // 0.06%
			{9937.71976875857, "U_B_FullGhillie_lsh"}, // 0.06%
			{9943.72216971896, "U_B_FullGhillie_sard"}, // 0.06%
			{9949.72457067934, "U_O_FullGhillie_lsh"}, // 0.06%
			{9955.72697163973, "U_O_FullGhillie_sard"}, // 0.06%
			{9961.72937260011, "U_I_FullGhillie_ard"}, // 0.06%
			{9967.73177356049, "U_I_FullGhillie_lsh"}, // 0.06%
			{9973.73417452088, "U_I_FullGhillie_sard"}, // 0.06%
			{9979.73657548126, "U_B_FullGhillie_ard"}, // 0.06%
			{9985.52612534376, "MMG_01_tan_F"}, // 0.06%
			{9991.31567520626, "MMG_01_hex_F"}, // 0.06%
			{9995.65783760313, "CUP_launch_M136"}, // 0.04%
			{10000, "CUP_launch_RPG7V"} // 0.04%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_arifle_FNFAL_railed
	  ItemCompass
	  TRYK_V_ArmorVest_HRT2_B
	  30Rnd_556x45_Stanag
	  CUP_srifle_VSSVintorez
	  CUP_srifle_M14
	  CUP_optic_PechenegScope
	  optic_MRCO
	  ItemCompass
	  TRYK_V_ArmorVest_Winter
	  TRYK_U_B_PCUHsW4
	  hlc_rifle_M14
	  optic_DMS
	  Exile_Magazine_30Rnd_545x39_AK_Green
	  CUP_optic_CompM4
	  TRYK_V_PlateCarrier_wood
	  hlc_rifle_FAL5061
	  10Rnd_50BW_Mag_F
	  ItemCompass
	  TRYK_B_Coyotebackpack
	  150Rnd_556x45_Drum_Mag_F
	  hlc_50Rnd_762x51_B_M14
	  U_B_CombatUniform_mcam_tshirt
	  B_Carryall_ocamo
	  CUP_srifle_M40A3
	  TRYK_V_PlateCarrier_coyo_L
	  hlc_30Rnd_545x39_B_AK
	  20Rnd_650x39_Cased_Mag_F
	  TRYK_B_Coyotebackpack_BLK
	  hlc_rifle_m14sopmod
	  CUP_srifle_M24_wdl
	  optic_DMS_ghex_F
	  CUP_srifle_M14
	  TRYK_U_B_PCUHsW3nh
	  TRYK_U_B_ARO1_GR_CombatUniform
	  hlc_rifle_psg1
	  U_O_T_Soldier_F
	  TRYK_U_B_GRTAN_CombatUniform
	  TRYK_U_B_PCUHsW2
	  ItemCompass
	  hlc_rifle_rpk
	  CUP_acc_ANPEQ_2_camo
	  TRYK_B_Carryall_JSDF
	  hlc_rifle_m14dmr
	  arifle_AK12_GL_F
	  CUP_arifle_Sa58P_des
	  muzzle_snds_58_blk_F
	  CUP_arifle_FNFAL_railed
	  CUP_optic_SB_11_4x20_PM
	  U_B_CTRG_Soldier_2_F
	  U_B_T_Soldier_AR_F
	  CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M
	  CUP_optic_Elcan
	  V_PlateCarrierIAGL_dgtl
	  optic_LRPS
	  CUP_arifle_AK107_kobra
	  CUP_10Rnd_762x54_SVD_M
	  hlc_20rnd_762x51_b_G3
	  TRYK_Winter_pack
	  ItemCompass
	  TRYK_V_IOTV_BLK
	  TRYK_U_B_PCUHsW2
	  V_PlateCarrierSpec_rgr
	  TRYK_V_ArmorVest_HRT2_B
	  TRYK_U_B_NATO_UCP_GRY_CombatUniform
	  U_B_CombatUniform_mcam_vest
	  TRYK_U_B_BLK_tan_Rollup_CombatUniform
	  TRYK_V_ArmorVest_Winter
	  CUP_acc_ANPEQ_2_desert
	  hlc_50rnd_762x51_M_G3
	  arifle_Mk20_GL_F
	  APERSMine_Range_Mag
	  Exile_Magazine_20Rnd_762x51_DMR_Green
	  ItemCompass
	  V_PlateCarrier1_blk
	  TRYK_U_B_TANOCP_R_CombatUniformTshirt
	  O_NVGoggles_hex_F
	  TRYK_U_B_PCUHsW5
	  optic_Holosight_blk_F
	  CUP_optic_CompM4
	  TRYK_U_B_PCUHsW2
	  hlc_rifle_STG58F
	  optic_SOS
	  TRYK_V_tacv1LC_SRF_BK
	  hlc_30Rnd_545x39_EP_AK
	  srifle_DMR_06_olive_F
	  CUP_arifle_CZ805_A1
	  TRYK_B_Coyotebackpack_WH
	  CUP_30Rnd_762x39_AK47_M
	  Exile_Weapon_SVDCamo
	  U_B_Wetsuit
	  optic_AMS
	  arifle_MX_F
	  TRYK_U_B_Snow_CombatUniform
	  hlc_rifle_STG58F
	  TRYK_V_tacv1LP_BK
	  srifle_DMR_01_F
	  CUP_srifle_SVD
	  CUP_arifle_Mk17_STD_EGLM
	  optic_LRPS
	*/
	class ChopperCrash
	{
		count = 619;
		half = 8104.02837891742;
		halfIndex = 309;
		sum = 10000;
		items[] = 
		{
			{261.917234154007, "ItemCompass"}, // 2.62%
			{392.875851231011, "Rangefinder"}, // 1.31%
			{502.404876422687, "TRYK_B_Coyotebackpack_WH"}, // 1.10%
			{611.933901614363, "TRYK_Winter_pack"}, // 1.10%
			{702.295347397495, "DemoCharge_Remote_Mag"}, // 0.90%
			{777.596552216772, "CUP_optic_ACOG"}, // 0.75%
			{847.105356665336, "TRYK_H_Helmet_Winter_2"}, // 0.70%
			{916.614161113899, "TRYK_Winter_pack"}, // 0.70%
			{986.122965562463, "TRYK_B_Coyotebackpack_WH"}, // 0.70%
			{1055.63177001103, "TRYK_V_ArmorVest_Winter"}, // 0.70%
			{1125.14057445959, "TRYK_H_Helmet_Winter"}, // 0.70%
			{1194.64937890815, "TRYK_U_B_Snow_CombatUniform"}, // 0.70%
			{1264.15818335672, "TRYK_U_B_Snowt"}, // 0.70%
			{1333.66698780528, "TRYK_U_B_PCUHsW"}, // 0.70%
			{1403.17579225384, "TRYK_U_B_PCUHsW2"}, // 0.70%
			{1472.68459670241, "TRYK_U_B_PCUHsW3nh"}, // 0.70%
			{1542.19340115097, "TRYK_U_B_PCUHsW4"}, // 0.70%
			{1611.70220559953, "TRYK_U_B_PCUHsW5"}, // 0.70%
			{1681.2110100481, "TRYK_U_B_PCUHsW6"}, // 0.70%
			{1741.45197390352, "SatchelCharge_Remote_Mag"}, // 0.60%
			{1796.21648649936, "TRYK_B_Carryall_wh"}, // 0.55%
			{1850.9809990952, "TRYK_B_Carryall_JSDF"}, // 0.55%
			{1905.74551169103, "TRYK_B_Coyotebackpack"}, // 0.55%
			{1960.51002428687, "TRYK_B_Carryall_wood"}, // 0.55%
			{2015.27453688271, "TRYK_B_Coyotebackpack_BLK"}, // 0.55%
			{2070.03904947855, "TRYK_B_Carryall_blk"}, // 0.55%
			{2124.80356207439, "TRYK_B_Coyotebackpack_OD"}, // 0.55%
			{2175.00436528724, "optic_AMS"}, // 0.50%
			{2225.20516850009, "CUP_muzzle_snds_M14"}, // 0.50%
			{2275.40597171294, "CUP_optic_SB_11_4x20_PM"}, // 0.50%
			{2325.60677492579, "optic_KHS_blk"}, // 0.50%
			{2375.80757813864, "optic_KHS_hex"}, // 0.50%
			{2426.00838135149, "optic_LRPS"}, // 0.50%
			{2476.20918456435, "optic_DMS"}, // 0.50%
			{2526.4099877772, "optic_SOS"}, // 0.50%
			{2576.61079099005, "muzzle_snds_B"}, // 0.50%
			{2626.8115942029, "CUP_optic_LeupoldM3LR"}, // 0.50%
			{2671.81921087649, "hlc_50rnd_762x51_M_G3"}, // 0.45%
			{2713.72596834113, "NVGoggles_tna_F"}, // 0.42%
			{2755.63272580577, "O_NVGoggles_ghex_F"}, // 0.42%
			{2797.53948327041, "O_NVGoggles_hex_F"}, // 0.42%
			{2839.44624073506, "NVGoggles"}, // 0.42%
			{2881.3529981997, "O_NVGoggles_urb_F"}, // 0.42%
			{2923.18700087707, "HLC_Rifle_g3ka4_GL"}, // 0.42%
			{2965.02100355445, "CUP_arifle_FNFAL"}, // 0.42%
			{3006.56649586853, "hlc_20rnd_762x51_b_G3"}, // 0.42%
			{3044.9751640985, "B_Carryall_ghex_F"}, // 0.38%
			{3083.38383232847, "B_Carryall_cbr"}, // 0.38%
			{3121.46720028304, "hlc_20rnd_762x51_T_G3"}, // 0.38%
			{3157.8543596588, "B_Carryall_khk"}, // 0.36%
			{3194.24151903456, "B_Carryall_oli"}, // 0.36%
			{3230.49765468828, "hlc_rifle_STG58F"}, // 0.36%
			{3266.75379034201, "hlc_rifle_m14sopmod"}, // 0.36%
			{3303.00992599574, "hlc_rifle_g3ka4"}, // 0.36%
			{3337.63116959081, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.35%
			{3372.25241318588, "hlc_20Rnd_762x51_B_M14"}, // 0.35%
			{3406.87365678095, "hlc_20Rnd_762x51_B_fal"}, // 0.35%
			{3441.49490037602, "CUP_20Rnd_762x51_B_SCAR"}, // 0.35%
			{3476.11614397109, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.35%
			{3510.73738756616, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.35%
			{3545.35863116123, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.35%
			{3579.9798747563, "CUP_20Rnd_762x51_DMR"}, // 0.35%
			{3614.60111835137, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.35%
			{3648.06832049327, "hlc_rifle_M14"}, // 0.33%
			{3681.53552263517, "hlc_rifle_m14dmr"}, // 0.33%
			{3715.00272477707, "hlc_rifle_SLRchopmod"}, // 0.33%
			{3745.68099340715, "hlc_rifle_psg1"}, // 0.31%
			{3776.35926203722, "hlc_rifle_FAL5061"}, // 0.31%
			{3806.68189485036, "B_Carryall_ocamo"}, // 0.30%
			{3837.00452766349, "B_Carryall_oucamo"}, // 0.30%
			{3867.32716047662, "B_Carryall_mcamo"}, // 0.30%
			{3897.44764240433, "V_PlateCarrier2_rgr"}, // 0.30%
			{3927.56812433204, "V_PlateCarrierSpec_rgr"}, // 0.30%
			{3957.68860625975, "V_PlateCarrierIAGL_dgtl"}, // 0.30%
			{3987.80908818746, "V_PlateCarrierIA2_dgtl"}, // 0.30%
			{4017.92957011517, "V_PlateCarrierIA1_dgtl"}, // 0.30%
			{4048.05005204288, "U_O_GhillieSuit"}, // 0.30%
			{4078.1705339706, "U_I_GhillieSuit"}, // 0.30%
			{4108.29101589831, "V_PlateCarrier1_blk"}, // 0.30%
			{4138.41149782602, "V_PlateCarrier1_rgr"}, // 0.30%
			{4168.53197975373, "V_PlateCarrier3_rgr"}, // 0.30%
			{4198.65246168144, "U_B_GhillieSuit"}, // 0.30%
			{4228.77294360915, "V_PlateCarrierGL_rgr"}, // 0.30%
			{4258.89342553686, "APERSMine_Range_Mag"}, // 0.30%
			{4289.01390746457, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{4319.13438939228, "APERSTripMine_Wire_Mag"}, // 0.30%
			{4349.25487131999, "APERSBoundingMine_Range_Mag"}, // 0.30%
			{4379.3753532477, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{4407.26468836595, "CUP_arifle_FNFAL_railed"}, // 0.28%
			{4435.15402348421, "CUP_srifle_M14"}, // 0.28%
			{4463.04335860246, "hlc_rifle_falosw"}, // 0.28%
			{4490.93269372071, "CUP_arifle_Mk17_STD_EGLM"}, // 0.28%
			{4518.62968859676, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.28%
			{4546.32668347282, "CUP_20Rnd_762x51_L129_M"}, // 0.28%
			{4574.02367834887, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.28%
			{4601.72067322493, "hlc_50Rnd_762x51_B_M14"}, // 0.28%
			{4629.41766810099, "hlc_50rnd_762x51_M_FAL"}, // 0.28%
			{4657.11466297704, "CUP_20Rnd_762x51_B_M110"}, // 0.28%
			{4682.47927933722, "TRYK_V_ArmorVest_Winter"}, // 0.25%
			{4707.57968094365, "CUP_muzzle_snds_M110"}, // 0.25%
			{4731.26994762836, "20Rnd_650x39_Cased_Mag_F"}, // 0.24%
			{4754.8718177956, "acc_flashlight"}, // 0.24%
			{4777.43397654295, "CUP_10Rnd_762x54_SVD_M"}, // 0.23%
			{4799.9961352903, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.23%
			{4822.55829403765, "CUP_5Rnd_762x51_M24"}, // 0.23%
			{4845.12045278499, "CUP_srifle_SVD_des"}, // 0.23%
			{4867.4319208796, "CUP_arifle_Mk20"}, // 0.22%
			{4889.7433889742, "CUP_arifle_Mk17_STD_FG"}, // 0.22%
			{4912.0548570688, "hlc_rifle_SLR"}, // 0.22%
			{4934.3663251634, "hlc_rifle_c1A1"}, // 0.22%
			{4956.56036447855, "TRYK_V_PlateCarrier_wood"}, // 0.22%
			{4978.40941872663, "srifle_EBR_F"}, // 0.22%
			{5000.25847297471, "srifle_DMR_01_F"}, // 0.22%
			{5021.6925237847, "20Rnd_762x51_Mag"}, // 0.21%
			{5041.99846665731, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.20%
			{5062.28687417338, "CUP_srifle_SVD"}, // 0.20%
			{5082.10298070477, "U_B_T_Soldier_AR_F"}, // 0.20%
			{5101.91908723616, "U_O_T_Officer_F"}, // 0.20%
			{5121.73519376755, "U_O_T_Soldier_F"}, // 0.20%
			{5141.55130029894, "U_B_GEN_Commander_F"}, // 0.20%
			{5161.36740683033, "U_B_T_Soldier_SL_F"}, // 0.20%
			{5181.18351336172, "U_B_CTRG_Soldier_urb_2_F"}, // 0.20%
			{5200.99961989311, "U_B_GEN_Soldier_F"}, // 0.20%
			{5220.81572642449, "U_B_CombatUniform_mcam_worn"}, // 0.20%
			{5240.63183295588, "U_B_CombatUniform_mcam_vest"}, // 0.20%
			{5260.44793948727, "U_B_CombatUniform_mcam_tshirt"}, // 0.20%
			{5280.26404601866, "U_B_CombatUniform_mcam"}, // 0.20%
			{5300.08015255005, "U_B_CTRG_3"}, // 0.20%
			{5319.89625908144, "U_B_CTRG_2"}, // 0.20%
			{5339.71236561283, "U_B_CTRG_1"}, // 0.20%
			{5359.52847214422, "U_B_CTRG_Soldier_2_F"}, // 0.20%
			{5379.34457867561, "U_B_CTRG_Soldier_3_F"}, // 0.20%
			{5399.16068520699, "U_B_CTRG_Soldier_urb_1_F"}, // 0.20%
			{5418.97679173838, "U_B_CTRG_Soldier_F"}, // 0.20%
			{5438.79289826977, "U_B_CTRG_Soldier_urb_3_F"}, // 0.20%
			{5458.31543285255, "CUP_srifle_M110"}, // 0.20%
			{5477.82351700262, "CUP_srifle_M24_wdl"}, // 0.20%
			{5497.33160115269, "CUP_srifle_M40A3"}, // 0.20%
			{5516.83968530276, "CUP_srifle_M24_des"}, // 0.20%
			{5536.01752023801, "10Rnd_762x54_Mag"}, // 0.19%
			{5554.06724723589, "CUP_5Rnd_762x67_G22"}, // 0.18%
			{5570.9888662964, "CUP_10Rnd_762x51_CZ750"}, // 0.17%
			{5587.91048535691, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.17%
			{5604.7689640478, "optic_Arco"}, // 0.17%
			{5621.62744273868, "muzzle_snds_M"}, // 0.17%
			{5638.48592142956, "muzzle_snds_H"}, // 0.17%
			{5655.34440012045, "muzzle_snds_H_khk_F"}, // 0.17%
			{5672.20287881133, "optic_Hamr_khk_F"}, // 0.17%
			{5689.06135750221, "muzzle_snds_H_snd_F"}, // 0.17%
			{5705.9198361931, "muzzle_snds_58_blk_F"}, // 0.17%
			{5722.77831488398, "muzzle_snds_m_khk_F"}, // 0.17%
			{5739.63679357486, "muzzle_snds_m_snd_F"}, // 0.17%
			{5756.49527226575, "muzzle_snds_58_wdm_F"}, // 0.17%
			{5773.35375095663, "muzzle_snds_65_TI_blk_F"}, // 0.17%
			{5790.21222964751, "muzzle_snds_65_TI_hex_F"}, // 0.17%
			{5807.0707083384, "muzzle_snds_65_TI_ghex_F"}, // 0.17%
			{5823.92918702928, "muzzle_snds_H_MG_blk_F"}, // 0.17%
			{5840.78766572016, "optic_Hamr"}, // 0.17%
			{5857.64614441105, "optic_Arco_ghex_F"}, // 0.17%
			{5874.50462310193, "optic_Arco_blk_F"}, // 0.17%
			{5891.36310179281, "muzzle_snds_H_MG_khk_F"}, // 0.17%
			{5908.2215804837, "optic_Holosight"}, // 0.17%
			{5925.08005917458, "optic_MRCO"}, // 0.17%
			{5941.93853786546, "CUP_optic_RCO"}, // 0.17%
			{5958.79701655634, "CUP_muzzle_snds_XM8"}, // 0.17%
			{5975.65549524723, "CUP_optic_PSO_1"}, // 0.17%
			{5992.51397393811, "CUP_optic_PSO_3"}, // 0.17%
			{6009.37245262899, "CUP_optic_Kobra"}, // 0.17%
			{6026.23093131988, "CUP_muzzle_Bizon"}, // 0.17%
			{6043.08941001076, "CUP_muzzle_PB6P9"}, // 0.17%
			{6059.94788870164, "CUP_muzzle_PBS4"}, // 0.17%
			{6076.80636739253, "CUP_optic_PechenegScope"}, // 0.17%
			{6093.66484608341, "CUP_optic_HoloBlack"}, // 0.17%
			{6110.52332477429, "CUP_optic_HoloDesert"}, // 0.17%
			{6127.38180346518, "CUP_optic_SB_11_4x20_PM"}, // 0.17%
			{6144.24028215606, "CUP_optic_AN_PVS_4"}, // 0.17%
			{6161.09876084694, "CUP_optic_TrijiconRx01_desert"}, // 0.17%
			{6177.95723953783, "optic_Holosight_blk_F"}, // 0.17%
			{6194.81571822871, "CUP_optic_CompM2_Desert"}, // 0.17%
			{6211.67419691959, "CUP_optic_SUSAT"}, // 0.17%
			{6228.53267561048, "CUP_optic_ACOG"}, // 0.17%
			{6245.39115430136, "optic_ERCO_snd_F"}, // 0.17%
			{6262.24963299224, "optic_ERCO_khk_F"}, // 0.17%
			{6279.10811168313, "optic_ERCO_blk_F"}, // 0.17%
			{6295.96659037401, "optic_DMS_ghex_F"}, // 0.17%
			{6312.82506906489, "optic_DMS"}, // 0.17%
			{6329.68354775578, "CUP_optic_CompM2_Black"}, // 0.17%
			{6346.54202644666, "acc_pointer_IR"}, // 0.17%
			{6363.40050513754, "optic_Holosight_khk_F"}, // 0.17%
			{6380.25898382842, "CUP_optic_CompM4"}, // 0.17%
			{6396.86954371503, "30Rnd_556x45_Stanag"}, // 0.17%
			{6413.48010360164, "30Rnd_556x45_Stanag_green"}, // 0.17%
			{6430.09066348824, "30Rnd_556x45_Stanag_red"}, // 0.17%
			{6446.70122337485, "30Rnd_65x39_caseless_green"}, // 0.17%
			{6462.55410859996, "TRYK_V_PlateCarrier_JSDF"}, // 0.16%
			{6478.40699382507, "TRYK_V_tacv1LC_OD"}, // 0.16%
			{6494.25987905018, "TRYK_V_tacv1LP_BK"}, // 0.16%
			{6510.11276427529, "TRYK_V_ArmorVest_HRT_OD"}, // 0.16%
			{6525.9656495004, "TRYK_V_ArmorVest_HRT_B"}, // 0.16%
			{6541.81853472551, "TRYK_V_PlateCarrier_POLICE"}, // 0.16%
			{6557.67141995062, "TRYK_V_tacv1_SHERIFF_BK"}, // 0.16%
			{6573.52430517573, "TRYK_V_tacv1_FBI_BK"}, // 0.16%
			{6589.37719040085, "TRYK_V_tacv1LSRF_BK"}, // 0.16%
			{6605.23007562596, "TRYK_V_tacv1LC_P_BK"}, // 0.16%
			{6621.08296085107, "TRYK_V_tacv1LC_SRF_OD"}, // 0.16%
			{6636.93584607618, "TRYK_V_PlateCarrier_oli"}, // 0.16%
			{6652.78873130129, "TRYK_V_tacv1LC_SRF_BK"}, // 0.16%
			{6668.6416165264, "TRYK_V_tacv1LC_FBI_BK"}, // 0.16%
			{6684.49450175151, "TRYK_V_PlateCarrier_coyo"}, // 0.16%
			{6700.34738697662, "TRYK_V_PlateCarrier_ACU"}, // 0.16%
			{6716.20027220173, "TRYK_V_PlateCarrier_blk_L"}, // 0.16%
			{6732.05315742685, "TRYK_V_tacv1LC_BK"}, // 0.16%
			{6747.90604265196, "TRYK_V_PlateCarrier_wood_L"}, // 0.16%
			{6763.75892787707, "TRYK_V_PlateCarrier_blk"}, // 0.16%
			{6779.61181310218, "TRYK_V_ArmorVest_HRT2_B"}, // 0.16%
			{6795.46469832729, "U_I_CombatUniform"}, // 0.16%
			{6811.3175835524, "U_I_CombatUniform_tshirt"}, // 0.16%
			{6827.17046877751, "TRYK_V_Bulletproof_BLK"}, // 0.16%
			{6843.02335400262, "TRYK_V_Bulletproof_BL"}, // 0.16%
			{6858.87623922773, "TRYK_V_IOTV_BLK"}, // 0.16%
			{6874.72912445285, "TRYK_V_ArmorVest_HRT2_OD"}, // 0.16%
			{6890.58200967796, "TRYK_V_tacv1M_BK"}, // 0.16%
			{6906.43489490307, "TRYK_V_tacv1MLC_BK"}, // 0.16%
			{6922.28778012818, "TRYK_V_tacv1"}, // 0.16%
			{6938.14066535329, "TRYK_V_tacv1_CY"}, // 0.16%
			{6953.9935505784, "TRYK_V_PlateCarrier_ACU_L"}, // 0.16%
			{6969.84643580351, "TRYK_V_tacv1_BK"}, // 0.16%
			{6985.69932102862, "U_I_pilotCoveralls"}, // 0.16%
			{7001.55220625373, "U_B_PilotCoveralls"}, // 0.16%
			{7017.40509147885, "U_O_PilotCoveralls"}, // 0.16%
			{7033.25797670396, "TRYK_V_tacv1_P_BK"}, // 0.16%
			{7049.11086192907, "TRYK_V_Bulletproof"}, // 0.16%
			{7064.96374715418, "TRYK_V_PlateCarrier_coyo_L"}, // 0.16%
			{7080.81663237929, "U_B_HeliPilotCoveralls"}, // 0.16%
			{7096.6695176044, "U_I_CombatUniform_shortsleeve"}, // 0.16%
			{7112.52240282951, "U_I_HeliPilotCoveralls"}, // 0.16%
			{7128.37528805462, "TRYK_V_tacv1LC_CY"}, // 0.16%
			{7144.01476905555, "CUP_arifle_AKM"}, // 0.16%
			{7159.65425005648, "CUP_arifle_Mk16_CQC_FG"}, // 0.16%
			{7175.2937310574, "CUP_arifle_AK107_GL"}, // 0.16%
			{7190.90019837746, "srifle_DMR_03_khaki_F"}, // 0.16%
			{7206.50666569752, "srifle_DMR_03_F"}, // 0.16%
			{7222.11313301757, "srifle_DMR_03_tan_F"}, // 0.16%
			{7237.71960033763, "CUP_srifle_VSSVintorez"}, // 0.16%
			{7253.32606765769, "srifle_DMR_06_camo_F"}, // 0.16%
			{7268.93253497775, "srifle_DMR_06_olive_F"}, // 0.16%
			{7284.5390022978, "srifle_DMR_03_woodland_F"}, // 0.16%
			{7299.59924326166, "V_PlateCarrierH_CTRG"}, // 0.15%
			{7314.65948422551, "V_PlateCarrierL_CTRG"}, // 0.15%
			{7329.43010517083, "arifle_AKS_F"}, // 0.15%
			{7344.20072611615, "CUP_arifle_Mk16_CQC"}, // 0.15%
			{7358.97134706147, "CUP_arifle_AK47"}, // 0.15%
			{7373.63675024725, "CUP_5Rnd_86x70_L115A1"}, // 0.15%
			{7388.03256881564, "hlc_75Rnd_762x39_m_rpk"}, // 0.14%
			{7402.42838738403, "hlc_45Rnd_762x39_m_rpk"}, // 0.14%
			{7416.82420595242, "29rnd_300BLK_STANAG_T"}, // 0.14%
			{7430.76887351155, "CUP_srifle_L129A1"}, // 0.14%
			{7444.71354107068, "CUP_srifle_L129A1_HG"}, // 0.14%
			{7458.61530196039, "CUP_srifle_Mk12SPR"}, // 0.14%
			{7472.5170628501, "CUP_arifle_AK74_GL"}, // 0.14%
			{7486.41882373981, "hlc_rifle_SAMR"}, // 0.14%
			{7499.90560669252, "CUP_optic_Elcan"}, // 0.13%
			{7513.39238964523, "CUP_muzzle_snds_Mk12"}, // 0.13%
			{7526.87917259793, "CUP_muzzle_snds_L85"}, // 0.13%
			{7540.36595555064, "CUP_muzzle_snds_G36_black"}, // 0.13%
			{7553.65440345992, "29rnd_300BLK_STANAG"}, // 0.13%
			{7566.94285136921, "hlc_50rnd_556x45_EPR"}, // 0.13%
			{7580.23129927849, "hlc_30Rnd_545x39_B_AK"}, // 0.13%
			{7593.49679650054, "srifle_DMR_07_ghex_F"}, // 0.13%
			{7606.76229372259, "srifle_DMR_07_hex_F"}, // 0.13%
			{7620.02779094464, "srifle_DMR_07_blk_F"}, // 0.13%
			{7633.06069177875, "hlc_rifle_vendimus"}, // 0.13%
			{7646.09359261285, "arifle_AK12_GL_F"}, // 0.13%
			{7659.12649344696, "CUP_arifle_M16A2"}, // 0.13%
			{7672.15939428106, "arifle_SPAR_03_khk_F"}, // 0.13%
			{7685.19229511517, "arifle_SPAR_03_snd_F"}, // 0.13%
			{7698.22519594928, "CUP_arifle_L86A2"}, // 0.13%
			{7711.25809678338, "CUP_arifle_G36A"}, // 0.13%
			{7724.29099761749, "CUP_arifle_G36C"}, // 0.13%
			{7737.32389845159, "CUP_arifle_XM8_Railed"}, // 0.13%
			{7750.3567992857, "arifle_AKM_FL_F"}, // 0.13%
			{7763.38970011981, "CUP_arifle_AKS74U"}, // 0.13%
			{7776.42260095391, "arifle_SPAR_01_blk_F"}, // 0.13%
			{7789.45550178802, "arifle_AK12_F"}, // 0.13%
			{7802.48840262212, "hlc_rifle_ak12"}, // 0.13%
			{7815.52130345623, "CUP_arifle_Mk16_SV"}, // 0.13%
			{7828.55420429034, "hlc_rifle_rpk"}, // 0.13%
			{7841.58710512444, "arifle_AKM_F"}, // 0.13%
			{7853.76818237462, "HLC_45rnd_762x39_T_RPK"}, // 0.12%
			{7865.9492596248, "hlc_30rnd_556x45_SOST"}, // 0.12%
			{7878.13033687497, "hlc_30Rnd_762x39_b_ak"}, // 0.12%
			{7890.31141412515, "hlc_30Rnd_545x39_T_AK"}, // 0.12%
			{7902.49249137533, "20Rnd_556x45_UW_mag"}, // 0.12%
			{7914.65653215383, "arifle_MX_GL_F"}, // 0.12%
			{7926.82057293233, "hlc_rifle_samr2"}, // 0.12%
			{7938.98461371083, "CUP_arifle_CZ805_GL"}, // 0.12%
			{7951.14865448933, "CUP_arifle_M4A1"}, // 0.12%
			{7963.31269526782, "hlc_rifle_RU556"}, // 0.12%
			{7975.44174839308, "B_Bergen_dgtl_F"}, // 0.12%
			{7987.57080151833, "B_Bergen_Base_F"}, // 0.12%
			{7999.69985464358, "B_Bergen_tna_F"}, // 0.12%
			{8011.82890776883, "B_Bergen_hex_F"}, // 0.12%
			{8023.95796089409, "B_Bergen_mcamo_F"}, // 0.12%
			{8035.84762481292, "U_B_SpecopsUniform_sgg"}, // 0.12%
			{8047.55247530296, "CUP_srifle_CZ750"}, // 0.12%
			{8058.84765602586, "arifle_MXC_F"}, // 0.11%
			{8070.14283674875, "hlc_rifle_RU5562"}, // 0.11%
			{8081.43801747164, "hlc_rifle_bcmjack"}, // 0.11%
			{8092.73319819453, "hlc_rifle_Bushmaster300"}, // 0.11%
			{8104.02837891742, "hlc_rifle_Colt727_GL"}, // 0.11%
			{8115.3094582911, "7Rnd_408_Mag"}, // 0.11%
			{8126.59053766477, "5Rnd_127x108_Mag"}, // 0.11%
			{8137.66424425584, "hlc_30rnd_556x45_SPR"}, // 0.11%
			{8148.73795084691, "hlc_30rnd_556x45_EPR"}, // 0.11%
			{8159.81165743798, "hlc_45Rnd_545x39_t_rpk"}, // 0.11%
			{8170.88536402905, "hlc_30Rnd_545x39_EP_AK"}, // 0.11%
			{8181.31168469634, "Exile_Weapon_LeeEnfield"}, // 0.10%
			{8191.73800536362, "CUP_arifle_AK74"}, // 0.10%
			{8201.88220912166, "CUP_srifle_G22_des"}, // 0.10%
			{8211.84854505362, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.10%
			{8221.81488098559, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.10%
			{8231.78121691755, "CUP_30Rnd_545x39_AK_M"}, // 0.10%
			{8241.74755284951, "30Rnd_545x39_Mag_F"}, // 0.10%
			{8251.71388878148, "30Rnd_762x39_Mag_Tracer_F"}, // 0.10%
			{8261.68022471344, "30Rnd_762x39_Mag_F"}, // 0.10%
			{8271.64656064541, "Exile_Magazine_20Rnd_9x39"}, // 0.10%
			{8281.61289657737, "Exile_Magazine_10Rnd_9x39"}, // 0.10%
			{8291.57923250933, "Exile_Magazine_10Rnd_762x54"}, // 0.10%
			{8301.5455684413, "Exile_Magazine_5Rnd_22LR"}, // 0.10%
			{8311.51190437326, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.10%
			{8321.47824030523, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.10%
			{8331.44457623719, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.10%
			{8341.41091216915, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.10%
			{8351.37724810112, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.10%
			{8361.34358403308, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.10%
			{8371.30991996504, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.10%
			{8381.27625589701, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.10%
			{8391.24259182897, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.10%
			{8401.20892776094, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.10%
			{8411.1752636929, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.10%
			{8421.14159962486, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.10%
			{8431.10793555683, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
			{8441.07427148879, "30Rnd_65x39_caseless_mag"}, // 0.10%
			{8451.04060742075, "30Rnd_762x39_Mag_Green_F"}, // 0.10%
			{8461.00694335272, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.10%
			{8470.97327928468, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.10%
			{8480.93961521665, "30Rnd_762x39_AK47_M"}, // 0.10%
			{8490.90595114861, "20Rnd_762x51_Mag"}, // 0.10%
			{8500.87228708057, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.10%
			{8510.83862301254, "CUP_30Rnd_556x45_Stanag"}, // 0.10%
			{8520.8049589445, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.10%
			{8530.77129487647, "150Rnd_556x45_Drum_Mag_F"}, // 0.10%
			{8540.73763080843, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.10%
			{8550.70396674039, "100Rnd_580x42_Mag_Tracer_F"}, // 0.10%
			{8560.67030267236, "30Rnd_580x42_Mag_Tracer_F"}, // 0.10%
			{8570.63663860432, "30Rnd_580x42_Mag_F"}, // 0.10%
			{8580.60297453628, "CUP_30Rnd_556x45_G36"}, // 0.10%
			{8590.56931046825, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.10%
			{8600.53564640021, "30Rnd_545x39_Mag_Tracer_F"}, // 0.10%
			{8610.50198233218, "30Rnd_545x39_Mag_Green_F"}, // 0.10%
			{8620.46831826414, "100Rnd_580x42_Mag_F"}, // 0.10%
			{8630.02577887582, "hlc_rifle_ak47"}, // 0.10%
			{8639.58323948749, "arifle_MX_F"}, // 0.10%
			{8648.67621516378, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.09%
			{8657.76919084008, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.09%
			{8666.86216651637, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.09%
			{8675.95514219266, "TRYK_U_B_MARPAT_Wood"}, // 0.09%
			{8684.9800056916, "5Rnd_127x108_APDS_Mag"}, // 0.09%
			{8693.83897096445, "Exile_Magazine_10Rnd_303"}, // 0.09%
			{8702.69793623731, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.09%
			{8711.55690151017, "CUP_30Rnd_Sa58_M"}, // 0.09%
			{8720.41586678303, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.09%
			{8729.27483205588, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.09%
			{8737.96343261195, "Exile_Weapon_AK74"}, // 0.09%
			{8746.65203316802, "Exile_Weapon_AK74_GL"}, // 0.09%
			{8755.34063372409, "CUP_arifle_L85A2_GL"}, // 0.09%
			{8764.02923428016, "Exile_Weapon_AK107_GL"}, // 0.09%
			{8772.71783483623, "Exile_Weapon_AK107"}, // 0.09%
			{8781.4064353923, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.09%
			{8790.09503594837, "CUP_arifle_Mk16_STD_EGLM"}, // 0.09%
			{8798.78363650444, "CUP_arifle_CZ805_A1"}, // 0.09%
			{8807.47223706051, "CUP_arifle_CZ805_B"}, // 0.09%
			{8816.16083761658, "CUP_arifle_AK74M"}, // 0.09%
			{8824.84943817265, "Exile_Weapon_AK47"}, // 0.09%
			{8833.53803872872, "CUP_arifle_AK107"}, // 0.09%
			{8842.22663928479, "Exile_Weapon_CZ550"}, // 0.09%
			{8850.91523984086, "hlc_rifle_honeybadger"}, // 0.09%
			{8859.60384039693, "hlc_rifle_akmgl"}, // 0.09%
			{8868.292440953, "CUP_arifle_Sa58P"}, // 0.09%
			{8876.98104150907, "hlc_rifle_akm"}, // 0.09%
			{8885.66964206514, "hlc_rifle_ak74"}, // 0.09%
			{8894.09888141058, "CUP_acc_ANPEQ_2_grey"}, // 0.08%
			{8902.52812075603, "CUP_acc_ANPEQ_2_desert"}, // 0.08%
			{8910.95736010147, "CUP_acc_ANPEQ_2_camo"}, // 0.08%
			{8919.38659944691, "optic_NVS"}, // 0.08%
			{8927.31304205946, "U_O_OfficerUniform_ocamo"}, // 0.08%
			{8935.23948467202, "U_O_V_Soldier_Viper_hex_F"}, // 0.08%
			{8943.16592728458, "U_O_V_Soldier_Viper_F"}, // 0.08%
			{8951.09236989713, "U_I_OfficerUniform"}, // 0.08%
			{8959.01881250969, "U_B_Wetsuit"}, // 0.08%
			{8966.94525512224, "U_O_Wetsuit"}, // 0.08%
			{8974.8716977348, "U_I_Wetsuit"}, // 0.08%
			{8982.79814034735, "U_O_CombatUniform_ocamo"}, // 0.08%
			{8990.72458295991, "U_O_CombatUniform_oucamo"}, // 0.08%
			{8998.65102557246, "U_O_SpecopsUniform_blk"}, // 0.08%
			{9006.57746818502, "U_O_SpecopsUniform_ocamo"}, // 0.08%
			{9014.32906279877, "CUP_20Rnd_556x45_Stanag"}, // 0.08%
			{9022.08065741252, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.08%
			{9029.83225202626, "CUP_30Rnd_762x39_AK47_M"}, // 0.08%
			{9036.78313247112, "CUP_arifle_Sa58RIS1"}, // 0.07%
			{9043.73401291598, "CUP_arifle_Sa58RIS2_gl"}, // 0.07%
			{9050.68489336083, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.07%
			{9057.63577380569, "arifle_MX_khk_F"}, // 0.07%
			{9064.58665425054, "arifle_MX_GL_khk_F"}, // 0.07%
			{9071.5375346954, "arifle_MXC_khk_F"}, // 0.07%
			{9078.35726645262, "TRYK_U_B_MARPAT_Desert_Tshirt"}, // 0.07%
			{9085.17699820984, "TRYK_U_B_MARPAT_Desert2_Tshirt"}, // 0.07%
			{9091.99672996705, "TRYK_U_B_MARPAT_Desert2"}, // 0.07%
			{9098.81646172427, "TRYK_U_B_MARPAT_Desert"}, // 0.07%
			{9105.63619348149, "TRYK_U_B_MARPAT_Wood_Tshirt"}, // 0.07%
			{9112.28041743613, "CUP_100Rnd_556x45_BetaCMag"}, // 0.07%
			{9118.36243782538, "CUP_arifle_M4A1_camo"}, // 0.06%
			{9124.44445821463, "CUP_arifle_Sa58RIS2_camo"}, // 0.06%
			{9130.52647860388, "CUP_arifle_Sa58P_des"}, // 0.06%
			{9136.20958840156, "TRYK_U_B_wood_CombatUniform"}, // 0.06%
			{9141.89269819924, "TRYK_U_B_woodR_CombatUniformTshirt"}, // 0.06%
			{9147.57580799692, "TRYK_U_B_NATO_OCPD_CombatUniform"}, // 0.06%
			{9153.2589177946, "TRYK_U_B_NATO_OCP_BLK_R_CombatUniform"}, // 0.06%
			{9158.94202759228, "TRYK_U_B_NATO_OCP_BLK_CombatUniform"}, // 0.06%
			{9164.62513738996, "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform"}, // 0.06%
			{9170.30824718764, "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform"}, // 0.06%
			{9175.99135698533, "TRYK_U_B_NATO_UCP_R_CombatUniform"}, // 0.06%
			{9181.67446678301, "TRYK_U_B_NATO_UCP_CombatUniform"}, // 0.06%
			{9187.35757658069, "TRYK_U_B_wood3c_CombatUniform"}, // 0.06%
			{9193.04068637837, "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform"}, // 0.06%
			{9198.72379617605, "TRYK_U_B_NATO_UCP_GRY_CombatUniform"}, // 0.06%
			{9204.40690597373, "TRYK_U_B_3CD_Ranger_BDU"}, // 0.06%
			{9210.09001577141, "TRYK_U_B_BLK_OD_Rollup_CombatUniform"}, // 0.06%
			{9215.77312556909, "TRYK_U_B_BLK_tan_Rollup_CombatUniform"}, // 0.06%
			{9221.45623536677, "TRYK_U_B_wh_blk_Rollup_CombatUniform"}, // 0.06%
			{9227.13934516445, "TRYK_U_B_wh_OD_Rollup_CombatUniform"}, // 0.06%
			{9232.82245496214, "TRYK_U_B_wh_tan_Rollup_CombatUniform"}, // 0.06%
			{9238.50556475982, "TRYK_U_B_wood3c_CombatUniformTshirt"}, // 0.06%
			{9244.1886745575, "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt"}, // 0.06%
			{9249.87178435518, "TRYK_U_B_woodtan_CombatUniform"}, // 0.06%
			{9255.55489415286, "TRYK_U_B_woodtanR_CombatUniformTshirt"}, // 0.06%
			{9261.23800395054, "TRYK_U_B_JSDF_CombatUniform"}, // 0.06%
			{9266.92111374822, "TRYK_U_B_JSDF_CombatUniformTshirt"}, // 0.06%
			{9272.6042235459, "TRYK_U_B_3CD_Delta_BDU"}, // 0.06%
			{9278.28733334358, "TRYK_U_B_3CD_Ranger_BDUTshirt"}, // 0.06%
			{9283.97044314126, "TRYK_U_B_3CD_Delta_BDUTshirt"}, // 0.06%
			{9289.65355293895, "TRYK_U_B_NATO_OCPD_R_CombatUniform"}, // 0.06%
			{9295.33666273663, "TRYK_U_B_NATO_OCP_R_CombatUniform"}, // 0.06%
			{9301.01977253431, "TRYK_U_B_GRTANR_CombatUniformTshirt"}, // 0.06%
			{9306.70288233199, "TRYK_U_B_AOR2_BLK_CombatUniform"}, // 0.06%
			{9312.38599212967, "TRYK_U_B_AOR2_BLK_R_CombatUniform"}, // 0.06%
			{9318.06910192735, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.06%
			{9323.75221172503, "TRYK_U_B_AOR2_OD_R_CombatUniform"}, // 0.06%
			{9329.43532152271, "TRYK_U_B_AOR2_GRY_CombatUniform"}, // 0.06%
			{9335.11843132039, "TRYK_U_B_AOR2_GRY_R_CombatUniform"}, // 0.06%
			{9340.80154111808, "TRYK_U_B_Snow_CombatUniform"}, // 0.06%
			{9346.48465091576, "TRYK_U_B_Snowt"}, // 0.06%
			{9352.16776071344, "TRYK_T_camo_tan"}, // 0.06%
			{9357.85087051112, "TRYK_T_camo_3c"}, // 0.06%
			{9363.5339803088, "TRYK_T_camo_Wood"}, // 0.06%
			{9369.21709010648, "TRYK_T_camo_wood_marpat"}, // 0.06%
			{9374.90019990416, "TRYK_T_camo_Desert_marpat"}, // 0.06%
			{9380.58330970184, "TRYK_T_camo_3c_BG"}, // 0.06%
			{9386.26641949952, "TRYK_T_camo_Wood_BG"}, // 0.06%
			{9391.9495292972, "TRYK_T_camo_wood_marpat_BG"}, // 0.06%
			{9397.63263909489, "TRYK_T_camo_desert_marpat_BG"}, // 0.06%
			{9403.31574889257, "TRYK_U_B_ARO2R_CombatUniform"}, // 0.06%
			{9408.99885869025, "TRYK_U_B_ARO2_CombatUniform"}, // 0.06%
			{9414.68196848793, "TRYK_U_B_ARO1_CBR_R_CombatUniform"}, // 0.06%
			{9420.36507828561, "TRYK_U_B_ARO1_CBR_CombatUniform"}, // 0.06%
			{9426.04818808329, "TRYK_U_B_AOR1_Rollup_CombatUniform"}, // 0.06%
			{9431.73129788097, "TRYK_U_B_AOR2_Rollup_CombatUniform"}, // 0.06%
			{9437.41440767865, "TRYK_U_B_MTP_CombatUniform"}, // 0.06%
			{9443.09751747633, "TRYK_U_B_MTP_R_CombatUniform"}, // 0.06%
			{9448.78062727401, "TRYK_U_B_MTP_BLK_CombatUniform"}, // 0.06%
			{9454.4637370717, "TRYK_U_B_MTP_BLK_R_CombatUniform"}, // 0.06%
			{9460.14684686938, "TRYK_U_B_Woodland"}, // 0.06%
			{9465.82995666706, "TRYK_U_B_Woodland_Tshirt"}, // 0.06%
			{9471.51306646474, "TRYK_U_B_NATO_OCP_CombatUniform"}, // 0.06%
			{9477.19617626242, "TRYK_U_B_WDL_GRY_CombatUniform"}, // 0.06%
			{9482.8792860601, "TRYK_U_B_ARO1_GR_CombatUniform"}, // 0.06%
			{9488.56239585778, "TRYK_U_B_ARO1_GR_R_CombatUniform"}, // 0.06%
			{9494.24550565546, "TRYK_U_B_ARO1_GRY_CombatUniform"}, // 0.06%
			{9499.92861545314, "TRYK_U_B_ARO1_GRY_R_CombatUniform"}, // 0.06%
			{9505.61172525082, "TRYK_U_B_ARO1_CombatUniform"}, // 0.06%
			{9511.29483504851, "TRYK_U_B_ARO1R_CombatUniform"}, // 0.06%
			{9516.97794484619, "TRYK_U_B_ARO1_BLK_CombatUniform"}, // 0.06%
			{9522.66105464387, "TRYK_U_B_ARO1_BLK_R_CombatUniform"}, // 0.06%
			{9528.34416444155, "TRYK_U_B_WDL_GRY_R_CombatUniform"}, // 0.06%
			{9534.02727423923, "TRYK_U_B_GRTAN_CombatUniform"}, // 0.06%
			{9539.71038403691, "TRYK_U_B_BLKOCP_R_CombatUniformTshirt"}, // 0.06%
			{9545.39349383459, "TRYK_U_B_ODTAN_CombatUniform"}, // 0.06%
			{9551.07660363227, "TRYK_HRP_UCP"}, // 0.06%
			{9556.75971342995, "TRYK_HRP_USMC"}, // 0.06%
			{9562.44282322764, "TRYK_HRP_khk"}, // 0.06%
			{9568.12593302532, "TRYK_U_B_OD_OD_CombatUniform"}, // 0.06%
			{9573.809042823, "TRYK_U_B_ODTANR_CombatUniformTshirt"}, // 0.06%
			{9579.49215262068, "TRYK_U_B_TANTAN_CombatUniform"}, // 0.06%
			{9585.17526241836, "TRYK_U_B_TANTAN_R_CombatUniform"}, // 0.06%
			{9590.85837221604, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.06%
			{9596.54148201372, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.06%
			{9602.2245918114, "TRYK_U_B_GRYOCP_CombatUniform"}, // 0.06%
			{9607.90770160908, "TRYK_U_B_GRYOCP_R_CombatUniformTshirt"}, // 0.06%
			{9613.59081140676, "TRYK_U_B_TANOCP_CombatUniform"}, // 0.06%
			{9619.27392120445, "TRYK_U_B_TANOCP_R_CombatUniformTshirt"}, // 0.06%
			{9624.95703100213, "TRYK_U_B_BLKOCP_CombatUniform"}, // 0.06%
			{9630.64014079981, "TRYK_U_B_BLKTAN_CombatUniform"}, // 0.06%
			{9636.32325059749, "TRYK_U_B_BLKTANR_CombatUniformTshirt"}, // 0.06%
			{9642.00636039517, "TRYK_U_B_BLKBLK_R_CombatUniform"}, // 0.06%
			{9647.64690008201, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.06%
			{9653.28743976884, "CUP_10Rnd_127x99_M107"}, // 0.06%
			{9658.92797945568, "CUP_5Rnd_127x99_as50_M"}, // 0.06%
			{9664.56851914252, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.06%
			{9670.10537243805, "10Rnd_50BW_Mag_F"}, // 0.06%
			{9675.3185327717, "Exile_Weapon_SVDCamo"}, // 0.05%
			{9680.53169310534, "Exile_Weapon_VSSVintorez"}, // 0.05%
			{9685.74485343898, "Exile_Weapon_SVD"}, // 0.05%
			{9690.95801377262, "CUP_arifle_M4A3_desert"}, // 0.05%
			{9696.17117410626, "arifle_MXM_F"}, // 0.05%
			{9700.5154743843, "arifle_SPAR_02_snd_F"}, // 0.04%
			{9704.85977466233, "Exile_Weapon_DMR"}, // 0.04%
			{9709.20407494037, "arifle_SPAR_02_khk_F"}, // 0.04%
			{9713.5483752184, "arifle_ARX_blk_F"}, // 0.04%
			{9717.89267549644, "arifle_ARX_ghex_F"}, // 0.04%
			{9722.23697577447, "arifle_ARX_hex_F"}, // 0.04%
			{9726.58127605251, "arifle_CTAR_blk_F"}, // 0.04%
			{9730.92557633054, "arifle_CTAR_hex_F"}, // 0.04%
			{9735.26987660858, "arifle_CTAR_ghex_F"}, // 0.04%
			{9739.61417688661, "arifle_CTAR_GL_blk_F"}, // 0.04%
			{9743.95847716465, "arifle_CTARS_blk_F"}, // 0.04%
			{9748.30277744268, "arifle_CTARS_ghex_F"}, // 0.04%
			{9752.64707772072, "arifle_CTARS_hex_F"}, // 0.04%
			{9756.99137799875, "arifle_SPAR_01_khk_F"}, // 0.04%
			{9761.33567827679, "arifle_SPAR_01_snd_F"}, // 0.04%
			{9765.67997855482, "arifle_SPAR_01_GL_blk_F"}, // 0.04%
			{9770.02427883286, "arifle_SPAR_01_GL_khk_F"}, // 0.04%
			{9774.36857911089, "arifle_SPAR_01_GL_snd_F"}, // 0.04%
			{9778.71287938893, "arifle_SPAR_03_blk_F"}, // 0.04%
			{9783.05717966696, "CUP_arifle_L85A2_NG"}, // 0.04%
			{9787.401479945, "arifle_SPAR_02_blk_F"}, // 0.04%
			{9791.74578022303, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.04%
			{9796.09008050107, "CUP_arifle_AK107_GL_pso"}, // 0.04%
			{9800.4343807791, "CUP_arifle_AK107_GL_kobra"}, // 0.04%
			{9804.77868105714, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.04%
			{9809.12298133517, "CUP_arifle_AK107_kobra"}, // 0.04%
			{9813.46728161321, "CUP_arifle_AKS_Gold"}, // 0.04%
			{9817.73969039728, "srifle_GM6_F"}, // 0.04%
			{9821.6413072273, "CUP_srifle_AWM_des"}, // 0.04%
			{9825.54292405731, "CUP_srifle_AWM_wdl"}, // 0.04%
			{9829.15738188864, "CUP_6Rnd_HE_M203"}, // 0.04%
			{9832.77183971996, "10Rnd_93x64_DMR_05_Mag"}, // 0.04%
			{9836.24727994239, "arifle_Mk20_GL_F"}, // 0.03%
			{9839.72272016482, "arifle_TRG21_GL_F"}, // 0.03%
			{9843.19816038725, "arifle_MXM_Black_F"}, // 0.03%
			{9846.67360060967, "CUP_arifle_G36C_camo_holo_snds"}, // 0.03%
			{9850.08346648828, "TRYK_H_ghillie_over"}, // 0.03%
			{9853.49333236689, "TRYK_H_ghillie_top"}, // 0.03%
			{9856.9031982455, "TRYK_H_ghillie_top_headless"}, // 0.03%
			{9860.31306412411, "TRYK_H_ghillie_over_green"}, // 0.03%
			{9863.72293000271, "TRYK_H_ghillie_top_headless_green"}, // 0.03%
			{9867.13279588132, "TRYK_H_ghillie_top_green"}, // 0.03%
			{9870.51711969342, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.03%
			{9873.72142628148, "CUP_srifle_M107_Base"}, // 0.03%
			{9876.92573286953, "srifle_DMR_02_camo_F"}, // 0.03%
			{9880.13003945758, "srifle_DMR_02_F"}, // 0.03%
			{9883.14208765036, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9886.15413584313, "130Rnd_338_Mag"}, // 0.03%
			{9889.1661840359, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9892.17823222867, "5Rnd_127x108_Mag"}, // 0.03%
			{9895.19028042144, "150Rnd_93x64_Mag"}, // 0.03%
			{9898.20232861421, "10Rnd_338_Mag"}, // 0.03%
			{9901.07094594066, "V_PlateCarrierGL_blk"}, // 0.03%
			{9903.93956326711, "V_PlateCarrierSpec_rgr"}, // 0.03%
			{9906.80818059356, "V_PlateCarrierGL_rgr"}, // 0.03%
			{9909.67679792001, "V_PlateCarrierGL_mtp"}, // 0.03%
			{9912.54541524646, "V_PlateCarrier1_rgr_noflag_F"}, // 0.03%
			{9915.41403257291, "V_TacVest_gen_F"}, // 0.03%
			{9918.28264989935, "V_BandollierB_ghex_F"}, // 0.03%
			{9921.1512672258, "V_HarnessOGL_ghex_F"}, // 0.03%
			{9924.01988455225, "V_HarnessO_ghex_F"}, // 0.03%
			{9926.8885018787, "V_PlateCarrierGL_tna_F"}, // 0.03%
			{9929.75711920515, "V_PlateCarrierSpec_tna_F"}, // 0.03%
			{9932.6257365316, "V_PlateCarrier2_rgr_noflag_F"}, // 0.03%
			{9935.49435385805, "V_PlateCarrierIAGL_oli"}, // 0.03%
			{9938.3629711845, "V_PlateCarrier1_tna_F"}, // 0.03%
			{9941.23158851094, "V_TacChestrig_cbr_F"}, // 0.03%
			{9944.10020583739, "V_TacChestrig_oli_F"}, // 0.03%
			{9946.96882316384, "V_TacChestrig_grn_F"}, // 0.03%
			{9949.83744049029, "V_PlateCarrierSpec_mtp"}, // 0.03%
			{9952.70605781674, "V_PlateCarrierSpec_blk"}, // 0.03%
			{9955.57467514319, "V_PlateCarrier2_tna_F"}, // 0.03%
			{9958.44329246964, "V_PlateCarrierIAGL_dgtl"}, // 0.03%
			{9961.04987263646, "arifle_MXM_khk_F"}, // 0.03%
			{9963.65645280328, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.03%
			{9966.2630329701, "arifle_MX_Black_F"}, // 0.03%
			{9968.86961313692, "arifle_MX_GL_Black_F"}, // 0.03%
			{9971.47619330374, "arifle_Mk20C_F"}, // 0.03%
			{9974.08277347056, "Exile_Weapon_AKS_Gold"}, // 0.03%
			{9976.68935363738, "arifle_MXC_Black_F"}, // 0.03%
			{9979.0989921916, "CUP_M136_M"}, // 0.02%
			{9981.50863074582, "CUP_OG7_M"}, // 0.02%
			{9983.76484662055, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.02%
			{9985.90105101259, "srifle_DMR_05_tan_F"}, // 0.02%
			{9988.03725540462, "srifle_DMR_05_hex_F"}, // 0.02%
			{9990.17345979666, "srifle_DMR_05_blk_F"}, // 0.02%
			{9991.88242331029, "CUP_glaunch_M32"}, // 0.02%
			{9993.16414594551, "CUP_srifle_AS50"}, // 0.01%
			{9994.44586858073, "MMG_02_sand_F"}, // 0.01%
			{9995.72759121595, "MMG_02_camo_F"}, // 0.01%
			{9997.00931385117, "MMG_02_black_F"}, // 0.01%
			{9997.86379560799, "MMG_01_tan_F"}, // 0.01%
			{9998.7182773648, "MMG_01_hex_F"}, // 0.01%
			{9999.35913868241, "CUP_launch_M136"}, // 0.01%
			{10000, "CUP_launch_RPG7V"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  hgun_Pistol_01_F
	  Exile_Weapon_Colt1911
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Magazine03
	  CUP_smg_MP5A5
	  CUP_30Rnd_9x19_UZI
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Weapon_LeeEnfield
	  hgun_Rook40_F
	  hlc_10rnd_12g_buck_S12
	  SmokeShellBlue
	  Exile_Weapon_Colt1911
	  11Rnd_45ACP_Mag
	  hgun_ACPC2_F
	  Exile_Item_InstantCoffee
	  Exile_Item_Can_Empty
	  CUP_sgun_Saiga12K
	  CUP_smg_bizon_snds
	  Exile_Item_Magazine01
	  Exile_Magazine_8Rnd_9x18
	  hgun_ACPC2_F
	  Exile_Item_Heatpack
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_Magazine04
	  CUP_sgun_Saiga12K
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_Heatpack
	  hgun_Pistol_Signal_F
	  Exile_Item_Magazine03
	  Exile_Weapon_LeeEnfield
	  H_Cap_blk
	  hgun_Rook40_F
	  Exile_Magazine_6Rnd_45ACP
	  H_Cap_blu
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Can_Empty
	  Chemlight_blue
	  Exile_Item_Wrench
	  hlc_rifle_saiga12k
	  hgun_Rook40_F
	  Chemlight_yellow
	  H_Hat_checker
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_Magazine03
	  Exile_Weapon_M1014
	  30Rnd_9x21_Mag
	  9Rnd_45ACP_Mag
	  SmokeShellOrange
	  CUP_8Rnd_9x18_MakarovSD_M
	  CUP_smg_MP5SD6
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_SeedAstics
	  hlc_rifle_hk53
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  hlc_rifle_L1A1SLR
	  Exile_Weapon_LeeEnfield
	  CUP_smg_MP5SD6
	  hgun_Pistol_01_F
	  H_Hat_blue
	  Exile_Magazine_8Rnd_9x18
	  H_Hat_blue
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Wrench
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_Dogfood
	  ItemCompass
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  ItemWatch
	  H_Cap_oli
	  Exile_Magazine_10Rnd_303
	  hlc_rifle_saiga12k
	  hgun_Pistol_heavy_01_F
	  Exile_Weapon_Colt1911
	  Exile_Weapon_LeeEnfield
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hlc_10rnd_12g_slug_S12
	  hgun_P07_khk_F
	  SmokeShellYellow
	  Exile_Item_CamoTentKit
	  Exile_Item_EnergyDrink
	  Exile_Item_ToiletPaper
	  H_StrawHat
	  Exile_Item_InstantCoffee
	  Exile_Item_ZipTie
	  Exile_Weapon_M1014
	  Exile_Item_MountainDupe
	  Exile_Item_PlasticBottleEmpty
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hgun_Pistol_heavy_02_F
	  11Rnd_45ACP_Mag
	  9Rnd_45ACP_Mag
	  Exile_Item_Magazine02
	  hlc_10rnd_12g_buck_S12
	*/
	class BarnLoot
	{
		count = 147;
		half = 7927.51454947047;
		halfIndex = 73;
		sum = 10000;
		items[] = 
		{
			{394.736842105263, "Exile_Item_Can_Empty"}, // 3.95%
			{789.473684210526, "Exile_Item_ToiletPaper"}, // 3.95%
			{1184.21052631579, "Exile_Item_PlasticBottleEmpty"}, // 3.95%
			{1530.47091412742, "Exile_Weapon_LeeEnfield"}, // 3.46%
			{1853.64727608495, "hlc_rifle_saiga12k"}, // 3.23%
			{2084.48753462604, "CUP_sgun_Saiga12K"}, // 2.31%
			{2315.32779316713, "Exile_Weapon_M1014"}, // 2.31%
			{2484.26866386239, "hlc_10rnd_12g_buck_S12"}, // 1.69%
			{2627.21863137376, "hlc_10rnd_12g_slug_S12"}, // 1.43%
			{2757.17314729318, "Exile_Magazine_5Rnd_22LR"}, // 1.30%
			{2887.12766321261, "Exile_Magazine_10Rnd_303"}, // 1.30%
			{3017.08217913204, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.30%
			{3147.03669505147, "Exile_Magazine_8Rnd_74Slug"}, // 1.30%
			{3276.9912109709, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.30%
			{3395.07488168615, "ItemMap"}, // 1.18%
			{3510.68818272116, "hgun_P07_F"}, // 1.16%
			{3626.10831199171, "Exile_Weapon_CZ550"}, // 1.15%
			{3736.21621773934, "hgun_Rook40_F"}, // 1.10%
			{3846.32412348697, "hgun_ACPC2_F"}, // 1.10%
			{3951.58728138171, "CUP_smg_MP5SD6"}, // 1.05%
			{4052.80185628049, "Binocular"}, // 1.01%
			{4154.01643117928, "ItemWatch"}, // 1.01%
			{4255.23100607806, "ItemCompass"}, // 1.01%
			{4354.32812125093, "CUP_hgun_Phantom"}, // 0.99%
			{4453.01233177725, "Exile_Item_Magazine03"}, // 0.99%
			{4551.69654230356, "Exile_Item_Magazine02"}, // 0.99%
			{4650.38075282988, "Exile_Item_Magazine01"}, // 0.99%
			{4749.0649633562, "Exile_Item_Magazine04"}, // 0.99%
			{4839.29052726597, "hlc_rifle_hk53"}, // 0.90%
			{4924.87033043242, "10Rnd_9x21_Mag"}, // 0.86%
			{5010.45013359888, "11Rnd_45ACP_Mag"}, // 0.86%
			{5096.02993676533, "9Rnd_45ACP_Mag"}, // 0.86%
			{5181.60973993178, "Exile_Magazine_6Rnd_45ACP"}, // 0.86%
			{5267.18954309823, "Exile_Magazine_8Rnd_9x18"}, // 0.86%
			{5352.76934626469, "30Rnd_9x21_Mag"}, // 0.86%
			{5438.34914943114, "Exile_Magazine_7Rnd_45ACP"}, // 0.86%
			{5522.69462851346, "Exile_Item_Heatpack"}, // 0.84%
			{5607.04010759578, "Exile_Item_Bandage"}, // 0.84%
			{5684.63794835152, "Exile_Item_ExtensionCord"}, // 0.78%
			{5761.65977120133, "CUP_18Rnd_9x19_Phantom"}, // 0.77%
			{5838.68159405113, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.77%
			{5915.70341690094, "CUP_30Rnd_9x19_UZI"}, // 0.77%
			{5990.89138682575, "CUP_smg_bizon"}, // 0.75%
			{6066.07935675056, "CUP_smg_MP5A5"}, // 0.75%
			{6137.64949548652, "Exile_Weapon_TaurusGold"}, // 0.72%
			{6209.21963422249, "hgun_Pistol_heavy_01_F"}, // 0.72%
			{6280.78977295845, "Exile_Weapon_Taurus"}, // 0.72%
			{6352.35991169441, "hgun_Pistol_Signal_F"}, // 0.72%
			{6423.93005043037, "Exile_Weapon_Colt1911"}, // 0.72%
			{6495.50018916633, "hgun_Pistol_heavy_02_F"}, // 0.72%
			{6567.07032790229, "Exile_Weapon_Makarov"}, // 0.72%
			{6638.64046663825, "CUP_hgun_SA61"}, // 0.72%
			{6710.21060537422, "hgun_P07_khk_F"}, // 0.72%
			{6781.78074411018, "hgun_Pistol_01_F"}, // 0.72%
			{6851.0328216725, "hlc_rifle_L1A1SLR"}, // 0.69%
			{6919.49666420567, "6Rnd_45ACP_Cylinder"}, // 0.68%
			{6986.97304747152, "Exile_Item_FuelCanisterEmpty"}, // 0.67%
			{7054.44943073738, "Exile_Item_DuctTape"}, // 0.67%
			{7121.92581400324, "Exile_Item_Carwheel"}, // 0.67%
			{7187.99055745182, "CUP_hgun_Duty_M3X"}, // 0.66%
			{7248.71930239109, "Exile_Item_WaterCanisterEmpty"}, // 0.61%
			{7309.44804733036, "Exile_Item_CamoTentKit"}, // 0.61%
			{7364.50200020418, "CUP_hgun_PB6P9_snds"}, // 0.55%
			{7419.32656160769, "Exile_Item_PlasticBottleDirtyWater"}, // 0.55%
			{7471.30836797546, "hlc_20Rnd_762x51_B_fal"}, // 0.52%
			{7522.65624987533, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.51%
			{7573.26353732472, "FlareRed_F"}, // 0.51%
			{7623.87082477412, "FlareGreen_F"}, // 0.51%
			{7674.47811222351, "Chemlight_yellow"}, // 0.51%
			{7725.0853996729, "Chemlight_red"}, // 0.51%
			{7775.69268712229, "Chemlight_green"}, // 0.51%
			{7826.29997457169, "Chemlight_blue"}, // 0.51%
			{7876.90726202108, "SmokeShell"}, // 0.51%
			{7927.51454947047, "ItemRadio"}, // 0.51%
			{7978.12183691987, "SmokeShellRed"}, // 0.51%
			{8028.72912436926, "SmokeShellGreen"}, // 0.51%
			{8079.33641181865, "Exile_Item_Hammer"}, // 0.51%
			{8129.94369926804, "SmokeShellPurple"}, // 0.51%
			{8180.55098671744, "SmokeShellYellow"}, // 0.51%
			{8231.15827416683, "SmokeShellOrange"}, // 0.51%
			{8281.76556161622, "FlareWhite_F"}, // 0.51%
			{8332.37284906562, "Exile_Item_OilCanister"}, // 0.51%
			{8382.98013651501, "SmokeShellBlue"}, // 0.51%
			{8433.5874239644, "FlareYellow_F"}, // 0.51%
			{8484.19471141379, "Exile_Item_Rope"}, // 0.51%
			{8529.30749336868, "CUP_smg_bizon_snds"}, // 0.45%
			{8574.42027532357, "CUP_smg_EVO"}, // 0.45%
			{8618.46343762262, "CUP_hgun_MicroUzi"}, // 0.44%
			{8662.32308674543, "Exile_Item_MountainDupe"}, // 0.44%
			{8706.18273586824, "Exile_Item_ChocolateMilk"}, // 0.44%
			{8748.97263745146, "16Rnd_9x21_Mag"}, // 0.43%
			{8787.95899222729, "hlc_optic_kobra"}, // 0.39%
			{8825.23969398168, "Exile_Item_EnergyDrink"}, // 0.37%
			{8858.97788561461, "Exile_Item_FuelCanisterFull"}, // 0.34%
			{8892.71607724753, "Exile_Melee_Axe"}, // 0.34%
			{8926.45426888046, "Exile_Item_Wrench"}, // 0.34%
			{8960.19246051339, "Exile_Item_ZipTie"}, // 0.34%
			{8991.77140788181, "H_Cap_red"}, // 0.32%
			{9023.35035525024, "H_StrawHat_dark"}, // 0.32%
			{9054.92930261866, "H_StrawHat"}, // 0.32%
			{9086.50824998708, "H_Hat_tan"}, // 0.32%
			{9118.0871973555, "H_Hat_grey"}, // 0.32%
			{9149.66614472392, "H_Hat_checker"}, // 0.32%
			{9181.24509209234, "H_Hat_brown"}, // 0.32%
			{9212.82403946077, "H_Hat_blue"}, // 0.32%
			{9244.40298682919, "H_Cap_tan"}, // 0.32%
			{9275.98193419761, "H_Cap_press"}, // 0.32%
			{9306.68368858357, "Exile_Item_Beer"}, // 0.31%
			{9336.7588765535, "SMG_05_F"}, // 0.30%
			{9366.83406452343, "hgun_PDW2000_F"}, // 0.30%
			{9396.78699563168, "6Rnd_GreenSignal_F"}, // 0.30%
			{9426.73992673994, "6Rnd_RedSignal_F"}, // 0.30%
			{9453.05571621363, "H_Bandanna_surfer"}, // 0.26%
			{9479.37150568731, "Exile_Item_PlasticBottleFreshWater"}, // 0.26%
			{9505.687295161, "H_Cap_blk"}, // 0.26%
			{9532.00308463468, "H_Cap_blk_Raven"}, // 0.26%
			{9558.31887410837, "H_Cap_blu"}, // 0.26%
			{9584.63466358205, "H_Cap_grn"}, // 0.26%
			{9610.95045305574, "H_Cap_headphones"}, // 0.26%
			{9637.26624252942, "H_Cap_oli"}, // 0.26%
			{9663.58203200311, "H_Beret_blk_POLICE"}, // 0.26%
			{9683.6843711844, "Exile_Item_InstantCoffee"}, // 0.20%
			{9700.55346700086, "Exile_Item_MobilePhone"}, // 0.17%
			{9717.00083542191, "Exile_Item_Moobar"}, // 0.16%
			{9733.44820384297, "Exile_Item_Raisins"}, // 0.16%
			{9748.79908103595, "Exile_Item_PowerDrink"}, // 0.15%
			{9763.83667502091, "SMG_02_F"}, // 0.15%
			{9778.87426900587, "SMG_01_F"}, // 0.15%
			{9793.49415204681, "Exile_Item_CockONut"}, // 0.15%
			{9808.11403508774, "Exile_Item_SeedAstics"}, // 0.15%
			{9820.90643274856, "Exile_Item_ChristmasTinner"}, // 0.13%
			{9833.69883040938, "Exile_Item_CatFood"}, // 0.13%
			{9846.4912280702, "Exile_Item_Dogfood"}, // 0.13%
			{9859.28362573102, "Exile_Item_BeefParts"}, // 0.13%
			{9872.07602339184, "Exile_Item_Cheathas"}, // 0.13%
			{9884.86842105265, "Exile_Item_DsNuts"}, // 0.13%
			{9897.66081871347, "Exile_Item_Noodles"}, // 0.13%
			{9910.45321637429, "Exile_Item_SausageGravy"}, // 0.13%
			{9923.24561403511, "Exile_Item_Surstromming"}, // 0.13%
			{9936.03801169593, "Exile_Item_MacasCheese"}, // 0.13%
			{9948.83040935674, "Exile_Item_BBQSandwich"}, // 0.13%
			{9959.79532163745, "Exile_Item_GloriousKnakworst"}, // 0.11%
			{9970.76023391815, "Exile_Item_PlasticBottleCoffee"}, // 0.11%
			{9979.89766081873, "Exile_Item_Matches"}, // 0.09%
			{9989.03508771932, "Exile_Item_CanOpener"}, // 0.09%
			{9994.51754385967, "Exile_Item_CookingPot"}, // 0.05%
			{10000, "Exile_Item_EMRE"} // 0.05%
		};
	};

};


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

