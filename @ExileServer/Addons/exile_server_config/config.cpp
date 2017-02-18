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

	  Binocular
	  Exile_Item_PlasticBottleFreshWater
	  ItemMap
	  Exile_Item_SausageGravy
	  TRYK_OVERALL_SAGE_BLKboots_nk_blk
	  Chemlight_blue
	  TRYK_shirts_TAN_PAD
	  Exile_Item_PlasticBottleDirtyWater
	  B_AssaultPack_khk
	  9Rnd_45ACP_Mag
	  Exile_Item_PlasticBottleEmpty
	  ItemMap
	  Exile_Weapon_M1014
	  U_I_C_Soldier_Bandit_2_F
	  hlc_rifle_saiga12k
	  hlc_30rnd_556x45_b_hk33
	  Exile_Item_Cheathas
	  hgun_P07_F
	  CUP_20Rnd_B_765x17_Ball_M
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_SausageGravy
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  TRYK_B_Belt_BLK
	  ItemRadio
	  Exile_Item_PlasticBottleEmpty
	  H_Hat_tan
	  hlc_rifle_saiga12k
	  Exile_Item_SeedAstics
	  30Rnd_9x21_Mag
	  U_C_Poor_2
	  B_OutdoorPack_tan
	  ItemCompass
	  hlc_30Rnd_9x19_B_MP5
	  TRYK_U_B_fleece_UCP
	  CUP_sgun_Saiga12K
	  U_C_Poor_shorts_1
	  Exile_Magazine_8Rnd_9x18
	  B_AssaultPack_blk
	  U_C_Poloshirt_salmon
	  TRYK_B_Belt_BLK
	  TRYK_B_Kitbag_Base_JSDF
	  B_AssaultPack_dgtl
	  ItemMap
	  B_AssaultPack_blk
	  H_Cap_tan
	  Exile_Magazine_8Rnd_74Slug
	  B_AssaultPack_khk
	  Exile_Item_Magazine04
	  ItemCompass
	  Exile_Magazine_6Rnd_45ACP
	  TRYK_B_TRYK_3C_T
	  CUP_smg_MP5SD6
	  FlareGreen_F
	  TRYK_R_CAP_TAN
	  Exile_Item_ToiletPaper
	  B_AssaultPack_tna_F
	  V_TacVest_blk_POLICE
	  Exile_Item_MobilePhone
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_PlasticBottleCoffee
	  Exile_Weapon_M1014
	  FlareYellow_F
	  hlc_30Rnd_9x19_B_MP5
	  Exile_Weapon_M1014
	  U_C_Poloshirt_salmon
	  ItemCompass
	  hgun_Pistol_01_F
	  hlc_10rnd_12g_buck_S12
	  U_C_Poor_1
	  Exile_Item_Matches
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  TRYK_B_Medbag_OD
	  U_C_Poloshirt_stripped
	  U_C_Journalist
	  Chemlight_blue
	  SMG_01_F
	  Chemlight_blue
	  Exile_Item_Can_Empty
	  hlc_rifle_hk53
	  B_HuntingBackpack
	  30Rnd_9x21_Mag_SMG_02
	  Exile_Item_Noodles
	  CUP_muzzle_snds_MicroUzi
	  ItemMap
	  CUP_muzzle_snds_M9
	  Exile_Item_PlasticBottleEmpty
	  30Rnd_9x21_Mag_SMG_02
	  H_StrawHat
	  optic_Aco
	  Exile_Item_Beer
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  CUP_sgun_Saiga12K
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_ZipTie
	  H_Hat_checker
	  Exile_Item_PlasticBottleEmpty
	  U_I_C_Soldier_Bandit_2_F
	  Exile_Item_Heatpack
	  Exile_Item_CanOpener
	*/
	class CivillianLowerClass
	{
		count = 545;
		half = 9307.2969760369;
		halfIndex = 272;
		sum = 9999.99999999989;
		items[] = 
		{
			{246.188186249569, "ItemMap"}, // 2.46%
			{443.138735249225, "Exile_Item_Heatpack"}, // 1.97%
			{640.08928424888, "ItemCompass"}, // 1.97%
			{836.014049139162, "Exile_Item_Can_Empty"}, // 1.96%
			{1031.93881402944, "Exile_Item_ToiletPaper"}, // 1.96%
			{1227.86357891973, "Exile_Item_PlasticBottleEmpty"}, // 1.96%
			{1403.31859225431, "Exile_Weapon_LeeEnfield"}, // 1.75%
			{1567.07660469992, "hlc_rifle_saiga12k"}, // 1.64%
			{1714.78951644966, "Binocular"}, // 1.48%
			{1835.35860253599, "Exile_Item_PlasticBottleDirtyWater"}, // 1.21%
			{1952.32861142571, "Exile_Weapon_M1014"}, // 1.17%
			{2069.29862031543, "CUP_sgun_Saiga12K"}, // 1.17%
			{2186.26862920515, "hlc_rifle_M1903A1"}, // 1.17%
			{2286.89171833398, "hlc_10rnd_12g_buck_S12"}, // 1.01%
			{2385.36699283381, "ItemRadio"}, // 0.98%
			{2481.82226170287, "Exile_Item_MountainDupe"}, // 0.96%
			{2578.27753057194, "Exile_Item_ChocolateMilk"}, // 0.96%
			{2663.42014445018, "hlc_10rnd_12g_slug_S12"}, // 0.85%
			{2745.40712298888, "Exile_Item_EnergyDrink"}, // 0.82%
			{2823.777028945, "Chemlight_red"}, // 0.78%
			{2902.14693490111, "Chemlight_green"}, // 0.78%
			{2980.51684085722, "Chemlight_yellow"}, // 0.78%
			{3058.88674681333, "FlareYellow_F"}, // 0.78%
			{3137.25665276945, "FlareGreen_F"}, // 0.78%
			{3215.62655872556, "FlareRed_F"}, // 0.78%
			{3293.99646468167, "FlareWhite_F"}, // 0.78%
			{3372.36637063779, "V_Rangemaster_belt"}, // 0.78%
			{3450.7362765939, "Chemlight_blue"}, // 0.78%
			{3528.13865284685, "Exile_Magazine_8Rnd_74Slug"}, // 0.77%
			{3605.5410290998, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.77%
			{3682.94340535275, "Exile_Magazine_10Rnd_303"}, // 0.77%
			{3760.3457816057, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.77%
			{3837.74815785865, "Exile_Magazine_5Rnd_22LR"}, // 0.77%
			{3910.08960951045, "Exile_Item_PlasticBottleCoffee"}, // 0.72%
			{3977.60829771879, "Exile_Item_Beer"}, // 0.68%
			{4041.00867107655, "muzzle_snds_L"}, // 0.63%
			{4104.4090444343, "muzzle_snds_acp"}, // 0.63%
			{4163.18647390139, "CUP_hgun_Phantom"}, // 0.59%
			{4221.67147834625, "Exile_Weapon_CZ550"}, // 0.58%
			{4279.54463966768, "Exile_Item_PlasticBottleFreshWater"}, // 0.58%
			{4328.52583089025, "Exile_Item_Magazine04"}, // 0.49%
			{4377.50702211282, "Exile_Item_Magazine03"}, // 0.49%
			{4426.48821333539, "Exile_Item_Magazine02"}, // 0.49%
			{4475.46940455796, "Exile_Item_Magazine01"}, // 0.49%
			{4524.45059578054, "hlc_smg_mp5k"}, // 0.49%
			{4573.43178700311, "hlc_smg_mp5k_PDW"}, // 0.49%
			{4622.41297822568, "hgun_Pistol_heavy_01_F"}, // 0.49%
			{4666.56503791926, "Exile_Magazine_6Rnd_45ACP"}, // 0.44%
			{4710.71709761284, "30Rnd_9x21_Mag"}, // 0.44%
			{4754.86915730643, "11Rnd_45ACP_Mag"}, // 0.44%
			{4799.02121700001, "Exile_Magazine_8Rnd_9x18"}, // 0.44%
			{4843.1732766936, "9Rnd_45ACP_Mag"}, // 0.44%
			{4887.32533638718, "10Rnd_9x21_Mag"}, // 0.44%
			{4931.47739608077, "hlc_30Rnd_9x19_B_MP5"}, // 0.44%
			{4975.62945577435, "Exile_Magazine_7Rnd_45ACP"}, // 0.44%
			{5018.07982150058, "hgun_P07_khk_F"}, // 0.42%
			{5060.53018722681, "hgun_Rook40_F"}, // 0.42%
			{5102.98055295303, "CUP_hgun_SA61"}, // 0.42%
			{5145.43091867926, "hgun_Pistol_01_F"}, // 0.42%
			{5185.62061404137, "Exile_Item_CanOpener"}, // 0.40%
			{5225.81030940348, "Exile_Item_Matches"}, // 0.40%
			{5265.54716312771, "CUP_30Rnd_9x19_UZI"}, // 0.40%
			{5305.28401685193, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.40%
			{5345.02087057616, "CUP_18Rnd_9x19_Phantom"}, // 0.40%
			{5384.75772430038, "hlc_30Rnd_9x19_GD_MP5"}, // 0.40%
			{5423.94267727844, "V_TacVest_blk_POLICE"}, // 0.39%
			{5463.1276302565, "V_Press_F"}, // 0.39%
			{5502.31258323455, "hgun_P07_F"}, // 0.39%
			{5541.49753621261, "CUP_hgun_Duty_M3X"}, // 0.39%
			{5579.11509107155, "H_StrawHat_dark"}, // 0.38%
			{5616.73264593048, "H_StrawHat"}, // 0.38%
			{5654.35020078941, "H_Hat_tan"}, // 0.38%
			{5691.96775564835, "H_Hat_grey"}, // 0.38%
			{5729.58531050728, "H_Hat_blue"}, // 0.38%
			{5767.20286536622, "H_Hat_brown"}, // 0.38%
			{5804.82042022515, "H_Cap_tan"}, // 0.38%
			{5842.43797508409, "H_Cap_red"}, // 0.38%
			{5880.05552994302, "H_Hat_checker"}, // 0.38%
			{5917.67308480196, "CUP_smg_MP5SD6"}, // 0.38%
			{5955.29063966089, "H_Cap_press"}, // 0.38%
			{5991.46136548679, "Exile_Item_Moobar"}, // 0.36%
			{6027.63209131269, "Exile_Item_Raisins"}, // 0.36%
			{6062.95373906755, "6Rnd_45ACP_Cylinder"}, // 0.35%
			{6098.17616871075, "CUP_muzzle_snds_MicroUzi"}, // 0.35%
			{6133.39859835395, "CUP_acc_Glock17_Flashlight"}, // 0.35%
			{6168.62102799714, "CUP_acc_CZ_M3X"}, // 0.35%
			{6203.71203066406, "hlc_rifle_L1A1SLR"}, // 0.35%
			{6237.47137476823, "Exile_Item_PowerDrink"}, // 0.34%
			{6270.46922990765, "U_C_Poor_shorts_1"}, // 0.33%
			{6303.46708504706, "U_C_Poor_2"}, // 0.33%
			{6336.46494018648, "U_C_Poor_1"}, // 0.33%
			{6369.4627953259, "U_C_HunterBody_grn"}, // 0.33%
			{6402.46065046531, "U_Rangemaster"}, // 0.33%
			{6435.45850560473, "U_C_Scientist"}, // 0.33%
			{6468.45636074415, "U_C_Journalist"}, // 0.33%
			{6501.11048822586, "CUP_hgun_PB6P9_snds"}, // 0.33%
			{6533.35410667637, "hlc_rifle_hk53"}, // 0.32%
			{6565.58098389197, "B_OutdoorPack_blk"}, // 0.32%
			{6597.73274018166, "Exile_Item_InstantCoffee"}, // 0.32%
			{6629.88449647135, "Exile_Item_SeedAstics"}, // 0.32%
			{6662.03625276103, "Exile_Item_CockONut"}, // 0.32%
			{6694.18800905072, "Exile_Item_EMRE"}, // 0.32%
			{6725.8881957296, "CUP_muzzle_snds_M9"}, // 0.32%
			{6757.23615811204, "H_Cap_headphones"}, // 0.31%
			{6788.58412049449, "H_Cap_blk_Raven"}, // 0.31%
			{6819.93208287693, "H_Cap_blk"}, // 0.31%
			{6851.28004525938, "H_Cap_blu"}, // 0.31%
			{6882.62800764182, "H_Cap_oli"}, // 0.31%
			{6913.97597002427, "Exile_Item_ZipTie"}, // 0.31%
			{6945.32393240671, "H_Beret_blk_POLICE"}, // 0.31%
			{6976.67189478916, "H_Bandanna_surfer"}, // 0.31%
			{7008.0198571716, "H_Cap_grn"}, // 0.31%
			{7038.98080767278, "hlc_20Rnd_762x51_B_fal"}, // 0.31%
			{7068.64339573359, "hlc_30Rnd_9x19_B_MP5"}, // 0.30%
			{7097.64758522763, "B_OutdoorPack_blu"}, // 0.29%
			{7126.65177472167, "B_OutdoorPack_tan"}, // 0.29%
			{7154.78456147514, "Exile_Item_DsNuts"}, // 0.28%
			{7182.91734822862, "Exile_Item_MacasCheese"}, // 0.28%
			{7211.0501349821, "Exile_Item_Noodles"}, // 0.28%
			{7239.18292173557, "Exile_Item_Cheathas"}, // 0.28%
			{7267.31570848905, "Exile_Item_ChristmasTinner"}, // 0.28%
			{7295.44849524252, "Exile_Item_BeefParts"}, // 0.28%
			{7323.581281996, "Exile_Item_SausageGravy"}, // 0.28%
			{7351.71406874948, "Exile_Item_Surstromming"}, // 0.28%
			{7379.84685550295, "Exile_Item_BBQSandwich"}, // 0.28%
			{7407.97964225643, "Exile_Item_CatFood"}, // 0.28%
			{7436.11242900991, "Exile_Item_Dogfood"}, // 0.28%
			{7463.0784181561, "30Rnd_9x21_Mag_SMG_02"}, // 0.27%
			{7490.04440730229, "CUP_30Rnd_9x19_EVO"}, // 0.27%
			{7517.01039644848, "CUP_30Rnd_9x19_MP5"}, // 0.27%
			{7543.97638559467, "CUP_64Rnd_9x19_Bizon_M"}, // 0.27%
			{7570.94237474086, "hlc_30Rnd_9x19_GD_MP5"}, // 0.27%
			{7597.81205678295, "CUP_smg_MP5A5"}, // 0.27%
			{7624.68173882505, "CUP_smg_bizon"}, // 0.27%
			{7651.1729746412, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.26%
			{7677.29627662657, "CUP_hgun_MicroUzi"}, // 0.26%
			{7703.07777839905, "B_HuntingBackpack"}, // 0.26%
			{7728.74277684081, "U_C_Poloshirt_salmon"}, // 0.26%
			{7754.40777528258, "U_C_Poloshirt_burgundy"}, // 0.26%
			{7780.07277372435, "U_C_Poloshirt_stripped"}, // 0.26%
			{7805.73777216612, "U_C_Poloshirt_tricolour"}, // 0.26%
			{7831.40277060789, "U_C_Poloshirt_blue"}, // 0.26%
			{7856.05847135812, "optic_MRD"}, // 0.25%
			{7880.71417210836, "optic_Yorris"}, // 0.25%
			{7905.33299073332, "Exile_Item_MobilePhone"}, // 0.25%
			{7929.95180935828, "ItemGPS"}, // 0.25%
			{7954.06562657554, "Exile_Item_GloriousKnakworst"}, // 0.24%
			{7977.28633945143, "hlc_optic_kobra"}, // 0.23%
			{8000.14422868863, "hgun_Pistol_heavy_02_F"}, // 0.23%
			{8023.00211792583, "hgun_ACPC2_F"}, // 0.23%
			{8045.56093197674, "B_AssaultPack_tna_F"}, // 0.23%
			{8068.11974602766, "B_AssaultPack_cbr"}, // 0.23%
			{8090.67856007858, "B_AssaultPack_blk"}, // 0.23%
			{8113.2373741295, "B_AssaultPack_sgg"}, // 0.23%
			{8135.79618818042, "B_AssaultPack_rgr"}, // 0.23%
			{8158.35500223133, "B_AssaultPack_dgtl"}, // 0.23%
			{8180.91381628225, "B_AssaultPack_mcamo"}, // 0.23%
			{8203.47263033317, "B_AssaultPack_khk"}, // 0.23%
			{8225.54866017996, "16Rnd_9x21_Mag"}, // 0.22%
			{8245.14113666899, "Exile_Weapon_Makarov"}, // 0.20%
			{8263.47327841311, "U_C_Man_casual_6_F"}, // 0.18%
			{8281.80542015723, "U_I_C_Soldier_Bandit_1_F"}, // 0.18%
			{8300.13756190135, "U_I_C_Soldier_Bandit_2_F"}, // 0.18%
			{8318.46970364547, "U_I_C_Soldier_Bandit_3_F"}, // 0.18%
			{8336.80184538959, "U_I_C_Soldier_Bandit_4_F"}, // 0.18%
			{8355.13398713371, "U_C_man_sport_1_F"}, // 0.18%
			{8373.46612887783, "U_I_C_Soldier_Bandit_5_F"}, // 0.18%
			{8391.79827062195, "U_C_man_sport_3_F"}, // 0.18%
			{8410.13041236607, "U_C_Man_casual_1_F"}, // 0.18%
			{8428.46255411019, "U_C_Man_casual_2_F"}, // 0.18%
			{8446.79469585431, "U_C_Man_casual_3_F"}, // 0.18%
			{8465.12683759843, "U_C_Man_casual_4_F"}, // 0.18%
			{8483.45897934255, "U_C_Man_casual_5_F"}, // 0.18%
			{8501.79112108668, "U_C_man_sport_2_F"}, // 0.18%
			{8518.11818482753, "Exile_Weapon_Colt1911"}, // 0.16%
			{8534.29777831525, "hlc_30rnd_556x45_b_hk33"}, // 0.16%
			{8550.4195875405, "CUP_smg_EVO"}, // 0.16%
			{8566.54139676576, "CUP_smg_bizon_snds"}, // 0.16%
			{8582.65483537356, "B_Kitbag_mcamo"}, // 0.16%
			{8598.76827398136, "B_Kitbag_sgg"}, // 0.16%
			{8614.88171258916, "B_Kitbag_cbr"}, // 0.16%
			{8630.33493348191, "6Rnd_RedSignal_F"}, // 0.15%
			{8645.78815437467, "6Rnd_GreenSignal_F"}, // 0.15%
			{8659.7205821002, "optic_ACO_grn_smg"}, // 0.14%
			{8673.65300982573, "optic_Holosight_smg"}, // 0.14%
			{8687.58543755126, "optic_Aco"}, // 0.14%
			{8701.51786527679, "optic_ACO_grn"}, // 0.14%
			{8715.45029300232, "optic_Aco_smg"}, // 0.14%
			{8729.38272072785, "optic_Holosight_smg_blk_F"}, // 0.14%
			{8743.17214699579, "TRYK_B_Kitbag_Base"}, // 0.14%
			{8756.96157326373, "TRYK_B_Belt"}, // 0.14%
			{8770.75099953167, "TRYK_B_Kitbag_blk"}, // 0.14%
			{8783.81265052435, "Exile_Weapon_TaurusGold"}, // 0.13%
			{8795.86955913299, "Exile_Item_CookingPot"}, // 0.12%
			{8807.82039523187, "TRYK_B_Belt_CYT"}, // 0.12%
			{8819.77123133075, "TRYK_B_Kitbag_aaf"}, // 0.12%
			{8831.72206742963, "TRYK_B_tube_cyt"}, // 0.12%
			{8842.75360844398, "TRYK_B_Belt_BLK"}, // 0.11%
			{8853.78514945833, "TRYK_B_Belt_br"}, // 0.11%
			{8864.81669047268, "TRYK_B_Alicepack"}, // 0.11%
			{8875.84823148703, "TRYK_B_Kitbag_Base_JSDF"}, // 0.11%
			{8886.87977250138, "TRYK_B_Belt_GR"}, // 0.11%
			{8897.91131351573, "TRYK_B_Belt_tan"}, // 0.11%
			{8908.94285453008, "TRYK_B_BAF_BAG_BLK"}, // 0.11%
			{8919.97439554443, "TRYK_B_FieldPack_Wood"}, // 0.11%
			{8930.76079120291, "30Rnd_45ACP_Mag_SMG_01"}, // 0.11%
			{8941.54718686138, "hlc_30rnd_556x45_t_hk33"}, // 0.11%
			{8952.33358251986, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.11%
			{8963.11997817833, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.11%
			{8973.90637383681, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.11%
			{8984.65424665364, "SMG_05_F"}, // 0.11%
			{8995.40211947048, "hgun_PDW2000_F"}, // 0.11%
			{9005.85144026463, "CUP_optic_ACOG"}, // 0.10%
			{9015.96368619445, "TRYK_B_BAF_BAG_OD"}, // 0.10%
			{9026.07593212427, "TRYK_B_Belt_AOR2"}, // 0.10%
			{9036.18817805409, "TRYK_B_Belt_AOR1"}, // 0.10%
			{9046.30042398391, "TRYK_B_BAF_BAG_CYT"}, // 0.10%
			{9056.09666222843, "Exile_Weapon_Taurus"}, // 0.10%
			{9065.89290047294, "hgun_Pistol_Signal_F"}, // 0.10%
			{9075.08585131824, "TRYK_B_AssaultPack_UCP"}, // 0.09%
			{9084.27880216353, "TRYK_B_tube_od"}, // 0.09%
			{9093.47175300882, "TRYK_B_tube_blk"}, // 0.09%
			{9102.66470385411, "TRYK_B_AssaultPack_Type2camo"}, // 0.09%
			{9110.93835961487, "TRYK_B_BAF_BAG_mcamo"}, // 0.08%
			{9119.02815635873, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.08%
			{9127.11795310259, "hlc_30rnd_556x45_epr_hk33"}, // 0.08%
			{9134.47231377882, "TRYK_B_BAF_BAG_rgr"}, // 0.07%
			{9141.82667445505, "TRYK_B_Medbag"}, // 0.07%
			{9149.18103513129, "TRYK_B_Medbag_OD"}, // 0.07%
			{9156.53539580752, "TRYK_B_Medbag_BK"}, // 0.07%
			{9163.88975648376, "TRYK_B_Medbag_ucp"}, // 0.07%
			{9169.26369289218, "SMG_02_F"}, // 0.05%
			{9174.6376293006, "SMG_01_F"}, // 0.05%
			{9179.7189698364, "TRYK_Hrp_vest_od"}, // 0.05%
			{9184.6427335614, "ItemWatch"}, // 0.05%
			{9189.3332017483, "TRYK_LOC_AK_chestrig_OD"}, // 0.05%
			{9194.0236699352, "TRYK_Hrp_vest_ucp"}, // 0.05%
			{9198.62014535784, "TRYK_B_Coyotebackpack_BLK"}, // 0.05%
			{9203.21662078049, "TRYK_B_Coyotebackpack_OD"}, // 0.05%
			{9207.81309620313, "TRYK_B_Coyotebackpack"}, // 0.05%
			{9212.40957162578, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.05%
			{9217.00604704843, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.05%
			{9220.91477053751, "TRYK_V_Sheriff_BA_TB"}, // 0.04%
			{9224.58119888633, "U_NikosAgedBody"}, // 0.04%
			{9228.24762723516, "U_OrestesBody"}, // 0.04%
			{9231.91405558398, "U_NikosBody"}, // 0.04%
			{9235.04103437525, "TRYK_LOC_AK_chestrig_TAN"}, // 0.03%
			{9237.82010905454, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9240.59918373384, "TRYK_H_GR"}, // 0.03%
			{9243.37825841313, "TRYK_H_AOR1"}, // 0.03%
			{9246.15733309243, "TRYK_H_AOR2"}, // 0.03%
			{9248.93640777172, "TRYK_H_EARMUFF"}, // 0.03%
			{9251.71548245101, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9254.49455713031, "TRYK_H_Bandana_H"}, // 0.03%
			{9257.2736318096, "TRYK_H_Bandana_wig"}, // 0.03%
			{9260.0527064889, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9262.83178116819, "TRYK_H_wig"}, // 0.03%
			{9265.61085584749, "TRYK_H_headset2"}, // 0.03%
			{9268.38993052678, "TRYK_H_woolhat"}, // 0.03%
			{9271.16900520607, "TRYK_H_WH"}, // 0.03%
			{9273.94807988537, "TRYK_H_woolhat_CW"}, // 0.03%
			{9276.72715456466, "TRYK_H_woolhat_br"}, // 0.03%
			{9279.50622924396, "TRYK_H_woolhat_cu"}, // 0.03%
			{9282.28530392325, "TRYK_H_woolhat_tan"}, // 0.03%
			{9285.06437860255, "TRYK_H_headsetcap"}, // 0.03%
			{9287.84345328184, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9290.62252796114, "TRYK_H_headsetcap_od"}, // 0.03%
			{9293.40160264043, "TRYK_H_pakol"}, // 0.03%
			{9296.18067731972, "TRYK_H_pakol2"}, // 0.03%
			{9298.95975199902, "TRYK_R_CAP_TAN"}, // 0.03%
			{9301.73882667831, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9304.51790135761, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9307.2969760369, "TRYK_H_woolhat_WH"}, // 0.03%
			{9310.0760507162, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9312.85512539549, "TRYK_H_PASGT_OD"}, // 0.03%
			{9315.63420007478, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9318.41327475408, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9321.19234943337, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9323.97142411267, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9326.75049879196, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9329.52957347126, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9332.30864815055, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{9335.08772282985, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9337.86679750914, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9340.64587218843, "TRYK_headset2"}, // 0.03%
			{9343.42494686773, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9346.20402154702, "TRYK_TAC_SET_bn"}, // 0.03%
			{9348.98309622632, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9351.76217090561, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9354.54124558491, "TRYK_TAC_SET_TAN"}, // 0.03%
			{9357.3203202642, "TRYK_R_CAP_BLK"}, // 0.03%
			{9360.09939494349, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{9362.87846962279, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9365.65754430208, "TRYK_bandana_g"}, // 0.03%
			{9368.43661898138, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{9371.21569366067, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9373.99476833997, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{9376.77384301926, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{9379.55291769855, "TRYK_TAC_SET_MESH"}, // 0.03%
			{9382.33199237785, "TRYK_TAC_SET_OD"}, // 0.03%
			{9385.11106705714, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{9387.86895231073, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9390.61877357235, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9393.36859483397, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9396.11841609558, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9398.8682373572, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9401.61805861882, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9404.36787988044, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9407.11770114205, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9409.86752240367, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9412.61734366529, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9415.36716492691, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9418.11698618852, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9420.86680745014, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9423.61662871176, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9426.36644997338, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9429.11627123499, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9431.86609249661, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9434.61591375823, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9437.36573501984, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9440.11555628146, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9442.86537754308, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9445.6151988047, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9448.36502006631, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9451.11484132793, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9453.86466258955, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9456.61448385117, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9459.36430511278, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9462.1141263744, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9464.86394763602, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9467.61376889764, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9470.36359015925, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9473.11341142087, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9475.86323268249, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9478.61305394411, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9481.36287520572, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9484.11269646734, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9486.86251772896, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9489.61233899058, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9492.36216025219, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9495.11198151381, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9497.86180277543, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9500.61162403704, "TRYK_U_B_PCUHs"}, // 0.03%
			{9503.36144529866, "TRYK_U_taki_wh"}, // 0.03%
			{9506.11126656028, "TRYK_DMARPAT_T"}, // 0.03%
			{9508.8610878219, "TRYK_C_AOR2_T"}, // 0.03%
			{9511.61090908351, "TRYK_U_B_Sage_T"}, // 0.03%
			{9514.36073034513, "TRYK_U_B_Wood_T"}, // 0.03%
			{9517.11055160675, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9519.86037286837, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9522.61019412998, "TRYK_OVERALL_flesh"}, // 0.03%
			{9525.3600153916, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9528.10983665322, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9530.85965791484, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9533.60947917645, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9536.35930043807, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9539.10912169969, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9541.85894296131, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9544.60876422292, "TRYK_SUITS_BR_F"}, // 0.03%
			{9547.35858548454, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9550.10840674616, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9552.85822800778, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9555.60804926939, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9558.35787053101, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9561.10769179263, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9563.85751305424, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9566.60733431586, "TRYK_U_taki_COY"}, // 0.03%
			{9569.35715557748, "TRYK_U_taki_BL"}, // 0.03%
			{9572.1069768391, "TRYK_U_taki_BLK"}, // 0.03%
			{9574.85679810071, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9577.60661936233, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9580.35644062395, "TRYK_U_taki_G_WH"}, // 0.03%
			{9583.10626188557, "TRYK_U_taki_G_COY"}, // 0.03%
			{9585.85608314718, "TRYK_U_taki_G_BL"}, // 0.03%
			{9588.6059044088, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9591.35572567042, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9594.10554693204, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9596.85536819365, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9599.60518945527, "TRYK_B_USMC_R"}, // 0.03%
			{9602.35501071689, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9605.10483197851, "TRYK_ZARATAKI"}, // 0.03%
			{9607.85465324012, "TRYK_ZARATAKI2"}, // 0.03%
			{9610.60447450174, "TRYK_ZARATAKI3"}, // 0.03%
			{9613.35429576336, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9616.10411702498, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9618.85393828659, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9621.60375954821, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9624.35358080983, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9627.10340207145, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9629.85322333306, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9632.60304459468, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9635.3528658563, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9638.10268711791, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9640.85250837953, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9643.60232964115, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9646.35215090277, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9649.10197216438, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9651.851793426, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9654.60161468762, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9657.35143594924, "TRYK_U_B_fleece"}, // 0.03%
			{9660.10125721085, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9662.85107847247, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9665.60089973409, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9668.35072099571, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9671.10054225732, "TRYK_U_B_PCUs"}, // 0.03%
			{9673.85036351894, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9676.60018478056, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9679.35000604218, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9682.09982730379, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9684.84964856541, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9687.59946982703, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9690.34929108865, "TRYK_U_B_ACU"}, // 0.03%
			{9693.09911235026, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9695.84893361188, "TRYK_U_B_3c"}, // 0.03%
			{9698.5987548735, "TRYK_shirts_PAD"}, // 0.03%
			{9701.34857613511, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9704.09839739673, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9706.84821865835, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9709.59803991997, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9712.34786118158, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9715.0976824432, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9717.84750370482, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9720.59732496644, "TRYK_U_B_ODTAN"}, // 0.03%
			{9723.34714622805, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9726.09696748967, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9728.84678875129, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9731.59661001291, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9734.34643127452, "TRYK_U_B_BLK"}, // 0.03%
			{9737.09625253614, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9739.84607379776, "TRYK_U_B_3cr"}, // 0.03%
			{9742.59589505938, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9745.34571632099, "TRYK_hoodie_FR"}, // 0.03%
			{9748.09553758261, "TRYK_hoodie_Wood"}, // 0.03%
			{9750.84535884423, "TRYK_hoodie_3c"}, // 0.03%
			{9753.59518010585, "TRYK_T_PAD"}, // 0.03%
			{9756.34500136746, "TRYK_T_OD_PAD"}, // 0.03%
			{9759.09482262908, "TRYK_T_TAN_PAD"}, // 0.03%
			{9761.8446438907, "TRYK_T_BLK_PAD"}, // 0.03%
			{9764.59446515232, "TRYK_T_T2_PAD"}, // 0.03%
			{9767.34428641393, "TRYK_hoodie_Blk"}, // 0.03%
			{9770.09410767555, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9772.84392893717, "TRYK_U_hood_nc"}, // 0.03%
			{9775.59375019878, "TRYK_U_hood_mc"}, // 0.03%
			{9778.3435714604, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9781.09339272202, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9783.84321398364, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9786.59303524525, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9789.34285650687, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9792.09267776849, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9794.84249903011, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9797.59232029172, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9800.34214155334, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9803.09196281496, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9805.84178407658, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9808.59160533819, "TRYK_U_B_PCUGs"}, // 0.03%
			{9811.34142659981, "TRYK_U_B_PCUODs"}, // 0.03%
			{9814.09124786143, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9816.84106912305, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9819.59089038466, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9822.34071164628, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9825.0905329079, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9827.84035416952, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9830.59017543113, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9833.33999669275, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9836.08981795437, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9838.83963921598, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9841.5894604776, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9844.33928173922, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9847.08910300084, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9849.83892426245, "TRYK_U_pad_j_blk"}, // 0.03%
			{9852.58874552407, "TRYK_U_pad_j"}, // 0.03%
			{9855.33856678569, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9858.08838804731, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9860.82449448967, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9863.56060093202, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9866.29670737438, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9868.51996711782, "TRYK_H_LHS_HEL_G"}, // 0.02%
			{9870.74322686125, "TRYK_TAC_SET_WH"}, // 0.02%
			{9872.6975886058, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9874.65195035034, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9876.60631209488, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9878.56067383942, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9880.51503558396, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9882.4693973285, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9884.42375907304, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9886.37812081759, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9888.33248256213, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9890.28684430667, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9892.24120605121, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9894.19556779575, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9896.14992954029, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9898.10429128484, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9900.05865302938, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9902.01301477392, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9903.96737651846, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9905.921738263, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9907.87610000754, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9909.83046175208, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9911.78482349663, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9913.73918524117, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9915.69354698571, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9917.64790873025, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9919.60227047479, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9921.55663221933, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9923.51099396388, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9925.46535570842, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9927.41971745296, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9929.3740791975, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9931.32844094204, "TRYK_V_harnes_od_L"}, // 0.02%
			{9933.28280268658, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9935.23716443112, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9937.19152617567, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9939.14588792021, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9941.10024966475, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9943.05461140929, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9945.00897315383, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9946.96333489837, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9948.91769664292, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9950.87205838746, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9952.826420132, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9954.78078187654, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9956.73514362108, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9958.68950536562, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9960.64386711016, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9962.59822885471, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9964.55259059925, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9966.50695234379, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9968.46131408833, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9970.41567583287, "TRYK_V_tacv10_TN"}, // 0.02%
			{9972.37003757741, "TRYK_V_tacv10_OD"}, // 0.02%
			{9974.32439932195, "TRYK_V_tacv10_BK"}, // 0.02%
			{9976.2787610665, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9978.23312281104, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9980.18748455558, "TRYK_V_ChestRig_L"}, // 0.02%
			{9982.14184630012, "TRYK_V_ChestRig"}, // 0.02%
			{9984.09620804466, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9986.0505697892, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9988.00493153375, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9989.95929327829, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9991.91365502283, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9993.86801676737, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9995.82237851191, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9997.77674025645, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9998.88837012817, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9999.99999999989, "TRYK_H_Helmet_Winter_2"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Weapon_M1014
	  Exile_Item_ToiletPaper
	  Exile_Magazine_8Rnd_9x18
	  SmokeShellPurple
	  hlc_rifle_saiga12k
	  Exile_Item_ChocolateMilk
	  B_AssaultPack_blk
	  muzzle_snds_L
	  Exile_Item_PlasticBottleCoffee
	  TRYK_B_BAF_BAG_mcamo
	  Exile_Item_InstantCoffee
	  Exile_Item_PlasticBottleEmpty
	  TRYK_H_AOR2
	  Exile_Item_CockONut
	  Exile_Item_PlasticBottleCoffee
	  TRYK_B_AssaultPack_MARPAT_Desert
	  Chemlight_blue
	  hlc_10rnd_12g_buck_S12
	  TRYK_U_B_fleece
	  U_C_Scientist
	  Exile_Magazine_8Rnd_74Slug
	  Chemlight_green
	  hlc_10rnd_12g_buck_S12
	  Exile_Magazine_6Rnd_45ACP
	  FlareWhite_F
	  30Rnd_9x21_Mag_SMG_02_Tracer_Green
	  FlareYellow_F
	  Exile_Item_Magazine03
	  ItemMap
	  hlc_20Rnd_762x51_B_fal
	  H_Cap_tan
	  Exile_Item_EMRE
	  CUP_hgun_Phantom
	  B_OutdoorPack_blu
	  hlc_rifle_saiga12k
	  hgun_Pistol_heavy_01_F
	  FlareGreen_F
	  CUP_smg_MP5A5
	  TRYK_U_B_BLK_T_WH
	  CUP_30Rnd_9x19_MP5
	  CUP_30Rnd_9x19_UZI
	  CUP_18Rnd_9x19_Phantom
	  hgun_Pistol_01_F
	  CUP_sgun_Saiga12K
	  TRYK_B_Belt_BLK
	  Exile_Item_Heatpack
	  Exile_Item_SausageGravy
	  CUP_smg_bizon_snds
	  Exile_Item_Heatpack
	  TRYK_shirts_BLK_PAD_RED2
	  optic_Aco
	  ItemCompass
	  Exile_Weapon_M1014
	  optic_ACO_grn_smg
	  TRYK_Hrp_vest_ucp
	  U_C_man_sport_1_F
	  TRYK_V_Sheriff_BA_T5
	  TRYK_shirts_DENIM_WH_Sleeve
	  CUP_smg_bizon
	  Exile_Magazine_10Rnd_303
	  hgun_PDW2000_F
	  Exile_Weapon_LeeEnfield
	  muzzle_snds_acp
	  H_Hat_tan
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  ItemMap
	  U_C_Poor_shorts_1
	  Exile_Magazine_6Rnd_45ACP
	  Chemlight_green
	  U_C_Man_casual_4_F
	  Exile_Item_Dogfood
	  U_C_Man_casual_2_F
	  Exile_Item_MountainDupe
	  Exile_Item_EMRE
	  Exile_Item_PlasticBottleDirtyWater
	  U_Rangemaster
	  16Rnd_9x21_Mag
	  TRYK_U_Bts_PCUGs
	  optic_ACO_grn_smg
	  V_Rangemaster_belt
	  Exile_Item_PlasticBottleCoffee
	  B_AssaultPack_blk
	  Exile_Item_Moobar
	  ItemMap
	  TRYK_U_B_fleece_UCP
	  Exile_Item_ChristmasTinner
	  Exile_Magazine_5Rnd_22LR
	  U_C_Poor_shorts_1
	  CUP_30Rnd_9x19_EVO
	  Exile_Magazine_5Rnd_22LR
	  9Rnd_45ACP_Mag
	  Chemlight_red
	  TRYK_shirts_PAD
	  H_Bandanna_surfer
	  H_Hat_grey
	  CUP_smg_bizon
	  hlc_rifle_M1903A1
	  Exile_Item_CookingPot
	  TRYK_B_TRYK_MTP_T
	  TRYK_B_Belt_GR
	*/
	class CivillianUpperClass
	{
		count = 552;
		half = 9114.74119948422;
		halfIndex = 276;
		sum = 10000.0000000001;
		items[] = 
		{
			{201.369311316955, "ItemMap"}, // 2.01%
			{362.46476037052, "Exile_Item_Heatpack"}, // 1.61%
			{523.560209424084, "ItemCompass"}, // 1.61%
			{683.816619680494, "Exile_Item_Can_Empty"}, // 1.60%
			{844.073029936904, "Exile_Item_PlasticBottleEmpty"}, // 1.60%
			{1004.32944019331, "Exile_Item_ToiletPaper"}, // 1.60%
			{1147.84264340801, "Exile_Weapon_LeeEnfield"}, // 1.44%
			{1281.78829974173, "hlc_rifle_saiga12k"}, // 1.34%
			{1405.06246147743, "Exile_Item_PlasticBottleDirtyWater"}, // 1.23%
			{1525.8840482676, "Binocular"}, // 1.21%
			{1628.76470670381, "hlc_10rnd_12g_buck_S12"}, // 1.03%
			{1727.38403609237, "Exile_Item_ChocolateMilk"}, // 0.99%
			{1826.00336548093, "Exile_Item_MountainDupe"}, // 0.99%
			{1921.67883429073, "Exile_Weapon_M1014"}, // 0.96%
			{2017.35430310053, "CUP_sgun_Saiga12K"}, // 0.96%
			{2113.02977191033, "hlc_rifle_M1903A1"}, // 0.96%
			{2200.08263674097, "hlc_10rnd_12g_slug_S12"}, // 0.87%
			{2283.90906672124, "Exile_Item_EnergyDrink"}, // 0.84%
			{2364.45679124803, "ItemRadio"}, // 0.81%
			{2443.59575927588, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.79%
			{2522.73472730374, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.79%
			{2601.8736953316, "Exile_Magazine_10Rnd_303"}, // 0.79%
			{2681.01266335946, "Exile_Magazine_5Rnd_22LR"}, // 0.79%
			{2760.15163138731, "Exile_Magazine_8Rnd_74Slug"}, // 0.79%
			{2834.11612842873, "Exile_Item_PlasticBottleCoffee"}, // 0.74%
			{2903.14965900072, "Exile_Item_Beer"}, // 0.69%
			{2967.25222310329, "FlareGreen_F"}, // 0.64%
			{3031.35478720585, "V_Rangemaster_belt"}, // 0.64%
			{3095.45735130842, "FlareYellow_F"}, // 0.64%
			{3159.55991541098, "Chemlight_red"}, // 0.64%
			{3223.66247951354, "Chemlight_yellow"}, // 0.64%
			{3287.76504361611, "Chemlight_blue"}, // 0.64%
			{3351.86760771867, "FlareWhite_F"}, // 0.64%
			{3415.97017182124, "Chemlight_green"}, // 0.64%
			{3480.0727359238, "FlareRed_F"}, // 0.64%
			{3539.24433355694, "Exile_Item_PlasticBottleFreshWater"}, // 0.59%
			{3591.10258766238, "muzzle_snds_acp"}, // 0.52%
			{3642.96084176783, "muzzle_snds_L"}, // 0.52%
			{3694.24289304988, "CUP_smg_MP5SD6"}, // 0.51%
			{3742.3198161268, "CUP_hgun_Phantom"}, // 0.48%
			{3790.24696685769, "B_OutdoorPack_blk"}, // 0.48%
			{3838.08470126259, "Exile_Weapon_CZ550"}, // 0.48%
			{3884.10705497725, "Exile_Item_Matches"}, // 0.46%
			{3930.12940869191, "Exile_Item_CanOpener"}, // 0.46%
			{3974.08545264796, "hlc_rifle_hk53"}, // 0.44%
			{4017.21988830576, "B_OutdoorPack_tan"}, // 0.43%
			{4060.35432396356, "B_OutdoorPack_blu"}, // 0.43%
			{4101.77444230675, "Exile_Item_Raisins"}, // 0.41%
			{4143.19456064995, "Exile_Item_Moobar"}, // 0.41%
			{4183.25866321405, "hlc_smg_mp5k_PDW"}, // 0.40%
			{4223.32276577815, "hlc_smg_mp5k"}, // 0.40%
			{4263.38686834225, "Exile_Item_Magazine04"}, // 0.40%
			{4303.45097090636, "hgun_Pistol_heavy_01_F"}, // 0.40%
			{4343.51507347046, "Exile_Item_Magazine01"}, // 0.40%
			{4383.57917603456, "Exile_Item_Magazine02"}, // 0.40%
			{4423.64327859866, "Exile_Item_Magazine03"}, // 0.40%
			{4463.06980189615, "hlc_30Rnd_9x19_B_MP5"}, // 0.39%
			{4501.41152248087, "B_HuntingBackpack"}, // 0.38%
			{4538.22940545259, "Exile_Item_EMRE"}, // 0.37%
			{4575.04728842432, "Exile_Item_CockONut"}, // 0.37%
			{4611.86517139605, "Exile_Item_SeedAstics"}, // 0.37%
			{4648.68305436778, "Exile_Item_InstantCoffee"}, // 0.37%
			{4685.31309099782, "CUP_smg_MP5A5"}, // 0.37%
			{4721.94312762785, "CUP_smg_bizon"}, // 0.37%
			{4758.05724824902, "hlc_30Rnd_9x19_B_MP5"}, // 0.36%
			{4794.17136887018, "10Rnd_9x21_Mag"}, // 0.36%
			{4830.28548949134, "Exile_Magazine_8Rnd_9x18"}, // 0.36%
			{4866.39961011251, "Exile_Magazine_7Rnd_45ACP"}, // 0.36%
			{4902.51373073367, "9Rnd_45ACP_Mag"}, // 0.36%
			{4938.62785135483, "30Rnd_9x21_Mag"}, // 0.36%
			{4974.741971976, "11Rnd_45ACP_Mag"}, // 0.36%
			{5010.85609259716, "Exile_Magazine_6Rnd_45ACP"}, // 0.36%
			{5046.69838650397, "hlc_30Rnd_9x19_GD_MP5"}, // 0.36%
			{5082.54068041078, "30Rnd_9x21_Mag_SMG_02"}, // 0.36%
			{5118.38297431759, "CUP_30Rnd_9x19_EVO"}, // 0.36%
			{5154.2252682244, "CUP_30Rnd_9x19_MP5"}, // 0.36%
			{5190.06756213121, "CUP_64Rnd_9x19_Bizon_M"}, // 0.36%
			{5224.78978435344, "hgun_Rook40_F"}, // 0.35%
			{5259.51200657566, "hgun_Pistol_01_F"}, // 0.35%
			{5294.23422879788, "hgun_P07_khk_F"}, // 0.35%
			{5328.9564510201, "CUP_hgun_SA61"}, // 0.35%
			{5363.4732163061, "Exile_Item_PowerDrink"}, // 0.35%
			{5397.02222181772, "B_AssaultPack_rgr"}, // 0.34%
			{5430.57122732934, "B_AssaultPack_khk"}, // 0.34%
			{5464.12023284097, "B_AssaultPack_blk"}, // 0.34%
			{5497.66923835259, "B_AssaultPack_cbr"}, // 0.34%
			{5531.21824386421, "B_AssaultPack_mcamo"}, // 0.34%
			{5564.76724937583, "B_AssaultPack_tna_F"}, // 0.34%
			{5598.31625488746, "B_AssaultPack_sgg"}, // 0.34%
			{5631.86526039908, "B_AssaultPack_dgtl"}, // 0.34%
			{5664.36796895813, "hlc_30Rnd_9x19_GD_MP5"}, // 0.33%
			{5696.87067751717, "CUP_18Rnd_9x19_Phantom"}, // 0.33%
			{5729.37338607622, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.33%
			{5761.87609463527, "CUP_30Rnd_9x19_UZI"}, // 0.33%
			{5794.09174223553, "Exile_Item_Noodles"}, // 0.32%
			{5826.30738983579, "Exile_Item_Surstromming"}, // 0.32%
			{5858.52303743605, "Exile_Item_SausageGravy"}, // 0.32%
			{5890.73868503632, "Exile_Item_ChristmasTinner"}, // 0.32%
			{5922.95433263658, "Exile_Item_MacasCheese"}, // 0.32%
			{5955.16998023684, "Exile_Item_BBQSandwich"}, // 0.32%
			{5987.3856278371, "Exile_Item_CatFood"}, // 0.32%
			{6019.60127543737, "Exile_Item_Dogfood"}, // 0.32%
			{6051.81692303763, "Exile_Item_BeefParts"}, // 0.32%
			{6084.03257063789, "Exile_Item_Cheathas"}, // 0.32%
			{6116.24821823816, "Exile_Item_DsNuts"}, // 0.32%
			{6148.29950028944, "V_TacVest_blk_POLICE"}, // 0.32%
			{6180.35078234072, "V_Press_F"}, // 0.32%
			{6212.402064392, "hgun_P07_F"}, // 0.32%
			{6244.45334644329, "CUP_hgun_Duty_M3X"}, // 0.32%
			{6276.10893365443, "hlc_20Rnd_762x51_B_fal"}, // 0.32%
			{6306.87816442366, "H_StrawHat"}, // 0.31%
			{6337.64739519289, "H_Cap_red"}, // 0.31%
			{6368.41662596212, "H_Cap_tan"}, // 0.31%
			{6399.18585673135, "H_Hat_blue"}, // 0.31%
			{6429.95508750058, "H_Hat_brown"}, // 0.31%
			{6460.72431826981, "H_Hat_checker"}, // 0.31%
			{6491.49354903904, "H_Hat_grey"}, // 0.31%
			{6522.26277980827, "H_Hat_tan"}, // 0.31%
			{6553.0320105775, "H_StrawHat_dark"}, // 0.31%
			{6583.80124134673, "H_Cap_press"}, // 0.31%
			{6614.19060506943, "optic_Aco"}, // 0.30%
			{6644.57996879213, "optic_Aco_smg"}, // 0.30%
			{6674.96933251483, "optic_ACO_grn"}, // 0.30%
			{6705.35869623752, "optic_Holosight_smg_blk_F"}, // 0.30%
			{6735.74805996022, "optic_ACO_grn_smg"}, // 0.30%
			{6766.13742368292, "optic_Holosight_smg"}, // 0.30%
			{6795.02872017985, "6Rnd_45ACP_Cylinder"}, // 0.29%
			{6823.83886134954, "CUP_muzzle_snds_MicroUzi"}, // 0.29%
			{6852.64900251923, "CUP_acc_Glock17_Flashlight"}, // 0.29%
			{6881.45914368892, "CUP_acc_CZ_M3X"}, // 0.29%
			{6910.16178433186, "hlc_rifle_L1A1SLR"}, // 0.29%
			{6937.77519656066, "Exile_Item_GloriousKnakworst"}, // 0.28%
			{6964.765749867, "U_C_Poor_1"}, // 0.27%
			{6991.75630317335, "U_C_Poor_2"}, // 0.27%
			{7018.74685647969, "U_C_Poor_shorts_1"}, // 0.27%
			{7045.73740978603, "U_C_HunterBody_grn"}, // 0.27%
			{7072.72796309237, "U_Rangemaster"}, // 0.27%
			{7099.71851639872, "U_C_Journalist"}, // 0.27%
			{7126.70906970506, "U_C_Scientist"}, // 0.27%
			{7153.41847141446, "CUP_hgun_PB6P9_snds"}, // 0.27%
			{7179.34759846718, "CUP_muzzle_snds_M9"}, // 0.26%
			{7204.98862410821, "H_Cap_blu"}, // 0.26%
			{7230.62964974923, "H_Cap_blk"}, // 0.26%
			{7256.27067539026, "H_Beret_blk_POLICE"}, // 0.26%
			{7281.91170103129, "H_Bandanna_surfer"}, // 0.26%
			{7307.55272667231, "H_Cap_grn"}, // 0.26%
			{7333.19375231334, "Exile_Item_ZipTie"}, // 0.26%
			{7358.83477795436, "H_Cap_headphones"}, // 0.26%
			{7384.47580359539, "H_Cap_oli"}, // 0.26%
			{7410.11682923641, "H_Cap_blk_Raven"}, // 0.26%
			{7434.08040460186, "B_Kitbag_cbr"}, // 0.24%
			{7458.0439799673, "B_Kitbag_sgg"}, // 0.24%
			{7482.00755533275, "B_Kitbag_mcamo"}, // 0.24%
			{7505.7492457411, "hlc_optic_kobra"}, // 0.24%
			{7528.54126853313, "CUP_optic_ACOG"}, // 0.23%
			{7551.09935560734, "TRYK_B_Kitbag_Base"}, // 0.23%
			{7573.65744268156, "TRYK_B_Kitbag_blk"}, // 0.23%
			{7596.21552975578, "TRYK_B_Belt"}, // 0.23%
			{7618.1935517338, "CUP_smg_EVO"}, // 0.22%
			{7640.17157371182, "CUP_smg_bizon_snds"}, // 0.22%
			{7661.84004608452, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.22%
			{7683.3454224286, "hlc_30rnd_556x45_b_hk33"}, // 0.22%
			{7704.71294379613, "CUP_hgun_MicroUzi"}, // 0.21%
			{7725.70559636773, "U_C_Poloshirt_tricolour"}, // 0.21%
			{7746.69824893933, "U_C_Poloshirt_burgundy"}, // 0.21%
			{7767.69090151093, "U_C_Poloshirt_blue"}, // 0.21%
			{7788.68355408253, "U_C_Poloshirt_stripped"}, // 0.21%
			{7809.67620665413, "U_C_Poloshirt_salmon"}, // 0.21%
			{7829.84330547291, "optic_Yorris"}, // 0.20%
			{7850.01040429169, "optic_MRD"}, // 0.20%
			{7870.14733542339, "Exile_Item_MobilePhone"}, // 0.20%
			{7890.28426655509, "ItemGPS"}, // 0.20%
			{7909.83460868607, "TRYK_B_Belt_CYT"}, // 0.20%
			{7929.38495081706, "TRYK_B_tube_cyt"}, // 0.20%
			{7948.93529294805, "TRYK_B_Kitbag_aaf"}, // 0.20%
			{7967.63187414463, "hgun_Pistol_heavy_02_F"}, // 0.19%
			{7986.32845534121, "hgun_ACPC2_F"}, // 0.19%
			{8004.64347365623, "SmokeShellRed"}, // 0.18%
			{8022.95849197125, "SmokeShell"}, // 0.18%
			{8041.27351028627, "SmokeShellPurple"}, // 0.18%
			{8059.58852860128, "SmokeShellYellow"}, // 0.18%
			{8077.9035469163, "SmokeShellBlue"}, // 0.18%
			{8096.21856523132, "SmokeShellOrange"}, // 0.18%
			{8114.53358354634, "SmokeShellGreen"}, // 0.18%
			{8132.59064385692, "16Rnd_9x21_Mag"}, // 0.18%
			{8150.63711351629, "TRYK_B_BAF_BAG_BLK"}, // 0.18%
			{8168.68358317567, "TRYK_B_Belt_GR"}, // 0.18%
			{8186.73005283504, "TRYK_B_Belt_tan"}, // 0.18%
			{8204.77652249441, "TRYK_B_Belt_br"}, // 0.18%
			{8222.82299215379, "TRYK_B_Alicepack"}, // 0.18%
			{8240.86946181316, "TRYK_B_FieldPack_Wood"}, // 0.18%
			{8258.91593147253, "TRYK_B_Kitbag_Base_JSDF"}, // 0.18%
			{8276.96240113191, "TRYK_B_Belt_BLK"}, // 0.18%
			{8293.50499831967, "TRYK_B_Belt_AOR1"}, // 0.17%
			{8310.04759550743, "TRYK_B_Belt_AOR2"}, // 0.17%
			{8326.59019269518, "TRYK_B_BAF_BAG_CYT"}, // 0.17%
			{8343.13278988294, "TRYK_B_BAF_BAG_OD"}, // 0.17%
			{8359.15843090858, "Exile_Weapon_Makarov"}, // 0.16%
			{8374.19715562473, "TRYK_B_tube_od"}, // 0.15%
			{8389.23588034087, "TRYK_B_AssaultPack_Type2camo"}, // 0.15%
			{8404.27460505701, "TRYK_B_AssaultPack_UCP"}, // 0.15%
			{8419.31332977316, "TRYK_B_tube_blk"}, // 0.15%
			{8434.30808161002, "U_C_man_sport_2_F"}, // 0.15%
			{8449.30283344687, "U_C_man_sport_3_F"}, // 0.15%
			{8464.29758528373, "U_I_C_Soldier_Bandit_2_F"}, // 0.15%
			{8479.29233712059, "U_I_C_Soldier_Bandit_5_F"}, // 0.15%
			{8494.28708895744, "U_I_C_Soldier_Bandit_3_F"}, // 0.15%
			{8509.2818407943, "U_C_Man_casual_6_F"}, // 0.15%
			{8524.27659263116, "U_C_man_sport_1_F"}, // 0.15%
			{8539.27134446802, "U_C_Man_casual_4_F"}, // 0.15%
			{8554.26609630487, "U_I_C_Soldier_Bandit_1_F"}, // 0.15%
			{8569.26084814173, "U_C_Man_casual_3_F"}, // 0.15%
			{8584.25559997859, "U_C_Man_casual_2_F"}, // 0.15%
			{8599.25035181544, "U_C_Man_casual_1_F"}, // 0.15%
			{8614.2451036523, "U_C_Man_casual_5_F"}, // 0.15%
			{8629.23985548916, "U_I_C_Soldier_Bandit_4_F"}, // 0.15%
			{8643.89187014117, "SMG_05_F"}, // 0.15%
			{8658.54388479319, "hgun_PDW2000_F"}, // 0.15%
			{8672.88080235591, "hlc_30rnd_556x45_t_hk33"}, // 0.14%
			{8687.21771991864, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.14%
			{8701.55463748136, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.14%
			{8715.89155504409, "30Rnd_45ACP_Mag_SMG_01"}, // 0.14%
			{8730.22847260681, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.14%
			{8744.03517872121, "Exile_Item_CookingPot"}, // 0.14%
			{8757.57003096574, "TRYK_B_BAF_BAG_mcamo"}, // 0.14%
			{8770.92473182044, "Exile_Weapon_Colt1911"}, // 0.13%
			{8783.56467403785, "6Rnd_RedSignal_F"}, // 0.13%
			{8796.20461625526, "6Rnd_GreenSignal_F"}, // 0.13%
			{8808.23559602817, "TRYK_B_Medbag_ucp"}, // 0.12%
			{8820.26657580109, "TRYK_B_Medbag_BK"}, // 0.12%
			{8832.297555574, "TRYK_B_Medbag"}, // 0.12%
			{8844.32853534692, "TRYK_B_BAF_BAG_rgr"}, // 0.12%
			{8856.35951511983, "TRYK_B_Medbag_OD"}, // 0.12%
			{8867.11220329187, "hlc_30rnd_556x45_epr_hk33"}, // 0.11%
			{8877.86489146392, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.11%
			{8888.54865214768, "Exile_Weapon_TaurusGold"}, // 0.11%
			{8896.86120410113, "TRYK_Hrp_vest_od"}, // 0.08%
			{8904.87402461395, "Exile_Weapon_Taurus"}, // 0.08%
			{8912.88684512677, "hgun_Pistol_Signal_F"}, // 0.08%
			{8920.55997000687, "TRYK_Hrp_vest_ucp"}, // 0.08%
			{8928.23309488698, "TRYK_LOC_AK_chestrig_OD"}, // 0.08%
			{8935.75245724505, "TRYK_B_Coyotebackpack"}, // 0.08%
			{8943.27181960313, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.08%
			{8950.7911819612, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.08%
			{8958.31054431927, "TRYK_B_Coyotebackpack_BLK"}, // 0.08%
			{8965.82990667735, "TRYK_B_Coyotebackpack_OD"}, // 0.08%
			{8973.15591400335, "SMG_02_F"}, // 0.07%
			{8980.48192132936, "SMG_01_F"}, // 0.07%
			{8986.87619206278, "TRYK_V_Sheriff_BA_TB"}, // 0.06%
			{8991.99160864952, "TRYK_LOC_AK_chestrig_TAN"}, // 0.05%
			{8996.53788979155, "TRYK_ESS_CAP_OD"}, // 0.05%
			{9001.08417093357, "TRYK_H_PASGT_COYO"}, // 0.05%
			{9005.6304520756, "TRYK_H_PASGT_TAN"}, // 0.05%
			{9010.17673321762, "TRYK_H_Helmet_Snow"}, // 0.05%
			{9014.72301435965, "TRYK_H_WH"}, // 0.05%
			{9019.26929550168, "TRYK_H_GR"}, // 0.05%
			{9023.8155766437, "TRYK_H_AOR1"}, // 0.05%
			{9028.36185778573, "TRYK_H_AOR2"}, // 0.05%
			{9032.90813892775, "TRYK_H_EARMUFF"}, // 0.05%
			{9037.45442006978, "TRYK_H_TACEARMUFF_H"}, // 0.05%
			{9042.0007012118, "TRYK_H_Bandana_H"}, // 0.05%
			{9046.54698235383, "TRYK_H_Bandana_wig"}, // 0.05%
			{9051.09326349586, "TRYK_H_Bandana_wig_g"}, // 0.05%
			{9055.63954463788, "TRYK_H_wig"}, // 0.05%
			{9060.18582577991, "TRYK_H_headset2"}, // 0.05%
			{9064.73210692193, "TRYK_H_woolhat"}, // 0.05%
			{9069.27838806396, "TRYK_H_woolhat_CW"}, // 0.05%
			{9073.82466920598, "TRYK_H_woolhat_WH"}, // 0.05%
			{9078.37095034801, "TRYK_H_woolhat_br"}, // 0.05%
			{9082.91723149004, "TRYK_H_woolhat_cu"}, // 0.05%
			{9087.46351263206, "TRYK_H_woolhat_tan"}, // 0.05%
			{9092.00979377409, "TRYK_H_headsetcap"}, // 0.05%
			{9096.55607491611, "TRYK_H_headsetcap_blk"}, // 0.05%
			{9101.10235605814, "TRYK_H_headsetcap_od"}, // 0.05%
			{9105.64863720016, "TRYK_H_pakol"}, // 0.05%
			{9110.19491834219, "TRYK_H_pakol2"}, // 0.05%
			{9114.74119948422, "TRYK_H_PASGT_OD"}, // 0.05%
			{9119.28748062624, "TRYK_H_PASGT_BLK"}, // 0.05%
			{9123.83376176827, "TRYK_TAC_SET_WH_2"}, // 0.05%
			{9128.38004291029, "TRYK_TAC_SET_MESH_2"}, // 0.05%
			{9132.92632405232, "TRYK_bandana_g"}, // 0.05%
			{9137.47260519434, "TRYK_ESS_CAP_tan"}, // 0.05%
			{9142.01888633637, "TRYK_R_CAP_BLK"}, // 0.05%
			{9146.56516747839, "TRYK_R_CAP_TAN"}, // 0.05%
			{9151.11144862042, "TRYK_r_cap_tan_Glasses"}, // 0.05%
			{9155.65772976245, "TRYK_r_cap_blk_Glasses"}, // 0.05%
			{9160.20401090447, "TRYK_r_cap_od_Glasses"}, // 0.05%
			{9164.7502920465, "TRYK_H_headsetcap_Glasses"}, // 0.05%
			{9169.29657318852, "TRYK_H_headsetcap_blk_Glasses"}, // 0.05%
			{9173.84285433055, "TRYK_H_headsetcap_od_Glasses"}, // 0.05%
			{9178.38913547257, "TRYK_TAC_EARMUFF_SHADE"}, // 0.05%
			{9182.9354166146, "TRYK_TAC_EARMUFF"}, // 0.05%
			{9187.48169775663, "TRYK_R_CAP_OD_US"}, // 0.05%
			{9192.02797889865, "TRYK_headset2"}, // 0.05%
			{9196.57426004068, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.05%
			{9201.1205411827, "TRYK_TAC_SET_TAN_2"}, // 0.05%
			{9205.66682232473, "TRYK_TAC_SET_MESH"}, // 0.05%
			{9210.21310346675, "TRYK_TAC_SET_OD"}, // 0.05%
			{9214.75938460878, "TRYK_TAC_SET_OD_2"}, // 0.05%
			{9219.30566575081, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.05%
			{9223.85194689283, "TRYK_TAC_EARMUFF_Gs"}, // 0.05%
			{9228.39822803486, "TRYK_TAC_SET_TAN"}, // 0.05%
			{9232.94450917688, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.05%
			{9237.49079031891, "TRYK_TAC_SET_bn"}, // 0.05%
			{9242.00240773375, "TRYK_B_Coyotebackpack_WH"}, // 0.05%
			{9246.47839724715, "TRYK_V_Sheriff_BA_T3"}, // 0.04%
			{9250.95438676054, "TRYK_V_Sheriff_BA_TB2"}, // 0.04%
			{9255.43037627394, "TRYK_V_Sheriff_BA_T2"}, // 0.04%
			{9259.45776250028, "ItemWatch"}, // 0.04%
			{9263.0947874139, "TRYK_H_LHS_HEL_G"}, // 0.04%
			{9266.73181232752, "TRYK_TAC_SET_WH"}, // 0.04%
			{9269.92894769423, "TRYK_V_ArmorVest_rgr2"}, // 0.03%
			{9273.12608306094, "TRYK_V_ArmorVest_green2"}, // 0.03%
			{9276.32321842765, "TRYK_V_ArmorVest_tan2"}, // 0.03%
			{9279.52035379437, "TRYK_V_ArmorVest_Delta2"}, // 0.03%
			{9282.71748916108, "TRYK_V_TacVest_coyo"}, // 0.03%
			{9285.91462452779, "TRYK_V_harnes_blk_L"}, // 0.03%
			{9289.1117598945, "TRYK_V_tacv10_BK"}, // 0.03%
			{9292.30889526121, "TRYK_V_harnes_TAN_L"}, // 0.03%
			{9295.50603062793, "TRYK_V_ChestRig_L"}, // 0.03%
			{9298.70316599464, "TRYK_V_ChestRig"}, // 0.03%
			{9301.90030136135, "TRYK_V_Sheriff_BA_OD"}, // 0.03%
			{9305.09743672806, "TRYK_V_ArmorVest_khk2"}, // 0.03%
			{9308.29457209478, "TRYK_V_harnes_od_L"}, // 0.03%
			{9311.49170746149, "TRYK_V_ArmorVest_cbr2"}, // 0.03%
			{9314.6888428282, "TRYK_V_ArmorVest_coyo"}, // 0.03%
			{9317.88597819491, "TRYK_V_ArmorVest_coyo2"}, // 0.03%
			{9321.08311356162, "TRYK_V_ArmorVest_AOR2_2"}, // 0.03%
			{9324.28024892834, "TRYK_V_ArmorVest_AOR1_2"}, // 0.03%
			{9327.47738429505, "TRYK_V_ArmorVest_Ranger"}, // 0.03%
			{9330.67451966176, "TRYK_V_ArmorVest_Delta"}, // 0.03%
			{9333.87165502847, "TRYK_V_ArmorVest_tan"}, // 0.03%
			{9337.06879039519, "TRYK_V_ArmorVest_green"}, // 0.03%
			{9340.2659257619, "TRYK_V_ArmorVest_rgr"}, // 0.03%
			{9343.46306112861, "TRYK_V_ArmorVest_khk"}, // 0.03%
			{9346.66019649532, "TRYK_V_ArmorVest_CBR"}, // 0.03%
			{9349.85733186203, "TRYK_V_ArmorVest_Brown"}, // 0.03%
			{9353.05446722875, "TRYK_V_tacv10_OD"}, // 0.03%
			{9356.25160259546, "TRYK_V_ArmorVest_AOR2"}, // 0.03%
			{9359.44873796217, "TRYK_V_ArmorVest_AOR1"}, // 0.03%
			{9362.64587332888, "TRYK_V_ArmorVest_Brown2"}, // 0.03%
			{9365.8430086956, "TRYK_V_tacv10_TN"}, // 0.03%
			{9369.04014406231, "TRYK_V_ArmorVest_Ranger2"}, // 0.03%
			{9372.23727942902, "TRYK_V_tacv10LC_OD"}, // 0.03%
			{9375.43441479573, "TRYK_V_tacv10LC_BK"}, // 0.03%
			{9378.63155016244, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.03%
			{9381.82868552916, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.03%
			{9385.02582089587, "TRYK_V_Sheriff_BA_TB5"}, // 0.03%
			{9388.22295626258, "TRYK_V_Sheriff_BA_T5"}, // 0.03%
			{9391.42009162929, "TRYK_V_Sheriff_BA_T4"}, // 0.03%
			{9394.61722699601, "TRYK_V_Sheriff_BA_TB3"}, // 0.03%
			{9397.81436236272, "TRYK_V_Sheriff_BA_T"}, // 0.03%
			{9401.01149772943, "TRYK_V_Sheriff_BA_TCL2"}, // 0.03%
			{9404.20863309614, "TRYK_V_Sheriff_BA_TBL2"}, // 0.03%
			{9407.40576846286, "TRYK_V_Sheriff_BA_TL2"}, // 0.03%
			{9410.60290382957, "TRYK_V_Sheriff_BA_TCL"}, // 0.03%
			{9413.80003919628, "TRYK_V_Sheriff_BA_TBL"}, // 0.03%
			{9416.99717456299, "TRYK_V_Sheriff_BA_TL"}, // 0.03%
			{9420.1943099297, "TRYK_V_tacSVD_OD"}, // 0.03%
			{9423.39144529642, "TRYK_V_Sheriff_BA_TB4"}, // 0.03%
			{9426.58858066313, "TRYK_V_tacv1LC_MSL_NV"}, // 0.03%
			{9429.78571602984, "TRYK_V_tacv10LC_TN"}, // 0.03%
			{9432.98285139655, "TRYK_V_tacv1L_BK"}, // 0.03%
			{9436.17998676327, "TRYK_V_tacSVD_BK"}, // 0.03%
			{9439.37712212998, "TRYK_V_tacv1L_OD"}, // 0.03%
			{9442.57425749669, "TRYK_V_tacv1L_CY"}, // 0.03%
			{9445.7713928634, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.03%
			{9448.96852823011, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.03%
			{9452.16566359683, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.03%
			{9455.36279896354, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.03%
			{9458.55993433025, "TRYK_V_tacv1LC_P2_BK"}, // 0.03%
			{9461.75706969696, "TRYK_V_tacv1LMSL_NV"}, // 0.03%
			{9464.95420506368, "TRYK_V_tacv1LMSL_BK"}, // 0.03%
			{9468.15134043039, "TRYK_V_tacv1_MSL_NV"}, // 0.03%
			{9471.3484757971, "TRYK_V_tacv1LC_MSL_BK"}, // 0.03%
			{9474.54561116381, "TRYK_V_tacv1_MSL_BK"}, // 0.03%
			{9477.54456153118, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9480.54351189856, "TRYK_ZARATAKI2"}, // 0.03%
			{9483.54246226593, "TRYK_ZARATAKI"}, // 0.03%
			{9486.5414126333, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9489.54036300067, "TRYK_B_USMC_R"}, // 0.03%
			{9492.53931336804, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9495.53826373541, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9498.53721410278, "TRYK_U_B_PCUHs"}, // 0.03%
			{9501.53616447016, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9504.53511483753, "TRYK_U_taki_G_BL"}, // 0.03%
			{9507.5340652049, "TRYK_U_taki_G_COY"}, // 0.03%
			{9510.53301557227, "TRYK_U_taki_G_WH"}, // 0.03%
			{9513.53196593964, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9516.53091630701, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9519.52986667438, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9522.52881704176, "TRYK_ZARATAKI3"}, // 0.03%
			{9525.52776740913, "TRYK_U_taki_BLK"}, // 0.03%
			{9528.5267177765, "TRYK_U_taki_BL"}, // 0.03%
			{9531.52566814387, "TRYK_U_taki_COY"}, // 0.03%
			{9534.52461851124, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9537.52356887861, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9540.52251924598, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9543.52146961336, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9546.52041998073, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9549.5193703481, "TRYK_U_taki_wh"}, // 0.03%
			{9552.51832071547, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9555.51727108284, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9558.51622145021, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9561.51517181758, "U_OrestesBody"}, // 0.03%
			{9564.51412218496, "U_NikosBody"}, // 0.03%
			{9567.51307255233, "U_NikosAgedBody"}, // 0.03%
			{9570.5120229197, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9573.51097328707, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9576.50992365444, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9579.50887402181, "TRYK_SUITS_BR_F"}, // 0.03%
			{9582.50782438918, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9585.50677475656, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9588.50572512393, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9591.5046754913, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9594.50362585867, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9597.50257622604, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9600.50152659341, "TRYK_OVERALL_flesh"}, // 0.03%
			{9603.50047696078, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9606.49942732816, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9609.49837769553, "TRYK_U_B_Wood_T"}, // 0.03%
			{9612.4973280629, "TRYK_U_B_Sage_T"}, // 0.03%
			{9615.49627843027, "TRYK_C_AOR2_T"}, // 0.03%
			{9618.49522879764, "TRYK_DMARPAT_T"}, // 0.03%
			{9621.49417916501, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9624.49312953238, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9627.49207989976, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9630.49103026713, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9633.4899806345, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9636.48893100187, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9639.48788136924, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9642.48683173661, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9645.48578210398, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9648.48473247136, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9651.48368283873, "TRYK_U_B_fleece"}, // 0.03%
			{9654.4826332061, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9657.48158357347, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9660.48053394084, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9663.47948430821, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9666.47843467558, "TRYK_U_B_PCUs"}, // 0.03%
			{9669.47738504296, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9672.47633541033, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9675.4752857777, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9678.47423614507, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9681.47318651244, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9684.47213687981, "TRYK_U_B_PCUODs"}, // 0.03%
			{9687.47108724718, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9690.47003761456, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9693.46898798193, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9696.4679383493, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9699.46688871667, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9702.46583908404, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9705.46478945141, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9708.46373981878, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9711.46269018616, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9714.46164055353, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9717.4605909209, "TRYK_U_pad_j"}, // 0.03%
			{9720.45954128827, "TRYK_U_B_PCUGs"}, // 0.03%
			{9723.45849165564, "TRYK_U_pad_j_blk"}, // 0.03%
			{9726.45744202301, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9729.45639239038, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9732.45534275776, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9735.45429312513, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9738.4532434925, "TRYK_U_B_ACU"}, // 0.03%
			{9741.45219385987, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9744.45114422724, "TRYK_U_B_3c"}, // 0.03%
			{9747.45009459461, "TRYK_U_B_3cr"}, // 0.03%
			{9750.44904496198, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9753.44799532936, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9756.44694569673, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9759.4458960641, "TRYK_U_B_BLK"}, // 0.03%
			{9762.44484643147, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9765.44379679884, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9768.44274716621, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9771.44169753358, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9774.44064790096, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9777.43959826833, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9780.4385486357, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9783.43749900307, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9786.43644937044, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9789.43539973781, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9792.43435010518, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9795.43330047256, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9798.43225083993, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9801.4312012073, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9804.43015157467, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9807.42910194204, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9810.42805230941, "TRYK_U_B_ODTAN"}, // 0.03%
			{9813.42700267678, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9816.42595304416, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9819.42490341153, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9822.4238537789, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9825.42280414627, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9828.42175451364, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9831.42070488101, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9834.41965524838, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9837.41860561576, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9840.41755598313, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9843.4165063505, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9846.41545671787, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9849.41440708524, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9852.41335745261, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9855.41230781998, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9858.41125818736, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9861.41020855473, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9864.4091589221, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9867.40810928947, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9870.40705965684, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9873.40601002421, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9876.40496039158, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9879.40391075896, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9882.40286112633, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9885.4018114937, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9888.40076186107, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9891.39971222844, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9894.39866259581, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9897.39761296318, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9900.39656333056, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9903.39551369793, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9906.3944640653, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9909.39341443267, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9912.39236480004, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9915.39131516741, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9918.39026553478, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9921.38921590216, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9924.38816626953, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9927.3871166369, "TRYK_hoodie_Blk"}, // 0.03%
			{9930.38606700427, "TRYK_hoodie_FR"}, // 0.03%
			{9933.38501737164, "TRYK_hoodie_Wood"}, // 0.03%
			{9936.38396773901, "TRYK_hoodie_3c"}, // 0.03%
			{9939.38291810638, "TRYK_T_PAD"}, // 0.03%
			{9942.38186847376, "TRYK_T_OD_PAD"}, // 0.03%
			{9945.38081884113, "TRYK_T_TAN_PAD"}, // 0.03%
			{9948.3797692085, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9951.37871957587, "TRYK_T_BLK_PAD"}, // 0.03%
			{9954.37766994324, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9957.37662031061, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9960.37557067798, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9963.37452104536, "TRYK_shirts_PAD"}, // 0.03%
			{9966.37347141273, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9969.3724217801, "TRYK_T_T2_PAD"}, // 0.03%
			{9972.37137214747, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9975.37032251484, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9978.36927288221, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9981.36822324958, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9984.36717361696, "TRYK_U_hood_mc"}, // 0.03%
			{9987.36612398433, "TRYK_U_hood_nc"}, // 0.03%
			{9990.3650743517, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9993.36402471907, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9996.36297508644, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9998.18148754325, "TRYK_H_Helmet_Winter_2"}, // 0.02%
			{10000.0000000001, "TRYK_H_Helmet_Winter"} // 0.02%
		};
	};

	/**
	  Result of 100 rounds:

	  TRYK_U_pad_hood_Blk
	  Exile_Item_DsNuts
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Matches
	  ItemRadio
	  Exile_Item_Can_Empty
	  Exile_Item_BeefParts
	  hlc_20Rnd_762x51_B_fal
	  Exile_Item_Cheathas
	  CUP_hgun_Duty_M3X
	  Exile_Item_SeedAstics
	  U_C_Poloshirt_salmon
	  Exile_Item_PlasticBottleDirtyWater
	  CUP_hgun_Phantom
	  hgun_Rook40_F
	  B_AssaultPack_tna_F
	  CUP_sgun_Saiga12K
	  6Rnd_45ACP_Cylinder
	  hgun_Pistol_01_F
	  Exile_Item_MountainDupe
	  ItemMap
	  TRYK_shoulder_armor_BK
	  hlc_10rnd_12g_slug_S12
	  Binocular
	  Exile_Item_Raisins
	  CUP_sgun_Saiga12K
	  Exile_Item_MobilePhone
	  Exile_Item_MountainDupe
	  Exile_Magazine_5Rnd_22LR
	  Exile_Item_Can_Empty
	  B_Kitbag_sgg
	  B_Kitbag_cbr
	  Exile_Item_Can_Empty
	  Exile_Item_ChocolateMilk
	  Exile_Item_EnergyDrink
	  TRYK_B_BAF_BAG_OD
	  Chemlight_green
	  Exile_Item_ChocolateMilk
	  9Rnd_45ACP_Mag
	  ItemMap
	  Binocular
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Cheathas
	  TRYK_DMARPAT_T
	  B_AssaultPack_blk
	  Exile_Item_ZipTie
	  Exile_Item_MountainDupe
	  Exile_Item_CanOpener
	  Exile_Item_PlasticBottleEmpty
	  hgun_Pistol_heavy_02_F
	  Exile_Item_DsNuts
	  Exile_Item_SeedAstics
	  Exile_Item_Moobar
	  Exile_Item_MountainDupe
	  Exile_Magazine_10Rnd_303
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  hlc_30Rnd_9x19_GD_MP5
	  TRYK_U_B_BLK_T_BK
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_BBQSandwich
	  TRYK_U_B_PCUs_R
	  B_AssaultPack_rgr
	  TRYK_V_tacv1LMSL_BK
	  TRYK_U_B_Denim_T_BG_WH
	  Exile_Item_PlasticBottleCoffee
	  TRYK_B_Belt_AOR1
	  ItemMap
	  Exile_Weapon_LeeEnfield
	  Exile_Item_PlasticBottleDirtyWater
	  Exile_Item_SausageGravy
	  TRYK_B_Belt_br
	  Exile_Item_ToiletPaper
	  Exile_Magazine_10Rnd_303
	  Exile_Magazine_5Rnd_22LR
	  B_OutdoorPack_tan
	  Exile_Item_Heatpack
	  Exile_Weapon_LeeEnfield
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Item_PlasticBottleEmpty
	  B_OutdoorPack_blu
	  Exile_Item_Magazine01
	  Exile_Item_Beer
	  hlc_10rnd_12g_buck_S12
	  TRYK_B_Medbag_ucp
	  CUP_20Rnd_B_765x17_Ball_M
	  hlc_rifle_saiga12k
	  Exile_Item_GloriousKnakworst
	  Exile_Item_Pliers
	  Exile_Item_Heatpack
	  Exile_Item_SausageGravy
	  Exile_Item_Grinder
	  H_StrawHat
	  CUP_8Rnd_9x18_MakarovSD_M
	  Exile_Item_Can_Empty
	  TRYK_V_tacv1L_BK
	  TRYK_V_ArmorVest_AOR1
	*/
	class Shop
	{
		count = 580;
		half = 9227.21708659171;
		halfIndex = 290;
		sum = 10000.0000000001;
		items[] = 
		{
			{271.739130434783, "Exile_Item_Can_Empty"}, // 2.72%
			{543.478260869565, "Exile_Item_ToiletPaper"}, // 2.72%
			{815.217391304348, "Exile_Item_PlasticBottleEmpty"}, // 2.72%
			{1024.2474916388, "Exile_Item_PlasticBottleDirtyWater"}, // 2.09%
			{1213.943219691, "ItemMap"}, // 1.90%
			{1381.16729995856, "Exile_Item_ChocolateMilk"}, // 1.67%
			{1548.39138022612, "Exile_Item_MountainDupe"}, // 1.67%
			{1710.81017083081, "Exile_Item_Vishpirin"}, // 1.62%
			{1873.22896143551, "Exile_Item_Heatpack"}, // 1.62%
			{2035.46127811299, "Exile_Weapon_LeeEnfield"}, // 1.62%
			{2187.21786055476, "Exile_Item_Heatpack"}, // 1.52%
			{2338.97444299652, "ItemCompass"}, // 1.52%
			{2490.39127189551, "hlc_rifle_saiga12k"}, // 1.51%
			{2632.53174012293, "Exile_Item_EnergyDrink"}, // 1.42%
			{2757.9498003236, "Exile_Item_PlasticBottleCoffee"}, // 1.25%
			{2875.00665651089, "Exile_Item_Beer"}, // 1.17%
			{2991.30653126487, "hlc_10rnd_12g_buck_S12"}, // 1.16%
			{3105.12396809619, "Binocular"}, // 1.14%
			{3213.81962027011, "Exile_Item_ZipTie"}, // 1.09%
			{3321.97449805509, "Exile_Weapon_M1014"}, // 1.08%
			{3430.12937584008, "CUP_sgun_Saiga12K"}, // 1.08%
			{3538.28425362507, "hlc_rifle_M1903A1"}, // 1.08%
			{3638.61870178561, "Exile_Item_PlasticBottleFreshWater"}, // 1.00%
			{3737.0262881159, "hlc_10rnd_12g_slug_S12"}, // 0.98%
			{3826.48773023434, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.89%
			{3915.94917235279, "Exile_Magazine_10Rnd_303"}, // 0.89%
			{4005.41061447124, "Exile_Magazine_8Rnd_74Slug"}, // 0.89%
			{4094.87205658968, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.89%
			{4184.33349870813, "Exile_Magazine_5Rnd_22LR"}, // 0.89%
			{4265.54289401048, "Exile_Item_Bandage"}, // 0.81%
			{4341.42118523136, "ItemRadio"}, // 0.76%
			{4411.09788534285, "Exile_Item_CanOpener"}, // 0.70%
			{4480.77458545433, "Exile_Item_Matches"}, // 0.70%
			{4548.70936806302, "Exile_Item_Magazine03"}, // 0.68%
			{4616.64415067172, "Exile_Item_Magazine01"}, // 0.68%
			{4684.57893328042, "Exile_Item_Magazine02"}, // 0.68%
			{4752.51371588911, "Exile_Item_Magazine04"}, // 0.68%
			{4817.48123213099, "Exile_Item_InstaDoc"}, // 0.65%
			{4880.19026223133, "Exile_Item_Moobar"}, // 0.63%
			{4942.89929233166, "Exile_Item_Raisins"}, // 0.63%
			{5001.42772042531, "Exile_Item_PowerDrink"}, // 0.59%
			{5057.16908051449, "Exile_Item_SeedAstics"}, // 0.56%
			{5112.91044060368, "Exile_Item_CockONut"}, // 0.56%
			{5168.65180069286, "Exile_Item_EMRE"}, // 0.56%
			{5224.39316078205, "Exile_Item_InstantCoffee"}, // 0.56%
			{5278.47059967454, "Exile_Weapon_CZ550"}, // 0.54%
			{5329.42168663107, "CUP_hgun_Phantom"}, // 0.51%
			{5380.21404746, "B_OutdoorPack_blk"}, // 0.51%
			{5428.98773753803, "Exile_Item_BBQSandwich"}, // 0.49%
			{5477.76142761607, "Exile_Item_CatFood"}, // 0.49%
			{5526.53511769411, "Exile_Item_ChristmasTinner"}, // 0.49%
			{5575.30880777215, "Exile_Item_Dogfood"}, // 0.49%
			{5624.08249785019, "Exile_Item_BeefParts"}, // 0.49%
			{5672.85618792823, "Exile_Item_Cheathas"}, // 0.49%
			{5721.62987800626, "Exile_Item_DsNuts"}, // 0.49%
			{5770.4035680843, "Exile_Item_Noodles"}, // 0.49%
			{5819.17725816234, "Exile_Item_MacasCheese"}, // 0.49%
			{5867.95094824038, "Exile_Item_SausageGravy"}, // 0.49%
			{5916.72463831842, "Exile_Item_Surstromming"}, // 0.49%
			{5962.43776306446, "B_OutdoorPack_tan"}, // 0.46%
			{6008.15088781049, "B_OutdoorPack_blu"}, // 0.46%
			{6053.44074288296, "FlareGreen_F"}, // 0.45%
			{6098.73059795542, "Chemlight_blue"}, // 0.45%
			{6144.02045302789, "Chemlight_green"}, // 0.45%
			{6189.31030810035, "Chemlight_yellow"}, // 0.45%
			{6234.60016317281, "FlareWhite_F"}, // 0.45%
			{6279.89001824528, "FlareYellow_F"}, // 0.45%
			{6325.17987331774, "FlareRed_F"}, // 0.45%
			{6370.46972839021, "Chemlight_red"}, // 0.45%
			{6412.92896752064, "hlc_smg_mp5k"}, // 0.42%
			{6455.38820665108, "hlc_smg_mp5k_PDW"}, // 0.42%
			{6497.84744578151, "hgun_Pistol_heavy_01_F"}, // 0.42%
			{6539.6534658484, "Exile_Item_GloriousKnakworst"}, // 0.42%
			{6580.28735451155, "B_HuntingBackpack"}, // 0.41%
			{6618.56047147419, "11Rnd_45ACP_Mag"}, // 0.38%
			{6656.83358843684, "Exile_Magazine_7Rnd_45ACP"}, // 0.38%
			{6695.10670539948, "30Rnd_9x21_Mag"}, // 0.38%
			{6733.37982236213, "9Rnd_45ACP_Mag"}, // 0.38%
			{6771.65293932477, "hlc_30Rnd_9x19_B_MP5"}, // 0.38%
			{6809.92605628742, "10Rnd_9x21_Mag"}, // 0.38%
			{6848.19917325007, "Exile_Magazine_6Rnd_45ACP"}, // 0.38%
			{6886.47229021271, "Exile_Magazine_8Rnd_9x18"}, // 0.38%
			{6923.27029745909, "hgun_P07_khk_F"}, // 0.37%
			{6960.06830470547, "hgun_Pistol_01_F"}, // 0.37%
			{6996.86631195184, "CUP_hgun_SA61"}, // 0.37%
			{7033.66431919822, "hgun_Rook40_F"}, // 0.37%
			{7069.89620325619, "CUP_smg_MP5SD6"}, // 0.36%
			{7105.68078010357, "hlc_20Rnd_762x51_B_fal"}, // 0.36%
			{7141.23543268382, "B_AssaultPack_blk"}, // 0.36%
			{7176.79008526407, "B_AssaultPack_cbr"}, // 0.36%
			{7212.34473784433, "B_AssaultPack_rgr"}, // 0.36%
			{7247.89939042458, "B_AssaultPack_dgtl"}, // 0.36%
			{7283.45404300483, "B_AssaultPack_tna_F"}, // 0.36%
			{7319.00869558508, "B_AssaultPack_sgg"}, // 0.36%
			{7354.56334816533, "B_AssaultPack_mcamo"}, // 0.36%
			{7390.11800074559, "B_AssaultPack_khk"}, // 0.36%
			{7424.56380601197, "CUP_18Rnd_9x19_Phantom"}, // 0.34%
			{7459.00961127835, "CUP_30Rnd_9x19_UZI"}, // 0.34%
			{7493.45541654473, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.34%
			{7527.90122181111, "hlc_30Rnd_9x19_GD_MP5"}, // 0.34%
			{7561.86861311546, "CUP_hgun_Duty_M3X"}, // 0.34%
			{7595.83600441981, "hgun_P07_F"}, // 0.34%
			{7628.2824677553, "hlc_rifle_L1A1SLR"}, // 0.32%
			{7659.33836837642, "hlc_rifle_hk53"}, // 0.31%
			{7689.95686194654, "6Rnd_45ACP_Cylinder"}, // 0.31%
			{7718.26302136683, "CUP_hgun_PB6P9_snds"}, // 0.28%
			{7745.10145400236, "hlc_optic_kobra"}, // 0.27%
			{7770.98137118663, "CUP_smg_MP5A5"}, // 0.26%
			{7796.86128837089, "CUP_smg_bizon"}, // 0.26%
			{7822.25746878536, "B_Kitbag_sgg"}, // 0.25%
			{7847.65364919982, "B_Kitbag_cbr"}, // 0.25%
			{7873.04982961429, "B_Kitbag_mcamo"}, // 0.25%
			{7896.01369979188, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.23%
			{7918.65862732811, "CUP_hgun_MicroUzi"}, // 0.23%
			{7939.56163736155, "Exile_Item_CookingPot"}, // 0.21%
			{7960.26557110896, "SmokeShell"}, // 0.21%
			{7980.96950485638, "SmokeShellRed"}, // 0.21%
			{8001.67343860379, "SmokeShellGreen"}, // 0.21%
			{8022.3773723512, "SmokeShellPurple"}, // 0.21%
			{8043.08130609861, "SmokeShellYellow"}, // 0.21%
			{8063.78523984602, "SmokeShellBlue"}, // 0.21%
			{8084.48917359343, "SmokeShellOrange"}, // 0.21%
			{8104.30348518764, "hgun_ACPC2_F"}, // 0.20%
			{8124.11779678184, "hgun_Pistol_heavy_02_F"}, // 0.20%
			{8143.25435526316, "16Rnd_9x21_Mag"}, // 0.19%
			{8162.22392806838, "Exile_Item_MobilePhone"}, // 0.19%
			{8181.1935008736, "ItemGPS"}, // 0.19%
			{8199.30944290259, "V_Rangemaster_belt"}, // 0.18%
			{8216.29313855476, "Exile_Weapon_Makarov"}, // 0.17%
			{8232.23091746589, "TRYK_B_Kitbag_Base"}, // 0.16%
			{8248.16869637703, "TRYK_B_Kitbag_blk"}, // 0.16%
			{8264.10647528816, "TRYK_B_Belt"}, // 0.16%
			{8279.63442559872, "CUP_smg_EVO"}, // 0.16%
			{8295.16237590928, "CUP_smg_bizon_snds"}, // 0.16%
			{8309.31545561942, "Exile_Weapon_Colt1911"}, // 0.14%
			{8323.1281973424, "TRYK_B_tube_cyt"}, // 0.14%
			{8336.94093906538, "TRYK_B_Belt_CYT"}, // 0.14%
			{8350.75368078836, "TRYK_B_Kitbag_aaf"}, // 0.14%
			{8364.14927172529, "6Rnd_RedSignal_F"}, // 0.13%
			{8377.54486266221, "6Rnd_GreenSignal_F"}, // 0.13%
			{8390.29508579112, "TRYK_B_Kitbag_Base_JSDF"}, // 0.13%
			{8403.04530892002, "TRYK_B_Alicepack"}, // 0.13%
			{8415.79553204893, "TRYK_B_FieldPack_Wood"}, // 0.13%
			{8428.54575517783, "TRYK_B_Belt_BLK"}, // 0.13%
			{8441.29597830674, "TRYK_B_Belt_tan"}, // 0.13%
			{8454.04620143565, "TRYK_B_BAF_BAG_BLK"}, // 0.13%
			{8466.79642456455, "TRYK_B_Belt_br"}, // 0.13%
			{8479.54664769346, "TRYK_B_Belt_GR"}, // 0.13%
			{8491.23435222829, "TRYK_B_Belt_AOR1"}, // 0.12%
			{8502.92205676312, "TRYK_B_BAF_BAG_CYT"}, // 0.12%
			{8514.60976129795, "TRYK_B_BAF_BAG_OD"}, // 0.12%
			{8526.29746583278, "TRYK_B_Belt_AOR2"}, // 0.12%
			{8537.61992960089, "Exile_Weapon_TaurusGold"}, // 0.11%
			{8548.24511554165, "TRYK_B_tube_blk"}, // 0.11%
			{8558.8703014824, "TRYK_B_AssaultPack_UCP"}, // 0.11%
			{8569.49548742316, "TRYK_B_AssaultPack_Type2camo"}, // 0.11%
			{8580.12067336391, "TRYK_B_tube_od"}, // 0.11%
			{8590.47264023762, "SMG_05_F"}, // 0.10%
			{8600.82460711132, "hgun_PDW2000_F"}, // 0.10%
			{8610.387274458, "TRYK_B_BAF_BAG_mcamo"}, // 0.10%
			{8619.68361313077, "Exile_Item_Handsaw"}, // 0.09%
			{8628.97995180354, "Exile_Item_Pliers"}, // 0.09%
			{8638.27629047631, "Exile_Item_ScrewDriver"}, // 0.09%
			{8647.3342614908, "V_Press_F"}, // 0.09%
			{8656.3922325053, "V_TacVest_blk_POLICE"}, // 0.09%
			{8664.8923812579, "TRYK_B_Medbag"}, // 0.09%
			{8673.3925300105, "TRYK_B_Medbag_OD"}, // 0.09%
			{8681.8926787631, "TRYK_B_Medbag_BK"}, // 0.09%
			{8690.39282751571, "TRYK_B_Medbag_ucp"}, // 0.09%
			{8698.89297626831, "TRYK_B_BAF_BAG_rgr"}, // 0.09%
			{8707.38482409439, "hgun_Pistol_Signal_F"}, // 0.08%
			{8715.87667192048, "Exile_Weapon_Taurus"}, // 0.08%
			{8723.74280464359, "Exile_Item_JunkMetal"}, // 0.08%
			{8731.07060141936, "muzzle_snds_acp"}, // 0.07%
			{8738.39839819513, "muzzle_snds_L"}, // 0.07%
			{8745.54942794342, "Exile_Melee_Axe"}, // 0.07%
			{8752.7004576917, "Exile_Item_WaterCanisterEmpty"}, // 0.07%
			{8759.85148743998, "Exile_Item_MetalScrews"}, // 0.07%
			{8766.37322657042, "H_StrawHat_dark"}, // 0.07%
			{8772.89496570085, "H_Cap_press"}, // 0.07%
			{8779.41670483128, "H_Cap_red"}, // 0.07%
			{8785.93844396172, "H_Cap_tan"}, // 0.07%
			{8792.46018309215, "H_Hat_blue"}, // 0.07%
			{8798.98192222259, "H_Hat_brown"}, // 0.07%
			{8805.50366135302, "H_Hat_checker"}, // 0.07%
			{8812.02540048346, "H_Hat_grey"}, // 0.07%
			{8818.54713961389, "H_Hat_tan"}, // 0.07%
			{8825.06887874432, "H_StrawHat"}, // 0.07%
			{8831.50480551778, "Exile_Item_LightBulb"}, // 0.06%
			{8837.37780418054, "TRYK_Hrp_vest_od"}, // 0.06%
			{8843.09862797917, "Exile_Item_ExtensionCord"}, // 0.06%
			{8848.53341058787, "H_Cap_headphones"}, // 0.05%
			{8853.96819319656, "H_Cap_grn"}, // 0.05%
			{8859.40297580526, "H_Cap_blu"}, // 0.05%
			{8864.83775841395, "H_Cap_blk_Raven"}, // 0.05%
			{8870.27254102265, "H_Cap_blk"}, // 0.05%
			{8875.70732363135, "H_Beret_blk_POLICE"}, // 0.05%
			{8881.14210624004, "H_Bandanna_surfer"}, // 0.05%
			{8886.57688884874, "H_Cap_oli"}, // 0.05%
			{8891.9981183836, "TRYK_Hrp_vest_ucp"}, // 0.05%
			{8897.41934791846, "TRYK_LOC_AK_chestrig_OD"}, // 0.05%
			{8902.78703444556, "optic_Holosight_smg_blk_F"}, // 0.05%
			{8908.15472097267, "optic_ACO_grn_smg"}, // 0.05%
			{8913.52240749978, "optic_Aco_smg"}, // 0.05%
			{8918.89009402688, "optic_Holosight_smg"}, // 0.05%
			{8924.25778055399, "optic_Aco"}, // 0.05%
			{8929.62546708109, "optic_ACO_grn"}, // 0.05%
			{8934.93806005147, "TRYK_B_AssaultPack_MARPAT_Wood"}, // 0.05%
			{8940.25065302185, "TRYK_B_Coyotebackpack"}, // 0.05%
			{8945.56324599222, "TRYK_B_AssaultPack_MARPAT_Desert"}, // 0.05%
			{8950.8758389626, "TRYK_B_Coyotebackpack_OD"}, // 0.05%
			{8956.18843193298, "TRYK_B_Coyotebackpack_BLK"}, // 0.05%
			{8961.36441536983, "SMG_02_F"}, // 0.05%
			{8966.54039880668, "SMG_01_F"}, // 0.05%
			{8971.05809008573, "TRYK_V_Sheriff_BA_TB"}, // 0.05%
			{8975.3487079347, "Exile_Item_Foolbox"}, // 0.04%
			{8979.63932578367, "Exile_Item_CamoTentKit"}, // 0.04%
			{8983.92481744644, "hlc_30Rnd_9x19_B_MP5"}, // 0.04%
			{8987.9958156552, "CUP_muzzle_snds_MicroUzi"}, // 0.04%
			{8992.06681386396, "CUP_acc_Glock17_Flashlight"}, // 0.04%
			{8996.13781207273, "CUP_acc_CZ_M3X"}, // 0.04%
			{9000.16357696806, "CUP_optic_ACOG"}, // 0.04%
			{9004.05947847967, "30Rnd_9x21_Mag_SMG_02"}, // 0.04%
			{9007.95537999128, "CUP_64Rnd_9x19_Bizon_M"}, // 0.04%
			{9011.85128150289, "CUP_30Rnd_9x19_MP5"}, // 0.04%
			{9015.7471830145, "hlc_30Rnd_9x19_GD_MP5"}, // 0.04%
			{9019.64308452611, "CUP_30Rnd_9x19_EVO"}, // 0.04%
			{9023.43699908715, "ItemWatch"}, // 0.04%
			{9027.10089747504, "CUP_muzzle_snds_M9"}, // 0.04%
			{9030.71505049828, "TRYK_LOC_AK_chestrig_TAN"}, // 0.04%
			{9034.29056537242, "Exile_Item_Grinder"}, // 0.04%
			{9037.86608024656, "Exile_Melee_SledgeHammer"}, // 0.04%
			{9041.0781267056, "TRYK_TAC_EARMUFF_SHADE"}, // 0.03%
			{9044.29017316464, "TRYK_H_PASGT_BLK"}, // 0.03%
			{9047.50221962368, "TRYK_bandana_g"}, // 0.03%
			{9050.71426608272, "TRYK_TAC_SET_MESH_2"}, // 0.03%
			{9053.92631254177, "TRYK_TAC_SET_WH_2"}, // 0.03%
			{9057.13835900081, "TRYK_TAC_SET_OD_2"}, // 0.03%
			{9060.35040545985, "TRYK_TAC_SET_TAN_2"}, // 0.03%
			{9063.56245191889, "TRYK_TAC_SET_MESH"}, // 0.03%
			{9066.77449837793, "TRYK_TAC_SET_OD"}, // 0.03%
			{9069.98654483697, "TRYK_TAC_SET_TAN"}, // 0.03%
			{9073.19859129601, "TRYK_TAC_EARMUFF_SHADE_Gs"}, // 0.03%
			{9076.41063775505, "TRYK_TAC_SET_bn"}, // 0.03%
			{9079.62268421409, "TRYK_H_PASGT_OD"}, // 0.03%
			{9082.83473067313, "TRYK_TAC_EARMUFF_Gs"}, // 0.03%
			{9086.04677713217, "TRYK_headset2"}, // 0.03%
			{9089.25882359121, "TRYK_NOMIC_TAC_EARMUFF"}, // 0.03%
			{9092.47087005025, "TRYK_TAC_EARMUFF"}, // 0.03%
			{9095.6829165093, "TRYK_H_headsetcap_od_Glasses"}, // 0.03%
			{9098.89496296834, "TRYK_H_headsetcap_blk_Glasses"}, // 0.03%
			{9102.10700942738, "TRYK_H_headsetcap_Glasses"}, // 0.03%
			{9105.31905588642, "TRYK_r_cap_od_Glasses"}, // 0.03%
			{9108.53110234546, "TRYK_r_cap_blk_Glasses"}, // 0.03%
			{9111.7431488045, "TRYK_NOMIC_TAC_EARMUFF_Gs"}, // 0.03%
			{9114.95519526354, "TRYK_H_PASGT_COYO"}, // 0.03%
			{9118.16724172258, "TRYK_H_PASGT_TAN"}, // 0.03%
			{9121.37928818162, "TRYK_H_Helmet_Snow"}, // 0.03%
			{9124.59133464066, "TRYK_H_pakol2"}, // 0.03%
			{9127.8033810997, "TRYK_H_pakol"}, // 0.03%
			{9131.01542755874, "TRYK_H_headsetcap_od"}, // 0.03%
			{9134.22747401778, "TRYK_H_headsetcap_blk"}, // 0.03%
			{9137.43952047682, "TRYK_H_headsetcap"}, // 0.03%
			{9140.65156693587, "TRYK_H_woolhat_tan"}, // 0.03%
			{9143.86361339491, "TRYK_H_woolhat_cu"}, // 0.03%
			{9147.07565985395, "TRYK_H_woolhat_br"}, // 0.03%
			{9150.28770631299, "TRYK_H_woolhat_WH"}, // 0.03%
			{9153.49975277203, "TRYK_H_woolhat_CW"}, // 0.03%
			{9156.71179923107, "TRYK_H_woolhat"}, // 0.03%
			{9159.92384569011, "TRYK_H_headset2"}, // 0.03%
			{9163.13589214915, "TRYK_H_wig"}, // 0.03%
			{9166.34793860819, "TRYK_H_Bandana_wig_g"}, // 0.03%
			{9169.55998506723, "TRYK_H_Bandana_wig"}, // 0.03%
			{9172.77203152627, "TRYK_H_Bandana_H"}, // 0.03%
			{9175.98407798531, "TRYK_H_TACEARMUFF_H"}, // 0.03%
			{9179.19612444435, "TRYK_H_EARMUFF"}, // 0.03%
			{9182.40817090339, "TRYK_H_AOR2"}, // 0.03%
			{9185.62021736244, "TRYK_H_AOR1"}, // 0.03%
			{9188.83226382148, "TRYK_H_WH"}, // 0.03%
			{9192.04431028052, "TRYK_r_cap_tan_Glasses"}, // 0.03%
			{9195.25635673956, "TRYK_R_CAP_OD_US"}, // 0.03%
			{9198.4684031986, "TRYK_H_GR"}, // 0.03%
			{9201.68044965764, "TRYK_R_CAP_BLK"}, // 0.03%
			{9204.89249611668, "TRYK_ESS_CAP_tan"}, // 0.03%
			{9208.10454257572, "TRYK_ESS_CAP_OD"}, // 0.03%
			{9211.31658903476, "TRYK_R_CAP_TAN"}, // 0.03%
			{9214.50414481699, "TRYK_B_Coyotebackpack_WH"}, // 0.03%
			{9217.68238026067, "TRYK_shirts_BLK_PAD_BK"}, // 0.03%
			{9220.86061570435, "TRYK_shirts_PAD_BLW"}, // 0.03%
			{9224.03885114803, "TRYK_shirts_OD_PAD_BLW"}, // 0.03%
			{9227.21708659171, "TRYK_shirts_TAN_PAD_BLW"}, // 0.03%
			{9230.3953220354, "TRYK_shirts_BLK_PAD_BLW"}, // 0.03%
			{9233.57355747908, "TRYK_shirts_PAD_YEL"}, // 0.03%
			{9236.75179292276, "TRYK_shirts_OD_PAD_YEL"}, // 0.03%
			{9239.93002836644, "TRYK_shirts_TAN_PAD_YEL"}, // 0.03%
			{9243.10826381012, "TRYK_shirts_BLK_PAD_YEL"}, // 0.03%
			{9246.28649925381, "TRYK_shirts_PAD_RED2"}, // 0.03%
			{9249.46473469749, "TRYK_shirts_OD_PAD_RED2"}, // 0.03%
			{9252.64297014117, "TRYK_shirts_BLK_PAD_RED2"}, // 0.03%
			{9255.82120558485, "TRYK_shirts_PAD_BLU3"}, // 0.03%
			{9258.99944102853, "TRYK_shirts_OD_PAD_BLU3"}, // 0.03%
			{9262.17767647221, "TRYK_shirts_TAN_PAD_BLU3"}, // 0.03%
			{9265.3559119159, "TRYK_shirts_BLK_PAD_BLU3"}, // 0.03%
			{9268.53414735958, "TRYK_shirts_DENIM_R"}, // 0.03%
			{9271.71238280326, "TRYK_shirts_DENIM_BL"}, // 0.03%
			{9274.89061824694, "TRYK_shirts_DENIM_BK"}, // 0.03%
			{9278.06885369062, "TRYK_shirts_DENIM_WH"}, // 0.03%
			{9281.24708913431, "TRYK_shirts_DENIM_BWH"}, // 0.03%
			{9284.42532457799, "TRYK_shirts_DENIM_RED2"}, // 0.03%
			{9287.60356002167, "TRYK_shirts_DENIM_WHB"}, // 0.03%
			{9290.78179546535, "TRYK_shirts_TAN_PAD_RED2"}, // 0.03%
			{9293.96003090903, "TRYK_shirts_TAN_PAD_BK"}, // 0.03%
			{9297.13826635271, "TRYK_shirts_BLK_PAD"}, // 0.03%
			{9300.3165017964, "TRYK_shirts_PAD_BK"}, // 0.03%
			{9303.49473724008, "TRYK_U_pad_hood_odBK"}, // 0.03%
			{9306.67297268376, "TRYK_U_pad_hood_BKT2"}, // 0.03%
			{9309.85120812744, "TRYK_hoodie_Blk"}, // 0.03%
			{9313.02944357112, "TRYK_hoodie_FR"}, // 0.03%
			{9316.20767901481, "TRYK_hoodie_Wood"}, // 0.03%
			{9319.38591445849, "TRYK_shoulder_armor_CY"}, // 0.03%
			{9322.56414990217, "TRYK_T_PAD"}, // 0.03%
			{9325.74238534585, "TRYK_T_OD_PAD"}, // 0.03%
			{9328.92062078953, "TRYK_T_TAN_PAD"}, // 0.03%
			{9332.09885623322, "TRYK_T_BLK_PAD"}, // 0.03%
			{9335.2770916769, "TRYK_T_T2_PAD"}, // 0.03%
			{9338.45532712058, "TRYK_shirts_OD_PAD_BK"}, // 0.03%
			{9341.63356256426, "TRYK_T_CSAT_PAD"}, // 0.03%
			{9344.81179800794, "TRYK_U_hood_nc"}, // 0.03%
			{9347.99003345162, "TRYK_U_hood_mc"}, // 0.03%
			{9351.16826889531, "TRYK_U_denim_hood_blk"}, // 0.03%
			{9354.34650433899, "TRYK_U_denim_hood_mc"}, // 0.03%
			{9357.52473978267, "TRYK_U_denim_hood_3c"}, // 0.03%
			{9360.70297522635, "TRYK_U_denim_hood_nc"}, // 0.03%
			{9363.88121067003, "TRYK_U_denim_jersey_blu"}, // 0.03%
			{9367.05944611372, "TRYK_U_denim_jersey_blk"}, // 0.03%
			{9370.2376815574, "TRYK_shirts_PAD"}, // 0.03%
			{9373.41591700108, "TRYK_shirts_OD_PAD"}, // 0.03%
			{9376.59415244476, "TRYK_shirts_TAN_PAD"}, // 0.03%
			{9379.77238788844, "TRYK_U_nohoodPcu_gry"}, // 0.03%
			{9382.95062333212, "TRYK_shirts_DENIM_ylb"}, // 0.03%
			{9386.12885877581, "TRYK_shirts_DENIM_BL_Sleeve"}, // 0.03%
			{9389.30709421949, "TRYK_shirts_DENIM_R_Sleeve"}, // 0.03%
			{9392.48532966317, "TRYK_ZARATAKI3"}, // 0.03%
			{9395.66356510685, "TRYK_ZARATAKI2"}, // 0.03%
			{9398.84180055053, "TRYK_ZARATAKI"}, // 0.03%
			{9402.02003599422, "TRYK_B_USMC_R_ROLL"}, // 0.03%
			{9405.1982714379, "TRYK_B_USMC_R"}, // 0.03%
			{9408.37650688158, "TRYK_U_B_PCUODHs"}, // 0.03%
			{9411.55474232526, "TRYK_U_B_PCUGHs"}, // 0.03%
			{9414.73297776894, "TRYK_U_B_PCUHs"}, // 0.03%
			{9417.91121321262, "TRYK_U_taki_G_BLK"}, // 0.03%
			{9421.08944865631, "TRYK_shirts_DENIM_ylb_Sleeve"}, // 0.03%
			{9424.26768409999, "TRYK_U_taki_G_BL"}, // 0.03%
			{9427.44591954367, "TRYK_B_TRYK_UCP_T"}, // 0.03%
			{9430.62415498735, "TRYK_U_taki_G_COY"}, // 0.03%
			{9433.80239043103, "TRYK_U_Bts_PCUODs"}, // 0.03%
			{9436.98062587472, "TRYK_U_Bts_PCUGs"}, // 0.03%
			{9440.1588613184, "TRYK_U_taki_BLK"}, // 0.03%
			{9443.33709676208, "TRYK_U_taki_BL"}, // 0.03%
			{9446.51533220576, "TRYK_U_taki_COY"}, // 0.03%
			{9449.69356764944, "TRYK_U_taki_wh"}, // 0.03%
			{9452.87180309313, "TRYK_shirts_DENIM_od_Sleeve"}, // 0.03%
			{9456.05003853681, "TRYK_shirts_BLK_PAD_BL"}, // 0.03%
			{9459.22827398049, "TRYK_shirts_TAN_PAD_BL"}, // 0.03%
			{9462.40650942417, "TRYK_shirts_OD_PAD_BL"}, // 0.03%
			{9465.58474486785, "TRYK_shirts_PAD_BL"}, // 0.03%
			{9468.76298031153, "TRYK_U_taki_G_WH"}, // 0.03%
			{9471.94121575522, "TRYK_shirts_DENIM_od"}, // 0.03%
			{9475.1194511989, "TRYK_B_TRYK_3C_T"}, // 0.03%
			{9478.29768664258, "TRYK_B_TRYK_MTP_T"}, // 0.03%
			{9481.47592208626, "TRYK_shirts_DENIM_BK_Sleeve"}, // 0.03%
			{9484.65415752994, "TRYK_shirts_DENIM_WH_Sleeve"}, // 0.03%
			{9487.83239297363, "TRYK_shirts_DENIM_BWH_Sleeve"}, // 0.03%
			{9491.01062841731, "TRYK_shirts_DENIM_RED2_Sleeve"}, // 0.03%
			{9494.18886386099, "TRYK_shirts_DENIM_WHB_Sleeve"}, // 0.03%
			{9497.36709930467, "TRYK_shoulder_armor_OD"}, // 0.03%
			{9500.54533474835, "TRYK_shoulder_armor_BK"}, // 0.03%
			{9503.72357019203, "TRYK_SUITS_BR_F"}, // 0.03%
			{9506.90180563572, "TRYK_SUITS_BLK_F"}, // 0.03%
			{9510.0800410794, "TRYK_OVERALL_SAGE"}, // 0.03%
			{9513.25827652308, "TRYK_OVERALL_SAGE_BLKboots_nk_blk2"}, // 0.03%
			{9516.43651196676, "TRYK_U_pad_hood_Blod"}, // 0.03%
			{9519.61474741044, "TRYK_OVERALL_SAGE_BLKboots_nk"}, // 0.03%
			{9522.79298285413, "TRYK_OVERALL_SAGE_BLKboots"}, // 0.03%
			{9525.97121829781, "TRYK_OVERALL_nok_flesh"}, // 0.03%
			{9529.14945374149, "TRYK_OVERALL_flesh"}, // 0.03%
			{9532.32768918517, "TRYK_U_B_BLOD_T"}, // 0.03%
			{9535.50592462885, "TRYK_U_B_BLTAN_T"}, // 0.03%
			{9538.68416007253, "TRYK_U_B_Wood_T"}, // 0.03%
			{9541.86239551622, "TRYK_U_B_Sage_T"}, // 0.03%
			{9545.0406309599, "TRYK_C_AOR2_T"}, // 0.03%
			{9548.21886640358, "TRYK_DMARPAT_T"}, // 0.03%
			{9551.39710184726, "TRYK_B_TRYK_OCP_D_T"}, // 0.03%
			{9554.57533729094, "TRYK_B_TRYK_OCP_T"}, // 0.03%
			{9557.75357273463, "TRYK_OVERALL_SAGE_BLKboots_nk_blk"}, // 0.03%
			{9560.93180817831, "TRYK_U_pad_hood_CSATBlk"}, // 0.03%
			{9564.11004362199, "TRYK_hoodie_3c"}, // 0.03%
			{9567.28827906567, "TRYK_U_pad_hood_tan"}, // 0.03%
			{9570.46651450935, "TRYK_U_B_BLK_T_BK"}, // 0.03%
			{9573.64474995304, "TRYK_U_B_BLK_T_WH"}, // 0.03%
			{9576.82298539672, "TRYK_U_B_Denim_T_BK"}, // 0.03%
			{9580.0012208404, "TRYK_U_B_Denim_T_WH"}, // 0.03%
			{9583.17945628408, "TRYK_U_B_BLK_TAN_2"}, // 0.03%
			{9586.35769172776, "TRYK_U_B_BLK_TAN_1"}, // 0.03%
			{9589.53592717144, "TRYK_U_B_OD_BLK_2"}, // 0.03%
			{9592.71416261513, "TRYK_U_B_OD_BLK"}, // 0.03%
			{9595.89239805881, "TRYK_U_B_C02_Tsirt"}, // 0.03%
			{9599.07063350249, "TRYK_U_B_C01_Tsirt"}, // 0.03%
			{9602.24886894617, "TRYK_U_B_BLK_OD_Tshirt"}, // 0.03%
			{9605.42710438985, "TRYK_U_B_BLK_OD"}, // 0.03%
			{9608.60533983354, "TRYK_U_B_ODTAN_Tshirt"}, // 0.03%
			{9611.78357527722, "TRYK_U_B_ODTAN"}, // 0.03%
			{9614.9618107209, "TRYK_U_B_BLKTAN_Tshirt"}, // 0.03%
			{9618.14004616458, "TRYK_U_B_BLKTAN"}, // 0.03%
			{9621.31828160826, "TRYK_U_B_BLK_Tshirt"}, // 0.03%
			{9624.49651705194, "TRYK_U_B_BLK"}, // 0.03%
			{9627.67475249563, "TRYK_U_B_BLK3CD_Tshirt"}, // 0.03%
			{9630.85298793931, "TRYK_U_B_BLK3CD"}, // 0.03%
			{9634.03122338299, "TRYK_U_B_Sage_Tshirt"}, // 0.03%
			{9637.20945882667, "TRYK_U_B_3cr"}, // 0.03%
			{9640.38769427035, "TRYK_U_B_3c"}, // 0.03%
			{9643.56592971404, "TRYK_U_B_ACU"}, // 0.03%
			{9646.74416515772, "TRYK_U_B_3CD_BLK_BDUTshirt2"}, // 0.03%
			{9649.9224006014, "TRYK_U_B_3CD_BLK_BDUTshirt"}, // 0.03%
			{9653.10063604508, "TRYK_U_pad_hood_Blk"}, // 0.03%
			{9656.27887148876, "TRYK_U_B_RED_T_BR"}, // 0.03%
			{9659.45710693244, "TRYK_U_B_Denim_T_BG_WH"}, // 0.03%
			{9662.63534237613, "TRYK_U_B_ACUTshirt"}, // 0.03%
			{9665.81357781981, "TRYK_U_B_BLK_T_BG_WH"}, // 0.03%
			{9668.99181326349, "TRYK_U_pad_hood_Cl_blk"}, // 0.03%
			{9672.17004870717, "TRYK_U_B_Denim_T_BG_BK"}, // 0.03%
			{9675.34828415085, "TRYK_U_pad_j_blk"}, // 0.03%
			{9678.52651959454, "TRYK_U_pad_j"}, // 0.03%
			{9681.70475503822, "TRYK_U_Bts_PCUs"}, // 0.03%
			{9684.8829904819, "TRYK_U_Bts_Wood_PCUs"}, // 0.03%
			{9688.06122592558, "TRYK_U_Bts_UCP_PCUs"}, // 0.03%
			{9691.23946136926, "TRYK_U_Bts_GRYGRY_PCUs"}, // 0.03%
			{9694.41769681295, "TRYK_U_B_PCUGs_OD_R"}, // 0.03%
			{9697.59593225663, "TRYK_U_B_PCUGs_BLK_R"}, // 0.03%
			{9700.77416770031, "TRYK_U_B_PCUGs_gry_R"}, // 0.03%
			{9703.95240314399, "TRYK_U_B_PCUGs_OD"}, // 0.03%
			{9707.13063858767, "TRYK_U_B_PCUGs_BLK"}, // 0.03%
			{9710.30887403135, "TRYK_U_B_PCUGs_gry"}, // 0.03%
			{9713.48710947504, "TRYK_U_pad_hood_Cl"}, // 0.03%
			{9716.66534491872, "TRYK_U_B_PCUGs"}, // 0.03%
			{9719.8435803624, "TRYK_U_B_PCUs_R"}, // 0.03%
			{9723.02181580608, "TRYK_U_B_Wood_PCUs_R"}, // 0.03%
			{9726.20005124976, "TRYK_U_B_GRY_PCUs_R"}, // 0.03%
			{9729.37828669345, "TRYK_U_B_UCP_PCUs_R"}, // 0.03%
			{9732.55652213713, "TRYK_U_B_PCUs"}, // 0.03%
			{9735.73475758081, "TRYK_U_B_Wood_PCUs"}, // 0.03%
			{9738.91299302449, "TRYK_U_B_GRY_PCUs"}, // 0.03%
			{9742.09122846817, "TRYK_U_B_UCP_PCUs"}, // 0.03%
			{9745.26946391185, "TRYK_U_B_fleece_UCP"}, // 0.03%
			{9748.44769935554, "TRYK_U_B_fleece"}, // 0.03%
			{9751.62593479922, "TRYK_U_B_BLK_T_BG_BK"}, // 0.03%
			{9754.8041702429, "TRYK_U_B_RED_T_BG_BR"}, // 0.03%
			{9757.98240568658, "TRYK_U_B_PCUODs"}, // 0.03%
			{9761.14478958192, "TRYK_V_Sheriff_BA_T2"}, // 0.03%
			{9764.30717347725, "TRYK_V_Sheriff_BA_T3"}, // 0.03%
			{9767.46955737259, "TRYK_V_Sheriff_BA_TB2"}, // 0.03%
			{9770.3299692719, "Exile_Item_Rope"}, // 0.03%
			{9773.19038117121, "Exile_Item_MetalBoard"}, // 0.03%
			{9776.05079307053, "Exile_Item_Sand"}, // 0.03%
			{9778.90049181666, "optic_MRD"}, // 0.03%
			{9781.75019056279, "optic_Yorris"}, // 0.03%
			{9784.31982773002, "TRYK_H_LHS_HEL_G"}, // 0.03%
			{9786.88946489725, "TRYK_TAC_SET_WH"}, // 0.03%
			{9789.22700580422, "hlc_30rnd_556x45_b_hk33"}, // 0.02%
			{9791.48585144375, "TRYK_V_ArmorVest_Ranger"}, // 0.02%
			{9793.74469708327, "TRYK_V_ArmorVest_rgr"}, // 0.02%
			{9796.00354272279, "TRYK_V_ArmorVest_green"}, // 0.02%
			{9798.26238836232, "TRYK_V_ArmorVest_Delta2"}, // 0.02%
			{9800.52123400184, "TRYK_V_ArmorVest_tan2"}, // 0.02%
			{9802.78007964137, "TRYK_V_ArmorVest_green2"}, // 0.02%
			{9805.03892528089, "TRYK_V_ArmorVest_Delta"}, // 0.02%
			{9807.29777092042, "TRYK_V_ArmorVest_rgr2"}, // 0.02%
			{9809.55661655994, "TRYK_V_ArmorVest_cbr2"}, // 0.02%
			{9811.81546219946, "TRYK_V_ArmorVest_Brown2"}, // 0.02%
			{9814.07430783899, "TRYK_V_ArmorVest_tan"}, // 0.02%
			{9816.33315347851, "TRYK_V_ArmorVest_AOR2_2"}, // 0.02%
			{9818.59199911804, "TRYK_V_ArmorVest_AOR1_2"}, // 0.02%
			{9820.85084475756, "TRYK_V_ArmorVest_khk"}, // 0.02%
			{9823.10969039708, "TRYK_V_ArmorVest_khk2"}, // 0.02%
			{9825.36853603661, "TRYK_V_ArmorVest_coyo2"}, // 0.02%
			{9827.62738167613, "TRYK_V_tacv1L_BK"}, // 0.02%
			{9829.88622731566, "TRYK_V_TacVest_coyo"}, // 0.02%
			{9832.14507295518, "TRYK_V_ArmorVest_CBR"}, // 0.02%
			{9834.40391859471, "TRYK_V_tacv1LMSL_BK"}, // 0.02%
			{9836.66276423423, "TRYK_V_tacv1_MSL_NV"}, // 0.02%
			{9838.92160987375, "TRYK_V_tacv1_MSL_BK"}, // 0.02%
			{9841.18045551328, "TRYK_V_tacv1LC_P2_BK"}, // 0.02%
			{9843.4393011528, "TRYK_V_tacv1LC_SRF2_OD"}, // 0.02%
			{9845.69814679233, "TRYK_V_tacv1LC_SRF2_BK"}, // 0.02%
			{9847.95699243185, "TRYK_V_tacv1LC_FBI2_BK"}, // 0.02%
			{9850.21583807138, "TRYK_V_tacv1L_CY"}, // 0.02%
			{9852.4746837109, "TRYK_V_tacv1L_OD"}, // 0.02%
			{9854.73352935042, "TRYK_V_ArmorVest_Ranger2"}, // 0.02%
			{9856.99237498995, "TRYK_V_tacv10LC_TN"}, // 0.02%
			{9859.25122062947, "TRYK_V_tacv10LC_BK"}, // 0.02%
			{9861.510066269, "TRYK_V_tacv10_TN"}, // 0.02%
			{9863.76891190852, "TRYK_V_tacv10_OD"}, // 0.02%
			{9866.02775754805, "TRYK_V_tacv10_BK"}, // 0.02%
			{9868.28660318757, "TRYK_V_Sheriff_BA_OD"}, // 0.02%
			{9870.54544882709, "TRYK_V_ChestRig"}, // 0.02%
			{9872.80429446662, "TRYK_V_ChestRig_L"}, // 0.02%
			{9875.06314010614, "TRYK_V_harnes_TAN_L"}, // 0.02%
			{9877.32198574567, "TRYK_V_harnes_od_L"}, // 0.02%
			{9879.58083138519, "TRYK_V_harnes_blk_L"}, // 0.02%
			{9881.83967702471, "TRYK_V_tacv10LC_OD"}, // 0.02%
			{9884.09852266424, "TRYK_V_ArmorVest_Brown"}, // 0.02%
			{9886.35736830376, "TRYK_V_tacv1LC_MSL_BK"}, // 0.02%
			{9888.61621394329, "TRYK_V_ArmorVest_AOR2"}, // 0.02%
			{9890.87505958281, "TRYK_V_Sheriff_BA_TBL3_TN"}, // 0.02%
			{9893.13390522234, "TRYK_V_Sheriff_BA_TBL3_OD"}, // 0.02%
			{9895.39275086186, "TRYK_V_Sheriff_BA_TBL3_BK"}, // 0.02%
			{9897.65159650138, "TRYK_V_Sheriff_BA_TB5"}, // 0.02%
			{9899.91044214091, "TRYK_V_tacv1LMSL_NV"}, // 0.02%
			{9902.16928778043, "TRYK_V_ArmorVest_coyo"}, // 0.02%
			{9904.42813341996, "TRYK_V_Sheriff_BA_TB4"}, // 0.02%
			{9906.68697905948, "TRYK_V_Sheriff_BA_T4"}, // 0.02%
			{9908.94582469901, "TRYK_V_Sheriff_BA_TB3"}, // 0.02%
			{9911.20467033853, "TRYK_V_Sheriff_BA_T"}, // 0.02%
			{9913.46351597805, "TRYK_V_Sheriff_BA_TCL2"}, // 0.02%
			{9915.72236161758, "TRYK_V_Sheriff_BA_TBL2"}, // 0.02%
			{9917.9812072571, "TRYK_V_Sheriff_BA_TL2"}, // 0.02%
			{9920.24005289663, "TRYK_V_Sheriff_BA_T5"}, // 0.02%
			{9922.49889853615, "TRYK_V_Sheriff_BA_TBL"}, // 0.02%
			{9924.75774417567, "TRYK_V_Sheriff_BA_TCL"}, // 0.02%
			{9927.0165898152, "TRYK_V_tacv1LC_MSL_NV"}, // 0.02%
			{9929.27543545472, "TRYK_V_ArmorVest_AOR1"}, // 0.02%
			{9931.53428109425, "TRYK_V_tacSVD_OD"}, // 0.02%
			{9933.79312673377, "TRYK_V_Sheriff_BA_TL"}, // 0.02%
			{9936.0519723733, "TRYK_V_tacSVD_BK"}, // 0.02%
			{9938.19728129778, "Exile_Item_FloodLightKit"}, // 0.02%
			{9940.34259022227, "Exile_Item_FireExtinguisher"}, // 0.02%
			{9942.48789914675, "Exile_Item_PortableGeneratorKit"}, // 0.02%
			{9944.63320807124, "Exile_Item_CordlessScrewdriver"}, // 0.02%
			{9946.77851699573, "Exile_Item_Cement"}, // 0.02%
			{9948.68545826193, "U_C_Scientist"}, // 0.02%
			{9950.59239952814, "U_Rangemaster"}, // 0.02%
			{9952.49934079435, "U_C_HunterBody_grn"}, // 0.02%
			{9954.40628206056, "U_C_Poor_shorts_1"}, // 0.02%
			{9956.31322332677, "U_C_Poor_2"}, // 0.02%
			{9958.22016459298, "U_C_Poor_1"}, // 0.02%
			{9960.12710585918, "U_C_Journalist"}, // 0.02%
			{9961.68546646383, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.02%
			{9963.24382706847, "30Rnd_45ACP_Mag_SMG_01"}, // 0.02%
			{9964.80218767312, "hlc_30rnd_556x45_t_hk33"}, // 0.02%
			{9966.36054827776, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.02%
			{9967.9189088824, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.02%
			{9969.40208542279, "U_C_Poloshirt_salmon"}, // 0.01%
			{9970.88526196317, "U_C_Poloshirt_stripped"}, // 0.01%
			{9972.36843850356, "U_C_Poloshirt_burgundy"}, // 0.01%
			{9973.85161504394, "U_C_Poloshirt_tricolour"}, // 0.01%
			{9975.33479158433, "U_C_Poloshirt_blue"}, // 0.01%
			{9976.76499753399, "Exile_Melee_Shovel"}, // 0.01%
			{9978.19520348364, "Exile_Item_ThermalScannerPro"}, // 0.01%
			{9979.6254094333, "Exile_Item_Knife"}, // 0.01%
			{9980.91022801692, "TRYK_H_Helmet_Winter_2"}, // 0.01%
			{9982.19504660053, "TRYK_H_Helmet_Winter"}, // 0.01%
			{9983.36381705401, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.01%
			{9984.5325875075, "hlc_30rnd_556x45_epr_hk33"}, // 0.01%
			{9985.59199932206, "U_I_C_Soldier_Bandit_1_F"}, // 0.01%
			{9986.65141113662, "U_I_C_Soldier_Bandit_2_F"}, // 0.01%
			{9987.71082295118, "U_I_C_Soldier_Bandit_4_F"}, // 0.01%
			{9988.77023476574, "U_I_C_Soldier_Bandit_3_F"}, // 0.01%
			{9989.8296465803, "U_C_man_sport_2_F"}, // 0.01%
			{9990.88905839486, "U_C_man_sport_3_F"}, // 0.01%
			{9991.94847020942, "U_C_Man_casual_1_F"}, // 0.01%
			{9993.00788202398, "U_C_Man_casual_2_F"}, // 0.01%
			{9994.06729383854, "U_C_Man_casual_3_F"}, // 0.01%
			{9995.1267056531, "U_C_Man_casual_4_F"}, // 0.01%
			{9996.18611746766, "U_C_Man_casual_5_F"}, // 0.01%
			{9997.24552928222, "U_C_Man_casual_6_F"}, // 0.01%
			{9998.30494109678, "U_I_C_Soldier_Bandit_5_F"}, // 0.01%
			{9999.36435291134, "U_C_man_sport_1_F"}, // 0.01%
			{9999.57623527425, "U_NikosAgedBody"}, // 0.00%
			{9999.78811763716, "U_NikosBody"}, // 0.00%
			{10000.0000000001, "U_OrestesBody"} // 0.00%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_SeedAstics
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_Wrench
	  Exile_Melee_Axe
	  Exile_Item_Foolbox
	  Exile_Item_JunkMetal
	  Exile_Item_MacasCheese
	  Exile_Item_ZipTie
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Handsaw
	  Exile_Item_Grinder
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ZipTie
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Pliers
	  FlareYellow_F
	  Exile_Item_OilCanister
	  Exile_Item_Handsaw
	  Exile_Item_Rope
	  Exile_Item_ZipTie
	  Exile_Item_ScrewDriver
	  Exile_Item_DuctTape
	  Exile_Melee_SledgeHammer
	  Exile_Melee_SledgeHammer
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  FlareRed_F
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_Can_Empty
	  Exile_Item_ZipTie
	  Exile_Item_LightBulb
	  Exile_Item_ZipTie
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_MetalScrews
	  Exile_Item_CanOpener
	  Exile_Item_Wrench
	  FlareYellow_F
	  Exile_Item_ZipTie
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Rope
	  Exile_Melee_Axe
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_Foolbox
	  Exile_Item_Moobar
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_ScrewDriver
	  FlareYellow_F
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_EMRE
	  Exile_Item_FuelCanisterFull
	  Exile_Item_BBQSandwich
	  Exile_Item_SeedAstics
	  FlareGreen_F
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_ZipTie
	  FlareWhite_F
	  Exile_Item_ZipTie
	  Exile_Melee_Axe
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_ScrewDriver
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  FlareWhite_F
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Carwheel
	  FlareGreen_F
	  FlareYellow_F
	  Exile_Item_MountainDupe
	  Exile_Item_CamoTentKit
	  FlareRed_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Cement
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_Magazine02
	  Exile_Item_EnergyDrink
	  Exile_Melee_SledgeHammer
	  Exile_Item_DuctTape
	  Exile_Item_BBQSandwich
	  Exile_Item_Cheathas
	*/
	class Industrial
	{
		count = 73;
		half = 8740.73791154228;
		halfIndex = 36;
		sum = 10000;
		items[] = 
		{
			{943.396226415094, "Exile_Item_DuctTape"}, // 9.43%
			{1415.09433962264, "Exile_Item_ZipTie"}, // 4.72%
			{1886.79245283019, "Exile_Item_FuelCanisterEmpty"}, // 4.72%
			{2240.56603773585, "FlareWhite_F"}, // 3.54%
			{2594.33962264151, "FlareRed_F"}, // 3.54%
			{2948.11320754717, "FlareGreen_F"}, // 3.54%
			{3301.88679245283, "FlareYellow_F"}, // 3.54%
			{3624.62760675273, "Exile_Item_Handsaw"}, // 3.23%
			{3947.36842105263, "Exile_Item_Pliers"}, // 3.23%
			{4270.10923535253, "Exile_Item_ScrewDriver"}, // 3.23%
			{4584.57464415756, "Exile_Item_Carwheel"}, // 3.14%
			{4899.04005296259, "Exile_Item_OilCanister"}, // 3.14%
			{5172.12843429328, "Exile_Item_JunkMetal"}, // 2.73%
			{5420.39059913936, "Exile_Item_WaterCanisterEmpty"}, // 2.48%
			{5668.65276398543, "Exile_Item_MetalScrews"}, // 2.48%
			{5916.91492883151, "Exile_Melee_Axe"}, // 2.48%
			{6152.76398543528, "Exile_Item_Can_Empty"}, // 2.36%
			{6388.61304203906, "Exile_Item_ToiletPaper"}, // 2.36%
			{6624.46209864283, "Exile_Item_PlasticBottleEmpty"}, // 2.36%
			{6847.8980470043, "Exile_Item_LightBulb"}, // 2.23%
			{7046.50777888116, "Exile_Item_ExtensionCord"}, // 1.99%
			{7203.74048328368, "Exile_Item_Wrench"}, // 1.57%
			{7360.9731876862, "Exile_Item_FuelCanisterFull"}, // 1.57%
			{7509.93048659384, "Exile_Item_CamoTentKit"}, // 1.49%
			{7658.88778550149, "Exile_Item_Foolbox"}, // 1.49%
			{7783.01886792453, "Exile_Item_Grinder"}, // 1.24%
			{7907.14995034757, "Exile_Melee_SledgeHammer"}, // 1.24%
			{8006.454816286, "Exile_Item_Sand"}, // 0.99%
			{8105.75968222443, "Exile_Item_MetalBoard"}, // 0.99%
			{8205.06454816286, "Exile_Item_Rope"}, // 0.99%
			{8295.7757237797, "Exile_Item_PlasticBottleDirtyWater"}, // 0.91%
			{8370.25437323352, "Exile_Item_FloodLightKit"}, // 0.74%
			{8444.73302268734, "Exile_Item_FireExtinguisher"}, // 0.74%
			{8519.21167214117, "Exile_Item_CordlessScrewdriver"}, // 0.74%
			{8593.69032159499, "Exile_Item_PortableGeneratorKit"}, // 0.74%
			{8668.16897104882, "Exile_Item_Cement"}, // 0.74%
			{8740.73791154228, "Exile_Item_MountainDupe"}, // 0.73%
			{8813.30685203575, "Exile_Item_ChocolateMilk"}, // 0.73%
			{8874.9904514552, "Exile_Item_EnergyDrink"}, // 0.62%
			{8933.95271560614, "Exile_Item_Magazine03"}, // 0.59%
			{8992.91497975709, "Exile_Item_Magazine04"}, // 0.59%
			{9051.87724390803, "Exile_Item_Magazine02"}, // 0.59%
			{9110.83950805897, "Exile_Item_Magazine01"}, // 0.59%
			{9165.26621342908, "Exile_Item_PlasticBottleCoffee"}, // 0.54%
			{9216.06447177451, "Exile_Item_Beer"}, // 0.51%
			{9265.71690474372, "Exile_Item_ThermalScannerPro"}, // 0.50%
			{9315.36933771293, "Exile_Item_Knife"}, // 0.50%
			{9365.02177068215, "Exile_Melee_Shovel"}, // 0.50%
			{9412.1915820029, "Exile_Item_BaseCameraKit"}, // 0.47%
			{9459.36139332366, "Exile_Item_Laptop"}, // 0.47%
			{9502.90275761974, "Exile_Item_PlasticBottleFreshWater"}, // 0.44%
			{9533.13981615869, "Exile_Item_Matches"}, // 0.30%
			{9563.37687469763, "Exile_Item_CanOpener"}, // 0.30%
			{9590.59022738268, "Exile_Item_Moobar"}, // 0.27%
			{9617.80358006773, "Exile_Item_Raisins"}, // 0.27%
			{9643.20270924045, "Exile_Item_PowerDrink"}, // 0.25%
			{9667.3923560716, "Exile_Item_SeedAstics"}, // 0.24%
			{9691.58200290276, "Exile_Item_CockONut"}, // 0.24%
			{9715.77164973392, "Exile_Item_InstantCoffee"}, // 0.24%
			{9739.96129656507, "Exile_Item_EMRE"}, // 0.24%
			{9761.12723754234, "Exile_Item_SausageGravy"}, // 0.21%
			{9782.2931785196, "Exile_Item_Surstromming"}, // 0.21%
			{9803.45911949686, "Exile_Item_ChristmasTinner"}, // 0.21%
			{9824.62506047412, "Exile_Item_Noodles"}, // 0.21%
			{9845.79100145138, "Exile_Item_BBQSandwich"}, // 0.21%
			{9866.95694242865, "Exile_Item_CatFood"}, // 0.21%
			{9888.12288340591, "Exile_Item_Dogfood"}, // 0.21%
			{9909.28882438317, "Exile_Item_BeefParts"}, // 0.21%
			{9930.45476536043, "Exile_Item_Cheathas"}, // 0.21%
			{9951.62070633769, "Exile_Item_DsNuts"}, // 0.21%
			{9972.78664731496, "Exile_Item_MacasCheese"}, // 0.21%
			{9990.92888243832, "Exile_Item_GloriousKnakworst"}, // 0.18%
			{10000, "Exile_Item_CookingPot"} // 0.09%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_FireExtinguisher
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_Pliers
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_ExtensionCord
	  Exile_Item_Carwheel
	  Exile_Item_Magazine02
	  Exile_Item_OilCanister
	  Exile_Item_Laptop
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_LightBulb
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_LightBulb
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_FloodLightKit
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Wrench
	  Exile_Item_Can_Empty
	  Exile_Item_Handsaw
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  Exile_Item_Magazine01
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Item_MetalScrews
	  Exile_Item_Can_Empty
	  Exile_Melee_Axe
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Cement
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Pliers
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Exile_Item_JunkMetal
	  Exile_Item_OilCanister
	  Exile_Item_ScrewDriver
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Cement
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Handsaw
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  Exile_Item_CordlessScrewdriver
	  Exile_Item_ExtensionCord
	  Exile_Item_Knife
	  Exile_Item_FireExtinguisher
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_CamoTentKit
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_CamoTentKit
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Handsaw
	  Exile_Item_JunkMetal
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_JunkMetal
	  Exile_Item_Pliers
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Foolbox
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_Rope
	  Exile_Item_Grinder
	  Exile_Item_Magazine01
	  Exile_Item_DuctTape
	  Exile_Item_Knife
	  Exile_Item_BaseCameraKit
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

	  Exile_Item_MetalBoard
	  FlareWhite_F
	  Exile_Item_DuctTape
	  Exile_Item_Carwheel
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_FuelCanisterFull
	  FlareWhite_F
	  Exile_Item_ScrewDriver
	  Exile_Item_ZipTie
	  Exile_Item_ThermalScannerPro
	  Exile_Item_DuctTape
	  Exile_Item_ZipTie
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Handsaw
	  Exile_Item_ToiletPaper
	  Exile_Item_Pliers
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Grinder
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_OilCanister
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Magazine03
	  Exile_Item_Magazine03
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  FlareGreen_F
	  Exile_Item_DuctTape
	  FlareYellow_F
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_DuctTape
	  FlareWhite_F
	  Exile_Item_Rope
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_DuctTape
	  Exile_Item_Magazine01
	  FlareWhite_F
	  Exile_Item_ZipTie
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ScrewDriver
	  Exile_Item_Rope
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Carwheel
	  Exile_Item_ToiletPaper
	  FlareWhite_F
	  Exile_Item_FireExtinguisher
	  Exile_Item_Handsaw
	  Exile_Item_FloodLightKit
	  Exile_Item_MetalBoard
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  FlareRed_F
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Carwheel
	  FlareRed_F
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  FlareRed_F
	  Exile_Item_OilCanister
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Melee_Axe
	  Exile_Item_ScrewDriver
	  Exile_Item_Can_Empty
	  FlareYellow_F
	  Exile_Item_MetalScrews
	  Exile_Item_FuelCanisterEmpty
	  FlareRed_F
	  Exile_Item_LightBulb
	  Exile_Melee_Axe
	  Exile_Item_Magazine03
	  Exile_Item_DuctTape
	  Exile_Item_PortableGeneratorKit
	  Exile_Melee_Shovel
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

	  TRYK_U_B_NATO_UCP_R_CombatUniform
	  hlc_100Rnd_762x51_B_M60E4
	  muzzle_snds_L
	  TRYK_H_Helmet_Winter
	  TRYK_B_Coyotebackpack_OD
	  Exile_Item_ToiletPaper
	  16Rnd_9x21_Mag
	  H_MilCap_blue
	  UGL_FlareRed_F
	  TRYK_V_PlateCarrier_ACU_L
	  muzzle_snds_338_black
	  CUP_arifle_L85A2_NG
	  CUP_muzzle_snds_MicroUzi
	  U_IG_Guerilla2_3
	  U_B_CTRG_Soldier_urb_1_F
	  srifle_DMR_07_ghex_F
	  ItemMap
	  CUP_srifle_M110
	  U_B_T_Soldier_AR_F
	  150Rnd_93x64_Mag
	  CUP_acc_CZ_M3X
	  hlc_rifle_honeybadger
	  V_PlateCarrierSpec_rgr
	  bipod_02_F_hex
	  CUP_hgun_PB6P9_snds
	  Exile_Item_Vishpirin
	  CUP_optic_SB_11_4x20_PM
	  Exile_Item_ZipTie
	  hlc_30Rnd_9x19_GD_MP5
	  Exile_Item_ToiletPaper
	  29rnd_300BLK_STANAG_T
	  hlc_45Rnd_762x39_m_rpk
	  Exile_Item_Can_Empty
	  10Rnd_127x54_Mag
	  Exile_Item_Magazine02
	  hlc_30rnd_556x45_EPR
	  hlc_5rnd_300WM_FMJ_AWM
	  10Rnd_127x54_Mag
	  Exile_Magazine_100Rnd_762x54_PK_Green
	  CUP_acc_CZ_M3X
	  bipod_01_F_snd
	  MiniGrenade
	  muzzle_snds_B_khk_F
	  TRYK_U_B_woodR_CombatUniformTshirt
	  CUP_20Rnd_TE1_Red_Tracer_762x51_M110
	  Exile_Magazine_6Rnd_45ACP
	  Exile_Item_ZipTie
	  TRYK_B_Carryall_blk
	  muzzle_snds_L
	  U_I_C_Soldier_Para_1_F
	  UGL_FlareYellow_F
	  muzzle_snds_338_black
	  ItemCompass
	  150Rnd_93x64_Mag
	  U_B_GhillieSuit
	  Exile_Item_ToiletPaper
	  CUP_hgun_Phantom
	  TRYK_V_Bulletproof_BL
	  TRYK_U_B_BLKOCP_R_CombatUniformTshirt
	  HandGrenade
	  optic_DMS
	  CUP_hgun_Duty_M3X
	  bipod_01_F_blk
	  U_IG_Guerilla3_1
	  TRYK_U_B_Snowt
	  1Rnd_SmokeGreen_Grenade_shell
	  H_Watchcap_camo
	  TRYK_U_B_NATO_UCP_GRY_R_CombatUniform
	  hlc_smg_mp5k
	  CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
	  CUP_acc_CZ_M3X
	  CUP_hgun_Phantom
	  CUP_muzzle_snds_MicroUzi
	  hlc_20rnd_762x51_b_G3
	  B_Bergen_mcamo
	  Exile_Item_ToiletPaper
	  U_O_GhillieSuit
	  CUP_hgun_Duty_M3X
	  Exile_Weapon_Makarov
	  optic_AMS
	  SatchelCharge_Remote_Mag
	  V_PlateCarrierIAGL_dgtl
	  ItemCompass
	  hlc_20rnd_762x51_T_G3
	  TAC_W_ghillie_02
	  hlc_smg_mp5k_PDW
	  bipod_01_F_khk
	  H_HelmetB_light_black
	  TRYK_V_PlateCarrier_oli
	  optic_SOS
	  CUP_20Rnd_762x51_B_SCAR
	  H_Booniehat_dgtl
	  optic_AMS_khk
	  srifle_EBR_F
	  hlc_rifle_augsrcarb_b
	  30Rnd_556x45_Stanag_Tracer_Green
	  hlc_rifle_awcovert_BL
	  Exile_Item_ToiletPaper
	  H_Booniehat_tna_F
	  Exile_Weapon_SVDCamo
	*/
	class Military
	{
		count = 977;
		half = 8369.61214254558;
		halfIndex = 488;
		sum = 9999.99999999996;
		items[] = 
		{
			{142.450142450142, "Exile_Item_Can_Empty"}, // 1.42%
			{284.900284900285, "Exile_Item_ToiletPaper"}, // 1.42%
			{427.350427350427, "Exile_Item_PlasticBottleEmpty"}, // 1.42%
			{542.590992029194, "muzzle_snds_acp"}, // 1.15%
			{657.831556707961, "muzzle_snds_L"}, // 1.15%
			{743.301642178047, "20Rnd_762x51_Mag"}, // 0.85%
			{817.623455630295, "ItemCompass"}, // 0.74%
			{888.848526855366, "MiniGrenade"}, // 0.71%
			{960.073598080437, "HandGrenade"}, // 0.71%
			{1024.09613401309, "CUP_muzzle_snds_MicroUzi"}, // 0.64%
			{1088.11866994573, "CUP_acc_Glock17_Flashlight"}, // 0.64%
			{1152.14120587838, "CUP_acc_CZ_M3X"}, // 0.64%
			{1211.97026570744, "DemoCharge_Remote_Mag"}, // 0.60%
			{1270.70355520996, "1Rnd_HE_Grenade_shell"}, // 0.59%
			{1328.32383754935, "CUP_muzzle_snds_M9"}, // 0.58%
			{1385.3038945294, "10Rnd_127x54_Mag"}, // 0.57%
			{1442.28395150946, "Exile_Item_ZipTie"}, // 0.57%
			{1494.8017148706, "150Rnd_93x64_Mag"}, // 0.53%
			{1546.60176667065, "TRYK_B_Coyotebackpack_WH"}, // 0.52%
			{1598.4018184707, "TRYK_Winter_pack"}, // 0.52%
			{1643.21759362355, "optic_Yorris"}, // 0.45%
			{1688.03336877641, "optic_MRD"}, // 0.45%
			{1728.73340947645, "optic_KHS_tan"}, // 0.41%
			{1769.43345017649, "optic_AMS"}, // 0.41%
			{1810.13349087653, "optic_AMS_khk"}, // 0.41%
			{1850.83353157657, "optic_KHS_old"}, // 0.41%
			{1891.53357227661, "optic_KHS_blk"}, // 0.41%
			{1932.23361297665, "optic_AMS_snd"}, // 0.41%
			{1972.93365367669, "optic_KHS_hex"}, // 0.41%
			{2012.9977562408, "CUP_hgun_Phantom"}, // 0.40%
			{2052.88379612684, "SatchelCharge_Remote_Mag"}, // 0.40%
			{2092.13026394473, "optic_DMS"}, // 0.39%
			{2130.1169685981, "V_RebreatherB"}, // 0.38%
			{2168.10367325147, "V_RebreatherIR"}, // 0.38%
			{2206.09037790485, "V_RebreatherIA"}, // 0.38%
			{2243.8832728406, "optic_LRPS_ghex_F"}, // 0.38%
			{2281.67616777635, "optic_LRPS_tna_F"}, // 0.38%
			{2319.4690627121, "optic_LRPS"}, // 0.38%
			{2357.26195764785, "optic_SOS_khk_F"}, // 0.38%
			{2395.05485258361, "optic_SOS"}, // 0.38%
			{2432.21575930973, "Rangefinder"}, // 0.37%
			{2468.54532584064, "B_Carryall_cbr"}, // 0.36%
			{2504.87489237155, "B_Carryall_ghex_F"}, // 0.36%
			{2540.48742798408, "Exile_Item_Magazine01"}, // 0.36%
			{2576.09996359662, "Exile_Item_Magazine02"}, // 0.36%
			{2611.71249920915, "Exile_Item_Magazine03"}, // 0.36%
			{2647.32503482169, "Exile_Item_Magazine04"}, // 0.36%
			{2681.7425189036, "B_Carryall_khk"}, // 0.34%
			{2716.16000298552, "B_Carryall_oli"}, // 0.34%
			{2749.54675512227, "hlc_smg_mp5k"}, // 0.33%
			{2782.93350725902, "hlc_smg_mp5k_PDW"}, // 0.33%
			{2816.32025939577, "hgun_Pistol_heavy_01_F"}, // 0.33%
			{2848.39512590773, "bipod_03_F_oli"}, // 0.32%
			{2880.46999241968, "bipod_02_F_tan"}, // 0.32%
			{2912.54485893163, "bipod_03_F_blk"}, // 0.32%
			{2944.61972544358, "bipod_02_F_blk"}, // 0.32%
			{2976.69459195554, "bipod_01_F_khk"}, // 0.32%
			{3008.76945846749, "bipod_01_F_blk"}, // 0.32%
			{3040.84432497944, "bipod_01_F_snd"}, // 0.32%
			{3071.03243463775, "bipod_01_F_mtp"}, // 0.30%
			{3101.22054429606, "bipod_02_F_hex"}, // 0.30%
			{3131.31564481369, "Exile_Magazine_6Rnd_45ACP"}, // 0.30%
			{3161.41074533133, "Exile_Magazine_8Rnd_9x18"}, // 0.30%
			{3191.50584584897, "10Rnd_9x21_Mag"}, // 0.30%
			{3221.6009463666, "11Rnd_45ACP_Mag"}, // 0.30%
			{3251.69604688424, "Exile_Magazine_7Rnd_45ACP"}, // 0.30%
			{3281.79114740187, "30Rnd_9x21_Mag"}, // 0.30%
			{3311.88624791951, "9Rnd_45ACP_Mag"}, // 0.30%
			{3341.98134843714, "hlc_30Rnd_9x19_B_MP5"}, // 0.30%
			{3371.81383900262, "ItemMap"}, // 0.30%
			{3401.36781046531, "Exile_Weapon_RPK"}, // 0.30%
			{3430.84025373085, "Exile_Item_Vishpirin"}, // 0.29%
			{3460.3126969964, "Exile_Item_Heatpack"}, // 0.29%
			{3489.24788218158, "hgun_P07_khk_F"}, // 0.29%
			{3518.18306736677, "CUP_hgun_SA61"}, // 0.29%
			{3547.11825255195, "hgun_Rook40_F"}, // 0.29%
			{3576.05343773714, "hgun_Pistol_01_F"}, // 0.29%
			{3604.98177435778, "3Rnd_HE_Grenade_shell"}, // 0.29%
			{3633.66301109271, "B_Carryall_mcamo"}, // 0.29%
			{3662.34424782764, "B_Carryall_oucamo"}, // 0.29%
			{3691.02548456257, "B_Carryall_ocamo"}, // 0.29%
			{3719.5155130526, "V_PlateCarrierIA2_dgtl"}, // 0.28%
			{3748.00554154262, "V_PlateCarrierSpec_rgr"}, // 0.28%
			{3776.49557003265, "U_I_GhillieSuit"}, // 0.28%
			{3804.98559852268, "V_PlateCarrierIAGL_dgtl"}, // 0.28%
			{3833.47562701271, "V_PlateCarrierIA1_dgtl"}, // 0.28%
			{3861.96565550274, "U_O_GhillieSuit"}, // 0.28%
			{3890.45568399277, "U_B_GhillieSuit"}, // 0.28%
			{3918.9457124828, "V_PlateCarrierGL_rgr"}, // 0.28%
			{3947.43574097283, "V_PlateCarrier3_rgr"}, // 0.28%
			{3975.92576946285, "V_PlateCarrier2_rgr"}, // 0.28%
			{4004.41579795288, "V_PlateCarrier1_rgr"}, // 0.28%
			{4032.90582644291, "V_PlateCarrier1_blk"}, // 0.28%
			{4060.52371120365, "muzzle_snds_B"}, // 0.28%
			{4087.60930166952, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.27%
			{4114.6948921354, "hlc_30Rnd_9x19_GD_MP5"}, // 0.27%
			{4141.78048260127, "CUP_18Rnd_9x19_Phantom"}, // 0.27%
			{4168.86607306714, "CUP_30Rnd_9x19_UZI"}, // 0.27%
			{4195.57547477654, "CUP_hgun_Duty_M3X"}, // 0.27%
			{4222.28487648594, "hgun_P07_F"}, // 0.27%
			{4248.58336432289, "CUP_6Rnd_HE_M203"}, // 0.26%
			{4274.48339022292, "TRYK_B_Carryall_JSDF"}, // 0.26%
			{4300.38341612295, "TRYK_B_Coyotebackpack_BLK"}, // 0.26%
			{4326.28344202297, "TRYK_B_Coyotebackpack_OD"}, // 0.26%
			{4352.183467923, "TRYK_B_Coyotebackpack"}, // 0.26%
			{4378.08349382302, "TRYK_B_Carryall_blk"}, // 0.26%
			{4403.98351972305, "TRYK_B_Carryall_wh"}, // 0.26%
			{4429.88354562307, "TRYK_B_Carryall_wood"}, // 0.26%
			{4454.57490364777, "TRYK_H_Helmet_Winter"}, // 0.25%
			{4479.26626167246, "TRYK_H_Helmet_Winter_2"}, // 0.25%
			{4503.95761969715, "TRYK_U_B_Snow_CombatUniform"}, // 0.25%
			{4528.64897772184, "TAC_W_ghillie_01"}, // 0.25%
			{4553.34033574653, "TRYK_Winter_pack"}, // 0.25%
			{4578.03169377122, "TAC_W_ghillie_02"}, // 0.25%
			{4602.72305179591, "TRYK_U_B_Snowt"}, // 0.25%
			{4627.4144098206, "TRYK_U_B_PCUHsW"}, // 0.25%
			{4652.10576784529, "TRYK_U_B_PCUHsW2"}, // 0.25%
			{4676.79712586998, "TRYK_U_B_PCUHsW3nh"}, // 0.25%
			{4701.48848389468, "TRYK_U_B_PCUHsW4"}, // 0.25%
			{4726.17984191937, "TRYK_U_B_PCUHsW5"}, // 0.25%
			{4750.87119994406, "TRYK_U_B_PCUHsW6"}, // 0.25%
			{4775.56255796875, "TRYK_V_ArmorVest_Winter"}, // 0.25%
			{4800.25391599344, "TRYK_B_Coyotebackpack_WH"}, // 0.25%
			{4824.32999640755, "6Rnd_45ACP_Cylinder"}, // 0.24%
			{4848.19598885993, "Exile_Item_Heatpack"}, // 0.24%
			{4872.06198131231, "ItemCompass"}, // 0.24%
			{4894.31981607014, "CUP_hgun_PB6P9_snds"}, // 0.22%
			{4915.59867552328, "CUP_arifle_RPK74"}, // 0.21%
			{4935.5416954663, "IEDUrbanSmall_Remote_Mag"}, // 0.20%
			{4955.48471540932, "APERSTripMine_Wire_Mag"}, // 0.20%
			{4975.42773535233, "IEDLandSmall_Remote_Mag"}, // 0.20%
			{4995.37075529535, "APERSMine_Range_Mag"}, // 0.20%
			{5015.31377523837, "APERSBoundingMine_Range_Mag"}, // 0.20%
			{5034.30712756506, "muzzle_snds_338_green"}, // 0.19%
			{5053.30047989175, "muzzle_snds_338_black"}, // 0.19%
			{5072.29383221843, "muzzle_snds_338_sand"}, // 0.19%
			{5091.28718454512, "muzzle_snds_93mmg"}, // 0.19%
			{5110.2805368718, "muzzle_snds_93mmg_tan"}, // 0.19%
			{5129.27388919849, "muzzle_snds_B"}, // 0.19%
			{5148.18843093461, "CUP_lmg_m249_para"}, // 0.19%
			{5167.10297267072, "CUP_lmg_minimi_railed"}, // 0.19%
			{5185.16003298131, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.18%
			{5203.05952732059, "Binocular"}, // 0.18%
			{5220.86579512686, "CUP_hgun_MicroUzi"}, // 0.18%
			{5238.67206293313, "CUP_optic_ACOG"}, // 0.18%
			{5256.40444581074, "CUP_lmg_Pecheneg"}, // 0.18%
			{5274.13682868835, "hlc_lmg_M60E4"}, // 0.18%
			{5291.66915391298, "U_IG_Guerilla2_3"}, // 0.18%
			{5309.20147913761, "U_IG_Guerilla2_2"}, // 0.18%
			{5326.73380436225, "U_IG_Guerilla2_1"}, // 0.18%
			{5344.26612958688, "U_IG_Guerilla1_1"}, // 0.18%
			{5360.81635360598, "CUP_lmg_L110A1"}, // 0.17%
			{5377.36657762509, "CUP_lmg_PKM"}, // 0.17%
			{5393.80313252318, "U_IG_Guerilla3_2"}, // 0.16%
			{5410.23968742127, "U_IG_Guerilla3_1"}, // 0.16%
			{5425.82017175176, "hgun_ACPC2_F"}, // 0.16%
			{5441.40065608224, "hgun_Pistol_heavy_02_F"}, // 0.16%
			{5456.84705707081, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.15%
			{5472.29345805938, "CUP_30Rnd_545x39_AK_M"}, // 0.15%
			{5487.6663766581, "hlc_5rnd_300WM_mk248_AWM"}, // 0.15%
			{5503.0344418187, "CUP_lmg_M60E4"}, // 0.15%
			{5518.4025069793, "Exile_Weapon_PK"}, // 0.15%
			{5533.77057213989, "Exile_Weapon_PKP"}, // 0.15%
			{5549.13863730049, "hlc_lmg_m60"}, // 0.15%
			{5564.50670246109, "CUP_lmg_Mk48_des"}, // 0.15%
			{5579.87476762168, "CUP_lmg_M240"}, // 0.15%
			{5594.9223178805, "16Rnd_9x21_Mag"}, // 0.15%
			{5609.82227530919, "hlc_50rnd_762x51_M_G3"}, // 0.15%
			{5624.55849694197, "Exile_Item_Bandage"}, // 0.15%
			{5639.09422576341, "muzzle_snds_B_snd_F"}, // 0.15%
			{5653.62995458485, "muzzle_snds_B_khk_F"}, // 0.15%
			{5668.15986911477, "UGL_FlareWhite_F"}, // 0.15%
			{5682.68978364468, "UGL_FlareRed_F"}, // 0.15%
			{5697.21969817459, "UGL_FlareYellow_F"}, // 0.15%
			{5711.74961270451, "UGL_FlareGreen_F"}, // 0.15%
			{5726.16625362717, "hlc_100Rnd_762x51_B_M60E4"}, // 0.14%
			{5740.58289454984, "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}, // 0.14%
			{5754.99953547251, "CUP_30Rnd_Subsonic_545x39_AK_M"}, // 0.14%
			{5769.41617639517, "CUP_30Rnd_762x39_AK47_M"}, // 0.14%
			{5783.66119064018, "V_PlateCarrierH_CTRG"}, // 0.14%
			{5797.9062048852, "V_PlateCarrierL_CTRG"}, // 0.14%
			{5812.02515705725, "srifle_DMR_01_F"}, // 0.14%
			{5826.1441092293, "srifle_EBR_F"}, // 0.14%
			{5840.1802522977, "20Rnd_650x39_Cased_Mag_F"}, // 0.14%
			{5853.93405915496, "hlc_20rnd_762x51_b_G3"}, // 0.14%
			{5867.32094001172, "hlc_100Rnd_762x51_M_M60E4"}, // 0.13%
			{5880.70782086848, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.13%
			{5894.07557617172, "CUP_srifle_SVD_des"}, // 0.13%
			{5907.44333147495, "CUP_5Rnd_762x51_M24"}, // 0.13%
			{5920.81108677819, "CUP_10Rnd_762x54_SVD_M"}, // 0.13%
			{5934.17884208143, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.13%
			{5947.53354293613, "Exile_Weapon_Makarov"}, // 0.13%
			{5960.64399852447, "CUP_srifle_SVD"}, // 0.13%
			{5973.34336606254, "20Rnd_762x51_Mag"}, // 0.13%
			{5985.95102234836, "hlc_20rnd_762x51_T_G3"}, // 0.13%
			{5998.55722964483, "CUP_srifle_M24_wdl"}, // 0.13%
			{6011.16343694131, "CUP_srifle_M40A3"}, // 0.13%
			{6023.76964423778, "CUP_srifle_M24_des"}, // 0.13%
			{6036.12676502863, "100Rnd_65x39_caseless_mag"}, // 0.12%
			{6048.48388581949, "150Rnd_762x54_Box"}, // 0.12%
			{6060.6938980295, "SmokeShellBlue"}, // 0.12%
			{6072.90391023951, "SmokeShellYellow"}, // 0.12%
			{6085.11392244952, "SmokeShell"}, // 0.12%
			{6097.32393465954, "SmokeShellPurple"}, // 0.12%
			{6109.53394686955, "SmokeShellRed"}, // 0.12%
			{6121.74395907956, "SmokeShellOrange"}, // 0.12%
			{6133.95397128957, "SmokeShellGreen"}, // 0.12%
			{6145.98495106249, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.12%
			{6158.0159308354, "hlc_5rnd_300WM_AP_AWM"}, // 0.12%
			{6170.04691060832, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.12%
			{6182.0427120778, "TRYK_V_ArmorVest_Winter"}, // 0.12%
			{6193.97570830399, "ItemRadio"}, // 0.12%
			{6205.86719845635, "O_NVGoggles_ghex_F"}, // 0.12%
			{6217.75868860871, "NVGoggles_tna_F"}, // 0.12%
			{6229.65017876107, "O_NVGoggles_hex_F"}, // 0.12%
			{6241.54166891343, "NVGoggles"}, // 0.12%
			{6253.43315906579, "O_NVGoggles_urb_F"}, // 0.12%
			{6265.30400426997, "optic_SOS"}, // 0.12%
			{6277.17484947415, "optic_AMS"}, // 0.12%
			{6289.04569467833, "optic_DMS"}, // 0.12%
			{6300.9165398825, "CUP_optic_LeupoldM3LR"}, // 0.12%
			{6312.78738508668, "optic_LRPS"}, // 0.12%
			{6324.65823029086, "CUP_optic_SB_11_4x20_PM"}, // 0.12%
			{6336.52907549504, "optic_KHS_hex"}, // 0.12%
			{6348.39992069922, "optic_KHS_blk"}, // 0.12%
			{6360.27076590339, "muzzle_snds_B"}, // 0.12%
			{6372.14161110757, "CUP_muzzle_snds_M14"}, // 0.12%
			{6383.96319969265, "LMG_03_F"}, // 0.12%
			{6395.78478827772, "LMG_Zafir_F"}, // 0.12%
			{6407.6063768628, "CUP_lmg_L7A2"}, // 0.12%
			{6419.39535416901, "Exile_Item_InstaDoc"}, // 0.12%
			{6430.86784886299, "B_Bergen_hex_F"}, // 0.11%
			{6442.34034355696, "B_Bergen_dgtl_F"}, // 0.11%
			{6453.81283825093, "B_Bergen_mcamo_F"}, // 0.11%
			{6465.2853329449, "B_Bergen_Base_F"}, // 0.11%
			{6476.75782763887, "B_Bergen_tna_F"}, // 0.11%
			{6488.21933335325, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.11%
			{6499.68083906763, "hlc_20Rnd_762x51_B_M14"}, // 0.11%
			{6511.14234478201, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.11%
			{6522.60385049639, "CUP_20Rnd_762x51_B_SCAR"}, // 0.11%
			{6534.06535621077, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.11%
			{6545.52686192515, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.11%
			{6556.98836763953, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.11%
			{6568.4498733539, "CUP_20Rnd_762x51_DMR"}, // 0.11%
			{6579.91137906828, "hlc_20Rnd_762x51_B_fal"}, // 0.11%
			{6591.27397107604, "10Rnd_762x54_Mag"}, // 0.11%
			{6602.40288845495, "Exile_Weapon_Colt1911"}, // 0.11%
			{6613.09709269755, "CUP_5Rnd_762x67_G22"}, // 0.11%
			{6623.63037787872, "6Rnd_GreenSignal_F"}, // 0.11%
			{6634.16366305989, "6Rnd_RedSignal_F"}, // 0.11%
			{6644.65998934569, "TRYK_V_PlateCarrier_wood"}, // 0.10%
			{6654.95759000474, "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}, // 0.10%
			{6665.25519066378, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.10%
			{6675.55279132283, "150Rnd_762x54_Box_Tracer"}, // 0.10%
			{6685.85039198188, "Exile_Magazine_45Rnd_545x39_RPK_Green"}, // 0.10%
			{6696.14799264092, "Exile_Magazine_75Rnd_545x39_RPK_Green"}, // 0.10%
			{6706.44559329997, "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.10%
			{6716.74319395901, "Exile_Magazine_100Rnd_762x54_PK_Green"}, // 0.10%
			{6727.04079461806, "200Rnd_556x45_Box_F"}, // 0.10%
			{6737.33839527711, "CUP_200Rnd_TE1_Red_Tracer_556x45_M249"}, // 0.10%
			{6747.63599593615, "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249"}, // 0.10%
			{6757.9335965952, "200Rnd_556x45_Box_Red_F"}, // 0.10%
			{6768.23119725424, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.10%
			{6778.52879791329, "200Rnd_556x45_Box_Tracer_F"}, // 0.10%
			{6788.61376375047, "srifle_DMR_06_camo_F"}, // 0.10%
			{6798.69872958765, "CUP_srifle_VSSVintorez"}, // 0.10%
			{6808.78369542483, "srifle_DMR_03_F"}, // 0.10%
			{6818.868661262, "srifle_DMR_03_khaki_F"}, // 0.10%
			{6828.95362709918, "srifle_DMR_03_tan_F"}, // 0.10%
			{6839.03859293636, "srifle_DMR_06_olive_F"}, // 0.10%
			{6849.12355877354, "srifle_DMR_03_woodland_F"}, // 0.10%
			{6859.14937525097, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.10%
			{6869.1751917284, "CUP_10Rnd_762x51_CZ750"}, // 0.10%
			{6879.20100820583, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.10%
			{6888.57272810386, "U_O_T_Soldier_F"}, // 0.09%
			{6897.9444480019, "U_B_CTRG_2"}, // 0.09%
			{6907.31616789993, "U_B_CTRG_3"}, // 0.09%
			{6916.68788779797, "U_B_CombatUniform_mcam"}, // 0.09%
			{6926.059607696, "U_B_CombatUniform_mcam_tshirt"}, // 0.09%
			{6935.43132759404, "U_B_CombatUniform_mcam_vest"}, // 0.09%
			{6944.80304749208, "U_B_CombatUniform_mcam_worn"}, // 0.09%
			{6954.17476739011, "U_B_GEN_Commander_F"}, // 0.09%
			{6963.54648728815, "U_B_T_Soldier_AR_F"}, // 0.09%
			{6972.91820718618, "U_B_T_Soldier_SL_F"}, // 0.09%
			{6982.28992708422, "U_B_CTRG_Soldier_2_F"}, // 0.09%
			{6991.66164698225, "U_B_CTRG_Soldier_3_F"}, // 0.09%
			{7001.03336688029, "U_B_CTRG_Soldier_urb_1_F"}, // 0.09%
			{7010.40508677833, "U_B_CTRG_Soldier_urb_2_F"}, // 0.09%
			{7019.77680667636, "U_B_CTRG_Soldier_urb_3_F"}, // 0.09%
			{7029.1485265744, "U_B_GEN_Soldier_F"}, // 0.09%
			{7038.52024647243, "U_O_T_Officer_F"}, // 0.09%
			{7047.89196637047, "U_B_CTRG_Soldier_F"}, // 0.09%
			{7057.2636862685, "U_B_CTRG_1"}, // 0.09%
			{7066.52873618396, "H_MilCap_dgtl"}, // 0.09%
			{7075.79378609942, "H_MilCap_rucamo"}, // 0.09%
			{7085.05883601487, "H_MilCap_blue"}, // 0.09%
			{7094.32388593033, "H_MilCap_oucamo"}, // 0.09%
			{7103.58893584579, "H_MilCap_mcamo"}, // 0.09%
			{7112.85398576124, "H_MilCap_ocamo"}, // 0.09%
			{7122.1190356767, "Exile_Headgear_GasMask"}, // 0.09%
			{7131.2882402482, "CUP_20Rnd_762x51_B_M110"}, // 0.09%
			{7140.4574448197, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.09%
			{7149.62664939121, "CUP_20Rnd_762x51_L129_M"}, // 0.09%
			{7158.79585396271, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.09%
			{7167.96505853422, "hlc_50rnd_762x51_M_FAL"}, // 0.09%
			{7177.13426310572, "hlc_50Rnd_762x51_B_M14"}, // 0.09%
			{7186.03739700885, "Exile_Weapon_TaurusGold"}, // 0.09%
			{7194.75883430172, "1Rnd_SmokePurple_Grenade_shell"}, // 0.09%
			{7203.48027159458, "1Rnd_SmokeOrange_Grenade_shell"}, // 0.09%
			{7212.20170888745, "1Rnd_SmokeGreen_Grenade_shell"}, // 0.09%
			{7220.92314618031, "1Rnd_SmokeYellow_Grenade_shell"}, // 0.09%
			{7229.64458347318, "1Rnd_SmokeRed_Grenade_shell"}, // 0.09%
			{7238.36602076605, "1Rnd_SmokeBlue_Grenade_shell"}, // 0.09%
			{7247.08745805891, "1Rnd_Smoke_Grenade_shell"}, // 0.09%
			{7255.77649900602, "CUP_5Rnd_86x70_L115A1"}, // 0.09%
			{7264.34871996762, "srifle_DMR_07_blk_F"}, // 0.09%
			{7272.92094092922, "srifle_DMR_07_hex_F"}, // 0.09%
			{7281.49316189082, "srifle_DMR_07_ghex_F"}, // 0.09%
			{7289.53851877339, "HLC_Rifle_g3ka4_GL"}, // 0.08%
			{7297.13103905626, "30Rnd_65x39_caseless_green"}, // 0.08%
			{7304.72355933914, "30Rnd_556x45_Stanag_red"}, // 0.08%
			{7312.31607962201, "30Rnd_556x45_Stanag_green"}, // 0.08%
			{7319.90859990489, "30Rnd_556x45_Stanag"}, // 0.08%
			{7327.48070050025, "CUP_arifle_FNFAL_railed"}, // 0.08%
			{7335.04442487813, "CUP_srifle_CZ750"}, // 0.08%
			{7342.54180079656, "TRYK_V_IOTV_BLK"}, // 0.07%
			{7350.03917671499, "TRYK_V_tacv1LC_FBI_BK"}, // 0.07%
			{7357.53655263342, "TRYK_V_ArmorVest_HRT2_B"}, // 0.07%
			{7365.03392855184, "TRYK_V_tacv1_BK"}, // 0.07%
			{7372.53130447027, "TRYK_V_tacv1LC_SRF_BK"}, // 0.07%
			{7380.0286803887, "TRYK_V_tacv1LC_SRF_OD"}, // 0.07%
			{7387.52605630713, "TRYK_V_ArmorVest_HRT2_OD"}, // 0.07%
			{7395.02343222556, "TRYK_V_tacv1_P_BK"}, // 0.07%
			{7402.52080814399, "TRYK_V_tacv1_CY"}, // 0.07%
			{7410.01818406242, "TRYK_V_tacv1_SHERIFF_BK"}, // 0.07%
			{7417.51555998085, "TRYK_V_tacv1_FBI_BK"}, // 0.07%
			{7425.01293589927, "TRYK_V_tacv1LP_BK"}, // 0.07%
			{7432.5103118177, "TRYK_V_tacv1LSRF_BK"}, // 0.07%
			{7440.00768773613, "TRYK_V_tacv1LC_BK"}, // 0.07%
			{7447.50506365456, "TRYK_V_tacv1LC_P_BK"}, // 0.07%
			{7455.00243957299, "TRYK_V_PlateCarrier_blk"}, // 0.07%
			{7462.49981549142, "TRYK_V_PlateCarrier_oli"}, // 0.07%
			{7469.99719140985, "TRYK_V_PlateCarrier_coyo"}, // 0.07%
			{7477.49456732827, "TRYK_V_tacv1M_BK"}, // 0.07%
			{7484.9919432467, "TRYK_V_tacv1MLC_BK"}, // 0.07%
			{7492.48931916513, "TRYK_V_tacv1LC_OD"}, // 0.07%
			{7499.98669508356, "TRYK_V_PlateCarrier_POLICE"}, // 0.07%
			{7507.48407100199, "TRYK_V_ArmorVest_HRT_B"}, // 0.07%
			{7514.98144692042, "TRYK_V_Bulletproof_BLK"}, // 0.07%
			{7522.47882283885, "TRYK_V_Bulletproof_BL"}, // 0.07%
			{7529.97619875727, "TRYK_V_ArmorVest_HRT_OD"}, // 0.07%
			{7537.4735746757, "TRYK_V_PlateCarrier_coyo_L"}, // 0.07%
			{7544.97095059413, "TRYK_V_PlateCarrier_ACU_L"}, // 0.07%
			{7552.46832651256, "TRYK_V_PlateCarrier_wood_L"}, // 0.07%
			{7559.96570243099, "TRYK_V_tacv1"}, // 0.07%
			{7567.46307834942, "TRYK_V_PlateCarrier_blk_L"}, // 0.07%
			{7574.96045426785, "TRYK_V_PlateCarrier_ACU"}, // 0.07%
			{7582.45783018627, "TRYK_V_Bulletproof"}, // 0.07%
			{7589.9552061047, "TRYK_V_tacv1LC_CY"}, // 0.07%
			{7597.45258202313, "TRYK_V_PlateCarrier_JSDF"}, // 0.07%
			{7604.94995794156, "U_I_pilotCoveralls"}, // 0.07%
			{7612.44733385999, "U_B_PilotCoveralls"}, // 0.07%
			{7619.94470977842, "U_O_PilotCoveralls"}, // 0.07%
			{7627.44208569685, "U_B_HeliPilotCoveralls"}, // 0.07%
			{7634.93946161527, "U_I_CombatUniform_shortsleeve"}, // 0.07%
			{7642.4368375337, "U_I_CombatUniform_tshirt"}, // 0.07%
			{7649.93421345213, "U_I_CombatUniform"}, // 0.07%
			{7657.43158937056, "U_I_HeliPilotCoveralls"}, // 0.07%
			{7664.87301472243, "acc_flashlight"}, // 0.07%
			{7671.97185903058, "CUP_srifle_M110"}, // 0.07%
			{7679.07070333873, "CUP_arifle_FNFAL"}, // 0.07%
			{7686.15705560274, "hlc_30rnd_556x45_SOST_G36"}, // 0.07%
			{7693.10584303934, "H_HelmetB_plain_blk"}, // 0.07%
			{7700.05463047593, "H_HelmetSpecB"}, // 0.07%
			{7707.00341791252, "H_HelmetSpecB_paint2"}, // 0.07%
			{7713.95220534911, "H_HelmetSpecB_blk"}, // 0.07%
			{7720.90099278571, "H_HelmetIA"}, // 0.07%
			{7727.8497802223, "H_HelmetB_light"}, // 0.07%
			{7734.79856765889, "H_HelmetB_paint"}, // 0.07%
			{7741.74735509548, "H_HelmetSpecB_paint1"}, // 0.07%
			{7748.69614253208, "H_HelmetB"}, // 0.07%
			{7755.53374936968, "3Rnd_UGL_FlareYellow_F"}, // 0.07%
			{7762.37135620729, "3Rnd_UGL_FlareWhite_F"}, // 0.07%
			{7769.20896304489, "3Rnd_UGL_FlareRed_F"}, // 0.07%
			{7776.0465698825, "3Rnd_UGL_FlareGreen_F"}, // 0.07%
			{7782.73044753412, "5Rnd_127x108_Mag"}, // 0.07%
			{7789.41432518574, "7Rnd_408_Mag"}, // 0.07%
			{7796.09167561309, "hgun_Pistol_Signal_F"}, // 0.07%
			{7802.76902604044, "Exile_Weapon_Taurus"}, // 0.07%
			{7809.3492102856, "hlc_30rnd_556x45_EPR_G36"}, // 0.07%
			{7815.92939453076, "hlc_75Rnd_762x39_m_rpk"}, // 0.07%
			{7822.50957877592, "29rnd_300BLK_STANAG_T"}, // 0.07%
			{7829.08976302108, "hlc_30Rnd_556x45_B_AUG"}, // 0.07%
			{7835.66994726624, "hlc_45Rnd_762x39_m_rpk"}, // 0.07%
			{7842.2501315114, "hlc_100rnd_556x45_EPR_G36"}, // 0.07%
			{7848.81573478482, "B_FieldPack_cbr"}, // 0.07%
			{7855.38133805824, "B_FieldPack_oucamo"}, // 0.07%
			{7861.94694133166, "B_FieldPack_ocamo"}, // 0.07%
			{7868.51254460509, "B_FieldPack_blk"}, // 0.07%
			{7875.06777239925, "CUP_srifle_G22_des"}, // 0.07%
			{7881.62300019342, "hlc_rifle_awcovert_BL"}, // 0.07%
			{7887.77533192715, "hlc_rifle_g3ka4"}, // 0.06%
			{7893.92766366087, "hlc_rifle_m14sopmod"}, // 0.06%
			{7900.0799953946, "hlc_rifle_STG58F"}, // 0.06%
			{7906.23232712833, "hlc_rifle_PSG1A1_RIS"}, // 0.06%
			{7912.30634335463, "29rnd_300BLK_STANAG"}, // 0.06%
			{7918.38035958093, "hlc_50rnd_556x45_EPR"}, // 0.06%
			{7924.45437580723, "hlc_30Rnd_545x39_B_AK"}, // 0.06%
			{7930.52839203353, "hlc_30Rnd_9x19_B_MP5"}, // 0.06%
			{7936.57937153583, "hlc_rifle_awcovert_FDE"}, // 0.06%
			{7942.56227751874, "V_HarnessOSpec_gry"}, // 0.06%
			{7948.54518350165, "V_BandollierB_khk"}, // 0.06%
			{7954.52808948455, "V_BandollierB_cbr"}, // 0.06%
			{7960.51099546746, "V_BandollierB_rgr"}, // 0.06%
			{7966.49390145036, "V_BandollierB_blk"}, // 0.06%
			{7972.47680743327, "V_HarnessOSpec_brn"}, // 0.06%
			{7978.45971341618, "V_HarnessOGL_gry"}, // 0.06%
			{7984.44261939908, "V_BandollierB_oli"}, // 0.06%
			{7990.42552538199, "V_HarnessO_gry"}, // 0.06%
			{7996.4084313649, "V_HarnessOGL_brn"}, // 0.06%
			{8002.3913373478, "V_HarnessO_brn"}, // 0.06%
			{8008.32675994989, "CUP_muzzle_snds_M110"}, // 0.06%
			{8014.00583539641, "hlc_rifle_M14"}, // 0.06%
			{8019.68491084293, "hlc_rifle_m14dmr"}, // 0.06%
			{8025.36398628944, "hlc_rifle_SLRchopmod"}, // 0.06%
			{8031.04306173596, "hlc_rifle_stgw57_RIS"}, // 0.06%
			{8036.72213718248, "hlc_rifle_sig5104"}, // 0.06%
			{8042.3451691213, "U_B_SpecopsUniform_sgg"}, // 0.06%
			{8047.91301732874, "hlc_40Rnd_556x45_B_AUG"}, // 0.06%
			{8053.48086553618, "hlc_30Rnd_545x39_T_AK"}, // 0.06%
			{8059.04871374362, "hlc_30rnd_556x45_SOST"}, // 0.06%
			{8064.61656195107, "HLC_45rnd_762x39_T_RPK"}, // 0.06%
			{8070.18441015851, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.06%
			{8075.75225836595, "hlc_30Rnd_762x39_b_ak"}, // 0.06%
			{8081.32010657339, "hlc_30Rnd_9x19_GD_MP5"}, // 0.06%
			{8086.88795478083, "20Rnd_556x45_UW_mag"}, // 0.06%
			{8092.36680641353, "U_I_C_Soldier_Para_5_F"}, // 0.05%
			{8097.84565804623, "U_I_C_Soldier_Camo_F"}, // 0.05%
			{8103.32450967893, "U_I_C_Soldier_Para_3_F"}, // 0.05%
			{8108.80336131163, "U_I_C_Soldier_Para_4_F"}, // 0.05%
			{8114.28221294432, "U_I_C_Soldier_Para_1_F"}, // 0.05%
			{8119.76106457702, "U_I_C_Soldier_Para_2_F"}, // 0.05%
			{8125.10816669832, "5Rnd_127x108_APDS_Mag"}, // 0.05%
			{8130.42347052108, "CUP_optic_HoloBlack"}, // 0.05%
			{8135.73877434385, "CUP_optic_HoloDesert"}, // 0.05%
			{8141.05407816662, "CUP_muzzle_PB6P9"}, // 0.05%
			{8146.36938198938, "CUP_optic_CompM4"}, // 0.05%
			{8151.68468581215, "CUP_optic_TrijiconRx01_desert"}, // 0.05%
			{8156.99998963492, "CUP_optic_AN_PVS_4"}, // 0.05%
			{8162.31529345768, "CUP_optic_SB_11_4x20_PM"}, // 0.05%
			{8167.63059728045, "CUP_optic_SUSAT"}, // 0.05%
			{8172.94590110322, "CUP_muzzle_PBS4"}, // 0.05%
			{8178.26120492598, "CUP_optic_RCO"}, // 0.05%
			{8183.57650874875, "CUP_optic_PechenegScope"}, // 0.05%
			{8188.89181257152, "optic_ERCO_khk_F"}, // 0.05%
			{8194.20711639428, "optic_ERCO_snd_F"}, // 0.05%
			{8199.52242021705, "muzzle_snds_65_TI_blk_F"}, // 0.05%
			{8204.83772403981, "muzzle_snds_65_TI_hex_F"}, // 0.05%
			{8210.15302786258, "muzzle_snds_65_TI_ghex_F"}, // 0.05%
			{8215.46833168535, "muzzle_snds_H_MG_blk_F"}, // 0.05%
			{8220.78363550811, "muzzle_snds_m_khk_F"}, // 0.05%
			{8226.09893933088, "muzzle_snds_H_MG_khk_F"}, // 0.05%
			{8231.41424315365, "optic_Arco"}, // 0.05%
			{8236.72954697641, "optic_Arco_blk_F"}, // 0.05%
			{8242.04485079918, "optic_Arco_ghex_F"}, // 0.05%
			{8247.36015462195, "optic_Hamr"}, // 0.05%
			{8252.67545844471, "optic_Hamr_khk_F"}, // 0.05%
			{8257.99076226748, "optic_Holosight"}, // 0.05%
			{8263.30606609025, "optic_Holosight_blk_F"}, // 0.05%
			{8268.62136991301, "optic_Holosight_khk_F"}, // 0.05%
			{8273.93667373578, "muzzle_snds_58_blk_F"}, // 0.05%
			{8279.25197755855, "acc_pointer_IR"}, // 0.05%
			{8284.56728138131, "optic_MRCO"}, // 0.05%
			{8289.88258520408, "muzzle_snds_H_snd_F"}, // 0.05%
			{8295.19788902685, "optic_DMS"}, // 0.05%
			{8300.51319284961, "optic_DMS_ghex_F"}, // 0.05%
			{8305.82849667238, "optic_ERCO_blk_F"}, // 0.05%
			{8311.14380049515, "muzzle_snds_m_snd_F"}, // 0.05%
			{8316.45910431791, "muzzle_snds_H_khk_F"}, // 0.05%
			{8321.77440814068, "CUP_optic_ACOG"}, // 0.05%
			{8327.08971196344, "muzzle_snds_58_wdm_F"}, // 0.05%
			{8332.40501578621, "muzzle_snds_H"}, // 0.05%
			{8337.72031960898, "CUP_optic_PSO_3"}, // 0.05%
			{8343.03562343174, "CUP_optic_CompM2_Desert"}, // 0.05%
			{8348.35092725451, "CUP_optic_CompM2_Black"}, // 0.05%
			{8353.66623107728, "CUP_muzzle_snds_XM8"}, // 0.05%
			{8358.98153490004, "CUP_optic_Kobra"}, // 0.05%
			{8364.29683872281, "CUP_muzzle_Bizon"}, // 0.05%
			{8369.61214254558, "muzzle_snds_M"}, // 0.05%
			{8374.92744636834, "CUP_optic_PSO_1"}, // 0.05%
			{8380.13326552765, "hlc_rifle_psg1"}, // 0.05%
			{8385.33908468696, "hlc_rifle_stgw57_commando"}, // 0.05%
			{8390.54490384627, "hlc_rifle_amt"}, // 0.05%
			{8395.75072300557, "hlc_rifle_FAL5061"}, // 0.05%
			{8400.90941129184, "B_ViperLightHarness_hex_F"}, // 0.05%
			{8406.0680995781, "B_ViperHarness_khk_F"}, // 0.05%
			{8411.22678786436, "B_ViperLightHarness_khk_F"}, // 0.05%
			{8416.38547615062, "B_ViperLightHarness_ghex_F"}, // 0.05%
			{8421.54416443688, "B_ViperHarness_oli_F"}, // 0.05%
			{8426.70285272314, "B_ViperHarness_ghex_F"}, // 0.05%
			{8431.8615410094, "B_ViperLightHarness_blk_F"}, // 0.05%
			{8437.02022929566, "B_ViperHarness_blk_F"}, // 0.05%
			{8442.17891758192, "B_ViperHarness_base_F"}, // 0.05%
			{8447.33760586819, "B_FieldPack_ghex_F"}, // 0.05%
			{8452.49629415445, "B_Bergen_blk"}, // 0.05%
			{8457.65498244071, "B_Bergen_rgr"}, // 0.05%
			{8462.81367072697, "B_Bergen_mcamo"}, // 0.05%
			{8467.97235901323, "B_Bergen_sgg"}, // 0.05%
			{8473.13104729949, "B_ViperLightHarness_oli_F"}, // 0.05%
			{8478.28973558575, "B_ViperHarness_hex_F"}, // 0.05%
			{8483.44842387201, "B_ViperLightHarness_base_F"}, // 0.05%
			{8488.59722420154, "130Rnd_338_Mag"}, // 0.05%
			{8493.74602453106, "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}, // 0.05%
			{8498.89482486058, "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}, // 0.05%
			{8503.95650504917, "hlc_30Rnd_545x39_EP_AK"}, // 0.05%
			{8509.01818523775, "hlc_45Rnd_545x39_t_rpk"}, // 0.05%
			{8514.07986542634, "hlc_30rnd_556x45_EPR"}, // 0.05%
			{8519.14154561492, "hlc_30rnd_556x45_SPR"}, // 0.05%
			{8524.20322580351, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.05%
			{8529.2525354682, "CUP_arifle_Mk16_CQC_FG"}, // 0.05%
			{8534.3018451329, "CUP_arifle_AKM"}, // 0.05%
			{8539.35115479759, "CUP_arifle_AK107_GL"}, // 0.05%
			{8544.39363771618, "hlc_rifle_awcovert"}, // 0.05%
			{8549.43612063477, "hlc_rifle_awMagnum_OD_ghillie"}, // 0.05%
			{8554.20491309587, "arifle_AKS_F"}, // 0.05%
			{8558.97370555697, "CUP_arifle_AK47"}, // 0.05%
			{8563.74249801807, "CUP_arifle_Mk16_CQC"}, // 0.05%
			{8568.47506089017, "CUP_srifle_M14"}, // 0.05%
			{8573.20762376226, "CUP_arifle_Mk17_STD_EGLM"}, // 0.05%
			{8577.94018663436, "hlc_rifle_STGW57"}, // 0.05%
			{8582.67274950646, "hlc_rifle_falosw"}, // 0.05%
			{8587.34324598023, "Exile_Headgear_GasMask"}, // 0.05%
			{8592.01374245401, "H_Booniehat_khk"}, // 0.05%
			{8596.68423892778, "H_Booniehat_indp"}, // 0.05%
			{8601.35473540156, "H_Booniehat_mcamo"}, // 0.05%
			{8606.02523187533, "H_Booniehat_grn"}, // 0.05%
			{8610.69572834911, "H_Booniehat_tan"}, // 0.05%
			{8615.36622482288, "H_Booniehat_dirty"}, // 0.05%
			{8620.03672129666, "H_Booniehat_khk_hs"}, // 0.05%
			{8624.70721777043, "H_Booniehat_dgtl"}, // 0.05%
			{8629.33974272816, "H_HelmetB_light_snakeskin"}, // 0.05%
			{8633.97226768589, "H_HelmetB_snakeskin"}, // 0.05%
			{8638.60479264361, "H_HelmetSpecO_ghex_F"}, // 0.05%
			{8643.23731760134, "H_HelmetB_desert"}, // 0.05%
			{8647.86984255907, "H_HelmetB_light_desert"}, // 0.05%
			{8652.5023675168, "H_HelmetB_light_grass"}, // 0.05%
			{8657.13489247452, "H_HelmetLeaderO_ghex_F"}, // 0.05%
			{8661.76741743225, "H_HelmetCrew_O_ghex_F"}, // 0.05%
			{8666.39994238998, "H_HelmetB_black"}, // 0.05%
			{8671.03246734771, "H_HelmetB_tna_F"}, // 0.05%
			{8675.66499230543, "H_HelmetB_TI_tna_F"}, // 0.05%
			{8680.29751726316, "H_HelmetB_light_sand"}, // 0.05%
			{8684.93004222089, "H_HelmetIA_camo"}, // 0.05%
			{8689.56256717862, "H_HelmetB_light_black"}, // 0.05%
			{8694.19509213634, "H_HelmetIA_net"}, // 0.05%
			{8698.82761709407, "H_Beret_gen_F"}, // 0.05%
			{8703.4601420518, "H_HelmetB_Light_tna_F"}, // 0.05%
			{8708.09266700953, "H_HelmetB_Enh_tna_F"}, // 0.05%
			{8712.72519196725, "H_Helmet_Skate"}, // 0.05%
			{8717.35771692498, "H_BandMask_demon"}, // 0.05%
			{8721.99024188271, "H_BandMask_reaper"}, // 0.05%
			{8726.62276684044, "H_BandMask_khk"}, // 0.05%
			{8731.25529179816, "H_HelmetB_grass"}, // 0.05%
			{8735.88781675589, "H_HelmetB_sand"}, // 0.05%
			{8740.44332892562, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.05%
			{8744.99884109534, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.05%
			{8749.55435326507, "Exile_Magazine_10Rnd_762x54"}, // 0.05%
			{8754.10986543479, "Exile_Magazine_5Rnd_22LR"}, // 0.05%
			{8758.66537760452, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.05%
			{8763.22088977424, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.05%
			{8767.77640194397, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.05%
			{8772.33191411369, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.05%
			{8776.88742628342, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.05%
			{8781.44293845315, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.05%
			{8785.99845062287, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.05%
			{8790.5539627926, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.05%
			{8795.10947496232, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.05%
			{8799.66498713205, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.05%
			{8804.22049930177, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.05%
			{8808.7760114715, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.05%
			{8813.33152364122, "30Rnd_65x39_caseless_mag"}, // 0.05%
			{8817.88703581095, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.05%
			{8822.44254798067, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.05%
			{8826.9980601504, "Exile_Magazine_10Rnd_9x39"}, // 0.05%
			{8831.55357232012, "Exile_Magazine_20Rnd_9x39"}, // 0.05%
			{8836.10908448985, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.05%
			{8840.66459665957, "30Rnd_762x39_Mag_Green_F"}, // 0.05%
			{8845.2201088293, "CUP_30Rnd_545x39_AK_M"}, // 0.05%
			{8849.77562099902, "30Rnd_762x39_Mag_F"}, // 0.05%
			{8854.33113316875, "CUP_30Rnd_556x45_Stanag"}, // 0.05%
			{8858.88664533847, "20Rnd_762x51_Mag"}, // 0.05%
			{8863.4421575082, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.05%
			{8867.99766967792, "150Rnd_556x45_Drum_Mag_F"}, // 0.05%
			{8872.55318184765, "100Rnd_580x42_Mag_Tracer_F"}, // 0.05%
			{8877.10869401738, "100Rnd_580x42_Mag_F"}, // 0.05%
			{8881.6642061871, "CUP_30Rnd_556x45_G36"}, // 0.05%
			{8886.21971835683, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.05%
			{8890.77523052655, "30Rnd_580x42_Mag_Tracer_F"}, // 0.05%
			{8895.33074269628, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.05%
			{8899.886254866, "30Rnd_762x39_AK47_M"}, // 0.05%
			{8904.44176703573, "30Rnd_545x39_Mag_F"}, // 0.05%
			{8908.99727920545, "30Rnd_762x39_Mag_Tracer_F"}, // 0.05%
			{8913.55279137518, "30Rnd_545x39_Mag_Tracer_F"}, // 0.05%
			{8918.1083035449, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.05%
			{8922.66381571463, "30Rnd_580x42_Mag_F"}, // 0.05%
			{8927.21932788435, "30Rnd_545x39_Mag_Green_F"}, // 0.05%
			{8931.70760314186, "hlc_rifle_SAMR"}, // 0.04%
			{8936.19587839937, "CUP_srifle_Mk12SPR"}, // 0.04%
			{8940.68415365687, "CUP_arifle_AK74_GL"}, // 0.04%
			{8945.06723496303, "U_IG_leader"}, // 0.04%
			{8949.3676166219, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.04%
			{8953.66799828077, "TRYK_U_B_MARPAT_Wood"}, // 0.04%
			{8957.96837993965, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.04%
			{8962.26876159852, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.04%
			{8966.54226587202, "V_Chestrig_blk"}, // 0.04%
			{8970.81577014553, "V_Chestrig_khk"}, // 0.04%
			{8975.08927441903, "V_Chestrig_rgr"}, // 0.04%
			{8979.36277869253, "V_Chestrig_oli"}, // 0.04%
			{8983.61502175075, "CUP_muzzle_snds_L85"}, // 0.04%
			{8987.86726480896, "CUP_muzzle_snds_Mk12"}, // 0.04%
			{8992.11950786718, "CUP_muzzle_snds_G36_black"}, // 0.04%
			{8996.37175092539, "CUP_optic_Elcan"}, // 0.04%
			{9000.5795089793, "arifle_AK12_F"}, // 0.04%
			{9004.78726703321, "hlc_rifle_auga2carb_b"}, // 0.04%
			{9008.99502508712, "hlc_rifle_auga2para_t"}, // 0.04%
			{9013.20278314104, "hlc_rifle_augsr"}, // 0.04%
			{9017.41054119495, "hlc_rifle_augsr_b"}, // 0.04%
			{9021.61829924886, "hlc_rifle_augsr_t"}, // 0.04%
			{9025.82605730277, "hlc_rifle_augsrcarb"}, // 0.04%
			{9030.03381535668, "hlc_rifle_augsrcarb_t"}, // 0.04%
			{9034.24157341059, "hlc_rifle_augsrcarb_b"}, // 0.04%
			{9038.44933146451, "hlc_rifle_augsrhbar"}, // 0.04%
			{9042.65708951842, "hlc_rifle_ak12"}, // 0.04%
			{9046.86484757233, "hlc_rifle_augsrhbar_b"}, // 0.04%
			{9051.07260562624, "hlc_rifle_augsrhbar_t"}, // 0.04%
			{9055.28036368015, "hlc_rifle_auga2"}, // 0.04%
			{9059.48812173406, "hlc_rifle_auga3_bl"}, // 0.04%
			{9063.69587978798, "hlc_rifle_auga3_b"}, // 0.04%
			{9067.90363784189, "hlc_rifle_auga3_GL"}, // 0.04%
			{9072.1113958958, "hlc_rifle_auga3_GL_BL"}, // 0.04%
			{9076.31915394971, "CUP_arifle_Mk16_SV"}, // 0.04%
			{9080.52691200362, "hlc_rifle_auga2para_b"}, // 0.04%
			{9084.73467005753, "hlc_rifle_auga2para"}, // 0.04%
			{9088.94242811145, "hlc_rifle_auga2lsw_b"}, // 0.04%
			{9093.15018616536, "hlc_rifle_auga2lsw_t"}, // 0.04%
			{9097.35794421927, "hlc_rifle_auga2_t"}, // 0.04%
			{9101.56570227318, "hlc_rifle_auga2carb"}, // 0.04%
			{9105.77346032709, "hlc_rifle_auga2carb_t"}, // 0.04%
			{9109.981218381, "hlc_rifle_augpara_t"}, // 0.04%
			{9114.18897643492, "hlc_rifle_augpara_b"}, // 0.04%
			{9118.39673448883, "hlc_rifle_augpara"}, // 0.04%
			{9122.60449254274, "hlc_rifle_aughbar_t"}, // 0.04%
			{9126.81225059665, "hlc_rifle_aughbar_b"}, // 0.04%
			{9131.02000865056, "hlc_rifle_auga3_GL_B"}, // 0.04%
			{9135.22776670447, "hlc_rifle_aughbar"}, // 0.04%
			{9139.43552475839, "hlc_rifle_auga1carb_t"}, // 0.04%
			{9143.6432828123, "hlc_rifle_auga1carb"}, // 0.04%
			{9147.85104086621, "hlc_rifle_auga1_B"}, // 0.04%
			{9152.05879892012, "hlc_rifle_auga1_t"}, // 0.04%
			{9156.26655697403, "hlc_rifle_aug"}, // 0.04%
			{9160.47431502794, "hlc_rifle_vendimus"}, // 0.04%
			{9164.68207308186, "hlc_rifle_rpk"}, // 0.04%
			{9168.88983113577, "hlc_rifle_auga2lsw"}, // 0.04%
			{9173.09758918968, "hlc_rifle_auga1carb_b"}, // 0.04%
			{9177.30534724359, "CUP_arifle_AKS74U"}, // 0.04%
			{9181.5131052975, "hlc_rifle_auga3"}, // 0.04%
			{9185.72086335141, "CUP_arifle_G36A"}, // 0.04%
			{9189.92862140533, "arifle_SPAR_03_khk_F"}, // 0.04%
			{9194.13637945924, "arifle_SPAR_03_snd_F"}, // 0.04%
			{9198.34413751315, "CUP_arifle_L86A2"}, // 0.04%
			{9202.55189556706, "arifle_AK12_GL_F"}, // 0.04%
			{9206.75965362097, "arifle_AKM_F"}, // 0.04%
			{9210.96741167488, "arifle_AKM_FL_F"}, // 0.04%
			{9215.1751697288, "CUP_arifle_G36C"}, // 0.04%
			{9219.38292778271, "CUP_arifle_M16A2"}, // 0.04%
			{9223.59068583662, "CUP_arifle_XM8_Railed"}, // 0.04%
			{9227.79844389053, "arifle_SPAR_01_blk_F"}, // 0.04%
			{9232.00620194444, "hlc_rifle_auga2_b"}, // 0.04%
			{9236.05554609531, "Exile_Magazine_10Rnd_303"}, // 0.04%
			{9240.10489024618, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.04%
			{9244.15423439704, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.04%
			{9248.20357854791, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.04%
			{9252.25292269877, "CUP_30Rnd_Sa58_M"}, // 0.04%
			{9256.28690903364, "hlc_rifle_awmagnum"}, // 0.04%
			{9260.32089536852, "hlc_rifle_awmagnum_BL"}, // 0.04%
			{9264.24813621883, "CUP_arifle_M4A1"}, // 0.04%
			{9268.17537706915, "CUP_arifle_CZ805_GL"}, // 0.04%
			{9272.10261791947, "hlc_rifle_RU556"}, // 0.04%
			{9276.02985876979, "hlc_rifle_samr2"}, // 0.04%
			{9279.95709962011, "arifle_MX_GL_F"}, // 0.04%
			{9283.74314991779, "hlc_rifle_SLR"}, // 0.04%
			{9287.52920021546, "hlc_rifle_c1A1"}, // 0.04%
			{9291.31525051314, "CUP_arifle_Mk17_STD_FG"}, // 0.04%
			{9295.10130081082, "CUP_arifle_Mk20"}, // 0.04%
			{9298.84998877003, "U_O_SpecopsUniform_blk"}, // 0.04%
			{9302.59867672925, "U_O_V_Soldier_Viper_hex_F"}, // 0.04%
			{9306.34736468846, "U_O_OfficerUniform_ocamo"}, // 0.04%
			{9310.09605264768, "U_O_V_Soldier_Viper_F"}, // 0.04%
			{9313.84474060689, "U_O_CombatUniform_oucamo"}, // 0.04%
			{9317.59342856611, "U_O_SpecopsUniform_ocamo"}, // 0.04%
			{9321.34211652532, "U_O_CombatUniform_ocamo"}, // 0.04%
			{9325.09080448453, "U_I_OfficerUniform"}, // 0.04%
			{9328.83949244375, "U_I_Wetsuit"}, // 0.04%
			{9332.58818040296, "U_O_Wetsuit"}, // 0.04%
			{9336.33686836218, "U_B_Wetsuit"}, // 0.04%
			{9339.9835920089, "arifle_MXC_F"}, // 0.04%
			{9343.63031565562, "hlc_rifle_RU5562"}, // 0.04%
			{9347.27703930235, "hlc_rifle_Colt727_GL"}, // 0.04%
			{9350.92376294907, "hlc_rifle_bcmjack"}, // 0.04%
			{9354.57048659579, "hlc_rifle_Bushmaster300"}, // 0.04%
			{9358.1136627278, "CUP_20Rnd_556x45_Stanag"}, // 0.04%
			{9361.65683885981, "CUP_30Rnd_762x39_AK47_M"}, // 0.04%
			{9365.20001499182, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.04%
			{9368.70288734715, "H_Cap_tan_specops_US"}, // 0.04%
			{9372.20575970248, "H_Cap_khaki_specops_UK"}, // 0.04%
			{9375.70863205781, "H_Watchcap_blk"}, // 0.04%
			{9379.21150441315, "H_Watchcap_khk"}, // 0.04%
			{9382.71437676848, "H_BandMask_blk"}, // 0.04%
			{9386.21724912381, "H_Bandanna_mcamo"}, // 0.04%
			{9389.72012147914, "H_Bandanna_camo"}, // 0.04%
			{9393.22299383447, "H_Hat_camo"}, // 0.04%
			{9396.7258661898, "H_Cap_brn_SPECOPS"}, // 0.04%
			{9400.22873854513, "H_Bandanna_sgg"}, // 0.04%
			{9403.73161090047, "H_Bandanna_cbr"}, // 0.04%
			{9407.2344832558, "H_Bandanna_khk_hs"}, // 0.04%
			{9410.73735561113, "H_Bandanna_khk"}, // 0.04%
			{9414.24022796646, "H_Bandanna_gry"}, // 0.04%
			{9417.72880288361, "3Rnd_SmokeRed_Grenade_shell"}, // 0.03%
			{9421.21737780075, "3Rnd_SmokeOrange_Grenade_shell"}, // 0.03%
			{9424.7059527179, "3Rnd_Smoke_Grenade_shell"}, // 0.03%
			{9428.19452763505, "3Rnd_SmokeGreen_Grenade_shell"}, // 0.03%
			{9431.68310255219, "3Rnd_SmokeBlue_Grenade_shell"}, // 0.03%
			{9435.17167746934, "3Rnd_SmokePurple_Grenade_shell"}, // 0.03%
			{9438.66025238648, "3Rnd_SmokeYellow_Grenade_shell"}, // 0.03%
			{9442.02645882961, "Exile_Weapon_LeeEnfield"}, // 0.03%
			{9445.39266527274, "CUP_arifle_AK74"}, // 0.03%
			{9448.73460409855, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9452.07654292436, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.03%
			{9455.41848175017, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.03%
			{9458.76042057598, "CUP_10Rnd_127x99_M107"}, // 0.03%
			{9461.98570682014, "TRYK_U_B_MARPAT_Desert"}, // 0.03%
			{9465.21099306429, "TRYK_U_B_MARPAT_Desert_Tshirt"}, // 0.03%
			{9468.43627930845, "TRYK_U_B_MARPAT_Wood_Tshirt"}, // 0.03%
			{9471.6615655526, "TRYK_U_B_MARPAT_Desert2_Tshirt"}, // 0.03%
			{9474.88685179676, "TRYK_U_B_MARPAT_Desert2"}, // 0.03%
			{9477.97254103629, "arifle_MX_F"}, // 0.03%
			{9481.05823027583, "hlc_rifle_ak47"}, // 0.03%
			{9484.09523838898, "CUP_100Rnd_556x45_BetaCMag"}, // 0.03%
			{9487.07848744552, "Exile_Item_MobilePhone"}, // 0.03%
			{9490.06173650207, "ItemGPS"}, // 0.03%
			{9492.86690853801, "CUP_arifle_CZ805_B"}, // 0.03%
			{9495.67208057396, "CUP_arifle_AK74M"}, // 0.03%
			{9498.4772526099, "CUP_arifle_L85A2_GL"}, // 0.03%
			{9501.28242464584, "hlc_rifle_honeybadger"}, // 0.03%
			{9504.08759668178, "hlc_rifle_akm"}, // 0.03%
			{9506.89276871772, "hlc_rifle_akmgl"}, // 0.03%
			{9509.69794075366, "CUP_arifle_CZ805_A1"}, // 0.03%
			{9512.50311278961, "CUP_arifle_Mk16_STD_EGLM"}, // 0.03%
			{9515.30828482555, "CUP_arifle_Sa58P"}, // 0.03%
			{9518.11345686149, "CUP_arifle_AK107"}, // 0.03%
			{9520.91862889743, "hlc_rifle_ak74"}, // 0.03%
			{9523.72380093337, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.03%
			{9526.52897296931, "Exile_Weapon_AK47"}, // 0.03%
			{9529.33414500526, "Exile_Weapon_AK107"}, // 0.03%
			{9532.1393170412, "Exile_Weapon_CZ550"}, // 0.03%
			{9534.94448907714, "Exile_Weapon_AK74"}, // 0.03%
			{9537.74966111308, "Exile_Weapon_AK74_GL"}, // 0.03%
			{9540.55483314902, "Exile_Weapon_AK107_GL"}, // 0.03%
			{9543.24257168582, "TRYK_U_B_wood3c_CombatUniformTshirt"}, // 0.03%
			{9545.93031022261, "TRYK_U_B_wood3c_CombatUniform"}, // 0.03%
			{9548.61804875941, "TRYK_U_B_woodR_CombatUniformTshirt"}, // 0.03%
			{9551.3057872962, "TRYK_U_B_wood_CombatUniform"}, // 0.03%
			{9553.993525833, "TRYK_U_B_GRTANR_CombatUniformTshirt"}, // 0.03%
			{9556.68126436979, "TRYK_U_B_GRTAN_CombatUniform"}, // 0.03%
			{9559.36900290659, "TRYK_U_B_ODTANR_CombatUniformTshirt"}, // 0.03%
			{9562.05674144338, "TRYK_U_B_ODTAN_CombatUniform"}, // 0.03%
			{9564.74447998018, "TRYK_U_B_BLKTANR_CombatUniformTshirt"}, // 0.03%
			{9567.43221851697, "TRYK_U_B_BLKTAN_CombatUniform"}, // 0.03%
			{9570.11995705377, "TRYK_U_B_BLKOCP_R_CombatUniformTshirt"}, // 0.03%
			{9572.80769559057, "TRYK_U_B_BLKOCP_CombatUniform"}, // 0.03%
			{9575.49543412736, "TRYK_U_B_TANOCP_R_CombatUniformTshirt"}, // 0.03%
			{9578.18317266416, "TRYK_U_B_TANOCP_CombatUniform"}, // 0.03%
			{9580.87091120095, "TRYK_U_B_GRYOCP_R_CombatUniformTshirt"}, // 0.03%
			{9583.55864973775, "TRYK_U_B_GRYOCP_CombatUniform"}, // 0.03%
			{9586.24638827454, "TRYK_U_B_BLKBLK_R_CombatUniform"}, // 0.03%
			{9588.93412681134, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.03%
			{9591.62186534813, "TRYK_U_B_TANTAN_R_CombatUniform"}, // 0.03%
			{9594.30960388493, "TRYK_U_B_TANTAN_CombatUniform"}, // 0.03%
			{9596.99734242172, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.03%
			{9599.68508095852, "TRYK_U_B_OD_OD_CombatUniform"}, // 0.03%
			{9602.37281949531, "TRYK_HRP_khk"}, // 0.03%
			{9605.06055803211, "TRYK_HRP_USMC"}, // 0.03%
			{9607.7482965689, "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt"}, // 0.03%
			{9610.4360351057, "TRYK_U_B_WDL_GRY_CombatUniform"}, // 0.03%
			{9613.12377364249, "TRYK_U_B_woodtan_CombatUniform"}, // 0.03%
			{9615.81151217929, "TRYK_U_B_JSDF_CombatUniform"}, // 0.03%
			{9618.49925071608, "TRYK_U_B_MTP_BLK_CombatUniform"}, // 0.03%
			{9621.18698925288, "TRYK_U_B_MTP_R_CombatUniform"}, // 0.03%
			{9623.87472778967, "TRYK_U_B_MTP_CombatUniform"}, // 0.03%
			{9626.56246632647, "TRYK_U_B_AOR2_Rollup_CombatUniform"}, // 0.03%
			{9629.25020486327, "TRYK_U_B_AOR1_Rollup_CombatUniform"}, // 0.03%
			{9631.93794340006, "TRYK_U_B_NATO_OCP_R_CombatUniform"}, // 0.03%
			{9634.62568193686, "TRYK_U_B_NATO_OCP_CombatUniform"}, // 0.03%
			{9637.31342047365, "TRYK_U_B_NATO_OCPD_R_CombatUniform"}, // 0.03%
			{9640.00115901045, "TRYK_U_B_NATO_OCPD_CombatUniform"}, // 0.03%
			{9642.68889754724, "TRYK_U_B_NATO_OCP_BLK_R_CombatUniform"}, // 0.03%
			{9645.37663608404, "TRYK_U_B_NATO_OCP_BLK_CombatUniform"}, // 0.03%
			{9648.06437462083, "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform"}, // 0.03%
			{9650.75211315763, "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform"}, // 0.03%
			{9653.43985169442, "TRYK_U_B_NATO_UCP_R_CombatUniform"}, // 0.03%
			{9656.12759023122, "TRYK_U_B_NATO_UCP_CombatUniform"}, // 0.03%
			{9658.81532876801, "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform"}, // 0.03%
			{9661.50306730481, "TRYK_U_B_NATO_UCP_GRY_CombatUniform"}, // 0.03%
			{9664.1908058416, "TRYK_U_B_BLK_OD_Rollup_CombatUniform"}, // 0.03%
			{9666.8785443784, "TRYK_U_B_BLK_tan_Rollup_CombatUniform"}, // 0.03%
			{9669.56628291519, "TRYK_U_B_wh_blk_Rollup_CombatUniform"}, // 0.03%
			{9672.25402145199, "TRYK_U_B_wh_OD_Rollup_CombatUniform"}, // 0.03%
			{9674.94175998878, "TRYK_U_B_wh_tan_Rollup_CombatUniform"}, // 0.03%
			{9677.62949852558, "TRYK_U_B_3CD_Ranger_BDUTshirt"}, // 0.03%
			{9680.31723706237, "TRYK_U_B_3CD_Ranger_BDU"}, // 0.03%
			{9683.00497559917, "TRYK_U_B_3CD_Delta_BDUTshirt"}, // 0.03%
			{9685.69271413596, "TRYK_U_B_3CD_Delta_BDU"}, // 0.03%
			{9688.38045267276, "TRYK_U_B_JSDF_CombatUniformTshirt"}, // 0.03%
			{9691.06819120956, "TRYK_U_B_woodtanR_CombatUniformTshirt"}, // 0.03%
			{9693.75592974635, "TRYK_HRP_UCP"}, // 0.03%
			{9696.44366828315, "TRYK_U_B_Woodland"}, // 0.03%
			{9699.13140681994, "TRYK_T_camo_3c"}, // 0.03%
			{9701.81914535674, "TRYK_U_B_ARO1_BLK_CombatUniform"}, // 0.03%
			{9704.50688389353, "TRYK_U_B_ARO1_BLK_R_CombatUniform"}, // 0.03%
			{9707.19462243033, "TRYK_T_camo_Wood"}, // 0.03%
			{9709.88236096712, "TRYK_U_B_ARO1_CBR_CombatUniform"}, // 0.03%
			{9712.57009950392, "TRYK_U_B_ARO1_CBR_R_CombatUniform"}, // 0.03%
			{9715.25783804071, "TRYK_U_B_ARO2_CombatUniform"}, // 0.03%
			{9717.94557657751, "TRYK_U_B_ARO2R_CombatUniform"}, // 0.03%
			{9720.6333151143, "TRYK_U_B_Snowt"}, // 0.03%
			{9723.3210536511, "TRYK_U_B_AOR2_BLK_CombatUniform"}, // 0.03%
			{9726.00879218789, "TRYK_U_B_MTP_BLK_R_CombatUniform"}, // 0.03%
			{9728.69653072469, "TRYK_U_B_AOR2_BLK_R_CombatUniform"}, // 0.03%
			{9731.38426926148, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.03%
			{9734.07200779828, "TRYK_U_B_AOR2_OD_R_CombatUniform"}, // 0.03%
			{9736.75974633507, "TRYK_U_B_AOR2_GRY_CombatUniform"}, // 0.03%
			{9739.44748487187, "TRYK_U_B_AOR2_GRY_R_CombatUniform"}, // 0.03%
			{9742.13522340866, "TRYK_U_B_Snow_CombatUniform"}, // 0.03%
			{9744.82296194546, "TRYK_U_B_Woodland_Tshirt"}, // 0.03%
			{9747.51070048225, "TRYK_U_B_ARO1_CombatUniform"}, // 0.03%
			{9750.19843901905, "TRYK_U_B_ARO1R_CombatUniform"}, // 0.03%
			{9752.88617755585, "TRYK_T_camo_Desert_marpat"}, // 0.03%
			{9755.57391609264, "TRYK_U_B_WDL_GRY_R_CombatUniform"}, // 0.03%
			{9758.26165462944, "TRYK_U_B_ARO1_GR_CombatUniform"}, // 0.03%
			{9760.94939316623, "TRYK_U_B_ARO1_GR_R_CombatUniform"}, // 0.03%
			{9763.63713170303, "TRYK_U_B_ARO1_GRY_CombatUniform"}, // 0.03%
			{9766.32487023982, "TRYK_T_camo_wood_marpat"}, // 0.03%
			{9769.01260877662, "TRYK_U_B_ARO1_GRY_R_CombatUniform"}, // 0.03%
			{9771.70034731341, "TRYK_T_camo_tan"}, // 0.03%
			{9774.38808585021, "TRYK_T_camo_desert_marpat_BG"}, // 0.03%
			{9777.075824387, "TRYK_T_camo_wood_marpat_BG"}, // 0.03%
			{9779.7635629238, "TRYK_T_camo_Wood_BG"}, // 0.03%
			{9782.45130146059, "TRYK_T_camo_3c_BG"}, // 0.03%
			{9785.10895337198, "CUP_acc_ANPEQ_2_camo"}, // 0.03%
			{9787.76660528336, "CUP_acc_ANPEQ_2_desert"}, // 0.03%
			{9790.42425719474, "CUP_acc_ANPEQ_2_grey"}, // 0.03%
			{9793.08190910613, "optic_NVS"}, // 0.03%
			{9795.64601167023, "V_I_G_resistanceLeader_F"}, // 0.03%
			{9798.17685176452, "10Rnd_50BW_Mag_F"}, // 0.03%
			{9800.69809322382, "CUP_srifle_AWM_wdl"}, // 0.03%
			{9803.21933468311, "hlc_rifle_awMagnum_FDE_ghillie"}, // 0.03%
			{9805.74057614241, "CUP_srifle_AWM_des"}, // 0.03%
			{9808.10685757846, "CUP_srifle_L129A1"}, // 0.02%
			{9810.47313901451, "CUP_srifle_L129A1_HG"}, // 0.02%
			{9812.80838725139, "H_FakeHeadgear_Syndikat_F"}, // 0.02%
			{9815.14363548828, "H_Cap_grn_Syndikat_F"}, // 0.02%
			{9817.47888372517, "H_Cap_blk_Syndikat_F"}, // 0.02%
			{9819.81413196206, "H_Cap_tan_Syndikat_F"}, // 0.02%
			{9822.14938019895, "H_Cap_oli_Syndikat_F"}, // 0.02%
			{9824.48462843584, "H_MilCap_gen_F"}, // 0.02%
			{9826.81987667272, "H_Booniehat_tna_F"}, // 0.02%
			{9829.15512490961, "H_ShemagOpen_tan"}, // 0.02%
			{9831.4903731465, "H_MilCap_ghex_F"}, // 0.02%
			{9833.82562138339, "H_Watchcap_camo"}, // 0.02%
			{9836.16086962028, "H_Watchcap_sgg"}, // 0.02%
			{9838.49611785716, "H_TurbanO_blk"}, // 0.02%
			{9840.83136609405, "H_Shemag_khk"}, // 0.02%
			{9843.16661433094, "H_Shemag_tan"}, // 0.02%
			{9845.50186256783, "H_Shemag_olive"}, // 0.02%
			{9847.83711080472, "H_Shemag_olive_hs"}, // 0.02%
			{9850.17235904161, "H_MilCap_tna_F"}, // 0.02%
			{9852.50760727849, "H_ShemagOpen_khk"}, // 0.02%
			{9854.82386975736, "H_PilotHelmetFighter_I"}, // 0.02%
			{9857.14013223622, "H_PilotHelmetHeli_O"}, // 0.02%
			{9859.45639471509, "H_HelmetCrew_B"}, // 0.02%
			{9861.77265719395, "H_HelmetO_ocamo"}, // 0.02%
			{9864.08891967281, "H_HelmetCrew_O"}, // 0.02%
			{9866.40518215168, "H_HelmetLeaderO_ocamo"}, // 0.02%
			{9868.72144463054, "H_HelmetCrew_I"}, // 0.02%
			{9871.0377071094, "H_PilotHelmetFighter_B"}, // 0.02%
			{9873.35396958827, "H_PilotHelmetFighter_O"}, // 0.02%
			{9875.67023206713, "H_HelmetSpecO_blk"}, // 0.02%
			{9877.986494546, "H_PilotHelmetHeli_B"}, // 0.02%
			{9880.30275702486, "H_HelmetSpecO_ocamo"}, // 0.02%
			{9882.61901950372, "H_PilotHelmetHeli_I"}, // 0.02%
			{9884.93528198259, "H_HelmetB_camo"}, // 0.02%
			{9887.25154446145, "H_CrewHelmetHeli_B"}, // 0.02%
			{9889.56780694031, "H_CrewHelmetHeli_O"}, // 0.02%
			{9891.88406941918, "H_CrewHelmetHeli_I"}, // 0.02%
			{9894.20033189804, "H_HelmetO_oucamo"}, // 0.02%
			{9896.51659437691, "H_HelmetLeaderO_oucamo"}, // 0.02%
			{9898.83285685577, "H_HelmetO_ghex_F"}, // 0.02%
			{9901.07699448452, "arifle_MX_GL_khk_F"}, // 0.02%
			{9903.32113211328, "arifle_MXC_khk_F"}, // 0.02%
			{9905.56526974203, "arifle_MX_khk_F"}, // 0.02%
			{9907.80940737078, "CUP_arifle_Sa58RIS1"}, // 0.02%
			{9910.05354499954, "CUP_arifle_Sa58RIS2_gl"}, // 0.02%
			{9912.29768262829, "CUP_arifle_Sa58RIS2_Arco_Laser"}, // 0.02%
			{9914.48922328137, "U_I_G_resistanceLeader_F"}, // 0.02%
			{9916.49438657685, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.02%
			{9918.45800700201, "CUP_arifle_Sa58P_des"}, // 0.02%
			{9920.42162742717, "CUP_arifle_M4A1_camo"}, // 0.02%
			{9922.38524785233, "CUP_arifle_Sa58RIS2_camo"}, // 0.02%
			{9924.06835107389, "arifle_MXM_F"}, // 0.02%
			{9925.75145429546, "Exile_Weapon_SVD"}, // 0.02%
			{9927.43455751702, "Exile_Weapon_VSSVintorez"}, // 0.02%
			{9929.11766073859, "Exile_Weapon_SVDCamo"}, // 0.02%
			{9930.80076396015, "CUP_arifle_M4A3_desert"}, // 0.02%
			{9932.41340708223, "TRYK_H_ghillie_top_headless_green"}, // 0.02%
			{9934.02605020431, "TRYK_H_ghillie_over_green"}, // 0.02%
			{9935.63869332638, "TRYK_H_ghillie_top_headless"}, // 0.02%
			{9937.25133644846, "TRYK_H_ghillie_top"}, // 0.02%
			{9938.86397957054, "TRYK_H_ghillie_over"}, // 0.02%
			{9940.47662269261, "TRYK_H_ghillie_top_green"}, // 0.02%
			{9941.87920871058, "arifle_ARX_hex_F"}, // 0.01%
			{9943.28179472855, "arifle_ARX_ghex_F"}, // 0.01%
			{9944.68438074652, "arifle_ARX_blk_F"}, // 0.01%
			{9946.08696676449, "arifle_SPAR_01_khk_F"}, // 0.01%
			{9947.48955278246, "arifle_SPAR_01_snd_F"}, // 0.01%
			{9948.89213880043, "arifle_CTARS_ghex_F"}, // 0.01%
			{9950.2947248184, "arifle_CTAR_blk_F"}, // 0.01%
			{9951.69731083637, "arifle_CTARS_blk_F"}, // 0.01%
			{9953.09989685434, "arifle_CTAR_hex_F"}, // 0.01%
			{9954.50248287231, "arifle_SPAR_01_GL_blk_F"}, // 0.01%
			{9955.90506889028, "arifle_CTAR_ghex_F"}, // 0.01%
			{9957.30765490825, "arifle_CTAR_GL_blk_F"}, // 0.01%
			{9958.71024092622, "arifle_CTARS_hex_F"}, // 0.01%
			{9960.11282694419, "Exile_Weapon_DMR"}, // 0.01%
			{9961.51541296216, "arifle_SPAR_01_GL_khk_F"}, // 0.01%
			{9962.91799898013, "CUP_arifle_AKS_Gold"}, // 0.01%
			{9964.3205849981, "arifle_SPAR_02_blk_F"}, // 0.01%
			{9965.72317101607, "arifle_SPAR_02_khk_F"}, // 0.01%
			{9967.12575703404, "arifle_SPAR_02_snd_F"}, // 0.01%
			{9968.52834305201, "CUP_arifle_L85A2_NG"}, // 0.01%
			{9969.93092906998, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.01%
			{9971.33351508795, "arifle_SPAR_03_blk_F"}, // 0.01%
			{9972.73610110592, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.01%
			{9974.13868712389, "CUP_arifle_AK107_GL_kobra"}, // 0.01%
			{9975.54127314186, "CUP_arifle_AK107_GL_pso"}, // 0.01%
			{9976.94385915983, "CUP_arifle_AK107_kobra"}, // 0.01%
			{9978.3464451778, "arifle_SPAR_01_GL_snd_F"}, // 0.01%
			{9979.68322070813, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.01%
			{9980.85084482657, "H_Beret_blk"}, // 0.01%
			{9982.01846894501, "H_Beret_grn"}, // 0.01%
			{9983.18609306346, "H_Beret_grn_SF"}, // 0.01%
			{9984.3537171819, "H_Beret_brn_SF"}, // 0.01%
			{9985.52134130034, "H_Beret_ocamo"}, // 0.01%
			{9986.68896541879, "H_Beret_02"}, // 0.01%
			{9987.85658953723, "H_Beret_Colonel"}, // 0.01%
			{9989.02421365567, "H_Beret_red"}, // 0.01%
			{9990.14628247005, "arifle_MXM_Black_F"}, // 0.01%
			{9991.26835128443, "arifle_TRG21_GL_F"}, // 0.01%
			{9992.3904200988, "CUP_arifle_G36C_camo_holo_snds"}, // 0.01%
			{9993.51248891318, "arifle_Mk20_GL_F"}, // 0.01%
			{9994.35404052396, "arifle_MX_Black_F"}, // 0.01%
			{9995.19559213474, "arifle_MX_GL_Black_F"}, // 0.01%
			{9996.03714374552, "Exile_Weapon_AKS_Gold"}, // 0.01%
			{9996.8786953563, "arifle_Mk20C_F"}, // 0.01%
			{9997.72024696709, "arifle_MXM_khk_F"}, // 0.01%
			{9998.56179857787, "arifle_MXC_Black_F"}, // 0.01%
			{9999.40335018865, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.01%
			{9999.99999999996, "ItemWatch"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_InstaDoc
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine02
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Magazine03
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_Magazine03
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Vishpirin
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Vishpirin
	  Exile_Item_InstaDoc
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Magazine04
	  Exile_Item_Magazine04
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

	  H_HelmetIA_net
	  hgun_Pistol_heavy_01_F
	  ItemMap
	  CUP_acc_Glock17_Flashlight
	  U_IG_Guerilla3_1
	  Exile_Item_ZipTie
	  optic_Yorris
	  CUP_18Rnd_9x19_Phantom
	  hlc_smg_mp5k
	  B_ViperHarness_hex_F
	  Exile_Item_CanOpener
	  H_PilotHelmetFighter_I
	  ItemCompass
	  B_Kitbag_mcamo
	  hlc_30Rnd_9x19_GD_MP5
	  B_FieldPack_cbr
	  B_AssaultPack_khk
	  B_Bergen_rgr
	  Exile_Item_Noodles
	  muzzle_snds_L
	  ItemCompass
	  H_HelmetB_plain_blk
	  B_Carryall_cbr
	  B_AssaultPack_rgr
	  B_Carryall_oucamo
	  B_AssaultPack_khk
	  B_Bergen_dgtl_F
	  muzzle_snds_acp
	  B_Carryall_khk
	  Exile_Item_PlasticBottleDirtyWater
	  B_ViperLightHarness_khk_F
	  B_ViperLightHarness_khk_F
	  Exile_Item_ZipTie
	  muzzle_snds_acp
	  Binocular
	  U_I_GhillieSuit
	  hlc_30Rnd_9x19_B_MP5
	  muzzle_snds_acp
	  Exile_Item_ChristmasTinner
	  ItemCompass
	  B_AssaultPack_cbr
	  Exile_Item_MountainDupe
	  hlc_smg_mp5k
	  H_HelmetB_light_desert
	  CUP_hgun_Duty_M3X
	  B_AssaultPack_sgg
	  muzzle_snds_acp
	  CUP_muzzle_snds_MicroUzi
	  Exile_Item_ChocolateMilk
	  B_Bergen_tna_F
	  hgun_Pistol_heavy_01_F
	  Exile_Item_CanOpener
	  B_Carryall_oucamo
	  muzzle_snds_L
	  U_IG_Guerilla2_2
	  Exile_Item_ZipTie
	  B_OutdoorPack_blk
	  B_ViperHarness_blk_F
	  H_HelmetB_sand
	  Exile_Item_MountainDupe
	  Exile_Item_PlasticBottleCoffee
	  B_Carryall_oli
	  B_AssaultPack_cbr
	  Exile_Item_Raisins
	  H_HelmetB_Light_tna_F
	  hgun_P07_F
	  U_O_SpecopsUniform_ocamo
	  H_HelmetIA_net
	  Exile_Item_PlasticBottleFreshWater
	  U_B_GhillieSuit
	  ItemCompass
	  B_OutdoorPack_blk
	  ItemCompass
	  Exile_Item_SeedAstics
	  O_NVGoggles_ghex_F
	  Exile_Item_PlasticBottleDirtyWater
	  U_IG_Guerilla2_2
	  B_Carryall_oli
	  Exile_Magazine_6Rnd_45ACP
	  HandGrenade
	  B_OutdoorPack_blk
	  U_IG_Guerilla2_1
	  Exile_Item_MountainDupe
	  Exile_Magazine_8Rnd_9x18
	  CUP_acc_CZ_M3X
	  Exile_Item_Vishpirin
	  B_AssaultPack_cbr
	  U_B_CTRG_1
	  CUP_hgun_PB6P9_snds
	  Exile_Item_Beer
	  Exile_Item_Surstromming
	  U_B_CombatUniform_mcam_tshirt
	  HandGrenade
	  Exile_Item_CockONut
	  H_MilCap_ocamo
	  U_B_CTRG_Soldier_2_F
	  B_ViperLightHarness_ghex_F
	  Exile_Item_ZipTie
	  U_O_V_Soldier_Viper_F
	  H_HelmetO_oucamo
	*/
	class Tourist
	{
		count = 259;
		half = 8161.97936316183;
		halfIndex = 129;
		sum = 10000;
		items[] = 
		{
			{253.164556962025, "Exile_Item_ZipTie"}, // 2.53%
			{435.735150925024, "Exile_Item_PlasticBottleDirtyWater"}, // 1.83%
			{601.418761502266, "ItemMap"}, // 1.66%
			{747.475236672665, "Exile_Item_ChocolateMilk"}, // 1.46%
			{893.531711843064, "Exile_Item_MountainDupe"}, // 1.46%
			{1031.1211449746, "ItemCompass"}, // 1.38%
			{1163.66803343639, "ItemCompass"}, // 1.33%
			{1296.21492189819, "Exile_Item_Heatpack"}, // 1.33%
			{1424.21947317112, "muzzle_snds_acp"}, // 1.28%
			{1552.22402444405, "muzzle_snds_L"}, // 1.28%
			{1678.80630292507, "MiniGrenade"}, // 1.27%
			{1805.38858140608, "HandGrenade"}, // 1.27%
			{1929.53658530092, "Exile_Item_EnergyDrink"}, // 1.24%
			{2047.83778014299, "B_OutdoorPack_blk"}, // 1.18%
			{2157.38013652079, "Exile_Item_PlasticBottleCoffee"}, // 1.10%
			{2263.85121187865, "B_OutdoorPack_blu"}, // 1.06%
			{2370.32228723651, "B_OutdoorPack_tan"}, // 1.06%
			{2472.56181985579, "Exile_Item_Beer"}, // 1.02%
			{2571.97198620213, "Binocular"}, // 0.99%
			{2666.61294207579, "B_HuntingBackpack"}, // 0.95%
			{2754.24682717803, "Exile_Item_PlasticBottleFreshWater"}, // 0.88%
			{2841.54495026838, "Exile_Item_Vishpirin"}, // 0.87%
			{2928.84307335873, "Exile_Item_Heatpack"}, // 0.87%
			{3011.65390974818, "B_AssaultPack_cbr"}, // 0.83%
			{3094.46474613763, "B_AssaultPack_rgr"}, // 0.83%
			{3177.27558252708, "B_AssaultPack_sgg"}, // 0.83%
			{3260.08641891653, "B_AssaultPack_blk"}, // 0.83%
			{3342.89725530597, "B_AssaultPack_dgtl"}, // 0.83%
			{3425.70809169542, "B_AssaultPack_khk"}, // 0.83%
			{3508.51892808487, "B_AssaultPack_mcamo"}, // 0.83%
			{3591.32976447432, "B_AssaultPack_tna_F"}, // 0.83%
			{3672.03658632463, "B_Carryall_ghex_F"}, // 0.81%
			{3752.74340817494, "B_Carryall_cbr"}, // 0.81%
			{3830.64019493248, "U_IG_Guerilla2_1"}, // 0.78%
			{3908.53698169003, "U_IG_Guerilla2_2"}, // 0.78%
			{3986.43376844757, "U_IG_Guerilla2_3"}, // 0.78%
			{4064.33055520512, "U_IG_Guerilla1_1"}, // 0.78%
			{4140.78964958962, "B_Carryall_khk"}, // 0.76%
			{4217.24874397413, "B_Carryall_oli"}, // 0.76%
			{4290.27698155933, "U_IG_Guerilla3_2"}, // 0.73%
			{4363.30521914453, "U_IG_Guerilla3_1"}, // 0.73%
			{4434.4188587406, "CUP_muzzle_snds_MicroUzi"}, // 0.71%
			{4505.53249833668, "CUP_acc_Glock17_Flashlight"}, // 0.71%
			{4576.64613793275, "CUP_acc_CZ_M3X"}, // 0.71%
			{4645.44085449852, "Rangefinder"}, // 0.69%
			{4711.71429872942, "ItemRadio"}, // 0.66%
			{4775.71657436588, "CUP_muzzle_snds_M9"}, // 0.64%
			{4839.43248635297, "B_Carryall_ocamo"}, // 0.64%
			{4903.14839834006, "B_Carryall_oucamo"}, // 0.64%
			{4966.86431032714, "B_Carryall_mcamo"}, // 0.64%
			{5027.72117498148, "Exile_Item_Matches"}, // 0.61%
			{5088.57803963581, "Exile_Item_CanOpener"}, // 0.61%
			{5147.91348267378, "CUP_hgun_Phantom"}, // 0.59%
			{5207.06408009482, "B_Kitbag_cbr"}, // 0.59%
			{5266.21467751585, "B_Kitbag_sgg"}, // 0.59%
			{5325.36527493688, "B_Kitbag_mcamo"}, // 0.59%
			{5380.13645312578, "Exile_Item_Moobar"}, // 0.55%
			{5434.90763131468, "Exile_Item_Raisins"}, // 0.55%
			{5486.02739762432, "Exile_Item_PowerDrink"}, // 0.51%
			{5535.80694534158, "optic_MRD"}, // 0.50%
			{5585.58649305883, "optic_Yorris"}, // 0.50%
			{5635.03269559047, "hlc_smg_mp5k_PDW"}, // 0.49%
			{5684.47889812212, "hlc_smg_mp5k"}, // 0.49%
			{5733.92510065376, "hgun_Pistol_heavy_01_F"}, // 0.49%
			{5782.61059237723, "Exile_Item_InstantCoffee"}, // 0.49%
			{5831.2960841007, "Exile_Item_CockONut"}, // 0.49%
			{5879.98157582416, "Exile_Item_SeedAstics"}, // 0.49%
			{5928.66706754763, "Exile_Item_EMRE"}, // 0.49%
			{5973.23829236489, "Exile_Magazine_6Rnd_45ACP"}, // 0.45%
			{6017.80951718215, "Exile_Magazine_8Rnd_9x18"}, // 0.45%
			{6062.3807419994, "Exile_Magazine_7Rnd_45ACP"}, // 0.45%
			{6106.95196681666, "9Rnd_45ACP_Mag"}, // 0.45%
			{6151.52319163392, "hlc_30Rnd_9x19_B_MP5"}, // 0.45%
			{6196.09441645118, "30Rnd_9x21_Mag"}, // 0.45%
			{6240.66564126843, "11Rnd_45ACP_Mag"}, // 0.45%
			{6285.23686608569, "10Rnd_9x21_Mag"}, // 0.45%
			{6328.88592763087, "Exile_Item_Bandage"}, // 0.44%
			{6371.7393031583, "hgun_Rook40_F"}, // 0.43%
			{6414.59267868572, "hgun_P07_khk_F"}, // 0.43%
			{6457.44605421315, "hgun_Pistol_01_F"}, // 0.43%
			{6500.29942974057, "CUP_hgun_SA61"}, // 0.43%
			{6542.89923499861, "Exile_Item_Surstromming"}, // 0.43%
			{6585.49904025664, "Exile_Item_Cheathas"}, // 0.43%
			{6628.09884551468, "Exile_Item_MacasCheese"}, // 0.43%
			{6670.69865077271, "Exile_Item_BBQSandwich"}, // 0.43%
			{6713.29845603074, "Exile_Item_ChristmasTinner"}, // 0.43%
			{6755.89826128878, "Exile_Item_CatFood"}, // 0.43%
			{6798.49806654681, "Exile_Item_Dogfood"}, // 0.43%
			{6841.09787180484, "Exile_Item_BeefParts"}, // 0.43%
			{6883.69767706288, "Exile_Item_SausageGravy"}, // 0.43%
			{6926.29748232091, "Exile_Item_DsNuts"}, // 0.43%
			{6968.89728757894, "Exile_Item_Noodles"}, // 0.43%
			{7009.01138991448, "hlc_30Rnd_9x19_GD_MP5"}, // 0.40%
			{7049.12549225001, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.40%
			{7089.23959458554, "CUP_18Rnd_9x19_Phantom"}, // 0.40%
			{7129.35369692107, "CUP_30Rnd_9x19_UZI"}, // 0.40%
			{7168.91065894639, "CUP_hgun_Duty_M3X"}, // 0.40%
			{7208.4676209717, "hgun_P07_F"}, // 0.40%
			{7244.9817397643, "Exile_Item_GloriousKnakworst"}, // 0.37%
			{7281.44577060246, "B_FieldPack_cbr"}, // 0.36%
			{7317.90980144061, "B_FieldPack_oucamo"}, // 0.36%
			{7354.37383227876, "B_FieldPack_ocamo"}, // 0.36%
			{7390.83786311691, "B_FieldPack_blk"}, // 0.36%
			{7426.49484297072, "6Rnd_45ACP_Cylinder"}, // 0.36%
			{7461.41409220686, "Exile_Item_InstaDoc"}, // 0.35%
			{7494.37822722796, "CUP_hgun_PB6P9_snds"}, // 0.33%
			{7523.02853717222, "B_ViperHarness_blk_F"}, // 0.29%
			{7551.67884711648, "B_ViperHarness_hex_F"}, // 0.29%
			{7580.32915706075, "B_ViperHarness_ghex_F"}, // 0.29%
			{7608.97946700501, "B_ViperHarness_base_F"}, // 0.29%
			{7637.62977694927, "B_Bergen_sgg"}, // 0.29%
			{7666.28008689353, "B_Bergen_blk"}, // 0.29%
			{7694.9303968378, "B_Bergen_rgr"}, // 0.29%
			{7723.58070678206, "B_Bergen_mcamo"}, // 0.29%
			{7752.23101672632, "B_ViperHarness_khk_F"}, // 0.29%
			{7780.88132667058, "B_FieldPack_ghex_F"}, // 0.29%
			{7809.53163661485, "B_ViperHarness_oli_F"}, // 0.29%
			{7838.18194655911, "B_ViperLightHarness_khk_F"}, // 0.29%
			{7866.83225650337, "B_ViperLightHarness_blk_F"}, // 0.29%
			{7895.48256644763, "B_ViperLightHarness_ghex_F"}, // 0.29%
			{7924.1328763919, "B_ViperLightHarness_hex_F"}, // 0.29%
			{7952.78318633616, "B_ViperLightHarness_oli_F"}, // 0.29%
			{7981.43349628042, "B_ViperLightHarness_base_F"}, // 0.29%
			{8008.17623117078, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.27%
			{8034.54753918765, "CUP_hgun_MicroUzi"}, // 0.26%
			{8060.03390398249, "B_Bergen_Base_F"}, // 0.25%
			{8085.52026877732, "B_Bergen_hex_F"}, // 0.25%
			{8111.00663357216, "B_Bergen_mcamo_F"}, // 0.25%
			{8136.49299836699, "B_Bergen_tna_F"}, // 0.25%
			{8161.97936316183, "B_Bergen_dgtl_F"}, // 0.25%
			{8186.32210902356, "U_I_C_Soldier_Para_5_F"}, // 0.24%
			{8210.6648548853, "U_I_C_Soldier_Para_1_F"}, // 0.24%
			{8235.00760074703, "U_I_C_Soldier_Camo_F"}, // 0.24%
			{8259.35034660876, "U_I_C_Soldier_Para_2_F"}, // 0.24%
			{8283.6930924705, "U_I_C_Soldier_Para_4_F"}, // 0.24%
			{8308.03583833223, "U_I_C_Soldier_Para_3_F"}, // 0.24%
			{8331.110732847, "hgun_Pistol_heavy_02_F"}, // 0.23%
			{8354.18562736177, "hgun_ACPC2_F"}, // 0.23%
			{8376.47123977039, "16Rnd_9x21_Mag"}, // 0.22%
			{8398.48554907144, "O_NVGoggles_urb_F"}, // 0.22%
			{8420.49985837249, "NVGoggles"}, // 0.22%
			{8442.51416767353, "NVGoggles_tna_F"}, // 0.22%
			{8464.52847697458, "O_NVGoggles_ghex_F"}, // 0.22%
			{8486.54278627563, "O_NVGoggles_hex_F"}, // 0.22%
			{8507.63983268913, "U_B_GhillieSuit"}, // 0.21%
			{8528.73687910263, "U_I_GhillieSuit"}, // 0.21%
			{8549.83392551613, "U_O_GhillieSuit"}, // 0.21%
			{8570.65337921367, "U_B_CTRG_Soldier_3_F"}, // 0.21%
			{8591.4728329112, "U_O_T_Soldier_F"}, // 0.21%
			{8612.29228660874, "U_B_CombatUniform_mcam"}, // 0.21%
			{8633.11174030627, "U_B_CombatUniform_mcam_tshirt"}, // 0.21%
			{8653.93119400381, "U_B_CombatUniform_mcam_vest"}, // 0.21%
			{8674.75064770134, "U_B_CombatUniform_mcam_worn"}, // 0.21%
			{8695.57010139888, "U_B_CTRG_1"}, // 0.21%
			{8716.38955509642, "U_O_T_Officer_F"}, // 0.21%
			{8737.20900879395, "U_B_CTRG_3"}, // 0.21%
			{8758.02846249149, "U_B_T_Soldier_AR_F"}, // 0.21%
			{8778.84791618902, "U_B_T_Soldier_SL_F"}, // 0.21%
			{8799.66736988656, "U_B_CTRG_2"}, // 0.21%
			{8820.48682358409, "U_B_CTRG_Soldier_2_F"}, // 0.21%
			{8841.30627728163, "U_B_GEN_Commander_F"}, // 0.21%
			{8862.12573097916, "U_B_GEN_Soldier_F"}, // 0.21%
			{8882.9451846767, "U_B_CTRG_Soldier_urb_3_F"}, // 0.21%
			{8903.76463837423, "U_B_CTRG_Soldier_F"}, // 0.21%
			{8924.58409207177, "U_B_CTRG_Soldier_urb_2_F"}, // 0.21%
			{8945.4035457693, "U_B_CTRG_Soldier_urb_1_F"}, // 0.21%
			{8965.98603007516, "H_MilCap_dgtl"}, // 0.21%
			{8986.56851438102, "H_MilCap_blue"}, // 0.21%
			{9007.15099868687, "Exile_Headgear_GasMask"}, // 0.21%
			{9027.73348299273, "H_MilCap_oucamo"}, // 0.21%
			{9048.31596729858, "H_MilCap_ocamo"}, // 0.21%
			{9068.89845160444, "H_MilCap_mcamo"}, // 0.21%
			{9089.4809359103, "H_MilCap_rucamo"}, // 0.21%
			{9109.25941692295, "Exile_Weapon_Makarov"}, // 0.20%
			{9128.73361361234, "U_IG_leader"}, // 0.19%
			{9146.99067300864, "Exile_Item_CookingPot"}, // 0.18%
			{9163.64623596667, "U_I_CombatUniform"}, // 0.17%
			{9180.30179892469, "U_I_CombatUniform_shortsleeve"}, // 0.17%
			{9196.95736188272, "U_B_HeliPilotCoveralls"}, // 0.17%
			{9213.61292484075, "U_B_PilotCoveralls"}, // 0.17%
			{9230.26848779878, "U_I_pilotCoveralls"}, // 0.17%
			{9246.9240507568, "U_I_HeliPilotCoveralls"}, // 0.17%
			{9263.57961371483, "U_I_CombatUniform_tshirt"}, // 0.17%
			{9280.23517667286, "U_O_PilotCoveralls"}, // 0.17%
			{9296.80353773058, "Exile_Item_MobilePhone"}, // 0.17%
			{9313.3718987883, "ItemGPS"}, // 0.17%
			{9329.85396629885, "Exile_Weapon_Colt1911"}, // 0.16%
			{9345.45389498489, "6Rnd_RedSignal_F"}, // 0.16%
			{9361.05382367093, "6Rnd_GreenSignal_F"}, // 0.16%
			{9376.49068690033, "H_HelmetB_light"}, // 0.15%
			{9391.92755012972, "H_HelmetIA"}, // 0.15%
			{9407.36441335911, "H_HelmetSpecB_blk"}, // 0.15%
			{9422.8012765885, "H_HelmetSpecB_paint1"}, // 0.15%
			{9438.23813981789, "H_HelmetSpecB"}, // 0.15%
			{9453.67500304728, "H_HelmetB"}, // 0.15%
			{9469.11186627668, "H_HelmetSpecB_paint2"}, // 0.15%
			{9484.54872950607, "H_HelmetB_paint"}, // 0.15%
			{9499.98559273546, "H_HelmetB_plain_blk"}, // 0.15%
			{9513.1712467439, "Exile_Weapon_TaurusGold"}, // 0.13%
			{9525.66291896242, "U_B_SpecopsUniform_sgg"}, // 0.12%
			{9535.95416111535, "H_HelmetLeaderO_ghex_F"}, // 0.10%
			{9546.24540326827, "H_HelmetB_light_desert"}, // 0.10%
			{9556.5366454212, "H_HelmetB_light_snakeskin"}, // 0.10%
			{9566.82788757413, "H_HelmetB_light_grass"}, // 0.10%
			{9577.11912972706, "H_HelmetB_sand"}, // 0.10%
			{9587.41037187998, "H_HelmetB_black"}, // 0.10%
			{9597.70161403291, "H_HelmetB_desert"}, // 0.10%
			{9607.99285618584, "H_HelmetB_snakeskin"}, // 0.10%
			{9618.28409833877, "H_HelmetB_grass"}, // 0.10%
			{9628.57534049169, "H_HelmetIA_camo"}, // 0.10%
			{9638.86658264462, "H_BandMask_khk"}, // 0.10%
			{9649.15782479755, "H_BandMask_reaper"}, // 0.10%
			{9659.44906695047, "H_HelmetIA_net"}, // 0.10%
			{9669.7403091034, "H_HelmetB_light_black"}, // 0.10%
			{9680.03155125633, "H_HelmetB_TI_tna_F"}, // 0.10%
			{9690.32279340926, "H_HelmetCrew_O_ghex_F"}, // 0.10%
			{9700.61403556218, "H_Helmet_Skate"}, // 0.10%
			{9710.90527771511, "H_HelmetB_Enh_tna_F"}, // 0.10%
			{9721.19651986804, "H_HelmetB_Light_tna_F"}, // 0.10%
			{9731.48776202096, "H_Beret_gen_F"}, // 0.10%
			{9741.77900417389, "H_HelmetB_tna_F"}, // 0.10%
			{9752.07024632682, "H_HelmetSpecO_ghex_F"}, // 0.10%
			{9762.36148847975, "H_BandMask_demon"}, // 0.10%
			{9772.65273063267, "H_HelmetB_light_sand"}, // 0.10%
			{9782.541971139, "hgun_Pistol_Signal_F"}, // 0.10%
			{9792.43121164533, "Exile_Weapon_Taurus"}, // 0.10%
			{9802.16830999002, "U_I_G_resistanceLeader_F"}, // 0.10%
			{9810.49609146904, "U_O_SpecopsUniform_blk"}, // 0.08%
			{9818.82387294805, "U_O_V_Soldier_Viper_hex_F"}, // 0.08%
			{9827.15165442707, "U_O_V_Soldier_Viper_F"}, // 0.08%
			{9835.47943590608, "U_O_SpecopsUniform_ocamo"}, // 0.08%
			{9843.8072173851, "U_O_CombatUniform_oucamo"}, // 0.08%
			{9852.13499886411, "U_O_CombatUniform_ocamo"}, // 0.08%
			{9860.46278034312, "U_I_Wetsuit"}, // 0.08%
			{9868.79056182214, "U_O_Wetsuit"}, // 0.08%
			{9877.11834330115, "U_B_Wetsuit"}, // 0.08%
			{9885.44612478017, "U_I_OfficerUniform"}, // 0.08%
			{9893.77390625918, "U_O_OfficerUniform_ocamo"}, // 0.08%
			{9898.91952733565, "H_HelmetCrew_O"}, // 0.05%
			{9904.06514841211, "H_HelmetLeaderO_ocamo"}, // 0.05%
			{9909.21076948858, "H_HelmetO_ocamo"}, // 0.05%
			{9914.35639056504, "H_HelmetCrew_B"}, // 0.05%
			{9919.50201164151, "H_HelmetSpecO_blk"}, // 0.05%
			{9924.64763271797, "H_HelmetLeaderO_oucamo"}, // 0.05%
			{9929.79325379443, "H_HelmetO_oucamo"}, // 0.05%
			{9934.9388748709, "H_CrewHelmetHeli_I"}, // 0.05%
			{9940.08449594736, "H_CrewHelmetHeli_O"}, // 0.05%
			{9945.23011702383, "H_CrewHelmetHeli_B"}, // 0.05%
			{9950.37573810029, "H_HelmetB_camo"}, // 0.05%
			{9955.52135917676, "H_PilotHelmetHeli_I"}, // 0.05%
			{9960.66698025322, "H_PilotHelmetHeli_O"}, // 0.05%
			{9965.81260132969, "H_PilotHelmetHeli_B"}, // 0.05%
			{9970.95822240615, "H_PilotHelmetFighter_I"}, // 0.05%
			{9976.10384348262, "H_PilotHelmetFighter_O"}, // 0.05%
			{9981.24946455908, "H_PilotHelmetFighter_B"}, // 0.05%
			{9986.39508563554, "H_HelmetCrew_I"}, // 0.05%
			{9991.54070671201, "H_HelmetSpecO_ocamo"}, // 0.05%
			{9996.68632778847, "H_HelmetO_ghex_F"}, // 0.05%
			{10000, "ItemWatch"} // 0.03%
		};
	};

	/**
	  Result of 100 rounds:

	  U_B_FullGhillie_lsh
	  20Rnd_762x51_Mag
	  srifle_LRR_F
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_ZipTie
	  B_Carryall_oli
	  U_O_T_Sniper_F
	  20Rnd_762x51_Mag
	  srifle_DMR_03_khaki_F
	  srifle_DMR_06_camo_F
	  H_HelmetO_ocamo
	  DemoCharge_Remote_Mag
	  B_Carryall_ghex_F
	  U_B_T_Sniper_F
	  srifle_DMR_03_tan_F
	  U_I_GhillieSuit
	  Exile_Item_Bandage
	  hlc_rifle_awcovert_FDE
	  srifle_GM6_ghex_F
	  srifle_GM6_F
	  H_Helmet_Skate
	  CUP_srifle_M40A3
	  srifle_DMR_04_F
	  srifle_DMR_06_olive_F
	  U_I_GhillieSuit
	  B_Bergen_dgtl_F
	  srifle_GM6_ghex_F
	  srifle_DMR_02_F
	  Exile_Item_ZipTie
	  srifle_GM6_F
	  Exile_Item_InstaDoc
	  Exile_Item_ZipTie
	  srifle_GM6_ghex_F
	  srifle_EBR_F
	  H_MilCap_rucamo
	  B_Carryall_mcamo
	  srifle_GM6_ghex_F
	  CUP_srifle_CZ750
	  DemoCharge_Remote_Mag
	  srifle_DMR_04_Tan_F
	  srifle_LRR_tna_F
	  20Rnd_762x51_Mag
	  H_HelmetB_tna_F
	  U_O_T_FullGhillie_tna_F
	  srifle_DMR_04_F
	  srifle_GM6_ghex_F
	  Exile_Item_Vishpirin
	  srifle_LRR_tna_F
	  B_Bergen_Base_F
	  20Rnd_762x51_Mag
	  srifle_DMR_06_camo_F
	  srifle_DMR_06_olive_F
	  srifle_GM6_ghex_F
	  CUP_srifle_M24_wdl
	  Exile_Item_ZipTie
	  MiniGrenade
	  srifle_DMR_03_khaki_F
	  U_I_FullGhillie_lsh
	  srifle_LRR_tna_F
	  srifle_DMR_05_blk_F
	  srifle_DMR_02_camo_F
	  srifle_DMR_04_Tan_F
	  B_Carryall_cbr
	  CUP_5Rnd_762x51_M24
	  U_B_T_Soldier_F
	  CUP_launch_RPG7V
	  U_B_FullGhillie_ard
	  srifle_DMR_01_F
	  H_MilCap_mcamo
	  srifle_GM6_F
	  srifle_DMR_05_blk_F
	  DemoCharge_Remote_Mag
	  srifle_DMR_07_hex_F
	  H_MilCap_blue
	  Exile_Item_ZipTie
	  CUP_srifle_M24_wdl
	  srifle_DMR_02_F
	  srifle_DMR_07_blk_F
	  HandGrenade
	  srifle_DMR_05_blk_F
	  CUP_srifle_M40A3
	  srifle_LRR_tna_F
	  srifle_DMR_07_blk_F
	  srifle_DMR_03_tan_F
	  CUP_srifle_SVD
	  srifle_DMR_04_Tan_F
	  optic_AMS
	  srifle_DMR_03_F
	  srifle_DMR_05_tan_F
	  APERSBoundingMine_Range_Mag
	  H_MilCap_oucamo
	  HandGrenade
	  srifle_DMR_07_ghex_F
	  H_HelmetSpecB_blk
	  srifle_DMR_05_blk_F
	  hlc_rifle_awmagnum
	  Exile_Item_ZipTie
	  CUP_10Rnd_762x51_CZ750_Tracer
	  H_PilotHelmetFighter_O
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

	  V_PlateCarrierSpec_tna_F
	  U_B_T_Sniper_F
	  Exile_Item_ToiletPaper
	  5Rnd_127x108_Mag
	  5Rnd_127x108_APDS_Mag
	  Exile_Item_PlasticBottleEmpty
	  U_B_T_FullGhillie_tna_F
	  CUP_20Rnd_762x51_B_SCAR
	  U_B_T_Soldier_F
	  srifle_DMR_04_Tan_F
	  Exile_Item_Magazine02
	  CUP_srifle_L129A1_HG
	  Exile_Item_Can_Empty
	  CUP_M136_M
	  hlc_20rnd_762x51_T_G3
	  hlc_20Rnd_762x51_B_M14
	  optic_AMS_khk
	  CUP_srifle_M107_Base
	  srifle_DMR_05_blk_F
	  U_I_GhillieSuit
	  U_B_GhillieSuit
	  V_PlateCarrierGL_mtp
	  srifle_LRR_tna_F
	  optic_KHS_blk
	  Exile_Item_Magazine01
	  optic_AMS
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
	  U_I_GhillieSuit
	  10Rnd_93x64_DMR_05_Mag
	  Exile_Item_PlasticBottleEmpty
	  IEDUrbanSmall_Remote_Mag
	  IEDUrbanSmall_Remote_Mag
	  Exile_Item_PlasticBottleEmpty
	  U_I_GhillieSuit
	  muzzle_snds_B
	  srifle_DMR_05_hex_F
	  TRYK_U_B_PCUHsW
	  U_I_GhillieSuit
	  TRYK_U_B_PCUHsW6
	  U_B_GhillieSuit
	  optic_KHS_blk
	  Exile_Item_Can_Empty
	  U_B_T_Soldier_F
	  V_HarnessO_ghex_F
	  CUP_20Rnd_762x51_DMR
	  optic_KHS_blk
	  U_I_GhillieSuit
	  5Rnd_127x108_APDS_Mag
	  Exile_Item_ToiletPaper
	  srifle_DMR_02_sniper_F
	  U_B_T_Soldier_F
	  Exile_Item_Magazine02
	  Exile_Item_Magazine01
	  U_I_GhillieSuit
	  CUP_6Rnd_HE_M203
	  Exile_Item_PlasticBottleEmpty
	  muzzle_snds_338_green
	  srifle_DMR_04_Tan_F
	  V_HarnessOGL_ghex_F
	  Exile_Item_Can_Empty
	  muzzle_snds_338_sand
	  130Rnd_338_Mag
	  optic_KHS_tan
	  hlc_50rnd_762x51_M_G3
	  MMG_02_sand_F
	  CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
	  U_I_FullGhillie_sard
	  V_PlateCarrierSpec_tna_F
	  DemoCharge_Remote_Mag
	  CUP_arifle_FNFAL
	  U_B_GhillieSuit
	  muzzle_snds_338_green
	  Exile_Item_Can_Empty
	  hlc_20rnd_762x51_b_G3
	  CUP_srifle_M110
	  Exile_Item_PlasticBottleEmpty
	  srifle_LRR_F
	  150Rnd_93x64_Mag
	  TRYK_U_B_PCUHsW3nh
	  muzzle_snds_338_black
	  muzzle_snds_338_sand
	  srifle_LRR_F
	  Exile_Item_Can_Empty
	  TRYK_U_B_Snow_CombatUniform
	  SatchelCharge_Remote_Mag
	  optic_KHS_old
	  optic_KHS_tan
	  hlc_rifle_STG58F
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
	  muzzle_snds_93mmg_tan
	  TAC_W_ghillie_01
	  hlc_rifle_g3ka4
	  muzzle_snds_338_black
	  srifle_GM6_F
	  CUP_srifle_M14
	  hlc_rifle_sig5104
	  IEDLandSmall_Remote_Mag
	  Exile_Item_PlasticBottleEmpty
	  U_I_FullGhillie_sard
	  U_O_FullGhillie_sard
	*/
	class SuperCrate
	{
		count = 169;
		half = 7983.59896646687;
		halfIndex = 84;
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
			{2310.60606060606, "muzzle_snds_93mmg"}, // 1.52%
			{2462.12121212121, "muzzle_snds_93mmg_tan"}, // 1.52%
			{2613.63636363636, "muzzle_snds_B"}, // 1.52%
			{2750, "DemoCharge_Remote_Mag"}, // 1.36%
			{2879.87012987013, "optic_KHS_old"}, // 1.30%
			{3009.74025974026, "optic_KHS_tan"}, // 1.30%
			{3139.61038961039, "optic_KHS_blk"}, // 1.30%
			{3269.48051948052, "optic_AMS_snd"}, // 1.30%
			{3399.35064935065, "optic_AMS_khk"}, // 1.30%
			{3529.22077922078, "optic_AMS"}, // 1.30%
			{3659.09090909091, "optic_KHS_hex"}, // 1.30%
			{3769.06158357771, "srifle_LRR_tna_F"}, // 1.10%
			{3879.03225806452, "srifle_LRR_F"}, // 1.10%
			{3988.12316715543, "CUP_6Rnd_HE_M203"}, // 1.09%
			{4097.21407624633, "10Rnd_93x64_DMR_05_Mag"}, // 1.09%
			{4188.12316715543, "150Rnd_93x64_Mag"}, // 0.91%
			{4279.03225806452, "130Rnd_338_Mag"}, // 0.91%
			{4369.94134897361, "5Rnd_127x108_APDS_Mag"}, // 0.91%
			{4460.8504398827, "5Rnd_127x108_Mag"}, // 0.91%
			{4551.75953079179, "10Rnd_338_Mag"}, // 0.91%
			{4642.66862170088, "SatchelCharge_Remote_Mag"}, // 0.91%
			{4733.57771260997, "CUP_5Rnd_127x99_as50_M"}, // 0.91%
			{4818.80498533724, "Exile_Item_Magazine03"}, // 0.85%
			{4904.03225806452, "Exile_Item_Magazine01"}, // 0.85%
			{4989.25953079179, "Exile_Item_Magazine04"}, // 0.85%
			{5074.48680351906, "Exile_Item_Magazine02"}, // 0.85%
			{5147.80058651027, "srifle_GM6_F"}, // 0.73%
			{5221.11436950147, "srifle_GM6_ghex_F"}, // 0.73%
			{5293.84164222874, "CUP_M136_M"}, // 0.73%
			{5366.56891495601, "CUP_OG7_M"}, // 0.73%
			{5434.48950011798, "hlc_50rnd_762x51_M_G3"}, // 0.68%
			{5501.33441990407, "U_O_T_FullGhillie_tna_F"}, // 0.67%
			{5568.17933969017, "U_O_T_Sniper_F"}, // 0.67%
			{5635.02425947627, "U_B_T_FullGhillie_tna_F"}, // 0.67%
			{5701.86917926236, "U_B_T_Soldier_F"}, // 0.67%
			{5768.71409904846, "U_B_T_Sniper_F"}, // 0.67%
			{5833.1886316081, "srifle_GM6_F"}, // 0.64%
			{5895.88455637299, "hlc_20rnd_762x51_b_G3"}, // 0.63%
			{5956.49061697905, "TRYK_U_B_PCUHsW3nh"}, // 0.61%
			{6017.09667758511, "TRYK_U_B_Snow_CombatUniform"}, // 0.61%
			{6077.70273819117, "TRYK_U_B_Snowt"}, // 0.61%
			{6138.30879879723, "TRYK_U_B_PCUHsW2"}, // 0.61%
			{6198.91485940329, "TRYK_U_B_PCUHsW"}, // 0.61%
			{6259.52092000935, "TRYK_Winter_pack"}, // 0.61%
			{6320.12698061542, "TRYK_V_ArmorVest_Winter"}, // 0.61%
			{6380.73304122148, "TRYK_U_B_PCUHsW4"}, // 0.61%
			{6441.33910182754, "TRYK_U_B_PCUHsW5"}, // 0.61%
			{6501.9451624336, "TRYK_B_Coyotebackpack_WH"}, // 0.61%
			{6562.55122303966, "TAC_W_ghillie_01"}, // 0.61%
			{6623.15728364572, "TAC_W_ghillie_02"}, // 0.61%
			{6683.76334425178, "TRYK_H_Helmet_Winter_2"}, // 0.61%
			{6744.36940485784, "TRYK_U_B_PCUHsW6"}, // 0.61%
			{6804.9754654639, "TRYK_H_Helmet_Winter"}, // 0.61%
			{6863.62649185687, "srifle_DMR_05_tan_F"}, // 0.59%
			{6922.27751824983, "srifle_DMR_05_hex_F"}, // 0.59%
			{6980.92854464279, "srifle_DMR_05_blk_F"}, // 0.59%
			{7038.39980901061, "hlc_20rnd_762x51_T_G3"}, // 0.57%
			{7090.64641298135, "CUP_20Rnd_762x51_B_SCAR"}, // 0.52%
			{7142.89301695209, "CUP_20Rnd_762x51_DMR"}, // 0.52%
			{7195.13962092283, "CUP_20Rnd_762x51_FNFAL_M"}, // 0.52%
			{7247.38622489357, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.52%
			{7299.63282886431, "hlc_20Rnd_762x51_B_M14"}, // 0.52%
			{7351.87943283505, "hlc_20Rnd_762x51_B_fal"}, // 0.52%
			{7404.1260368058, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.52%
			{7456.37264077654, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.52%
			{7508.61924474728, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.52%
			{7559.93889284112, "srifle_DMR_04_Tan_F"}, // 0.51%
			{7611.25854093496, "srifle_DMR_04_F"}, // 0.51%
			{7659.61444035469, "srifle_DMR_02_F"}, // 0.48%
			{7707.97033977442, "CUP_srifle_M107_Base"}, // 0.48%
			{7756.32623919415, "srifle_DMR_02_camo_F"}, // 0.48%
			{7801.78078464869, "APERSTripMine_Wire_Mag"}, // 0.45%
			{7847.23533010324, "IEDUrbanSmall_Remote_Mag"}, // 0.45%
			{7892.68987555778, "IEDLandSmall_Remote_Mag"}, // 0.45%
			{7938.14442101233, "APERSMine_Range_Mag"}, // 0.45%
			{7983.59896646687, "APERSBoundingMine_Range_Mag"}, // 0.45%
			{8027.5872362616, "srifle_DMR_02_camo_F"}, // 0.44%
			{8071.57550605632, "srifle_DMR_02_F"}, // 0.44%
			{8115.56377585104, "srifle_DMR_02_sniper_F"}, // 0.44%
			{8157.36105902763, "CUP_20Rnd_762x51_B_M110"}, // 0.42%
			{8199.15834220423, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.42%
			{8240.95562538082, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.42%
			{8282.75290855741, "hlc_50rnd_762x51_M_FAL"}, // 0.42%
			{8324.550191734, "hlc_50Rnd_762x51_B_M14"}, // 0.42%
			{8366.3474749106, "CUP_20Rnd_762x51_L129_M"}, // 0.42%
			{8404.85547853488, "HLC_Rifle_g3ka4_GL"}, // 0.39%
			{8441.09830547538, "CUP_arifle_FNFAL_railed"}, // 0.36%
			{8475.0759557321, "CUP_srifle_M110"}, // 0.34%
			{8509.05360598882, "CUP_arifle_FNFAL"}, // 0.34%
			{8541.29087226864, "srifle_DMR_05_hex_F"}, // 0.32%
			{8573.52813854846, "srifle_DMR_05_blk_F"}, // 0.32%
			{8605.76540482828, "srifle_DMR_05_tan_F"}, // 0.32%
			{8635.21270171744, "hlc_rifle_g3ka4"}, // 0.29%
			{8664.65999860659, "hlc_rifle_m14sopmod"}, // 0.29%
			{8694.10729549575, "hlc_rifle_STG58F"}, // 0.29%
			{8723.55459238491, "hlc_rifle_PSG1A1_RIS"}, // 0.29%
			{8750.73671259028, "hlc_rifle_stgw57_RIS"}, // 0.27%
			{8777.91883279566, "hlc_rifle_m14dmr"}, // 0.27%
			{8805.10095300103, "hlc_rifle_M14"}, // 0.27%
			{8832.28307320641, "hlc_rifle_sig5104"}, // 0.27%
			{8859.46519341179, "hlc_rifle_SLRchopmod"}, // 0.27%
			{8885.25500643564, "CUP_glaunch_M32"}, // 0.26%
			{8910.17194995724, "hlc_rifle_psg1"}, // 0.25%
			{8935.08889347883, "hlc_rifle_stgw57_commando"}, // 0.25%
			{8960.00583700043, "hlc_rifle_FAL5061"}, // 0.25%
			{8984.92278052202, "hlc_rifle_amt"}, // 0.25%
			{9007.57454735984, "CUP_arifle_Mk17_STD_EGLM"}, // 0.23%
			{9030.22631419765, "hlc_rifle_falosw"}, // 0.23%
			{9052.87808103546, "CUP_srifle_M14"}, // 0.23%
			{9075.52984787327, "hlc_rifle_STGW57"}, // 0.23%
			{9097.52398277064, "srifle_DMR_06_olive_F"}, // 0.22%
			{9119.518117668, "srifle_DMR_06_camo_F"}, // 0.22%
			{9141.51225256536, "srifle_DMR_03_khaki_F"}, // 0.22%
			{9163.50638746272, "srifle_DMR_03_F"}, // 0.22%
			{9185.50052236008, "srifle_DMR_03_tan_F"}, // 0.22%
			{9207.49465725744, "srifle_DMR_03_woodland_F"}, // 0.22%
			{9229.13967890246, "V_PlateCarrier1_rgr_noflag_F"}, // 0.22%
			{9250.78470054748, "V_PlateCarrier2_rgr_noflag_F"}, // 0.22%
			{9272.4297221925, "V_PlateCarrier2_tna_F"}, // 0.22%
			{9294.07474383752, "V_PlateCarrier1_tna_F"}, // 0.22%
			{9315.71976548255, "V_TacChestrig_cbr_F"}, // 0.22%
			{9337.36478712757, "V_TacChestrig_oli_F"}, // 0.22%
			{9359.00980877259, "V_TacChestrig_grn_F"}, // 0.22%
			{9380.65483041761, "V_PlateCarrierSpec_rgr"}, // 0.22%
			{9402.29985206263, "V_PlateCarrierSpec_mtp"}, // 0.22%
			{9423.94487370765, "V_PlateCarrierSpec_blk"}, // 0.22%
			{9445.58989535267, "V_PlateCarrierIAGL_oli"}, // 0.22%
			{9467.23491699769, "V_PlateCarrierIAGL_dgtl"}, // 0.22%
			{9488.87993864271, "V_PlateCarrierGL_rgr"}, // 0.22%
			{9510.52496028774, "V_PlateCarrierGL_mtp"}, // 0.22%
			{9532.16998193276, "V_PlateCarrierGL_blk"}, // 0.22%
			{9553.81500357778, "V_HarnessO_ghex_F"}, // 0.22%
			{9575.4600252228, "V_HarnessOGL_ghex_F"}, // 0.22%
			{9597.10504686782, "V_BandollierB_ghex_F"}, // 0.22%
			{9618.75006851284, "V_TacVest_gen_F"}, // 0.22%
			{9640.39509015786, "V_PlateCarrierGL_tna_F"}, // 0.22%
			{9662.04011180288, "V_PlateCarrierSpec_tna_F"}, // 0.22%
			{9681.38247157078, "MMG_02_black_F"}, // 0.19%
			{9700.72483133867, "MMG_02_camo_F"}, // 0.19%
			{9720.06719110656, "MMG_02_sand_F"}, // 0.19%
			{9739.40955087445, "CUP_srifle_AS50"}, // 0.19%
			{9757.5309643447, "CUP_arifle_Mk20"}, // 0.18%
			{9775.65237781495, "hlc_rifle_SLR"}, // 0.18%
			{9793.77379128521, "hlc_rifle_c1A1"}, // 0.18%
			{9811.89520475546, "CUP_arifle_Mk17_STD_FG"}, // 0.18%
			{9825.26418871268, "U_B_FullGhillie_sard"}, // 0.13%
			{9838.6331726699, "U_I_FullGhillie_sard"}, // 0.13%
			{9852.00215662712, "U_I_FullGhillie_lsh"}, // 0.13%
			{9865.37114058434, "U_B_FullGhillie_ard"}, // 0.13%
			{9878.74012454156, "U_B_FullGhillie_lsh"}, // 0.13%
			{9892.10910849878, "U_I_FullGhillie_ard"}, // 0.13%
			{9905.478092456, "U_O_FullGhillie_ard"}, // 0.13%
			{9918.84707641322, "U_O_FullGhillie_lsh"}, // 0.13%
			{9932.21606037044, "U_O_FullGhillie_sard"}, // 0.13%
			{9945.11096688236, "MMG_01_hex_F"}, // 0.13%
			{9958.00587339429, "MMG_01_tan_F"}, // 0.13%
			{9969.3317568132, "CUP_srifle_L129A1_HG"}, // 0.11%
			{9980.65764023211, "CUP_srifle_L129A1"}, // 0.11%
			{9990.32882011605, "CUP_launch_RPG7V"}, // 0.10%
			{10000, "CUP_launch_M136"} // 0.10%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Weapon_AK107
	  optic_Hamr
	  TRYK_Winter_pack
	  CUP_muzzle_snds_M110
	  hlc_50rnd_762x51_M_FAL
	  ItemCompass
	  optic_Holosight_khk_F
	  30Rnd_556x45_Stanag_green
	  muzzle_snds_65_TI_hex_F
	  srifle_DMR_07_hex_F
	  U_B_CTRG_Soldier_urb_1_F
	  CUP_arifle_G36C_camo_holo_snds
	  TRYK_U_B_Snowt
	  CUP_10Rnd_9x39_SP5_VSS_M
	  V_PlateCarrierH_CTRG
	  hlc_5rnd_300WM_BTSP_AWM
	  hlc_20Rnd_762x51_B_fal
	  CUP_srifle_L129A1
	  TRYK_V_tacv1LC_OD
	  TAC_W_ghillie_02
	  TRYK_U_B_PCUHsW3nh
	  TRYK_U_B_MTP_BLK_R_CombatUniform
	  V_PlateCarrier1_rgr
	  B_Carryall_oli
	  U_B_GEN_Soldier_F
	  CUP_20Rnd_762x51_B_SCAR
	  30Rnd_556x45_Stanag_Tracer_Red
	  SatchelCharge_Remote_Mag
	  CUP_arifle_FNFAL
	  Rangefinder
	  CUP_srifle_Mk12SPR
	  CUP_arifle_AK74_GL
	  ItemCompass
	  TRYK_U_B_PCUHsW6
	  CUP_muzzle_snds_M14
	  hlc_rifle_auga2_b
	  20Rnd_762x51_Mag
	  TRYK_U_B_PCUHsW6
	  U_I_HeliPilotCoveralls
	  TRYK_U_B_PCUHsW2
	  hlc_20rnd_762x51_T_G3
	  TRYK_H_Helmet_Winter_2
	  muzzle_snds_65_TI_blk_F
	  TRYK_T_camo_Wood_BG
	  CUP_muzzle_snds_Mk12
	  CUP_20Rnd_762x51_FNFAL_M
	  SatchelCharge_Remote_Mag
	  hlc_rifle_m14sopmod
	  DemoCharge_Remote_Mag
	  100Rnd_580x42_Mag_Tracer_F
	  optic_Arco_ghex_F
	  U_B_CTRG_Soldier_urb_1_F
	  U_B_GEN_Soldier_F
	  TAC_W_ghillie_02
	  V_PlateCarrierIAGL_dgtl
	  ItemCompass
	  TRYK_B_Carryall_JSDF
	  29rnd_300BLK_STANAG
	  Exile_Weapon_AK74_GL
	  TRYK_H_Helmet_Winter_2
	  TRYK_B_Coyotebackpack_OD
	  CUP_20Rnd_762x51_B_M110
	  B_Carryall_ghex_F
	  CUP_optic_CompM2_Desert
	  CUP_10Rnd_127x99_M107
	  srifle_DMR_03_F
	  V_PlateCarrierSpec_blk
	  CUP_arifle_Sa58P
	  NVGoggles
	  CUP_arifle_XM8_Railed
	  TRYK_U_B_PCUHsW3nh
	  TRYK_B_Carryall_JSDF
	  TRYK_U_B_Snowt
	  CUP_optic_PechenegScope
	  CUP_arifle_L86A2
	  Rangefinder
	  V_PlateCarrierIA2_dgtl
	  CUP_20Rnd_762x51_L129_M
	  CUP_optic_RCO
	  TRYK_B_Carryall_blk
	  TRYK_B_Coyotebackpack
	  U_O_GhillieSuit
	  TRYK_U_B_PCUHsW5
	  CUP_optic_TrijiconRx01_desert
	  hlc_rifle_SLRchopmod
	  NVGoggles_tna_F
	  B_Carryall_ghex_F
	  hlc_rifle_auga2para_b
	  U_B_SpecopsUniform_sgg
	  muzzle_snds_B
	  TRYK_V_PlateCarrier_wood_L
	  hlc_rifle_auga3_GL
	  TRYK_B_Carryall_blk
	  CUP_muzzle_PBS4
	  hlc_rifle_ak47
	  U_I_OfficerUniform
	  Exile_Magazine_5Rnd_22LR
	  ItemCompass
	  V_PlateCarrierSpec_rgr
	  arifle_CTARS_blk_F
	*/
	class ChopperCrash
	{
		count = 686;
		half = 8113.6972769188;
		halfIndex = 343;
		sum = 9999.99999999994;
		items[] = 
		{
			{261.917234154007, "ItemCompass"}, // 2.62%
			{392.875851231011, "Rangefinder"}, // 1.31%
			{502.404876422687, "TRYK_B_Coyotebackpack_WH"}, // 1.10%
			{611.933901614363, "TRYK_Winter_pack"}, // 1.10%
			{702.295347397495, "DemoCharge_Remote_Mag"}, // 0.90%
			{777.596552216772, "CUP_optic_ACOG"}, // 0.75%
			{837.837516072194, "TRYK_U_B_PCUHsW5"}, // 0.60%
			{898.078479927616, "TRYK_H_Helmet_Winter_2"}, // 0.60%
			{958.319443783037, "TRYK_H_Helmet_Winter"}, // 0.60%
			{1018.56040763846, "TRYK_U_B_Snowt"}, // 0.60%
			{1078.80137149388, "TRYK_U_B_PCUHsW"}, // 0.60%
			{1139.0423353493, "TRYK_U_B_PCUHsW2"}, // 0.60%
			{1199.28329920472, "TRYK_U_B_PCUHsW3nh"}, // 0.60%
			{1259.52426306015, "TRYK_U_B_PCUHsW4"}, // 0.60%
			{1319.76522691557, "TRYK_U_B_Snow_CombatUniform"}, // 0.60%
			{1380.00619077099, "TRYK_U_B_PCUHsW6"}, // 0.60%
			{1440.24715462641, "SatchelCharge_Remote_Mag"}, // 0.60%
			{1500.48811848183, "TAC_W_ghillie_02"}, // 0.60%
			{1560.72908233726, "TRYK_Winter_pack"}, // 0.60%
			{1620.97004619268, "TRYK_B_Coyotebackpack_WH"}, // 0.60%
			{1681.2110100481, "TRYK_V_ArmorVest_Winter"}, // 0.60%
			{1741.45197390352, "TAC_W_ghillie_01"}, // 0.60%
			{1796.21648649936, "TRYK_B_Carryall_blk"}, // 0.55%
			{1850.9809990952, "TRYK_B_Carryall_wh"}, // 0.55%
			{1905.74551169103, "TRYK_B_Carryall_wood"}, // 0.55%
			{1960.51002428687, "TRYK_B_Coyotebackpack_BLK"}, // 0.55%
			{2015.27453688271, "TRYK_B_Carryall_JSDF"}, // 0.55%
			{2070.03904947855, "TRYK_B_Coyotebackpack"}, // 0.55%
			{2124.80356207439, "TRYK_B_Coyotebackpack_OD"}, // 0.55%
			{2175.00436528724, "optic_KHS_blk"}, // 0.50%
			{2225.20516850009, "optic_KHS_hex"}, // 0.50%
			{2275.40597171294, "optic_SOS"}, // 0.50%
			{2325.60677492579, "optic_LRPS"}, // 0.50%
			{2375.80757813864, "optic_DMS"}, // 0.50%
			{2426.00838135149, "muzzle_snds_B"}, // 0.50%
			{2476.20918456435, "CUP_optic_LeupoldM3LR"}, // 0.50%
			{2526.4099877772, "CUP_optic_SB_11_4x20_PM"}, // 0.50%
			{2576.61079099005, "CUP_muzzle_snds_M14"}, // 0.50%
			{2626.8115942029, "optic_AMS"}, // 0.50%
			{2671.81921087649, "hlc_50rnd_762x51_M_G3"}, // 0.45%
			{2713.72596834113, "O_NVGoggles_ghex_F"}, // 0.42%
			{2755.63272580577, "NVGoggles"}, // 0.42%
			{2797.53948327041, "NVGoggles_tna_F"}, // 0.42%
			{2839.44624073506, "O_NVGoggles_urb_F"}, // 0.42%
			{2881.3529981997, "O_NVGoggles_hex_F"}, // 0.42%
			{2922.89849051378, "hlc_20rnd_762x51_b_G3"}, // 0.42%
			{2961.30715874375, "B_Carryall_cbr"}, // 0.38%
			{2999.71582697371, "B_Carryall_ghex_F"}, // 0.38%
			{3037.79919492829, "hlc_20rnd_762x51_T_G3"}, // 0.38%
			{3074.18635430405, "B_Carryall_oli"}, // 0.36%
			{3110.57351367981, "B_Carryall_khk"}, // 0.36%
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
			{3609.29799694171, "V_PlateCarrierGL_rgr"}, // 0.30%
			{3639.41847886942, "V_PlateCarrierSpec_rgr"}, // 0.30%
			{3669.53896079713, "V_PlateCarrier3_rgr"}, // 0.30%
			{3699.65944272484, "V_PlateCarrier2_rgr"}, // 0.30%
			{3729.77992465255, "V_PlateCarrier1_rgr"}, // 0.30%
			{3759.90040658027, "V_PlateCarrier1_blk"}, // 0.30%
			{3790.02088850798, "U_I_GhillieSuit"}, // 0.30%
			{3820.14137043569, "U_O_GhillieSuit"}, // 0.30%
			{3850.2618523634, "U_B_GhillieSuit"}, // 0.30%
			{3880.38233429111, "V_PlateCarrierIA2_dgtl"}, // 0.30%
			{3910.50281621882, "V_PlateCarrierIAGL_dgtl"}, // 0.30%
			{3940.62329814653, "V_PlateCarrierIA1_dgtl"}, // 0.30%
			{3970.74378007424, "APERSTripMine_Wire_Mag"}, // 0.30%
			{4000.86426200195, "APERSBoundingMine_Range_Mag"}, // 0.30%
			{4030.98474392966, "APERSMine_Range_Mag"}, // 0.30%
			{4061.10522585737, "IEDLandSmall_Remote_Mag"}, // 0.30%
			{4091.22570778509, "IEDUrbanSmall_Remote_Mag"}, // 0.30%
			{4121.24612166652, "CUP_arifle_FNFAL"}, // 0.30%
			{4151.26653554796, "CUP_srifle_M110"}, // 0.30%
			{4178.96353042402, "CUP_20Rnd_762x51_L129_M"}, // 0.28%
			{4206.66052530008, "CUP_20Rnd_762x51_B_M110"}, // 0.28%
			{4234.35752017613, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.28%
			{4262.05451505219, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.28%
			{4289.75150992824, "hlc_50Rnd_762x51_B_M14"}, // 0.28%
			{4317.4485048043, "hlc_50rnd_762x51_M_FAL"}, // 0.28%
			{4343.46619683488, "hlc_rifle_g3ka4"}, // 0.26%
			{4369.48388886546, "hlc_rifle_m14sopmod"}, // 0.26%
			{4395.50158089604, "hlc_rifle_STG58F"}, // 0.26%
			{4421.51927292663, "hlc_rifle_PSG1A1_RIS"}, // 0.26%
			{4446.8838892868, "TRYK_V_ArmorVest_Winter"}, // 0.25%
			{4471.98429089323, "CUP_muzzle_snds_M110"}, // 0.25%
			{4496.00062199838, "hlc_rifle_M14"}, // 0.24%
			{4520.01695310353, "hlc_rifle_m14dmr"}, // 0.24%
			{4544.03328420868, "hlc_rifle_sig5104"}, // 0.24%
			{4568.04961531384, "hlc_rifle_stgw57_RIS"}, // 0.24%
			{4592.06594641899, "hlc_rifle_SLRchopmod"}, // 0.24%
			{4615.66781658622, "acc_flashlight"}, // 0.24%
			{4637.86185590138, "TRYK_V_PlateCarrier_wood"}, // 0.22%
			{4659.8768260811, "hlc_rifle_psg1"}, // 0.22%
			{4681.89179626082, "hlc_rifle_stgw57_commando"}, // 0.22%
			{4703.90676644055, "hlc_rifle_amt"}, // 0.22%
			{4725.92173662027, "hlc_rifle_FAL5061"}, // 0.22%
			{4746.23760419614, "hlc_5rnd_300WM_mk248_AWM"}, // 0.20%
			{4766.25121345044, "CUP_arifle_Mk17_STD_EGLM"}, // 0.20%
			{4786.26482270473, "CUP_srifle_M14"}, // 0.20%
			{4806.27843195902, "hlc_rifle_falosw"}, // 0.20%
			{4826.29204121331, "hlc_rifle_STGW57"}, // 0.20%
			{4846.1081477447, "U_B_CombatUniform_mcam_vest"}, // 0.20%
			{4865.92425427609, "U_B_CombatUniform_mcam_worn"}, // 0.20%
			{4885.74036080748, "U_B_GEN_Soldier_F"}, // 0.20%
			{4905.55646733887, "U_O_T_Soldier_F"}, // 0.20%
			{4925.37257387026, "U_B_CombatUniform_mcam_tshirt"}, // 0.20%
			{4945.18868040165, "U_B_T_Soldier_AR_F"}, // 0.20%
			{4965.00478693303, "U_B_T_Soldier_SL_F"}, // 0.20%
			{4984.82089346442, "U_B_CTRG_Soldier_F"}, // 0.20%
			{5004.63699999581, "U_B_CTRG_Soldier_2_F"}, // 0.20%
			{5024.4531065272, "U_B_CTRG_Soldier_3_F"}, // 0.20%
			{5044.26921305859, "U_B_CTRG_Soldier_urb_1_F"}, // 0.20%
			{5064.08531958998, "U_B_CTRG_Soldier_urb_2_F"}, // 0.20%
			{5083.90142612137, "U_B_CTRG_Soldier_urb_3_F"}, // 0.20%
			{5103.71753265276, "U_O_T_Officer_F"}, // 0.20%
			{5123.53363918415, "U_B_CombatUniform_mcam"}, // 0.20%
			{5143.34974571553, "U_B_GEN_Commander_F"}, // 0.20%
			{5163.16585224692, "U_B_CTRG_2"}, // 0.20%
			{5182.98195877831, "U_B_CTRG_1"}, // 0.20%
			{5202.7980653097, "U_B_CTRG_3"}, // 0.20%
			{5221.45677092864, "srifle_DMR_01_F"}, // 0.19%
			{5240.11547654757, "srifle_EBR_F"}, // 0.19%
			{5258.66474694294, "20Rnd_650x39_Cased_Mag_F"}, // 0.19%
			{5276.33071874805, "CUP_5Rnd_762x51_M24"}, // 0.18%
			{5293.99669055315, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.18%
			{5311.66266235826, "CUP_srifle_SVD_des"}, // 0.18%
			{5329.32863416337, "CUP_10Rnd_762x54_SVD_M"}, // 0.18%
			{5346.65457509524, "CUP_srifle_SVD"}, // 0.17%
			{5363.51305378612, "muzzle_snds_65_TI_ghex_F"}, // 0.17%
			{5380.37153247701, "muzzle_snds_M"}, // 0.17%
			{5397.23001116789, "muzzle_snds_H"}, // 0.17%
			{5414.08848985877, "CUP_optic_CompM2_Desert"}, // 0.17%
			{5430.94696854966, "muzzle_snds_H_khk_F"}, // 0.17%
			{5447.80544724054, "muzzle_snds_H_snd_F"}, // 0.17%
			{5464.66392593142, "muzzle_snds_58_blk_F"}, // 0.17%
			{5481.52240462231, "muzzle_snds_m_khk_F"}, // 0.17%
			{5498.38088331319, "muzzle_snds_H_MG_khk_F"}, // 0.17%
			{5515.23936200407, "muzzle_snds_m_snd_F"}, // 0.17%
			{5532.09784069496, "muzzle_snds_58_wdm_F"}, // 0.17%
			{5548.95631938584, "CUP_optic_CompM2_Black"}, // 0.17%
			{5565.81479807672, "optic_Arco"}, // 0.17%
			{5582.6732767676, "muzzle_snds_H_MG_blk_F"}, // 0.17%
			{5599.53175545849, "optic_Holosight_khk_F"}, // 0.17%
			{5616.39023414937, "optic_Arco_blk_F"}, // 0.17%
			{5633.24871284025, "optic_Holosight"}, // 0.17%
			{5650.10719153114, "muzzle_snds_65_TI_blk_F"}, // 0.17%
			{5666.96567022202, "optic_Hamr_khk_F"}, // 0.17%
			{5683.8241489129, "muzzle_snds_65_TI_hex_F"}, // 0.17%
			{5700.68262760379, "optic_Arco_ghex_F"}, // 0.17%
			{5717.54110629467, "optic_Hamr"}, // 0.17%
			{5734.39958498555, "optic_Holosight_blk_F"}, // 0.17%
			{5751.25806367644, "CUP_optic_PSO_1"}, // 0.17%
			{5768.11654236732, "optic_MRCO"}, // 0.17%
			{5784.9750210582, "CUP_optic_Kobra"}, // 0.17%
			{5801.83349974909, "CUP_muzzle_Bizon"}, // 0.17%
			{5818.69197843997, "CUP_muzzle_PB6P9"}, // 0.17%
			{5835.55045713085, "CUP_muzzle_PBS4"}, // 0.17%
			{5852.40893582174, "CUP_optic_PechenegScope"}, // 0.17%
			{5869.26741451262, "CUP_optic_HoloBlack"}, // 0.17%
			{5886.1258932035, "CUP_optic_HoloDesert"}, // 0.17%
			{5902.98437189439, "CUP_optic_SB_11_4x20_PM"}, // 0.17%
			{5919.84285058527, "CUP_optic_AN_PVS_4"}, // 0.17%
			{5936.70132927615, "acc_pointer_IR"}, // 0.17%
			{5953.55980796704, "CUP_optic_RCO"}, // 0.17%
			{5970.41828665792, "CUP_optic_CompM4"}, // 0.17%
			{5987.2767653488, "CUP_optic_TrijiconRx01_desert"}, // 0.17%
			{6004.13524403968, "CUP_optic_ACOG"}, // 0.17%
			{6020.99372273057, "optic_DMS"}, // 0.17%
			{6037.85220142145, "optic_DMS_ghex_F"}, // 0.17%
			{6054.71068011233, "CUP_optic_PSO_3"}, // 0.17%
			{6071.56915880322, "CUP_optic_SUSAT"}, // 0.17%
			{6088.4276374941, "optic_ERCO_blk_F"}, // 0.17%
			{6105.28611618498, "CUP_muzzle_snds_XM8"}, // 0.17%
			{6122.14459487587, "optic_ERCO_khk_F"}, // 0.17%
			{6139.00307356675, "optic_ERCO_snd_F"}, // 0.17%
			{6155.7857467816, "20Rnd_762x51_Mag"}, // 0.17%
			{6172.44530536994, "CUP_srifle_M24_wdl"}, // 0.17%
			{6189.10486395828, "CUP_srifle_M40A3"}, // 0.17%
			{6205.76442254661, "CUP_srifle_M24_des"}, // 0.17%
			{6221.77530995005, "hlc_rifle_SLR"}, // 0.16%
			{6237.78619735348, "CUP_arifle_Mk20"}, // 0.16%
			{6253.79708475691, "CUP_arifle_Mk17_STD_FG"}, // 0.16%
			{6269.80797216035, "hlc_rifle_c1A1"}, // 0.16%
			{6285.70734678495, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.16%
			{6301.60672140954, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.16%
			{6317.50609603414, "hlc_5rnd_300WM_AP_AWM"}, // 0.16%
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
			{7289.65396427821, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.13%
			{7302.90344313204, "CUP_10Rnd_762x51_CZ750"}, // 0.13%
			{7316.15292198587, "CUP_10Rnd_762x51_CZ750_Tracer"}, // 0.13%
			{7328.57570958296, "hlc_30Rnd_556x45_B_AUG"}, // 0.12%
			{7340.99849718005, "hlc_45Rnd_762x39_m_rpk"}, // 0.12%
			{7353.42128477714, "hlc_75Rnd_762x39_m_rpk"}, // 0.12%
			{7365.84407237423, "hlc_30rnd_556x45_EPR_G36"}, // 0.12%
			{7378.26685997132, "29rnd_300BLK_STANAG_T"}, // 0.12%
			{7390.6896475684, "hlc_100rnd_556x45_EPR_G36"}, // 0.12%
			{7402.81870069366, "B_Bergen_dgtl_F"}, // 0.12%
			{7414.94775381891, "B_Bergen_mcamo_F"}, // 0.12%
			{7427.07680694416, "B_Bergen_Base_F"}, // 0.12%
			{7439.20586006941, "B_Bergen_tna_F"}, // 0.12%
			{7451.33491319467, "B_Bergen_hex_F"}, // 0.12%
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
			{7586.09648102735, "hlc_30Rnd_762x39_b_ak"}, // 0.11%
			{7596.60807053258, "hlc_30Rnd_545x39_T_AK"}, // 0.11%
			{7607.11966003781, "20Rnd_556x45_UW_mag"}, // 0.11%
			{7617.63124954304, "hlc_30rnd_556x45_SOST"}, // 0.11%
			{7628.14283904827, "hlc_40Rnd_556x45_B_AUG"}, // 0.11%
			{7638.6544285535, "hlc_30Rnd_9x19_GD_MP5"}, // 0.11%
			{7648.66369639409, "CUP_arifle_Mk16_CQC_FG"}, // 0.10%
			{7658.67296423469, "CUP_arifle_AK107_GL"}, // 0.10%
			{7668.68223207528, "CUP_arifle_AKM"}, // 0.10%
			{7678.68903670243, "CUP_srifle_L129A1"}, // 0.10%
			{7688.69584132957, "CUP_srifle_L129A1_HG"}, // 0.10%
			{7698.69157648257, "CUP_srifle_CZ750"}, // 0.10%
			{7708.24756694187, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.10%
			{7717.80355740117, "hlc_30Rnd_545x39_EP_AK"}, // 0.10%
			{7727.35954786047, "hlc_45Rnd_545x39_t_rpk"}, // 0.10%
			{7736.91553831977, "hlc_30rnd_556x45_SPR"}, // 0.10%
			{7746.47152877907, "hlc_30rnd_556x45_EPR"}, // 0.10%
			{7755.92472618407, "CUP_arifle_AK47"}, // 0.09%
			{7765.37792358908, "CUP_arifle_Mk16_CQC"}, // 0.09%
			{7774.83112099408, "arifle_AKS_F"}, // 0.09%
			{7783.92409667037, "TRYK_U_B_MARPAT_Wood"}, // 0.09%
			{7793.01707234666, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.09%
			{7802.11004802295, "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt"}, // 0.09%
			{7811.20302369924, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.09%
			{7820.10015066866, "hlc_rifle_SAMR"}, // 0.09%
			{7828.99727763807, "CUP_srifle_Mk12SPR"}, // 0.09%
			{7837.89440460749, "CUP_arifle_AK74_GL"}, // 0.09%
			{7846.72739051004, "5Rnd_127x108_Mag"}, // 0.09%
			{7855.5603764126, "7Rnd_408_Mag"}, // 0.09%
			{7864.22334687853, "hlc_rifle_awcovert_BL"}, // 0.09%
			{7872.88631734447, "CUP_srifle_G22_des"}, // 0.09%
			{7881.48670875784, "Exile_Magazine_5Rnd_22LR"}, // 0.09%
			{7890.08710017121, "Exile_Magazine_10Rnd_762x54"}, // 0.09%
			{7898.68749158457, "Exile_Magazine_20Rnd_9x39"}, // 0.09%
			{7907.28788299794, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.09%
			{7915.88827441131, "30Rnd_762x39_Mag_F"}, // 0.09%
			{7924.48866582468, "30Rnd_762x39_Mag_Green_F"}, // 0.09%
			{7933.08905723805, "30Rnd_762x39_Mag_Tracer_F"}, // 0.09%
			{7941.68944865142, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.09%
			{7950.28984006479, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.09%
			{7958.89023147816, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.09%
			{7967.49062289153, "Exile_Magazine_10Rnd_9x39"}, // 0.09%
			{7976.0910143049, "150Rnd_556x45_Drum_Mag_F"}, // 0.09%
			{7984.69140571826, "30Rnd_545x39_Mag_F"}, // 0.09%
			{7993.29179713163, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.09%
			{8001.892188545, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.09%
			{8010.49257995837, "CUP_30Rnd_545x39_AK_M"}, // 0.09%
			{8019.09297137174, "CUP_30Rnd_556x45_G36"}, // 0.09%
			{8027.69336278511, "CUP_30Rnd_556x45_Stanag"}, // 0.09%
			{8036.29375419848, "20Rnd_762x51_Mag"}, // 0.09%
			{8044.89414561185, "30Rnd_762x39_AK47_M"}, // 0.09%
			{8053.49453702522, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.09%
			{8062.09492843858, "100Rnd_580x42_Mag_F"}, // 0.09%
			{8070.69531985195, "30Rnd_580x42_Mag_Tracer_F"}, // 0.09%
			{8079.29571126532, "30Rnd_580x42_Mag_F"}, // 0.09%
			{8087.89610267869, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.09%
			{8096.49649409206, "30Rnd_545x39_Mag_Tracer_F"}, // 0.09%
			{8105.09688550543, "30Rnd_545x39_Mag_Green_F"}, // 0.09%
			{8113.6972769188, "100Rnd_580x42_Mag_Tracer_F"}, // 0.09%
			{8122.29766833217, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.09%
			{8130.89805974554, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.09%
			{8139.4984511589, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.09%
			{8148.09884257227, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.09%
			{8156.69923398564, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.09%
			{8165.29962539901, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.09%
			{8173.90001681238, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.09%
			{8182.50040822575, "30Rnd_65x39_caseless_mag"}, // 0.09%
			{8191.10079963912, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.09%
			{8199.70119105249, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.09%
			{8208.30158246586, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.09%
			{8216.90197387922, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.09%
			{8225.50236529259, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.09%
			{8234.10275670596, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.09%
			{8242.5319960514, "optic_NVS"}, // 0.08%
			{8250.96123539685, "CUP_acc_ANPEQ_2_desert"}, // 0.08%
			{8259.39047474229, "CUP_acc_ANPEQ_2_grey"}, // 0.08%
			{8267.81971408773, "CUP_acc_ANPEQ_2_camo"}, // 0.08%
			{8276.16077062156, "hlc_rifle_auga1_t"}, // 0.08%
			{8284.50182715538, "hlc_rifle_auga1_B"}, // 0.08%
			{8292.84288368921, "hlc_rifle_auga1carb"}, // 0.08%
			{8301.18394022304, "hlc_rifle_auga1carb_t"}, // 0.08%
			{8309.52499675687, "hlc_rifle_augpara"}, // 0.08%
			{8317.86605329069, "hlc_rifle_aughbar"}, // 0.08%
			{8326.20710982452, "hlc_rifle_aughbar_b"}, // 0.08%
			{8334.54816635835, "hlc_rifle_aughbar_t"}, // 0.08%
			{8342.88922289217, "hlc_rifle_aug"}, // 0.08%
			{8351.230279426, "hlc_rifle_augpara_b"}, // 0.08%
			{8359.57133595983, "hlc_rifle_augpara_t"}, // 0.08%
			{8367.91239249366, "hlc_rifle_auga1carb_b"}, // 0.08%
			{8376.25344902748, "hlc_rifle_vendimus"}, // 0.08%
			{8384.59450556131, "arifle_SPAR_03_khk_F"}, // 0.08%
			{8392.93556209514, "hlc_rifle_rpk"}, // 0.08%
			{8401.27661862896, "arifle_AK12_GL_F"}, // 0.08%
			{8409.61767516279, "arifle_AKM_F"}, // 0.08%
			{8417.95873169662, "arifle_AKM_FL_F"}, // 0.08%
			{8426.29978823045, "arifle_SPAR_01_blk_F"}, // 0.08%
			{8434.64084476427, "hlc_rifle_auga2"}, // 0.08%
			{8442.9819012981, "hlc_rifle_ak12"}, // 0.08%
			{8451.32295783193, "arifle_SPAR_03_snd_F"}, // 0.08%
			{8459.66401436576, "CUP_arifle_L86A2"}, // 0.08%
			{8468.00507089958, "CUP_arifle_G36A"}, // 0.08%
			{8476.34612743341, "CUP_arifle_G36C"}, // 0.08%
			{8484.68718396724, "CUP_arifle_M16A2"}, // 0.08%
			{8493.02824050106, "CUP_arifle_XM8_Railed"}, // 0.08%
			{8501.36929703489, "arifle_AK12_F"}, // 0.08%
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
			{8659.84937117761, "hlc_rifle_augsr"}, // 0.08%
			{8668.19042771144, "CUP_arifle_AKS74U"}, // 0.08%
			{8676.53148424526, "hlc_rifle_auga2para"}, // 0.08%
			{8684.87254077909, "hlc_rifle_auga2para_t"}, // 0.08%
			{8693.21359731292, "hlc_rifle_auga2para_b"}, // 0.08%
			{8701.55465384674, "hlc_rifle_auga2carb_t"}, // 0.08%
			{8709.89571038057, "hlc_rifle_auga2carb_b"}, // 0.08%
			{8718.2367669144, "CUP_arifle_Mk16_SV"}, // 0.08%
			{8726.57782344823, "hlc_rifle_auga2lsw_t"}, // 0.08%
			{8734.91887998205, "hlc_rifle_auga2lsw_b"}, // 0.08%
			{8742.91546810445, "hlc_rifle_awcovert_FDE"}, // 0.08%
			{8750.84191071701, "U_O_OfficerUniform_ocamo"}, // 0.08%
			{8758.76835332957, "U_O_V_Soldier_Viper_F"}, // 0.08%
			{8766.69479594212, "U_O_SpecopsUniform_blk"}, // 0.08%
			{8774.62123855468, "U_O_SpecopsUniform_ocamo"}, // 0.08%
			{8782.54768116723, "U_O_CombatUniform_ocamo"}, // 0.08%
			{8790.47412377979, "U_I_Wetsuit"}, // 0.08%
			{8798.40056639234, "U_O_Wetsuit"}, // 0.08%
			{8806.3270090049, "U_B_Wetsuit"}, // 0.08%
			{8814.25345161745, "U_O_V_Soldier_Viper_hex_F"}, // 0.08%
			{8822.17989423001, "U_I_OfficerUniform"}, // 0.08%
			{8830.10633684257, "U_O_CombatUniform_oucamo"}, // 0.08%
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
			{9685.182716033, "arifle_MX_GL_khk_F"}, // 0.04%
			{9689.63127951771, "arifle_MXC_khk_F"}, // 0.04%
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
			{9803.58375682026, "150Rnd_93x64_Mag"}, // 0.03%
			{9806.59580501303, "130Rnd_338_Mag"}, // 0.03%
			{9809.6078532058, "5Rnd_127x108_APDS_Mag"}, // 0.03%
			{9812.61990139857, "5Rnd_127x108_Mag"}, // 0.03%
			{9815.63194959134, "10Rnd_338_Mag"}, // 0.03%
			{9818.64399778411, "CUP_5Rnd_127x99_as50_M"}, // 0.03%
			{9821.51261511056, "V_PlateCarrierGL_blk"}, // 0.03%
			{9824.38123243701, "V_PlateCarrierGL_mtp"}, // 0.03%
			{9827.24984976346, "V_PlateCarrierSpec_rgr"}, // 0.03%
			{9830.11846708991, "V_PlateCarrierIAGL_dgtl"}, // 0.03%
			{9832.98708441636, "V_PlateCarrierIAGL_oli"}, // 0.03%
			{9835.85570174281, "V_PlateCarrierSpec_blk"}, // 0.03%
			{9838.72431906926, "V_PlateCarrierSpec_mtp"}, // 0.03%
			{9841.5929363957, "V_PlateCarrierGL_rgr"}, // 0.03%
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

	  Exile_Weapon_Taurus
	  CUP_smg_bizon
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  Exile_Item_Magazine04
	  Exile_Item_Can_Empty
	  Exile_Item_ExtensionCord
	  hlc_rifle_L1A1SLR
	  CUP_smg_MP5A5
	  SmokeShellRed
	  hgun_Rook40_F
	  Exile_Item_Noodles
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_CamoTentKit
	  ItemRadio
	  CUP_hgun_Phantom
	  Chemlight_green
	  Exile_Item_CamoTentKit
	  Exile_Weapon_LeeEnfield
	  Exile_Item_PlasticBottleEmpty
	  H_Beret_blk_POLICE
	  hlc_smg_mp5k_PDW
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  hgun_Pistol_01_F
	  CUP_hgun_Phantom
	  Exile_Item_OilCanister
	  Exile_Weapon_LeeEnfield
	  ItemWatch
	  Exile_Item_Can_Empty
	  SmokeShellPurple
	  SmokeShellPurple
	  Exile_Item_Can_Empty
	  Exile_Weapon_LeeEnfield
	  hlc_10rnd_12g_slug_S12
	  Exile_Weapon_Makarov
	  hlc_30Rnd_9x19_B_MP5
	  Exile_Weapon_LeeEnfield
	  CUP_18Rnd_9x19_Phantom
	  Exile_Item_PlasticBottleEmpty
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_PlasticBottleEmpty
	  CUP_smg_MP5A5
	  H_Cap_blu
	  CUP_hgun_MicroUzi
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  Exile_Weapon_LeeEnfield
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  SmokeShellBlue
	  CUP_smg_bizon
	  hgun_Rook40_F
	  hgun_Pistol_01_F
	  Exile_Weapon_LeeEnfield
	  hlc_smg_mp5k
	  Exile_Item_Can_Empty
	  CUP_sgun_Saiga12K
	  SmokeShellRed
	  6Rnd_RedSignal_F
	  Exile_Item_PlasticBottleEmpty
	  CUP_sgun_Saiga12K
	  ItemCompass
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  hgun_P07_F
	  Exile_Item_MobilePhone
	  hlc_20Rnd_762x51_B_fal
	  Exile_Item_EMRE
	  hgun_Pistol_Signal_F
	  Exile_Magazine_10Rnd_303
	  Exile_Weapon_Makarov
	  Exile_Item_PlasticBottleEmpty
	  CUP_sgun_Saiga12K
	  Exile_Item_PlasticBottleEmpty
	  10Rnd_9x21_Mag
	  CUP_8Rnd_9x18_MakarovSD_M
	  Exile_Item_Can_Empty
	  hgun_Pistol_heavy_01_F
	  ItemCompass
	  Exile_Magazine_7Rnd_45ACP
	  hlc_rifle_M1903A1
	  CUP_sgun_Saiga12K
	  hgun_Pistol_heavy_01_F
	  Exile_Item_ToiletPaper
	  Exile_Magazine_7Rnd_45ACP
	  Exile_Item_Magazine01
	  Exile_Magazine_10Rnd_303
	  CUP_8Rnd_B_Saiga12_74Slug_M
	  Exile_Item_EnergyDrink
	  Chemlight_yellow
	  hlc_10rnd_12g_buck_S12
	  Exile_Item_FuelCanisterEmpty
	  hlc_optic_kobra
	  hlc_rifle_M1903A1
	  Exile_Magazine_6Rnd_45ACP
	  H_Hat_grey
	  Exile_Item_FuelCanisterFull
	  FlareRed_F
	  Exile_Item_Can_Empty
	  Exile_Item_SeedAstics
	  Exile_Item_MacasCheese
	*/
	class BarnLoot
	{
		count = 152;
		half = 7949.78301074252;
		halfIndex = 76;
		sum = 10000;
		items[] = 
		{
			{394.736842105263, "Exile_Item_Can_Empty"}, // 3.95%
			{789.473684210526, "Exile_Item_ToiletPaper"}, // 3.95%
			{1184.21052631579, "Exile_Item_PlasticBottleEmpty"}, // 3.95%
			{1478.79025923016, "Exile_Weapon_LeeEnfield"}, // 2.95%
			{1753.73134328358, "hlc_rifle_saiga12k"}, // 2.75%
			{1950.11783189317, "hlc_rifle_M1903A1"}, // 1.96%
			{2146.50432050275, "CUP_sgun_Saiga12K"}, // 1.96%
			{2342.89080911233, "Exile_Weapon_M1014"}, // 1.96%
			{2511.83167980759, "hlc_10rnd_12g_buck_S12"}, // 1.69%
			{2654.78164731896, "hlc_10rnd_12g_slug_S12"}, // 1.43%
			{2784.73616323839, "Exile_Magazine_10Rnd_303"}, // 1.30%
			{2914.69067915782, "Exile_Magazine_8Rnd_74Slug"}, // 1.30%
			{3044.64519507724, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 1.30%
			{3174.59971099667, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 1.30%
			{3304.5542269161, "Exile_Magazine_5Rnd_22LR"}, // 1.30%
			{3427.909490074, "CUP_hgun_Phantom"}, // 1.23%
			{3545.99316078925, "ItemMap"}, // 1.18%
			{3651.25631868398, "CUP_smg_MP5SD6"}, // 1.05%
			{3754.05237131556, "hlc_smg_mp5k_PDW"}, // 1.03%
			{3856.84842394714, "hgun_Pistol_heavy_01_F"}, // 1.03%
			{3959.64447657872, "hlc_smg_mp5k"}, // 1.03%
			{4060.8590514775, "Binocular"}, // 1.01%
			{4162.07362637629, "ItemWatch"}, // 1.01%
			{4263.28820127507, "ItemCompass"}, // 1.01%
			{4361.97241180139, "Exile_Item_Magazine04"}, // 0.99%
			{4460.65662232771, "Exile_Item_Magazine03"}, // 0.99%
			{4559.34083285402, "Exile_Item_Magazine02"}, // 0.99%
			{4658.02504338034, "Exile_Item_Magazine01"}, // 0.99%
			{4756.21828768513, "Exile_Weapon_CZ550"}, // 0.98%
			{4846.4438515949, "hlc_rifle_hk53"}, // 0.90%
			{4935.53376387561, "hgun_Pistol_01_F"}, // 0.89%
			{5024.62367615631, "hgun_P07_khk_F"}, // 0.89%
			{5113.71358843701, "hgun_Rook40_F"}, // 0.89%
			{5202.80350071771, "CUP_hgun_SA61"}, // 0.89%
			{5287.14897980003, "Exile_Item_Bandage"}, // 0.84%
			{5371.49445888235, "Exile_Item_Heatpack"}, // 0.84%
			{5453.73130098762, "hgun_P07_F"}, // 0.82%
			{5535.96814309288, "CUP_hgun_Duty_M3X"}, // 0.82%
			{5613.56598384862, "Exile_Item_ExtensionCord"}, // 0.78%
			{5688.75395377343, "CUP_smg_MP5A5"}, // 0.75%
			{5763.94192369824, "CUP_smg_bizon"}, // 0.75%
			{5838.07090813115, "Exile_Magazine_6Rnd_45ACP"}, // 0.74%
			{5912.19989256407, "10Rnd_9x21_Mag"}, // 0.74%
			{5986.32887699698, "Exile_Magazine_7Rnd_45ACP"}, // 0.74%
			{6060.45786142989, "9Rnd_45ACP_Mag"}, // 0.74%
			{6134.5868458628, "11Rnd_45ACP_Mag"}, // 0.74%
			{6208.71583029572, "hlc_30Rnd_9x19_B_MP5"}, // 0.74%
			{6282.84481472863, "Exile_Magazine_8Rnd_9x18"}, // 0.74%
			{6356.97379916154, "30Rnd_9x21_Mag"}, // 0.74%
			{6425.50450091593, "CUP_hgun_PB6P9_snds"}, // 0.69%
			{6492.98088418179, "Exile_Item_DuctTape"}, // 0.67%
			{6560.45726744764, "Exile_Item_FuelCanisterEmpty"}, // 0.67%
			{6627.9336507135, "Exile_Item_Carwheel"}, // 0.67%
			{6694.64973670312, "hlc_30Rnd_9x19_GD_MP5"}, // 0.67%
			{6761.36582269275, "CUP_18Rnd_9x19_Phantom"}, // 0.67%
			{6828.08190868237, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.67%
			{6894.79799467199, "CUP_30Rnd_9x19_UZI"}, // 0.67%
			{6955.52673961126, "Exile_Item_WaterCanisterEmpty"}, // 0.61%
			{7016.25548455053, "Exile_Item_CamoTentKit"}, // 0.61%
			{7075.55867209686, "6Rnd_45ACP_Cylinder"}, // 0.59%
			{7134.47461867974, "hlc_rifle_L1A1SLR"}, // 0.59%
			{7189.29918008325, "CUP_hgun_MicroUzi"}, // 0.55%
			{7241.28098645102, "hlc_20Rnd_762x51_B_fal"}, // 0.52%
			{7291.88827390041, "ItemRadio"}, // 0.51%
			{7342.4955613498, "FlareWhite_F"}, // 0.51%
			{7393.1028487992, "FlareYellow_F"}, // 0.51%
			{7443.71013624859, "SmokeShell"}, // 0.51%
			{7494.31742369798, "Chemlight_yellow"}, // 0.51%
			{7544.92471114738, "SmokeShellRed"}, // 0.51%
			{7595.53199859677, "Chemlight_red"}, // 0.51%
			{7646.13928604616, "SmokeShellGreen"}, // 0.51%
			{7696.74657349555, "Chemlight_green"}, // 0.51%
			{7747.35386094495, "Chemlight_blue"}, // 0.51%
			{7797.96114839434, "SmokeShellYellow"}, // 0.51%
			{7848.56843584373, "SmokeShellPurple"}, // 0.51%
			{7899.17572329313, "FlareRed_F"}, // 0.51%
			{7949.78301074252, "FlareGreen_F"}, // 0.51%
			{8000.39029819191, "SmokeShellOrange"}, // 0.51%
			{8050.99758564131, "Exile_Item_Rope"}, // 0.51%
			{8101.6048730907, "Exile_Item_Hammer"}, // 0.51%
			{8152.21216054009, "SmokeShellBlue"}, // 0.51%
			{8202.81944798948, "Exile_Item_OilCanister"}, // 0.51%
			{8253.42673543888, "Exile_Item_PlasticBottleDirtyWater"}, // 0.51%
			{8301.39822666695, "hgun_Pistol_heavy_02_F"}, // 0.48%
			{8349.36971789502, "hgun_ACPC2_F"}, // 0.48%
			{8394.48249984991, "CUP_smg_bizon_snds"}, // 0.45%
			{8439.59528180479, "CUP_smg_EVO"}, // 0.45%
			{8484.07267246454, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.44%
			{8525.19109351717, "Exile_Weapon_Makarov"}, // 0.41%
			{8565.67692347669, "Exile_Item_MountainDupe"}, // 0.40%
			{8606.1627534362, "Exile_Item_ChocolateMilk"}, // 0.40%
			{8645.14910821203, "hlc_optic_kobra"}, // 0.39%
			{8682.21360042849, "16Rnd_9x21_Mag"}, // 0.37%
			{8716.62655589407, "Exile_Item_EnergyDrink"}, // 0.34%
			{8750.89190677127, "Exile_Weapon_Colt1911"}, // 0.34%
			{8784.6300984042, "Exile_Melee_Axe"}, // 0.34%
			{8818.36829003712, "Exile_Item_ZipTie"}, // 0.34%
			{8852.10648167005, "Exile_Item_FuelCanisterFull"}, // 0.34%
			{8885.84467330298, "Exile_Item_Wrench"}, // 0.34%
			{8917.4236206714, "H_StrawHat_dark"}, // 0.32%
			{8949.00256803982, "H_Cap_tan"}, // 0.32%
			{8980.58151540825, "H_Hat_blue"}, // 0.32%
			{9012.16046277667, "H_Hat_brown"}, // 0.32%
			{9043.73941014509, "H_Hat_grey"}, // 0.32%
			{9075.31835751351, "H_Hat_tan"}, // 0.32%
			{9106.89730488193, "H_StrawHat"}, // 0.32%
			{9138.47625225036, "H_Cap_press"}, // 0.32%
			{9170.05519961878, "H_Hat_checker"}, // 0.32%
			{9201.6341469872, "H_Cap_red"}, // 0.32%
			{9231.99851945683, "Exile_Item_PlasticBottleCoffee"}, // 0.30%
			{9262.07370742676, "SMG_05_F"}, // 0.30%
			{9292.14889539669, "hgun_PDW2000_F"}, // 0.30%
			{9320.48897636835, "Exile_Item_Beer"}, // 0.28%
			{9347.9012570701, "Exile_Weapon_TaurusGold"}, // 0.27%
			{9374.21704654378, "H_Cap_oli"}, // 0.26%
			{9400.53283601747, "H_Bandanna_surfer"}, // 0.26%
			{9426.84862549116, "H_Cap_headphones"}, // 0.26%
			{9453.16441496484, "H_Cap_blk"}, // 0.26%
			{9479.48020443853, "H_Cap_blk_Raven"}, // 0.26%
			{9505.79599391221, "H_Beret_blk_POLICE"}, // 0.26%
			{9532.1117833859, "H_Cap_grn"}, // 0.26%
			{9558.42757285958, "H_Cap_blu"}, // 0.26%
			{9584.3727174111, "6Rnd_RedSignal_F"}, // 0.26%
			{9610.31786196262, "6Rnd_GreenSignal_F"}, // 0.26%
			{9634.60935993833, "Exile_Item_PlasticBottleFreshWater"}, // 0.24%
			{9655.16857046464, "Exile_Weapon_Taurus"}, // 0.21%
			{9675.72778099096, "hgun_Pistol_Signal_F"}, // 0.21%
			{9692.59687680742, "Exile_Item_CanOpener"}, // 0.17%
			{9709.46597262388, "Exile_Item_Matches"}, // 0.17%
			{9726.33506844035, "Exile_Item_MobilePhone"}, // 0.17%
			{9741.51725467517, "Exile_Item_Raisins"}, // 0.15%
			{9756.69944090998, "Exile_Item_Moobar"}, // 0.15%
			{9771.73703489494, "SMG_02_F"}, // 0.15%
			{9786.77462887991, "SMG_01_F"}, // 0.15%
			{9800.94466936574, "Exile_Item_PowerDrink"}, // 0.14%
			{9814.43994601891, "Exile_Item_InstantCoffee"}, // 0.13%
			{9827.93522267208, "Exile_Item_SeedAstics"}, // 0.13%
			{9841.43049932525, "Exile_Item_EMRE"}, // 0.13%
			{9854.92577597842, "Exile_Item_CockONut"}, // 0.13%
			{9866.73414304995, "Exile_Item_Dogfood"}, // 0.12%
			{9878.54251012147, "Exile_Item_DsNuts"}, // 0.12%
			{9890.35087719299, "Exile_Item_Cheathas"}, // 0.12%
			{9902.15924426452, "Exile_Item_BeefParts"}, // 0.12%
			{9913.96761133604, "Exile_Item_CatFood"}, // 0.12%
			{9925.77597840757, "Exile_Item_BBQSandwich"}, // 0.12%
			{9937.58434547909, "Exile_Item_MacasCheese"}, // 0.12%
			{9949.39271255061, "Exile_Item_SausageGravy"}, // 0.12%
			{9961.20107962214, "Exile_Item_Surstromming"}, // 0.12%
			{9973.00944669366, "Exile_Item_Noodles"}, // 0.12%
			{9984.81781376519, "Exile_Item_ChristmasTinner"}, // 0.12%
			{9994.93927125507, "Exile_Item_GloriousKnakworst"}, // 0.10%
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

