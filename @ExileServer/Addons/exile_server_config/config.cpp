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
	class CivillianLowerClass
	{
		count = 187;
		half = 7842.10958962955;
		halfIndex = 93;
		sum = 9999.99999999999;
		items[] = 
		{
			{398.936170212766, "Exile_Item_Can_Empty"}, // 3.99%
			{797.872340425532, "Exile_Item_ToiletPaper"}, // 3.99%
			{1196.8085106383, "Exile_Item_PlasticBottleEmpty"}, // 3.99%
			{1329.78723404255, "FlareRed_F"}, // 1.33%
			{1462.76595744681, "FlareGreen_F"}, // 1.33%
			{1595.74468085106, "Chemlight_yellow"}, // 1.33%
			{1728.72340425532, "Chemlight_red"}, // 1.33%
			{1861.70212765957, "Chemlight_green"}, // 1.33%
			{1994.68085106383, "Chemlight_blue"}, // 1.33%
			{2127.65957446809, "V_Rangemaster_belt"}, // 1.33%
			{2260.63829787234, "FlareWhite_F"}, // 1.33%
			{2393.6170212766, "FlareYellow_F"}, // 1.33%
			{2518.77346683354, "Exile_Item_Heatpack"}, // 1.25%
			{2632.54415241274, "Exile_Item_InstantCoffee"}, // 1.14%
			{2743.35975524962, "Exile_Item_PlasticBottleDirtyWater"}, // 1.11%
			{2852.87164511194, "ItemMap"}, // 1.10%
			{2959.25462383535, "Exile_Weapon_M1014"}, // 1.06%
			{3065.63760255875, "CUP_sgun_Saiga12K"}, // 1.06%
			{3165.37164511195, "Exile_Item_Magazine04"}, // 1.00%
			{3265.10568766514, "Exile_Item_Magazine03"}, // 1.00%
			{3364.83973021833, "Exile_Item_Magazine02"}, // 1.00%
			{3464.57377277152, "Exile_Item_Magazine01"}, // 1.00%
			{3558.44110693923, "ItemWatch"}, // 0.94%
			{3652.30844110694, "ItemRadio"}, // 0.94%
			{3745.39354748992, "Exile_Item_Moobar"}, // 0.93%
			{3838.4786538729, "Exile_Item_Raisins"}, // 0.93%
			{3927.1311361424, "Exile_Item_ChocolateMilk"}, // 0.89%
			{4015.7836184119, "Exile_Item_MountainDupe"}, // 0.89%
			{4098.52593519677, "Exile_Item_CockONut"}, // 0.83%
			{4181.26825198164, "Exile_Item_SeedAstics"}, // 0.83%
			{4256.62286191072, "Exile_Item_EnergyDrink"}, // 0.75%
			{4329.02238909748, "Exile_Item_Surstromming"}, // 0.72%
			{4401.42191628424, "Exile_Item_Noodles"}, // 0.72%
			{4473.82144347101, "Exile_Item_SausageGravy"}, // 0.72%
			{4546.22097065777, "Exile_Item_ChristmasTinner"}, // 0.72%
			{4618.62049784453, "Exile_Item_MacasCheese"}, // 0.72%
			{4691.02002503129, "Exile_Item_CatFood"}, // 0.72%
			{4763.41955221805, "Exile_Item_Dogfood"}, // 0.72%
			{4835.81907940481, "Exile_Item_BBQSandwich"}, // 0.72%
			{4908.21860659158, "Exile_Item_BeefParts"}, // 0.72%
			{4980.61813377834, "Exile_Item_Cheathas"}, // 0.72%
			{5053.0176609651, "Exile_Item_DsNuts"}, // 0.72%
			{5119.50702266723, "V_TacVest_blk_POLICE"}, // 0.66%
			{5185.99638436935, "V_Press_F"}, // 0.66%
			{5249.8261716034, "H_Cap_press"}, // 0.64%
			{5313.65595883744, "H_Cap_tan"}, // 0.64%
			{5377.48574607148, "H_Hat_blue"}, // 0.64%
			{5441.31553330553, "H_Hat_brown"}, // 0.64%
			{5505.14532053957, "H_Hat_grey"}, // 0.64%
			{5568.97510777361, "H_Hat_tan"}, // 0.64%
			{5632.80489500765, "H_Cap_red"}, // 0.64%
			{5696.6346822417, "H_StrawHat"}, // 0.64%
			{5760.46446947574, "H_Hat_checker"}, // 0.64%
			{5824.29425670978, "H_StrawHat_dark"}, // 0.64%
			{5886.87247948825, "Binocular"}, // 0.63%
			{5948.92921707691, "Exile_Item_GloriousKnakworst"}, // 0.62%
			{6010.98595466556, "Exile_Item_Beer"}, // 0.62%
			{6066.97699609893, "U_C_HunterBody_grn"}, // 0.56%
			{6122.9680375323, "U_C_Journalist"}, // 0.56%
			{6178.95907896567, "U_C_Poor_1"}, // 0.56%
			{6234.95012039904, "U_C_Poor_2"}, // 0.56%
			{6290.94116183241, "U_C_Scientist"}, // 0.56%
			{6346.93220326578, "U_C_Poor_shorts_1"}, // 0.56%
			{6402.92324469915, "U_Rangemaster"}, // 0.56%
			{6457.60608422988, "B_OutdoorPack_blk"}, // 0.55%
			{6510.79757359158, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.53%
			{6563.98906295328, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.53%
			{6617.18055231498, "H_Bandanna_surfer"}, // 0.53%
			{6670.37204167669, "Exile_Magazine_8Rnd_74Slug"}, // 0.53%
			{6723.56353103839, "H_Beret_blk_POLICE"}, // 0.53%
			{6776.75502040009, "Exile_Item_PlasticBottleFreshWater"}, // 0.53%
			{6829.94650976179, "H_Cap_blk"}, // 0.53%
			{6883.13799912349, "H_Cap_blk_Raven"}, // 0.53%
			{6936.3294884852, "H_Cap_blu"}, // 0.53%
			{6989.5209778469, "H_Cap_grn"}, // 0.53%
			{7042.7124672086, "H_Cap_headphones"}, // 0.53%
			{7095.9039565703, "H_Cap_oli"}, // 0.53%
			{7149.09544593201, "Exile_Item_ZipTie"}, // 0.53%
			{7200.80939392255, "Exile_Item_Matches"}, // 0.52%
			{7252.52334191309, "Exile_Item_CanOpener"}, // 0.52%
			{7301.73789749074, "B_OutdoorPack_tan"}, // 0.49%
			{7350.95245306839, "B_OutdoorPack_blu"}, // 0.49%
			{7394.69872469297, "B_HuntingBackpack"}, // 0.44%
			{7438.24731247448, "U_C_Poloshirt_burgundy"}, // 0.44%
			{7481.79590025599, "U_C_Poloshirt_stripped"}, // 0.44%
			{7525.3444880375, "U_C_Poloshirt_blue"}, // 0.44%
			{7568.89307581901, "U_C_Poloshirt_salmon"}, // 0.44%
			{7612.44166360052, "U_C_Poloshirt_tricolour"}, // 0.44%
			{7650.71965127203, "B_AssaultPack_mcamo"}, // 0.38%
			{7688.99763894353, "B_AssaultPack_cbr"}, // 0.38%
			{7727.27562661504, "B_AssaultPack_blk"}, // 0.38%
			{7765.55361428654, "B_AssaultPack_sgg"}, // 0.38%
			{7803.83160195805, "B_AssaultPack_rgr"}, // 0.38%
			{7842.10958962955, "B_AssaultPack_dgtl"}, // 0.38%
			{7880.38757730106, "B_AssaultPack_khk"}, // 0.38%
			{7918.66556497256, "B_AssaultPack_tna_F"}, // 0.38%
			{7956.05539849878, "hgun_P07_F"}, // 0.37%
			{7993.0094858448, "SMG_05_F"}, // 0.37%
			{8029.96357319083, "hgun_PDW2000_F"}, // 0.37%
			{8065.57293845389, "hgun_Rook40_F"}, // 0.36%
			{8101.18230371696, "hgun_ACPC2_F"}, // 0.36%
			{8133.45579164428, "muzzle_snds_acp"}, // 0.32%
			{8165.72927957161, "muzzle_snds_L"}, // 0.32%
			{8197.77770830837, "CUP_hgun_Phantom"}, // 0.32%
			{8229.0668196976, "ItemGPS"}, // 0.31%
			{8260.17295382725, "U_I_C_Soldier_Bandit_4_F"}, // 0.31%
			{8291.2790879569, "U_I_C_Soldier_Bandit_3_F"}, // 0.31%
			{8322.38522208655, "U_I_C_Soldier_Bandit_2_F"}, // 0.31%
			{8353.4913562162, "U_I_C_Soldier_Bandit_1_F"}, // 0.31%
			{8384.59749034585, "U_C_man_sport_2_F"}, // 0.31%
			{8415.7036244755, "U_C_man_sport_3_F"}, // 0.31%
			{8446.80975860515, "U_C_Man_casual_1_F"}, // 0.31%
			{8477.9158927348, "U_C_Man_casual_6_F"}, // 0.31%
			{8509.02202686445, "U_C_Man_casual_5_F"}, // 0.31%
			{8540.1281609941, "U_C_Man_casual_2_F"}, // 0.31%
			{8571.23429512375, "U_C_Man_casual_3_F"}, // 0.31%
			{8602.3404292534, "U_C_Man_casual_4_F"}, // 0.31%
			{8633.44656338305, "U_I_C_Soldier_Bandit_5_F"}, // 0.31%
			{8664.5526975127, "U_C_man_sport_1_F"}, // 0.31%
			{8695.58106630703, "Exile_Item_CookingPot"}, // 0.31%
			{8726.60943510135, "Exile_Item_EMRE"}, // 0.31%
			{8757.63780389568, "Exile_Item_PowerDrink"}, // 0.31%
			{8785.63332461237, "SMG_01_F"}, // 0.28%
			{8813.62884532905, "CUP_smg_MP5A5"}, // 0.28%
			{8840.97026509441, "B_Kitbag_cbr"}, // 0.27%
			{8868.31168485977, "B_Kitbag_sgg"}, // 0.27%
			{8895.65310462513, "B_Kitbag_mcamo"}, // 0.27%
			{8919.29376656367, "optic_Holosight_smg"}, // 0.24%
			{8942.9344285022, "optic_Aco"}, // 0.24%
			{8966.57509044074, "optic_ACO_grn"}, // 0.24%
			{8990.21575237927, "optic_Aco_smg"}, // 0.24%
			{9013.8564143178, "optic_ACO_grn_smg"}, // 0.24%
			{9037.49707625634, "optic_Holosight_smg_blk_F"}, // 0.24%
			{9060.64316367733, "Exile_Weapon_Taurus"}, // 0.23%
			{9083.78925109832, "CUP_hgun_SA61"}, // 0.23%
			{9106.93533851931, "hgun_P07_khk_F"}, // 0.23%
			{9130.08142594031, "hgun_Pistol_01_F"}, // 0.23%
			{9153.2275133613, "Exile_Weapon_TaurusGold"}, // 0.23%
			{9176.37360078229, "Exile_Weapon_Makarov"}, // 0.23%
			{9199.51968820328, "hgun_Pistol_Signal_F"}, // 0.23%
			{9222.66577562427, "hgun_Pistol_heavy_02_F"}, // 0.23%
			{9245.81186304526, "hgun_Pistol_heavy_01_F"}, // 0.23%
			{9268.95795046625, "Exile_Weapon_Colt1911"}, // 0.23%
			{9291.3543670396, "SMG_02_F"}, // 0.22%
			{9313.75078361295, "CUP_smg_bizon"}, // 0.22%
			{9335.91390418033, "Exile_Item_PlasticBottleCoffee"}, // 0.22%
			{9357.53646083143, "9Rnd_45ACP_Mag"}, // 0.22%
			{9379.15901748253, "Exile_Magazine_7Rnd_45ACP"}, // 0.22%
			{9400.78157413362, "Exile_Magazine_6Rnd_45ACP"}, // 0.22%
			{9422.40413078472, "10Rnd_9x21_Mag"}, // 0.22%
			{9444.02668743582, "11Rnd_45ACP_Mag"}, // 0.22%
			{9465.64924408692, "Exile_Magazine_8Rnd_9x18"}, // 0.22%
			{9487.27180073802, "30Rnd_9x21_Mag"}, // 0.22%
			{9508.63741989586, "CUP_hgun_Duty_M3X"}, // 0.21%
			{9528.09772088185, "CUP_18Rnd_9x19_Phantom"}, // 0.19%
			{9547.55802186784, "CUP_30Rnd_9x19_UZI"}, // 0.19%
			{9567.01832285382, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.19%
			{9584.948038369, "CUP_acc_Glock17_Flashlight"}, // 0.18%
			{9602.87775388418, "CUP_acc_CZ_M3X"}, // 0.18%
			{9620.80746939936, "CUP_muzzle_snds_MicroUzi"}, // 0.18%
			{9638.6121520309, "CUP_hgun_PB6P9_snds"}, // 0.18%
			{9656.3426484848, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.18%
			{9674.07314493869, "30Rnd_45ACP_Mag_SMG_01"}, // 0.18%
			{9691.80364139259, "CUP_optic_ACOG"}, // 0.18%
			{9709.53413784649, "CUP_30Rnd_9x19_EVO"}, // 0.18%
			{9727.26463430039, "CUP_30Rnd_9x19_MP5"}, // 0.18%
			{9744.99513075429, "CUP_64Rnd_9x19_Bizon_M"}, // 0.18%
			{9762.72562720819, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.18%
			{9780.45612366209, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.18%
			{9798.18662011599, "30Rnd_9x21_Mag_SMG_02"}, // 0.18%
			{9815.91711656989, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.18%
			{9833.21516189077, "6Rnd_45ACP_Cylinder"}, // 0.17%
			{9849.35190585444, "CUP_muzzle_snds_M9"}, // 0.16%
			{9865.02939745578, "CUP_smg_MP5SD6"}, // 0.16%
			{9880.6739531504, "Exile_Item_MobilePhone"}, // 0.16%
			{9894.91769925562, "CUP_hgun_MicroUzi"}, // 0.14%
			{9907.89123324628, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.13%
			{9920.44203410691, "optic_MRD"}, // 0.13%
			{9932.99283496753, "optic_Yorris"}, // 0.13%
			{9944.19104325421, "CUP_smg_EVO"}, // 0.11%
			{9955.38925154088, "CUP_smg_bizon_snds"}, // 0.11%
			{9966.20052986643, "16Rnd_9x21_Mag"}, // 0.11%
			{9973.76842469432, "6Rnd_GreenSignal_F"}, // 0.08%
			{9981.3363195222, "6Rnd_RedSignal_F"}, // 0.08%
			{9987.55754634813, "U_OrestesBody"}, // 0.06%
			{9993.77877317406, "U_NikosAgedBody"}, // 0.06%
			{9999.99999999999, "U_NikosBody"} // 0.06%
		};
	};

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
	class CivillianUpperClass
	{
		count = 401;
		half = 9688.97172193075;
		halfIndex = 200;
		sum = 9999.99999999997;
		items[] = 
		{
			{384.615384615385, "Exile_Item_Can_Empty"}, // 3.85%
			{769.230769230769, "Exile_Item_ToiletPaper"}, // 3.85%
			{1153.84615384615, "Exile_Item_PlasticBottleEmpty"}, // 3.85%
			{1282.05128205128, "FlareYellow_F"}, // 1.28%
			{1410.25641025641, "V_Rangemaster_belt"}, // 1.28%
			{1538.46153846154, "Chemlight_blue"}, // 1.28%
			{1666.66666666667, "Chemlight_green"}, // 1.28%
			{1794.87179487179, "FlareWhite_F"}, // 1.28%
			{1923.07692307692, "FlareRed_F"}, // 1.28%
			{2051.28205128205, "FlareGreen_F"}, // 1.28%
			{2179.48717948718, "Chemlight_yellow"}, // 1.28%
			{2307.69230769231, "Chemlight_red"}, // 1.28%
			{2428.35595776772, "Exile_Item_Heatpack"}, // 1.21%
			{2538.04256745433, "Exile_Item_InstantCoffee"}, // 1.10%
			{2644.88017429194, "Exile_Item_PlasticBottleDirtyWater"}, // 1.07%
			{2750.46086810793, "ItemMap"}, // 1.06%
			{2853.02497067203, "CUP_sgun_Saiga12K"}, // 1.03%
			{2955.58907323613, "Exile_Weapon_M1014"}, // 1.03%
			{3051.74291938998, "Exile_Item_Magazine02"}, // 0.96%
			{3147.89676554383, "Exile_Item_Magazine03"}, // 0.96%
			{3244.05061169767, "Exile_Item_Magazine01"}, // 0.96%
			{3340.20445785152, "Exile_Item_Magazine04"}, // 0.96%
			{3430.70219540808, "ItemRadio"}, // 0.90%
			{3521.19993296464, "ItemWatch"}, // 0.90%
			{3610.94352270823, "Exile_Item_Raisins"}, // 0.90%
			{3700.68711245182, "Exile_Item_Moobar"}, // 0.90%
			{3786.1571979219, "Exile_Item_MountainDupe"}, // 0.85%
			{3871.62728339199, "Exile_Item_ChocolateMilk"}, // 0.85%
			{3951.39936316407, "Exile_Item_CockONut"}, // 0.80%
			{4031.17144293615, "Exile_Item_SeedAstics"}, // 0.80%
			{4103.82101558572, "Exile_Item_EnergyDrink"}, // 0.73%
			{4173.62158538629, "Exile_Item_Surstromming"}, // 0.70%
			{4243.42215518686, "Exile_Item_SausageGravy"}, // 0.70%
			{4313.22272498743, "Exile_Item_Noodles"}, // 0.70%
			{4383.023294788, "Exile_Item_DsNuts"}, // 0.70%
			{4452.82386458857, "Exile_Item_Cheathas"}, // 0.70%
			{4522.62443438914, "Exile_Item_BeefParts"}, // 0.70%
			{4592.42500418971, "Exile_Item_MacasCheese"}, // 0.70%
			{4662.22557399028, "Exile_Item_Dogfood"}, // 0.70%
			{4732.02614379085, "Exile_Item_CatFood"}, // 0.70%
			{4801.82671359142, "Exile_Item_ChristmasTinner"}, // 0.70%
			{4871.62728339199, "Exile_Item_BBQSandwich"}, // 0.70%
			{4935.72984749456, "V_TacVest_blk_POLICE"}, // 0.64%
			{4999.83241159712, "V_Press_F"}, // 0.64%
			{5061.37087313558, "H_Cap_press"}, // 0.62%
			{5122.90933467404, "H_Cap_red"}, // 0.62%
			{5184.44779621251, "H_Cap_tan"}, // 0.62%
			{5245.98625775097, "H_Hat_tan"}, // 0.62%
			{5307.52471928943, "H_Hat_brown"}, // 0.62%
			{5369.06318082789, "H_Hat_checker"}, // 0.62%
			{5430.60164236635, "H_StrawHat"}, // 0.62%
			{5492.14010390482, "H_StrawHat_dark"}, // 0.62%
			{5553.67856544328, "H_Hat_blue"}, // 0.62%
			{5615.21702698174, "H_Hat_grey"}, // 0.62%
			{5675.54885201945, "Binocular"}, // 0.60%
			{5735.37791184851, "Exile_Item_GloriousKnakworst"}, // 0.60%
			{5795.20697167757, "Exile_Item_Beer"}, // 0.60%
			{5849.18807829025, "U_C_Journalist"}, // 0.54%
			{5903.16918490294, "U_Rangemaster"}, // 0.54%
			{5957.15029151562, "U_C_Scientist"}, // 0.54%
			{6011.13139812831, "U_C_Poor_1"}, // 0.54%
			{6065.112504741, "U_C_HunterBody_grn"}, // 0.54%
			{6119.09361135368, "U_C_Poor_shorts_1"}, // 0.54%
			{6173.07471796637, "U_C_Poor_2"}, // 0.54%
			{6225.79458377034, "B_OutdoorPack_blk"}, // 0.53%
			{6277.0766350524, "Exile_Magazine_8Rnd_74Slug"}, // 0.51%
			{6328.35868633445, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.51%
			{6379.6407376165, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.51%
			{6430.92278889855, "H_Cap_oli"}, // 0.51%
			{6482.2048401806, "H_Cap_blk"}, // 0.51%
			{6533.48689146266, "H_Cap_headphones"}, // 0.51%
			{6584.76894274471, "H_Cap_grn"}, // 0.51%
			{6636.05099402676, "H_Bandanna_surfer"}, // 0.51%
			{6687.33304530881, "H_Beret_blk_POLICE"}, // 0.51%
			{6738.61509659086, "H_Cap_blk_Raven"}, // 0.51%
			{6789.89714787291, "H_Cap_blu"}, // 0.51%
			{6841.17919915497, "Exile_Item_ZipTie"}, // 0.51%
			{6892.46125043702, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{6942.31880029457, "Exile_Item_CanOpener"}, // 0.50%
			{6992.17635015212, "Exile_Item_Matches"}, // 0.50%
			{7039.6242293757, "B_OutdoorPack_tan"}, // 0.47%
			{7087.07210859928, "B_OutdoorPack_blu"}, // 0.47%
			{7129.24800124246, "B_HuntingBackpack"}, // 0.42%
			{7171.23330638566, "U_C_Poloshirt_stripped"}, // 0.42%
			{7213.21861152886, "U_C_Poloshirt_salmon"}, // 0.42%
			{7255.20391667206, "U_C_Poloshirt_tricolour"}, // 0.42%
			{7297.18922181526, "U_C_Poloshirt_blue"}, // 0.42%
			{7339.17452695846, "U_C_Poloshirt_burgundy"}, // 0.42%
			{7376.07843302125, "B_AssaultPack_tna_F"}, // 0.37%
			{7412.98233908403, "B_AssaultPack_mcamo"}, // 0.37%
			{7449.88624514681, "B_AssaultPack_cbr"}, // 0.37%
			{7486.7901512096, "B_AssaultPack_sgg"}, // 0.37%
			{7523.69405727238, "B_AssaultPack_blk"}, // 0.37%
			{7560.59796333517, "B_AssaultPack_rgr"}, // 0.37%
			{7597.50186939795, "B_AssaultPack_dgtl"}, // 0.37%
			{7634.40577546074, "B_AssaultPack_khk"}, // 0.37%
			{7670.45340983473, "hgun_P07_F"}, // 0.36%
			{7706.0809401991, "hgun_PDW2000_F"}, // 0.36%
			{7741.70847056348, "SMG_05_F"}, // 0.36%
			{7776.03955091966, "hgun_ACPC2_F"}, // 0.34%
			{7810.37063127585, "hgun_Rook40_F"}, // 0.34%
			{7841.48558373912, "muzzle_snds_L"}, // 0.31%
			{7872.60053620238, "muzzle_snds_acp"}, // 0.31%
			{7903.49850852295, "CUP_hgun_Phantom"}, // 0.31%
			{7933.6644210418, "ItemGPS"}, // 0.30%
			{7963.65392471552, "U_C_Man_casual_6_F"}, // 0.30%
			{7993.64342838923, "U_C_man_sport_2_F"}, // 0.30%
			{8023.63293206295, "U_C_Man_casual_1_F"}, // 0.30%
			{8053.62243573666, "U_C_Man_casual_2_F"}, // 0.30%
			{8083.61193941037, "U_C_Man_casual_3_F"}, // 0.30%
			{8113.60144308409, "U_C_Man_casual_4_F"}, // 0.30%
			{8143.5909467578, "U_C_man_sport_1_F"}, // 0.30%
			{8173.58045043152, "U_I_C_Soldier_Bandit_5_F"}, // 0.30%
			{8203.56995410523, "U_C_man_sport_3_F"}, // 0.30%
			{8233.55945777895, "U_C_Man_casual_5_F"}, // 0.30%
			{8263.54896145266, "U_I_C_Soldier_Bandit_1_F"}, // 0.30%
			{8293.53846512637, "U_I_C_Soldier_Bandit_2_F"}, // 0.30%
			{8323.52796880009, "U_I_C_Soldier_Bandit_4_F"}, // 0.30%
			{8353.5174724738, "U_I_C_Soldier_Bandit_3_F"}, // 0.30%
			{8383.43200238833, "Exile_Item_PowerDrink"}, // 0.30%
			{8413.34653230286, "Exile_Item_EMRE"}, // 0.30%
			{8443.26106221739, "Exile_Item_CookingPot"}, // 0.30%
			{8470.25161552373, "SMG_01_F"}, // 0.27%
			{8497.24216883008, "CUP_smg_MP5A5"}, // 0.27%
			{8523.60210173207, "B_Kitbag_mcamo"}, // 0.26%
			{8549.96203463405, "B_Kitbag_sgg"}, // 0.26%
			{8576.32196753604, "B_Kitbag_cbr"}, // 0.26%
			{8599.11399032807, "optic_Holosight_smg_blk_F"}, // 0.23%
			{8621.90601312009, "optic_Aco"}, // 0.23%
			{8644.69803591211, "optic_ACO_grn"}, // 0.23%
			{8667.49005870413, "optic_Aco_smg"}, // 0.23%
			{8690.28208149615, "optic_ACO_grn_smg"}, // 0.23%
			{8713.07410428818, "optic_Holosight_smg"}, // 0.23%
			{8735.3893065197, "hgun_Pistol_heavy_02_F"}, // 0.22%
			{8757.70450875122, "hgun_Pistol_heavy_01_F"}, // 0.22%
			{8780.01971098274, "hgun_Pistol_Signal_F"}, // 0.22%
			{8802.33491321426, "CUP_hgun_SA61"}, // 0.22%
			{8824.65011544578, "Exile_Weapon_Colt1911"}, // 0.22%
			{8846.9653176773, "hgun_P07_khk_F"}, // 0.22%
			{8869.28051990882, "hgun_Pistol_01_F"}, // 0.22%
			{8891.59572214034, "Exile_Weapon_TaurusGold"}, // 0.22%
			{8913.91092437186, "Exile_Weapon_Taurus"}, // 0.22%
			{8936.22612660338, "Exile_Weapon_Makarov"}, // 0.22%
			{8957.81856924846, "SMG_02_F"}, // 0.22%
			{8979.41101189353, "CUP_smg_bizon"}, // 0.22%
			{9000.77853326105, "Exile_Item_PlasticBottleCoffee"}, // 0.21%
			{9021.62489557083, "30Rnd_9x21_Mag"}, // 0.21%
			{9042.47125788061, "Exile_Magazine_6Rnd_45ACP"}, // 0.21%
			{9063.31762019039, "10Rnd_9x21_Mag"}, // 0.21%
			{9084.16398250017, "Exile_Magazine_8Rnd_9x18"}, // 0.21%
			{9105.01034480994, "Exile_Magazine_7Rnd_45ACP"}, // 0.21%
			{9125.85670711972, "11Rnd_45ACP_Mag"}, // 0.21%
			{9146.7030694295, "9Rnd_45ACP_Mag"}, // 0.21%
			{9167.30171764321, "CUP_hgun_Duty_M3X"}, // 0.21%
			{9186.06344372201, "CUP_30Rnd_9x19_UZI"}, // 0.19%
			{9204.82516980081, "CUP_18Rnd_9x19_Phantom"}, // 0.19%
			{9223.58689587961, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.19%
			{9240.87298058142, "CUP_acc_CZ_M3X"}, // 0.17%
			{9258.15906528324, "CUP_acc_Glock17_Flashlight"}, // 0.17%
			{9275.44514998505, "CUP_muzzle_snds_MicroUzi"}, // 0.17%
			{9292.61069016314, "CUP_hgun_PB6P9_snds"}, // 0.17%
			{9309.70470725716, "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"}, // 0.17%
			{9326.79872435118, "30Rnd_9x21_Mag_SMG_02_Tracer_Red"}, // 0.17%
			{9343.8927414452, "30Rnd_45ACP_Mag_SMG_01"}, // 0.17%
			{9360.98675853921, "30Rnd_9x21_Mag_SMG_02_Tracer_Green"}, // 0.17%
			{9378.08077563323, "CUP_64Rnd_9x19_Bizon_M"}, // 0.17%
			{9395.17479272725, "30Rnd_9x21_Mag_SMG_02"}, // 0.17%
			{9412.26880982127, "CUP_30Rnd_9x19_MP5"}, // 0.17%
			{9429.36282691528, "CUP_optic_ACOG"}, // 0.17%
			{9446.4568440093, "CUP_30Rnd_9x19_EVO"}, // 0.17%
			{9463.55086110332, "30Rnd_45ACP_Mag_SMG_01_Tracer_Green"}, // 0.17%
			{9480.22795095114, "6Rnd_45ACP_Cylinder"}, // 0.17%
			{9495.78542718277, "CUP_muzzle_snds_M9"}, // 0.16%
			{9510.90013703432, "CUP_smg_MP5SD6"}, // 0.15%
			{9525.98309329375, "Exile_Item_MobilePhone"}, // 0.15%
			{9539.71552543623, "CUP_hgun_MicroUzi"}, // 0.14%
			{9552.22334282209, "CUP_8Rnd_9x18_MakarovSD_M"}, // 0.13%
			{9564.32360211336, "optic_MRD"}, // 0.12%
			{9576.42386140463, "optic_Yorris"}, // 0.12%
			{9587.22008272717, "CUP_smg_EVO"}, // 0.11%
			{9598.0163040497, "CUP_smg_bizon_snds"}, // 0.11%
			{9608.43948520459, "16Rnd_9x21_Mag"}, // 0.10%
			{9615.73571201301, "6Rnd_RedSignal_F"}, // 0.07%
			{9623.03193882144, "6Rnd_GreenSignal_F"}, // 0.07%
			{9629.02983955618, "U_OrestesBody"}, // 0.06%
			{9635.02774029092, "U_NikosBody"}, // 0.06%
			{9641.02564102566, "U_NikosAgedBody"}, // 0.06%
			{9645.45499286385, "30Rnd_556x45_Stanag_red"}, // 0.04%
			{9649.88434470203, "30Rnd_556x45_Stanag_green"}, // 0.04%
			{9654.31369654021, "30Rnd_556x45_Stanag"}, // 0.04%
			{9658.74304837839, "30Rnd_65x39_caseless_green"}, // 0.04%
			{9662.7614180684, "acc_flashlight"}, // 0.04%
			{9666.0096094164, "20Rnd_556x45_UW_mag"}, // 0.03%
			{9668.8798734807, "muzzle_snds_m_snd_F"}, // 0.03%
			{9671.75013754499, "optic_Holosight_khk_F"}, // 0.03%
			{9674.62040160928, "muzzle_snds_M"}, // 0.03%
			{9677.49066567357, "acc_pointer_IR"}, // 0.03%
			{9680.36092973787, "muzzle_snds_H_khk_F"}, // 0.03%
			{9683.23119380216, "optic_Holosight_blk_F"}, // 0.03%
			{9686.10145786645, "optic_Holosight"}, // 0.03%
			{9688.97172193075, "optic_Hamr_khk_F"}, // 0.03%
			{9691.84198599504, "muzzle_snds_H_snd_F"}, // 0.03%
			{9694.71225005933, "optic_Hamr"}, // 0.03%
			{9697.58251412363, "optic_Arco_ghex_F"}, // 0.03%
			{9700.45277818792, "muzzle_snds_58_blk_F"}, // 0.03%
			{9703.32304225221, "optic_Arco_blk_F"}, // 0.03%
			{9706.19330631651, "optic_Arco"}, // 0.03%
			{9709.0635703808, "muzzle_snds_H_MG_khk_F"}, // 0.03%
			{9711.93383444509, "muzzle_snds_H_MG_blk_F"}, // 0.03%
			{9714.80409850939, "muzzle_snds_65_TI_ghex_F"}, // 0.03%
			{9717.67436257368, "muzzle_snds_65_TI_hex_F"}, // 0.03%
			{9720.54462663797, "muzzle_snds_65_TI_blk_F"}, // 0.03%
			{9723.41489070227, "muzzle_snds_58_wdm_F"}, // 0.03%
			{9726.28515476656, "muzzle_snds_m_khk_F"}, // 0.03%
			{9729.15541883085, "muzzle_snds_H"}, // 0.03%
			{9732.02568289515, "CUP_optic_SUSAT"}, // 0.03%
			{9734.89594695944, "optic_DMS"}, // 0.03%
			{9737.76621102373, "CUP_muzzle_snds_XM8"}, // 0.03%
			{9740.63647508803, "CUP_optic_CompM2_Desert"}, // 0.03%
			{9743.50673915232, "CUP_optic_CompM2_Black"}, // 0.03%
			{9746.37700321661, "CUP_optic_PSO_1"}, // 0.03%
			{9749.24726728091, "CUP_optic_PSO_3"}, // 0.03%
			{9752.1175313452, "CUP_optic_Kobra"}, // 0.03%
			{9754.98779540949, "CUP_muzzle_Bizon"}, // 0.03%
			{9757.85805947379, "optic_MRCO"}, // 0.03%
			{9760.72832353808, "CUP_muzzle_PBS4"}, // 0.03%
			{9763.59858760237, "CUP_optic_PechenegScope"}, // 0.03%
			{9766.46885166666, "CUP_optic_HoloBlack"}, // 0.03%
			{9769.33911573096, "CUP_muzzle_PB6P9"}, // 0.03%
			{9772.20937979525, "CUP_optic_SB_11_4x20_PM"}, // 0.03%
			{9775.07964385954, "CUP_optic_HoloDesert"}, // 0.03%
			{9777.94990792384, "optic_ERCO_blk_F"}, // 0.03%
			{9780.82017198813, "optic_ERCO_khk_F"}, // 0.03%
			{9783.69043605242, "optic_ERCO_snd_F"}, // 0.03%
			{9786.56070011672, "optic_DMS_ghex_F"}, // 0.03%
			{9789.43096418101, "CUP_optic_CompM4"}, // 0.03%
			{9792.3012282453, "CUP_optic_RCO"}, // 0.03%
			{9795.1714923096, "CUP_optic_TrijiconRx01_desert"}, // 0.03%
			{9798.04175637389, "CUP_optic_AN_PVS_4"}, // 0.03%
			{9800.91202043818, "CUP_optic_ACOG"}, // 0.03%
			{9803.56963154109, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.03%
			{9806.227242644, "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M"}, // 0.03%
			{9808.88485374691, "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M"}, // 0.03%
			{9811.54246484982, "CUP_30Rnd_545x39_AK_M"}, // 0.03%
			{9814.20007595272, "CUP_30Rnd_556x45_G36"}, // 0.03%
			{9816.85768705563, "CUP_30Rnd_556x45_Stanag"}, // 0.03%
			{9819.51529815854, "20Rnd_762x51_Mag"}, // 0.03%
			{9822.17290926145, "150Rnd_556x45_Drum_Mag_F"}, // 0.03%
			{9824.83052036436, "30Rnd_762x39_AK47_M"}, // 0.03%
			{9827.48813146726, "100Rnd_580x42_Mag_F"}, // 0.03%
			{9830.14574257017, "Exile_Magazine_5Rnd_22LR"}, // 0.03%
			{9832.80335367308, "Exile_Magazine_20Rnd_762x51_DMR_White"}, // 0.03%
			{9835.46096477599, "Exile_Magazine_20Rnd_762x51_DMR_Green"}, // 0.03%
			{9838.1185758789, "Exile_Magazine_20Rnd_762x51_DMR_Red"}, // 0.03%
			{9840.7761869818, "Exile_Magazine_20Rnd_762x51_DMR_Yellow"}, // 0.03%
			{9843.43379808471, "Exile_Magazine_20Rnd_762x51_DMR"}, // 0.03%
			{9846.09140918762, "Exile_Magazine_30Rnd_545x39_AK_Yellow"}, // 0.03%
			{9848.74902029053, "Exile_Magazine_30Rnd_545x39_AK_White"}, // 0.03%
			{9851.40663139344, "Exile_Magazine_10Rnd_762x54"}, // 0.03%
			{9854.06424249634, "Exile_Magazine_30Rnd_545x39_AK_Red"}, // 0.03%
			{9856.72185359925, "Exile_Magazine_30Rnd_545x39_AK"}, // 0.03%
			{9859.37946470216, "Exile_Magazine_30Rnd_762x39_AK"}, // 0.03%
			{9862.03707580507, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.03%
			{9864.69468690798, "30Rnd_65x39_caseless_mag"}, // 0.03%
			{9867.35229801088, "30Rnd_65x39_caseless_green_mag_Tracer"}, // 0.03%
			{9870.00990911379, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.03%
			{9872.6675202167, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.03%
			{9875.32513131961, "100Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9877.98274242252, "Exile_Magazine_30Rnd_545x39_AK_Green"}, // 0.03%
			{9880.64035352542, "Exile_Magazine_10Rnd_9x39"}, // 0.03%
			{9883.29796462833, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.03%
			{9885.95557573124, "30Rnd_762x39_Mag_F"}, // 0.03%
			{9888.61318683415, "Exile_Magazine_20Rnd_9x39"}, // 0.03%
			{9891.27079793706, "30Rnd_580x42_Mag_F"}, // 0.03%
			{9893.92840903997, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.03%
			{9896.58602014287, "30Rnd_545x39_Mag_Tracer_F"}, // 0.03%
			{9899.24363124578, "30Rnd_545x39_Mag_Green_F"}, // 0.03%
			{9901.90124234869, "30Rnd_580x42_Mag_Tracer_F"}, // 0.03%
			{9904.5588534516, "30Rnd_762x39_Mag_Green_F"}, // 0.03%
			{9907.21646455451, "30Rnd_545x39_Mag_F"}, // 0.03%
			{9909.87407565741, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.03%
			{9912.53168676032, "30Rnd_762x39_Mag_Tracer_F"}, // 0.03%
			{9914.89400774068, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.02%
			{9917.25632872105, "CUP_30Rnd_Sa58_M"}, // 0.02%
			{9919.61864970141, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.02%
			{9921.98097068177, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.02%
			{9924.34329166214, "Exile_Magazine_10Rnd_303"}, // 0.02%
			{9926.63950291357, "CUP_muzzle_snds_Mk12"}, // 0.02%
			{9928.93571416501, "CUP_optic_Elcan"}, // 0.02%
			{9931.23192541644, "CUP_muzzle_snds_G36_black"}, // 0.02%
			{9933.52813666788, "CUP_muzzle_snds_L85"}, // 0.02%
			{9935.5951675257, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.02%
			{9937.66219838351, "CUP_20Rnd_556x45_Stanag"}, // 0.02%
			{9939.72922924133, "CUP_30Rnd_762x39_AK47_M"}, // 0.02%
			{9941.5009699766, "CUP_100Rnd_556x45_BetaCMag"}, // 0.02%
			{9942.97742058933, "10Rnd_50BW_Mag_F"}, // 0.01%
			{9944.41255262148, "CUP_acc_ANPEQ_2_grey"}, // 0.01%
			{9945.84768465363, "optic_NVS"}, // 0.01%
			{9947.28281668577, "CUP_acc_ANPEQ_2_desert"}, // 0.01%
			{9948.71794871792, "CUP_acc_ANPEQ_2_camo"}, // 0.01%
			{9949.65034965032, "Exile_Weapon_AK47"}, // 0.01%
			{9950.58275058272, "Exile_Weapon_LeeEnfield"}, // 0.01%
			{9951.51515151512, "Exile_Weapon_AK74_GL"}, // 0.01%
			{9952.44755244752, "Exile_Weapon_AK107_GL"}, // 0.01%
			{9953.37995337992, "Exile_Weapon_AK107"}, // 0.01%
			{9954.31235431233, "Exile_Weapon_AK74"}, // 0.01%
			{9955.15151515149, "Exile_Weapon_CZ550"}, // 0.01%
			{9955.89743589741, "arifle_TRG20_F"}, // 0.01%
			{9956.64335664333, "CUP_arifle_AK107_GL"}, // 0.01%
			{9957.38927738925, "arifle_TRG21_F"}, // 0.01%
			{9958.13519813517, "CUP_arifle_AK74M"}, // 0.01%
			{9958.88111888109, "CUP_arifle_AKM"}, // 0.01%
			{9959.62703962702, "arifle_MX_F"}, // 0.01%
			{9960.37296037294, "arifle_MXC_F"}, // 0.01%
			{9961.11888111886, "arifle_MX_khk_F"}, // 0.01%
			{9961.86480186478, "CUP_arifle_AK107_kobra"}, // 0.01%
			{9962.6107226107, "arifle_MXC_khk_F"}, // 0.01%
			{9963.26340326338, "CUP_arifle_M4A1_camo"}, // 0.01%
			{9963.91608391606, "CUP_arifle_AK47"}, // 0.01%
			{9964.56876456874, "arifle_Mk20C_F"}, // 0.01%
			{9965.22144522142, "arifle_Mk20_F"}, // 0.01%
			{9965.8741258741, "CUP_arifle_Sa58P_des"}, // 0.01%
			{9966.52680652678, "CUP_srifle_Mk12SPR"}, // 0.01%
			{9967.17948717946, "CUP_arifle_M4A1"}, // 0.01%
			{9967.83216783214, "CUP_arifle_AK107"}, // 0.01%
			{9968.48484848482, "CUP_arifle_M16A2"}, // 0.01%
			{9969.04428904426, "arifle_MXM_F"}, // 0.01%
			{9969.6037296037, "Exile_Weapon_SVD"}, // 0.01%
			{9970.16317016314, "arifle_Katiba_GL_F"}, // 0.01%
			{9970.72261072258, "Exile_Weapon_SVDCamo"}, // 0.01%
			{9971.28205128202, "Exile_Weapon_VSSVintorez"}, // 0.01%
			{9971.84149184146, "arifle_Katiba_F"}, // 0.01%
			{9972.4009324009, "CUP_arifle_Sa58P"}, // 0.01%
			{9972.96037296034, "CUP_arifle_XM8_Railed"}, // 0.01%
			{9973.51981351978, "CUP_arifle_AK74"}, // 0.01%
			{9974.07925407922, "CUP_arifle_CZ805_B"}, // 0.01%
			{9974.63869463866, "CUP_arifle_CZ805_A1"}, // 0.01%
			{9975.1981351981, "CUP_arifle_M4A3_desert"}, // 0.01%
			{9975.6643356643, "arifle_ARX_hex_F"}, // 0.00%
			{9976.1305361305, "arifle_ARX_ghex_F"}, // 0.00%
			{9976.5967365967, "arifle_ARX_blk_F"}, // 0.00%
			{9977.0629370629, "arifle_AKS_F"}, // 0.00%
			{9977.52913752911, "arifle_AKM_FL_F"}, // 0.00%
			{9977.99533799531, "arifle_AKM_F"}, // 0.00%
			{9978.46153846151, "arifle_AK12_GL_F"}, // 0.00%
			{9978.92773892771, "arifle_AK12_F"}, // 0.00%
			{9979.39393939391, "CUP_arifle_G36C"}, // 0.00%
			{9979.86013986011, "CUP_arifle_M4A1_BUIS_camo_GL"}, // 0.00%
			{9980.32634032631, "CUP_arifle_CZ805_GL"}, // 0.00%
			{9980.79254079251, "CUP_arifle_Mk16_CQC_EGLM"}, // 0.00%
			{9981.25874125871, "CUP_arifle_Mk16_STD_EGLM"}, // 0.00%
			{9981.72494172491, "CUP_arifle_AKS74U"}, // 0.00%
			{9982.19114219111, "CUP_arifle_Mk16_CQC"}, // 0.00%
			{9982.65734265731, "CUP_arifle_Mk16_SV"}, // 0.00%
			{9983.12354312351, "arifle_CTAR_blk_F"}, // 0.00%
			{9983.58974358971, "arifle_CTAR_hex_F"}, // 0.00%
			{9984.05594405591, "CUP_arifle_AK74_GL"}, // 0.00%
			{9984.52214452211, "arifle_CTAR_GL_blk_F"}, // 0.00%
			{9984.98834498831, "CUP_arifle_G36A"}, // 0.00%
			{9985.45454545451, "CUP_arifle_L85A2_GL"}, // 0.00%
			{9985.92074592071, "CUP_arifle_L85A2_NG"}, // 0.00%
			{9986.38694638691, "arifle_CTAR_ghex_F"}, // 0.00%
			{9986.85314685311, "arifle_SPAR_03_snd_F"}, // 0.00%
			{9987.31934731932, "arifle_SPAR_03_khk_F"}, // 0.00%
			{9987.78554778552, "arifle_SPAR_03_blk_F"}, // 0.00%
			{9988.25174825172, "arifle_SPAR_02_snd_F"}, // 0.00%
			{9988.71794871792, "arifle_SPAR_02_khk_F"}, // 0.00%
			{9989.18414918412, "arifle_SPAR_02_blk_F"}, // 0.00%
			{9989.65034965032, "CUP_arifle_L86A2"}, // 0.00%
			{9990.11655011652, "arifle_SPAR_01_blk_F"}, // 0.00%
			{9990.58275058272, "arifle_CTARS_blk_F"}, // 0.00%
			{9991.04895104892, "arifle_CTARS_hex_F"}, // 0.00%
			{9991.51515151512, "arifle_SPAR_01_khk_F"}, // 0.00%
			{9991.98135198132, "arifle_SPAR_01_snd_F"}, // 0.00%
			{9992.44755244752, "arifle_CTARS_ghex_F"}, // 0.00%
			{9992.91375291372, "arifle_SPAR_01_GL_khk_F"}, // 0.00%
			{9993.37995337992, "arifle_SPAR_01_GL_snd_F"}, // 0.00%
			{9993.84615384612, "arifle_SPAR_01_GL_blk_F"}, // 0.00%
			{9994.21911421908, "CUP_arifle_Sa58RIS2_gl"}, // 0.00%
			{9994.59207459204, "CUP_arifle_Sa58RIS1"}, // 0.00%
			{9994.965034965, "arifle_TRG21_GL_F"}, // 0.00%
			{9995.33799533796, "CUP_arifle_Sa58RIS2_camo"}, // 0.00%
			{9995.71095571093, "arifle_MX_GL_F"}, // 0.00%
			{9996.08391608389, "CUP_arifle_Mk16_CQC_FG"}, // 0.00%
			{9996.45687645685, "arifle_MX_GL_khk_F"}, // 0.00%
			{9996.82983682981, "arifle_Mk20_GL_F"}, // 0.00%
			{9997.10955710953, "arifle_MXM_Black_F"}, // 0.00%
			{9997.38927738925, "arifle_MXC_Black_F"}, // 0.00%
			{9997.66899766897, "arifle_MXM_khk_F"}, // 0.00%
			{9997.94871794869, "arifle_MX_Black_F"}, // 0.00%
			{9998.22843822841, "arifle_MX_GL_Black_F"}, // 0.00%
			{9998.50815850813, "CUP_arifle_L85A2_GL_SUSAT_Laser"}, // 0.00%
			{9998.78787878785, "Exile_Weapon_DMR"}, // 0.00%
			{9998.97435897433, "arifle_SDAR_F"}, // 0.00%
			{9999.16083916081, "CUP_arifle_AK107_GL_kobra"}, // 0.00%
			{9999.34731934729, "CUP_arifle_G36C_camo_holo_snds"}, // 0.00%
			{9999.53379953377, "CUP_arifle_AK107_GL_pso"}, // 0.00%
			{9999.72027972025, "CUP_arifle_M4A1_camo_AIM_snds"}, // 0.00%
			{9999.81351981349, "CUP_arifle_AKS_Gold"}, // 0.00%
			{9999.90675990673, "Exile_Weapon_AKS_Gold"}, // 0.00%
			{9999.99999999997, "CUP_arifle_Sa58RIS2_Arco_Laser"} // 0.00%
		};
	};

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

