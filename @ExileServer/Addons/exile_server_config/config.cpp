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

	  hlc_30Rnd_9x19_GD_MP5
	  Exile_Item_DsNuts
	  TRYK_V_Sheriff_BA_TL2
	  CUP_hgun_SA61
	  FlareRed_F
	  muzzle_snds_acp
	  Exile_Weapon_LeeEnfield
	  16Rnd_9x21_Mag
	  Chemlight_red
	  Exile_Item_PlasticBottleEmpty
	  U_C_Poor_2
	  V_Rangemaster_belt
	  Exile_Item_ChocolateMilk
	  Binocular
	  U_C_Poloshirt_stripped
	  Exile_Weapon_LeeEnfield
	  U_C_man_sport_1_F
	  hlc_rifle_saiga12k
	  ItemRadio
	  CUP_sgun_Saiga12K
	  Exile_Item_ToiletPaper
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_PowerDrink
	  H_Hat_grey
	  Exile_Item_Surstromming
	  FlareGreen_F
	  FlareGreen_F
	  U_C_Poloshirt_salmon
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  TRYK_shirts_DENIM_WHB_Sleeve
	  Exile_Item_Matches
	  B_OutdoorPack_blk
	  Exile_Item_ToiletPaper
	  TRYK_B_Coyotebackpack_BLK
	  10Rnd_9x21_Mag
	  30Rnd_9x21_Mag
	  Exile_Item_Surstromming
	  hgun_Pistol_heavy_02_F
	  CUP_sgun_Saiga12K
	  Chemlight_green
	  hlc_optic_kobra
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  TRYK_B_Kitbag_Base_JSDF
	  muzzle_snds_acp
	  TRYK_U_B_BLK_TAN_2
	  Exile_Item_PlasticBottleCoffee
	  hlc_10rnd_12g_buck_S12
	  hlc_30Rnd_9x19_GD_MP5
	  ItemRadio
	  Exile_Item_Magazine03
	  ItemRadio
	  hlc_rifle_saiga12k
	  ItemCompass
	  hlc_rifle_saiga12k
	  TRYK_R_CAP_TAN
	  Exile_Magazine_8Rnd_9x18
	  Exile_Item_ToiletPaper
	  B_AssaultPack_rgr
	  Exile_Item_Can_Empty
	  ItemCompass
	  Exile_Item_ToiletPaper
	  hlc_20Rnd_762x51_B_fal
	  hlc_smg_mp5k_PDW
	  U_C_Man_casual_5_F
	  Exile_Weapon_M1014
	  hlc_30rnd_556x45_b_hk33
	  H_Cap_press
	  Binocular
	  ItemRadio
	  hgun_P07_khk_F
	  Exile_Item_Can_Empty
	  H_Beret_blk_POLICE
	  CUP_muzzle_snds_MicroUzi
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  30Rnd_9x21_Mag_SMG_02
	  Chemlight_green
	  TRYK_shirts_PAD
	  TRYK_B_Medbag_BK
	  Exile_Magazine_8Rnd_74Slug
	  TRYK_B_Belt_CYT
	  optic_Yorris
	  Chemlight_blue
	  CUP_muzzle_snds_MicroUzi
	  H_Cap_grn
	  FlareGreen_F
	  TRYK_B_Coyotebackpack_OD
	  H_Hat_brown
	  FlareGreen_F
	  V_TacVest_blk_POLICE
	  FlareWhite_F
	  H_Beret_blk_POLICE
	  CUP_hgun_Phantom
	  FlareRed_F
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_Can_Empty
	  Chemlight_green
	*/
	class CivillianLowerClass
	{
		count = 545;
		half = 9317.98683751784;
		halfIndex = 272;
		sum = 9999.99999999999;
		items[] = 
		{
			{462.962962962963, "Exile_Item_Can_Empty"}, // 4.63%
			{925.925925925926, "Exile_Item_ToiletPaper"}, // 4.63%
			{1388.88888888889, "Exile_Item_PlasticBottleEmpty"}, // 4.63%
			{1561.6362631288, "Exile_Weapon_LeeEnfield"}, // 1.73%
			{1722.86714575272, "hlc_rifle_saiga12k"}, // 1.61%
			{1860.041357001, "ItemWatch"}, // 1.37%
			{1975.78209774174, "Exile_Item_Magazine01"}, // 1.16%
			{2091.52283848248, "Exile_Item_Magazine02"}, // 1.16%
			{2207.26357922323, "Exile_Item_Magazine03"}, // 1.16%
			{2323.00431996397, "Exile_Item_Magazine04"}, // 1.16%
			{2438.16923612391, "Exile_Weapon_M1014"}, // 1.15%
			{2553.33415228385, "CUP_sgun_Saiga12K"}, // 1.15%
			{2668.49906844379, "hlc_rifle_M1903A1"}, // 1.15%
			{2778.23843744242, "Exile_Item_Heatpack"}, // 1.10%
			{2877.30870112174, "hlc_10rnd_12g_buck_S12"}, // 0.99%
			{2973.33064899553, "ItemMap"}, // 0.96%
			{3057.15933364726, "hlc_10rnd_12g_slug_S12"}, // 0.84%
			{3139.46386039624, "ItemRadio"}, // 0.82%
			{3221.76838714521, "Binocular"}, // 0.82%
			{3304.07291389418, "ItemCompass"}, // 0.82%
			{3381.23340772134, "Chemlight_blue"}, // 0.77%
			{3458.3939015485, "FlareYellow_F"}, // 0.77%
			{3535.55439537566, "FlareWhite_F"}, // 0.77%
			{3612.71488920282, "FlareRed_F"}, // 0.77%
			{3689.87538302998, "FlareGreen_F"}, // 0.77%
			{3767.03587685714, "Chemlight_red"}, // 0.77%
			{3844.1963706843, "V_Rangemaster_belt"}, // 0.77%
			{3921.35686451146, "Chemlight_green"}, // 0.77%
			{3998.51735833862, "Chemlight_yellow"}, // 0.77%
			{4074.72525347656, "Exile_Magazine_8Rnd_74Slug"}, // 0.76%
			{4150.93314861449, "Exile_Magazine_10Rnd_303"}, // 0.76%
			{4227.14104375243, "Exile_Magazine_5Rnd_22LR"}, // 0.76%
			{4303.34893889037, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.76%
			{4379.5568340283, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.76%
			{4443.85724555094, "Exile_Item_PlasticBottleDirtyWater"}, // 0.64%
			{4506.27921808527, "muzzle_snds_acp"}, // 0.62%
			{4568.7011906196, "muzzle_snds_L"}, // 0.62%
			{4626.57156098997, "CUP_hgun_Phantom"}, // 0.58%
			{4684.15401906994, "Exile_Weapon_CZ550"}, // 0.58%
			{4735.59434828805, "Exile_Item_MountainDupe"}, // 0.51%
			{4787.03467750615, "Exile_Item_ChocolateMilk"}, // 0.51%
			{4835.25998614813, "hgun_Pistol_heavy_01_F"}, // 0.48%
			{4883.4852947901, "hlc_smg_mp5k"}, // 0.48%
			{4931.71060343208, "hlc_smg_mp5k_PDW"}, // 0.48%
			{4975.43488326747, "Exile_Item_EnergyDrink"}, // 0.44%
			{5018.90558401517, "30Rnd_9x21_Mag"}, // 0.43%
			{5062.37628476286, "Exile_Magazine_8Rnd_9x18"}, // 0.43%
			{5105.84698551056, "11Rnd_45ACP_Mag"}, // 0.43%
			{5149.31768625826, "Exile_Magazine_6Rnd_45ACP"}, // 0.43%
			{5192.78838700595, "9Rnd_45ACP_Mag"}, // 0.43%
			{5236.25908775365, "Exile_Magazine_7Rnd_45ACP"}, // 0.43%
			{5279.72978850135, "hlc_30Rnd_9x19_B_MP5"}, // 0.43%
			{5323.20048924904, "10Rnd_9x21_Mag"}, // 0.43%
			{5364.99575673875, "CUP_hgun_SA61"}, // 0.42%
			{5406.79102422847, "hgun_P07_khk_F"}, // 0.42%
			{5448.58629171818, "hgun_Rook40_F"}, // 0.42%
			{5490.38155920789, "hgun_Pistol_01_F"}, // 0.42%
			{5529.50518988081, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.39%
			{5568.62882055374, "CUP_18Rnd_9x19_Phantom"}, // 0.39%
			{5607.75245122667, "hlc_30Rnd_9x19_GD_MP5"}, // 0.39%
			{5646.87608189959, "CUP_30Rnd_9x19_UZI"}, // 0.39%
			{5685.45632881317, "hgun_P07_F"}, // 0.39%
			{5724.03657572675, "V_TacVest_blk_POLICE"}, // 0.39%
			{5762.61682264033, "CUP_hgun_Duty_M3X"}, // 0.39%
			{5801.19706955391, "V_Press_F"}, // 0.39%
			{5838.23410659095, "H_Cap_red"}, // 0.37%
			{5875.27114362799, "H_Cap_tan"}, // 0.37%
			{5912.30818066503, "H_Hat_blue"}, // 0.37%
			{5949.34521770206, "H_Hat_brown"}, // 0.37%
			{5986.3822547391, "H_Hat_checker"}, // 0.37%
			{6023.41929177614, "H_Hat_grey"}, // 0.37%
			{6060.45632881318, "H_Hat_tan"}, // 0.37%
			{6097.49336585021, "H_StrawHat"}, // 0.37%
			{6134.53040288725, "H_StrawHat_dark"}, // 0.37%
			{6171.56743992429, "H_Cap_press"}, // 0.37%
			{6208.60447696133, "CUP_smg_MP5SD6"}, // 0.37%
			{6244.612707414, "Exile_Item_Beer"}, // 0.36%
			{6279.38926801216, "6Rnd_45ACP_Cylinder"}, // 0.35%
			{6314.06814164234, "CUP_acc_CZ_M3X"}, // 0.35%
			{6348.74701527253, "CUP_muzzle_snds_MicroUzi"}, // 0.35%
			{6383.42588890271, "CUP_acc_Glock17_Flashlight"}, // 0.35%
			{6417.97536375069, "hlc_rifle_L1A1SLR"}, // 0.35%
			{6450.46399273055, "U_C_Scientist"}, // 0.32%
			{6482.95262171041, "U_C_HunterBody_grn"}, // 0.32%
			{6515.44125069026, "U_C_Poor_shorts_1"}, // 0.32%
			{6547.92987967012, "U_C_Poor_2"}, // 0.32%
			{6580.41850864998, "U_C_Poor_1"}, // 0.32%
			{6612.90713762983, "U_C_Journalist"}, // 0.32%
			{6645.39576660969, "U_Rangemaster"}, // 0.32%
			{6677.54597237101, "CUP_hgun_PB6P9_snds"}, // 0.32%
			{6709.29200411704, "hlc_rifle_hk53"}, // 0.32%
			{6741.02155298055, "B_OutdoorPack_blk"}, // 0.32%
			{6772.23253924771, "CUP_muzzle_snds_M9"}, // 0.31%
			{6803.09673677858, "H_Cap_blk"}, // 0.31%
			{6833.96093430944, "H_Cap_grn"}, // 0.31%
			{6864.8251318403, "H_Cap_oli"}, // 0.31%
			{6895.68932937117, "H_Beret_blk_POLICE"}, // 0.31%
			{6926.55352690203, "H_Bandanna_surfer"}, // 0.31%
			{6957.41772443289, "H_Cap_headphones"}, // 0.31%
			{6988.28192196376, "H_Cap_blu"}, // 0.31%
			{7019.14611949462, "H_Cap_blk_Raven"}, // 0.31%
			{7050.01031702549, "Exile_Item_PlasticBottleFreshWater"}, // 0.31%
			{7080.87451455635, "Exile_Item_ZipTie"}, // 0.31%
			{7111.35767261152, "hlc_20Rnd_762x51_B_fal"}, // 0.30%
			{7140.56250468374, "hlc_30Rnd_9x19_B_MP5"}, // 0.29%
			{7169.11909866089, "B_OutdoorPack_blu"}, // 0.29%
			{7197.67569263805, "B_OutdoorPack_tan"}, // 0.29%
			{7224.22553997643, "CUP_30Rnd_9x19_EVO"}, // 0.27%
			{7250.7753873148, "CUP_30Rnd_9x19_MP5"}, // 0.27%
			{7277.32523465318, "30Rnd_9x21_Mag_SMG_02"}, // 0.27%
			{7303.87508199156, "hlc_30Rnd_9x19_GD_MP5"}, // 0.27%
			{7330.42492932994, "CUP_64Rnd_9x19_Bizon_M"}, // 0.27%
			{7356.87995578496, "CUP_smg_bizon"}, // 0.26%
			{7383.33498223999, "CUP_smg_MP5A5"}, // 0.26%
			{7409.41740268861, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.26%
			{7435.13756729766, "CUP_hgun_MicroUzi"}, // 0.26%
			{7460.52120638847, "B_HuntingBackpack"}, // 0.25%
			{7485.79014003947, "U_C_Poloshirt_blue"}, // 0.25%
			{7511.05907369047, "U_C_Poloshirt_tricolour"}, // 0.25%
			{7536.32800734147, "U_C_Poloshirt_stripped"}, // 0.25%
			{7561.59694099247, "U_C_Poloshirt_burgundy"}, // 0.25%
			{7586.86587464347, "U_C_Poloshirt_salmon"}, // 0.25%
			{7611.1410861846, "optic_Yorris"}, // 0.24%
			{7635.41629772573, "optic_MRD"}, // 0.24%
			{7658.99311528402, "Exile_Item_InstantCoffee"}, // 0.24%
			{7681.85548382541, "hlc_optic_kobra"}, // 0.23%
			{7704.36062785833, "hgun_ACPC2_F"}, // 0.23%
			{7726.86577189125, "hgun_Pistol_heavy_02_F"}, // 0.23%
			{7749.0764560957, "B_AssaultPack_mcamo"}, // 0.22%
			{7771.28714030016, "B_AssaultPack_dgtl"}, // 0.22%
			{7793.49782450461, "B_AssaultPack_khk"}, // 0.22%
			{7815.70850870907, "B_AssaultPack_blk"}, // 0.22%
			{7837.91919291352, "B_AssaultPack_cbr"}, // 0.22%
			{7860.12987711797, "B_AssaultPack_tna_F"}, // 0.22%
			{7882.34056132243, "B_AssaultPack_sgg"}, // 0.22%
			{7904.55124552688, "B_AssaultPack_rgr"}, // 0.22%
			{7926.28659590073, "16Rnd_9x21_Mag"}, // 0.22%
			{7945.57671935752, "Exile_Weapon_Makarov"}, // 0.19%
			{7964.86684281431, "Exile_Item_Raisins"}, // 0.19%
			{7984.1569662711, "Exile_Item_Moobar"}, // 0.19%
			{8002.20620459324, "U_C_Man_casual_6_F"}, // 0.18%
			{8020.25544291538, "U_C_Man_casual_5_F"}, // 0.18%
			{8038.30468123753, "U_C_Man_casual_4_F"}, // 0.18%
			{8056.35391955967, "U_C_Man_casual_3_F"}, // 0.18%
			{8074.40315788181, "U_C_Man_casual_2_F"}, // 0.18%
			{8092.45239620395, "U_C_Man_casual_1_F"}, // 0.18%
			{8110.5016345261, "U_C_man_sport_2_F"}, // 0.18%
			{8128.55087284824, "U_C_man_sport_3_F"}, // 0.18%
			{8146.60011117038, "U_I_C_Soldier_Bandit_5_F"}, // 0.18%
			{8164.64934949253, "U_I_C_Soldier_Bandit_4_F"}, // 0.18%
			{8182.69858781467, "U_I_C_Soldier_Bandit_3_F"}, // 0.18%
			{8200.74782613681, "U_I_C_Soldier_Bandit_2_F"}, // 0.18%
			{8218.79706445895, "U_C_man_sport_1_F"}, // 0.18%
			{8236.8463027811, "U_I_C_Soldier_Bandit_1_F"}, // 0.18%
			{8254.85041800743, "Exile_Item_PowerDrink"}, // 0.18%
			{8271.99719441347, "Exile_Item_SeedAstics"}, // 0.17%
			{8289.1439708195, "Exile_Item_CockONut"}, // 0.17%
			{8305.21907370016, "Exile_Weapon_Colt1911"}, // 0.16%
			{8321.14898210319, "hlc_30rnd_556x45_b_hk33"}, // 0.16%
			{8337.02199797621, "CUP_smg_EVO"}, // 0.16%
			{8352.89501384922, "CUP_smg_bizon_snds"}, // 0.16%
			{8368.75978828098, "B_Kitbag_mcamo"}, // 0.16%
			{8384.62456271273, "B_Kitbag_cbr"}, // 0.16%
			{8400.48933714448, "B_Kitbag_sgg"}, // 0.16%
			{8415.70408240618, "6Rnd_RedSignal_F"}, // 0.15%
			{8430.91882766787, "6Rnd_GreenSignal_F"}, // 0.15%
			{8445.92225702315, "Exile_Item_BBQSandwich"}, // 0.15%
			{8460.92568637843, "Exile_Item_Noodles"}, // 0.15%
			{8475.92911573371, "Exile_Item_DsNuts"}, // 0.15%
			{8490.932545089, "Exile_Item_Cheathas"}, // 0.15%
			{8505.93597444428, "Exile_Item_BeefParts"}, // 0.15%
			{8520.93940379956, "Exile_Item_SausageGravy"}, // 0.15%
			{8535.94283315484, "Exile_Item_Surstromming"}, // 0.15%
			{8550.94626251012, "Exile_Item_ChristmasTinner"}, // 0.15%
			{8565.9496918654, "Exile_Item_Dogfood"}, // 0.15%
			{8580.95312122069, "Exile_Item_CatFood"}, // 0.15%
			{8595.95655057597, "Exile_Item_MacasCheese"}, // 0.15%
			{8609.6739717008, "ItemGPS"}, // 0.14%
			{8623.39139282563, "Exile_Item_MobilePhone"}, // 0.14%
			{8637.10881395046, "optic_ACO_grn_smg"}, // 0.14%
			{8650.82623507528, "optic_Aco"}, // 0.14%
			{8664.54365620011, "optic_ACO_grn"}, // 0.14%
			{8678.26107732494, "optic_Aco_smg"}, // 0.14%
			{8691.97849844977, "optic_Holosight_smg_blk_F"}, // 0.14%
			{8705.6959195746, "optic_Holosight_smg"}, // 0.14%
			{8719.27254605446, "TRYK_B_Kitbag_Base"}, // 0.14%
			{8732.84917253431, "TRYK_B_Belt"}, // 0.14%
			{8746.42579901416, "TRYK_B_Kitbag_blk"}, // 0.14%
			{8759.28588131869, "Exile_Item_GloriousKnakworst"}, // 0.13%
			{8772.14596362322, "Exile_Weapon_TaurusGold"}, // 0.13%
			{8785.00604592774, "Exile_Item_PlasticBottleCoffee"}, // 0.13%
			{8796.77245554361, "TRYK_B_Kitbag_aaf"}, // 0.12%
			{8808.53886515949, "TRYK_B_Belt_CYT"}, // 0.12%
			{8820.30527477536, "TRYK_B_tube_cyt"}, // 0.12%
			{8831.16657595924, "TRYK_B_Kitbag_Base_JSDF"}, // 0.11%
			{8842.02787714312, "TRYK_B_Alicepack"}, // 0.11%
			{8852.889178327, "TRYK_B_Belt_BLK"}, // 0.11%
			{8863.75047951089, "TRYK_B_FieldPack_Wood"}, // 0.11%
			{8874.61178069477, "TRYK_B_Belt_br"}, // 0.11%
			{8885.47308187865, "TRYK_B_Belt_tan"}, // 0.11%
			{8896.33438306253, "TRYK_B_BAF_BAG_BLK"}, // 0.11%
			{8907.19568424642, "TRYK_B_Belt_GR"}, // 0.11%
			{8917.91241950019, "Exile_Item_Matches"}, // 0.11%
			{8928.62915475396, "Exile_Item_CanOpener"}, // 0.11%
			{8939.24909368931, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.11%
			{8949.86903262467, "30Rnd_45ACP_Mag_SMG_01"}, // 0.11%
			{8960.48897156002, "hlc_30rnd_556x45_t_hk33"}, // 0.11%
			{8971.10891049537, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.11%
			{8981.72884943072, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.11%
			{8992.31086001273, "SMG_05_F"}, // 0.11%
			{9002.89287059474, "hgun_PDW2000_F"}, // 0.11%
			{9013.18093643836, "CUP_optic_ACOG"}, // 0.10%
			{9023.13712919025, "TRYK_B_Belt_AOR2"}, // 0.10%
			{9033.09332194215, "TRYK_B_Belt_AOR1"}, // 0.10%
			{9043.04951469404, "TRYK_B_BAF_BAG_CYT"}, // 0.10%
			{9053.00570744593, "TRYK_B_BAF_BAG_OD"}, // 0.10%
			{9062.65076917432, "hgun_Pistol_Signal_F"}, // 0.10%
			{9072.29583090272, "Exile_Weapon_Taurus"}, // 0.10%
			{9081.34691522262, "TRYK_B_AssaultPack_Type2camo"}, // 0.09%
			{9090.39799954252, "TRYK_B_AssaultPack_UCP"}, // 0.09%
			{9099.44908386242, "TRYK_B_tube_od"}, // 0.09%
			{9108.50016818232, "TRYK_B_tube_blk"}, // 0.09%
			{9116.64614407024, "TRYK_B_BAF_BAG_mcamo"}, // 0.08%
			{9124.61109827175, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.08%
			{9132.57605247326, "hlc_30rnd_556x45_epr_hk33"}, // 0.08%
			{9139.81691992918, "TRYK_B_BAF_BAG_rgr"}, // 0.07%
			{9147.05778738511, "TRYK_B_Medbag"}, // 0.07%
			{9154.29865484103, "TRYK_B_Medbag_OD"}, // 0.07%
			{9161.53952229695, "TRYK_B_Medbag_BK"}, // 0.07%
			{9168.78038975287, "TRYK_B_Medbag_ucp"}, // 0.07%
			{9175.21043090513, "Exile_Item_CookingPot"}, // 0.06%
			{9181.6404720574, "Exile_Item_EMRE"}, // 0.06%
			{9186.9314773484, "SMG_01_F"}, // 0.05%
			{9192.2224826394, "SMG_02_F"}, // 0.05%
			{9197.2254074262, "TRYK_Hrp_vest_od"}, // 0.05%
			{9201.84349184479, "TRYK_Hrp_vest_ucp"}, // 0.05%
			{9206.46157626337, "TRYK_LOC_AK_chestrig_OD"}, // 0.05%
			{9210.98711842332, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.05%
			{9215.51266058327, "TRYK_B_Coyotebackpack_BLK"}, // 0.05%
			{9220.03820274322, "TRYK_B_Coyotebackpack_OD"}, // 0.05%
			{9224.56374490317, "TRYK_B_Coyotebackpack"}, // 0.05%
			{9229.08928706312, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.05%
			{9232.93769074528, "TRYK_V_Sheriff_BA_TB"}, // 0.04%
			{9236.5475384097, "U_NikosAgedBody"}, // 0.04%
			{9240.15738607413, "U_OrestesBody"}, // 0.04%
			{9243.76723373856, "U_NikosBody"}, // 0.04%
			{9246.84595668428, "TRYK_LOC_AK_chestrig_TAN"}, // 0.03%
			{9249.58214440865, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9252.31833213302, "TRYK_H_GR"}, // 0.03%
			{9255.05451985739, "TRYK_H_AOR1"}, // 0.03%
			{9257.79070758175, "TRYK_H_AOR2"}, // 0.03%
			{9260.52689530612, "TRYK_H_EARMUFF"}, // 0.03%
			{9263.26308303049, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9265.99927075486, "TRYK_H_Bandana_H"}, // 0.03%
			{9268.73545847922, "TRYK_H_Bandana_wig"}, // 0.03%
			{9271.47164620359, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9274.20783392796, "TRYK_H_wig"}, // 0.03%
			{9276.94402165233, "TRYK_H_headset2"}, // 0.03%
			{9279.68020937669, "TRYK_H_woolhat"}, // 0.03%
			{9282.41639710106, "TRYK_H_WH"}, // 0.03%
			{9285.15258482543, "TRYK_H_woolhat_CW"}, // 0.03%
			{9287.8887725498, "TRYK_H_woolhat_br"}, // 0.03%
			{9290.62496027416, "TRYK_H_woolhat_cu"}, // 0.03%
			{9293.36114799853, "TRYK_H_woolhat_tan"}, // 0.03%
			{9296.0973357229, "TRYK_H_headsetcap"}, // 0.03%
			{9298.83352344727, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9301.56971117163, "TRYK_H_headsetcap_od"}, // 0.03%
			{9304.305898896, "TRYK_H_pakol"}, // 0.03%
			{9307.04208662037, "TRYK_H_pakol2"}, // 0.03%
			{9309.77827434474, "TRYK_R_CAP_TAN"}, // 0.03%
			{9312.5144620691, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9315.25064979347, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9317.98683751784, "TRYK_H_woolhat_WH"}, // 0.03%
			{9320.72302524221, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9323.45921296657, "TRYK_H_PASGT_OD"}, // 0.03%
			{9326.19540069094, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9328.93158841531, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9331.66777613968, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9334.40396386404, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9337.14015158841, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9339.87633931278, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9342.61252703715, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{9345.34871476151, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9348.08490248588, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9350.82109021025, "TRYK_headset2"}, // 0.03%
			{9353.55727793462, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9356.29346565898, "TRYK_TAC_SET_bn"}, // 0.03%
			{9359.02965338335, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9361.76584110772, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9364.50202883209, "TRYK_TAC_SET_TAN"}, // 0.03%
			{9367.23821655645, "TRYK_R_CAP_BLK"}, // 0.03%
			{9369.97440428082, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{9372.71059200519, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9375.44677972956, "TRYK_bandana_g"}, // 0.03%
			{9378.18296745392, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{9380.91915517829, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9383.65534290266, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{9386.39153062703, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{9389.12771835139, "TRYK_TAC_SET_MESH"}, // 0.03%
			{9391.86390607576, "TRYK_TAC_SET_OD"}, // 0.03%
			{9394.60009380013, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{9397.3154190961, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9400.02280484442, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9402.73019059274, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9405.43757634106, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9408.14496208938, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9410.8523478377, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9413.55973358603, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9416.26711933435, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9418.97450508267, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9421.68189083099, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9424.38927657931, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9427.09666232763, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9429.80404807595, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9432.51143382427, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9435.21881957259, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9437.92620532092, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9440.63359106924, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9443.34097681756, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9446.04836256588, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9448.7557483142, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9451.46313406252, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9454.17051981084, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9456.87790555916, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9459.58529130748, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9462.2926770558, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9465.00006280413, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9467.70744855245, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9470.41483430077, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9473.12222004909, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9475.82960579741, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9478.53699154573, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9481.24437729405, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9483.95176304237, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9486.65914879069, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9489.36653453901, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9492.07392028734, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9494.78130603566, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9497.48869178398, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9500.1960775323, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9502.90346328062, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9505.61084902894, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9508.31823477726, "TRYK_U_B_PCUHs"}, // 0.03%
			{9511.02562052558, "TRYK_U_taki_wh"}, // 0.03%
			{9513.7330062739, "TRYK_DMARPAT_T"}, // 0.03%
			{9516.44039202222, "TRYK_C_AOR2_T"}, // 0.03%
			{9519.14777777055, "TRYK_U_B_Sage_T"}, // 0.03%
			{9521.85516351887, "TRYK_U_B_Wood_T"}, // 0.03%
			{9524.56254926719, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9527.26993501551, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9529.97732076383, "TRYK_OVERALL_flesh"}, // 0.03%
			{9532.68470651215, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9535.39209226047, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9538.09947800879, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9540.80686375711, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9543.51424950544, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9546.22163525376, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9548.92902100208, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9551.6364067504, "TRYK_SUITS_BR_F"}, // 0.03%
			{9554.34379249872, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9557.05117824704, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9559.75856399536, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9562.46594974368, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9565.173335492, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9567.88072124032, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9570.58810698865, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9573.29549273697, "TRYK_U_taki_COY"}, // 0.03%
			{9576.00287848529, "TRYK_U_taki_BL"}, // 0.03%
			{9578.71026423361, "TRYK_U_taki_BLK"}, // 0.03%
			{9581.41764998193, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9584.12503573025, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9586.83242147857, "TRYK_U_taki_G_WH"}, // 0.03%
			{9589.53980722689, "TRYK_U_taki_G_COY"}, // 0.03%
			{9592.24719297521, "TRYK_U_taki_G_BL"}, // 0.03%
			{9594.95457872353, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9597.66196447186, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9600.36935022018, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9603.0767359685, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9605.78412171682, "TRYK_B_USMC_R"}, // 0.03%
			{9608.49150746514, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9611.19889321346, "TRYK_ZARATAKI"}, // 0.03%
			{9613.90627896178, "TRYK_ZARATAKI2"}, // 0.03%
			{9616.6136647101, "TRYK_ZARATAKI3"}, // 0.03%
			{9619.32105045842, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9622.02843620675, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9624.73582195507, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9627.44320770339, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9630.15059345171, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9632.85797920003, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9635.56536494835, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9638.27275069667, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9640.98013644499, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9643.68752219331, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9646.39490794163, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9649.10229368996, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9651.80967943828, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9654.5170651866, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9657.22445093492, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9659.93183668324, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9662.63922243156, "TRYK_U_B_fleece"}, // 0.03%
			{9665.34660817988, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9668.0539939282, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9670.76137967652, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9673.46876542484, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9676.17615117317, "TRYK_U_B_PCUs"}, // 0.03%
			{9678.88353692149, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9681.59092266981, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9684.29830841813, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9687.00569416645, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9689.71307991477, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9692.42046566309, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9695.12785141141, "TRYK_U_B_ACU"}, // 0.03%
			{9697.83523715973, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9700.54262290805, "TRYK_U_B_3c"}, // 0.03%
			{9703.25000865638, "TRYK_shirts_PAD"}, // 0.03%
			{9705.9573944047, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9708.66478015302, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9711.37216590134, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9714.07955164966, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9716.78693739798, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9719.4943231463, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9722.20170889462, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9724.90909464294, "TRYK_U_B_ODTAN"}, // 0.03%
			{9727.61648039127, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9730.32386613959, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9733.03125188791, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9735.73863763623, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9738.44602338455, "TRYK_U_B_BLK"}, // 0.03%
			{9741.15340913287, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9743.86079488119, "TRYK_U_B_3cr"}, // 0.03%
			{9746.56818062951, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9749.27556637783, "TRYK_hoodie_FR"}, // 0.03%
			{9751.98295212615, "TRYK_hoodie_Wood"}, // 0.03%
			{9754.69033787448, "TRYK_hoodie_3c"}, // 0.03%
			{9757.3977236228, "TRYK_T_PAD"}, // 0.03%
			{9760.10510937112, "TRYK_T_OD_PAD"}, // 0.03%
			{9762.81249511944, "TRYK_T_TAN_PAD"}, // 0.03%
			{9765.51988086776, "TRYK_T_BLK_PAD"}, // 0.03%
			{9768.22726661608, "TRYK_T_T2_PAD"}, // 0.03%
			{9770.9346523644, "TRYK_hoodie_Blk"}, // 0.03%
			{9773.64203811272, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9776.34942386104, "TRYK_U_hood_nc"}, // 0.03%
			{9779.05680960936, "TRYK_U_hood_mc"}, // 0.03%
			{9781.76419535769, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9784.47158110601, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9787.17896685433, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9789.88635260265, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9792.59373835097, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9795.30112409929, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9798.00850984761, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9800.71589559593, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9803.42328134425, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9806.13066709258, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9808.8380528409, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9811.54543858922, "TRYK_U_B_PCUGs"}, // 0.03%
			{9814.25282433754, "TRYK_U_B_PCUODs"}, // 0.03%
			{9816.96021008586, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9819.66759583418, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9822.3749815825, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9825.08236733082, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9827.78975307914, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9830.49713882746, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9833.20452457579, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9835.91191032411, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9838.61929607243, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9841.32668182075, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9844.03406756907, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9846.74145331739, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9849.44883906571, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9852.15622481403, "TRYK_U_pad_j_blk"}, // 0.03%
			{9854.86361056235, "TRYK_U_pad_j"}, // 0.03%
			{9857.57099631067, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9860.278382059, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9862.9722646365, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9865.66614721401, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9868.36002979152, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9870.54897997101, "TRYK_H_LHS_HEL_G"}, // 0.02%
			{9872.7379301505, "TRYK_TAC_SET_WH"}, // 0.02%
			{9874.66213199158, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9876.58633383266, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9878.51053567373, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9880.43473751481, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9882.35893935589, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9884.28314119697, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9886.20734303804, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9888.13154487912, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9890.0557467202, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9891.97994856127, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9893.90415040235, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9895.82835224343, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9897.7525540845, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9899.67675592558, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9901.60095776666, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9903.52515960773, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9905.44936144881, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9907.37356328989, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9909.29776513096, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9911.22196697204, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9913.14616881312, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9915.0703706542, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9916.99457249527, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9918.91877433635, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9920.84297617743, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9922.7671780185, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9924.69137985958, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9926.61558170066, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9928.53978354173, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9930.46398538281, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9932.38818722389, "TRYK_V_harnes_od_L"}, // 0.02%
			{9934.31238906496, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9936.23659090604, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9938.16079274712, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9940.08499458819, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9942.00919642927, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9943.93339827035, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9945.85760011143, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9947.7818019525, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9949.70600379358, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9951.63020563466, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9953.55440747573, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9955.47860931681, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9957.40281115789, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9959.32701299896, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9961.25121484004, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9963.17541668112, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9965.09961852219, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9967.02382036327, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9968.94802220435, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9970.87222404542, "TRYK_V_tacv10_TN"}, // 0.02%
			{9972.7964258865, "TRYK_V_tacv10_OD"}, // 0.02%
			{9974.72062772758, "TRYK_V_tacv10_BK"}, // 0.02%
			{9976.64482956866, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9978.56903140973, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9980.49323325081, "TRYK_V_ChestRig_L"}, // 0.02%
			{9982.41743509189, "TRYK_V_ChestRig"}, // 0.02%
			{9984.34163693296, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9986.26583877404, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9988.19004061512, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9990.11424245619, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9992.03844429727, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9993.96264613835, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9995.88684797942, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9997.8110498205, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9998.90552491025, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9999.99999999999, "TRYK_H_Helmet_Winter_2"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Beer
	  TRYK_hoodie_Blk
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  TRYK_B_AssaultPack_UCP
	  CUP_sgun_Saiga12K
	  CUP_smg_bizon_snds
	  muzzle_snds_L
	  Exile_Weapon_M1014
	  hlc_smg_mp5k
	  Exile_Item_ToiletPaper
	  hlc_rifle_hk53
	  B_OutdoorPack_blu
	  Exile_Item_Can_Empty
	  ItemWatch
	  Exile_Item_Can_Empty
	  Exile_Magazine_8Rnd_9x18
	  B_OutdoorPack_blu
	  30Rnd_9x21_Mag_SMG_02
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  11Rnd_45ACP_Mag
	  TRYK_hoodie_Blk
	  Exile_Item_Can_Empty
	  TRYK_H_AOR2
	  TRYK_U_Bts_GRYGRY_PCUs
	  H_StrawHat_dark
	  Exile_Item_ToiletPaper
	  U_C_Man_casual_5_F
	  Exile_Item_ZipTie
	  10Rnd_9x21_Mag
	  CUP_sgun_Saiga12K
	  U_C_Journalist
	  hlc_30Rnd_9x19_B_MP5
	  U_C_man_sport_3_F
	  CUP_sgun_Saiga12K
	  hlc_rifle_M1903A1
	  CUP_acc_Glock17_Flashlight
	  TRYK_B_tube_od
	  CUP_smg_EVO
	  Exile_Item_Can_Empty
	  6Rnd_45ACP_Cylinder
	  6Rnd_45ACP_Cylinder
	  ItemWatch
	  Exile_Item_Magazine01
	  Exile_Item_Magazine03
	  Exile_Magazine_5Rnd_22LR
	  Exile_Magazine_8Rnd_74Slug
	  11Rnd_45ACP_Mag
	  TRYK_U_Bts_Wood_PCUs
	  Exile_Item_Magazine04
	  ItemGPS
	  optic_ACO_grn_smg
	  Exile_Item_SausageGravy
	  B_HuntingBackpack
	  hgun_P07_F
	  Exile_Item_Raisins
	  TRYK_shirts_TAN_PAD_RED2
	  Exile_Weapon_M1014
	  Chemlight_green
	  Exile_Magazine_8Rnd_74Slug
	  hlc_rifle_saiga12k
	  TRYK_H_PASGT_OD
	  H_StrawHat
	  U_C_Poor_shorts_1
	  FlareGreen_F
	  Exile_Item_Moobar
	  TRYK_B_TRYK_3C_T
	  Binocular
	  Exile_Weapon_TaurusGold
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Weapon_CZ550
	  H_Hat_grey
	  H_StrawHat_dark
	  30Rnd_9x21_Mag_SMG_02
	  Exile_Item_BeefParts
	  SmokeShellRed
	  U_C_Poor_shorts_1
	  U_C_Poloshirt_burgundy
	  CUP_acc_Glock17_Flashlight
	  SmokeShell
	  CUP_smg_bizon
	  hlc_30Rnd_9x19_GD_MP5
	  6Rnd_GreenSignal_F
	  30Rnd_9x21_Mag_SMG_02
	  ItemCompass
	  Exile_Item_SausageGravy
	  Exile_Magazine_10Rnd_303
	  TRYK_shirts_OD_PAD_BK
	  Exile_Item_Magazine01
	  U_C_Poloshirt_burgundy
	  Exile_Item_PlasticBottleDirtyWater
	  Binocular
	  B_AssaultPack_sgg
	  B_AssaultPack_sgg
	  TRYK_H_headset2
	  CUP_smg_EVO
	  Exile_Item_ToiletPaper
	  H_Hat_brown
	  TRYK_shirts_TAN_PAD_BLW
	  30Rnd_9x21_Mag_SMG_02_Tracer_Yellow
	*/
	class CivillianUpperClass
	{
		count = 552;
		half = 9078.79119675126;
		halfIndex = 276;
		sum = 10000;
		items[] = 
		{
			{266.666666666667, "Exile_Item_Can_Empty"}, // 2.67%
			{533.333333333333, "Exile_Item_ToiletPaper"}, // 2.67%
			{800, "Exile_Item_PlasticBottleEmpty"}, // 2.67%
			{949.253731343283, "Exile_Weapon_LeeEnfield"}, // 1.49%
			{1088.55721393035, "hlc_rifle_saiga12k"}, // 1.39%
			{1195.55309870401, "hlc_10rnd_12g_buck_S12"}, // 1.07%
			{1295.0555862662, "Exile_Weapon_M1014"}, // 1.00%
			{1394.55807382839, "CUP_sgun_Saiga12K"}, // 1.00%
			{1494.06056139058, "hlc_rifle_M1903A1"}, // 1.00%
			{1584.59554081445, "hlc_10rnd_12g_slug_S12"}, // 0.91%
			{1667.92887414778, "Exile_Item_PlasticBottleDirtyWater"}, // 0.83%
			{1750.23340089675, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.82%
			{1832.53792764572, "Exile_Magazine_5Rnd_22LR"}, // 0.82%
			{1914.84245439469, "Exile_Magazine_10Rnd_303"}, // 0.82%
			{1997.14698114366, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.82%
			{2079.45150789264, "Exile_Magazine_8Rnd_74Slug"}, // 0.82%
			{2146.1181745593, "Exile_Item_ChocolateMilk"}, // 0.67%
			{2212.78484122597, "Exile_Item_MountainDupe"}, // 0.67%
			{2279.45150789264, "Exile_Item_Magazine04"}, // 0.67%
			{2346.1181745593, "Exile_Item_Magazine03"}, // 0.67%
			{2412.78484122597, "Exile_Item_Magazine02"}, // 0.67%
			{2479.45150789263, "Exile_Item_Magazine01"}, // 0.67%
			{2546.1181745593, "V_Rangemaster_belt"}, // 0.67%
			{2612.78484122597, "FlareGreen_F"}, // 0.67%
			{2679.45150789263, "FlareRed_F"}, // 0.67%
			{2746.1181745593, "Chemlight_blue"}, // 0.67%
			{2812.78484122597, "Chemlight_green"}, // 0.67%
			{2879.45150789263, "FlareYellow_F"}, // 0.67%
			{2946.1181745593, "Chemlight_yellow"}, // 0.67%
			{3012.78484122597, "FlareWhite_F"}, // 0.67%
			{3079.45150789263, "Chemlight_red"}, // 0.67%
			{3138.71076715189, "ItemWatch"}, // 0.59%
			{3195.74780418893, "Exile_Item_InstantCoffee"}, // 0.57%
			{3252.4144708556, "Exile_Item_EnergyDrink"}, // 0.57%
			{3306.34705512526, "muzzle_snds_L"}, // 0.54%
			{3360.27963939492, "muzzle_snds_acp"}, // 0.54%
			{3413.61297272826, "CUP_smg_MP5SD6"}, // 0.53%
			{3463.61297272826, "CUP_hgun_Phantom"}, // 0.50%
			{3513.45720948838, "B_OutdoorPack_blk"}, // 0.50%
			{3563.20845326947, "Exile_Weapon_CZ550"}, // 0.50%
			{3610.61586067688, "Exile_Item_Heatpack"}, // 0.47%
			{3657.28252734355, "Exile_Item_Beer"}, // 0.47%
			{3703.94919401022, "Exile_Item_Moobar"}, // 0.47%
			{3750.61586067688, "Exile_Item_Raisins"}, // 0.47%
			{3796.33014639117, "hlc_rifle_hk53"}, // 0.46%
			{3841.18995947528, "B_OutdoorPack_blu"}, // 0.45%
			{3886.04977255939, "B_OutdoorPack_tan"}, // 0.45%
			{3927.71643922606, "hgun_Pistol_heavy_01_F"}, // 0.42%
			{3969.38310589272, "hlc_smg_mp5k"}, // 0.42%
			{4011.04977255939, "hlc_smg_mp5k_PDW"}, // 0.42%
			{4052.53125404087, "Exile_Item_CockONut"}, // 0.41%
			{4094.01273552235, "Exile_Item_SeedAstics"}, // 0.41%
			{4135.49421700383, "ItemMap"}, // 0.41%
			{4176.49780123323, "hlc_30Rnd_9x19_B_MP5"}, // 0.41%
			{4216.49780123323, "Exile_Item_PlasticBottleFreshWater"}, // 0.40%
			{4256.37319064133, "B_HuntingBackpack"}, // 0.40%
			{4294.46842873656, "CUP_smg_bizon"}, // 0.38%
			{4332.5636668318, "CUP_smg_MP5A5"}, // 0.38%
			{4370.12235227781, "Exile_Magazine_8Rnd_9x18"}, // 0.38%
			{4407.68103772382, "10Rnd_9x21_Mag"}, // 0.38%
			{4445.23972316983, "Exile_Magazine_6Rnd_45ACP"}, // 0.38%
			{4482.79840861584, "Exile_Magazine_7Rnd_45ACP"}, // 0.38%
			{4520.35709406185, "hlc_30Rnd_9x19_B_MP5"}, // 0.38%
			{4557.91577950786, "30Rnd_9x21_Mag"}, // 0.38%
			{4595.47446495387, "11Rnd_45ACP_Mag"}, // 0.38%
			{4633.03315039988, "9Rnd_45ACP_Mag"}, // 0.38%
			{4670.30913606296, "CUP_30Rnd_9x19_MP5"}, // 0.37%
			{4707.58512172605, "CUP_64Rnd_9x19_Bizon_M"}, // 0.37%
			{4744.86110738913, "CUP_30Rnd_9x19_EVO"}, // 0.37%
			{4782.13709305221, "30Rnd_9x21_Mag_SMG_02"}, // 0.37%
			{4819.4130787153, "hlc_30Rnd_9x19_GD_MP5"}, // 0.37%
			{4855.70937501159, "Exile_Item_Cheathas"}, // 0.36%
			{4892.00567130789, "Exile_Item_Surstromming"}, // 0.36%
			{4928.30196760418, "Exile_Item_SausageGravy"}, // 0.36%
			{4964.59826390048, "Exile_Item_ChristmasTinner"}, // 0.36%
			{5000.89456019678, "Exile_Item_MacasCheese"}, // 0.36%
			{5037.19085649307, "Exile_Item_BBQSandwich"}, // 0.36%
			{5073.48715278937, "Exile_Item_CatFood"}, // 0.36%
			{5109.78344908567, "Exile_Item_Dogfood"}, // 0.36%
			{5146.07974538196, "Exile_Item_BeefParts"}, // 0.36%
			{5182.37604167826, "Exile_Item_DsNuts"}, // 0.36%
			{5218.67233797456, "Exile_Item_Noodles"}, // 0.36%
			{5254.78344908567, "hgun_Pistol_01_F"}, // 0.36%
			{5290.89456019678, "hgun_Rook40_F"}, // 0.36%
			{5327.00567130789, "hgun_P07_khk_F"}, // 0.36%
			{5363.116782419, "CUP_hgun_SA61"}, // 0.36%
			{5398.67233797456, "Binocular"}, // 0.36%
			{5434.22789353011, "ItemRadio"}, // 0.36%
			{5469.78344908567, "ItemCompass"}, // 0.36%
			{5504.67441481776, "B_AssaultPack_sgg"}, // 0.35%
			{5539.56538054984, "B_AssaultPack_mcamo"}, // 0.35%
			{5574.45634628193, "B_AssaultPack_khk"}, // 0.35%
			{5609.34731201402, "B_AssaultPack_dgtl"}, // 0.35%
			{5644.23827774611, "B_AssaultPack_tna_F"}, // 0.35%
			{5679.12924347819, "B_AssaultPack_blk"}, // 0.35%
			{5714.02020921028, "B_AssaultPack_rgr"}, // 0.35%
			{5748.91117494237, "B_AssaultPack_cbr"}, // 0.35%
			{5782.71399184378, "hlc_30Rnd_9x19_GD_MP5"}, // 0.34%
			{5816.51680874519, "CUP_18Rnd_9x19_Phantom"}, // 0.34%
			{5850.31962564659, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.34%
			{5884.122442548, "CUP_30Rnd_9x19_UZI"}, // 0.34%
			{5917.45577588134, "V_TacVest_blk_POLICE"}, // 0.33%
			{5950.78910921467, "CUP_hgun_Duty_M3X"}, // 0.33%
			{5984.122442548, "hgun_P07_F"}, // 0.33%
			{6017.45577588134, "V_Press_F"}, // 0.33%
			{6050.37758658092, "hlc_20Rnd_762x51_B_fal"}, // 0.33%
			{6082.37758658092, "H_Hat_grey"}, // 0.32%
			{6114.37758658092, "H_Hat_tan"}, // 0.32%
			{6146.37758658092, "H_Hat_blue"}, // 0.32%
			{6178.37758658092, "H_Cap_press"}, // 0.32%
			{6210.37758658092, "H_Cap_red"}, // 0.32%
			{6242.37758658092, "H_Cap_tan"}, // 0.32%
			{6274.37758658092, "H_StrawHat"}, // 0.32%
			{6306.37758658092, "H_StrawHat_dark"}, // 0.32%
			{6338.37758658092, "H_Hat_brown"}, // 0.32%
			{6370.37758658092, "H_Hat_checker"}, // 0.32%
			{6401.98252485253, "optic_Aco"}, // 0.32%
			{6433.58746312413, "optic_Aco_smg"}, // 0.32%
			{6465.19240139574, "optic_ACO_grn_smg"}, // 0.32%
			{6496.79733966734, "optic_Holosight_smg_blk_F"}, // 0.32%
			{6528.40227793895, "optic_ACO_grn"}, // 0.32%
			{6560.00721621055, "optic_Holosight_smg"}, // 0.32%
			{6591.11832732166, "Exile_Item_GloriousKnakworst"}, // 0.31%
			{6621.16527567847, "6Rnd_45ACP_Cylinder"}, // 0.30%
			{6651.12782249495, "CUP_muzzle_snds_MicroUzi"}, // 0.30%
			{6681.09036931143, "CUP_acc_Glock17_Flashlight"}, // 0.30%
			{6711.05291612791, "CUP_acc_CZ_M3X"}, // 0.30%
			{6740.90366239657, "hlc_rifle_L1A1SLR"}, // 0.30%
			{6768.97383783516, "U_C_Journalist"}, // 0.28%
			{6797.04401327376, "U_C_HunterBody_grn"}, // 0.28%
			{6825.11418871235, "U_C_Poor_shorts_1"}, // 0.28%
			{6853.18436415095, "U_C_Poor_2"}, // 0.28%
			{6881.25453958955, "U_C_Poor_1"}, // 0.28%
			{6909.32471502814, "U_C_Scientist"}, // 0.28%
			{6937.39489046674, "U_Rangemaster"}, // 0.28%
			{6965.17266824452, "CUP_hgun_PB6P9_snds"}, // 0.28%
			{6992.13896037935, "CUP_muzzle_snds_M9"}, // 0.27%
			{7018.80562704602, "Exile_Item_ZipTie"}, // 0.27%
			{7045.47229371268, "H_Bandanna_surfer"}, // 0.27%
			{7072.13896037935, "H_Beret_blk_POLICE"}, // 0.27%
			{7098.80562704602, "H_Cap_blk"}, // 0.27%
			{7125.47229371268, "H_Cap_blk_Raven"}, // 0.27%
			{7152.13896037935, "H_Cap_blu"}, // 0.27%
			{7178.80562704602, "H_Cap_oli"}, // 0.27%
			{7205.47229371269, "H_Cap_grn"}, // 0.27%
			{7232.13896037935, "H_Cap_headphones"}, // 0.27%
			{7258.06488630528, "Exile_Item_CanOpener"}, // 0.26%
			{7283.9908122312, "Exile_Item_Matches"}, // 0.26%
			{7308.91293061127, "B_Kitbag_cbr"}, // 0.25%
			{7333.83504899133, "B_Kitbag_mcamo"}, // 0.25%
			{7358.75716737139, "B_Kitbag_sgg"}, // 0.25%
			{7383.44852539608, "hlc_optic_kobra"}, // 0.25%
			{7407.15222909978, "CUP_optic_ACOG"}, // 0.24%
			{7430.61263965697, "TRYK_B_Kitbag_Base"}, // 0.23%
			{7454.07305021415, "TRYK_B_Belt"}, // 0.23%
			{7477.53346077134, "TRYK_B_Kitbag_blk"}, // 0.23%
			{7500.86679410467, "Exile_Item_PowerDrink"}, // 0.23%
			{7523.72393696181, "CUP_smg_bizon_snds"}, // 0.23%
			{7546.58107981896, "CUP_smg_EVO"}, // 0.23%
			{7569.11629108656, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.23%
			{7591.48188248441, "hlc_30rnd_556x45_b_hk33"}, // 0.22%
			{7613.70410470663, "CUP_hgun_MicroUzi"}, // 0.22%
			{7635.5364633811, "U_C_Poloshirt_salmon"}, // 0.22%
			{7657.36882205556, "U_C_Poloshirt_stripped"}, // 0.22%
			{7679.20118073003, "U_C_Poloshirt_burgundy"}, // 0.22%
			{7701.03353940449, "U_C_Poloshirt_blue"}, // 0.22%
			{7722.86589807895, "U_C_Poloshirt_tricolour"}, // 0.22%
			{7743.83968085049, "optic_MRD"}, // 0.21%
			{7764.81346362202, "optic_Yorris"}, // 0.21%
			{7785.14581943825, "TRYK_B_Belt_CYT"}, // 0.20%
			{7805.47817525448, "TRYK_B_tube_cyt"}, // 0.20%
			{7825.8105310707, "TRYK_B_Kitbag_aaf"}, // 0.20%
			{7845.25497551515, "hgun_Pistol_heavy_02_F"}, // 0.19%
			{7864.69941995959, "hgun_ACPC2_F"}, // 0.19%
			{7883.74703900721, "SmokeShellOrange"}, // 0.19%
			{7902.79465805483, "SmokeShellBlue"}, // 0.19%
			{7921.84227710245, "SmokeShellPurple"}, // 0.19%
			{7940.88989615007, "SmokeShell"}, // 0.19%
			{7959.93751519769, "SmokeShellYellow"}, // 0.19%
			{7978.98513424531, "SmokeShellGreen"}, // 0.19%
			{7998.03275329293, "SmokeShellRed"}, // 0.19%
			{8016.81209601593, "16Rnd_9x21_Mag"}, // 0.19%
			{8035.58042446168, "TRYK_B_BAF_BAG_BLK"}, // 0.19%
			{8054.34875290743, "TRYK_B_Belt_br"}, // 0.19%
			{8073.11708135317, "TRYK_B_Belt_BLK"}, // 0.19%
			{8091.88540979892, "TRYK_B_Alicepack"}, // 0.19%
			{8110.65373824467, "TRYK_B_Kitbag_Base_JSDF"}, // 0.19%
			{8129.42206669042, "TRYK_B_Belt_GR"}, // 0.19%
			{8148.19039513617, "TRYK_B_Belt_tan"}, // 0.19%
			{8166.95872358191, "TRYK_B_FieldPack_Wood"}, // 0.19%
			{8184.16302465718, "TRYK_B_BAF_BAG_OD"}, // 0.17%
			{8201.36732573245, "TRYK_B_BAF_BAG_CYT"}, // 0.17%
			{8218.57162680772, "TRYK_B_Belt_AOR1"}, // 0.17%
			{8235.77592788299, "TRYK_B_Belt_AOR2"}, // 0.17%
			{8252.44259454966, "Exile_Item_PlasticBottleCoffee"}, // 0.17%
			{8269.10926121632, "Exile_Weapon_Makarov"}, // 0.17%
			{8284.74953492111, "TRYK_B_tube_od"}, // 0.16%
			{8300.3898086259, "TRYK_B_tube_blk"}, // 0.16%
			{8316.03008233069, "TRYK_B_AssaultPack_Type2camo"}, // 0.16%
			{8331.67035603548, "TRYK_B_AssaultPack_UCP"}, // 0.16%
			{8347.26489794582, "U_C_Man_casual_4_F"}, // 0.16%
			{8362.85943985615, "U_I_C_Soldier_Bandit_2_F"}, // 0.16%
			{8378.45398176648, "U_C_Man_casual_6_F"}, // 0.16%
			{8394.04852367681, "U_C_Man_casual_1_F"}, // 0.16%
			{8409.64306558714, "U_I_C_Soldier_Bandit_4_F"}, // 0.16%
			{8425.23760749747, "U_C_man_sport_3_F"}, // 0.16%
			{8440.83214940781, "U_C_Man_casual_5_F"}, // 0.16%
			{8456.42669131814, "U_I_C_Soldier_Bandit_1_F"}, // 0.16%
			{8472.02123322847, "U_C_man_sport_2_F"}, // 0.16%
			{8487.6157751388, "U_I_C_Soldier_Bandit_3_F"}, // 0.16%
			{8503.21031704913, "U_C_man_sport_1_F"}, // 0.16%
			{8518.80485895947, "U_I_C_Soldier_Bandit_5_F"}, // 0.16%
			{8534.3994008698, "U_C_Man_casual_3_F"}, // 0.16%
			{8549.99394278013, "U_C_Man_casual_2_F"}, // 0.16%
			{8565.54949833568, "Exile_Item_CookingPot"}, // 0.16%
			{8581.10505389124, "Exile_Item_EMRE"}, // 0.16%
			{8596.34314912933, "hgun_PDW2000_F"}, // 0.15%
			{8611.58124436743, "SMG_05_F"}, // 0.15%
			{8626.49163863266, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.15%
			{8641.4020328979, "30Rnd_45ACP_Mag_SMG_01"}, // 0.15%
			{8656.31242716313, "hlc_30rnd_556x45_t_hk33"}, // 0.15%
			{8671.22282142836, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.15%
			{8686.13321569359, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.15%
			{8700.2094620279, "TRYK_B_BAF_BAG_mcamo"}, // 0.14%
			{8714.09835091679, "Exile_Weapon_Colt1911"}, // 0.14%
			{8727.2438908229, "6Rnd_RedSignal_F"}, // 0.13%
			{8740.389430729, "6Rnd_GreenSignal_F"}, // 0.13%
			{8752.90164969283, "TRYK_B_Medbag_OD"}, // 0.13%
			{8765.41386865666, "TRYK_B_Medbag_ucp"}, // 0.13%
			{8777.92608762049, "TRYK_B_BAF_BAG_rgr"}, // 0.13%
			{8790.43830658432, "TRYK_B_Medbag"}, // 0.13%
			{8802.95052554816, "TRYK_B_Medbag_BK"}, // 0.13%
			{8814.13332124708, "hlc_30rnd_556x45_epr_hk33"}, // 0.11%
			{8825.31611694601, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.11%
			{8836.42722805712, "Exile_Weapon_TaurusGold"}, // 0.11%
			{8845.07228208871, "TRYK_Hrp_vest_od"}, // 0.09%
			{8853.40561542204, "Exile_Weapon_Taurus"}, // 0.08%
			{8861.73894875537, "hgun_Pistol_Signal_F"}, // 0.08%
			{8869.71899863069, "TRYK_Hrp_vest_ucp"}, // 0.08%
			{8877.699048506, "TRYK_LOC_AK_chestrig_OD"}, // 0.08%
			{8885.51918535839, "TRYK_B_Coyotebackpack_BLK"}, // 0.08%
			{8893.33932221079, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.08%
			{8901.15945906318, "TRYK_B_Coyotebackpack"}, // 0.08%
			{8908.97959591558, "TRYK_B_Coyotebackpack_OD"}, // 0.08%
			{8916.79973276797, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.08%
			{8924.41878038702, "SMG_01_F"}, // 0.08%
			{8932.03782800607, "SMG_02_F"}, // 0.08%
			{8938.68786956883, "TRYK_V_Sheriff_BA_TB"}, // 0.07%
			{8944.61379549475, "Exile_Item_MobilePhone"}, // 0.06%
			{8950.53972142068, "ItemGPS"}, // 0.06%
			{8955.85975467089, "TRYK_LOC_AK_chestrig_TAN"}, // 0.05%
			{8960.58788705859, "TRYK_ESS_CAP_tan"}, // 0.05%
			{8965.3160194463, "TRYK_H_PASGT_TAN"}, // 0.05%
			{8970.04415183401, "TRYK_H_Helmet_Snow"}, // 0.05%
			{8974.77228422171, "TRYK_H_WH"}, // 0.05%
			{8979.50041660942, "TRYK_H_GR"}, // 0.05%
			{8984.22854899713, "TRYK_H_AOR1"}, // 0.05%
			{8988.95668138483, "TRYK_H_AOR2"}, // 0.05%
			{8993.68481377254, "TRYK_H_EARMUFF"}, // 0.05%
			{8998.41294616025, "TRYK_H_TACEARMUFF_H"}, // 0.05%
			{9003.14107854795, "TRYK_H_Bandana_H"}, // 0.05%
			{9007.86921093566, "TRYK_H_Bandana_wig"}, // 0.05%
			{9012.59734332337, "TRYK_H_Bandana_wig_g"}, // 0.05%
			{9017.32547571108, "TRYK_H_wig"}, // 0.05%
			{9022.05360809878, "TRYK_H_headset2"}, // 0.05%
			{9026.78174048649, "TRYK_H_woolhat"}, // 0.05%
			{9031.5098728742, "TRYK_H_woolhat_CW"}, // 0.05%
			{9036.2380052619, "TRYK_H_woolhat_WH"}, // 0.05%
			{9040.96613764961, "TRYK_H_woolhat_br"}, // 0.05%
			{9045.69427003732, "TRYK_H_woolhat_cu"}, // 0.05%
			{9050.42240242502, "TRYK_H_woolhat_tan"}, // 0.05%
			{9055.15053481273, "TRYK_H_headsetcap"}, // 0.05%
			{9059.87866720044, "TRYK_H_headsetcap_blk"}, // 0.05%
			{9064.60679958814, "TRYK_H_headsetcap_od"}, // 0.05%
			{9069.33493197585, "TRYK_H_pakol"}, // 0.05%
			{9074.06306436356, "TRYK_H_pakol2"}, // 0.05%
			{9078.79119675126, "TRYK_ESS_CAP_OD"}, // 0.05%
			{9083.51932913897, "TRYK_H_PASGT_COYO"}, // 0.05%
			{9088.24746152668, "TRYK_H_PASGT_OD"}, // 0.05%
			{9092.97559391439, "TRYK_TAC_SET_WH_2"}, // 0.05%
			{9097.70372630209, "TRYK_bandana_g"}, // 0.05%
			{9102.4318586898, "TRYK_R_CAP_BLK"}, // 0.05%
			{9107.15999107751, "TRYK_H_PASGT_BLK"}, // 0.05%
			{9111.88812346521, "TRYK_R_CAP_TAN"}, // 0.05%
			{9116.61625585292, "TRYK_R_CAP_OD_US"}, // 0.05%
			{9121.34438824063, "TRYK_r_cap_blk_Glasses"}, // 0.05%
			{9126.07252062833, "TRYK_r_cap_od_Glasses"}, // 0.05%
			{9130.80065301604, "TRYK_H_headsetcap_Glasses"}, // 0.05%
			{9135.52878540375, "TRYK_H_headsetcap_blk_Glasses"}, // 0.05%
			{9140.25691779145, "TRYK_H_headsetcap_od_Glasses"}, // 0.05%
			{9144.98505017916, "TRYK_TAC_EARMUFF_SHADE"}, // 0.05%
			{9149.71318256687, "TRYK_TAC_EARMUFF"}, // 0.05%
			{9154.44131495457, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.05%
			{9159.16944734228, "TRYK_r_cap_tan_Glasses"}, // 0.05%
			{9163.89757972999, "TRYK_TAC_EARMUFF_Gs"}, // 0.05%
			{9168.6257121177, "TRYK_TAC_SET_bn"}, // 0.05%
			{9173.3538445054, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.05%
			{9178.08197689311, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.05%
			{9182.81010928082, "TRYK_TAC_SET_TAN"}, // 0.05%
			{9187.53824166852, "TRYK_TAC_SET_OD"}, // 0.05%
			{9192.26637405623, "TRYK_TAC_SET_MESH"}, // 0.05%
			{9196.99450644394, "TRYK_headset2"}, // 0.05%
			{9201.72263883164, "TRYK_TAC_SET_TAN_2"}, // 0.05%
			{9206.45077121935, "TRYK_TAC_SET_OD_2"}, // 0.05%
			{9211.17890360706, "TRYK_TAC_SET_MESH_2"}, // 0.05%
			{9215.87098571849, "TRYK_B_Coyotebackpack_WH"}, // 0.05%
			{9220.52601481243, "TRYK_V_Sheriff_BA_T3"}, // 0.05%
			{9225.18104390636, "TRYK_V_Sheriff_BA_T2"}, // 0.05%
			{9229.83607300029, "TRYK_V_Sheriff_BA_TB2"}, // 0.05%
			{9233.61857891045, "TRYK_TAC_SET_WH"}, // 0.04%
			{9237.40108482062, "TRYK_H_LHS_HEL_G"}, // 0.04%
			{9240.726105602, "TRYK_V_ArmorVest_green2"}, // 0.03%
			{9244.05112638338, "TRYK_V_ArmorVest_rgr2"}, // 0.03%
			{9247.37614716476, "TRYK_V_ArmorVest_tan2"}, // 0.03%
			{9250.70116794614, "TRYK_V_ArmorVest_Ranger2"}, // 0.03%
			{9254.02618872752, "TRYK_V_TacVest_coyo"}, // 0.03%
			{9257.3512095089, "TRYK_V_harnes_blk_L"}, // 0.03%
			{9260.67623029028, "TRYK_V_Sheriff_BA_OD"}, // 0.03%
			{9264.00125107166, "TRYK_V_harnes_TAN_L"}, // 0.03%
			{9267.32627185304, "TRYK_V_ChestRig_L"}, // 0.03%
			{9270.65129263442, "TRYK_V_ChestRig"}, // 0.03%
			{9273.9763134158, "TRYK_V_tacv10_BK"}, // 0.03%
			{9277.30133419718, "TRYK_V_ArmorVest_khk2"}, // 0.03%
			{9280.62635497856, "TRYK_V_harnes_od_L"}, // 0.03%
			{9283.95137575994, "TRYK_V_ArmorVest_cbr2"}, // 0.03%
			{9287.27639654132, "TRYK_V_ArmorVest_coyo"}, // 0.03%
			{9290.6014173227, "TRYK_V_ArmorVest_coyo2"}, // 0.03%
			{9293.92643810408, "TRYK_V_ArmorVest_AOR2_2"}, // 0.03%
			{9297.25145888546, "TRYK_V_ArmorVest_AOR1_2"}, // 0.03%
			{9300.57647966684, "TRYK_V_ArmorVest_Ranger"}, // 0.03%
			{9303.90150044822, "TRYK_V_ArmorVest_Delta"}, // 0.03%
			{9307.2265212296, "TRYK_V_ArmorVest_tan"}, // 0.03%
			{9310.55154201098, "TRYK_V_ArmorVest_green"}, // 0.03%
			{9313.87656279236, "TRYK_V_ArmorVest_rgr"}, // 0.03%
			{9317.20158357374, "TRYK_V_ArmorVest_khk"}, // 0.03%
			{9320.52660435512, "TRYK_V_ArmorVest_CBR"}, // 0.03%
			{9323.8516251365, "TRYK_V_ArmorVest_Brown"}, // 0.03%
			{9327.17664591788, "TRYK_V_tacv10_OD"}, // 0.03%
			{9330.50166669926, "TRYK_V_ArmorVest_AOR2"}, // 0.03%
			{9333.82668748064, "TRYK_V_ArmorVest_AOR1"}, // 0.03%
			{9337.15170826202, "TRYK_V_ArmorVest_Brown2"}, // 0.03%
			{9340.4767290434, "TRYK_V_tacv10_TN"}, // 0.03%
			{9343.80174982478, "TRYK_V_ArmorVest_Delta2"}, // 0.03%
			{9347.12677060616, "TRYK_V_tacv10LC_OD"}, // 0.03%
			{9350.45179138754, "TRYK_V_tacv10LC_BK"}, // 0.03%
			{9353.77681216892, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.03%
			{9357.10183295029, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.03%
			{9360.42685373167, "TRYK_V_Sheriff_BA_TB5"}, // 0.03%
			{9363.75187451305, "TRYK_V_Sheriff_BA_T5"}, // 0.03%
			{9367.07689529443, "TRYK_V_Sheriff_BA_T4"}, // 0.03%
			{9370.40191607581, "TRYK_V_Sheriff_BA_TB3"}, // 0.03%
			{9373.72693685719, "TRYK_V_Sheriff_BA_T"}, // 0.03%
			{9377.05195763857, "TRYK_V_Sheriff_BA_TCL2"}, // 0.03%
			{9380.37697841995, "TRYK_V_Sheriff_BA_TBL2"}, // 0.03%
			{9383.70199920133, "TRYK_V_Sheriff_BA_TL2"}, // 0.03%
			{9387.02701998271, "TRYK_V_Sheriff_BA_TCL"}, // 0.03%
			{9390.35204076409, "TRYK_V_Sheriff_BA_TBL"}, // 0.03%
			{9393.67706154547, "TRYK_V_Sheriff_BA_TL"}, // 0.03%
			{9397.00208232685, "TRYK_V_tacSVD_OD"}, // 0.03%
			{9400.32710310823, "TRYK_V_Sheriff_BA_TB4"}, // 0.03%
			{9403.65212388961, "TRYK_V_tacv1LC_MSL_NV"}, // 0.03%
			{9406.97714467099, "TRYK_V_tacv10LC_TN"}, // 0.03%
			{9410.30216545237, "TRYK_V_tacv1L_BK"}, // 0.03%
			{9413.62718623375, "TRYK_V_tacSVD_BK"}, // 0.03%
			{9416.95220701513, "TRYK_V_tacv1L_OD"}, // 0.03%
			{9420.27722779651, "TRYK_V_tacv1L_CY"}, // 0.03%
			{9423.60224857789, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.03%
			{9426.92726935927, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.03%
			{9430.25229014065, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.03%
			{9433.57731092203, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.03%
			{9436.90233170341, "TRYK_V_tacv1LC_P2_BK"}, // 0.03%
			{9440.22735248479, "TRYK_V_tacv1LC_MSL_BK"}, // 0.03%
			{9443.55237326617, "TRYK_V_tacv1LMSL_BK"}, // 0.03%
			{9446.87739404755, "TRYK_V_tacv1LMSL_NV"}, // 0.03%
			{9450.20241482893, "TRYK_V_tacv1_MSL_BK"}, // 0.03%
			{9453.52743561031, "TRYK_V_tacv1_MSL_NV"}, // 0.03%
			{9456.64634399238, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9459.76525237444, "TRYK_ZARATAKI"}, // 0.03%
			{9462.88416075651, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9466.00306913858, "TRYK_B_USMC_R"}, // 0.03%
			{9469.12197752064, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9472.24088590271, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9475.35979428478, "TRYK_U_B_PCUHs"}, // 0.03%
			{9478.47870266684, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9481.59761104891, "TRYK_U_taki_G_BL"}, // 0.03%
			{9484.71651943097, "TRYK_U_taki_G_COY"}, // 0.03%
			{9487.83542781304, "TRYK_U_taki_G_WH"}, // 0.03%
			{9490.95433619511, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9494.07324457717, "TRYK_ZARATAKI2"}, // 0.03%
			{9497.19215295924, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9500.31106134131, "TRYK_U_taki_BLK"}, // 0.03%
			{9503.42996972337, "TRYK_U_taki_BL"}, // 0.03%
			{9506.54887810544, "TRYK_U_taki_COY"}, // 0.03%
			{9509.66778648751, "TRYK_U_taki_wh"}, // 0.03%
			{9512.78669486957, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9515.90560325164, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9519.0245116337, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9522.14342001577, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9525.26232839784, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9528.3812367799, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9531.50014516197, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9534.61905354404, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9537.7379619261, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9540.85687030817, "U_OrestesBody"}, // 0.03%
			{9543.97577869024, "U_NikosBody"}, // 0.03%
			{9547.0946870723, "U_NikosAgedBody"}, // 0.03%
			{9550.21359545437, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9553.33250383643, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9556.4514122185, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9559.57032060057, "TRYK_SUITS_BR_F"}, // 0.03%
			{9562.68922898263, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9565.8081373647, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9568.92704574677, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9572.04595412883, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9575.1648625109, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9578.28377089297, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9581.40267927503, "TRYK_OVERALL_flesh"}, // 0.03%
			{9584.5215876571, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9587.64049603916, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9590.75940442123, "TRYK_U_B_Wood_T"}, // 0.03%
			{9593.8783128033, "TRYK_U_B_Sage_T"}, // 0.03%
			{9596.99722118536, "TRYK_C_AOR2_T"}, // 0.03%
			{9600.11612956743, "TRYK_DMARPAT_T"}, // 0.03%
			{9603.2350379495, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9606.35394633156, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9609.47285471363, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9612.5917630957, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9615.71067147776, "TRYK_ZARATAKI3"}, // 0.03%
			{9618.82957985983, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9621.94848824189, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9625.06739662396, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9628.18630500603, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9631.30521338809, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9634.42412177016, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9637.54303015223, "TRYK_U_B_fleece"}, // 0.03%
			{9640.66193853429, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9643.78084691636, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9646.89975529843, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9650.01866368049, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9653.13757206256, "TRYK_U_B_PCUs"}, // 0.03%
			{9656.25648044462, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9659.37538882669, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9662.49429720876, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9665.61320559082, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9668.73211397289, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9671.85102235496, "TRYK_U_B_PCUODs"}, // 0.03%
			{9674.96993073702, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9678.08883911909, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9681.20774750116, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9684.32665588322, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9687.44556426529, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9690.56447264735, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9693.68338102942, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9696.80228941149, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9699.92119779355, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9703.04010617562, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9706.15901455769, "TRYK_U_pad_j"}, // 0.03%
			{9709.27792293975, "TRYK_U_B_PCUGs"}, // 0.03%
			{9712.39683132182, "TRYK_U_pad_j_blk"}, // 0.03%
			{9715.51573970389, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9718.63464808595, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9721.75355646802, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9724.87246485008, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9727.99137323215, "TRYK_U_B_ACU"}, // 0.03%
			{9731.11028161422, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9734.22918999628, "TRYK_U_B_3c"}, // 0.03%
			{9737.34809837835, "TRYK_U_B_3cr"}, // 0.03%
			{9740.46700676042, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9743.58591514248, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9746.70482352455, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9749.82373190662, "TRYK_U_B_BLK"}, // 0.03%
			{9752.94264028868, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9756.06154867075, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9759.18045705281, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9762.29936543488, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9765.41827381695, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9768.53718219901, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9771.65609058108, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9774.77499896315, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9777.89390734521, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9781.01281572728, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9784.13172410935, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9787.25063249141, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9790.36954087348, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9793.48844925554, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9796.60735763761, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9799.72626601968, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9802.84517440174, "TRYK_U_B_ODTAN"}, // 0.03%
			{9805.96408278381, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9809.08299116588, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9812.20189954794, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9815.32080793001, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9818.43971631208, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9821.55862469414, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9824.67753307621, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9827.79644145827, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9830.91534984034, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9834.03425822241, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9837.15316660447, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9840.27207498654, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9843.39098336861, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9846.50989175067, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9849.62880013274, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9852.74770851481, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9855.86661689687, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9858.98552527894, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9862.104433661, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9865.22334204307, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9868.34225042514, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9871.4611588072, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9874.58006718927, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9877.69897557134, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9880.8178839534, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9883.93679233547, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9887.05570071754, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9890.1746090996, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9893.29351748167, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9896.41242586373, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9899.5313342458, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9902.65024262787, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9905.76915100993, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9908.888059392, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9912.00696777407, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9915.12587615613, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9918.2447845382, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9921.36369292027, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9924.48260130233, "TRYK_hoodie_Blk"}, // 0.03%
			{9927.6015096844, "TRYK_hoodie_FR"}, // 0.03%
			{9930.72041806646, "TRYK_hoodie_Wood"}, // 0.03%
			{9933.83932644853, "TRYK_hoodie_3c"}, // 0.03%
			{9936.9582348306, "TRYK_T_PAD"}, // 0.03%
			{9940.07714321266, "TRYK_T_OD_PAD"}, // 0.03%
			{9943.19605159473, "TRYK_T_TAN_PAD"}, // 0.03%
			{9946.3149599768, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9949.43386835886, "TRYK_T_BLK_PAD"}, // 0.03%
			{9952.55277674093, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9955.671685123, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9958.79059350506, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9961.90950188713, "TRYK_shirts_PAD"}, // 0.03%
			{9965.02841026919, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9968.14731865126, "TRYK_T_T2_PAD"}, // 0.03%
			{9971.26622703333, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9974.38513541539, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9977.50404379746, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9980.62295217953, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9983.74186056159, "TRYK_U_hood_mc"}, // 0.03%
			{9986.86076894366, "TRYK_U_hood_nc"}, // 0.03%
			{9989.97967732573, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9993.09858570779, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9996.21749408986, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9998.10874704494, "TRYK_H_Helmet_Winter_2"}, // 0.02%
			{10000, "TRYK_H_Helmet_Winter"} // 0.02%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Magazine_10Rnd_303
	  TRYK_V_ArmorVest_AOR1
	  Exile_Item_Can_Empty
	  hlc_10rnd_12g_buck_S12
	  TRYK_B_Kitbag_Base_JSDF
	  Exile_Item_MountainDupe
	  hlc_rifle_hk53
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_ChocolateMilk
	  Exile_Item_Moobar
	  Exile_Item_ToiletPaper
	  Exile_Item_InstantCoffee
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  hlc_rifle_M1903A1
	  Exile_Item_Can_Empty
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_DsNuts
	  Exile_Item_Heatpack
	  ItemWatch
	  TRYK_V_ArmorVest_AOR1
	  Exile_Item_Can_Empty
	  Exile_Melee_SledgeHammer
	  TRYK_U_B_PCUGs_BLK
	  30Rnd_9x21_Mag
	  Exile_Item_ToiletPaper
	  TRYK_B_Belt_AOR1
	  B_AssaultPack_rgr
	  Exile_Item_PowerDrink
	  Exile_Item_MountainDupe
	  hgun_P07_khk_F
	  Exile_Item_Magazine02
	  TRYK_B_Belt_AOR2
	  Exile_Item_MountainDupe
	  Exile_Item_Vishpirin
	  hgun_Pistol_01_F
	  6Rnd_RedSignal_F
	  hlc_rifle_hk53
	  Exile_Item_Can_Empty
	  Exile_Item_CanOpener
	  Exile_Item_CanOpener
	  hlc_rifle_M1903A1
	  Exile_Item_Beer
	  Exile_Item_Beer
	  Exile_Item_Heatpack
	  Exile_Item_EnergyDrink
	  ItemWatch
	  TRYK_U_pad_hood_Cl
	  hlc_rifle_saiga12k
	  CUP_muzzle_snds_MicroUzi
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_MacasCheese
	  Exile_Item_Raisins
	  Exile_Item_Heatpack
	  Exile_Item_InstantCoffee
	  TRYK_V_tacv1L_OD
	  Exile_Item_MountainDupe
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_EnergyDrink
	  Exile_Item_PlasticBottleDirtyWater
	  TRYK_H_headsetcap_od
	  hlc_30Rnd_9x19_B_MP5
	  CUP_smg_MP5SD6
	  Exile_Item_ZipTie
	  Exile_Magazine_10Rnd_303
	  TRYK_U_B_BLK3CD
	  B_OutdoorPack_blu
	  H_Cap_grn
	  Exile_Item_Vishpirin
	  Exile_Magazine_5Rnd_22LR
	  hlc_smg_mp5k_PDW
	  30Rnd_9x21_Mag
	  Exile_Item_DsNuts
	  Exile_Item_Surstromming
	  SmokeShellPurple
	  CUP_smg_MP5SD6
	  CUP_smg_MP5A5
	  hgun_Pistol_01_F
	  SmokeShellOrange
	  Exile_Item_Raisins
	  FlareRed_F
	  H_Hat_blue
	  Exile_Item_DsNuts
	  B_OutdoorPack_tan
	  Exile_Item_BeefParts
	  Exile_Weapon_LeeEnfield
	  TRYK_V_Sheriff_BA_TB4
	  hlc_10rnd_12g_buck_S12
	  CUP_smg_MP5A5
	  Exile_Item_Vishpirin
	  B_OutdoorPack_blk
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_PlasticBottleCoffee
	  TRYK_TAC_SET_OD
	  hlc_rifle_hk53
	  Exile_Item_ToiletPaper
	  10Rnd_9x21_Mag
	  TRYK_V_TacVest_coyo
	  muzzle_snds_acp
	*/
	class Shop
	{
		count = 580;
		half = 9189.01869163229;
		halfIndex = 290;
		sum = 9999.99999999982;
		items[] = 
		{
			{285.171102661597, "Exile_Item_Can_Empty"}, // 2.85%
			{570.342205323194, "Exile_Item_ToiletPaper"}, // 2.85%
			{855.513307984791, "Exile_Item_PlasticBottleEmpty"}, // 2.85%
			{1093.15589353612, "Exile_Item_PlasticBottleDirtyWater"}, // 2.38%
			{1283.26996197719, "Exile_Item_ChocolateMilk"}, // 1.90%
			{1473.38403041825, "Exile_Item_MountainDupe"}, // 1.90%
			{1643.83112626196, "Exile_Item_Vishpirin"}, // 1.70%
			{1814.27822210568, "Exile_Item_Heatpack"}, // 1.70%
			{1984.52962667977, "Exile_Weapon_LeeEnfield"}, // 1.70%
			{2146.12658485467, "Exile_Item_EnergyDrink"}, // 1.62%
			{2305.02789579049, "hlc_rifle_saiga12k"}, // 1.59%
			{2438.10774369923, "Exile_Item_Beer"}, // 1.33%
			{2560.15628146387, "hlc_10rnd_12g_buck_S12"}, // 1.22%
			{2674.2247225285, "Exile_Item_ZipTie"}, // 1.14%
			{2788.29316359314, "Exile_Item_PlasticBottleFreshWater"}, // 1.14%
			{2901.79409997587, "Exile_Weapon_M1014"}, // 1.14%
			{3015.29503635859, "CUP_sgun_Saiga12K"}, // 1.14%
			{3128.79597274132, "hlc_rifle_M1903A1"}, // 1.14%
			{3232.06781238832, "hlc_10rnd_12g_slug_S12"}, // 1.03%
			{3325.9513029765, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.94%
			{3419.83479356468, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.94%
			{3513.71828415286, "Exile_Magazine_8Rnd_74Slug"}, // 0.94%
			{3607.60177474104, "Exile_Magazine_5Rnd_22LR"}, // 0.94%
			{3701.48526532922, "Exile_Magazine_10Rnd_303"}, // 0.94%
			{3788.62088003137, "Exile_Item_InstantCoffee"}, // 0.87%
			{3873.84442795323, "Exile_Item_Bandage"}, // 0.85%
			{3945.13720361863, "Exile_Item_Magazine03"}, // 0.71%
			{4016.42997928403, "Exile_Item_Moobar"}, // 0.71%
			{4087.72275494943, "Exile_Item_Magazine04"}, // 0.71%
			{4159.01553061482, "Exile_Item_Magazine02"}, // 0.71%
			{4230.30830628022, "Exile_Item_Magazine01"}, // 0.71%
			{4301.60108194562, "Exile_Item_Raisins"}, // 0.71%
			{4369.77992028311, "Exile_Item_InstaDoc"}, // 0.68%
			{4436.31984423748, "Exile_Item_PowerDrink"}, // 0.67%
			{4499.6912003845, "Exile_Item_SeedAstics"}, // 0.63%
			{4563.06255653152, "Exile_Item_CockONut"}, // 0.63%
			{4622.20915560208, "ItemWatch"}, // 0.59%
			{4678.95962379344, "Exile_Weapon_CZ550"}, // 0.57%
			{4734.40956042208, "Exile_Item_SausageGravy"}, // 0.55%
			{4789.85949705073, "Exile_Item_DsNuts"}, // 0.55%
			{4845.30943367937, "Exile_Item_CatFood"}, // 0.55%
			{4900.75937030801, "Exile_Item_MacasCheese"}, // 0.55%
			{4956.20930693666, "Exile_Item_BeefParts"}, // 0.55%
			{5011.6592435653, "Exile_Item_Cheathas"}, // 0.55%
			{5067.10918019394, "Exile_Item_Noodles"}, // 0.55%
			{5122.55911682259, "Exile_Item_Dogfood"}, // 0.55%
			{5178.00905345123, "Exile_Item_Surstromming"}, // 0.55%
			{5233.45899007987, "Exile_Item_ChristmasTinner"}, // 0.55%
			{5288.90892670852, "Exile_Item_BBQSandwich"}, // 0.55%
			{5342.37850845757, "CUP_hgun_Phantom"}, // 0.53%
			{5395.68151830086, "B_OutdoorPack_blk"}, // 0.53%
			{5443.65422715982, "B_OutdoorPack_blu"}, // 0.48%
			{5491.62693601878, "B_OutdoorPack_tan"}, // 0.48%
			{5539.15545312904, "Exile_Item_PlasticBottleCoffee"}, // 0.48%
			{5586.68397023931, "Exile_Item_GloriousKnakworst"}, // 0.48%
			{5634.21248734958, "Chemlight_red"}, // 0.48%
			{5681.74100445984, "Chemlight_yellow"}, // 0.48%
			{5729.26952157011, "FlareGreen_F"}, // 0.48%
			{5776.79803868037, "FlareRed_F"}, // 0.48%
			{5824.32655579064, "Chemlight_green"}, // 0.48%
			{5871.85507290091, "Chemlight_blue"}, // 0.48%
			{5919.38359001117, "FlareYellow_F"}, // 0.48%
			{5966.91210712144, "FlareWhite_F"}, // 0.48%
			{6014.22938637788, "Exile_Item_Heatpack"}, // 0.47%
			{6058.78737116876, "hlc_smg_mp5k"}, // 0.45%
			{6103.34535595963, "hlc_smg_mp5k_PDW"}, // 0.45%
			{6147.9033407505, "hgun_Pistol_heavy_01_F"}, // 0.45%
			{6190.54574862514, "B_HuntingBackpack"}, // 0.43%
			{6231.94836797452, "ItemMap"}, // 0.41%
			{6272.11331201137, "hlc_30Rnd_9x19_B_MP5"}, // 0.40%
			{6312.27825604821, "30Rnd_9x21_Mag"}, // 0.40%
			{6352.44320008506, "10Rnd_9x21_Mag"}, // 0.40%
			{6392.6081441219, "Exile_Magazine_6Rnd_45ACP"}, // 0.40%
			{6432.77308815875, "Exile_Magazine_8Rnd_9x18"}, // 0.40%
			{6472.93803219559, "Exile_Magazine_7Rnd_45ACP"}, // 0.40%
			{6513.10297623244, "9Rnd_45ACP_Mag"}, // 0.40%
			{6553.26792026928, "11Rnd_45ACP_Mag"}, // 0.40%
			{6592.87501786117, "Exile_Item_Matches"}, // 0.40%
			{6632.48211545306, "Exile_Item_CanOpener"}, // 0.40%
			{6671.09903560515, "hgun_Pistol_01_F"}, // 0.39%
			{6709.71595575724, "hgun_Rook40_F"}, // 0.39%
			{6748.33287590933, "hgun_P07_khk_F"}, // 0.39%
			{6786.94979606142, "CUP_hgun_SA61"}, // 0.39%
			{6824.97260974964, "CUP_smg_MP5SD6"}, // 0.38%
			{6862.52600598491, "hlc_20Rnd_762x51_B_fal"}, // 0.38%
			{6899.83811287521, "B_AssaultPack_tna_F"}, // 0.37%
			{6937.15021976551, "B_AssaultPack_mcamo"}, // 0.37%
			{6974.46232665582, "B_AssaultPack_dgtl"}, // 0.37%
			{7011.77443354612, "B_AssaultPack_rgr"}, // 0.37%
			{7049.08654043642, "B_AssaultPack_sgg"}, // 0.37%
			{7086.39864732673, "B_AssaultPack_blk"}, // 0.37%
			{7123.71075421703, "B_AssaultPack_cbr"}, // 0.37%
			{7161.02286110733, "B_AssaultPack_khk"}, // 0.37%
			{7197.17131074049, "hlc_30Rnd_9x19_GD_MP5"}, // 0.36%
			{7233.31976037365, "CUP_18Rnd_9x19_Phantom"}, // 0.36%
			{7269.46821000681, "CUP_30Rnd_9x19_UZI"}, // 0.36%
			{7305.61665963997, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.36%
			{7341.26304747267, "hgun_P07_F"}, // 0.36%
			{7376.90943530537, "CUP_hgun_Duty_M3X"}, // 0.36%
			{7412.3973947477, "ItemCompass"}, // 0.35%
			{7447.88535419004, "Binocular"}, // 0.35%
			{7483.37331363237, "ItemRadio"}, // 0.35%
			{7517.42359454719, "hlc_rifle_L1A1SLR"}, // 0.34%
			{7550.01457770851, "hlc_rifle_hk53"}, // 0.33%
			{7582.14653293799, "6Rnd_45ACP_Cylinder"}, // 0.32%
			{7611.8518561319, "CUP_hgun_PB6P9_snds"}, // 0.30%
			{7640.01690330836, "hlc_optic_kobra"}, // 0.28%
			{7667.17605594279, "CUP_smg_MP5A5"}, // 0.27%
			{7694.33520857723, "CUP_smg_bizon"}, // 0.27%
			{7720.98671349888, "B_Kitbag_sgg"}, // 0.27%
			{7747.63821842052, "B_Kitbag_cbr"}, // 0.27%
			{7774.28972334217, "B_Kitbag_mcamo"}, // 0.27%
			{7798.38868976428, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.24%
			{7822.15294831941, "Exile_Item_EMRE"}, // 0.24%
			{7845.91720687454, "Exile_Item_CookingPot"}, // 0.24%
			{7869.68146542967, "CUP_hgun_MicroUzi"}, // 0.24%
			{7891.40878753722, "SmokeShellBlue"}, // 0.22%
			{7913.13610964477, "SmokeShell"}, // 0.22%
			{7934.86343175232, "SmokeShellRed"}, // 0.22%
			{7956.59075385987, "SmokeShellOrange"}, // 0.22%
			{7978.31807596743, "SmokeShellYellow"}, // 0.22%
			{8000.04539807498, "SmokeShellPurple"}, // 0.22%
			{8021.77272018253, "SmokeShellGreen"}, // 0.22%
			{8042.56644641827, "hgun_ACPC2_F"}, // 0.21%
			{8063.36017265401, "hgun_Pistol_heavy_02_F"}, // 0.21%
			{8083.44264467243, "16Rnd_9x21_Mag"}, // 0.20%
			{8102.45405151654, "V_Rangemaster_belt"}, // 0.19%
			{8120.27724543289, "Exile_Weapon_Makarov"}, // 0.18%
			{8137.0028233016, "TRYK_B_Kitbag_blk"}, // 0.17%
			{8153.72840117032, "TRYK_B_Belt"}, // 0.17%
			{8170.45397903903, "TRYK_B_Kitbag_Base"}, // 0.17%
			{8186.74947061969, "CUP_smg_bizon_snds"}, // 0.16%
			{8203.04496220036, "CUP_smg_EVO"}, // 0.16%
			{8217.89762379732, "Exile_Weapon_Colt1911"}, // 0.15%
			{8232.39312461687, "TRYK_B_Kitbag_aaf"}, // 0.14%
			{8246.88862543642, "TRYK_B_tube_cyt"}, // 0.14%
			{8261.38412625598, "TRYK_B_Belt_CYT"}, // 0.14%
			{8275.44185666887, "6Rnd_GreenSignal_F"}, // 0.14%
			{8289.49958708177, "6Rnd_RedSignal_F"}, // 0.14%
			{8302.88004937674, "TRYK_B_Alicepack"}, // 0.13%
			{8316.26051167172, "TRYK_B_FieldPack_Wood"}, // 0.13%
			{8329.64097396669, "TRYK_B_Kitbag_Base_JSDF"}, // 0.13%
			{8343.02143626166, "TRYK_B_Belt_BLK"}, // 0.13%
			{8356.40189855663, "TRYK_B_Belt_tan"}, // 0.13%
			{8369.7823608516, "TRYK_B_BAF_BAG_BLK"}, // 0.13%
			{8383.16282314657, "TRYK_B_Belt_br"}, // 0.13%
			{8396.54328544155, "TRYK_B_Belt_GR"}, // 0.13%
			{8408.80870921194, "TRYK_B_BAF_BAG_CYT"}, // 0.12%
			{8421.07413298233, "TRYK_B_Belt_AOR2"}, // 0.12%
			{8433.33955675272, "TRYK_B_BAF_BAG_OD"}, // 0.12%
			{8445.60498052311, "TRYK_B_Belt_AOR1"}, // 0.12%
			{8457.48710980068, "Exile_Weapon_TaurusGold"}, // 0.12%
			{8468.63749504649, "TRYK_B_tube_blk"}, // 0.11%
			{8479.7878802923, "TRYK_B_tube_od"}, // 0.11%
			{8490.93826553811, "TRYK_B_AssaultPack_Type2camo"}, // 0.11%
			{8502.08865078392, "TRYK_B_AssaultPack_UCP"}, // 0.11%
			{8512.9523118377, "hgun_PDW2000_F"}, // 0.11%
			{8523.81597289147, "SMG_05_F"}, // 0.11%
			{8533.8513196127, "TRYK_B_BAF_BAG_mcamo"}, // 0.10%
			{8543.60717312481, "Exile_Item_ScrewDriver"}, // 0.10%
			{8553.36302663692, "Exile_Item_Pliers"}, // 0.10%
			{8563.11888014903, "Exile_Item_Handsaw"}, // 0.10%
			{8572.62458357108, "V_Press_F"}, // 0.10%
			{8582.13028699313, "V_TacVest_blk_POLICE"}, // 0.10%
			{8591.05059518978, "TRYK_B_Medbag_OD"}, // 0.09%
			{8599.97090338643, "TRYK_B_Medbag_BK"}, // 0.09%
			{8608.89121158308, "TRYK_B_Medbag_ucp"}, // 0.09%
			{8617.81151977973, "TRYK_B_BAF_BAG_rgr"}, // 0.09%
			{8626.73182797637, "TRYK_B_Medbag"}, // 0.09%
			{8635.64342493455, "hgun_Pistol_Signal_F"}, // 0.09%
			{8644.55502189272, "Exile_Weapon_Taurus"}, // 0.09%
			{8652.80997486451, "Exile_Item_JunkMetal"}, // 0.08%
			{8660.49998212729, "muzzle_snds_acp"}, // 0.08%
			{8668.18998939008, "muzzle_snds_L"}, // 0.08%
			{8675.6944920917, "Exile_Item_WaterCanisterEmpty"}, // 0.08%
			{8683.19899479332, "Exile_Item_MetalScrews"}, // 0.08%
			{8690.70349749494, "Exile_Melee_Axe"}, // 0.08%
			{8697.54760395882, "H_Hat_grey"}, // 0.07%
			{8704.39171042269, "H_StrawHat_dark"}, // 0.07%
			{8711.23581688657, "H_StrawHat"}, // 0.07%
			{8718.07992335045, "H_Cap_press"}, // 0.07%
			{8724.92402981433, "H_Cap_red"}, // 0.07%
			{8731.76813627821, "H_Cap_tan"}, // 0.07%
			{8738.61224274209, "H_Hat_blue"}, // 0.07%
			{8745.45634920597, "H_Hat_brown"}, // 0.07%
			{8752.30045566985, "H_Hat_checker"}, // 0.07%
			{8759.14456213373, "H_Hat_tan"}, // 0.07%
			{8765.89861456519, "Exile_Item_LightBulb"}, // 0.07%
			{8772.06191354208, "TRYK_Hrp_vest_od"}, // 0.06%
			{8778.06551570338, "Exile_Item_ExtensionCord"}, // 0.06%
			{8783.98017561043, "Exile_Item_MobilePhone"}, // 0.06%
			{8789.89483551749, "ItemGPS"}, // 0.06%
			{8795.59825757072, "H_Cap_oli"}, // 0.06%
			{8801.30167962395, "H_Bandanna_surfer"}, // 0.06%
			{8807.00510167718, "H_Cap_headphones"}, // 0.06%
			{8812.70852373041, "H_Cap_blk"}, // 0.06%
			{8818.41194578364, "H_Cap_blk_Raven"}, // 0.06%
			{8824.11536783688, "H_Cap_blu"}, // 0.06%
			{8829.81878989011, "H_Cap_grn"}, // 0.06%
			{8835.52221194334, "H_Beret_blk_POLICE"}, // 0.06%
			{8841.21141099893, "TRYK_Hrp_vest_ucp"}, // 0.06%
			{8846.90061005452, "TRYK_LOC_AK_chestrig_OD"}, // 0.06%
			{8852.53361948981, "optic_ACO_grn_smg"}, // 0.06%
			{8858.1666289251, "optic_Holosight_smg_blk_F"}, // 0.06%
			{8863.7996383604, "optic_Aco_smg"}, // 0.06%
			{8869.43264779569, "optic_Holosight_smg"}, // 0.06%
			{8875.06565723098, "optic_Aco"}, // 0.06%
			{8880.69866666627, "optic_ACO_grn"}, // 0.06%
			{8886.27385928917, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.06%
			{8891.84905191208, "TRYK_B_Coyotebackpack_BLK"}, // 0.06%
			{8897.42424453498, "TRYK_B_Coyotebackpack_OD"}, // 0.06%
			{8902.99943715789, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.06%
			{8908.5746297808, "TRYK_B_Coyotebackpack"}, // 0.06%
			{8914.00646030768, "SMG_01_F"}, // 0.05%
			{8919.43829083457, "SMG_02_F"}, // 0.05%
			{8924.17929004757, "TRYK_V_Sheriff_BA_TB"}, // 0.05%
			{8928.68199166854, "Exile_Item_CamoTentKit"}, // 0.05%
			{8933.18469328951, "Exile_Item_Foolbox"}, // 0.05%
			{8937.68201533866, "hlc_30Rnd_9x19_B_MP5"}, // 0.04%
			{8941.95424159576, "CUP_acc_CZ_M3X"}, // 0.04%
			{8946.22646785286, "CUP_acc_Glock17_Flashlight"}, // 0.04%
			{8950.49869410996, "CUP_muzzle_snds_MicroUzi"}, // 0.04%
			{8954.72345118643, "CUP_optic_ACOG"}, // 0.04%
			{8958.81192577656, "CUP_64Rnd_9x19_Bizon_M"}, // 0.04%
			{8962.90040036669, "CUP_30Rnd_9x19_MP5"}, // 0.04%
			{8966.98887495683, "hlc_30Rnd_9x19_GD_MP5"}, // 0.04%
			{8971.07734954696, "30Rnd_9x21_Mag_SMG_02"}, // 0.04%
			{8975.16582413709, "CUP_30Rnd_9x19_EVO"}, // 0.04%
			{8979.01082776848, "CUP_muzzle_snds_M9"}, // 0.04%
			{8982.80362713888, "TRYK_LOC_AK_chestrig_TAN"}, // 0.04%
			{8986.55587848969, "Exile_Item_Grinder"}, // 0.04%
			{8990.3081298405, "Exile_Melee_SledgeHammer"}, // 0.04%
			{8993.67894665683, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{8997.04976347316, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9000.42058028949, "TRYK_bandana_g"}, // 0.03%
			{9003.79139710582, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{9007.16221392215, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{9010.53303073848, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{9013.90384755481, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{9017.27466437114, "TRYK_TAC_SET_MESH"}, // 0.03%
			{9020.64548118747, "TRYK_TAC_SET_OD"}, // 0.03%
			{9024.0162980038, "TRYK_TAC_SET_TAN"}, // 0.03%
			{9027.38711482013, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{9030.75793163646, "TRYK_TAC_SET_bn"}, // 0.03%
			{9034.12874845279, "TRYK_H_PASGT_OD"}, // 0.03%
			{9037.49956526912, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9040.87038208545, "TRYK_headset2"}, // 0.03%
			{9044.24119890178, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9047.61201571811, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9050.98283253444, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9054.35364935077, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9057.7244661671, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9061.09528298343, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9064.46609979976, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9067.83691661609, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9071.20773343242, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9074.57855024875, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9077.94936706508, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9081.32018388141, "TRYK_H_pakol2"}, // 0.03%
			{9084.69100069774, "TRYK_H_pakol"}, // 0.03%
			{9088.06181751407, "TRYK_H_headsetcap_od"}, // 0.03%
			{9091.4326343304, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9094.80345114673, "TRYK_H_headsetcap"}, // 0.03%
			{9098.17426796306, "TRYK_H_woolhat_tan"}, // 0.03%
			{9101.54508477939, "TRYK_H_woolhat_cu"}, // 0.03%
			{9104.91590159572, "TRYK_H_woolhat_br"}, // 0.03%
			{9108.28671841206, "TRYK_H_woolhat_WH"}, // 0.03%
			{9111.65753522839, "TRYK_H_woolhat_CW"}, // 0.03%
			{9115.02835204472, "TRYK_H_woolhat"}, // 0.03%
			{9118.39916886105, "TRYK_H_headset2"}, // 0.03%
			{9121.76998567738, "TRYK_H_wig"}, // 0.03%
			{9125.14080249371, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9128.51161931004, "TRYK_H_Bandana_wig"}, // 0.03%
			{9131.88243612637, "TRYK_H_Bandana_H"}, // 0.03%
			{9135.2532529427, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9138.62406975903, "TRYK_H_EARMUFF"}, // 0.03%
			{9141.99488657536, "TRYK_H_AOR2"}, // 0.03%
			{9145.36570339169, "TRYK_H_AOR1"}, // 0.03%
			{9148.73652020802, "TRYK_H_WH"}, // 0.03%
			{9152.10733702435, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9155.47815384068, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9158.84897065701, "TRYK_H_GR"}, // 0.03%
			{9162.21978747334, "TRYK_R_CAP_BLK"}, // 0.03%
			{9165.59060428967, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9168.961421106, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9172.33223792233, "TRYK_R_CAP_TAN"}, // 0.03%
			{9175.67735349607, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9179.01268803013, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9182.34802256418, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9185.68335709823, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9189.01869163229, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9192.35402616634, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9195.68936070039, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9199.02469523444, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9202.3600297685, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9205.69536430255, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9209.0306988366, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9212.36603337066, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9215.70136790471, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9219.03670243876, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9222.37203697281, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9225.70737150687, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9229.04270604092, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9232.37804057497, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9235.71337510903, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9239.04870964308, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9242.38404417713, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9245.71937871118, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9249.05471324524, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9252.39004777929, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9255.72538231334, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9259.0607168474, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9262.39605138145, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9265.7313859155, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9269.06672044955, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9272.40205498361, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9275.73738951766, "TRYK_hoodie_Blk"}, // 0.03%
			{9279.07272405171, "TRYK_hoodie_FR"}, // 0.03%
			{9282.40805858577, "TRYK_hoodie_Wood"}, // 0.03%
			{9285.74339311982, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9289.07872765387, "TRYK_T_PAD"}, // 0.03%
			{9292.41406218793, "TRYK_T_OD_PAD"}, // 0.03%
			{9295.74939672198, "TRYK_T_TAN_PAD"}, // 0.03%
			{9299.08473125603, "TRYK_T_BLK_PAD"}, // 0.03%
			{9302.42006579008, "TRYK_T_T2_PAD"}, // 0.03%
			{9305.75540032414, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9309.09073485819, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9312.42606939224, "TRYK_U_hood_nc"}, // 0.03%
			{9315.7614039263, "TRYK_U_hood_mc"}, // 0.03%
			{9319.09673846035, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9322.4320729944, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9325.76740752845, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9329.10274206251, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9332.43807659656, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9335.77341113061, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9339.10874566467, "TRYK_shirts_PAD"}, // 0.03%
			{9342.44408019872, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9345.77941473277, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9349.11474926682, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9352.45008380088, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9355.78541833493, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9359.12075286898, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9362.45608740304, "TRYK_ZARATAKI3"}, // 0.03%
			{9365.79142193709, "TRYK_ZARATAKI2"}, // 0.03%
			{9369.12675647114, "TRYK_ZARATAKI"}, // 0.03%
			{9372.46209100519, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9375.79742553925, "TRYK_B_USMC_R"}, // 0.03%
			{9379.1327600733, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9382.46809460735, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9385.80342914141, "TRYK_U_B_PCUHs"}, // 0.03%
			{9389.13876367546, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9392.47409820951, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9395.80943274356, "TRYK_U_taki_G_BL"}, // 0.03%
			{9399.14476727762, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9402.48010181167, "TRYK_U_taki_G_COY"}, // 0.03%
			{9405.81543634572, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9409.15077087978, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9412.48610541383, "TRYK_U_taki_BLK"}, // 0.03%
			{9415.82143994788, "TRYK_U_taki_BL"}, // 0.03%
			{9419.15677448193, "TRYK_U_taki_COY"}, // 0.03%
			{9422.49210901599, "TRYK_U_taki_wh"}, // 0.03%
			{9425.82744355004, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9429.16277808409, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9432.49811261815, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9435.8334471522, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9439.16878168625, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9442.50411622031, "TRYK_U_taki_G_WH"}, // 0.03%
			{9445.83945075436, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9449.17478528841, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9452.51011982246, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9455.84545435652, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9459.18078889057, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9462.51612342462, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9465.85145795868, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9469.18679249273, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9472.52212702678, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9475.85746156083, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9479.19279609489, "TRYK_SUITS_BR_F"}, // 0.03%
			{9482.52813062894, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9485.86346516299, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9489.19879969705, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9492.5341342311, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9495.86946876515, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9499.2048032992, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9502.54013783326, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9505.87547236731, "TRYK_OVERALL_flesh"}, // 0.03%
			{9509.21080690136, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9512.54614143542, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9515.88147596947, "TRYK_U_B_Wood_T"}, // 0.03%
			{9519.21681050352, "TRYK_U_B_Sage_T"}, // 0.03%
			{9522.55214503757, "TRYK_C_AOR2_T"}, // 0.03%
			{9525.88747957163, "TRYK_DMARPAT_T"}, // 0.03%
			{9529.22281410568, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9532.55814863973, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9535.89348317379, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9539.22881770784, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9542.56415224189, "TRYK_hoodie_3c"}, // 0.03%
			{9545.89948677594, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9549.23482131, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9552.57015584405, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9555.9054903781, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9559.24082491216, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9562.57615944621, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9565.91149398026, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9569.24682851432, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9572.58216304837, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9575.91749758242, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9579.25283211647, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9582.58816665053, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9585.92350118458, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9589.25883571863, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9592.59417025269, "TRYK_U_B_ODTAN"}, // 0.03%
			{9595.92950478674, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9599.26483932079, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9602.60017385484, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9605.9355083889, "TRYK_U_B_BLK"}, // 0.03%
			{9609.27084292295, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9612.606177457, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9615.94151199106, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9619.27684652511, "TRYK_U_B_3cr"}, // 0.03%
			{9622.61218105916, "TRYK_U_B_3c"}, // 0.03%
			{9625.94751559321, "TRYK_U_B_ACU"}, // 0.03%
			{9629.28285012727, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9632.61818466132, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9635.95351919537, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9639.28885372943, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9642.62418826348, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9645.95952279753, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9649.29485733158, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9652.63019186564, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9655.96552639969, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9659.30086093374, "TRYK_U_pad_j_blk"}, // 0.03%
			{9662.6361954678, "TRYK_U_pad_j"}, // 0.03%
			{9665.97153000185, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9669.3068645359, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9672.64219906995, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9675.97753360401, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9679.31286813806, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9682.64820267211, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9685.98353720617, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9689.31887174022, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9692.65420627427, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9695.98954080832, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9699.32487534238, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9702.66020987643, "TRYK_U_B_PCUGs"}, // 0.03%
			{9705.99554441048, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9709.33087894454, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9712.66621347859, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9716.00154801264, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9719.3368825467, "TRYK_U_B_PCUs"}, // 0.03%
			{9722.67221708075, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9726.0075516148, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9729.34288614885, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9732.67822068291, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9736.01355521696, "TRYK_U_B_fleece"}, // 0.03%
			{9739.34888975101, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9742.68422428507, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9746.01955881912, "TRYK_U_B_PCUODs"}, // 0.03%
			{9749.33825826821, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9752.65695771731, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9755.9756571664, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9758.97745824705, "Exile_Item_Rope"}, // 0.03%
			{9761.9792593277, "Exile_Item_MetalBoard"}, // 0.03%
			{9764.98106040835, "Exile_Item_Sand"}, // 0.03%
			{9767.97161878832, "optic_MRD"}, // 0.03%
			{9770.96217716829, "optic_Yorris"}, // 0.03%
			{9773.65883062136, "TRYK_H_LHS_HEL_G"}, // 0.03%
			{9776.35548407442, "TRYK_TAC_SET_WH"}, // 0.03%
			{9778.8085688285, "hlc_30rnd_556x45_b_hk33"}, // 0.02%
			{9781.179068435, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9783.5495680415, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9785.92006764799, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9788.29056725449, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9790.66106686099, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9793.03156646748, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9795.40206607398, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9797.77256568048, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9800.14306528697, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9802.51356489347, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9804.88406449997, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9807.25456410647, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9809.62506371296, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9811.99556331946, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9814.36606292596, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9816.73656253245, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9819.10706213895, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9821.47756174545, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9823.84806135195, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9826.21856095844, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9828.58906056494, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9830.95956017144, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9833.33005977793, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9835.70055938443, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9838.07105899093, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9840.44155859743, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9842.81205820392, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9845.18255781042, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9847.55305741692, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9849.92355702341, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9852.29405662991, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9854.66455623641, "TRYK_V_tacv10_TN"}, // 0.02%
			{9857.03505584291, "TRYK_V_tacv10_OD"}, // 0.02%
			{9859.4055554494, "TRYK_V_tacv10_BK"}, // 0.02%
			{9861.7760550559, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9864.1465546624, "TRYK_V_ChestRig"}, // 0.02%
			{9866.51705426889, "TRYK_V_ChestRig_L"}, // 0.02%
			{9868.88755387539, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9871.25805348189, "TRYK_V_harnes_od_L"}, // 0.02%
			{9873.62855308839, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9875.99905269488, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9878.36955230138, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9880.74005190788, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9883.11055151437, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9885.48105112087, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9887.85155072737, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9890.22205033386, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9892.59254994036, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9894.96304954686, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9897.33354915336, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9899.70404875985, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9902.07454836635, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9904.44504797285, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9906.81554757934, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9909.18604718584, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9911.55654679234, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9913.92704639884, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9916.29754600533, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9918.66804561183, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9921.03854521833, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9923.40904482482, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9925.77954443132, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9928.15004403782, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9930.52054364432, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9932.89104325081, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9935.1423940613, "Exile_Item_FloodLightKit"}, // 0.02%
			{9937.39374487178, "Exile_Item_FireExtinguisher"}, // 0.02%
			{9939.64509568227, "Exile_Item_PortableGeneratorKit"}, // 0.02%
			{9941.89644649276, "Exile_Item_CordlessScrewdriver"}, // 0.02%
			{9944.14779730324, "Exile_Item_Cement"}, // 0.02%
			{9946.14899802367, "U_C_Scientist"}, // 0.02%
			{9948.1501987441, "U_Rangemaster"}, // 0.02%
			{9950.15139946454, "U_C_HunterBody_grn"}, // 0.02%
			{9952.15260018497, "U_C_Poor_shorts_1"}, // 0.02%
			{9954.1538009054, "U_C_Poor_2"}, // 0.02%
			{9956.15500162583, "U_C_Poor_1"}, // 0.02%
			{9958.15620234626, "U_C_Journalist"}, // 0.02%
			{9959.79159218231, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.02%
			{9961.42698201837, "30Rnd_45ACP_Mag_SMG_01"}, // 0.02%
			{9963.06237185442, "hlc_30rnd_556x45_t_hk33"}, // 0.02%
			{9964.69776169047, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.02%
			{9966.33315152652, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.02%
			{9967.88964097575, "U_C_Poloshirt_salmon"}, // 0.02%
			{9969.44613042497, "U_C_Poloshirt_stripped"}, // 0.02%
			{9971.0026198742, "U_C_Poloshirt_burgundy"}, // 0.02%
			{9972.55910932342, "U_C_Poloshirt_tricolour"}, // 0.02%
			{9974.11559877265, "U_C_Poloshirt_blue"}, // 0.02%
			{9975.61649931297, "Exile_Melee_Shovel"}, // 0.02%
			{9977.1173998533, "Exile_Item_ThermalScannerPro"}, // 0.02%
			{9978.61830039362, "Exile_Item_Knife"}, // 0.02%
			{9979.96662712016, "TRYK_H_Helmet_Winter_2"}, // 0.01%
			{9981.31495384669, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9982.54149622373, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.01%
			{9983.76803860077, "hlc_30rnd_556x45_epr_hk33"}, // 0.01%
			{9984.87981677878, "U_I_C_Soldier_Bandit_1_F"}, // 0.01%
			{9985.9915949568, "U_I_C_Soldier_Bandit_2_F"}, // 0.01%
			{9987.10337313482, "U_I_C_Soldier_Bandit_4_F"}, // 0.01%
			{9988.21515131284, "U_I_C_Soldier_Bandit_3_F"}, // 0.01%
			{9989.32692949085, "U_C_man_sport_2_F"}, // 0.01%
			{9990.43870766887, "U_C_man_sport_3_F"}, // 0.01%
			{9991.55048584689, "U_C_Man_casual_1_F"}, // 0.01%
			{9992.66226402491, "U_C_Man_casual_2_F"}, // 0.01%
			{9993.77404220292, "U_C_Man_casual_3_F"}, // 0.01%
			{9994.88582038094, "U_C_Man_casual_4_F"}, // 0.01%
			{9995.99759855896, "U_C_Man_casual_5_F"}, // 0.01%
			{9997.10937673698, "U_C_Man_casual_6_F"}, // 0.01%
			{9998.22115491499, "U_I_C_Soldier_Bandit_5_F"}, // 0.01%
			{9999.33293309301, "U_C_man_sport_1_F"}, // 0.01%
			{9999.55528872862, "U_NikosAgedBody"}, // 0.00%
			{9999.77764436422, "U_NikosBody"}, // 0.00%
			{9999.99999999982, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  FlareRed_F
	  Exile_Item_CockONut
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Foolbox
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  FlareGreen_F
	  Exile_Item_PlasticBottleEmpty
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  FlareRed_F
	  FlareWhite_F
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  FlareWhite_F
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_CockONut
	  Exile_Item_Can_Empty
	  Exile_Item_Rope
	  Exile_Item_ThermalScannerPro
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_CamoTentKit
	  Exile_Item_ExtensionCord
	  FlareYellow_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_LightBulb
	  FlareYellow_F
	  Exile_Item_CamoTentKit
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_MetalScrews
	  Exile_Item_Foolbox
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_MetalScrews
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_ThermalScannerPro
	  Exile_Item_DuctTape
	  Exile_Item_Rope
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  FlareYellow_F
	  Exile_Item_JunkMetal
	  FlareRed_F
	  Exile_Item_ChocolateMilk
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ZipTie
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Wrench
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_LightBulb
	  Exile_Item_DuctTape
	  FlareRed_F
	  Exile_Item_Knife
	  Exile_Item_Pliers
	  Exile_Item_Sand
	  Exile_Item_ToiletPaper
	  FlareRed_F
	  Exile_Melee_Axe
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_Pliers
	  Exile_Item_Magazine04
	  Exile_Item_LightBulb
	  Exile_Item_Magazine02
	  Exile_Item_MetalScrews
	  Exile_Item_Magazine04
	  FlareYellow_F
	  Exile_Item_JunkMetal
	  Exile_Item_Sand
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_InstantCoffee
	  Exile_Item_DuctTape
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Rope
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Grinder
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

	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Can_Empty
	  Exile_Item_Pliers
	  Exile_Item_BaseCameraKit
	  Exile_Item_DuctTape
	  Exile_Melee_SledgeHammer
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_CamoTentKit
	  Exile_Item_LightBulb
	  Exile_Item_Pliers
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_Handsaw
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Melee_Axe
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_ToiletPaper
	  Exile_Melee_SledgeHammer
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Handsaw
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Knife
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_Rope
	  Exile_Item_WaterCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FireExtinguisher
	  Exile_Item_Carwheel
	  Exile_Item_Grinder
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_MetalScrews
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_OilCanister
	  Exile_Item_Magazine03
	  Exile_Item_LightBulb
	  Exile_Item_Magazine02
	  Exile_Melee_Axe
	  Exile_Item_Magazine03
	  Exile_Item_Handsaw
	  Exile_Item_JunkMetal
	  Exile_Item_Foolbox
	  Exile_Item_ScrewDriver
	  Exile_Item_Carwheel
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_ThermalScannerPro
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Melee_SledgeHammer
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Knife
	  Exile_Item_Foolbox
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

	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_Shovel
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_DuctTape
	  Exile_Item_ScrewDriver
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Melee_Shovel
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  Exile_Item_MetalBoard
	  FlareGreen_F
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Exile_Item_Carwheel
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  FlareYellow_F
	  Exile_Item_Magazine04
	  Exile_Item_ScrewDriver
	  Exile_Item_DuctTape
	  FlareYellow_F
	  FlareYellow_F
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_MetalBoard
	  Exile_Item_Can_Empty
	  Exile_Item_WaterCanisterEmpty
	  FlareYellow_F
	  Exile_Item_OilCanister
	  Exile_Item_Carwheel
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FloodLightKit
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_LightBulb
	  FlareGreen_F
	  Exile_Item_Wrench
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Sand
	  Exile_Item_ZipTie
	  Exile_Melee_Axe
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  FlareGreen_F
	  FlareGreen_F
	  Exile_Item_OilCanister
	  Exile_Item_ZipTie
	  Exile_Item_Magazine02
	  Exile_Item_Wrench
	  Exile_Item_Pliers
	  FlareYellow_F
	  Exile_Item_Magazine02
	  Exile_Item_Carwheel
	  FlareRed_F
	  Exile_Melee_Axe
	  Exile_Item_OilCanister
	  FlareWhite_F
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Cement
	  Exile_Item_Can_Empty
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ZipTie
	  FlareWhite_F
	  FlareWhite_F
	  Exile_Item_LightBulb
	  Exile_Item_ScrewDriver
	  Exile_Item_DuctTape
	  FlareGreen_F
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_MetalScrews
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

	  Exile_Weapon_RPK
	  CUP_arifle_Sa58RIS2_Arco_Laser
	  Exile_Item_Can_Empty
	  bipod_02_F_tan
	  CUP_muzzle_snds_Mk12
	  optic_KHS_blk
	  CUP_optic_PechenegScope
	  B_Carryall_khk
	  optic_AMS_khk
	  TRYK_U_B_PCUHsW5
	  Exile_Item_Can_Empty
	  hgun_P07_khk_F
	  CUP_hgun_SA61
	  Exile_Item_ToiletPaper
	  B_Carryall_cbr
	  Exile_Item_ToiletPaper
	  U_B_GhillieSuit
	  CUP_hgun_SA61
	  CUP_6Rnd_HE_M203
	  10Rnd_127x54_Mag
	  U_O_GhillieSuit
	  CUP_arifle_Sa58RIS1
	  Exile_Item_PlasticBottleEmpty
	  TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt
	  TRYK_U_B_AOR2_GRY_R_CombatUniform
	  SmokeShellBlue
	  Exile_Item_Can_Empty
	  hlc_30Rnd_9x19_GD_MP5
	  CUP_10Rnd_762x51_CZ750_Tracer
	  TRYK_H_Helmet_Winter_2
	  optic_KHS_tan
	  Exile_Weapon_Colt1911
	  V_PlateCarrierIAGL_dgtl
	  V_HarnessOGL_brn
	  optic_KHS_tan
	  optic_KHS_hex
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  B_FieldPack_cbr
	  CUP_optic_PechenegScope
	  Exile_Item_PlasticBottleEmpty
	  B_Bergen_dgtl_F
	  B_Bergen_Base_F
	  Exile_Item_Magazine03
	  bipod_03_F_oli
	  bipod_01_F_blk
	  10Rnd_127x54_Mag
	  optic_LRPS_tna_F
	  V_PlateCarrier1_blk
	  TRYK_U_B_Woodland
	  TRYK_Winter_pack
	  20Rnd_762x51_Mag
	  optic_KHS_blk
	  TRYK_B_Coyotebackpack_BLK
	  TRYK_Winter_pack
	  V_PlateCarrierH_CTRG
	  Exile_Item_Heatpack
	  H_PilotHelmetHeli_I
	  optic_KHS_blk
	  muzzle_snds_B
	  optic_LRPS_tna_F
	  CUP_acc_Glock17_Flashlight
	  CUP_arifle_AK47
	  SmokeShellPurple
	  CUP_200Rnd_TE1_Red_Tracer_556x45_M249
	  bipod_01_F_mtp
	  Exile_Item_Vishpirin
	  TRYK_U_B_ODTANR_CombatUniformTshirt
	  CUP_optic_ACOG
	  Exile_Magazine_10Rnd_9x39
	  optic_DMS
	  9Rnd_45ACP_Mag
	  CUP_10Rnd_9x39_SP5_VSS_M
	  SmokeShellOrange
	  hgun_P07_F
	  IEDLandSmall_Remote_Mag
	  TRYK_V_Bulletproof_BL
	  CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
	  optic_Arco_blk_F
	  CUP_20Rnd_762x51_DMR
	  TRYK_V_PlateCarrier_coyo_L
	  TRYK_B_Coyotebackpack_WH
	  ItemCompass
	  H_HelmetB_light_desert
	  CUP_6Rnd_HE_M203
	  ItemMap
	  TRYK_B_Coyotebackpack_BLK
	  optic_SOS_khk_F
	  Exile_Weapon_AK107
	  bipod_03_F_oli
	  optic_Arco_blk_F
	  1Rnd_HE_Grenade_shell
	  CUP_8Rnd_9x18_MakarovSD_M
	  U_IG_Guerilla2_1
	  U_IG_Guerilla2_1
	  V_Chestrig_oli
	  CUP_optic_PechenegScope
	  Exile_Item_Can_Empty
	  hlc_5rnd_300WM_FMJ_AWM
	  H_Booniehat_tna_F
	  H_Booniehat_dgtl
	*/
	class Military
	{
		count = 975;
		half = 8550.94461119363;
		halfIndex = 487;
		sum = 10000;
		items[] = 
		{
			{136.612021857923, "Exile_Item_PlasticBottleEmpty"}, // 1.37%
			{273.224043715847, "Exile_Item_ToiletPaper"}, // 1.37%
			{409.83606557377, "Exile_Item_Can_Empty"}, // 1.37%
			{520.353656290293, "muzzle_snds_L"}, // 1.11%
			{630.871247006815, "muzzle_snds_acp"}, // 1.11%
			{712.838460121569, "20Rnd_762x51_Mag"}, // 0.82%
			{784.11429761266, "ItemCompass"}, // 0.71%
			{852.420308541622, "HandGrenade"}, // 0.68%
			{920.726319470583, "MiniGrenade"}, // 0.68%
			{982.124980979763, "CUP_muzzle_snds_MicroUzi"}, // 0.61%
			{1043.52364248894, "CUP_acc_Glock17_Flashlight"}, // 0.61%
			{1104.92230399812, "CUP_acc_CZ_M3X"}, // 0.61%
			{1163.4703133658, "optic_AMS"}, // 0.59%
			{1222.01832273348, "optic_AMS_khk"}, // 0.59%
			{1280.56633210117, "optic_AMS_snd"}, // 0.59%
			{1339.11434146885, "optic_KHS_blk"}, // 0.59%
			{1397.66235083653, "optic_KHS_tan"}, // 0.59%
			{1456.21036020421, "optic_KHS_old"}, // 0.59%
			{1514.75836957189, "optic_KHS_hex"}, // 0.59%
			{1572.13541875222, "DemoCharge_Remote_Mag"}, // 0.57%
			{1628.59242778534, "optic_DMS"}, // 0.56%
			{1684.91861525907, "1Rnd_HE_Grenade_shell"}, // 0.56%
			{1740.17741061733, "CUP_muzzle_snds_M9"}, // 0.55%
			{1794.8222193605, "10Rnd_127x54_Mag"}, // 0.55%
			{1849.46702810367, "Exile_Item_ZipTie"}, // 0.55%
			{1903.83303680223, "optic_SOS_khk_F"}, // 0.54%
			{1958.19904550079, "optic_SOS"}, // 0.54%
			{2012.56505419935, "optic_LRPS"}, // 0.54%
			{2066.93106289792, "optic_LRPS_tna_F"}, // 0.54%
			{2121.29707159648, "optic_LRPS_ghex_F"}, // 0.54%
			{2171.66246760675, "150Rnd_93x64_Mag"}, // 0.50%
			{2221.33956646417, "TRYK_B_Coyotebackpack_WH"}, // 0.50%
			{2271.0166653216, "TRYK_Winter_pack"}, // 0.50%
			{2317.15714952527, "bipod_01_F_khk"}, // 0.46%
			{2363.29763372894, "bipod_01_F_blk"}, // 0.46%
			{2409.43811793261, "bipod_01_F_snd"}, // 0.46%
			{2455.57860213628, "bipod_03_F_oli"}, // 0.46%
			{2501.71908633995, "bipod_02_F_tan"}, // 0.46%
			{2547.85957054362, "bipod_03_F_blk"}, // 0.46%
			{2594.00005474729, "bipod_02_F_blk"}, // 0.46%
			{2637.42639282133, "bipod_01_F_mtp"}, // 0.43%
			{2680.85273089537, "bipod_02_F_hex"}, // 0.43%
			{2723.8317939518, "optic_Yorris"}, // 0.43%
			{2766.81085700822, "optic_MRD"}, // 0.43%
			{2806.53986336486, "muzzle_snds_B"}, // 0.40%
			{2844.9619945124, "CUP_hgun_Phantom"}, // 0.38%
			{2883.21336063262, "SatchelCharge_Remote_Mag"}, // 0.38%
			{2919.64323312807, "V_RebreatherIA"}, // 0.36%
			{2956.07310562352, "V_RebreatherIR"}, // 0.36%
			{2992.50297811896, "V_RebreatherB"}, // 0.36%
			{3028.14089686451, "Rangefinder"}, // 0.36%
			{3062.98154673431, "B_Carryall_ghex_F"}, // 0.35%
			{3097.82219660412, "B_Carryall_cbr"}, // 0.35%
			{3131.9752020686, "Exile_Item_Magazine03"}, // 0.34%
			{3166.12820753308, "Exile_Item_Magazine02"}, // 0.34%
			{3200.28121299756, "Exile_Item_Magazine04"}, // 0.34%
			{3234.43421846204, "Exile_Item_Magazine01"}, // 0.34%
			{3267.44114991765, "B_Carryall_oli"}, // 0.33%
			{3300.44808137325, "B_Carryall_khk"}, // 0.33%
			{3332.46652399621, "hgun_Pistol_heavy_01_F"}, // 0.32%
			{3364.48496661916, "hlc_smg_mp5k_PDW"}, // 0.32%
			{3396.50340924211, "hlc_smg_mp5k"}, // 0.32%
			{3425.36510400082, "10Rnd_9x21_Mag"}, // 0.29%
			{3454.22679875954, "Exile_Magazine_6Rnd_45ACP"}, // 0.29%
			{3483.08849351825, "Exile_Magazine_8Rnd_9x18"}, // 0.29%
			{3511.95018827697, "Exile_Magazine_7Rnd_45ACP"}, // 0.29%
			{3540.81188303569, "9Rnd_45ACP_Mag"}, // 0.29%
			{3569.6735777944, "11Rnd_45ACP_Mag"}, // 0.29%
			{3598.53527255312, "hlc_30Rnd_9x19_B_MP5"}, // 0.29%
			{3627.39696731184, "30Rnd_9x21_Mag"}, // 0.29%
			{3655.73971043589, "Exile_Weapon_RPK"}, // 0.28%
			{3684.00426668235, "Exile_Item_Vishpirin"}, // 0.28%
			{3712.26882292882, "Exile_Item_Heatpack"}, // 0.28%
			{3740.01813986871, "hgun_Pistol_01_F"}, // 0.28%
			{3767.7674568086, "hgun_P07_khk_F"}, // 0.28%
			{3795.51677374849, "hgun_Rook40_F"}, // 0.28%
			{3823.26609068838, "CUP_hgun_SA61"}, // 0.28%
			{3851.00883974261, "3Rnd_HE_Grenade_shell"}, // 0.28%
			{3878.51461595561, "B_Carryall_ocamo"}, // 0.28%
			{3906.02039216862, "B_Carryall_oucamo"}, // 0.28%
			{3933.52616838162, "B_Carryall_mcamo"}, // 0.28%
			{3960.84857275321, "V_PlateCarrierSpec_rgr"}, // 0.27%
			{3988.17097712479, "TRYK_U_B_PCUHsW5"}, // 0.27%
			{4015.49338149637, "TRYK_U_B_PCUHsW3nh"}, // 0.27%
			{4042.81578586796, "V_PlateCarrier3_rgr"}, // 0.27%
			{4070.13819023954, "TRYK_U_B_PCUHsW6"}, // 0.27%
			{4097.46059461113, "TRYK_U_B_PCUHsW4"}, // 0.27%
			{4124.78299898271, "TRYK_U_B_PCUHsW2"}, // 0.27%
			{4152.1054033543, "V_PlateCarrierIAGL_dgtl"}, // 0.27%
			{4179.42780772588, "TRYK_U_B_Snowt"}, // 0.27%
			{4206.75021209747, "TRYK_U_B_PCUHsW"}, // 0.27%
			{4234.07261646905, "V_PlateCarrier2_rgr"}, // 0.27%
			{4261.39502084064, "TRYK_Winter_pack"}, // 0.27%
			{4288.71742521222, "TRYK_B_Coyotebackpack_WH"}, // 0.27%
			{4316.0398295838, "TRYK_V_ArmorVest_Winter"}, // 0.27%
			{4343.36223395539, "TRYK_H_Helmet_Winter"}, // 0.27%
			{4370.68463832697, "U_B_GhillieSuit"}, // 0.27%
			{4398.00704269856, "V_PlateCarrier1_rgr"}, // 0.27%
			{4425.32944707014, "TRYK_H_Helmet_Winter_2"}, // 0.27%
			{4452.65185144173, "U_I_GhillieSuit"}, // 0.27%
			{4479.97425581331, "V_PlateCarrierGL_rgr"}, // 0.27%
			{4507.2966601849, "V_PlateCarrierIA1_dgtl"}, // 0.27%
			{4534.61906455648, "TRYK_U_B_Snow_CombatUniform"}, // 0.27%
			{4561.94146892807, "V_PlateCarrierIA2_dgtl"}, // 0.27%
			{4589.26387329965, "V_PlateCarrier1_blk"}, // 0.27%
			{4616.58627767123, "U_O_GhillieSuit"}, // 0.27%
			{4642.56180295408, "CUP_18Rnd_9x19_Phantom"}, // 0.26%
			{4668.53732823692, "hlc_30Rnd_9x19_GD_MP5"}, // 0.26%
			{4694.51285351977, "CUP_30Rnd_9x19_UZI"}, // 0.26%
			{4720.48837880261, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.26%
			{4746.10313290097, "CUP_hgun_Duty_M3X"}, // 0.26%
			{4771.71788699933, "hgun_P07_F"}, // 0.26%
			{4796.93856795772, "CUP_6Rnd_HE_M203"}, // 0.25%
			{4821.77711738643, "TRYK_B_Carryall_wood"}, // 0.25%
			{4846.61566681515, "TRYK_B_Carryall_blk"}, // 0.25%
			{4871.45421624386, "TRYK_B_Carryall_wh"}, // 0.25%
			{4896.29276567257, "TRYK_B_Coyotebackpack_OD"}, // 0.25%
			{4921.13131510128, "TRYK_B_Coyotebackpack_BLK"}, // 0.25%
			{4945.96986453, "TRYK_B_Coyotebackpack"}, // 0.25%
			{4970.80841395871, "TRYK_B_Carryall_JSDF"}, // 0.25%
			{4995.09499562234, "ItemWatch"}, // 0.24%
			{5018.18435142932, "6Rnd_45ACP_Cylinder"}, // 0.23%
			{5039.52997984462, "CUP_hgun_PB6P9_snds"}, // 0.21%
			{5060.43998319022, "muzzle_snds_B_snd_F"}, // 0.21%
			{5081.34998653582, "muzzle_snds_B_khk_F"}, // 0.21%
			{5101.75676158513, "CUP_arifle_RPK74"}, // 0.20%
			{5121.18602691604, "Exile_Item_Heatpack"}, // 0.19%
			{5140.31170997615, "IEDLandSmall_Remote_Mag"}, // 0.19%
			{5159.43739303626, "IEDUrbanSmall_Remote_Mag"}, // 0.19%
			{5178.56307609637, "APERSTripMine_Wire_Mag"}, // 0.19%
			{5197.68875915648, "APERSMine_Range_Mag"}, // 0.19%
			{5216.81444221659, "APERSBoundingMine_Range_Mag"}, // 0.19%
			{5235.02937846431, "muzzle_snds_338_green"}, // 0.18%
			{5253.24431471203, "muzzle_snds_B"}, // 0.18%
			{5271.45925095976, "muzzle_snds_93mmg_tan"}, // 0.18%
			{5289.67418720748, "muzzle_snds_93mmg"}, // 0.18%
			{5307.8891234552, "muzzle_snds_338_sand"}, // 0.18%
			{5326.10405970293, "muzzle_snds_338_black"}, // 0.18%
			{5344.24341530232, "CUP_lmg_minimi_railed"}, // 0.18%
			{5362.38277090171, "CUP_lmg_m249_para"}, // 0.18%
			{5379.69978775694, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.17%
			{5396.77629048918, "CUP_hgun_MicroUzi"}, // 0.17%
			{5413.85279322142, "CUP_optic_ACOG"}, // 0.17%
			{5430.85843909585, "CUP_lmg_Pecheneg"}, // 0.17%
			{5447.86408497028, "hlc_lmg_M60E4"}, // 0.17%
			{5464.86469213482, "ItemMap"}, // 0.17%
			{5481.67847944041, "U_IG_Guerilla2_2"}, // 0.17%
			{5498.492266746, "U_IG_Guerilla2_1"}, // 0.17%
			{5515.30605405159, "U_IG_Guerilla2_3"}, // 0.17%
			{5532.11984135718, "U_IG_Guerilla1_1"}, // 0.17%
			{5547.99177750665, "CUP_lmg_PKM"}, // 0.16%
			{5563.86371365612, "CUP_lmg_L110A1"}, // 0.16%
			{5579.62663925511, "U_IG_Guerilla3_1"}, // 0.16%
			{5595.3895648541, "U_IG_Guerilla3_2"}, // 0.16%
			{5610.33150474481, "hgun_ACPC2_F"}, // 0.15%
			{5625.27344463552, "hgun_Pistol_heavy_02_F"}, // 0.15%
			{5640.08679640325, "CUP_30Rnd_545x39_AK_M"}, // 0.15%
			{5654.90014817098, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.15%
			{5669.64302912222, "hlc_5rnd_300WM_mk248_AWM"}, // 0.15%
			{5684.38125554672, "CUP_lmg_M60E4"}, // 0.15%
			{5699.11948197123, "hlc_lmg_m60"}, // 0.15%
			{5713.85770839573, "CUP_lmg_M240"}, // 0.15%
			{5728.59593482024, "CUP_lmg_Mk48_des"}, // 0.15%
			{5743.33416124475, "Exile_Weapon_PKP"}, // 0.15%
			{5758.07238766925, "Exile_Weapon_PK"}, // 0.15%
			{5772.64433666743, "ItemCompass"}, // 0.15%
			{5787.21628566561, "Binocular"}, // 0.15%
			{5801.78823466379, "ItemRadio"}, // 0.15%
			{5816.21908204315, "16Rnd_9x21_Mag"}, // 0.14%
			{5830.50838547886, "hlc_50rnd_762x51_M_G3"}, // 0.14%
			{5844.64066360209, "Exile_Item_Bandage"}, // 0.14%
			{5858.5750898316, "UGL_FlareYellow_F"}, // 0.14%
			{5872.50951606111, "UGL_FlareGreen_F"}, // 0.14%
			{5886.44394229062, "UGL_FlareRed_F"}, // 0.14%
			{5900.37836852013, "UGL_FlareWhite_F"}, // 0.14%
			{5914.20416350334, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.14%
			{5928.02995848655, "CUP_30Rnd_762x39_AK47_M"}, // 0.14%
			{5941.85575346976, "hlc_100Rnd_762x51_B_M60E4"}, // 0.14%
			{5955.68154845297, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.14%
			{5969.34275063876, "V_PlateCarrierL_CTRG"}, // 0.14%
			{5983.00395282456, "V_PlateCarrierH_CTRG"}, // 0.14%
			{5996.54425941578, "srifle_DMR_01_F"}, // 0.14%
			{6010.08456600701, "srifle_EBR_F"}, // 0.14%
			{6023.54545731031, "20Rnd_650x39_Cased_Mag_F"}, // 0.13%
			{6036.73558355867, "hlc_20rnd_762x51_b_G3"}, // 0.13%
			{6049.57382175736, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.13%
			{6062.41205995606, "hlc_100Rnd_762x51_M_M60E4"}, // 0.13%
			{6075.23195643539, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.13%
			{6088.05185291473, "CUP_10Rnd_762x54_SVD_M"}, // 0.13%
			{6100.87174939407, "CUP_srifle_SVD_des"}, // 0.13%
			{6113.6916458734, "CUP_5Rnd_762x51_M24"}, // 0.13%
			{6126.49902292258, "Exile_Weapon_Makarov"}, // 0.13%
			{6139.07216475729, "CUP_srifle_SVD"}, // 0.13%
			{6151.25106641266, "20Rnd_762x51_Mag"}, // 0.12%
			{6163.34201547365, "hlc_20rnd_762x51_T_G3"}, // 0.12%
			{6175.4315749301, "CUP_srifle_M24_wdl"}, // 0.12%
			{6187.52113438656, "CUP_srifle_M40A3"}, // 0.12%
			{6199.61069384301, "CUP_srifle_M24_des"}, // 0.12%
			{6211.46137525719, "100Rnd_65x39_caseless_mag"}, // 0.12%
			{6223.31205667137, "150Rnd_762x54_Box"}, // 0.12%
			{6235.02165854491, "SmokeShell"}, // 0.12%
			{6246.73126041845, "SmokeShellRed"}, // 0.12%
			{6258.44086229198, "SmokeShellGreen"}, // 0.12%
			{6270.15046416552, "SmokeShellYellow"}, // 0.12%
			{6281.86006603906, "SmokeShellPurple"}, // 0.12%
			{6293.56966791259, "SmokeShellOrange"}, // 0.12%
			{6305.27926978613, "SmokeShellBlue"}, // 0.12%
			{6316.81717661753, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.12%
			{6328.35508344893, "hlc_5rnd_300WM_AP_AWM"}, // 0.12%
			{6339.89299028034, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{6351.39716054206, "TRYK_V_ArmorVest_Winter"}, // 0.12%
			{6362.80129454063, "NVGoggles_tna_F"}, // 0.11%
			{6374.2054285392, "O_NVGoggles_ghex_F"}, // 0.11%
			{6385.60956253778, "O_NVGoggles_urb_F"}, // 0.11%
			{6397.01369653635, "O_NVGoggles_hex_F"}, // 0.11%
			{6408.41783053493, "NVGoggles"}, // 0.11%
			{6419.80216568975, "muzzle_snds_B"}, // 0.11%
			{6431.18650084458, "optic_SOS"}, // 0.11%
			{6442.57083599941, "optic_KHS_hex"}, // 0.11%
			{6453.95517115423, "optic_KHS_blk"}, // 0.11%
			{6465.33950630906, "CUP_muzzle_snds_M14"}, // 0.11%
			{6476.72384146389, "optic_AMS"}, // 0.11%
			{6488.10817661871, "optic_LRPS"}, // 0.11%
			{6499.49251177354, "CUP_optic_SB_11_4x20_PM"}, // 0.11%
			{6510.87684692837, "CUP_optic_LeupoldM3LR"}, // 0.11%
			{6522.26118208319, "optic_DMS"}, // 0.11%
			{6533.59827933281, "LMG_03_F"}, // 0.11%
			{6544.93537658243, "LMG_Zafir_F"}, // 0.11%
			{6556.27247383205, "CUP_lmg_L7A2"}, // 0.11%
			{6567.57829633064, "Exile_Item_InstaDoc"}, // 0.11%
			{6578.58060681584, "B_Bergen_tna_F"}, // 0.11%
			{6589.58291730105, "B_Bergen_hex_F"}, // 0.11%
			{6600.58522778625, "B_Bergen_mcamo_F"}, // 0.11%
			{6611.58753827145, "B_Bergen_Base_F"}, // 0.11%
			{6622.58984875665, "B_Bergen_dgtl_F"}, // 0.11%
			{6633.58162063028, "hlc_20Rnd_762x51_B_M14"}, // 0.11%
			{6644.5733925039, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.11%
			{6655.56516437753, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.11%
			{6666.55693625115, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.11%
			{6677.54870812478, "CUP_20Rnd_762x51_DMR"}, // 0.11%
			{6688.54047999841, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.11%
			{6699.53225187203, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.11%
			{6710.52402374566, "CUP_20Rnd_762x51_B_SCAR"}, // 0.11%
			{6721.51579561928, "hlc_20Rnd_762x51_B_fal"}, // 0.11%
			{6732.41270762672, "10Rnd_762x54_Mag"}, // 0.11%
			{6743.11738098126, "acc_flashlight"}, // 0.11%
			{6753.79019518891, "Exile_Weapon_Colt1911"}, // 0.11%
			{6764.04611237238, "CUP_5Rnd_762x67_G22"}, // 0.10%
			{6774.14770553793, "6Rnd_RedSignal_F"}, // 0.10%
			{6784.24929870348, "6Rnd_GreenSignal_F"}, // 0.10%
			{6794.31544768248, "TRYK_V_PlateCarrier_wood"}, // 0.10%
			{6804.19101552763, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.10%
			{6814.06658337279, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.10%
			{6823.94215121794, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.10%
			{6833.81771906309, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
			{6843.69328690824, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.10%
			{6853.56885475339, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.10%
			{6863.44442259854, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.10%
			{6873.31999044369, "200Rnd_556x45_Box_Tracer_F"}, // 0.10%
			{6883.19555828884, "150Rnd_762x54_Box_Tracer"}, // 0.10%
			{6893.07112613399, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.10%
			{6902.94669397914, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.10%
			{6912.82226182429, "200Rnd_556x45_Box_F"}, // 0.10%
			{6922.69782966944, "200Rnd_556x45_Box_Red_F"}, // 0.10%
			{6932.36947723461, "srifle_DMR_06_olive_F"}, // 0.10%
			{6942.04112479977, "srifle_DMR_03_woodland_F"}, // 0.10%
			{6951.71277236493, "srifle_DMR_03_tan_F"}, // 0.10%
			{6961.38441993009, "srifle_DMR_03_khaki_F"}, // 0.10%
			{6971.05606749526, "srifle_DMR_03_F"}, // 0.10%
			{6980.72771506042, "srifle_DMR_06_camo_F"}, // 0.10%
			{6990.39936262558, "CUP_srifle_VSSVintorez"}, // 0.10%
			{7000.01428498509, "CUP_10Rnd_762x51_CZ750"}, // 0.10%
			{7009.62920734459, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.10%
			{7019.24412970409, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.10%
			{7028.23176272106, "U_B_CTRG_Soldier_urb_1_F"}, // 0.09%
			{7037.21939573803, "U_B_CTRG_Soldier_2_F"}, // 0.09%
			{7046.207028755, "U_B_CTRG_Soldier_F"}, // 0.09%
			{7055.19466177197, "U_B_T_Soldier_SL_F"}, // 0.09%
			{7064.18229478894, "U_B_T_Soldier_AR_F"}, // 0.09%
			{7073.1699278059, "U_B_CombatUniform_mcam_worn"}, // 0.09%
			{7082.15756082287, "U_B_CombatUniform_mcam_vest"}, // 0.09%
			{7091.14519383984, "U_B_CombatUniform_mcam_tshirt"}, // 0.09%
			{7100.13282685681, "U_B_CombatUniform_mcam"}, // 0.09%
			{7109.12045987378, "U_B_CTRG_3"}, // 0.09%
			{7118.10809289075, "U_B_CTRG_2"}, // 0.09%
			{7127.09572590772, "U_B_CTRG_1"}, // 0.09%
			{7136.08335892469, "U_B_CTRG_Soldier_urb_2_F"}, // 0.09%
			{7145.07099194166, "U_B_CTRG_Soldier_urb_3_F"}, // 0.09%
			{7154.05862495863, "U_B_GEN_Soldier_F"}, // 0.09%
			{7163.04625797559, "U_B_CTRG_Soldier_3_F"}, // 0.09%
			{7172.03389099256, "U_O_T_Soldier_F"}, // 0.09%
			{7181.02152400953, "U_O_T_Officer_F"}, // 0.09%
			{7190.0091570265, "U_B_GEN_Commander_F"}, // 0.09%
			{7198.89449178149, "H_MilCap_blue"}, // 0.09%
			{7207.77982653648, "H_MilCap_oucamo"}, // 0.09%
			{7216.66516129146, "H_MilCap_mcamo"}, // 0.09%
			{7225.55049604645, "H_MilCap_ocamo"}, // 0.09%
			{7234.43583080144, "Exile_Headgear_GasMask"}, // 0.09%
			{7243.32116555642, "H_MilCap_rucamo"}, // 0.09%
			{7252.20650031141, "H_MilCap_dgtl"}, // 0.09%
			{7260.99991781031, "hlc_50Rnd_762x51_B_M14"}, // 0.09%
			{7269.79333530921, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.09%
			{7278.58675280811, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.09%
			{7287.38017030701, "CUP_20Rnd_762x51_B_M110"}, // 0.09%
			{7296.17358780591, "CUP_20Rnd_762x51_L129_M"}, // 0.09%
			{7304.96700530481, "hlc_50rnd_762x51_M_FAL"}, // 0.09%
			{7313.50525667093, "Exile_Weapon_TaurusGold"}, // 0.09%
			{7321.86925800917, "1Rnd_Smoke_Grenade_shell"}, // 0.08%
			{7330.23325934741, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.08%
			{7338.59726068565, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.08%
			{7346.96126202389, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.08%
			{7355.32526336213, "1Rnd_SmokePurple_Grenade_shell"}, // 0.08%
			{7363.68926470037, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.08%
			{7372.05326603861, "1Rnd_SmokeRed_Grenade_shell"}, // 0.08%
			{7380.38619875018, "CUP_5Rnd_86x70_L115A1"}, // 0.08%
			{7388.60709918057, "srifle_DMR_07_blk_F"}, // 0.08%
			{7396.82799961096, "srifle_DMR_07_hex_F"}, // 0.08%
			{7405.04890004135, "srifle_DMR_07_ghex_F"}, // 0.08%
			{7412.69509529459, "muzzle_snds_H"}, // 0.08%
			{7420.34129054783, "optic_DMS"}, // 0.08%
			{7427.98748580107, "optic_DMS_ghex_F"}, // 0.08%
			{7435.63368105431, "optic_ERCO_blk_F"}, // 0.08%
			{7443.27987630755, "optic_ERCO_khk_F"}, // 0.08%
			{7450.9260715608, "optic_ERCO_snd_F"}, // 0.08%
			{7458.57226681404, "CUP_optic_ACOG"}, // 0.08%
			{7466.21846206728, "CUP_optic_SUSAT"}, // 0.08%
			{7473.86465732052, "CUP_optic_CompM4"}, // 0.08%
			{7481.51085257376, "CUP_optic_TrijiconRx01_desert"}, // 0.08%
			{7489.15704782701, "optic_MRCO"}, // 0.08%
			{7496.80324308025, "CUP_optic_AN_PVS_4"}, // 0.08%
			{7504.44943833349, "CUP_optic_SB_11_4x20_PM"}, // 0.08%
			{7512.09563358673, "CUP_optic_HoloDesert"}, // 0.08%
			{7519.74182883997, "CUP_optic_HoloBlack"}, // 0.08%
			{7527.38802409321, "CUP_optic_PechenegScope"}, // 0.08%
			{7535.03421934646, "CUP_muzzle_PBS4"}, // 0.08%
			{7542.6804145997, "CUP_optic_RCO"}, // 0.08%
			{7550.32660985294, "acc_pointer_IR"}, // 0.08%
			{7557.97280510618, "optic_Holosight"}, // 0.08%
			{7565.61900035942, "optic_Holosight_blk_F"}, // 0.08%
			{7573.26519561266, "muzzle_snds_H_khk_F"}, // 0.08%
			{7580.91139086591, "muzzle_snds_H_snd_F"}, // 0.08%
			{7588.55758611915, "muzzle_snds_58_blk_F"}, // 0.08%
			{7596.20378137239, "muzzle_snds_m_khk_F"}, // 0.08%
			{7603.84997662563, "muzzle_snds_m_snd_F"}, // 0.08%
			{7611.49617187887, "muzzle_snds_58_wdm_F"}, // 0.08%
			{7619.14236713212, "muzzle_snds_65_TI_blk_F"}, // 0.08%
			{7626.78856238536, "muzzle_snds_65_TI_hex_F"}, // 0.08%
			{7634.4347576386, "muzzle_snds_65_TI_ghex_F"}, // 0.08%
			{7642.08095289184, "muzzle_snds_H_MG_blk_F"}, // 0.08%
			{7649.72714814508, "muzzle_snds_H_MG_khk_F"}, // 0.08%
			{7657.37334339832, "optic_Arco"}, // 0.08%
			{7665.01953865157, "optic_Arco_blk_F"}, // 0.08%
			{7672.66573390481, "optic_Arco_ghex_F"}, // 0.08%
			{7680.31192915805, "optic_Hamr"}, // 0.08%
			{7687.95812441129, "CUP_muzzle_PB6P9"}, // 0.08%
			{7695.60431966453, "muzzle_snds_M"}, // 0.08%
			{7703.25051491778, "optic_Holosight_khk_F"}, // 0.08%
			{7710.89671017102, "optic_Hamr_khk_F"}, // 0.08%
			{7718.54290542426, "CUP_muzzle_Bizon"}, // 0.08%
			{7726.1891006775, "CUP_optic_PSO_3"}, // 0.08%
			{7733.83529593074, "CUP_optic_PSO_1"}, // 0.08%
			{7741.48149118398, "CUP_optic_CompM2_Black"}, // 0.08%
			{7749.12768643723, "CUP_optic_CompM2_Desert"}, // 0.08%
			{7756.77388169047, "CUP_muzzle_snds_XM8"}, // 0.08%
			{7764.42007694371, "CUP_optic_Kobra"}, // 0.08%
			{7771.70142836253, "30Rnd_556x45_Stanag_red"}, // 0.07%
			{7778.98277978136, "30Rnd_65x39_caseless_green"}, // 0.07%
			{7786.26413120018, "30Rnd_556x45_Stanag_green"}, // 0.07%
			{7793.545482619, "30Rnd_556x45_Stanag"}, // 0.07%
			{7800.79921829288, "CUP_srifle_CZ750"}, // 0.07%
			{7807.98932470645, "TRYK_V_tacv1_P_BK"}, // 0.07%
			{7815.17943112003, "TRYK_V_tacv1_SHERIFF_BK"}, // 0.07%
			{7822.3695375336, "TRYK_V_tacv1_FBI_BK"}, // 0.07%
			{7829.55964394717, "TRYK_V_tacv1LP_BK"}, // 0.07%
			{7836.74975036075, "TRYK_V_tacv1LSRF_BK"}, // 0.07%
			{7843.93985677432, "TRYK_V_PlateCarrier_ACU"}, // 0.07%
			{7851.1299631879, "TRYK_V_tacv1_BK"}, // 0.07%
			{7858.32006960147, "TRYK_V_ArmorVest_HRT2_B"}, // 0.07%
			{7865.51017601505, "TRYK_V_tacv1LC_CY"}, // 0.07%
			{7872.70028242862, "TRYK_V_tacv1LC_OD"}, // 0.07%
			{7879.8903888422, "TRYK_V_tacv1LC_FBI_BK"}, // 0.07%
			{7887.08049525577, "TRYK_V_ArmorVest_HRT2_OD"}, // 0.07%
			{7894.27060166935, "TRYK_V_PlateCarrier_blk"}, // 0.07%
			{7901.46070808292, "TRYK_V_PlateCarrier_coyo"}, // 0.07%
			{7908.65081449649, "TRYK_V_tacv1LC_BK"}, // 0.07%
			{7915.84092091007, "TRYK_V_PlateCarrier_wood_L"}, // 0.07%
			{7923.03102732364, "TRYK_V_tacv1LC_SRF_BK"}, // 0.07%
			{7930.22113373722, "TRYK_V_tacv1LC_P_BK"}, // 0.07%
			{7937.41124015079, "TRYK_V_PlateCarrier_ACU_L"}, // 0.07%
			{7944.60134656437, "TRYK_V_PlateCarrier_coyo_L"}, // 0.07%
			{7951.79145297794, "TRYK_V_Bulletproof"}, // 0.07%
			{7958.98155939152, "TRYK_V_ArmorVest_HRT_OD"}, // 0.07%
			{7966.17166580509, "TRYK_V_ArmorVest_HRT_B"}, // 0.07%
			{7973.36177221867, "TRYK_V_Bulletproof_BLK"}, // 0.07%
			{7980.55187863224, "TRYK_V_tacv1LC_SRF_OD"}, // 0.07%
			{7987.74198504581, "TRYK_V_Bulletproof_BL"}, // 0.07%
			{7994.93209145939, "TRYK_V_IOTV_BLK"}, // 0.07%
			{8002.12219787296, "TRYK_V_tacv1M_BK"}, // 0.07%
			{8009.31230428654, "TRYK_V_tacv1MLC_BK"}, // 0.07%
			{8016.50241070011, "TRYK_V_PlateCarrier_blk_L"}, // 0.07%
			{8023.69251711369, "TRYK_V_tacv1_CY"}, // 0.07%
			{8030.88262352726, "TRYK_V_PlateCarrier_POLICE"}, // 0.07%
			{8038.07272994084, "TRYK_V_PlateCarrier_oli"}, // 0.07%
			{8045.26283635441, "TRYK_V_tacv1"}, // 0.07%
			{8052.45294276799, "TRYK_V_PlateCarrier_JSDF"}, // 0.07%
			{8059.64304918156, "U_I_pilotCoveralls"}, // 0.07%
			{8066.83315559513, "U_B_PilotCoveralls"}, // 0.07%
			{8074.02326200871, "U_O_PilotCoveralls"}, // 0.07%
			{8081.21336842228, "U_B_HeliPilotCoveralls"}, // 0.07%
			{8088.40347483586, "U_I_CombatUniform_shortsleeve"}, // 0.07%
			{8095.59358124943, "U_I_CombatUniform_tshirt"}, // 0.07%
			{8102.78368766301, "U_I_CombatUniform"}, // 0.07%
			{8109.97379407658, "U_I_HeliPilotCoveralls"}, // 0.07%
			{8116.76972206748, "hlc_30rnd_556x45_SOST_G36"}, // 0.07%
			{8123.43372313372, "H_HelmetB_light"}, // 0.07%
			{8130.09772419996, "H_HelmetB_paint"}, // 0.07%
			{8136.7617252662, "H_HelmetB_plain_blk"}, // 0.07%
			{8143.42572633245, "H_HelmetSpecB"}, // 0.07%
			{8150.08972739869, "H_HelmetSpecB_paint2"}, // 0.07%
			{8156.75372846493, "H_HelmetSpecB_blk"}, // 0.07%
			{8163.41772953117, "H_HelmetIA"}, // 0.07%
			{8170.08173059741, "H_HelmetSpecB_paint1"}, // 0.07%
			{8176.74573166365, "H_HelmetB"}, // 0.07%
			{8183.30310871283, "3Rnd_UGL_FlareYellow_F"}, // 0.07%
			{8189.86048576201, "3Rnd_UGL_FlareWhite_F"}, // 0.07%
			{8196.41786281119, "3Rnd_UGL_FlareRed_F"}, // 0.07%
			{8202.97523986037, "3Rnd_UGL_FlareGreen_F"}, // 0.07%
			{8209.38518810004, "7Rnd_408_Mag"}, // 0.06%
			{8215.79513633971, "5Rnd_127x108_Mag"}, // 0.06%
			{8222.1988248643, "hgun_Pistol_Signal_F"}, // 0.06%
			{8228.60251338889, "Exile_Weapon_Taurus"}, // 0.06%
			{8234.91301795187, "hlc_30rnd_556x45_EPR_G36"}, // 0.06%
			{8241.22352251485, "hlc_100rnd_556x45_EPR_G36"}, // 0.06%
			{8247.53402707783, "hlc_30Rnd_556x45_B_AUG"}, // 0.06%
			{8253.84453164081, "hlc_75Rnd_762x39_m_rpk"}, // 0.06%
			{8260.15503620379, "hlc_45Rnd_762x39_m_rpk"}, // 0.06%
			{8266.46554076677, "29rnd_300BLK_STANAG_T"}, // 0.06%
			{8272.76206193882, "B_FieldPack_blk"}, // 0.06%
			{8279.05858311087, "B_FieldPack_oucamo"}, // 0.06%
			{8285.35510428292, "B_FieldPack_cbr"}, // 0.06%
			{8291.65162545498, "B_FieldPack_ocamo"}, // 0.06%
			{8297.93819637233, "hlc_rifle_awcovert_BL"}, // 0.06%
			{8304.22476728969, "CUP_srifle_G22_des"}, // 0.06%
			{8310.34172349228, "CUP_optic_Elcan"}, // 0.06%
			{8316.45867969488, "CUP_muzzle_snds_G36_black"}, // 0.06%
			{8322.57563589747, "CUP_muzzle_snds_L85"}, // 0.06%
			{8328.69259210006, "CUP_muzzle_snds_Mk12"}, // 0.06%
			{8334.51767323512, "hlc_50rnd_556x45_EPR"}, // 0.06%
			{8340.34275437018, "hlc_30Rnd_9x19_B_MP5"}, // 0.06%
			{8346.16783550524, "hlc_30Rnd_545x39_B_AK"}, // 0.06%
			{8351.9929166403, "29rnd_300BLK_STANAG"}, // 0.06%
			{8357.7959051794, "hlc_rifle_awcovert_FDE"}, // 0.06%
			{8363.53361009743, "V_HarnessOGL_gry"}, // 0.06%
			{8369.27131501546, "V_HarnessOSpec_gry"}, // 0.06%
			{8375.00901993349, "V_HarnessOSpec_brn"}, // 0.06%
			{8380.74672485153, "V_HarnessO_gry"}, // 0.06%
			{8386.48442976956, "V_BandollierB_rgr"}, // 0.06%
			{8392.22213468759, "V_HarnessO_brn"}, // 0.06%
			{8397.95983960562, "V_BandollierB_oli"}, // 0.06%
			{8403.69754452365, "V_BandollierB_blk"}, // 0.06%
			{8409.43524944169, "V_BandollierB_cbr"}, // 0.06%
			{8415.17295435972, "V_BandollierB_khk"}, // 0.06%
			{8420.91065927775, "V_HarnessOGL_brn"}, // 0.06%
			{8426.60282685517, "CUP_muzzle_snds_M110"}, // 0.06%
			{8431.99540666535, "U_B_SpecopsUniform_sgg"}, // 0.05%
			{8437.33506437248, "hlc_30Rnd_9x19_GD_MP5"}, // 0.05%
			{8442.67472207962, "hlc_40Rnd_556x45_B_AUG"}, // 0.05%
			{8448.01437978675, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.05%
			{8453.35403749389, "HLC_45rnd_762x39_T_RPK"}, // 0.05%
			{8458.69369520103, "hlc_30rnd_556x45_SOST"}, // 0.05%
			{8464.03335290816, "20Rnd_556x45_UW_mag"}, // 0.05%
			{8469.3730106153, "hlc_30Rnd_762x39_b_ak"}, // 0.05%
			{8474.71266832244, "hlc_30Rnd_545x39_T_AK"}, // 0.05%
			{8479.96697685543, "U_I_C_Soldier_Camo_F"}, // 0.05%
			{8485.22128538843, "U_I_C_Soldier_Para_5_F"}, // 0.05%
			{8490.47559392142, "U_I_C_Soldier_Para_4_F"}, // 0.05%
			{8495.72990245442, "U_I_C_Soldier_Para_3_F"}, // 0.05%
			{8500.98421098742, "U_I_C_Soldier_Para_2_F"}, // 0.05%
			{8506.23851952041, "U_I_C_Soldier_Para_1_F"}, // 0.05%
			{8511.36647811215, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{8516.31374474733, "B_ViperHarness_blk_F"}, // 0.05%
			{8521.26101138252, "B_ViperHarness_ghex_F"}, // 0.05%
			{8526.2082780177, "B_ViperHarness_hex_F"}, // 0.05%
			{8531.15554465289, "B_ViperHarness_khk_F"}, // 0.05%
			{8536.10281128807, "B_ViperHarness_oli_F"}, // 0.05%
			{8541.05007792326, "B_ViperLightHarness_hex_F"}, // 0.05%
			{8545.99734455844, "B_ViperLightHarness_blk_F"}, // 0.05%
			{8550.94461119363, "B_ViperLightHarness_ghex_F"}, // 0.05%
			{8555.89187782881, "B_ViperHarness_base_F"}, // 0.05%
			{8560.839144464, "B_ViperLightHarness_khk_F"}, // 0.05%
			{8565.78641109918, "B_ViperLightHarness_oli_F"}, // 0.05%
			{8570.73367773437, "B_ViperLightHarness_base_F"}, // 0.05%
			{8575.68094436955, "B_FieldPack_ghex_F"}, // 0.05%
			{8580.62821100474, "B_Bergen_blk"}, // 0.05%
			{8585.57547763992, "B_Bergen_rgr"}, // 0.05%
			{8590.52274427511, "B_Bergen_mcamo"}, // 0.05%
			{8595.47001091029, "B_Bergen_sgg"}, // 0.05%
			{8600.40779483287, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.05%
			{8605.34557875544, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.05%
			{8610.28336267802, "130Rnd_338_Mag"}, // 0.05%
			{8615.13759695723, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.05%
			{8619.99183123645, "hlc_30rnd_556x45_EPR"}, // 0.05%
			{8624.84606551567, "hlc_30Rnd_545x39_EP_AK"}, // 0.05%
			{8629.70029979488, "hlc_30rnd_556x45_SPR"}, // 0.05%
			{8634.5545340741, "hlc_45Rnd_545x39_t_rpk"}, // 0.05%
			{8639.39035785668, "hlc_rifle_awcovert"}, // 0.05%
			{8644.22618163926, "hlc_rifle_awMagnum_OD_ghillie"}, // 0.05%
			{8648.85555912415, "HLC_Rifle_g3ka4_GL"}, // 0.05%
			{8653.33464180801, "H_Booniehat_indp"}, // 0.04%
			{8657.81372449188, "H_Booniehat_dgtl"}, // 0.04%
			{8662.29280717575, "H_Booniehat_khk"}, // 0.04%
			{8666.77188985961, "H_Booniehat_khk_hs"}, // 0.04%
			{8671.25097254348, "H_Booniehat_tan"}, // 0.04%
			{8675.73005522735, "H_Booniehat_grn"}, // 0.04%
			{8680.20913791122, "H_Booniehat_mcamo"}, // 0.04%
			{8684.68822059508, "H_Booniehat_dirty"}, // 0.04%
			{8689.16730327895, "Exile_Headgear_GasMask"}, // 0.04%
			{8693.60997065644, "H_HelmetB_Light_tna_F"}, // 0.04%
			{8698.05263803394, "H_HelmetCrew_O_ghex_F"}, // 0.04%
			{8702.49530541143, "H_HelmetIA_net"}, // 0.04%
			{8706.93797278893, "H_HelmetIA_camo"}, // 0.04%
			{8711.38064016642, "H_HelmetB_grass"}, // 0.04%
			{8715.82330754391, "H_HelmetB_desert"}, // 0.04%
			{8720.26597492141, "H_HelmetB_black"}, // 0.04%
			{8724.7086422989, "H_HelmetB_sand"}, // 0.04%
			{8729.1513096764, "H_HelmetB_light_grass"}, // 0.04%
			{8733.59397705389, "H_HelmetB_light_snakeskin"}, // 0.04%
			{8738.03664443139, "H_HelmetB_light_desert"}, // 0.04%
			{8742.47931180888, "H_HelmetB_TI_tna_F"}, // 0.04%
			{8746.92197918637, "H_HelmetB_light_black"}, // 0.04%
			{8751.36464656387, "H_BandMask_khk"}, // 0.04%
			{8755.80731394136, "H_BandMask_reaper"}, // 0.04%
			{8760.24998131886, "H_BandMask_demon"}, // 0.04%
			{8764.69264869635, "H_Helmet_Skate"}, // 0.04%
			{8769.13531607385, "H_HelmetB_Enh_tna_F"}, // 0.04%
			{8773.57798345134, "H_Beret_gen_F"}, // 0.04%
			{8778.02065082883, "H_HelmetB_tna_F"}, // 0.04%
			{8782.46331820633, "H_HelmetSpecO_ghex_F"}, // 0.04%
			{8786.90598558382, "H_HelmetLeaderO_ghex_F"}, // 0.04%
			{8791.34865296132, "H_HelmetB_light_sand"}, // 0.04%
			{8795.79132033881, "H_HelmetB_snakeskin"}, // 0.04%
			{8800.1601311901, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.04%
			{8804.5289420414, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.04%
			{8808.89775289269, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.04%
			{8813.26656374399, "30Rnd_65x39_caseless_mag"}, // 0.04%
			{8817.63537459528, "30Rnd_545x39_Mag_Tracer_F"}, // 0.04%
			{8822.00418544658, "Exile_Magazine_20Rnd_9x39"}, // 0.04%
			{8826.37299629787, "Exile_Magazine_10Rnd_9x39"}, // 0.04%
			{8830.74180714916, "Exile_Magazine_10Rnd_762x54"}, // 0.04%
			{8835.11061800046, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.04%
			{8839.47942885175, "Exile_Magazine_5Rnd_22LR"}, // 0.04%
			{8843.84823970305, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.04%
			{8848.21705055434, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.04%
			{8852.58586140564, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.04%
			{8856.95467225693, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.04%
			{8861.32348310822, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.04%
			{8865.69229395952, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.04%
			{8870.06110481081, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.04%
			{8874.42991566211, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.04%
			{8878.7987265134, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.04%
			{8883.1675373647, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.04%
			{8887.53634821599, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.04%
			{8891.90515906728, "30Rnd_545x39_Mag_Green_F"}, // 0.04%
			{8896.27396991858, "30Rnd_580x42_Mag_F"}, // 0.04%
			{8900.64278076987, "30Rnd_762x39_AK47_M"}, // 0.04%
			{8905.01159162117, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.04%
			{8909.38040247246, "30Rnd_762x39_Mag_Tracer_F"}, // 0.04%
			{8913.74921332376, "30Rnd_762x39_Mag_Green_F"}, // 0.04%
			{8918.11802417505, "30Rnd_762x39_Mag_F"}, // 0.04%
			{8922.48683502634, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.04%
			{8926.85564587764, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.04%
			{8931.22445672893, "CUP_30Rnd_545x39_AK_M"}, // 0.04%
			{8935.59326758023, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.04%
			{8939.96207843152, "CUP_30Rnd_556x45_G36"}, // 0.04%
			{8944.33088928282, "CUP_30Rnd_556x45_Stanag"}, // 0.04%
			{8948.69970013411, "20Rnd_762x51_Mag"}, // 0.04%
			{8953.0685109854, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.04%
			{8957.4373218367, "150Rnd_556x45_Drum_Mag_F"}, // 0.04%
			{8961.80613268799, "100Rnd_580x42_Mag_Tracer_F"}, // 0.04%
			{8966.17494353929, "100Rnd_580x42_Mag_F"}, // 0.04%
			{8970.54375439058, "30Rnd_580x42_Mag_Tracer_F"}, // 0.04%
			{8974.91256524188, "30Rnd_545x39_Mag_F"}, // 0.04%
			{8979.28137609317, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.04%
			{8983.63843725541, "CUP_arifle_FNFAL_railed"}, // 0.04%
			{8987.84188408181, "U_IG_leader"}, // 0.04%
			{8991.96602059073, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.04%
			{8996.09015709965, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.04%
			{9000.21429360857, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.04%
			{9004.33843011749, "TRYK_U_B_MARPAT_Wood"}, // 0.04%
			{9008.43679077323, "V_Chestrig_khk"}, // 0.04%
			{9012.53515142897, "V_Chestrig_rgr"}, // 0.04%
			{9016.6335120847, "V_Chestrig_blk"}, // 0.04%
			{9020.73187274044, "V_Chestrig_oli"}, // 0.04%
			{9024.81661758005, "CUP_arifle_FNFAL"}, // 0.04%
			{9028.90136241965, "CUP_srifle_M110"}, // 0.04%
			{9032.83578864916, "CUP_arifle_Mk16_CQC_FG"}, // 0.04%
			{9036.77021487867, "CUP_arifle_AKM"}, // 0.04%
			{9040.70464110818, "CUP_arifle_AK107_GL"}, // 0.04%
			{9044.58802853155, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.04%
			{9048.47141595493, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.04%
			{9052.3548033783, "CUP_30Rnd_Sa58_M"}, // 0.04%
			{9056.23819080167, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.04%
			{9060.12157822505, "Exile_Magazine_10Rnd_303"}, // 0.04%
			{9063.99023725111, "hlc_rifle_awmagnum_BL"}, // 0.04%
			{9067.85889627718, "hlc_rifle_awmagnum"}, // 0.04%
			{9071.6819939038, "CUP_acc_ANPEQ_2_desert"}, // 0.04%
			{9075.50509153042, "optic_NVS"}, // 0.04%
			{9079.32818915704, "CUP_acc_ANPEQ_2_grey"}, // 0.04%
			{9083.15128678366, "CUP_acc_ANPEQ_2_camo"}, // 0.04%
			{9086.86713377819, "arifle_AKS_F"}, // 0.04%
			{9090.58298077273, "CUP_arifle_AK47"}, // 0.04%
			{9094.29882776726, "CUP_arifle_Mk16_CQC"}, // 0.04%
			{9097.89388097405, "U_O_SpecopsUniform_ocamo"}, // 0.04%
			{9101.48893418084, "U_O_V_Soldier_Viper_hex_F"}, // 0.04%
			{9105.08398738763, "U_O_V_Soldier_Viper_F"}, // 0.04%
			{9108.67904059441, "U_O_SpecopsUniform_blk"}, // 0.04%
			{9112.2740938012, "U_O_CombatUniform_oucamo"}, // 0.04%
			{9115.86914700799, "U_O_CombatUniform_ocamo"}, // 0.04%
			{9119.46420021478, "U_O_OfficerUniform_ocamo"}, // 0.04%
			{9123.05925342156, "U_I_Wetsuit"}, // 0.04%
			{9126.65430662835, "U_I_OfficerUniform"}, // 0.04%
			{9130.24935983514, "U_O_Wetsuit"}, // 0.04%
			{9133.84441304192, "U_B_Wetsuit"}, // 0.04%
			{9137.38452523625, "hlc_rifle_g3ka4"}, // 0.04%
			{9140.92463743057, "hlc_rifle_PSG1A1_RIS"}, // 0.04%
			{9144.4647496249, "hlc_rifle_m14sopmod"}, // 0.04%
			{9148.00486181923, "hlc_rifle_STG58F"}, // 0.04%
			{9151.50212957879, "hlc_rifle_SAMR"}, // 0.03%
			{9154.99939733835, "CUP_srifle_Mk12SPR"}, // 0.03%
			{9158.49666509792, "CUP_arifle_AK74_GL"}, // 0.03%
			{9161.89462909337, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.03%
			{9165.29259308882, "CUP_30Rnd_762x39_AK47_M"}, // 0.03%
			{9168.69055708427, "CUP_20Rnd_556x45_Stanag"}, // 0.03%
			{9172.04986909717, "H_Cap_khaki_specops_UK"}, // 0.03%
			{9175.40918111006, "H_Watchcap_khk"}, // 0.03%
			{9178.76849312296, "H_Watchcap_blk"}, // 0.03%
			{9182.12780513586, "H_Cap_tan_specops_US"}, // 0.03%
			{9185.48711714876, "H_Cap_brn_SPECOPS"}, // 0.03%
			{9188.84642916166, "H_Hat_camo"}, // 0.03%
			{9192.20574117456, "H_Bandanna_mcamo"}, // 0.03%
			{9195.56505318746, "H_Bandanna_camo"}, // 0.03%
			{9198.92436520036, "H_Bandanna_gry"}, // 0.03%
			{9202.28367721326, "H_Bandanna_sgg"}, // 0.03%
			{9205.64298922615, "H_Bandanna_cbr"}, // 0.03%
			{9209.00230123905, "H_BandMask_blk"}, // 0.03%
			{9212.36161325195, "H_Bandanna_khk"}, // 0.03%
			{9215.72092526485, "H_Bandanna_khk_hs"}, // 0.03%
			{9219.06652580015, "3Rnd_Smoke_Grenade_shell"}, // 0.03%
			{9222.41212633544, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.03%
			{9225.75772687074, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.03%
			{9229.10332740604, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.03%
			{9232.44892794133, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.03%
			{9235.79452847663, "3Rnd_SmokeRed_Grenade_shell"}, // 0.03%
			{9239.14012901193, "3Rnd_SmokePurple_Grenade_shell"}, // 0.03%
			{9242.41881753652, "hlc_rifle_augsrhbar"}, // 0.03%
			{9245.69750606111, "hlc_rifle_augsrhbar_b"}, // 0.03%
			{9248.9761945857, "hlc_rifle_auga2carb"}, // 0.03%
			{9252.25488311028, "hlc_rifle_auga3_b"}, // 0.03%
			{9255.53357163487, "hlc_rifle_auga1carb_b"}, // 0.03%
			{9258.81226015946, "hlc_rifle_aughbar"}, // 0.03%
			{9262.09094868405, "hlc_rifle_augpara_b"}, // 0.03%
			{9265.36963720864, "hlc_rifle_auga2_t"}, // 0.03%
			{9268.64832573323, "hlc_rifle_auga2_b"}, // 0.03%
			{9271.92701425782, "hlc_rifle_auga2"}, // 0.03%
			{9275.20570278241, "hlc_rifle_auga2carb_t"}, // 0.03%
			{9278.484391307, "hlc_rifle_aughbar_b"}, // 0.03%
			{9281.76307983159, "hlc_rifle_auga3"}, // 0.03%
			{9285.04176835618, "hlc_rifle_aughbar_t"}, // 0.03%
			{9288.32045688077, "hlc_rifle_augsrhbar_t"}, // 0.03%
			{9291.59914540536, "hlc_rifle_augpara"}, // 0.03%
			{9294.87783392995, "hlc_rifle_auga3_bl"}, // 0.03%
			{9298.15652245454, "hlc_rifle_augpara_t"}, // 0.03%
			{9301.43521097913, "hlc_rifle_augsr"}, // 0.03%
			{9304.71389950372, "hlc_rifle_augsrcarb_t"}, // 0.03%
			{9307.99258802831, "hlc_rifle_augsr_b"}, // 0.03%
			{9311.2712765529, "hlc_rifle_augsr_t"}, // 0.03%
			{9314.54996507749, "hlc_rifle_vendimus"}, // 0.03%
			{9317.82865360208, "hlc_rifle_auga2para_t"}, // 0.03%
			{9321.10734212667, "hlc_rifle_aug"}, // 0.03%
			{9324.38603065126, "hlc_rifle_auga1_t"}, // 0.03%
			{9327.66471917585, "hlc_rifle_auga3_GL"}, // 0.03%
			{9330.94340770044, "hlc_rifle_auga2para_b"}, // 0.03%
			{9334.22209622502, "hlc_rifle_auga2para"}, // 0.03%
			{9337.50078474961, "hlc_rifle_auga2lsw_b"}, // 0.03%
			{9340.7794732742, "hlc_rifle_auga2lsw_t"}, // 0.03%
			{9344.05816179879, "hlc_rifle_auga2lsw"}, // 0.03%
			{9347.33685032338, "hlc_rifle_auga2carb_b"}, // 0.03%
			{9350.61553884797, "hlc_rifle_auga1_B"}, // 0.03%
			{9353.89422737256, "hlc_rifle_rpk"}, // 0.03%
			{9357.17291589715, "hlc_rifle_ak12"}, // 0.03%
			{9360.45160442174, "hlc_rifle_augsrcarb"}, // 0.03%
			{9363.73029294633, "hlc_rifle_augsrcarb_b"}, // 0.03%
			{9367.00898147092, "hlc_rifle_auga3_GL_BL"}, // 0.03%
			{9370.28766999551, "hlc_rifle_auga1carb"}, // 0.03%
			{9373.5663585201, "CUP_arifle_AKS74U"}, // 0.03%
			{9376.84504704469, "CUP_arifle_G36A"}, // 0.03%
			{9380.12373556928, "CUP_arifle_G36C"}, // 0.03%
			{9383.40242409387, "arifle_SPAR_03_khk_F"}, // 0.03%
			{9386.68111261846, "CUP_arifle_M16A2"}, // 0.03%
			{9389.95980114305, "hlc_rifle_auga1carb_t"}, // 0.03%
			{9393.23848966764, "CUP_arifle_XM8_Railed"}, // 0.03%
			{9396.51717819223, "hlc_rifle_auga3_GL_B"}, // 0.03%
			{9399.79586671682, "arifle_SPAR_03_snd_F"}, // 0.03%
			{9403.07455524141, "arifle_SPAR_01_blk_F"}, // 0.03%
			{9406.353243766, "arifle_AKM_FL_F"}, // 0.03%
			{9409.63193229059, "arifle_AKM_F"}, // 0.03%
			{9412.91062081518, "arifle_AK12_GL_F"}, // 0.03%
			{9416.18930933976, "arifle_AK12_F"}, // 0.03%
			{9419.46799786435, "CUP_arifle_Mk16_SV"}, // 0.03%
			{9422.74668638894, "CUP_arifle_L86A2"}, // 0.03%
			{9426.01448226063, "hlc_rifle_m14dmr"}, // 0.03%
			{9429.28227813231, "hlc_rifle_sig5104"}, // 0.03%
			{9432.550074004, "hlc_rifle_stgw57_RIS"}, // 0.03%
			{9435.81786987568, "hlc_rifle_SLRchopmod"}, // 0.03%
			{9439.08566574737, "hlc_rifle_M14"}, // 0.03%
			{9442.2906398672, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9445.49561398704, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9448.70058810687, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9451.9055622267, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9454.99866460839, "TRYK_U_B_MARPAT_Desert2_Tshirt"}, // 0.03%
			{9458.09176699008, "TRYK_U_B_MARPAT_Desert"}, // 0.03%
			{9461.18486937177, "TRYK_U_B_MARPAT_Desert2"}, // 0.03%
			{9464.27797175346, "TRYK_U_B_MARPAT_Desert_Tshirt"}, // 0.03%
			{9467.37107413514, "TRYK_U_B_MARPAT_Wood_Tshirt"}, // 0.03%
			{9470.43118342476, "CUP_arifle_M4A1"}, // 0.03%
			{9473.49129271438, "arifle_MX_GL_F"}, // 0.03%
			{9476.551402004, "hlc_rifle_samr2"}, // 0.03%
			{9479.61151129362, "CUP_arifle_CZ805_GL"}, // 0.03%
			{9482.67162058323, "hlc_rifle_RU556"}, // 0.03%
			{9485.66710013228, "hlc_rifle_amt"}, // 0.03%
			{9488.66257968132, "hlc_rifle_FAL5061"}, // 0.03%
			{9491.65805923037, "hlc_rifle_stgw57_commando"}, // 0.03%
			{9494.65353877941, "hlc_rifle_psg1"}, // 0.03%
			{9497.56607934694, "CUP_100Rnd_556x45_BetaCMag"}, // 0.03%
			{9500.40760940159, "hlc_rifle_bcmjack"}, // 0.03%
			{9503.24913945623, "arifle_MXC_F"}, // 0.03%
			{9506.09066951087, "hlc_rifle_RU5562"}, // 0.03%
			{9508.93219956552, "hlc_rifle_Bushmaster300"}, // 0.03%
			{9511.77372962016, "hlc_rifle_Colt727_GL"}, // 0.03%
			{9514.49689284656, "CUP_arifle_Mk17_STD_EGLM"}, // 0.03%
			{9517.22005607297, "hlc_rifle_falosw"}, // 0.03%
			{9519.94321929937, "CUP_srifle_M14"}, // 0.03%
			{9522.66638252577, "hlc_rifle_STGW57"}, // 0.03%
			{9525.28933334544, "CUP_arifle_AK74"}, // 0.03%
			{9527.91228416512, "Exile_Weapon_LeeEnfield"}, // 0.03%
			{9530.48986948319, "TRYK_U_B_NATO_OCP_BLK_CombatUniform"}, // 0.03%
			{9533.06745480127, "TRYK_U_B_NATO_OCP_R_CombatUniform"}, // 0.03%
			{9535.64504011934, "TRYK_U_B_AOR1_Rollup_CombatUniform"}, // 0.03%
			{9538.22262543742, "TRYK_U_B_NATO_OCP_CombatUniform"}, // 0.03%
			{9540.80021075549, "TRYK_U_B_AOR2_Rollup_CombatUniform"}, // 0.03%
			{9543.37779607357, "TRYK_U_B_MTP_CombatUniform"}, // 0.03%
			{9545.95538139164, "TRYK_U_B_NATO_OCPD_R_CombatUniform"}, // 0.03%
			{9548.53296670972, "TRYK_U_B_MTP_R_CombatUniform"}, // 0.03%
			{9551.11055202779, "TRYK_U_B_NATO_OCPD_CombatUniform"}, // 0.03%
			{9553.68813734587, "TRYK_U_B_MTP_BLK_CombatUniform"}, // 0.03%
			{9556.26572266394, "TRYK_U_B_NATO_OCP_BLK_R_CombatUniform"}, // 0.03%
			{9558.84330798202, "TRYK_U_B_MTP_BLK_R_CombatUniform"}, // 0.03%
			{9561.42089330009, "TRYK_U_B_ODTAN_CombatUniform"}, // 0.03%
			{9563.99847861816, "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform"}, // 0.03%
			{9566.57606393624, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.03%
			{9569.15364925431, "TRYK_U_B_TANTAN_CombatUniform"}, // 0.03%
			{9571.73123457239, "TRYK_U_B_TANTAN_R_CombatUniform"}, // 0.03%
			{9574.30881989046, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.03%
			{9576.88640520854, "TRYK_U_B_BLKBLK_R_CombatUniform"}, // 0.03%
			{9579.46399052661, "TRYK_U_B_GRYOCP_CombatUniform"}, // 0.03%
			{9582.04157584469, "TRYK_U_B_GRYOCP_R_CombatUniformTshirt"}, // 0.03%
			{9584.61916116276, "TRYK_U_B_TANOCP_CombatUniform"}, // 0.03%
			{9587.19674648084, "TRYK_U_B_TANOCP_R_CombatUniformTshirt"}, // 0.03%
			{9589.77433179891, "TRYK_U_B_OD_OD_CombatUniform"}, // 0.03%
			{9592.35191711699, "TRYK_U_B_BLKOCP_CombatUniform"}, // 0.03%
			{9594.92950243506, "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt"}, // 0.03%
			{9597.50708775314, "TRYK_U_B_wood3c_CombatUniformTshirt"}, // 0.03%
			{9600.08467307121, "TRYK_U_B_wood3c_CombatUniform"}, // 0.03%
			{9602.66225838929, "TRYK_U_B_wood_CombatUniform"}, // 0.03%
			{9605.23984370736, "TRYK_U_B_GRTANR_CombatUniformTshirt"}, // 0.03%
			{9607.81742902544, "TRYK_U_B_GRTAN_CombatUniform"}, // 0.03%
			{9610.39501434351, "TRYK_U_B_ODTANR_CombatUniformTshirt"}, // 0.03%
			{9612.97259966159, "TRYK_U_B_BLKTAN_CombatUniform"}, // 0.03%
			{9615.55018497966, "TRYK_U_B_BLKTANR_CombatUniformTshirt"}, // 0.03%
			{9618.12777029774, "TRYK_U_B_BLKOCP_R_CombatUniformTshirt"}, // 0.03%
			{9620.70535561581, "TRYK_HRP_khk"}, // 0.03%
			{9623.28294093389, "TRYK_HRP_USMC"}, // 0.03%
			{9625.86052625196, "TRYK_HRP_UCP"}, // 0.03%
			{9628.43811157004, "TRYK_U_B_NATO_UCP_R_CombatUniform"}, // 0.03%
			{9631.01569688811, "TRYK_U_B_NATO_UCP_CombatUniform"}, // 0.03%
			{9633.59328220619, "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform"}, // 0.03%
			{9636.17086752426, "TRYK_U_B_NATO_UCP_GRY_CombatUniform"}, // 0.03%
			{9638.74845284234, "TRYK_U_B_BLK_OD_Rollup_CombatUniform"}, // 0.03%
			{9641.32603816041, "TRYK_U_B_BLK_tan_Rollup_CombatUniform"}, // 0.03%
			{9643.90362347849, "TRYK_U_B_wh_blk_Rollup_CombatUniform"}, // 0.03%
			{9646.48120879656, "TRYK_U_B_wh_OD_Rollup_CombatUniform"}, // 0.03%
			{9649.05879411464, "TRYK_U_B_wh_tan_Rollup_CombatUniform"}, // 0.03%
			{9651.63637943271, "TRYK_U_B_3CD_Ranger_BDUTshirt"}, // 0.03%
			{9654.21396475078, "TRYK_U_B_ARO1_GR_R_CombatUniform"}, // 0.03%
			{9656.79155006886, "TRYK_U_B_ARO1_GR_CombatUniform"}, // 0.03%
			{9659.36913538693, "TRYK_U_B_3CD_Ranger_BDU"}, // 0.03%
			{9661.94672070501, "TRYK_U_B_3CD_Delta_BDUTshirt"}, // 0.03%
			{9664.52430602308, "TRYK_U_B_3CD_Delta_BDU"}, // 0.03%
			{9667.10189134116, "TRYK_U_B_JSDF_CombatUniformTshirt"}, // 0.03%
			{9669.67947665923, "TRYK_U_B_JSDF_CombatUniform"}, // 0.03%
			{9672.25706197731, "TRYK_U_B_woodtanR_CombatUniformTshirt"}, // 0.03%
			{9674.83464729538, "TRYK_U_B_WDL_GRY_R_CombatUniform"}, // 0.03%
			{9677.41223261346, "TRYK_U_B_WDL_GRY_CombatUniform"}, // 0.03%
			{9679.98981793153, "TRYK_U_B_woodtan_CombatUniform"}, // 0.03%
			{9682.56740324961, "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform"}, // 0.03%
			{9685.14498856768, "TRYK_U_B_woodR_CombatUniformTshirt"}, // 0.03%
			{9687.72257388576, "TRYK_U_B_Woodland_Tshirt"}, // 0.03%
			{9690.30015920383, "TRYK_U_B_ARO1_GRY_CombatUniform"}, // 0.03%
			{9692.87774452191, "TRYK_U_B_AOR2_GRY_R_CombatUniform"}, // 0.03%
			{9695.45532983998, "TRYK_U_B_Snow_CombatUniform"}, // 0.03%
			{9698.03291515806, "TRYK_U_B_Woodland"}, // 0.03%
			{9700.61050047613, "TRYK_U_B_Snowt"}, // 0.03%
			{9703.18808579421, "TRYK_T_camo_tan"}, // 0.03%
			{9705.76567111228, "TRYK_T_camo_3c"}, // 0.03%
			{9708.34325643036, "TRYK_T_camo_Wood"}, // 0.03%
			{9710.92084174843, "TRYK_T_camo_wood_marpat"}, // 0.03%
			{9713.49842706651, "TRYK_T_camo_Desert_marpat"}, // 0.03%
			{9716.07601238458, "TRYK_T_camo_3c_BG"}, // 0.03%
			{9718.65359770266, "TRYK_T_camo_Wood_BG"}, // 0.03%
			{9721.23118302073, "TRYK_T_camo_wood_marpat_BG"}, // 0.03%
			{9723.80876833881, "TRYK_U_B_AOR2_OD_R_CombatUniform"}, // 0.03%
			{9726.38635365688, "TRYK_T_camo_desert_marpat_BG"}, // 0.03%
			{9728.96393897496, "TRYK_U_B_ARO1_BLK_R_CombatUniform"}, // 0.03%
			{9731.54152429303, "TRYK_U_B_ARO1_GRY_R_CombatUniform"}, // 0.03%
			{9734.11910961111, "TRYK_U_B_ARO1_CombatUniform"}, // 0.03%
			{9736.69669492918, "TRYK_U_B_ARO1R_CombatUniform"}, // 0.03%
			{9739.27428024725, "TRYK_U_B_ARO1_BLK_CombatUniform"}, // 0.03%
			{9741.85186556533, "TRYK_U_B_ARO1_CBR_CombatUniform"}, // 0.03%
			{9744.4294508834, "TRYK_U_B_ARO1_CBR_R_CombatUniform"}, // 0.03%
			{9747.00703620148, "TRYK_U_B_AOR2_GRY_CombatUniform"}, // 0.03%
			{9749.58462151955, "TRYK_U_B_ARO2R_CombatUniform"}, // 0.03%
			{9752.16220683763, "TRYK_U_B_AOR2_BLK_CombatUniform"}, // 0.03%
			{9754.7397921557, "TRYK_U_B_AOR2_BLK_R_CombatUniform"}, // 0.03%
			{9757.31737747378, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.03%
			{9759.89496279185, "TRYK_U_B_ARO2_CombatUniform"}, // 0.03%
			{9762.3539791853, "V_I_G_resistanceLeader_F"}, // 0.02%
			{9764.78263735166, "ItemGPS"}, // 0.02%
			{9767.21129551802, "Exile_Item_MobilePhone"}, // 0.02%
			{9769.63841265763, "10Rnd_50BW_Mag_F"}, // 0.02%
			{9772.05632454892, "CUP_srifle_AWM_des"}, // 0.02%
			{9774.47423644021, "hlc_rifle_awMagnum_FDE_ghillie"}, // 0.02%
			{9776.8921483315, "CUP_srifle_AWM_wdl"}, // 0.02%
			{9779.2965199162, "hlc_rifle_ak47"}, // 0.02%
			{9781.7008915009, "arifle_MX_F"}, // 0.02%
			{9783.94043284284, "H_Cap_grn_Syndikat_F"}, // 0.02%
			{9786.17997418477, "H_Watchcap_camo"}, // 0.02%
			{9788.4195155267, "H_Watchcap_sgg"}, // 0.02%
			{9790.65905686864, "H_TurbanO_blk"}, // 0.02%
			{9792.89859821057, "H_Shemag_khk"}, // 0.02%
			{9795.1381395525, "H_Shemag_tan"}, // 0.02%
			{9797.37768089443, "H_Shemag_olive"}, // 0.02%
			{9799.61722223637, "H_Shemag_olive_hs"}, // 0.02%
			{9801.8567635783, "H_ShemagOpen_khk"}, // 0.02%
			{9804.09630492023, "H_ShemagOpen_tan"}, // 0.02%
			{9806.33584626216, "H_MilCap_tna_F"}, // 0.02%
			{9808.5753876041, "H_MilCap_ghex_F"}, // 0.02%
			{9810.81492894603, "H_FakeHeadgear_Syndikat_F"}, // 0.02%
			{9813.05447028796, "H_Cap_blk_Syndikat_F"}, // 0.02%
			{9815.29401162989, "H_Cap_tan_Syndikat_F"}, // 0.02%
			{9817.53355297183, "H_Cap_oli_Syndikat_F"}, // 0.02%
			{9819.77309431376, "H_MilCap_gen_F"}, // 0.02%
			{9822.01263565569, "H_Booniehat_tna_F"}, // 0.02%
			{9824.23396934444, "H_CrewHelmetHeli_O"}, // 0.02%
			{9826.45530303319, "H_HelmetCrew_B"}, // 0.02%
			{9828.67663672193, "H_HelmetCrew_O"}, // 0.02%
			{9830.89797041068, "H_HelmetCrew_I"}, // 0.02%
			{9833.11930409943, "H_PilotHelmetFighter_B"}, // 0.02%
			{9835.34063778817, "H_CrewHelmetHeli_B"}, // 0.02%
			{9837.56197147692, "H_PilotHelmetFighter_I"}, // 0.02%
			{9839.78330516567, "H_PilotHelmetFighter_O"}, // 0.02%
			{9842.00463885442, "H_PilotHelmetHeli_O"}, // 0.02%
			{9844.22597254316, "H_PilotHelmetHeli_I"}, // 0.02%
			{9846.44730623191, "H_HelmetO_ghex_F"}, // 0.02%
			{9848.66863992066, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9850.8899736094, "H_HelmetO_ocamo"}, // 0.02%
			{9853.11130729815, "H_HelmetB_camo"}, // 0.02%
			{9855.3326409869, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9857.55397467565, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9859.77530836439, "H_HelmetO_oucamo"}, // 0.02%
			{9861.99664205314, "H_CrewHelmetHeli_I"}, // 0.02%
			{9864.21797574189, "H_PilotHelmetHeli_B"}, // 0.02%
			{9866.43930943063, "H_HelmetSpecO_blk"}, // 0.02%
			{9868.62510178036, "CUP_arifle_Sa58P"}, // 0.02%
			{9870.81089413009, "CUP_arifle_AK107"}, // 0.02%
			{9872.99668647981, "CUP_arifle_AK74M"}, // 0.02%
			{9875.18247882954, "CUP_arifle_CZ805_B"}, // 0.02%
			{9877.36827117927, "CUP_arifle_CZ805_A1"}, // 0.02%
			{9879.55406352899, "hlc_rifle_akm"}, // 0.02%
			{9881.73985587872, "hlc_rifle_akmgl"}, // 0.02%
			{9883.92564822845, "hlc_rifle_honeybadger"}, // 0.02%
			{9886.11144057817, "CUP_arifle_L85A2_GL"}, // 0.02%
			{9888.2972329279, "hlc_rifle_ak74"}, // 0.02%
			{9890.48302527762, "Exile_Weapon_CZ550"}, // 0.02%
			{9892.66881762735, "Exile_Weapon_AK47"}, // 0.02%
			{9894.85460997708, "Exile_Weapon_AK74"}, // 0.02%
			{9897.0404023268, "Exile_Weapon_AK74_GL"}, // 0.02%
			{9899.22619467653, "Exile_Weapon_AK107_GL"}, // 0.02%
			{9901.41198702626, "Exile_Weapon_AK107"}, // 0.02%
			{9903.59777937598, "CUP_arifle_Mk16_STD_EGLM"}, // 0.02%
			{9905.78357172571, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.02%
			{9907.96210230683, "CUP_arifle_Mk17_STD_FG"}, // 0.02%
			{9910.14063288795, "CUP_arifle_Mk20"}, // 0.02%
			{9912.31916346908, "hlc_rifle_c1A1"}, // 0.02%
			{9914.4976940502, "hlc_rifle_SLR"}, // 0.02%
			{9916.5994174634, "U_I_G_resistanceLeader_F"}, // 0.02%
			{9918.5224019353, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{9920.27103581508, "arifle_MXC_khk_F"}, // 0.02%
			{9922.01966969486, "arifle_MX_GL_khk_F"}, // 0.02%
			{9923.76830357464, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.02%
			{9925.51693745442, "CUP_arifle_Sa58RIS1"}, // 0.02%
			{9927.2655713342, "CUP_arifle_Sa58RIS2_gl"}, // 0.02%
			{9929.01420521399, "arifle_MX_khk_F"}, // 0.02%
			{9930.56075640483, "TRYK_H_ghillie_over_green"}, // 0.02%
			{9932.10730759567, "TRYK_H_ghillie_top_headless_green"}, // 0.02%
			{9933.65385878652, "TRYK_H_ghillie_over"}, // 0.02%
			{9935.20040997736, "TRYK_H_ghillie_top"}, // 0.02%
			{9936.74696116821, "TRYK_H_ghillie_top_headless"}, // 0.02%
			{9938.29351235905, "TRYK_H_ghillie_top_green"}, // 0.02%
			{9939.82356700386, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9941.35362164867, "CUP_arifle_M4A1_camo"}, // 0.02%
			{9942.88367629348, "CUP_arifle_Sa58P_des"}, // 0.02%
			{9944.24525790668, "CUP_srifle_L129A1_HG"}, // 0.01%
			{9945.60683951988, "CUP_srifle_L129A1"}, // 0.01%
			{9946.91831492972, "arifle_MXM_F"}, // 0.01%
			{9948.22979033956, "Exile_Weapon_VSSVintorez"}, // 0.01%
			{9949.54126574939, "CUP_arifle_M4A3_desert"}, // 0.01%
			{9950.85274115923, "Exile_Weapon_SVDCamo"}, // 0.01%
			{9952.16421656907, "Exile_Weapon_SVD"}, // 0.01%
			{9953.446206217, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.01%
			{9954.56597688797, "H_Beret_ocamo"}, // 0.01%
			{9955.68574755893, "H_Beret_02"}, // 0.01%
			{9956.8055182299, "H_Beret_blk"}, // 0.01%
			{9957.92528890087, "H_Beret_red"}, // 0.01%
			{9959.04505957183, "H_Beret_grn"}, // 0.01%
			{9960.1648302428, "H_Beret_Colonel"}, // 0.01%
			{9961.28460091376, "H_Beret_brn_SF"}, // 0.01%
			{9962.40437158473, "H_Beret_grn_SF"}, // 0.01%
			{9963.49726775959, "arifle_CTARS_hex_F"}, // 0.01%
			{9964.59016393446, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9965.68306010932, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.01%
			{9966.77595628418, "arifle_SPAR_01_khk_F"}, // 0.01%
			{9967.86885245905, "arifle_SPAR_01_snd_F"}, // 0.01%
			{9968.96174863391, "arifle_SPAR_01_GL_blk_F"}, // 0.01%
			{9970.05464480877, "arifle_SPAR_01_GL_khk_F"}, // 0.01%
			{9971.14754098364, "arifle_SPAR_02_snd_F"}, // 0.01%
			{9972.2404371585, "arifle_SPAR_02_blk_F"}, // 0.01%
			{9973.33333333336, "arifle_SPAR_02_khk_F"}, // 0.01%
			{9974.42622950823, "CUP_arifle_AK107_GL_pso"}, // 0.01%
			{9975.51912568309, "arifle_SPAR_03_blk_F"}, // 0.01%
			{9976.61202185795, "CUP_arifle_L85A2_NG"}, // 0.01%
			{9977.70491803282, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.01%
			{9978.79781420768, "arifle_SPAR_01_GL_snd_F"}, // 0.01%
			{9979.89071038254, "CUP_arifle_AK107_kobra"}, // 0.01%
			{9980.98360655741, "arifle_ARX_blk_F"}, // 0.01%
			{9982.07650273227, "arifle_CTARS_ghex_F"}, // 0.01%
			{9983.16939890713, "arifle_CTARS_blk_F"}, // 0.01%
			{9984.262295082, "arifle_CTAR_GL_blk_F"}, // 0.01%
			{9985.35519125686, "arifle_CTAR_ghex_F"}, // 0.01%
			{9986.44808743172, "arifle_CTAR_hex_F"}, // 0.01%
			{9987.54098360658, "arifle_CTAR_blk_F"}, // 0.01%
			{9988.63387978145, "CUP_arifle_AKS_Gold"}, // 0.01%
			{9989.72677595631, "arifle_ARX_hex_F"}, // 0.01%
			{9990.81967213117, "Exile_Weapon_DMR"}, // 0.01%
			{9991.91256830604, "arifle_ARX_ghex_F"}, // 0.01%
			{9992.78688524593, "arifle_MXM_Black_F"}, // 0.01%
			{9993.66120218582, "arifle_TRG21_GL_F"}, // 0.01%
			{9994.53551912571, "arifle_Mk20_GL_F"}, // 0.01%
			{9995.4098360656, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9996.06557377052, "arifle_MX_GL_Black_F"}, // 0.01%
			{9996.72131147544, "arifle_MXM_khk_F"}, // 0.01%
			{9997.37704918036, "arifle_Mk20C_F"}, // 0.01%
			{9998.03278688527, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9998.68852459019, "arifle_MXC_Black_F"}, // 0.01%
			{9999.34426229511, "arifle_MX_Black_F"}, // 0.01%
			{10000, "Exile_Weapon_AKS_Gold"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Magazine03
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Magazine02
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_InstaDoc
	  Exile_Item_InstaDoc
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_InstaDoc
	  Exile_Item_Can_Empty
	  Exile_Item_InstaDoc
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine04
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
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
	  H_HelmetCrew_I
	  Exile_Item_ZipTie
	  ItemCompass
	  U_O_T_Soldier_F
	  B_OutdoorPack_blk
	  B_ViperLightHarness_hex_F
	  B_AssaultPack_tna_F
	  MiniGrenade
	  U_IG_Guerilla2_2
	  ItemWatch
	  U_IG_Guerilla1_1
	  U_IG_Guerilla2_1
	  Exile_Item_ZipTie
	  B_AssaultPack_mcamo
	  Exile_Item_ZipTie
	  U_IG_Guerilla3_2
	  U_IG_Guerilla2_1
	  CUP_muzzle_snds_M9
	  B_OutdoorPack_tan
	  CUP_acc_CZ_M3X
	  H_PilotHelmetFighter_B
	  Exile_Item_ZipTie
	  U_I_CombatUniform_tshirt
	  H_HelmetB_grass
	  hgun_Pistol_01_F
	  ItemWatch
	  U_B_CTRG_Soldier_urb_2_F
	  B_ViperHarness_blk_F
	  CUP_muzzle_snds_MicroUzi
	  B_OutdoorPack_blk
	  B_FieldPack_blk
	  B_Carryall_oli
	  U_B_CTRG_Soldier_urb_1_F
	  B_OutdoorPack_blk
	  Exile_Item_Heatpack
	  B_FieldPack_ocamo
	  U_O_T_Officer_F
	  B_ViperLightHarness_hex_F
	  Exile_Item_ZipTie
	  CUP_hgun_Duty_M3X
	  CUP_hgun_Duty_M3X
	  B_AssaultPack_cbr
	  ItemCompass
	  ItemRadio
	  B_OutdoorPack_tan
	  B_HuntingBackpack
	  CUP_acc_CZ_M3X
	  H_HelmetB_grass
	  Exile_Item_Heatpack
	  U_IG_leader
	  CUP_18Rnd_9x19_Phantom
	  B_Carryall_mcamo
	  U_IG_Guerilla3_1
	  Exile_Magazine_6Rnd_45ACP
	  U_IG_Guerilla2_3
	  U_O_Wetsuit
	  B_OutdoorPack_blk
	  B_AssaultPack_dgtl
	  B_HuntingBackpack
	  HandGrenade
	  U_I_HeliPilotCoveralls
	  hgun_P07_khk_F
	  B_FieldPack_cbr
	  B_AssaultPack_khk
	  U_IG_Guerilla2_3
	  H_HelmetB_TI_tna_F
	  optic_Yorris
	  H_MilCap_mcamo
	  B_OutdoorPack_blu
	  B_Carryall_ghex_F
	  10Rnd_9x21_Mag
	  hgun_P07_khk_F
	  CUP_muzzle_snds_M9
	  B_Kitbag_mcamo
	  hgun_Pistol_heavy_02_F
	  B_FieldPack_cbr
	  B_Bergen_mcamo_F
	  B_FieldPack_ocamo
	  U_I_C_Soldier_Para_1_F
	  U_IG_Guerilla3_1
	  9Rnd_45ACP_Mag
	  H_MilCap_dgtl
	  CUP_muzzle_snds_M9
	  hlc_smg_mp5k_PDW
	  B_Carryall_mcamo
	  ItemMap
	  H_HelmetSpecO_blk
	  ItemCompass
	  B_Bergen_mcamo_F
	  B_OutdoorPack_blu
	  optic_MRD
	  hlc_smg_mp5k_PDW
	  hlc_smg_mp5k_PDW
	  U_I_CombatUniform_shortsleeve
	  B_ViperLightHarness_hex_F
	  ItemWatch
	  hgun_Pistol_01_F
	  U_O_CombatUniform_oucamo
	  U_B_CombatUniform_mcam
	*/
	class Tourist
	{
		count = 230;
		half = 8137.45962973295;
		halfIndex = 115;
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
			{4875.17167015557, "B_Carryall_ocamo"}, // 0.79%
			{4953.82099901463, "B_Carryall_mcamo"}, // 0.79%
			{5032.47032787369, "B_Carryall_oucamo"}, // 0.79%
			{5105.71251537369, "CUP_hgun_Phantom"}, // 0.73%
			{5178.72653406528, "B_Kitbag_mcamo"}, // 0.73%
			{5251.74055275687, "B_Kitbag_sgg"}, // 0.73%
			{5324.75457144846, "B_Kitbag_cbr"}, // 0.73%
			{5386.20120066194, "optic_MRD"}, // 0.61%
			{5447.64782987542, "optic_Yorris"}, // 0.61%
			{5508.68298612542, "hlc_smg_mp5k_PDW"}, // 0.61%
			{5569.71814237542, "hlc_smg_mp5k"}, // 0.61%
			{5630.75329862542, "hgun_Pistol_heavy_01_F"}, // 0.61%
			{5685.77090425922, "11Rnd_45ACP_Mag"}, // 0.55%
			{5740.78850989303, "30Rnd_9x21_Mag"}, // 0.55%
			{5795.80611552683, "9Rnd_45ACP_Mag"}, // 0.55%
			{5850.82372116063, "Exile_Magazine_8Rnd_9x18"}, // 0.55%
			{5905.84132679444, "Exile_Magazine_7Rnd_45ACP"}, // 0.55%
			{5960.85893242824, "hlc_30Rnd_9x19_B_MP5"}, // 0.55%
			{6015.87653806204, "Exile_Magazine_6Rnd_45ACP"}, // 0.55%
			{6070.89414369585, "10Rnd_9x21_Mag"}, // 0.55%
			{6124.77345404067, "Exile_Item_Bandage"}, // 0.54%
			{6177.67058945734, "CUP_hgun_SA61"}, // 0.53%
			{6230.56772487401, "hgun_Rook40_F"}, // 0.53%
			{6283.46486029068, "hgun_P07_khk_F"}, // 0.53%
			{6336.36199570734, "hgun_Pistol_01_F"}, // 0.53%
			{6385.87784077777, "CUP_30Rnd_9x19_UZI"}, // 0.50%
			{6435.39368584819, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.50%
			{6484.90953091861, "CUP_18Rnd_9x19_Phantom"}, // 0.50%
			{6534.42537598903, "hlc_30Rnd_9x19_GD_MP5"}, // 0.50%
			{6583.25350098903, "hgun_P07_F"}, // 0.49%
			{6632.08162598903, "CUP_hgun_Duty_M3X"}, // 0.49%
			{6677.09191405488, "B_FieldPack_ocamo"}, // 0.45%
			{6722.10220212072, "B_FieldPack_oucamo"}, // 0.45%
			{6767.11249018656, "B_FieldPack_blk"}, // 0.45%
			{6812.12277825241, "B_FieldPack_cbr"}, // 0.45%
			{6856.13686275945, "6Rnd_45ACP_Cylinder"}, // 0.44%
			{6899.24031103531, "Exile_Item_InstaDoc"}, // 0.43%
			{6939.93041520198, "CUP_hgun_PB6P9_snds"}, // 0.41%
			{6975.29564153943, "B_ViperHarness_ghex_F"}, // 0.35%
			{7010.66086787688, "B_ViperHarness_blk_F"}, // 0.35%
			{7046.02609421433, "B_ViperHarness_hex_F"}, // 0.35%
			{7081.39132055177, "B_ViperLightHarness_blk_F"}, // 0.35%
			{7116.75654688922, "B_ViperHarness_khk_F"}, // 0.35%
			{7152.12177322667, "B_ViperHarness_base_F"}, // 0.35%
			{7187.48699956412, "B_FieldPack_ghex_F"}, // 0.35%
			{7222.85222590157, "B_Bergen_blk"}, // 0.35%
			{7258.21745223902, "B_Bergen_rgr"}, // 0.35%
			{7293.58267857647, "B_ViperHarness_oli_F"}, // 0.35%
			{7328.94790491392, "B_ViperLightHarness_base_F"}, // 0.35%
			{7364.31313125136, "B_ViperLightHarness_ghex_F"}, // 0.35%
			{7399.67835758881, "B_Bergen_sgg"}, // 0.35%
			{7435.04358392626, "B_ViperLightHarness_khk_F"}, // 0.35%
			{7470.40881026371, "B_Bergen_mcamo"}, // 0.35%
			{7505.77403660116, "B_ViperLightHarness_oli_F"}, // 0.35%
			{7541.13926293861, "B_ViperLightHarness_hex_F"}, // 0.35%
			{7574.14982631889, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.33%
			{7606.70190965222, "CUP_hgun_MicroUzi"}, // 0.33%
			{7638.16164119585, "B_Bergen_Base_F"}, // 0.31%
			{7669.62137273947, "B_Bergen_mcamo_F"}, // 0.31%
			{7701.08110428309, "B_Bergen_dgtl_F"}, // 0.31%
			{7732.54083582672, "B_Bergen_hex_F"}, // 0.31%
			{7764.00056737034, "B_Bergen_tna_F"}, // 0.31%
			{7794.04864429342, "U_I_C_Soldier_Para_4_F"}, // 0.30%
			{7824.0967212165, "U_I_C_Soldier_Para_5_F"}, // 0.30%
			{7854.14479813957, "U_I_C_Soldier_Camo_F"}, // 0.30%
			{7884.19287506265, "U_I_C_Soldier_Para_3_F"}, // 0.30%
			{7914.24095198573, "U_I_C_Soldier_Para_2_F"}, // 0.30%
			{7944.28902890881, "U_I_C_Soldier_Para_1_F"}, // 0.30%
			{7972.77210182547, "hgun_ACPC2_F"}, // 0.28%
			{8001.25517474214, "hgun_Pistol_heavy_02_F"}, // 0.28%
			{8028.76397755904, "16Rnd_9x21_Mag"}, // 0.28%
			{8055.93789060252, "NVGoggles"}, // 0.27%
			{8083.111803646, "O_NVGoggles_hex_F"}, // 0.27%
			{8110.28571668947, "O_NVGoggles_urb_F"}, // 0.27%
			{8137.45962973295, "O_NVGoggles_ghex_F"}, // 0.27%
			{8164.63354277643, "NVGoggles_tna_F"}, // 0.27%
			{8190.6752094431, "U_I_GhillieSuit"}, // 0.26%
			{8216.71687610976, "U_O_GhillieSuit"}, // 0.26%
			{8242.75854277643, "U_B_GhillieSuit"}, // 0.26%
			{8268.45755593432, "U_B_GEN_Soldier_F"}, // 0.26%
			{8294.15656909222, "U_O_T_Officer_F"}, // 0.26%
			{8319.85558225011, "U_B_T_Soldier_AR_F"}, // 0.26%
			{8345.55459540801, "U_O_T_Soldier_F"}, // 0.26%
			{8371.2536085659, "U_B_CTRG_Soldier_2_F"}, // 0.26%
			{8396.9526217238, "U_B_CTRG_Soldier_3_F"}, // 0.26%
			{8422.65163488169, "U_B_CTRG_Soldier_urb_1_F"}, // 0.26%
			{8448.35064803959, "U_B_CTRG_Soldier_urb_2_F"}, // 0.26%
			{8474.04966119749, "U_B_GEN_Commander_F"}, // 0.26%
			{8499.74867435538, "U_B_T_Soldier_SL_F"}, // 0.26%
			{8525.44768751328, "U_B_CTRG_Soldier_urb_3_F"}, // 0.26%
			{8551.14670067117, "U_B_CTRG_Soldier_F"}, // 0.26%
			{8576.84571382907, "U_B_CTRG_1"}, // 0.26%
			{8602.54472698696, "U_B_CombatUniform_mcam_worn"}, // 0.26%
			{8628.24374014486, "U_B_CombatUniform_mcam_vest"}, // 0.26%
			{8653.94275330275, "U_B_CombatUniform_mcam_tshirt"}, // 0.26%
			{8679.64176646065, "U_B_CombatUniform_mcam"}, // 0.26%
			{8705.34077961854, "U_B_CTRG_3"}, // 0.26%
			{8731.03979277644, "U_B_CTRG_2"}, // 0.26%
			{8756.44629684148, "H_MilCap_dgtl"}, // 0.25%
			{8781.85280090652, "H_MilCap_rucamo"}, // 0.25%
			{8807.25930497156, "H_MilCap_oucamo"}, // 0.25%
			{8832.6658090366, "H_MilCap_mcamo"}, // 0.25%
			{8858.07231310164, "H_MilCap_ocamo"}, // 0.25%
			{8883.47881716668, "Exile_Headgear_GasMask"}, // 0.25%
			{8908.88532123172, "H_MilCap_blue"}, // 0.25%
			{8933.29938373172, "Exile_Weapon_Makarov"}, // 0.24%
			{8957.33784527018, "U_IG_leader"}, // 0.24%
			{8977.89705579649, "U_I_CombatUniform"}, // 0.21%
			{8998.45626632281, "U_I_CombatUniform_tshirt"}, // 0.21%
			{9019.01547684912, "U_I_CombatUniform_shortsleeve"}, // 0.21%
			{9039.57468737544, "U_B_HeliPilotCoveralls"}, // 0.21%
			{9060.13389790175, "U_O_PilotCoveralls"}, // 0.21%
			{9080.69310842807, "U_B_PilotCoveralls"}, // 0.21%
			{9101.25231895438, "U_I_HeliPilotCoveralls"}, // 0.21%
			{9121.8115294807, "U_I_pilotCoveralls"}, // 0.21%
			{9142.15658156403, "Exile_Weapon_Colt1911"}, // 0.20%
			{9161.41274353586, "6Rnd_GreenSignal_F"}, // 0.19%
			{9180.66890550769, "6Rnd_RedSignal_F"}, // 0.19%
			{9199.72378355647, "H_HelmetSpecB_paint1"}, // 0.19%
			{9218.77866160525, "H_HelmetSpecB"}, // 0.19%
			{9237.83353965404, "H_HelmetB_light"}, // 0.19%
			{9256.88841770282, "H_HelmetB_paint"}, // 0.19%
			{9275.9432957516, "H_HelmetB"}, // 0.19%
			{9294.99817380038, "H_HelmetB_plain_blk"}, // 0.19%
			{9314.05305184916, "H_HelmetIA"}, // 0.19%
			{9333.10792989794, "H_HelmetSpecB_paint2"}, // 0.19%
			{9352.16280794672, "H_HelmetSpecB_blk"}, // 0.19%
			{9369.52391905783, "ItemGPS"}, // 0.17%
			{9386.88503016894, "Exile_Item_MobilePhone"}, // 0.17%
			{9403.16107183561, "Exile_Weapon_TaurusGold"}, // 0.16%
			{9418.58047973034, "U_B_SpecopsUniform_sgg"}, // 0.15%
			{9431.28373176287, "H_HelmetB_light_black"}, // 0.13%
			{9443.98698379539, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9456.69023582791, "H_HelmetB_light_sand"}, // 0.13%
			{9469.39348786043, "H_BandMask_khk"}, // 0.13%
			{9482.09673989295, "H_BandMask_reaper"}, // 0.13%
			{9494.79999192547, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9507.50324395799, "H_HelmetB_light_grass"}, // 0.13%
			{9520.20649599051, "H_Helmet_Skate"}, // 0.13%
			{9532.90974802303, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9545.61300005555, "H_HelmetB_light_desert"}, // 0.13%
			{9558.31625208808, "H_Beret_gen_F"}, // 0.13%
			{9571.0195041206, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9583.72275615312, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9596.42600818564, "H_HelmetIA_net"}, // 0.13%
			{9609.12926021816, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9621.83251225068, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9634.5357642832, "H_BandMask_demon"}, // 0.13%
			{9647.23901631572, "H_HelmetB_sand"}, // 0.13%
			{9659.94226834824, "H_HelmetB_black"}, // 0.13%
			{9672.64552038077, "H_HelmetB_desert"}, // 0.13%
			{9685.34877241329, "H_HelmetB_snakeskin"}, // 0.13%
			{9698.05202444581, "H_HelmetB_grass"}, // 0.13%
			{9710.75527647833, "H_HelmetB_tna_F"}, // 0.13%
			{9723.45852851085, "H_HelmetIA_camo"}, // 0.13%
			{9735.66555976085, "Exile_Weapon_Taurus"}, // 0.12%
			{9747.87259101085, "hgun_Pistol_Signal_F"}, // 0.12%
			{9759.89182178008, "U_I_G_resistanceLeader_F"}, // 0.12%
			{9770.17142704324, "U_I_OfficerUniform"}, // 0.10%
			{9780.4510323064, "U_O_V_Soldier_Viper_hex_F"}, // 0.10%
			{9790.73063756956, "U_O_V_Soldier_Viper_F"}, // 0.10%
			{9801.01024283271, "U_O_SpecopsUniform_blk"}, // 0.10%
			{9811.28984809587, "U_O_SpecopsUniform_ocamo"}, // 0.10%
			{9821.56945335903, "U_O_CombatUniform_oucamo"}, // 0.10%
			{9831.84905862219, "U_O_CombatUniform_ocamo"}, // 0.10%
			{9842.12866388535, "U_I_Wetsuit"}, // 0.10%
			{9852.40826914851, "U_O_Wetsuit"}, // 0.10%
			{9862.68787441166, "U_B_Wetsuit"}, // 0.10%
			{9872.96747967482, "U_O_OfficerUniform_ocamo"}, // 0.10%
			{9879.31910569108, "H_HelmetO_ghex_F"}, // 0.06%
			{9885.67073170734, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9892.0223577236, "H_HelmetO_ocamo"}, // 0.06%
			{9898.37398373986, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9904.72560975612, "H_HelmetSpecO_blk"}, // 0.06%
			{9911.07723577238, "H_HelmetCrew_B"}, // 0.06%
			{9917.42886178864, "H_HelmetCrew_O"}, // 0.06%
			{9923.7804878049, "H_HelmetCrew_I"}, // 0.06%
			{9930.13211382116, "H_PilotHelmetFighter_B"}, // 0.06%
			{9936.48373983742, "H_PilotHelmetFighter_O"}, // 0.06%
			{9942.83536585368, "H_PilotHelmetFighter_I"}, // 0.06%
			{9949.18699186994, "H_PilotHelmetHeli_B"}, // 0.06%
			{9955.5386178862, "H_PilotHelmetHeli_O"}, // 0.06%
			{9961.89024390246, "H_PilotHelmetHeli_I"}, // 0.06%
			{9968.24186991872, "H_HelmetB_camo"}, // 0.06%
			{9974.59349593498, "H_CrewHelmetHeli_B"}, // 0.06%
			{9980.94512195124, "H_CrewHelmetHeli_O"}, // 0.06%
			{9987.2967479675, "H_CrewHelmetHeli_I"}, // 0.06%
			{9993.64837398375, "H_HelmetO_oucamo"}, // 0.06%
			{10000, "H_HelmetSpecO_ocamo"} // 0.06%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_srifle_M24_des
	  H_HelmetLeaderO_ocamo
	  Exile_Item_ZipTie
	  srifle_EBR_F
	  muzzle_snds_93mmg
	  srifle_GM6_F
	  srifle_DMR_03_khaki_F
	  U_O_GhillieSuit
	  srifle_GM6_F
	  srifle_DMR_02_sniper_F
	  srifle_LRR_F
	  CUP_srifle_M40A3
	  CUP_srifle_M24_wdl
	  Exile_Item_ZipTie
	  srifle_DMR_04_F
	  Exile_Item_ZipTie
	  Exile_Item_Vishpirin
	  CUP_srifle_M40A3
	  srifle_DMR_03_F
	  HandGrenade
	  srifle_DMR_03_tan_F
	  H_PilotHelmetFighter_O
	  Exile_Item_ZipTie
	  H_HelmetSpecB
	  CUP_10Rnd_9x39_SP5_VSS_M
	  IEDUrbanSmall_Remote_Mag
	  srifle_LRR_F
	  hlc_rifle_awMagnum_FDE_ghillie
	  U_B_T_Sniper_F
	  Exile_Item_Vishpirin
	  srifle_GM6_ghex_F
	  hlc_rifle_awcovert_BL
	  srifle_DMR_02_F
	  CUP_srifle_AWM_wdl
	  srifle_GM6_ghex_F
	  srifle_GM6_ghex_F
	  CUP_srifle_CZ750
	  muzzle_snds_338_sand
	  srifle_DMR_03_khaki_F
	  Exile_Item_ZipTie
	  APERSTripMine_Wire_Mag
	  APERSTripMine_Wire_Mag
	  srifle_DMR_04_F
	  srifle_DMR_05_tan_F
	  srifle_DMR_05_tan_F
	  HandGrenade
	  srifle_DMR_05_blk_F
	  srifle_DMR_03_tan_F
	  CUP_srifle_SVD_des
	  srifle_DMR_05_hex_F
	  optic_LRPS
	  APERSMine_Range_Mag
	  srifle_DMR_06_olive_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_07_blk_F
	  CUP_srifle_M40A3
	  H_HelmetSpecO_ocamo
	  srifle_GM6_F
	  CUP_srifle_SVD
	  srifle_DMR_05_blk_F
	  DemoCharge_Remote_Mag
	  H_HelmetB_light
	  IEDUrbanSmall_Remote_Mag
	  CUP_srifle_G22_des
	  srifle_DMR_01_F
	  CUP_srifle_M24_des
	  U_O_FullGhillie_ard
	  B_Carryall_cbr
	  srifle_DMR_05_blk_F
	  SatchelCharge_Remote_Mag
	  U_B_GhillieSuit
	  B_Carryall_ocamo
	  IEDUrbanSmall_Remote_Mag
	  srifle_DMR_03_F
	  srifle_DMR_06_camo_F
	  srifle_DMR_02_F
	  CUP_srifle_G22_des
	  Exile_Item_Bandage
	  CUP_srifle_CZ750
	  hlc_rifle_awmagnum_BL
	  srifle_DMR_02_camo_F
	  srifle_DMR_07_ghex_F
	  optic_KHS_old
	  srifle_DMR_03_F
	  B_Carryall_khk
	  srifle_DMR_06_olive_F
	  MiniGrenade
	  H_PilotHelmetHeli_B
	  srifle_DMR_05_tan_F
	  Exile_Item_Bandage
	  SatchelCharge_Remote_Mag
	  B_Carryall_cbr
	  B_Carryall_khk
	  B_Carryall_khk
	  H_HelmetIA
	  srifle_DMR_03_khaki_F
	  srifle_LRR_F
	  IEDUrbanSmall_Remote_Mag
	  CUP_10Rnd_762x51_CZ750_Tracer
	  optic_KHS_hex
	*/
	class Radiation
	{
		count = 213;
		half = 8838.43181509473;
		halfIndex = 106;
		sum = 10000;
		items[] = 
		{
			{317.460317460317, "Exile_Item_ZipTie"}, // 3.17%
			{605.478750640041, "srifle_LRR_F"}, // 2.88%
			{893.497183819765, "srifle_LRR_tna_F"}, // 2.88%
			{1131.592421915, "DemoCharge_Remote_Mag"}, // 2.38%
			{1323.60471070148, "srifle_GM6_F"}, // 1.92%
			{1515.61699948797, "srifle_GM6_ghex_F"}, // 1.92%
			{1674.34715821813, "SatchelCharge_Remote_Mag"}, // 1.59%
			{1833.07731694828, "HandGrenade"}, // 1.59%
			{1991.80747567844, "MiniGrenade"}, // 1.59%
			{2145.41730670763, "srifle_DMR_05_blk_F"}, // 1.54%
			{2299.02713773682, "srifle_DMR_05_hex_F"}, // 1.54%
			{2452.636968766, "srifle_DMR_05_tan_F"}, // 1.54%
			{2600.12959413473, "srifle_EBR_F"}, // 1.47%
			{2747.62221950346, "srifle_DMR_01_F"}, // 1.47%
			{2884.57965734586, "CUP_srifle_SVD"}, // 1.37%
			{3018.9882594964, "srifle_DMR_04_Tan_F"}, // 1.34%
			{3153.39686164693, "srifle_DMR_04_F"}, // 1.34%
			{3285.67199392207, "U_O_GhillieSuit"}, // 1.32%
			{3417.9471261972, "U_I_GhillieSuit"}, // 1.32%
			{3550.22225847233, "U_B_GhillieSuit"}, // 1.32%
			{3681.91210255156, "CUP_srifle_M24_des"}, // 1.32%
			{3813.60194663078, "CUP_srifle_M40A3"}, // 1.32%
			{3945.29179071001, "CUP_srifle_M24_wdl"}, // 1.32%
			{4060.49916398189, "srifle_DMR_02_sniper_F"}, // 1.15%
			{4175.70653725378, "srifle_DMR_02_F"}, // 1.15%
			{4290.91391052567, "srifle_DMR_02_camo_F"}, // 1.15%
			{4400.38298551199, "Exile_Item_Vishpirin"}, // 1.09%
			{4509.85206049831, "Exile_Item_Heatpack"}, // 1.09%
			{4615.20393576169, "srifle_DMR_03_tan_F"}, // 1.05%
			{4720.55581102507, "srifle_DMR_03_khaki_F"}, // 1.05%
			{4825.90768628845, "srifle_DMR_03_F"}, // 1.05%
			{4931.25956155183, "srifle_DMR_06_olive_F"}, // 1.05%
			{5036.61143681521, "CUP_srifle_VSSVintorez"}, // 1.05%
			{5141.96331207859, "srifle_DMR_06_camo_F"}, // 1.05%
			{5247.31518734197, "srifle_DMR_03_woodland_F"}, // 1.05%
			{5348.51897982093, "B_Carryall_ghex_F"}, // 1.01%
			{5449.72277229989, "B_Carryall_cbr"}, // 1.01%
			{5545.60004938522, "B_Carryall_khk"}, // 0.96%
			{5641.47732647055, "B_Carryall_oli"}, // 0.96%
			{5736.71542170864, "20Rnd_762x51_Mag"}, // 0.95%
			{5826.26451568252, "srifle_DMR_07_ghex_F"}, // 0.90%
			{5915.81360965639, "srifle_DMR_07_hex_F"}, // 0.90%
			{6005.36270363026, "srifle_DMR_07_blk_F"}, // 0.90%
			{6085.2604345347, "B_Carryall_ocamo"}, // 0.80%
			{6165.15816543915, "B_Carryall_mcamo"}, // 0.80%
			{6245.05589634359, "B_Carryall_oucamo"}, // 0.80%
			{6324.42097570867, "IEDUrbanSmall_Remote_Mag"}, // 0.79%
			{6403.78605507375, "IEDLandSmall_Remote_Mag"}, // 0.79%
			{6483.15113443883, "APERSMine_Range_Mag"}, // 0.79%
			{6562.51621380391, "APERSBoundingMine_Range_Mag"}, // 0.79%
			{6641.88129316899, "APERSTripMine_Wire_Mag"}, // 0.79%
			{6720.89519961652, "CUP_srifle_CZ750"}, // 0.79%
			{6789.37391853772, "hlc_rifle_awcovert_BL"}, // 0.68%
			{6857.85263745891, "CUP_srifle_G22_des"}, // 0.68%
			{6921.34470095098, "10Rnd_127x54_Mag"}, // 0.63%
			{6984.55582610901, "hlc_rifle_awcovert_FDE"}, // 0.63%
			{7042.91250211274, "U_B_T_Sniper_F"}, // 0.58%
			{7101.26917811648, "U_O_T_Sniper_F"}, // 0.58%
			{7159.62585412021, "U_O_T_FullGhillie_tna_F"}, // 0.58%
			{7217.98253012395, "U_B_T_Soldier_F"}, // 0.58%
			{7276.33920612768, "U_B_T_FullGhillie_tna_F"}, // 0.58%
			{7333.94289276362, "srifle_DMR_03_tan_F"}, // 0.58%
			{7391.54657939957, "srifle_DMR_06_olive_F"}, // 0.58%
			{7449.15026603551, "srifle_DMR_06_camo_F"}, // 0.58%
			{7506.75395267146, "srifle_DMR_03_F"}, // 0.58%
			{7564.3576393074, "srifle_DMR_03_khaki_F"}, // 0.58%
			{7621.96132594335, "srifle_DMR_03_woodland_F"}, // 0.58%
			{7676.69586343651, "Exile_Item_Bandage"}, // 0.55%
			{7729.3718010682, "hlc_rifle_awcovert"}, // 0.53%
			{7782.04773869988, "hlc_rifle_awMagnum_OD_ghillie"}, // 0.53%
			{7827.07757096376, "srifle_GM6_F"}, // 0.45%
			{7870.86520095829, "Exile_Item_InstaDoc"}, // 0.44%
			{7913.00595106364, "hlc_rifle_awmagnum"}, // 0.42%
			{7955.14670116899, "hlc_rifle_awmagnum_BL"}, // 0.42%
			{7988.9190753669, "srifle_DMR_02_F"}, // 0.34%
			{8022.6914495648, "srifle_DMR_02_camo_F"}, // 0.34%
			{8056.46382376271, "CUP_srifle_M107_Base"}, // 0.34%
			{8088.42291612448, "B_Bergen_hex_F"}, // 0.32%
			{8120.38200848626, "B_Bergen_Base_F"}, // 0.32%
			{8152.34110084804, "B_Bergen_mcamo_F"}, // 0.32%
			{8184.30019320982, "B_Bergen_dgtl_F"}, // 0.32%
			{8216.25928557159, "B_Bergen_tna_F"}, // 0.32%
			{8242.71431202662, "muzzle_snds_338_green"}, // 0.26%
			{8269.16933848165, "muzzle_snds_B"}, // 0.26%
			{8295.62436493667, "muzzle_snds_338_sand"}, // 0.26%
			{8322.0793913917, "muzzle_snds_93mmg_tan"}, // 0.26%
			{8348.53441784673, "muzzle_snds_93mmg"}, // 0.26%
			{8374.98944430175, "muzzle_snds_338_black"}, // 0.26%
			{8401.3274131176, "CUP_srifle_AWM_des"}, // 0.26%
			{8427.66538193345, "CUP_srifle_AWM_wdl"}, // 0.26%
			{8454.00335074929, "hlc_rifle_awMagnum_FDE_ghillie"}, // 0.26%
			{8479.81313265663, "H_MilCap_blue"}, // 0.26%
			{8505.62291456398, "H_MilCap_mcamo"}, // 0.26%
			{8531.43269647132, "H_MilCap_rucamo"}, // 0.26%
			{8557.24247837866, "H_MilCap_dgtl"}, // 0.26%
			{8583.05226028601, "Exile_Headgear_GasMask"}, // 0.26%
			{8608.86204219335, "H_MilCap_ocamo"}, // 0.26%
			{8634.67182410069, "H_MilCap_oucamo"}, // 0.26%
			{8657.34756106214, "optic_KHS_hex"}, // 0.23%
			{8680.02329802359, "optic_AMS_khk"}, // 0.23%
			{8702.69903498505, "optic_AMS"}, // 0.23%
			{8725.3747719465, "optic_AMS_snd"}, // 0.23%
			{8748.05050890795, "optic_KHS_old"}, // 0.23%
			{8770.7262458694, "optic_KHS_tan"}, // 0.23%
			{8793.40198283085, "optic_KHS_blk"}, // 0.23%
			{8815.91689896279, "srifle_DMR_05_tan_F"}, // 0.23%
			{8838.43181509473, "srifle_DMR_05_blk_F"}, // 0.23%
			{8860.94673122666, "srifle_DMR_05_hex_F"}, // 0.23%
			{8882.81262043949, "optic_DMS"}, // 0.22%
			{8903.86866190369, "optic_SOS"}, // 0.21%
			{8924.9247033679, "optic_SOS_khk_F"}, // 0.21%
			{8945.9807448321, "optic_LRPS_ghex_F"}, // 0.21%
			{8967.03678629631, "optic_LRPS"}, // 0.21%
			{8988.09282776051, "optic_LRPS_tna_F"}, // 0.21%
			{9007.45016419102, "H_HelmetSpecB"}, // 0.19%
			{9026.80750062152, "H_HelmetIA"}, // 0.19%
			{9046.16483705203, "H_HelmetSpecB_blk"}, // 0.19%
			{9065.52217348254, "H_HelmetB"}, // 0.19%
			{9084.87950991304, "H_HelmetB_paint"}, // 0.19%
			{9104.23684634355, "H_HelmetB_light"}, // 0.19%
			{9123.59418277406, "H_HelmetSpecB_paint1"}, // 0.19%
			{9142.95151920456, "H_HelmetSpecB_paint2"}, // 0.19%
			{9162.30885563507, "H_HelmetB_plain_blk"}, // 0.19%
			{9180.32078854062, "CUP_glaunch_M32"}, // 0.18%
			{9195.70789576446, "muzzle_snds_B"}, // 0.15%
			{9209.21684544363, "MMG_02_sand_F"}, // 0.14%
			{9222.72579512279, "MMG_02_black_F"}, // 0.14%
			{9236.23474480195, "CUP_srifle_AS50"}, // 0.14%
			{9249.74369448111, "MMG_02_camo_F"}, // 0.14%
			{9262.64858543478, "H_HelmetB_light_sand"}, // 0.13%
			{9275.55347638846, "H_HelmetB_light_black"}, // 0.13%
			{9288.45836734213, "H_HelmetB_light_desert"}, // 0.13%
			{9301.3632582958, "H_HelmetB_light_snakeskin"}, // 0.13%
			{9314.26814924947, "H_HelmetB_light_grass"}, // 0.13%
			{9327.17304020315, "H_HelmetB_sand"}, // 0.13%
			{9340.07793115682, "H_HelmetB_black"}, // 0.13%
			{9352.98282211049, "H_BandMask_demon"}, // 0.13%
			{9365.88771306416, "H_BandMask_reaper"}, // 0.13%
			{9378.79260401784, "H_BandMask_khk"}, // 0.13%
			{9391.69749497151, "H_Beret_gen_F"}, // 0.13%
			{9404.60238592518, "H_HelmetB_desert"}, // 0.13%
			{9417.50727687885, "H_HelmetB_snakeskin"}, // 0.13%
			{9430.41216783252, "H_HelmetB_grass"}, // 0.13%
			{9443.3170587862, "H_HelmetIA_camo"}, // 0.13%
			{9456.22194973987, "H_HelmetIA_net"}, // 0.13%
			{9469.12684069354, "H_HelmetB_TI_tna_F"}, // 0.13%
			{9482.03173164721, "H_HelmetCrew_O_ghex_F"}, // 0.13%
			{9494.93662260089, "H_HelmetSpecO_ghex_F"}, // 0.13%
			{9507.84151355456, "H_Helmet_Skate"}, // 0.13%
			{9520.74640450823, "H_HelmetB_Enh_tna_F"}, // 0.13%
			{9533.6512954619, "H_HelmetB_Light_tna_F"}, // 0.13%
			{9546.55618641558, "H_HelmetB_tna_F"}, // 0.13%
			{9559.46107736925, "H_HelmetLeaderO_ghex_F"}, // 0.13%
			{9571.13241256999, "U_I_FullGhillie_lsh"}, // 0.12%
			{9582.80374777074, "U_I_FullGhillie_ard"}, // 0.12%
			{9594.47508297149, "U_O_FullGhillie_sard"}, // 0.12%
			{9606.14641817223, "U_O_FullGhillie_lsh"}, // 0.12%
			{9617.81775337298, "U_O_FullGhillie_ard"}, // 0.12%
			{9629.48908857373, "U_I_FullGhillie_sard"}, // 0.12%
			{9641.16042377447, "U_B_FullGhillie_sard"}, // 0.12%
			{9652.83175897522, "U_B_FullGhillie_lsh"}, // 0.12%
			{9664.50309417597, "U_B_FullGhillie_ard"}, // 0.12%
			{9675.20923391436, "hlc_5rnd_300WM_mk248_AWM"}, // 0.11%
			{9684.98440497986, "20Rnd_650x39_Cased_Mag_F"}, // 0.10%
			{9694.2940917089, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.09%
			{9703.60377843794, "CUP_srifle_SVD_des"}, // 0.09%
			{9712.91346516698, "CUP_10Rnd_762x54_SVD_M"}, // 0.09%
			{9722.22315189603, "CUP_5Rnd_762x51_M24"}, // 0.09%
			{9731.2291183488, "MMG_01_hex_F"}, // 0.09%
			{9740.23508480158, "MMG_01_tan_F"}, // 0.09%
			{9749.07928719416, "20Rnd_762x51_Mag"}, // 0.09%
			{9757.4580052503, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.08%
			{9765.83672330644, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.08%
			{9774.21544136258, "hlc_5rnd_300WM_AP_AWM"}, // 0.08%
			{9782.31391884881, "muzzle_snds_B_snd_F"}, // 0.08%
			{9790.41239633504, "muzzle_snds_B_khk_F"}, // 0.08%
			{9798.32563005473, "10Rnd_762x54_Mag"}, // 0.08%
			{9805.77337943796, "CUP_5Rnd_762x67_G22"}, // 0.07%
			{9812.75564448474, "CUP_10Rnd_762x51_CZ750"}, // 0.07%
			{9819.73790953152, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.07%
			{9826.7201745783, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.07%
			{9833.47464941789, "CUP_launch_M136"}, // 0.07%
			{9840.22912425747, "CUP_launch_RPG7V"}, // 0.07%
			{9846.6815697343, "H_HelmetSpecO_ocamo"}, // 0.06%
			{9853.13401521114, "H_HelmetLeaderO_oucamo"}, // 0.06%
			{9859.58646068798, "H_HelmetO_oucamo"}, // 0.06%
			{9866.03890616481, "H_CrewHelmetHeli_I"}, // 0.06%
			{9872.49135164165, "H_CrewHelmetHeli_O"}, // 0.06%
			{9878.94379711848, "H_HelmetB_camo"}, // 0.06%
			{9885.39624259532, "H_HelmetSpecO_blk"}, // 0.06%
			{9891.84868807216, "H_PilotHelmetHeli_I"}, // 0.06%
			{9898.30113354899, "H_PilotHelmetHeli_O"}, // 0.06%
			{9904.75357902583, "H_PilotHelmetHeli_B"}, // 0.06%
			{9911.20602450266, "H_PilotHelmetFighter_I"}, // 0.06%
			{9917.6584699795, "H_CrewHelmetHeli_B"}, // 0.06%
			{9924.11091545634, "H_HelmetLeaderO_ocamo"}, // 0.06%
			{9930.56336093317, "H_PilotHelmetFighter_O"}, // 0.06%
			{9937.01580641001, "H_HelmetO_ghex_F"}, // 0.06%
			{9943.46825188684, "H_HelmetCrew_I"}, // 0.06%
			{9949.92069736368, "H_HelmetCrew_O"}, // 0.06%
			{9956.37314284052, "H_HelmetCrew_B"}, // 0.06%
			{9962.82558831735, "H_PilotHelmetFighter_B"}, // 0.06%
			{9969.27803379419, "H_HelmetO_ocamo"}, // 0.06%
			{9975.32933016807, "CUP_5Rnd_86x70_L115A1"}, // 0.06%
			{9979.98417353259, "5Rnd_127x108_Mag"}, // 0.05%
			{9984.63901689711, "7Rnd_408_Mag"}, // 0.05%
			{9988.36289158872, "5Rnd_127x108_APDS_Mag"}, // 0.04%
			{9990.69031327098, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.02%
			{9993.01773495325, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.02%
			{9995.34515663551, "CUP_5Rnd_127x99_as50_M"}, // 0.02%
			{9997.67257831777, "CUP_10Rnd_127x99_M107"}, // 0.02%
			{9999.06903132712, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.01%
			{10000, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  optic_KHS_old
	  U_O_FullGhillie_ard
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_93mmg
	  CUP_20Rnd_TE1_Red_Tracer_762x51_M110
	  U_I_GhillieSuit
	  srifle_DMR_04_Tan_F
	  optic_AMS
	  U_B_GhillieSuit
	  CUP_6Rnd_HE_M203
	  Exile_Item_ToiletPaper
	  srifle_LRR_F
	  srifle_LRR_tna_F
	  Exile_Item_PlasticBottleEmpty
	  optic_AMS_snd
	  Exile_Item_PlasticBottleEmpty
	  CUP_5Rnd_127x99_as50_M
	  srifle_LRR_tna_F
	  Exile_Item_Magazine01
	  muzzle_snds_338_black
	  5Rnd_127x108_Mag
	  U_O_FullGhillie_ard
	  Exile_Item_PlasticBottleEmpty
	  CUP_srifle_M14
	  MMG_02_sand_F
	  hlc_50rnd_762x51_M_G3
	  Exile_Item_PlasticBottleEmpty
	  CUP_arifle_FNFAL_railed
	  hlc_20rnd_762x51_T_G3
	  150Rnd_93x64_Mag
	  U_I_GhillieSuit
	  hlc_20rnd_762x51_b_G3
	  SatchelCharge_Remote_Mag
	  CUP_arifle_FNFAL_railed
	  U_I_GhillieSuit
	  U_O_GhillieSuit
	  U_O_T_Sniper_F
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
	  srifle_DMR_04_Tan_F
	  Exile_Item_PlasticBottleEmpty
	  U_O_T_Sniper_F
	  U_O_T_FullGhillie_tna_F
	  optic_AMS_snd
	  muzzle_snds_B
	  muzzle_snds_B
	  muzzle_snds_338_black
	  muzzle_snds_338_sand
	  5Rnd_127x108_Mag
	  MMG_02_sand_F
	  muzzle_snds_93mmg_tan
	  hlc_rifle_amt
	  U_B_T_Soldier_F
	  Exile_Item_Magazine02
	  10Rnd_338_Mag
	  TRYK_U_B_PCUHsW6
	  srifle_LRR_F
	  U_B_FullGhillie_sard
	  U_I_GhillieSuit
	  optic_KHS_hex
	  muzzle_snds_338_sand
	  Exile_Item_Can_Empty
	  srifle_DMR_03_woodland_F
	  TRYK_U_B_PCUHsW3nh
	  hlc_20rnd_762x51_b_G3
	  muzzle_snds_93mmg
	  srifle_LRR_F
	  V_TacVest_gen_F
	  TRYK_U_B_Snowt
	  hlc_rifle_M14
	  U_O_GhillieSuit
	  optic_KHS_old
	  TRYK_U_B_PCUHsW
	  hlc_50rnd_762x51_M_G3
	  Exile_Item_Magazine01
	  srifle_GM6_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_05_blk_F
	  CUP_srifle_M107_Base
	  U_O_T_Sniper_F
	  IEDUrbanSmall_Remote_Mag
	  10Rnd_338_Mag
	  TRYK_Winter_pack
	  hlc_rifle_stgw57_RIS
	  Exile_Item_Magazine01
	  TRYK_U_B_Snow_CombatUniform
	  Exile_Item_Magazine03
	  muzzle_snds_338_black
	  U_I_FullGhillie_lsh
	  muzzle_snds_B
	  srifle_DMR_02_camo_F
	  U_O_GhillieSuit
	  TRYK_U_B_Snowt
	  TRYK_U_B_Snow_CombatUniform
	  TRYK_U_B_Snow_CombatUniform
	  CUP_arifle_Mk17_STD_EGLM
	  srifle_DMR_04_Tan_F
	  Exile_Item_PlasticBottleEmpty
	  hlc_50rnd_762x51_M_G3
	  U_B_FullGhillie_lsh
	  hlc_rifle_PSG1A1_RIS
	*/
	class SuperCrate
	{
		count = 167;
		half = 8027.58723626159;
		halfIndex = 83;
		sum = 10000;
		items[] = 
		{
			{340.909090909091, "Exile_Item_PlasticBottleEmpty"}, // 3.41%
			{681.818181818182, "Exile_Item_ToiletPaper"}, // 3.41%
			{1022.72727272727, "Exile_Item_Can_Empty"}, // 3.41%
			{1250, "U_B_GhillieSuit"}, // 2.27%
			{1477.27272727273, "U_I_GhillieSuit"}, // 2.27%
			{1704.54545454545, "U_O_GhillieSuit"}, // 2.27%
			{1856.06060606061, "muzzle_snds_338_black"}, // 1.52%
			{2007.57575757576, "muzzle_snds_338_green"}, // 1.52%
			{2159.09090909091, "muzzle_snds_338_sand"}, // 1.52%
			{2310.60606060606, "muzzle_snds_93mmg_tan"}, // 1.52%
			{2462.12121212121, "muzzle_snds_B"}, // 1.52%
			{2613.63636363636, "muzzle_snds_93mmg"}, // 1.52%
			{2750, "DemoCharge_Remote_Mag"}, // 1.36%
			{2879.87012987013, "optic_KHS_hex"}, // 1.30%
			{3009.74025974026, "optic_KHS_blk"}, // 1.30%
			{3139.61038961039, "optic_AMS_snd"}, // 1.30%
			{3269.48051948052, "optic_AMS_khk"}, // 1.30%
			{3399.35064935065, "optic_AMS"}, // 1.30%
			{3529.22077922078, "optic_KHS_tan"}, // 1.30%
			{3659.09090909091, "optic_KHS_old"}, // 1.30%
			{3769.06158357771, "srifle_LRR_F"}, // 1.10%
			{3879.03225806452, "srifle_LRR_tna_F"}, // 1.10%
			{3988.12316715543, "CUP_6Rnd_HE_M203"}, // 1.09%
			{4097.21407624633, "10Rnd_93x64_DMR_05_Mag"}, // 1.09%
			{4188.12316715543, "SatchelCharge_Remote_Mag"}, // 0.91%
			{4279.03225806452, "10Rnd_338_Mag"}, // 0.91%
			{4369.94134897361, "CUP_5Rnd_127x99_as50_M"}, // 0.91%
			{4460.8504398827, "150Rnd_93x64_Mag"}, // 0.91%
			{4551.75953079179, "130Rnd_338_Mag"}, // 0.91%
			{4642.66862170088, "5Rnd_127x108_Mag"}, // 0.91%
			{4733.57771260997, "5Rnd_127x108_APDS_Mag"}, // 0.91%
			{4818.80498533724, "Exile_Item_Magazine01"}, // 0.85%
			{4904.03225806452, "Exile_Item_Magazine02"}, // 0.85%
			{4989.25953079179, "Exile_Item_Magazine03"}, // 0.85%
			{5074.48680351906, "Exile_Item_Magazine04"}, // 0.85%
			{5147.80058651027, "srifle_GM6_F"}, // 0.73%
			{5221.11436950147, "srifle_GM6_ghex_F"}, // 0.73%
			{5293.84164222874, "CUP_OG7_M"}, // 0.73%
			{5366.56891495601, "CUP_M136_M"}, // 0.73%
			{5436.49898488608, "TRYK_U_B_Snowt"}, // 0.70%
			{5506.42905481615, "TRYK_U_B_Snow_CombatUniform"}, // 0.70%
			{5576.35912474622, "TRYK_H_Helmet_Winter_2"}, // 0.70%
			{5646.28919467629, "TRYK_V_ArmorVest_Winter"}, // 0.70%
			{5716.21926460636, "TRYK_U_B_PCUHsW2"}, // 0.70%
			{5786.14933453643, "TRYK_Winter_pack"}, // 0.70%
			{5856.0794044665, "TRYK_H_Helmet_Winter"}, // 0.70%
			{5926.00947439657, "TRYK_B_Coyotebackpack_WH"}, // 0.70%
			{5995.93954432664, "TRYK_U_B_PCUHsW6"}, // 0.70%
			{6065.86961425672, "TRYK_U_B_PCUHsW"}, // 0.70%
			{6135.79968418679, "TRYK_U_B_PCUHsW5"}, // 0.70%
			{6205.72975411686, "TRYK_U_B_PCUHsW4"}, // 0.70%
			{6275.65982404693, "TRYK_U_B_PCUHsW3nh"}, // 0.70%
			{6343.58040920889, "hlc_50rnd_762x51_M_G3"}, // 0.68%
			{6410.42532899499, "U_B_T_FullGhillie_tna_F"}, // 0.67%
			{6477.27024878108, "U_B_T_Soldier_F"}, // 0.67%
			{6544.11516856718, "U_B_T_Sniper_F"}, // 0.67%
			{6610.96008835328, "U_O_T_FullGhillie_tna_F"}, // 0.67%
			{6677.80500813937, "U_O_T_Sniper_F"}, // 0.67%
			{6742.27954069901, "srifle_GM6_F"}, // 0.64%
			{6804.9754654639, "hlc_20rnd_762x51_b_G3"}, // 0.63%
			{6863.62649185686, "srifle_DMR_05_blk_F"}, // 0.59%
			{6922.27751824983, "srifle_DMR_05_tan_F"}, // 0.59%
			{6980.92854464279, "srifle_DMR_05_hex_F"}, // 0.59%
			{7038.3998090106, "hlc_20rnd_762x51_T_G3"}, // 0.57%
			{7090.64641298134, "CUP_20Rnd_762x51_B_SCAR"}, // 0.52%
			{7142.89301695209, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.52%
			{7195.13962092283, "hlc_20Rnd_762x51_B_fal"}, // 0.52%
			{7247.38622489357, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.52%
			{7299.63282886431, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.52%
			{7351.87943283505, "CUP_20Rnd_762x51_DMR"}, // 0.52%
			{7404.12603680579, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.52%
			{7456.37264077654, "hlc_20Rnd_762x51_B_M14"}, // 0.52%
			{7508.61924474728, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.52%
			{7559.93889284112, "srifle_DMR_04_Tan_F"}, // 0.51%
			{7611.25854093496, "srifle_DMR_04_F"}, // 0.51%
			{7659.61444035469, "CUP_srifle_M107_Base"}, // 0.48%
			{7707.97033977442, "srifle_DMR_02_camo_F"}, // 0.48%
			{7756.32623919415, "srifle_DMR_02_F"}, // 0.48%
			{7801.78078464869, "IEDLandSmall_Remote_Mag"}, // 0.45%
			{7847.23533010324, "APERSMine_Range_Mag"}, // 0.45%
			{7892.68987555778, "APERSBoundingMine_Range_Mag"}, // 0.45%
			{7938.14442101233, "APERSTripMine_Wire_Mag"}, // 0.45%
			{7983.59896646687, "IEDUrbanSmall_Remote_Mag"}, // 0.45%
			{8027.58723626159, "srifle_DMR_02_camo_F"}, // 0.44%
			{8071.57550605632, "srifle_DMR_02_F"}, // 0.44%
			{8115.56377585104, "srifle_DMR_02_sniper_F"}, // 0.44%
			{8157.36105902763, "hlc_50rnd_762x51_M_FAL"}, // 0.42%
			{8199.15834220422, "CUP_20Rnd_762x51_B_M110"}, // 0.42%
			{8240.95562538082, "CUP_20Rnd_762x51_L129_M"}, // 0.42%
			{8282.75290855741, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.42%
			{8324.550191734, "hlc_50Rnd_762x51_B_M14"}, // 0.42%
			{8366.3474749106, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.42%
			{8404.85547853488, "HLC_Rifle_g3ka4_GL"}, // 0.39%
			{8441.09830547538, "CUP_arifle_FNFAL_railed"}, // 0.36%
			{8475.0759557321, "CUP_arifle_FNFAL"}, // 0.34%
			{8509.05360598882, "CUP_srifle_M110"}, // 0.34%
			{8541.29087226864, "srifle_DMR_05_blk_F"}, // 0.32%
			{8573.52813854846, "srifle_DMR_05_hex_F"}, // 0.32%
			{8605.76540482828, "srifle_DMR_05_tan_F"}, // 0.32%
			{8635.21270171743, "hlc_rifle_g3ka4"}, // 0.29%
			{8664.65999860659, "hlc_rifle_PSG1A1_RIS"}, // 0.29%
			{8694.10729549575, "hlc_rifle_m14sopmod"}, // 0.29%
			{8723.5545923849, "hlc_rifle_STG58F"}, // 0.29%
			{8750.73671259028, "hlc_rifle_stgw57_RIS"}, // 0.27%
			{8777.91883279566, "hlc_rifle_sig5104"}, // 0.27%
			{8805.10095300103, "hlc_rifle_m14dmr"}, // 0.27%
			{8832.28307320641, "hlc_rifle_M14"}, // 0.27%
			{8859.46519341178, "hlc_rifle_SLRchopmod"}, // 0.27%
			{8885.25500643564, "CUP_glaunch_M32"}, // 0.26%
			{8910.17194995724, "hlc_rifle_psg1"}, // 0.25%
			{8935.08889347883, "hlc_rifle_stgw57_commando"}, // 0.25%
			{8960.00583700043, "hlc_rifle_amt"}, // 0.25%
			{8984.92278052202, "hlc_rifle_FAL5061"}, // 0.25%
			{9007.57454735983, "CUP_srifle_M14"}, // 0.23%
			{9030.22631419765, "CUP_arifle_Mk17_STD_EGLM"}, // 0.23%
			{9052.87808103546, "hlc_rifle_falosw"}, // 0.23%
			{9075.52984787327, "hlc_rifle_STGW57"}, // 0.23%
			{9097.52398277063, "srifle_DMR_03_woodland_F"}, // 0.22%
			{9119.51811766799, "srifle_DMR_06_camo_F"}, // 0.22%
			{9141.51225256536, "srifle_DMR_03_tan_F"}, // 0.22%
			{9163.50638746272, "srifle_DMR_03_khaki_F"}, // 0.22%
			{9185.50052236008, "srifle_DMR_03_F"}, // 0.22%
			{9207.49465725744, "srifle_DMR_06_olive_F"}, // 0.22%
			{9229.13967890246, "V_TacChestrig_cbr_F"}, // 0.22%
			{9250.78470054748, "V_TacChestrig_oli_F"}, // 0.22%
			{9272.4297221925, "V_TacChestrig_grn_F"}, // 0.22%
			{9294.07474383752, "V_PlateCarrierSpec_rgr"}, // 0.22%
			{9315.71976548254, "V_PlateCarrierIAGL_oli"}, // 0.22%
			{9337.36478712756, "V_PlateCarrier1_tna_F"}, // 0.22%
			{9359.00980877259, "V_PlateCarrierIAGL_dgtl"}, // 0.22%
			{9380.65483041761, "V_PlateCarrierGL_rgr"}, // 0.22%
			{9402.29985206263, "V_PlateCarrierGL_mtp"}, // 0.22%
			{9423.94487370765, "V_PlateCarrierGL_blk"}, // 0.22%
			{9445.58989535267, "V_PlateCarrierSpec_blk"}, // 0.22%
			{9467.23491699769, "V_PlateCarrier2_tna_F"}, // 0.22%
			{9488.87993864271, "V_PlateCarrierSpec_mtp"}, // 0.22%
			{9510.52496028773, "V_PlateCarrierGL_tna_F"}, // 0.22%
			{9532.16998193276, "V_PlateCarrierSpec_tna_F"}, // 0.22%
			{9553.81500357778, "V_HarnessO_ghex_F"}, // 0.22%
			{9575.4600252228, "V_HarnessOGL_ghex_F"}, // 0.22%
			{9597.10504686782, "V_BandollierB_ghex_F"}, // 0.22%
			{9618.75006851284, "V_TacVest_gen_F"}, // 0.22%
			{9640.39509015786, "V_PlateCarrier1_rgr_noflag_F"}, // 0.22%
			{9662.04011180288, "V_PlateCarrier2_rgr_noflag_F"}, // 0.22%
			{9681.38247157077, "CUP_srifle_AS50"}, // 0.19%
			{9700.72483133867, "MMG_02_sand_F"}, // 0.19%
			{9720.06719110656, "MMG_02_black_F"}, // 0.19%
			{9739.40955087445, "MMG_02_camo_F"}, // 0.19%
			{9757.5309643447, "CUP_arifle_Mk20"}, // 0.18%
			{9775.65237781495, "CUP_arifle_Mk17_STD_FG"}, // 0.18%
			{9793.7737912852, "hlc_rifle_c1A1"}, // 0.18%
			{9811.89520475546, "hlc_rifle_SLR"}, // 0.18%
			{9825.26418871268, "U_B_FullGhillie_lsh"}, // 0.13%
			{9838.6331726699, "U_B_FullGhillie_ard"}, // 0.13%
			{9852.00215662712, "U_B_FullGhillie_sard"}, // 0.13%
			{9865.37114058434, "U_I_FullGhillie_ard"}, // 0.13%
			{9878.74012454155, "U_O_FullGhillie_lsh"}, // 0.13%
			{9892.10910849877, "U_O_FullGhillie_sard"}, // 0.13%
			{9905.47809245599, "U_I_FullGhillie_lsh"}, // 0.13%
			{9918.84707641321, "U_I_FullGhillie_sard"}, // 0.13%
			{9932.21606037043, "U_O_FullGhillie_ard"}, // 0.13%
			{9945.11096688236, "MMG_01_tan_F"}, // 0.13%
			{9958.00587339429, "MMG_01_hex_F"}, // 0.13%
			{9969.3317568132, "CUP_srifle_L129A1_HG"}, // 0.11%
			{9980.65764023211, "CUP_srifle_L129A1"}, // 0.11%
			{9990.32882011605, "CUP_launch_M136"}, // 0.10%
			{10000, "CUP_launch_RPG7V"} // 0.10%
		};
	};

	/**
	  Result of 100 rounds:

	  V_PlateCarrierSpec_rgr
	  CUP_arifle_AK107_kobra
	  Rangefinder
	  CUP_muzzle_snds_M14
	  hlc_rifle_auga1carb_b
	  TRYK_U_B_PCUHsW3nh
	  srifle_DMR_07_blk_F
	  CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
	  TRYK_U_B_PCUHsW2
	  APERSMine_Range_Mag
	  TRYK_B_Coyotebackpack_WH
	  V_PlateCarrier1_blk
	  U_O_GhillieSuit
	  ItemCompass
	  B_Carryall_oli
	  ItemCompass
	  hlc_rifle_PSG1A1_RIS
	  U_O_GhillieSuit
	  CUP_arifle_Mk17_STD_EGLM
	  TRYK_B_Carryall_blk
	  acc_flashlight
	  CUP_arifle_AK107_kobra
	  ItemCompass
	  CUP_20Rnd_556x45_Stanag
	  arifle_MX_khk_F
	  hlc_5rnd_300WM_FMJ_AWM
	  Rangefinder
	  arifle_SPAR_01_blk_F
	  V_PlateCarrierH_CTRG
	  hlc_rifle_STG58F
	  TRYK_U_B_PCUHsW4
	  U_O_PilotCoveralls
	  CUP_arifle_FNFAL
	  arifle_AKM_F
	  TRYK_U_B_PCUHsW4
	  TRYK_U_B_PCUHsW6
	  TRYK_V_tacv1LSRF_BK
	  hlc_rifle_augpara_t
	  srifle_DMR_07_blk_F
	  ItemCompass
	  TRYK_V_Bulletproof_BLK
	  TRYK_V_Bulletproof_BLK
	  CUP_20Rnd_762x51_FNFAL_M
	  CUP_optic_SB_11_4x20_PM
	  optic_SOS
	  TRYK_B_Carryall_blk
	  TRYK_B_Coyotebackpack_OD
	  hlc_rifle_m14dmr
	  CUP_arifle_Sa58RIS2_Arco_Laser
	  CUP_optic_LeupoldM3LR
	  5Rnd_127x108_APDS_Mag
	  TRYK_V_tacv1_BK
	  U_B_CombatUniform_mcam
	  CUP_20Rnd_TE1_Red_Tracer_762x51_M110
	  CUP_optic_CompM2_Black
	  V_PlateCarrier1_rgr
	  V_PlateCarrierSpec_tna_F
	  TRYK_U_B_PCUHsW3nh
	  O_NVGoggles_ghex_F
	  TRYK_B_Coyotebackpack_OD
	  TRYK_H_Helmet_Winter
	  TRYK_U_B_woodtan_CombatUniform
	  hlc_5rnd_300WM_AP_AWM
	  U_I_CombatUniform_tshirt
	  optic_KHS_hex
	  V_PlateCarrier3_rgr
	  Exile_Weapon_AK107_GL
	  muzzle_snds_H
	  U_O_CombatUniform_ocamo
	  TRYK_B_Coyotebackpack_WH
	  B_Carryall_oucamo
	  CUP_optic_SUSAT
	  hlc_5rnd_300WM_AP_AWM
	  CUP_arifle_Mk17_STD_EGLM
	  U_B_CTRG_Soldier_3_F
	  CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M
	  U_I_CombatUniform
	  CUP_arifle_Mk16_CQC_FG
	  TRYK_V_tacv1LC_CY
	  Exile_Magazine_20Rnd_762x51_DMR_Green
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
	  CUP_optic_PSO_3
	  hlc_rifle_awcovert_FDE
	  CUP_arifle_Mk17_STD_EGLM
	  optic_Hamr_khk_F
	  U_B_CombatUniform_mcam_worn
	  TRYK_B_Carryall_wh
	  arifle_SPAR_01_GL_khk_F
	  CUP_muzzle_snds_M14
	  CUP_arifle_Mk16_CQC_FG
	  TRYK_Winter_pack
	  muzzle_snds_M
	  muzzle_snds_58_blk_F
	  muzzle_snds_58_blk_F
	  hlc_rifle_awcovert
	  srifle_DMR_07_blk_F
	  Rangefinder
	  CUP_20Rnd_9x39_SP5_VSS_M
	  V_PlateCarrierGL_blk
	  hlc_rifle_auga2para_t
	*/
	class ChopperCrash
	{
		count = 684;
		half = 8122.29766833217;
		halfIndex = 342;
		sum = 9999.99999999994;
		items[] = 
		{
			{261.917234154007, "ItemCompass"}, // 2.62%
			{392.875851231011, "Rangefinder"}, // 1.31%
			{502.404876422687, "TRYK_B_Coyotebackpack_WH"}, // 1.10%
			{611.933901614363, "TRYK_Winter_pack"}, // 1.10%
			{702.295347397495, "DemoCharge_Remote_Mag"}, // 0.90%
			{777.596552216772, "CUP_optic_ACOG"}, // 0.75%
			{847.105356665336, "TRYK_U_B_Snowt"}, // 0.70%
			{916.614161113899, "TRYK_V_ArmorVest_Winter"}, // 0.70%
			{986.122965562463, "TRYK_H_Helmet_Winter"}, // 0.70%
			{1055.63177001103, "TRYK_H_Helmet_Winter_2"}, // 0.70%
			{1125.14057445959, "TRYK_U_B_Snow_CombatUniform"}, // 0.70%
			{1194.64937890815, "TRYK_U_B_PCUHsW"}, // 0.70%
			{1264.15818335672, "TRYK_U_B_PCUHsW2"}, // 0.70%
			{1333.66698780528, "TRYK_U_B_PCUHsW3nh"}, // 0.70%
			{1403.17579225384, "TRYK_U_B_PCUHsW4"}, // 0.70%
			{1472.68459670241, "TRYK_U_B_PCUHsW5"}, // 0.70%
			{1542.19340115097, "TRYK_U_B_PCUHsW6"}, // 0.70%
			{1611.70220559953, "TRYK_B_Coyotebackpack_WH"}, // 0.70%
			{1681.2110100481, "TRYK_Winter_pack"}, // 0.70%
			{1741.45197390352, "SatchelCharge_Remote_Mag"}, // 0.60%
			{1796.21648649936, "TRYK_B_Carryall_blk"}, // 0.55%
			{1850.9809990952, "TRYK_B_Carryall_wh"}, // 0.55%
			{1905.74551169103, "TRYK_B_Carryall_wood"}, // 0.55%
			{1960.51002428687, "TRYK_B_Carryall_JSDF"}, // 0.55%
			{2015.27453688271, "TRYK_B_Coyotebackpack"}, // 0.55%
			{2070.03904947855, "TRYK_B_Coyotebackpack_OD"}, // 0.55%
			{2124.80356207439, "TRYK_B_Coyotebackpack_BLK"}, // 0.55%
			{2175.00436528724, "optic_AMS"}, // 0.50%
			{2225.20516850009, "optic_LRPS"}, // 0.50%
			{2275.40597171294, "CUP_optic_LeupoldM3LR"}, // 0.50%
			{2325.60677492579, "optic_SOS"}, // 0.50%
			{2375.80757813864, "muzzle_snds_B"}, // 0.50%
			{2426.00838135149, "CUP_optic_SB_11_4x20_PM"}, // 0.50%
			{2476.20918456435, "CUP_muzzle_snds_M14"}, // 0.50%
			{2526.4099877772, "optic_KHS_blk"}, // 0.50%
			{2576.61079099005, "optic_DMS"}, // 0.50%
			{2626.8115942029, "optic_KHS_hex"}, // 0.50%
			{2671.81921087649, "hlc_50rnd_762x51_M_G3"}, // 0.45%
			{2713.72596834113, "NVGoggles"}, // 0.42%
			{2755.63272580577, "O_NVGoggles_hex_F"}, // 0.42%
			{2797.53948327041, "O_NVGoggles_ghex_F"}, // 0.42%
			{2839.44624073506, "NVGoggles_tna_F"}, // 0.42%
			{2881.3529981997, "O_NVGoggles_urb_F"}, // 0.42%
			{2922.89849051378, "hlc_20rnd_762x51_b_G3"}, // 0.42%
			{2961.30715874375, "B_Carryall_cbr"}, // 0.38%
			{2999.71582697371, "B_Carryall_ghex_F"}, // 0.38%
			{3037.79919492829, "hlc_20rnd_762x51_T_G3"}, // 0.38%
			{3074.18635430405, "B_Carryall_khk"}, // 0.36%
			{3110.57351367981, "B_Carryall_oli"}, // 0.36%
			{3145.19475727488, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.35%
			{3179.81600086995, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.35%
			{3214.43724446502, "CUP_20Rnd_762x51_DMR"}, // 0.35%
			{3249.05848806009, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.35%
			{3283.67973165516, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.35%
			{3318.30097525023, "hlc_20Rnd_762x51_B_M14"}, // 0.35%
			{3352.9222188453, "hlc_20Rnd_762x51_B_fal"}, // 0.35%
			{3387.54346244037, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.35%
			{3422.16470603544, "CUP_20Rnd_762x51_B_SCAR"}, // 0.35%
			{3456.18784176774, "HLC_Rifle_g3ka4_GL"}, // 0.34%
			{3488.2096165746, "CUP_arifle_FNFAL_railed"}, // 0.32%
			{3518.53224938774, "B_Carryall_mcamo"}, // 0.30%
			{3548.85488220087, "B_Carryall_oucamo"}, // 0.30%
			{3579.177515014, "B_Carryall_ocamo"}, // 0.30%
			{3609.29799694171, "V_PlateCarrierIA1_dgtl"}, // 0.30%
			{3639.41847886942, "V_PlateCarrierSpec_rgr"}, // 0.30%
			{3669.53896079713, "V_PlateCarrier3_rgr"}, // 0.30%
			{3699.65944272484, "V_PlateCarrier2_rgr"}, // 0.30%
			{3729.77992465255, "V_PlateCarrier1_rgr"}, // 0.30%
			{3759.90040658026, "V_PlateCarrier1_blk"}, // 0.30%
			{3790.02088850798, "U_I_GhillieSuit"}, // 0.30%
			{3820.14137043569, "U_O_GhillieSuit"}, // 0.30%
			{3850.2618523634, "U_B_GhillieSuit"}, // 0.30%
			{3880.38233429111, "V_PlateCarrierIA2_dgtl"}, // 0.30%
			{3910.50281621882, "V_PlateCarrierIAGL_dgtl"}, // 0.30%
			{3940.62329814653, "V_PlateCarrierGL_rgr"}, // 0.30%
			{3970.74378007424, "APERSMine_Range_Mag"}, // 0.30%
			{4000.86426200195, "APERSBoundingMine_Range_Mag"}, // 0.30%
			{4030.98474392966, "APERSTripMine_Wire_Mag"}, // 0.30%
			{4061.10522585737, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{4091.22570778508, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{4121.24612166652, "CUP_srifle_M110"}, // 0.30%
			{4151.26653554796, "CUP_arifle_FNFAL"}, // 0.30%
			{4178.96353042402, "CUP_20Rnd_762x51_B_M110"}, // 0.28%
			{4206.66052530008, "hlc_50Rnd_762x51_B_M14"}, // 0.28%
			{4234.35752017613, "CUP_20Rnd_762x51_L129_M"}, // 0.28%
			{4262.05451505219, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.28%
			{4289.75150992824, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.28%
			{4317.4485048043, "hlc_50rnd_762x51_M_FAL"}, // 0.28%
			{4343.46619683488, "hlc_rifle_m14sopmod"}, // 0.26%
			{4369.48388886546, "hlc_rifle_PSG1A1_RIS"}, // 0.26%
			{4395.50158089604, "hlc_rifle_g3ka4"}, // 0.26%
			{4421.51927292663, "hlc_rifle_STG58F"}, // 0.26%
			{4446.8838892868, "TRYK_V_ArmorVest_Winter"}, // 0.25%
			{4471.98429089323, "CUP_muzzle_snds_M110"}, // 0.25%
			{4496.00062199838, "hlc_rifle_SLRchopmod"}, // 0.24%
			{4520.01695310353, "hlc_rifle_sig5104"}, // 0.24%
			{4544.03328420868, "hlc_rifle_stgw57_RIS"}, // 0.24%
			{4568.04961531384, "hlc_rifle_m14dmr"}, // 0.24%
			{4592.06594641899, "hlc_rifle_M14"}, // 0.24%
			{4615.66781658622, "acc_flashlight"}, // 0.24%
			{4637.86185590138, "TRYK_V_PlateCarrier_wood"}, // 0.22%
			{4659.8768260811, "hlc_rifle_FAL5061"}, // 0.22%
			{4681.89179626082, "hlc_rifle_amt"}, // 0.22%
			{4703.90676644055, "hlc_rifle_psg1"}, // 0.22%
			{4725.92173662027, "hlc_rifle_stgw57_commando"}, // 0.22%
			{4746.23760419614, "hlc_5rnd_300WM_mk248_AWM"}, // 0.20%
			{4766.25121345044, "hlc_rifle_STGW57"}, // 0.20%
			{4786.26482270473, "CUP_arifle_Mk17_STD_EGLM"}, // 0.20%
			{4806.27843195902, "hlc_rifle_falosw"}, // 0.20%
			{4826.29204121331, "CUP_srifle_M14"}, // 0.20%
			{4846.1081477447, "U_O_T_Soldier_F"}, // 0.20%
			{4865.92425427609, "U_B_CombatUniform_mcam_vest"}, // 0.20%
			{4885.74036080748, "U_B_CombatUniform_mcam_tshirt"}, // 0.20%
			{4905.55646733887, "U_B_CombatUniform_mcam"}, // 0.20%
			{4925.37257387026, "U_B_CombatUniform_mcam_worn"}, // 0.20%
			{4945.18868040165, "U_B_GEN_Commander_F"}, // 0.20%
			{4965.00478693303, "U_B_CTRG_Soldier_urb_2_F"}, // 0.20%
			{4984.82089346442, "U_B_CTRG_Soldier_F"}, // 0.20%
			{5004.63699999581, "U_B_CTRG_Soldier_urb_3_F"}, // 0.20%
			{5024.4531065272, "U_B_T_Soldier_SL_F"}, // 0.20%
			{5044.26921305859, "U_B_T_Soldier_AR_F"}, // 0.20%
			{5064.08531958998, "U_B_CTRG_Soldier_urb_1_F"}, // 0.20%
			{5083.90142612137, "U_B_CTRG_3"}, // 0.20%
			{5103.71753265276, "U_B_GEN_Soldier_F"}, // 0.20%
			{5123.53363918415, "U_B_CTRG_2"}, // 0.20%
			{5143.34974571553, "U_B_CTRG_Soldier_3_F"}, // 0.20%
			{5163.16585224692, "U_O_T_Officer_F"}, // 0.20%
			{5182.98195877831, "U_B_CTRG_1"}, // 0.20%
			{5202.7980653097, "U_B_CTRG_Soldier_2_F"}, // 0.20%
			{5221.45677092864, "srifle_DMR_01_F"}, // 0.19%
			{5240.11547654757, "srifle_EBR_F"}, // 0.19%
			{5258.66474694294, "20Rnd_650x39_Cased_Mag_F"}, // 0.19%
			{5276.33071874805, "CUP_5Rnd_762x51_M24"}, // 0.18%
			{5293.99669055315, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.18%
			{5311.66266235826, "CUP_10Rnd_762x54_SVD_M"}, // 0.18%
			{5329.32863416337, "CUP_srifle_SVD_des"}, // 0.18%
			{5346.65457509524, "CUP_srifle_SVD"}, // 0.17%
			{5363.51305378612, "muzzle_snds_H_MG_blk_F"}, // 0.17%
			{5380.37153247701, "muzzle_snds_M"}, // 0.17%
			{5397.23001116789, "muzzle_snds_H"}, // 0.17%
			{5414.08848985877, "optic_Holosight_blk_F"}, // 0.17%
			{5430.94696854966, "muzzle_snds_H_khk_F"}, // 0.17%
			{5447.80544724054, "optic_Holosight"}, // 0.17%
			{5464.66392593142, "optic_Hamr_khk_F"}, // 0.17%
			{5481.52240462231, "muzzle_snds_H_snd_F"}, // 0.17%
			{5498.38088331319, "muzzle_snds_58_blk_F"}, // 0.17%
			{5515.23936200407, "optic_Hamr"}, // 0.17%
			{5532.09784069496, "optic_Arco_ghex_F"}, // 0.17%
			{5548.95631938584, "muzzle_snds_m_khk_F"}, // 0.17%
			{5565.81479807672, "muzzle_snds_m_snd_F"}, // 0.17%
			{5582.6732767676, "muzzle_snds_58_wdm_F"}, // 0.17%
			{5599.53175545849, "optic_Arco_blk_F"}, // 0.17%
			{5616.39023414937, "muzzle_snds_65_TI_blk_F"}, // 0.17%
			{5633.24871284025, "muzzle_snds_65_TI_hex_F"}, // 0.17%
			{5650.10719153114, "muzzle_snds_65_TI_ghex_F"}, // 0.17%
			{5666.96567022202, "muzzle_snds_H_MG_khk_F"}, // 0.17%
			{5683.8241489129, "optic_Arco"}, // 0.17%
			{5700.68262760379, "optic_DMS"}, // 0.17%
			{5717.54110629467, "acc_pointer_IR"}, // 0.17%
			{5734.39958498555, "CUP_muzzle_snds_XM8"}, // 0.17%
			{5751.25806367644, "CUP_optic_PSO_1"}, // 0.17%
			{5768.11654236732, "CUP_optic_PSO_3"}, // 0.17%
			{5784.9750210582, "CUP_optic_Kobra"}, // 0.17%
			{5801.83349974909, "CUP_muzzle_Bizon"}, // 0.17%
			{5818.69197843997, "CUP_muzzle_PB6P9"}, // 0.17%
			{5835.55045713085, "CUP_muzzle_PBS4"}, // 0.17%
			{5852.40893582174, "CUP_optic_PechenegScope"}, // 0.17%
			{5869.26741451262, "CUP_optic_HoloBlack"}, // 0.17%
			{5886.1258932035, "optic_Holosight_khk_F"}, // 0.17%
			{5902.98437189439, "CUP_optic_SB_11_4x20_PM"}, // 0.17%
			{5919.84285058527, "CUP_optic_AN_PVS_4"}, // 0.17%
			{5936.70132927615, "CUP_optic_HoloDesert"}, // 0.17%
			{5953.55980796704, "optic_ERCO_blk_F"}, // 0.17%
			{5970.41828665792, "optic_MRCO"}, // 0.17%
			{5987.2767653488, "CUP_optic_CompM2_Black"}, // 0.17%
			{6004.13524403968, "optic_DMS_ghex_F"}, // 0.17%
			{6020.99372273057, "optic_ERCO_khk_F"}, // 0.17%
			{6037.85220142145, "optic_ERCO_snd_F"}, // 0.17%
			{6054.71068011233, "CUP_optic_CompM2_Desert"}, // 0.17%
			{6071.56915880322, "CUP_optic_SUSAT"}, // 0.17%
			{6088.4276374941, "CUP_optic_CompM4"}, // 0.17%
			{6105.28611618498, "CUP_optic_RCO"}, // 0.17%
			{6122.14459487587, "CUP_optic_TrijiconRx01_desert"}, // 0.17%
			{6139.00307356675, "CUP_optic_ACOG"}, // 0.17%
			{6155.7857467816, "20Rnd_762x51_Mag"}, // 0.17%
			{6172.44530536994, "CUP_srifle_M40A3"}, // 0.17%
			{6189.10486395828, "CUP_srifle_M24_des"}, // 0.17%
			{6205.76442254661, "CUP_srifle_M24_wdl"}, // 0.17%
			{6221.77530995005, "hlc_rifle_c1A1"}, // 0.16%
			{6237.78619735348, "CUP_arifle_Mk20"}, // 0.16%
			{6253.79708475691, "CUP_arifle_Mk17_STD_FG"}, // 0.16%
			{6269.80797216035, "hlc_rifle_SLR"}, // 0.16%
			{6285.70734678495, "hlc_5rnd_300WM_AP_AWM"}, // 0.16%
			{6301.60672140954, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.16%
			{6317.50609603414, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.16%
			{6333.35898125925, "TRYK_V_PlateCarrier_JSDF"}, // 0.16%
			{6349.21186648436, "TRYK_V_tacv1_FBI_BK"}, // 0.16%
			{6365.06475170947, "TRYK_V_PlateCarrier_blk"}, // 0.16%
			{6380.91763693459, "TRYK_V_PlateCarrier_oli"}, // 0.16%
			{6396.7705221597, "TRYK_V_tacv1_SHERIFF_BK"}, // 0.16%
			{6412.62340738481, "TRYK_V_tacv1_P_BK"}, // 0.16%
			{6428.47629260992, "TRYK_V_PlateCarrier_coyo"}, // 0.16%
			{6444.32917783503, "TRYK_V_PlateCarrier_ACU"}, // 0.16%
			{6460.18206306014, "TRYK_V_tacv1_BK"}, // 0.16%
			{6476.03494828525, "TRYK_V_tacv1_CY"}, // 0.16%
			{6491.88783351036, "TRYK_V_tacv1"}, // 0.16%
			{6507.74071873547, "TRYK_V_PlateCarrier_blk_L"}, // 0.16%
			{6523.59360396059, "TRYK_V_PlateCarrier_wood_L"}, // 0.16%
			{6539.4464891857, "TRYK_V_tacv1MLC_BK"}, // 0.16%
			{6555.29937441081, "TRYK_V_PlateCarrier_ACU_L"}, // 0.16%
			{6571.15225963592, "TRYK_V_tacv1M_BK"}, // 0.16%
			{6587.00514486103, "TRYK_V_IOTV_BLK"}, // 0.16%
			{6602.85803008614, "TRYK_V_Bulletproof_BL"}, // 0.16%
			{6618.71091531125, "TRYK_V_Bulletproof_BLK"}, // 0.16%
			{6634.56380053636, "TRYK_V_tacv1LP_BK"}, // 0.16%
			{6650.41668576147, "TRYK_V_Bulletproof"}, // 0.16%
			{6666.26957098659, "TRYK_V_tacv1LSRF_BK"}, // 0.16%
			{6682.1224562117, "TRYK_V_tacv1LC_CY"}, // 0.16%
			{6697.97534143681, "TRYK_V_ArmorVest_HRT2_OD"}, // 0.16%
			{6713.82822666192, "U_I_HeliPilotCoveralls"}, // 0.16%
			{6729.68111188703, "U_I_pilotCoveralls"}, // 0.16%
			{6745.53399711214, "U_B_PilotCoveralls"}, // 0.16%
			{6761.38688233725, "U_O_PilotCoveralls"}, // 0.16%
			{6777.23976756236, "U_B_HeliPilotCoveralls"}, // 0.16%
			{6793.09265278747, "U_I_CombatUniform_shortsleeve"}, // 0.16%
			{6808.94553801259, "U_I_CombatUniform_tshirt"}, // 0.16%
			{6824.7984232377, "U_I_CombatUniform"}, // 0.16%
			{6840.65130846281, "TRYK_V_ArmorVest_HRT2_B"}, // 0.16%
			{6856.50419368792, "TRYK_V_ArmorVest_HRT_OD"}, // 0.16%
			{6872.35707891303, "TRYK_V_ArmorVest_HRT_B"}, // 0.16%
			{6888.20996413814, "TRYK_V_PlateCarrier_POLICE"}, // 0.16%
			{6904.06284936325, "TRYK_V_tacv1LC_P_BK"}, // 0.16%
			{6919.91573458836, "TRYK_V_tacv1LC_SRF_OD"}, // 0.16%
			{6935.76861981347, "TRYK_V_tacv1LC_SRF_BK"}, // 0.16%
			{6951.62150503859, "TRYK_V_tacv1LC_FBI_BK"}, // 0.16%
			{6967.4743902637, "TRYK_V_tacv1LC_OD"}, // 0.16%
			{6983.32727548881, "TRYK_V_tacv1LC_BK"}, // 0.16%
			{6999.18016071392, "TRYK_V_PlateCarrier_coyo_L"}, // 0.16%
			{7014.24040167777, "V_PlateCarrierH_CTRG"}, // 0.15%
			{7029.30064264163, "V_PlateCarrierL_CTRG"}, // 0.15%
			{7044.31671867597, "10Rnd_762x54_Mag"}, // 0.15%
			{7058.65070436492, "30Rnd_65x39_caseless_green"}, // 0.14%
			{7072.98469005387, "30Rnd_556x45_Stanag_red"}, // 0.14%
			{7087.31867574282, "30Rnd_556x45_Stanag_green"}, // 0.14%
			{7101.65266143177, "30Rnd_556x45_Stanag"}, // 0.14%
			{7115.78543887585, "CUP_5Rnd_762x67_G22"}, // 0.14%
			{7129.27222182856, "CUP_optic_Elcan"}, // 0.13%
			{7142.75900478127, "CUP_muzzle_snds_Mk12"}, // 0.13%
			{7156.24578773397, "CUP_muzzle_snds_L85"}, // 0.13%
			{7169.73257068668, "CUP_muzzle_snds_G36_black"}, // 0.13%
			{7183.1109573297, "hlc_30rnd_556x45_SOST_G36"}, // 0.13%
			{7196.43860420037, "srifle_DMR_03_khaki_F"}, // 0.13%
			{7209.76625107103, "srifle_DMR_03_F"}, // 0.13%
			{7223.0938979417, "srifle_DMR_06_olive_F"}, // 0.13%
			{7236.42154481237, "srifle_DMR_06_camo_F"}, // 0.13%
			{7249.74919168304, "srifle_DMR_03_woodland_F"}, // 0.13%
			{7263.07683855371, "CUP_srifle_VSSVintorez"}, // 0.13%
			{7276.40448542437, "srifle_DMR_03_tan_F"}, // 0.13%
			{7289.65396427821, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.13%
			{7302.90344313204, "CUP_10Rnd_762x51_CZ750"}, // 0.13%
			{7316.15292198587, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.13%
			{7328.57570958296, "hlc_45Rnd_762x39_m_rpk"}, // 0.12%
			{7340.99849718005, "hlc_75Rnd_762x39_m_rpk"}, // 0.12%
			{7353.42128477714, "hlc_30Rnd_556x45_B_AUG"}, // 0.12%
			{7365.84407237423, "hlc_30rnd_556x45_EPR_G36"}, // 0.12%
			{7378.26685997132, "hlc_100rnd_556x45_EPR_G36"}, // 0.12%
			{7390.6896475684, "29rnd_300BLK_STANAG_T"}, // 0.12%
			{7402.81870069366, "B_Bergen_hex_F"}, // 0.12%
			{7414.94775381891, "B_Bergen_tna_F"}, // 0.12%
			{7427.07680694416, "B_Bergen_dgtl_F"}, // 0.12%
			{7439.20586006941, "B_Bergen_mcamo_F"}, // 0.12%
			{7451.33491319467, "B_Bergen_Base_F"}, // 0.12%
			{7463.2245771135, "U_B_SpecopsUniform_sgg"}, // 0.12%
			{7474.70745878682, "CUP_5Rnd_86x70_L115A1"}, // 0.11%
			{7486.17464733798, "hlc_30Rnd_9x19_B_MP5"}, // 0.11%
			{7497.64183588914, "hlc_50rnd_556x45_EPR"}, // 0.11%
			{7509.1090244403, "hlc_30Rnd_545x39_B_AK"}, // 0.11%
			{7520.57621299146, "29rnd_300BLK_STANAG"}, // 0.11%
			{7531.90471283153, "srifle_DMR_07_blk_F"}, // 0.11%
			{7543.23321267159, "srifle_DMR_07_hex_F"}, // 0.11%
			{7554.56171251166, "srifle_DMR_07_ghex_F"}, // 0.11%
			{7565.07330201689, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.11%
			{7575.58489152212, "HLC_45rnd_762x39_T_RPK"}, // 0.11%
			{7586.09648102735, "hlc_30rnd_556x45_SOST"}, // 0.11%
			{7596.60807053258, "hlc_30Rnd_545x39_T_AK"}, // 0.11%
			{7607.11966003781, "20Rnd_556x45_UW_mag"}, // 0.11%
			{7617.63124954304, "hlc_30Rnd_762x39_b_ak"}, // 0.11%
			{7628.14283904827, "hlc_40Rnd_556x45_B_AUG"}, // 0.11%
			{7638.6544285535, "hlc_30Rnd_9x19_GD_MP5"}, // 0.11%
			{7648.66369639409, "CUP_arifle_AK107_GL"}, // 0.10%
			{7658.67296423469, "CUP_arifle_AKM"}, // 0.10%
			{7668.68223207528, "CUP_arifle_Mk16_CQC_FG"}, // 0.10%
			{7678.68903670243, "CUP_srifle_L129A1"}, // 0.10%
			{7688.69584132957, "CUP_srifle_L129A1_HG"}, // 0.10%
			{7698.69157648257, "CUP_srifle_CZ750"}, // 0.10%
			{7708.24756694187, "hlc_30rnd_556x45_SPR"}, // 0.10%
			{7717.80355740117, "hlc_30Rnd_545x39_EP_AK"}, // 0.10%
			{7727.35954786047, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.10%
			{7736.91553831977, "hlc_30rnd_556x45_EPR"}, // 0.10%
			{7746.47152877907, "hlc_45Rnd_545x39_t_rpk"}, // 0.10%
			{7755.92472618407, "CUP_arifle_AK47"}, // 0.09%
			{7765.37792358908, "arifle_AKS_F"}, // 0.09%
			{7774.83112099408, "CUP_arifle_Mk16_CQC"}, // 0.09%
			{7783.92409667037, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.09%
			{7793.01707234666, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.09%
			{7802.11004802295, "TRYK_U_B_MARPAT_Wood"}, // 0.09%
			{7811.20302369924, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.09%
			{7820.10015066866, "CUP_srifle_Mk12SPR"}, // 0.09%
			{7828.99727763807, "CUP_arifle_AK74_GL"}, // 0.09%
			{7837.89440460749, "hlc_rifle_SAMR"}, // 0.09%
			{7846.72739051004, "5Rnd_127x108_Mag"}, // 0.09%
			{7855.5603764126, "7Rnd_408_Mag"}, // 0.09%
			{7864.22334687853, "hlc_rifle_awcovert_BL"}, // 0.09%
			{7872.88631734447, "CUP_srifle_G22_des"}, // 0.09%
			{7881.48670875784, "30Rnd_762x39_Mag_Green_F"}, // 0.09%
			{7890.08710017121, "30Rnd_762x39_Mag_F"}, // 0.09%
			{7898.68749158457, "Exile_Magazine_20Rnd_9x39"}, // 0.09%
			{7907.28788299794, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.09%
			{7915.88827441131, "Exile_Magazine_10Rnd_762x54"}, // 0.09%
			{7924.48866582468, "Exile_Magazine_5Rnd_22LR"}, // 0.09%
			{7933.08905723805, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.09%
			{7941.68944865142, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.09%
			{7950.28984006479, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.09%
			{7958.89023147816, "Exile_Magazine_10Rnd_9x39"}, // 0.09%
			{7967.49062289153, "30Rnd_762x39_Mag_Tracer_F"}, // 0.09%
			{7976.0910143049, "150Rnd_556x45_Drum_Mag_F"}, // 0.09%
			{7984.69140571826, "30Rnd_762x39_AK47_M"}, // 0.09%
			{7993.29179713163, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.09%
			{8001.892188545, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.09%
			{8010.49257995837, "CUP_30Rnd_545x39_AK_M"}, // 0.09%
			{8019.09297137174, "CUP_30Rnd_556x45_G36"}, // 0.09%
			{8027.69336278511, "CUP_30Rnd_556x45_Stanag"}, // 0.09%
			{8036.29375419848, "20Rnd_762x51_Mag"}, // 0.09%
			{8044.89414561185, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.09%
			{8053.49453702522, "100Rnd_580x42_Mag_Tracer_F"}, // 0.09%
			{8062.09492843858, "100Rnd_580x42_Mag_F"}, // 0.09%
			{8070.69531985195, "30Rnd_580x42_Mag_Tracer_F"}, // 0.09%
			{8079.29571126532, "30Rnd_580x42_Mag_F"}, // 0.09%
			{8087.89610267869, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.09%
			{8096.49649409206, "30Rnd_545x39_Mag_Tracer_F"}, // 0.09%
			{8105.09688550543, "30Rnd_545x39_Mag_Green_F"}, // 0.09%
			{8113.6972769188, "30Rnd_545x39_Mag_F"}, // 0.09%
			{8122.29766833217, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.09%
			{8130.89805974554, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.09%
			{8139.4984511589, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.09%
			{8148.09884257227, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.09%
			{8156.69923398564, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.09%
			{8165.29962539901, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.09%
			{8173.90001681238, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.09%
			{8182.50040822575, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.09%
			{8191.10079963912, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.09%
			{8199.70119105249, "30Rnd_65x39_caseless_mag"}, // 0.09%
			{8208.30158246586, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.09%
			{8216.90197387922, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.09%
			{8225.50236529259, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.09%
			{8234.10275670596, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.09%
			{8242.5319960514, "CUP_acc_ANPEQ_2_desert"}, // 0.08%
			{8250.96123539685, "CUP_acc_ANPEQ_2_camo"}, // 0.08%
			{8259.39047474229, "CUP_acc_ANPEQ_2_grey"}, // 0.08%
			{8267.81971408773, "optic_NVS"}, // 0.08%
			{8276.16077062156, "CUP_arifle_G36A"}, // 0.08%
			{8284.50182715538, "hlc_rifle_augpara_t"}, // 0.08%
			{8292.84288368921, "hlc_rifle_augpara_b"}, // 0.08%
			{8301.18394022304, "hlc_rifle_augpara"}, // 0.08%
			{8309.52499675687, "hlc_rifle_aughbar_t"}, // 0.08%
			{8317.86605329069, "hlc_rifle_aughbar_b"}, // 0.08%
			{8326.20710982452, "hlc_rifle_aughbar"}, // 0.08%
			{8334.54816635835, "hlc_rifle_auga1carb_b"}, // 0.08%
			{8342.88922289217, "hlc_rifle_auga1carb_t"}, // 0.08%
			{8351.230279426, "hlc_rifle_auga1carb"}, // 0.08%
			{8359.57133595983, "hlc_rifle_auga1_B"}, // 0.08%
			{8367.91239249366, "hlc_rifle_auga1_t"}, // 0.08%
			{8376.25344902748, "hlc_rifle_aug"}, // 0.08%
			{8384.59450556131, "hlc_rifle_vendimus"}, // 0.08%
			{8392.93556209514, "arifle_AK12_F"}, // 0.08%
			{8401.27661862896, "hlc_rifle_rpk"}, // 0.08%
			{8409.61767516279, "arifle_AK12_GL_F"}, // 0.08%
			{8417.95873169662, "arifle_AKM_F"}, // 0.08%
			{8426.29978823045, "arifle_AKM_FL_F"}, // 0.08%
			{8434.64084476427, "arifle_SPAR_01_blk_F"}, // 0.08%
			{8442.9819012981, "hlc_rifle_auga2"}, // 0.08%
			{8451.32295783193, "CUP_arifle_XM8_Railed"}, // 0.08%
			{8459.66401436576, "CUP_arifle_M16A2"}, // 0.08%
			{8468.00507089958, "arifle_SPAR_03_khk_F"}, // 0.08%
			{8476.34612743341, "hlc_rifle_ak12"}, // 0.08%
			{8484.68718396724, "arifle_SPAR_03_snd_F"}, // 0.08%
			{8493.02824050106, "CUP_arifle_L86A2"}, // 0.08%
			{8501.36929703489, "CUP_arifle_G36C"}, // 0.08%
			{8509.71035356872, "hlc_rifle_auga2_b"}, // 0.08%
			{8518.05141010255, "hlc_rifle_auga2lsw"}, // 0.08%
			{8526.39246663637, "hlc_rifle_auga2carb"}, // 0.08%
			{8534.7335231702, "hlc_rifle_augsr_b"}, // 0.08%
			{8543.07457970403, "hlc_rifle_augsr_t"}, // 0.08%
			{8551.41563623785, "hlc_rifle_augsrcarb"}, // 0.08%
			{8559.75669277168, "hlc_rifle_augsrcarb_t"}, // 0.08%
			{8568.09774930551, "hlc_rifle_augsrcarb_b"}, // 0.08%
			{8576.43880583934, "hlc_rifle_augsrhbar"}, // 0.08%
			{8584.77986237316, "hlc_rifle_auga2_t"}, // 0.08%
			{8593.12091890699, "hlc_rifle_augsrhbar_b"}, // 0.08%
			{8601.46197544082, "hlc_rifle_auga3"}, // 0.08%
			{8609.80303197464, "hlc_rifle_auga3_bl"}, // 0.08%
			{8618.14408850847, "hlc_rifle_auga3_b"}, // 0.08%
			{8626.4851450423, "hlc_rifle_auga3_GL"}, // 0.08%
			{8634.82620157613, "hlc_rifle_auga3_GL_BL"}, // 0.08%
			{8643.16725810995, "hlc_rifle_auga3_GL_B"}, // 0.08%
			{8651.50831464378, "hlc_rifle_augsrhbar_t"}, // 0.08%
			{8659.84937117761, "hlc_rifle_auga2para_t"}, // 0.08%
			{8668.19042771144, "hlc_rifle_augsr"}, // 0.08%
			{8676.53148424526, "CUP_arifle_AKS74U"}, // 0.08%
			{8684.87254077909, "hlc_rifle_auga2para_b"}, // 0.08%
			{8693.21359731292, "hlc_rifle_auga2para"}, // 0.08%
			{8701.55465384674, "hlc_rifle_auga2lsw_b"}, // 0.08%
			{8709.89571038057, "hlc_rifle_auga2carb_t"}, // 0.08%
			{8718.2367669144, "hlc_rifle_auga2carb_b"}, // 0.08%
			{8726.57782344823, "CUP_arifle_Mk16_SV"}, // 0.08%
			{8734.91887998205, "hlc_rifle_auga2lsw_t"}, // 0.08%
			{8742.91546810445, "hlc_rifle_awcovert_FDE"}, // 0.08%
			{8750.84191071701, "U_O_SpecopsUniform_blk"}, // 0.08%
			{8758.76835332957, "U_O_CombatUniform_oucamo"}, // 0.08%
			{8766.69479594212, "U_O_V_Soldier_Viper_hex_F"}, // 0.08%
			{8774.62123855468, "U_O_OfficerUniform_ocamo"}, // 0.08%
			{8782.54768116723, "U_I_Wetsuit"}, // 0.08%
			{8790.47412377979, "U_O_Wetsuit"}, // 0.08%
			{8798.40056639234, "U_B_Wetsuit"}, // 0.08%
			{8806.3270090049, "U_I_OfficerUniform"}, // 0.08%
			{8814.25345161745, "U_O_SpecopsUniform_ocamo"}, // 0.08%
			{8822.17989423001, "U_O_V_Soldier_Viper_F"}, // 0.08%
			{8830.10633684257, "U_O_CombatUniform_ocamo"}, // 0.08%
			{8837.8913229408, "hlc_rifle_samr2"}, // 0.08%
			{8845.67630903904, "arifle_MX_GL_F"}, // 0.08%
			{8853.46129513728, "CUP_arifle_CZ805_GL"}, // 0.08%
			{8861.24628123552, "CUP_arifle_M4A1"}, // 0.08%
			{8869.03126733376, "hlc_rifle_RU556"}, // 0.08%
			{8876.6760597012, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.08%
			{8884.32085206864, "Exile_Magazine_10Rnd_303"}, // 0.08%
			{8891.96564443608, "CUP_30Rnd_Sa58_M"}, // 0.08%
			{8899.61043680351, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.08%
			{8907.25522917095, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.08%
			{8914.4841448336, "hlc_rifle_RU5562"}, // 0.07%
			{8921.71306049625, "hlc_rifle_bcmjack"}, // 0.07%
			{8928.9419761589, "hlc_rifle_Bushmaster300"}, // 0.07%
			{8936.17089182155, "hlc_rifle_Colt727_GL"}, // 0.07%
			{8943.3998074842, "arifle_MXC_F"}, // 0.07%
			{8950.46619620625, "5Rnd_127x108_APDS_Mag"}, // 0.07%
			{8957.28592796346, "TRYK_U_B_MARPAT_Desert_Tshirt"}, // 0.07%
			{8964.10565972068, "TRYK_U_B_MARPAT_Wood_Tshirt"}, // 0.07%
			{8970.9253914779, "TRYK_U_B_MARPAT_Desert"}, // 0.07%
			{8977.74512323512, "TRYK_U_B_MARPAT_Desert2"}, // 0.07%
			{8984.56485499234, "TRYK_U_B_MARPAT_Desert2_Tshirt"}, // 0.07%
			{8991.25404831385, "CUP_20Rnd_556x45_Stanag"}, // 0.07%
			{8997.94324163536, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.07%
			{9004.63243495687, "CUP_30Rnd_762x39_AK47_M"}, // 0.07%
			{9011.30528018393, "Exile_Weapon_LeeEnfield"}, // 0.07%
			{9017.97812541099, "CUP_arifle_AK74"}, // 0.07%
			{9024.64194884632, "hlc_rifle_awcovert"}, // 0.07%
			{9031.30577228166, "hlc_rifle_awMagnum_OD_ghillie"}, // 0.07%
			{9037.42254707313, "hlc_rifle_ak47"}, // 0.06%
			{9043.5393218646, "arifle_MX_F"}, // 0.06%
			{9049.27291614018, "CUP_100Rnd_556x45_BetaCMag"}, // 0.06%
			{9054.95602593787, "TRYK_U_B_3CD_Delta_BDU"}, // 0.06%
			{9060.63913573555, "TRYK_T_camo_Desert_marpat"}, // 0.06%
			{9066.32224553323, "TRYK_U_B_JSDF_CombatUniformTshirt"}, // 0.06%
			{9072.00535533091, "TRYK_U_B_JSDF_CombatUniform"}, // 0.06%
			{9077.68846512859, "TRYK_U_B_3CD_Ranger_BDU"}, // 0.06%
			{9083.37157492627, "TRYK_U_B_woodtanR_CombatUniformTshirt"}, // 0.06%
			{9089.05468472395, "TRYK_U_B_woodtan_CombatUniform"}, // 0.06%
			{9094.73779452163, "TRYK_U_B_3CD_Ranger_BDUTshirt"}, // 0.06%
			{9100.42090431931, "TRYK_U_B_3CD_Delta_BDUTshirt"}, // 0.06%
			{9106.10401411699, "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt"}, // 0.06%
			{9111.78712391468, "TRYK_U_B_BLKOCP_CombatUniform"}, // 0.06%
			{9117.47023371236, "TRYK_U_B_wood3c_CombatUniformTshirt"}, // 0.06%
			{9123.15334351004, "TRYK_U_B_OD_OD_CombatUniform"}, // 0.06%
			{9128.83645330772, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.06%
			{9134.5195631054, "TRYK_U_B_TANTAN_CombatUniform"}, // 0.06%
			{9140.20267290308, "TRYK_U_B_TANTAN_R_CombatUniform"}, // 0.06%
			{9145.88578270076, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.06%
			{9151.56889249844, "TRYK_U_B_BLKBLK_R_CombatUniform"}, // 0.06%
			{9157.25200229612, "TRYK_U_B_GRYOCP_CombatUniform"}, // 0.06%
			{9162.9351120938, "TRYK_U_B_GRYOCP_R_CombatUniformTshirt"}, // 0.06%
			{9168.61822189149, "TRYK_U_B_TANOCP_CombatUniform"}, // 0.06%
			{9174.30133168917, "TRYK_U_B_TANOCP_R_CombatUniformTshirt"}, // 0.06%
			{9179.98444148685, "TRYK_T_camo_3c_BG"}, // 0.06%
			{9185.66755128453, "TRYK_U_B_BLKOCP_R_CombatUniformTshirt"}, // 0.06%
			{9191.35066108221, "TRYK_U_B_BLKTAN_CombatUniform"}, // 0.06%
			{9197.03377087989, "TRYK_U_B_BLKTANR_CombatUniformTshirt"}, // 0.06%
			{9202.71688067757, "TRYK_U_B_ODTAN_CombatUniform"}, // 0.06%
			{9208.39999047525, "TRYK_U_B_ODTANR_CombatUniformTshirt"}, // 0.06%
			{9214.08310027293, "TRYK_U_B_GRTAN_CombatUniform"}, // 0.06%
			{9219.76621007061, "TRYK_U_B_GRTANR_CombatUniformTshirt"}, // 0.06%
			{9225.4493198683, "TRYK_U_B_wood_CombatUniform"}, // 0.06%
			{9231.13242966598, "TRYK_U_B_woodR_CombatUniformTshirt"}, // 0.06%
			{9236.81553946366, "TRYK_U_B_wood3c_CombatUniform"}, // 0.06%
			{9242.49864926134, "TRYK_U_B_wh_tan_Rollup_CombatUniform"}, // 0.06%
			{9248.18175905902, "TRYK_U_B_wh_OD_Rollup_CombatUniform"}, // 0.06%
			{9253.8648688567, "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform"}, // 0.06%
			{9259.54797865438, "TRYK_U_B_BLK_tan_Rollup_CombatUniform"}, // 0.06%
			{9265.23108845206, "TRYK_U_B_ARO1_GRY_CombatUniform"}, // 0.06%
			{9270.91419824974, "TRYK_U_B_ARO1_GRY_R_CombatUniform"}, // 0.06%
			{9276.59730804743, "TRYK_U_B_ARO1_CombatUniform"}, // 0.06%
			{9282.28041784511, "TRYK_U_B_ARO1R_CombatUniform"}, // 0.06%
			{9287.96352764279, "TRYK_U_B_ARO1_BLK_CombatUniform"}, // 0.06%
			{9293.64663744047, "TRYK_U_B_ARO1_BLK_R_CombatUniform"}, // 0.06%
			{9299.32974723815, "TRYK_U_B_ARO1_CBR_CombatUniform"}, // 0.06%
			{9305.01285703583, "TRYK_U_B_ARO1_CBR_R_CombatUniform"}, // 0.06%
			{9310.69596683351, "TRYK_U_B_ARO2_CombatUniform"}, // 0.06%
			{9316.37907663119, "TRYK_U_B_ARO1_GR_R_CombatUniform"}, // 0.06%
			{9322.06218642887, "TRYK_U_B_ARO2R_CombatUniform"}, // 0.06%
			{9327.74529622655, "TRYK_U_B_AOR2_BLK_R_CombatUniform"}, // 0.06%
			{9333.42840602424, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.06%
			{9339.11151582192, "TRYK_U_B_AOR2_OD_R_CombatUniform"}, // 0.06%
			{9344.7946256196, "TRYK_U_B_AOR2_GRY_CombatUniform"}, // 0.06%
			{9350.47773541728, "TRYK_U_B_AOR2_GRY_R_CombatUniform"}, // 0.06%
			{9356.16084521496, "TRYK_U_B_Snow_CombatUniform"}, // 0.06%
			{9361.84395501264, "TRYK_U_B_Snowt"}, // 0.06%
			{9367.52706481032, "TRYK_T_camo_tan"}, // 0.06%
			{9373.210174608, "TRYK_T_camo_3c"}, // 0.06%
			{9378.89328440568, "TRYK_U_B_AOR2_BLK_CombatUniform"}, // 0.06%
			{9384.57639420336, "TRYK_U_B_ARO1_GR_CombatUniform"}, // 0.06%
			{9390.25950400105, "TRYK_U_B_WDL_GRY_R_CombatUniform"}, // 0.06%
			{9395.94261379873, "TRYK_U_B_WDL_GRY_CombatUniform"}, // 0.06%
			{9401.62572359641, "TRYK_U_B_BLK_OD_Rollup_CombatUniform"}, // 0.06%
			{9407.30883339409, "TRYK_U_B_NATO_UCP_GRY_CombatUniform"}, // 0.06%
			{9412.99194319177, "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform"}, // 0.06%
			{9418.67505298945, "TRYK_U_B_NATO_UCP_CombatUniform"}, // 0.06%
			{9424.35816278713, "TRYK_U_B_NATO_UCP_R_CombatUniform"}, // 0.06%
			{9430.04127258481, "TRYK_HRP_khk"}, // 0.06%
			{9435.72438238249, "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform"}, // 0.06%
			{9441.40749218017, "TRYK_U_B_NATO_OCP_BLK_CombatUniform"}, // 0.06%
			{9447.09060197786, "TRYK_U_B_NATO_OCP_BLK_R_CombatUniform"}, // 0.06%
			{9452.77371177554, "TRYK_U_B_NATO_OCPD_CombatUniform"}, // 0.06%
			{9458.45682157322, "TRYK_U_B_NATO_OCPD_R_CombatUniform"}, // 0.06%
			{9464.1399313709, "TRYK_U_B_NATO_OCP_CombatUniform"}, // 0.06%
			{9469.82304116858, "TRYK_U_B_NATO_OCP_R_CombatUniform"}, // 0.06%
			{9475.50615096626, "TRYK_U_B_AOR1_Rollup_CombatUniform"}, // 0.06%
			{9481.18926076394, "TRYK_U_B_AOR2_Rollup_CombatUniform"}, // 0.06%
			{9486.87237056162, "TRYK_U_B_MTP_CombatUniform"}, // 0.06%
			{9492.5554803593, "TRYK_U_B_MTP_R_CombatUniform"}, // 0.06%
			{9498.23859015699, "TRYK_U_B_MTP_BLK_CombatUniform"}, // 0.06%
			{9503.92169995467, "TRYK_U_B_MTP_BLK_R_CombatUniform"}, // 0.06%
			{9509.60480975235, "TRYK_U_B_Woodland"}, // 0.06%
			{9515.28791955003, "TRYK_U_B_Woodland_Tshirt"}, // 0.06%
			{9520.97102934771, "TRYK_U_B_wh_blk_Rollup_CombatUniform"}, // 0.06%
			{9526.65413914539, "TRYK_HRP_USMC"}, // 0.06%
			{9532.33724894307, "TRYK_T_camo_wood_marpat"}, // 0.06%
			{9538.02035874075, "TRYK_T_camo_desert_marpat_BG"}, // 0.06%
			{9543.70346853843, "TRYK_T_camo_wood_marpat_BG"}, // 0.06%
			{9549.38657833611, "TRYK_T_camo_Wood_BG"}, // 0.06%
			{9555.0696881338, "TRYK_HRP_UCP"}, // 0.06%
			{9560.75279793148, "TRYK_T_camo_Wood"}, // 0.06%
			{9566.31350228736, "hlc_rifle_honeybadger"}, // 0.06%
			{9571.87420664325, "Exile_Weapon_AK74_GL"}, // 0.06%
			{9577.43491099913, "Exile_Weapon_AK74"}, // 0.06%
			{9582.99561535502, "Exile_Weapon_AK47"}, // 0.06%
			{9588.5563197109, "Exile_Weapon_CZ550"}, // 0.06%
			{9594.11702406679, "hlc_rifle_akmgl"}, // 0.06%
			{9599.67772842267, "hlc_rifle_akm"}, // 0.06%
			{9605.23843277855, "hlc_rifle_ak74"}, // 0.06%
			{9610.79913713444, "Exile_Weapon_AK107_GL"}, // 0.06%
			{9616.35984149032, "CUP_arifle_L85A2_GL"}, // 0.06%
			{9621.92054584621, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.06%
			{9627.48125020209, "CUP_arifle_AK107"}, // 0.06%
			{9633.04195455798, "CUP_arifle_AK74M"}, // 0.06%
			{9638.60265891386, "CUP_arifle_CZ805_B"}, // 0.06%
			{9644.16336326975, "CUP_arifle_CZ805_A1"}, // 0.06%
			{9649.72406762563, "CUP_arifle_Mk16_STD_EGLM"}, // 0.06%
			{9655.28477198152, "Exile_Weapon_AK107"}, // 0.06%
			{9660.8454763374, "CUP_arifle_Sa58P"}, // 0.06%
			{9666.17653508567, "hlc_rifle_awmagnum_BL"}, // 0.05%
			{9671.50759383394, "hlc_rifle_awmagnum"}, // 0.05%
			{9676.28558906359, "10Rnd_50BW_Mag_F"}, // 0.05%
			{9680.73415254829, "CUP_arifle_Sa58RIS2_gl"}, // 0.04%
			{9685.182716033, "arifle_MXC_khk_F"}, // 0.04%
			{9689.63127951771, "arifle_MX_GL_khk_F"}, // 0.04%
			{9694.07984300242, "arifle_MX_khk_F"}, // 0.04%
			{9698.52840648712, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.04%
			{9702.97696997183, "CUP_arifle_Sa58RIS1"}, // 0.04%
			{9707.39346292311, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.04%
			{9711.80995587439, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.04%
			{9716.22644882566, "CUP_5Rnd_127x99_as50_M"}, // 0.04%
			{9720.64294177694, "CUP_10Rnd_127x99_M107"}, // 0.04%
			{9724.91535056101, "srifle_GM6_F"}, // 0.04%
			{9728.80784361013, "CUP_arifle_Sa58RIS2_camo"}, // 0.04%
			{9732.70033665925, "CUP_arifle_Sa58P_des"}, // 0.04%
			{9736.59282970837, "CUP_arifle_M4A1_camo"}, // 0.04%
			{9740.2072875397, "CUP_6Rnd_HE_M203"}, // 0.04%
			{9743.82174537102, "10Rnd_93x64_DMR_05_Mag"}, // 0.04%
			{9747.23161124963, "TRYK_H_ghillie_top_headless"}, // 0.03%
			{9750.64147712824, "TRYK_H_ghillie_top"}, // 0.03%
			{9754.05134300685, "TRYK_H_ghillie_over"}, // 0.03%
			{9757.46120888545, "TRYK_H_ghillie_top_green"}, // 0.03%
			{9760.87107476406, "TRYK_H_ghillie_top_headless_green"}, // 0.03%
			{9764.28094064267, "TRYK_H_ghillie_over_green"}, // 0.03%
			{9767.6173632562, "CUP_arifle_M4A3_desert"}, // 0.03%
			{9770.95378586973, "Exile_Weapon_SVDCamo"}, // 0.03%
			{9774.29020848326, "Exile_Weapon_VSSVintorez"}, // 0.03%
			{9777.62663109679, "Exile_Weapon_SVD"}, // 0.03%
			{9780.96305371032, "arifle_MXM_F"}, // 0.03%
			{9784.29496542799, "CUP_srifle_AWM_des"}, // 0.03%
			{9787.62687714566, "CUP_srifle_AWM_wdl"}, // 0.03%
			{9790.95878886333, "hlc_rifle_awMagnum_FDE_ghillie"}, // 0.03%
			{9794.16309545138, "srifle_DMR_02_camo_F"}, // 0.03%
			{9797.36740203943, "srifle_DMR_02_F"}, // 0.03%
			{9800.57170862749, "CUP_srifle_M107_Base"}, // 0.03%
			{9803.58375682026, "130Rnd_338_Mag"}, // 0.03%
			{9806.59580501303, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9809.6078532058, "5Rnd_127x108_Mag"}, // 0.03%
			{9812.61990139857, "10Rnd_338_Mag"}, // 0.03%
			{9815.63194959134, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9818.64399778411, "150Rnd_93x64_Mag"}, // 0.03%
			{9821.51261511056, "V_PlateCarrierGL_blk"}, // 0.03%
			{9824.38123243701, "V_PlateCarrierGL_mtp"}, // 0.03%
			{9827.24984976346, "V_PlateCarrierGL_rgr"}, // 0.03%
			{9830.11846708991, "V_PlateCarrierSpec_rgr"}, // 0.03%
			{9832.98708441636, "V_PlateCarrierIAGL_dgtl"}, // 0.03%
			{9835.85570174281, "V_PlateCarrierIAGL_oli"}, // 0.03%
			{9838.72431906926, "V_PlateCarrierSpec_blk"}, // 0.03%
			{9841.5929363957, "V_PlateCarrierSpec_mtp"}, // 0.03%
			{9844.46155372215, "V_PlateCarrierSpec_tna_F"}, // 0.03%
			{9847.3301710486, "V_TacChestrig_oli_F"}, // 0.03%
			{9850.19878837505, "V_TacChestrig_cbr_F"}, // 0.03%
			{9853.0674057015, "V_PlateCarrier1_tna_F"}, // 0.03%
			{9855.93602302795, "V_PlateCarrierGL_tna_F"}, // 0.03%
			{9858.8046403544, "V_HarnessO_ghex_F"}, // 0.03%
			{9861.67325768084, "V_HarnessOGL_ghex_F"}, // 0.03%
			{9864.54187500729, "V_BandollierB_ghex_F"}, // 0.03%
			{9867.41049233374, "V_TacVest_gen_F"}, // 0.03%
			{9870.27910966019, "V_PlateCarrier1_rgr_noflag_F"}, // 0.03%
			{9873.14772698664, "V_PlateCarrier2_rgr_noflag_F"}, // 0.03%
			{9876.01634431309, "V_TacChestrig_grn_F"}, // 0.03%
			{9878.88496163954, "V_PlateCarrier2_tna_F"}, // 0.03%
			{9881.66531381748, "CUP_arifle_AK107_GL_kobra"}, // 0.03%
			{9884.44566599542, "CUP_arifle_AK107_GL_pso"}, // 0.03%
			{9887.22601817336, "arifle_CTARS_ghex_F"}, // 0.03%
			{9890.00637035131, "arifle_CTARS_hex_F"}, // 0.03%
			{9892.78672252925, "arifle_SPAR_01_khk_F"}, // 0.03%
			{9895.56707470719, "arifle_SPAR_01_snd_F"}, // 0.03%
			{9898.34742688513, "arifle_SPAR_01_GL_blk_F"}, // 0.03%
			{9901.12777906308, "arifle_SPAR_01_GL_khk_F"}, // 0.03%
			{9903.90813124102, "arifle_SPAR_02_blk_F"}, // 0.03%
			{9906.68848341896, "arifle_SPAR_02_khk_F"}, // 0.03%
			{9909.4688355969, "arifle_SPAR_02_snd_F"}, // 0.03%
			{9912.24918777485, "arifle_SPAR_03_blk_F"}, // 0.03%
			{9915.02953995279, "CUP_arifle_L85A2_NG"}, // 0.03%
			{9917.80989213073, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.03%
			{9920.59024430867, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.03%
			{9923.37059648661, "CUP_arifle_AKS_Gold"}, // 0.03%
			{9926.15094866456, "CUP_arifle_AK107_kobra"}, // 0.03%
			{9928.9313008425, "arifle_CTARS_blk_F"}, // 0.03%
			{9931.71165302044, "arifle_CTAR_GL_blk_F"}, // 0.03%
			{9934.49200519838, "arifle_SPAR_01_GL_snd_F"}, // 0.03%
			{9937.27235737633, "Exile_Weapon_DMR"}, // 0.03%
			{9940.05270955427, "arifle_ARX_blk_F"}, // 0.03%
			{9942.83306173221, "arifle_ARX_ghex_F"}, // 0.03%
			{9945.61341391015, "arifle_CTAR_ghex_F"}, // 0.03%
			{9948.3937660881, "arifle_CTAR_blk_F"}, // 0.03%
			{9951.17411826604, "arifle_CTAR_hex_F"}, // 0.03%
			{9953.95447044398, "arifle_ARX_hex_F"}, // 0.03%
			{9956.60436621475, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.03%
			{9959.01400476896, "CUP_OG7_M"}, // 0.02%
			{9961.42364332318, "CUP_M136_M"}, // 0.02%
			{9963.64792506553, "arifle_MXM_Black_F"}, // 0.02%
			{9965.87220680789, "arifle_TRG21_GL_F"}, // 0.02%
			{9968.09648855024, "arifle_Mk20_GL_F"}, // 0.02%
			{9970.3207702926, "CUP_arifle_G36C_camo_holo_snds"}, // 0.02%
			{9972.45697468463, "srifle_DMR_05_tan_F"}, // 0.02%
			{9974.59317907667, "srifle_DMR_05_blk_F"}, // 0.02%
			{9976.7293834687, "srifle_DMR_05_hex_F"}, // 0.02%
			{9978.49598064922, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.02%
			{9980.20494416284, "CUP_glaunch_M32"}, // 0.02%
			{9981.87315546961, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.02%
			{9983.54136677638, "arifle_MXC_Black_F"}, // 0.02%
			{9985.20957808314, "arifle_MX_Black_F"}, // 0.02%
			{9986.87778938991, "arifle_MX_GL_Black_F"}, // 0.02%
			{9988.54600069667, "arifle_Mk20C_F"}, // 0.02%
			{9990.21421200344, "Exile_Weapon_AKS_Gold"}, // 0.02%
			{9991.8824233102, "arifle_MXM_khk_F"}, // 0.02%
			{9993.16414594542, "CUP_srifle_AS50"}, // 0.01%
			{9994.44586858065, "MMG_02_sand_F"}, // 0.01%
			{9995.72759121587, "MMG_02_camo_F"}, // 0.01%
			{9997.00931385109, "MMG_02_black_F"}, // 0.01%
			{9997.8637956079, "MMG_01_tan_F"}, // 0.01%
			{9998.71827736472, "MMG_01_hex_F"}, // 0.01%
			{9999.35913868233, "CUP_launch_M136"}, // 0.01%
			{9999.99999999994, "CUP_launch_RPG7V"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  CUP_smg_MP5SD6
	  Exile_Item_Surstromming
	  Exile_Item_Can_Empty
	  hlc_10rnd_12g_buck_S12
	  hgun_Pistol_heavy_02_F
	  Exile_Weapon_LeeEnfield
	  SmokeShell
	  Exile_Magazine_8Rnd_74Slug
	  Exile_Weapon_LeeEnfield
	  ItemCompass
	  Exile_Item_ToiletPaper
	  hlc_smg_mp5k
	  hlc_smg_mp5k
	  Exile_Item_Can_Empty
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  hlc_smg_mp5k
	  hlc_rifle_hk53
	  hlc_rifle_saiga12k
	  Exile_Item_Magazine04
	  Exile_Item_Surstromming
	  Exile_Item_Can_Empty
	  H_Cap_tan
	  Exile_Item_MobilePhone
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_Can_Empty
	  CUP_smg_bizon_snds
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Weapon_LeeEnfield
	  CUP_30Rnd_9x19_UZI
	  ItemWatch
	  CUP_smg_bizon_snds
	  Exile_Weapon_LeeEnfield
	  hlc_rifle_saiga12k
	  CUP_18Rnd_9x19_Phantom
	  hgun_ACPC2_F
	  SmokeShell
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  hlc_10rnd_12g_buck_S12
	  hlc_rifle_M1903A1
	  hlc_rifle_saiga12k
	  Exile_Weapon_M1014
	  Exile_Item_Magazine04
	  Exile_Item_MobilePhone
	  hlc_rifle_M1903A1
	  H_Cap_press
	  Exile_Item_FuelCanisterEmpty
	  hgun_P07_khk_F
	  Binocular
	  Exile_Magazine_8Rnd_9x18
	  hlc_smg_mp5k_PDW
	  Exile_Item_CatFood
	  Exile_Weapon_LeeEnfield
	  Exile_Magazine_10Rnd_303
	  Exile_Weapon_M1014
	  Exile_Item_PlasticBottleEmpty
	  H_Hat_checker
	  hlc_30Rnd_9x19_B_MP5
	  hlc_30Rnd_9x19_GD_MP5
	  hlc_10rnd_12g_slug_S12
	  hlc_smg_mp5k_PDW
	  6Rnd_GreenSignal_F
	  CUP_hgun_Duty_M3X
	  Exile_Item_ZipTie
	  hlc_rifle_saiga12k
	  ItemMap
	  9Rnd_45ACP_Mag
	  Exile_Magazine_6Rnd_45ACP
	  hlc_rifle_hk53
	  CUP_hgun_SA61
	  Exile_Item_Hammer
	  hlc_30Rnd_9x19_GD_MP5
	  SmokeShellYellow
	  CUP_18Rnd_9x19_Phantom
	  Chemlight_green
	  Exile_Item_Magazine03
	  CUP_smg_MP5A5
	  Exile_Weapon_Colt1911
	  hlc_rifle_hk53
	  CUP_hgun_Duty_M3X
	  hgun_P07_khk_F
	  CUP_sgun_Saiga12K
	  Exile_Item_ChristmasTinner
	  hlc_10rnd_12g_buck_S12
	  SmokeShellYellow
	  hlc_rifle_saiga12k
	  Exile_Item_Heatpack
	  hgun_P07_F
	  hgun_P07_F
	  H_Hat_blue
	  SmokeShell
	  Exile_Item_Can_Empty
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_Noodles
	  Exile_Item_EnergyDrink
	*/
	class BarnLoot
	{
		count = 152;
		half = 7954.00028469664;
		halfIndex = 76;
		sum = 10000;
		items[] = 
		{
			{394.736842105263, "Exile_Item_Can_Empty"}, // 3.95%
			{789.473684210526, "Exile_Item_ToiletPaper"}, // 3.95%
			{1184.21052631579, "Exile_Item_PlasticBottleEmpty"}, // 3.95%
			{1478.79025923016, "Exile_Weapon_LeeEnfield"}, // 2.95%
			{1753.73134328358, "hlc_rifle_saiga12k"}, // 2.75%
			{1950.11783189317, "CUP_sgun_Saiga12K"}, // 1.96%
			{2146.50432050275, "Exile_Weapon_M1014"}, // 1.96%
			{2342.89080911233, "hlc_rifle_M1903A1"}, // 1.96%
			{2511.83167980759, "hlc_10rnd_12g_buck_S12"}, // 1.69%
			{2654.78164731896, "hlc_10rnd_12g_slug_S12"}, // 1.43%
			{2784.73616323839, "Exile_Magazine_10Rnd_303"}, // 1.30%
			{2914.69067915782, "Exile_Magazine_5Rnd_22LR"}, // 1.30%
			{3044.64519507724, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.30%
			{3174.59971099667, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.30%
			{3304.5542269161, "Exile_Magazine_8Rnd_74Slug"}, // 1.30%
			{3427.909490074, "CUP_hgun_Phantom"}, // 1.23%
			{3545.99316078925, "ItemMap"}, // 1.18%
			{3651.25631868398, "CUP_smg_MP5SD6"}, // 1.05%
			{3754.05237131556, "hlc_smg_mp5k_PDW"}, // 1.03%
			{3856.84842394714, "hlc_smg_mp5k"}, // 1.03%
			{3959.64447657872, "hgun_Pistol_heavy_01_F"}, // 1.03%
			{4060.8590514775, "ItemCompass"}, // 1.01%
			{4162.07362637629, "ItemWatch"}, // 1.01%
			{4263.28820127507, "Binocular"}, // 1.01%
			{4361.97241180139, "Exile_Item_Magazine03"}, // 0.99%
			{4460.65662232771, "Exile_Item_Magazine02"}, // 0.99%
			{4559.34083285402, "Exile_Item_Magazine01"}, // 0.99%
			{4658.02504338034, "Exile_Item_Magazine04"}, // 0.99%
			{4756.21828768513, "Exile_Weapon_CZ550"}, // 0.98%
			{4846.4438515949, "hlc_rifle_hk53"}, // 0.90%
			{4935.53376387561, "hgun_P07_khk_F"}, // 0.89%
			{5024.62367615631, "hgun_Pistol_01_F"}, // 0.89%
			{5113.71358843701, "hgun_Rook40_F"}, // 0.89%
			{5202.80350071771, "CUP_hgun_SA61"}, // 0.89%
			{5287.14897980003, "Exile_Item_Bandage"}, // 0.84%
			{5371.49445888235, "Exile_Item_Heatpack"}, // 0.84%
			{5453.73130098762, "CUP_hgun_Duty_M3X"}, // 0.82%
			{5535.96814309288, "hgun_P07_F"}, // 0.82%
			{5613.56598384862, "Exile_Item_ExtensionCord"}, // 0.78%
			{5688.75395377343, "CUP_smg_bizon"}, // 0.75%
			{5763.94192369824, "CUP_smg_MP5A5"}, // 0.75%
			{5838.07090813115, "10Rnd_9x21_Mag"}, // 0.74%
			{5912.19989256407, "30Rnd_9x21_Mag"}, // 0.74%
			{5986.32887699698, "Exile_Magazine_8Rnd_9x18"}, // 0.74%
			{6060.45786142989, "Exile_Magazine_7Rnd_45ACP"}, // 0.74%
			{6134.5868458628, "9Rnd_45ACP_Mag"}, // 0.74%
			{6208.71583029572, "11Rnd_45ACP_Mag"}, // 0.74%
			{6282.84481472863, "hlc_30Rnd_9x19_B_MP5"}, // 0.74%
			{6356.97379916154, "Exile_Magazine_6Rnd_45ACP"}, // 0.74%
			{6425.50450091593, "CUP_hgun_PB6P9_snds"}, // 0.69%
			{6492.98088418179, "Exile_Item_FuelCanisterEmpty"}, // 0.67%
			{6560.45726744764, "Exile_Item_Carwheel"}, // 0.67%
			{6627.9336507135, "Exile_Item_DuctTape"}, // 0.67%
			{6694.64973670312, "CUP_18Rnd_9x19_Phantom"}, // 0.67%
			{6761.36582269275, "CUP_30Rnd_9x19_UZI"}, // 0.67%
			{6828.08190868237, "hlc_30Rnd_9x19_GD_MP5"}, // 0.67%
			{6894.79799467199, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.67%
			{6955.52673961126, "Exile_Item_CamoTentKit"}, // 0.61%
			{7016.25548455053, "Exile_Item_WaterCanisterEmpty"}, // 0.61%
			{7075.55867209686, "6Rnd_45ACP_Cylinder"}, // 0.59%
			{7134.47461867974, "hlc_rifle_L1A1SLR"}, // 0.59%
			{7189.29918008325, "CUP_hgun_MicroUzi"}, // 0.55%
			{7244.12374148676, "Exile_Item_PlasticBottleDirtyWater"}, // 0.55%
			{7296.10554785453, "hlc_20Rnd_762x51_B_fal"}, // 0.52%
			{7346.71283530392, "FlareGreen_F"}, // 0.51%
			{7397.32012275331, "FlareRed_F"}, // 0.51%
			{7447.92741020271, "FlareWhite_F"}, // 0.51%
			{7498.5346976521, "Chemlight_yellow"}, // 0.51%
			{7549.14198510149, "SmokeShell"}, // 0.51%
			{7599.74927255088, "SmokeShellRed"}, // 0.51%
			{7650.35656000028, "SmokeShellGreen"}, // 0.51%
			{7700.96384744967, "SmokeShellYellow"}, // 0.51%
			{7751.57113489906, "Exile_Item_Rope"}, // 0.51%
			{7802.17842234846, "SmokeShellPurple"}, // 0.51%
			{7852.78570979785, "ItemRadio"}, // 0.51%
			{7903.39299724724, "FlareYellow_F"}, // 0.51%
			{7954.00028469664, "Chemlight_green"}, // 0.51%
			{8004.60757214603, "Exile_Item_Hammer"}, // 0.51%
			{8055.21485959542, "SmokeShellBlue"}, // 0.51%
			{8105.82214704481, "Chemlight_red"}, // 0.51%
			{8156.42943449421, "SmokeShellOrange"}, // 0.51%
			{8207.0367219436, "Chemlight_blue"}, // 0.51%
			{8257.64400939299, "Exile_Item_OilCanister"}, // 0.51%
			{8305.61550062106, "hgun_ACPC2_F"}, // 0.48%
			{8353.58699184913, "hgun_Pistol_heavy_02_F"}, // 0.48%
			{8398.69977380402, "CUP_smg_EVO"}, // 0.45%
			{8443.81255575891, "CUP_smg_bizon_snds"}, // 0.45%
			{8488.28994641866, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.44%
			{8532.14959554146, "Exile_Item_MountainDupe"}, // 0.44%
			{8576.00924466427, "Exile_Item_ChocolateMilk"}, // 0.44%
			{8617.1276657169, "Exile_Weapon_Makarov"}, // 0.41%
			{8656.11402049273, "hlc_optic_kobra"}, // 0.39%
			{8693.39472224712, "Exile_Item_EnergyDrink"}, // 0.37%
			{8730.45921446357, "16Rnd_9x21_Mag"}, // 0.37%
			{8764.72456534077, "Exile_Weapon_Colt1911"}, // 0.34%
			{8798.46275697369, "Exile_Melee_Axe"}, // 0.34%
			{8832.20094860662, "Exile_Item_ZipTie"}, // 0.34%
			{8865.93914023955, "Exile_Item_Wrench"}, // 0.34%
			{8899.67733187248, "Exile_Item_FuelCanisterFull"}, // 0.34%
			{8931.2562792409, "H_StrawHat_dark"}, // 0.32%
			{8962.83522660932, "H_Cap_press"}, // 0.32%
			{8994.41417397775, "H_Cap_tan"}, // 0.32%
			{9025.99312134617, "H_Hat_blue"}, // 0.32%
			{9057.57206871459, "H_Cap_red"}, // 0.32%
			{9089.15101608301, "H_Hat_checker"}, // 0.32%
			{9120.72996345143, "H_Hat_grey"}, // 0.32%
			{9152.30891081985, "H_Hat_tan"}, // 0.32%
			{9183.88785818828, "H_StrawHat"}, // 0.32%
			{9215.4668055567, "H_Hat_brown"}, // 0.32%
			{9246.16855994266, "Exile_Item_Beer"}, // 0.31%
			{9276.24374791259, "hgun_PDW2000_F"}, // 0.30%
			{9306.31893588251, "SMG_05_F"}, // 0.30%
			{9333.73121658427, "Exile_Weapon_TaurusGold"}, // 0.27%
			{9360.04700605795, "Exile_Item_PlasticBottleFreshWater"}, // 0.26%
			{9386.36279553164, "H_Cap_headphones"}, // 0.26%
			{9412.67858500532, "H_Cap_oli"}, // 0.26%
			{9438.99437447901, "H_Cap_grn"}, // 0.26%
			{9465.31016395269, "H_Cap_blu"}, // 0.26%
			{9491.62595342638, "H_Cap_blk_Raven"}, // 0.26%
			{9517.94174290006, "H_Cap_blk"}, // 0.26%
			{9544.25753237375, "H_Beret_blk_POLICE"}, // 0.26%
			{9570.57332184743, "H_Bandanna_surfer"}, // 0.26%
			{9596.51846639895, "6Rnd_RedSignal_F"}, // 0.26%
			{9622.46361095047, "6Rnd_GreenSignal_F"}, // 0.26%
			{9643.02282147679, "Exile_Weapon_Taurus"}, // 0.21%
			{9663.5820320031, "hgun_Pistol_Signal_F"}, // 0.21%
			{9683.68437118439, "Exile_Item_InstantCoffee"}, // 0.20%
			{9700.55346700085, "Exile_Item_MobilePhone"}, // 0.17%
			{9717.00083542191, "Exile_Item_Moobar"}, // 0.16%
			{9733.44820384296, "Exile_Item_Raisins"}, // 0.16%
			{9748.79908103594, "Exile_Item_PowerDrink"}, // 0.15%
			{9763.8366750209, "SMG_02_F"}, // 0.15%
			{9778.87426900587, "SMG_01_F"}, // 0.15%
			{9793.4941520468, "Exile_Item_SeedAstics"}, // 0.15%
			{9808.11403508774, "Exile_Item_CockONut"}, // 0.15%
			{9820.90643274856, "Exile_Item_Noodles"}, // 0.13%
			{9833.69883040937, "Exile_Item_DsNuts"}, // 0.13%
			{9846.49122807019, "Exile_Item_CatFood"}, // 0.13%
			{9859.28362573101, "Exile_Item_BeefParts"}, // 0.13%
			{9872.07602339183, "Exile_Item_Dogfood"}, // 0.13%
			{9884.86842105265, "Exile_Item_BBQSandwich"}, // 0.13%
			{9897.66081871346, "Exile_Item_MacasCheese"}, // 0.13%
			{9910.45321637428, "Exile_Item_ChristmasTinner"}, // 0.13%
			{9923.2456140351, "Exile_Item_SausageGravy"}, // 0.13%
			{9936.03801169592, "Exile_Item_Surstromming"}, // 0.13%
			{9948.83040935674, "Exile_Item_Cheathas"}, // 0.13%
			{9959.79532163744, "Exile_Item_GloriousKnakworst"}, // 0.11%
			{9970.76023391814, "Exile_Item_PlasticBottleCoffee"}, // 0.11%
			{9979.89766081873, "Exile_Item_Matches"}, // 0.09%
			{9989.03508771931, "Exile_Item_CanOpener"}, // 0.09%
			{9994.51754385966, "Exile_Item_EMRE"}, // 0.05%
			{10000, "Exile_Item_CookingPot"} // 0.05%
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

