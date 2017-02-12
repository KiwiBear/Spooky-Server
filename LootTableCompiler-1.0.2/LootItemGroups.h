/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
3, Exile_Item_CookingPot
5, Exile_Item_CanOpener
5, Exile_Item_Matches
3, Exile_Item_EMRE						// 75% Hunger
6, Exile_Item_GloriousKnakworst			// 60% Hunger
7, Exile_Item_Surstromming				// 55% Hunger
7, Exile_Item_SausageGravy				// 50% Hunger
7, Exile_Item_ChristmasTinner			// 40% Hunger
7, Exile_Item_MacasCheese				// 40% Hunger
7, Exile_Item_BBQSandwich				// 40% Hunger
7, Exile_Item_CatFood					// 40% Hunger
7, Exile_Item_Dogfood					// 30% Hunger
7, Exile_Item_BeefParts					// 30% Hunger
7, Exile_Item_Cheathas					// 30% Hunger
7, Exile_Item_DsNuts					// 30% Hunger
7, Exile_Item_Noodles					// 25% Hunger
8, Exile_Item_CockONut					// 20% Hunger
8, Exile_Item_SeedAstics				// 20% Hunger
9, Exile_Item_Raisins					// 15% Hunger
9, Exile_Item_Moobar					// 10% Hunger
11, Exile_Item_InstantCoffee			//  5% Hunger

> Drinks
7, Exile_Item_PowerDrink					// +95% Thirst
12, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
14, Exile_Item_Beer							// +75% Thirst
17, Exile_Item_EnergyDrink					// +75% Thirst
20, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!	
20, Exile_Item_ChocolateMilk				// +35% Thirst
25, Exile_Item_PlasticBottleDirtyWater		// +10% Thirst
5, Exile_Item_PlasticBottleCoffee


///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
20, hgun_ACPC2_F			// ACP-C2 .45
21, hgun_P07_F				// P07 9 mm
20, hgun_Rook40_F			// Rook-40 9 mm
13, hgun_Pistol_heavy_01_F	// 4-five .45
13, hgun_Pistol_heavy_02_F	// Zubr .45
13, hgun_Pistol_Signal_F	// Starter Pistol
13, Exile_Weapon_Colt1911   // Colt 1911
13, Exile_Weapon_Makarov	// Makarov
13, Exile_Weapon_Taurus		// Taurus
13, Exile_Weapon_TaurusGold	// Taurus (Gold)
13, hgun_Pistol_01_F		// PM 9 mm
13, hgun_P07_khk_F			// P07 9 mm (Khaki)
12, CUP_hgun_Duty_M3X
8, CUP_hgun_MicroUzi
13, CUP_hgun_SA61
18, CUP_hgun_Phantom
10, CUP_hgun_PB6P9_snds

> PistolAmmo
20, 11Rnd_45ACP_Mag				// 4-five
10, 16Rnd_9x21_Mag				// PDW2000, P07, ROOK-40
20, 30Rnd_9x21_Mag				// Sting, PDW2000, P07, ROOK-40
16, 6Rnd_45ACP_Cylinder			// Zubr
7, 6Rnd_GreenSignal_F			// Starter Pistol
7, 6Rnd_RedSignal_F				// Starter Pistol 
20, 9Rnd_45ACP_Mag				// ACP-C2
20, Exile_Magazine_7Rnd_45ACP	// Colt 1911
20, Exile_Magazine_8Rnd_9x18	// Makarov
20, Exile_Magazine_6Rnd_45ACP	// Taurus
20, 10Rnd_9x21_Mag				// PM 9 mm
18, CUP_30Rnd_9x19_UZI
18, CUP_20Rnd_B_765x17_Ball_M
18, CUP_18Rnd_9x19_Phantom
12, CUP_8Rnd_9x18_MakarovSD_M

> PistolAttachments
36, muzzle_snds_L
36, muzzle_snds_acp
14, optic_Yorris		// No one needs this crap
14, optic_MRD
20, CUP_muzzle_snds_MicroUzi
18, CUP_muzzle_snds_M9
20, CUP_acc_Glock17_Flashlight
20, CUP_acc_CZ_M3X

> Shotguns
1, Exile_Weapon_M1014	//M1014
1, CUP_sgun_Saiga12K

> ShotgunAmmo
1, Exile_Magazine_8Rnd_74Slug		//M1014
1, CUP_8Rnd_B_Saiga12_74Slug_M
1, CUP_8Rnd_B_Saiga12_74Pellets_M

> SMG
25, SMG_01_F		// Vermin SMG .45 ACP
20, SMG_02_F		// Sting 9 mm
33, SMG_05_F		// Protector 9mm
33, hgun_PDW2000_F	// PDW2000 9 mm
20, CUP_smg_bizon
10, CUP_smg_bizon_snds
10, CUP_smg_EVO
14, CUP_smg_MP5SD6
25, CUP_smg_MP5A5

> SMGAmmo
50, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
50, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG
50, 30Rnd_9x21_Mag_SMG_02					// Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Red        // Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow     // Sting, Protector
50, 30Rnd_9x21_Mag_SMG_02_Tracer_Green      // Sting, Protector
50, CUP_64Rnd_9x19_Bizon_M
50, CUP_30Rnd_9x19_MP5
50, CUP_30Rnd_9x19_EVO

> SMGAttachments
20, optic_Holosight_smg
20, optic_Holosight_smg_blk_F
20, optic_ACO_grn_smg
20, optic_Aco_smg
20, optic_ACO_grn
20, optic_Aco
15, CUP_optic_ACOG

> BattleRifles
10, CUP_arifle_Mk17_STD_EGLM
15, CUP_arifle_FNFAL
10, CUP_arifle_FNFAL_railed
10, CUP_srifle_M14
8, CUP_arifle_Mk17_STD_FG
8, CUP_arifle_Mk20
5, CUP_srifle_L129A1_HG
5, CUP_srifle_L129A1
7, CUP_srifle_M110



>BattleRifleAmmo
10, CUP_20Rnd_762x51_B_SCAR
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
10, CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR
10, CUP_20Rnd_762x51_FNFAL_M
10, CUP_20Rnd_762x51_DMR
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
10, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
8, CUP_20Rnd_762x51_L129_M
8, CUP_20Rnd_762x51_B_M110
8, CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
8, CUP_20Rnd_TE1_Red_Tracer_762x51_M110

>BattleRifleAttachments
5, CUP_muzzle_snds_M110
10, CUP_muzzle_snds_M14
10, CUP_optic_SB_11_4x20_PM
10, CUP_optic_LeupoldM3LR
10, CUP_optic_ACOG
10, muzzle_snds_B
10, optic_SOS
10, optic_DMS
10, optic_LRPS
10, optic_AMS
10, optic_KHS_hex
10, optic_KHS_blk

> Rifles
6, arifle_Katiba_F			// Katiba 6.5 mm
6, arifle_Katiba_GL_F		// Katiba GL 6.5 mm
8, arifle_MXC_F				// MXC 6.5 mm
8, arifle_MX_F				// MX 6.5 mm
4, arifle_MX_GL_F			// MX 3GL 6.5 mm
6, arifle_MXM_F				// MXM 6.5 mm
3, arifle_MXM_Black_F		// MXM 6.5 mm (Black)
2, arifle_SDAR_F			// SDAR 5.56 mm
8, arifle_TRG21_F			// TRG-21 5.56 mm
8, arifle_TRG20_F			// TRG-20 5.56 mm
4, arifle_TRG21_GL_F		// TRG-21 EGLM 5.56 mm
7, arifle_Mk20_F			// Mk20 5.56 mm
7, arifle_Mk20C_F			// Mk20C 5.56 mm
4, arifle_Mk20_GL_F			// Mk20 EGLM 5.56 mm
3, arifle_MXC_Black_F		// MXC 6.5 mm (Black)
3, arifle_MX_Black_F		// MX 6.5 mm (Black)
3, arifle_MX_GL_Black_F		// MX 3GL 6.5 mm (Black)
10, Exile_Weapon_AK107	
10, Exile_Weapon_AK107_GL	
10, Exile_Weapon_AK74_GL
10, Exile_Weapon_AK74
10, Exile_Weapon_AK47				
1, Exile_Weapon_AKS_Gold	
3, Exile_Weapon_DMR		
10, Exile_Weapon_LeeEnfield
9, Exile_Weapon_CZ550
6, Exile_Weapon_SVD
6, Exile_Weapon_SVDCamo
6, Exile_Weapon_VSSVintorez
8, arifle_MX_khk_F   			// MX 6.5 mm (Khaki)
4, arifle_MX_GL_khk_F			// MX 3GL 6.5 mm (Khaki)
8, arifle_MXC_khk_F  			// MXC 6.5 mm (Khaki)
3, arifle_MXM_khk_F  			// MXM 6.5 mm (Khaki)
5, arifle_AK12_F          		// AK-12 7.62 mm
5, arifle_AK12_GL_F             // AK-12 GL 7.62 mm
5, arifle_AKM_F                 // AKM 7.62 mm
5, arifle_AKM_FL_F              // AKM 7.62 mm
5, arifle_AKS_F                 // AKS
5, arifle_ARX_blk_F             // Type 115 6.5 mm (Black)
5, arifle_ARX_ghex_F            // Type 115 6.5 mm (Green Hex)
5, arifle_ARX_hex_F             // Type 115 6.5 mm (Hex)
5, arifle_CTAR_blk_F            // CAR-95 5.8 mm (Black)
5, arifle_CTAR_hex_F			// CAR-95 5.8 mm (Hex)
5, arifle_CTAR_ghex_F			// CAR-95 5.8 mm (Green Hex)
5, arifle_CTAR_GL_blk_F         // CAR-95 GL 5.8 mm (Black)
5, arifle_CTARS_blk_F           // CAR-95-1 5.8mm (Black)
5, arifle_CTARS_ghex_F			// CAR-95-1 5.8mm (Green Hex)
5, arifle_CTARS_hex_F			// CAR-95-1 5.8mm (Hex)
5, arifle_SPAR_01_blk_F         // SPAR-16 5.56 mm (Black)
5, arifle_SPAR_01_khk_F         // SPAR-16 5.56 mm (Khaki)
5, arifle_SPAR_01_snd_F         // SPAR-16 5.56 mm (Sand)
5, arifle_SPAR_01_GL_blk_F      // SPAR-16 GL 5.56 mm (Black)
5, arifle_SPAR_01_GL_khk_F      // SPAR-16 GL 5.56 mm (Khaki)
5, arifle_SPAR_01_GL_snd_F      // SPAR-16 GL 5.56 mm (Sand)
5, arifle_SPAR_02_blk_F         // SPAR-16S 5.56 mm (Black)
5, arifle_SPAR_02_khk_F         // SPAR-16S 5.56 mm (Khaki)
5, arifle_SPAR_02_snd_F         // SPAR-16S 5.56 mm (Sand)
5, arifle_SPAR_03_blk_F         // SPAR-17 7.62 mm (Black)
5, arifle_SPAR_03_khk_F         // SPAR-17 7.62 mm (Khaki)
5, arifle_SPAR_03_snd_F         // SPAR-17 7.62 mm (Sand)
5, CUP_arifle_L86A2
5, CUP_arifle_L85A2_NG
3, CUP_arifle_L85A2_GL_SUSAT_Laser
5, CUP_arifle_L85A2_GL
5, CUP_arifle_G36A
5, CUP_arifle_G36C
2, CUP_arifle_G36C_camo_holo_snds
7, CUP_arifle_M16A2
7, CUP_arifle_M4A1
7, CUP_arifle_M4A1_camo
6, CUP_arifle_M4A3_desert
2, CUP_arifle_M4A1_camo_AIM_snds
6, CUP_arifle_XM8_Railed
5, CUP_arifle_M4A1_BUIS_camo_GL
5, CUP_arifle_AK74_GL
5, CUP_arifle_CZ805_GL
5, CUP_arifle_Mk16_CQC_EGLM
5, CUP_arifle_Mk16_STD_EGLM
6, CUP_arifle_CZ805_A1
6, CUP_arifle_CZ805_B
6, CUP_arifle_AK74
8, CUP_arifle_AK74M
7, CUP_arifle_AK107
8, CUP_arifle_AK107_GL
5, CUP_arifle_AKS74U
2, CUP_arifle_AK107_GL_kobra
2, CUP_arifle_AK107_GL_pso
8, CUP_arifle_AK107_kobra
5, CUP_arifle_Mk16_CQC
4, CUP_arifle_Mk16_CQC_FG
5, CUP_arifle_Mk16_SV
7, CUP_arifle_AK47
8, CUP_arifle_AKM
1, CUP_arifle_AKS_Gold
6, CUP_arifle_Sa58P
7, CUP_arifle_Sa58P_des
4, CUP_arifle_Sa58RIS1
4, CUP_arifle_Sa58RIS2_gl
4, CUP_arifle_Sa58RIS2_camo
1, CUP_arifle_Sa58RIS2_Arco_Laser
7, CUP_srifle_Mk12SPR



> RifleAmmo
11, 20Rnd_556x45_UW_mag						// SDAR
15, 30Rnd_556x45_Stanag						// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_556x45_Stanag_green				// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_556x45_Stanag_red					// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Green			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Red			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
9, 30Rnd_556x45_Stanag_Tracer_Yellow		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16
15, 30Rnd_65x39_caseless_green				// Katiba, Type 115
9, 30Rnd_65x39_caseless_green_mag_Tracer	// Katiba, Type 115
9, 30Rnd_65x39_caseless_mag					// MX/C/M/SW/3GL
9, 30Rnd_65x39_caseless_mag_Tracer			// MX/C/M/SW/3GL
8, Exile_Magazine_10Rnd_303					// Lee-Enfield
9, Exile_Magazine_30Rnd_762x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK_Green		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Red		// AK
9, Exile_Magazine_30Rnd_545x39_AK_White		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Yellow	// AK
9, Exile_Magazine_20Rnd_762x51_DMR			// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Yellow	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Red		// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Green	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_White	// DMR
9, Exile_Magazine_5Rnd_22LR					// CZ550
9, Exile_Magazine_10Rnd_762x54				// SVD
9, Exile_Magazine_10Rnd_9x39				// VSS
9, Exile_Magazine_20Rnd_9x39				// VSS
9, 30Rnd_762x39_Mag_F						// AK-12, AKM
9, 30Rnd_762x39_Mag_Green_F                 // AK-12, AKM
9, 30Rnd_762x39_Mag_Tracer_F                // AK-12, AKM
9, 30Rnd_762x39_Mag_Tracer_Green_F          // AK-12, AKM
9, 30Rnd_762x39_AK47_M						// AKS
9, 30Rnd_545x39_Mag_F						// AKS
9, 30Rnd_545x39_Mag_Green_F					// AKS
9, 30Rnd_545x39_Mag_Tracer_F				// AKS
9, 30Rnd_545x39_Mag_Tracer_Green_F			// AKS
5, 10Rnd_50BW_Mag_F							// Type 115
9, 30Rnd_580x42_Mag_F						// CAR-95
9, 30Rnd_580x42_Mag_Tracer_F				// CAR-95
9, 100Rnd_580x42_Mag_F						// CAR-95-1
9, 100Rnd_580x42_Mag_Tracer_F				// CAR-95-1
9, 150Rnd_556x45_Drum_Mag_F					// SPAR-16S 
9, 150Rnd_556x45_Drum_Mag_Tracer_F			// SPAR-16S 
9, 20Rnd_762x51_Mag							// SPAR-17
9, CUP_30Rnd_556x45_Stanag
9, CUP_30Rnd_556x45_G36
6, CUP_100Rnd_556x45_BetaCMag
9, CUP_30Rnd_545x39_AK_M
9, CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M
9, CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M
8, CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag
8, CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag
7, CUP_30Rnd_762x39_AK47_M
8, CUP_30Rnd_Sa58_M
8, CUP_30Rnd_Sa58_M_TracerR
7, CUP_30Rnd_Sa58_M_TracerY
7, CUP_20Rnd_556x45_Stanag



> RifleAttachments
10, muzzle_snds_M
10, muzzle_snds_H
10, muzzle_snds_H_khk_F
10, muzzle_snds_H_snd_F
10, muzzle_snds_58_blk_F
10, muzzle_snds_m_khk_F
10, muzzle_snds_m_snd_F
10, muzzle_snds_58_wdm_F
10, muzzle_snds_65_TI_blk_F
10, muzzle_snds_65_TI_hex_F
10, muzzle_snds_65_TI_ghex_F
10, muzzle_snds_H_MG_blk_F
10, muzzle_snds_H_MG_khk_F
10, optic_Arco
10, optic_Arco_blk_F
10, optic_Arco_ghex_F
10, optic_Hamr
10, optic_Hamr_khk_F
10, optic_Holosight
10, optic_Holosight_blk_F
10, optic_Holosight_khk_F
14, acc_flashlight
10, acc_pointer_IR
10, optic_MRCO
10, optic_DMS
10, optic_DMS_ghex_F
10, optic_ERCO_blk_F
10, optic_ERCO_khk_F
10, optic_ERCO_snd_F
5, optic_NVS
10, CUP_optic_ACOG
10, CUP_optic_SUSAT
10, CUP_optic_CompM4
10, CUP_optic_RCO
8, CUP_optic_Elcan
10, CUP_optic_TrijiconRx01_desert
10, CUP_optic_AN_PVS_4
10, CUP_optic_SB_11_4x20_PM
10, CUP_optic_HoloDesert
10, CUP_optic_HoloBlack
10, CUP_optic_PechenegScope
10, CUP_muzzle_PBS4
10, CUP_muzzle_PB6P9
10, CUP_muzzle_Bizon
10, CUP_optic_Kobra
10, CUP_optic_PSO_3
10, CUP_optic_PSO_1
10, CUP_optic_CompM2_Black
10, CUP_optic_CompM2_Desert
5, CUP_acc_ANPEQ_2_camo
5, CUP_acc_ANPEQ_2_desert
5, CUP_acc_ANPEQ_2_grey
8, CUP_muzzle_snds_G36_black
8, CUP_muzzle_snds_L85
8, CUP_muzzle_snds_Mk12
10, CUP_muzzle_snds_XM8



//1, optic_tws

> LMG
20, arifle_MX_SW_Black_F	// MX SW 6.5 mm (Black)
15, arifle_MX_SW_F			// MX SW 6.5 mm
15, LMG_Mk200_F				// Mk200 6.5 mm
10, LMG_Zafir_F				// Zafir 7.62 mm
25, Exile_Weapon_RPK
13, Exile_Weapon_PK
13, Exile_Weapon_PKP
10, LMG_03_F				//= LIM-85 5.56 mm
14, CUP_lmg_L110A1
13, CUP_lmg_Mk48_des
18, CUP_arifle_RPK74
16, CUP_lmg_minimi_railed
16, CUP_lmg_m249_para
13, CUP_lmg_M60E4
14, CUP_lmg_PKM
15, CUP_lmg_Pecheneg
13, CUP_lmg_M240
10, CUP_lmg_L7A2



> LMGAmmo
12, 100Rnd_65x39_caseless_mag			// MX SW
10, 100Rnd_65x39_caseless_mag_Tracer	// MX SW
12, 150Rnd_762x54_Box					// Zafir
10, 150Rnd_762x54_Box_Tracer			// Zafir
5, 130Rnd_338_Mag
51, 150Rnd_93x64_Mag
10, Exile_Magazine_45Rnd_545x39_RPK_Green
10, Exile_Magazine_75Rnd_545x39_RPK_Green
10, Exile_Magazine_100Rnd_762x54_PK_Green
//10, 200Rnd_65x39_Belt					// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Green	// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Red		// Mk200
//10, 200Rnd_65x39_Belt_Tracer_Yellow	// Mk200
10, 200Rnd_556x45_Box_F				// LIM-85 	
10, 200Rnd_556x45_Box_Red_F         // LIM-85	
10, 200Rnd_556x45_Box_Tracer_F      // LIM-85	
10, 200Rnd_556x45_Box_Tracer_Red_F  // LIM-85
10, CUP_200Rnd_TE4_Red_Tracer_556x45_M249
10, CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
10, CUP_200Rnd_TE1_Red_Tracer_556x45_M249
10, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
5, CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
5, CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
15, CUP_30Rnd_545x39_AK_M
14, CUP_30Rnd_Subsonic_545x39_AK_M
14, CUP_30Rnd_762x39_AK47_M
14, CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M 
13, CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
15, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M

> Snipers
28, srifle_DMR_01_F			// Rahim 7.62 mm
28, srifle_EBR_F			// Mk18 ABR 7.62 mm
10, srifle_GM6_F			// GM6 Lynx 12.7 mm
15, srifle_LRR_F			// M320 LRR .408
15, srifle_LRR_tna_F    	// M320 LRR .408 (Tropic)
10, srifle_GM6_ghex_F   	// GM6 Lynx 12.7 mm (Green Hex)
17, srifle_DMR_07_blk_F     // CMR-76 6.5 mm (Black)
17, srifle_DMR_07_hex_F     // CMR-76 6.5 mm (Hex)
17, srifle_DMR_07_ghex_F    // CMR-76 6.5 mm (Green Hex)
15, CUP_srifle_CZ750
20, CUP_srifle_VSSVintorez
25, CUP_srifle_M40A3
25, CUP_srifle_M24_wdl
25, CUP_srifle_M24_des
13, CUP_srifle_G22_des
13, CUP_srifle_AWM_wdl
13, CUP_srifle_AWM_des
26, CUP_srifle_SVD

> SniperAmmo
10, 5Rnd_127x108_Mag									// GM6 Lynx
10, 7Rnd_408_Mag										// M320 LRR
17, 10Rnd_762x54_Mag									// Rahim
19, 20Rnd_762x51_Mag									// Mk18 ABR
8, 5Rnd_127x108_APDS_Mag								// GM6 Lynx 
21, 20Rnd_650x39_Cased_Mag_F							// CMR-76
2, Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag 			// GM6 Lynx 12.7 mm
5, Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag 	// Cyrus 9.3mm	
3, Exile_Magazine_7Rnd_408_Bullet_Cam_Mag 				// M320 LRR .408	
5, Exile_Magazine_10Rnd_338_Bullet_Cam_Mag 				// MAR-10 .338
5, CUP_5Rnd_127x99_as50_M
5, CUP_10Rnd_127x99_M107
15, CUP_10Rnd_762x51_CZ750
15, CUP_10Rnd_762x51_CZ750_Tracer
13, CUP_5Rnd_86x70_L115A1
20, CUP_5Rnd_762x51_M24
20, CUP_10Rnd_9x39_SP5_VSS_M
18, CUP_20Rnd_9x39_SP5_VSS_M
16, CUP_5Rnd_762x67_G22
20, CUP_10Rnd_762x54_SVD_M
20, CUP_srifle_SVD_des


> SniperAttachments
19, muzzle_snds_B
10, muzzle_snds_B_khk_F
10, muzzle_snds_B_snd_F
//1, optic_tws
//1, optic_tws_mg
27, optic_DMS
26, optic_SOS
26, optic_SOS_khk_F
26, optic_LRPS
26, optic_LRPS_tna_F
26, optic_LRPS_ghex_F

> DLCRifles
// To overpowered. Do not use in vanilla Exile
//4, MMG_01_hex_F				//Navid
//4, MMG_01_tan_F				//Navid
//6, MMG_02_black_F				//SPMG
//6, MMG_02_camo_F				//SPMG
//6, MMG_02_sand_F				//SPMG
6, srifle_DMR_02_camo_F			//MAR10
6, srifle_DMR_02_F				//MAR10
6, srifle_DMR_02_sniper_F		//MAR10
3, srifle_DMR_03_F				//MK1EMR
3, srifle_DMR_03_khaki_F		//MK1EMR
3, srifle_DMR_03_tan_F			//MK1EMR
3, srifle_DMR_03_woodland_F		//MK1EMR
7, srifle_DMR_04_F				//ASP1KIR
7, srifle_DMR_04_Tan_F			//ASP1KIR
8, srifle_DMR_05_blk_F			//CYRUS
8, srifle_DMR_05_hex_F			//CYRUS
8, srifle_DMR_05_tan_F			//CYRUS
3, srifle_DMR_06_camo_F			//Mk14
3, srifle_DMR_06_olive_F		//Mk14

> DLCAmmo
//18, 150Rnd_93x64_Mag		//Navid
//25, 130Rnd_338_Mag			//SPMG
16, 10Rnd_338_Mag			//MAR10
11, 20Rnd_762x51_Mag		//MK1EMR
14, 10Rnd_127x54_Mag		//ASP1KIR
16, 10Rnd_93x64_DMR_05_Mag	//CYRUS

> DLCOptics
14, optic_AMS
14, optic_AMS_khk
14, optic_AMS_snd
14, optic_KHS_blk
14, optic_KHS_hex
14, optic_KHS_old
14, optic_KHS_tan

> DLCSupressor
40, muzzle_snds_338_black
40, muzzle_snds_338_green
40, muzzle_snds_338_sand
40, muzzle_snds_93mmg
40, muzzle_snds_93mmg_tan
40, muzzle_snds_B

> EpicWeapons
4, MMG_01_hex_F				//Navid
4, MMG_01_tan_F				//Navid
6, MMG_02_black_F			//SPMG
6, MMG_02_camo_F			//SPMG
6, MMG_02_sand_F			//SPMG
15, CUP_srifle_M107_Base
6, CUP_srifle_AS50
20, srifle_GM6_F
3, CUP_launch_RPG7V
3, CUP_launch_M136
15, srifle_DMR_02_camo_F
15, srifle_DMR_02_F
10, srifle_DMR_05_blk_F
10, srifle_DMR_05_hex_F
10, srifle_DMR_05_tan_F


> EpicWeaponAmmo
5, 5Rnd_127x108_Mag
5, 5Rnd_127x108_APDS_Mag
5, 130Rnd_338_Mag
5, 150Rnd_93x64_Mag
5, CUP_5Rnd_127x99_as50_M
4, CUP_M136_M
4, CUP_OG7_M
6, 10Rnd_93x64_DMR_05_Mag
5, 10Rnd_338_Mag

> Bipods
17, bipod_03_F_oli
17, bipod_03_F_blk
17, bipod_02_F_tan
16, bipod_02_F_hex
17, bipod_02_F_blk
17, bipod_01_F_snd
16, bipod_01_F_mtp
17, bipod_01_F_blk
17, bipod_01_F_khk

> HEGrenades
67, 1Rnd_HE_Grenade_shell
33, 3Rnd_HE_Grenade_shell

> UGLFlares
8, 3Rnd_UGL_FlareGreen_F
8, 3Rnd_UGL_FlareRed_F
8, 3Rnd_UGL_FlareWhite_F
8, 3Rnd_UGL_FlareYellow_F
17, UGL_FlareGreen_F
17, UGL_FlareRed_F
17, UGL_FlareWhite_F
17, UGL_FlareYellow_F
// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

> UGLSmokes
10, 1Rnd_Smoke_Grenade_shell
10, 1Rnd_SmokeBlue_Grenade_shell
10, 1Rnd_SmokeGreen_Grenade_shell
10, 1Rnd_SmokeOrange_Grenade_shell
10, 1Rnd_SmokePurple_Grenade_shell
10, 1Rnd_SmokeRed_Grenade_shell
10, 1Rnd_SmokeYellow_Grenade_shell
4, 3Rnd_Smoke_Grenade_shell
4, 3Rnd_SmokeBlue_Grenade_shell
4, 3Rnd_SmokeGreen_Grenade_shell
4, 3Rnd_SmokeOrange_Grenade_shell
4, 3Rnd_SmokePurple_Grenade_shell
4, 3Rnd_SmokeRed_Grenade_shell
4, 3Rnd_SmokeYellow_Grenade_shell

> HandGrenades
50, HandGrenade
50, MiniGrenade

> Explosives
15, DemoCharge_Remote_Mag
5, IEDUrbanSmall_Remote_Mag
5, IEDLandSmall_Remote_Mag
5, APERSMine_Range_Mag
5, APERSBoundingMine_Range_Mag
5, APERSTripMine_Wire_Mag
10, SatchelCharge_Remote_Mag

///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
30, ItemWatch
30, ItemRadio
10, ItemGPS
20, Binocular
40, Exile_Item_Heatpack
35, ItemMap
5, Exile_Item_MobilePhone

> CivilianClothing
9, U_C_Poor_1
9, U_C_Poor_2
9, U_C_Poor_shorts_1
9, U_C_HunterBody_grn
7, U_C_Poloshirt_salmon
7, U_C_Poloshirt_tricolour
7, U_C_Poloshirt_stripped
7, U_C_Poloshirt_burgundy
7, U_C_Poloshirt_blue
9, U_C_Journalist
9, U_C_Scientist
9, U_Rangemaster
1, U_OrestesBody
1, U_NikosBody
1, U_NikosAgedBody
5, U_I_C_Soldier_Bandit_1_F         // Bandit Clothes (Polo Shirt)
5, U_I_C_Soldier_Bandit_2_F         // Bandit Clothes (Skull)
5, U_I_C_Soldier_Bandit_3_F         // Bandit Clothes (Tee)
5, U_I_C_Soldier_Bandit_4_F         // Bandit Clothes (Checkered)
5, U_I_C_Soldier_Bandit_5_F         // Bandit Clothes (Tank Top)
5, U_C_man_sport_1_F                // Sport Clothes (Beach)
5, U_C_man_sport_2_F                // Sport Clothes (Orange)
5, U_C_man_sport_3_F                // Sport Clothes (Blue)
5, U_C_Man_casual_1_F               // Casual Clothes (Navy)
5, U_C_Man_casual_2_F               // Casual Clothes (Blue)
5, U_C_Man_casual_3_F               // Casual Clothes (Green)
5, U_C_Man_casual_4_F               // Summer Clothes (Sky)
5, U_C_Man_casual_5_F               // Summer Clothes (Yellow)
5, U_C_Man_casual_6_F               // Summer Clothes (Red)

> CivilianBackpacks
10, B_OutdoorPack_blk
9, B_OutdoorPack_tan
9, B_OutdoorPack_blu
8, B_HuntingBackpack
7, B_AssaultPack_khk
7, B_AssaultPack_dgtl
7, B_AssaultPack_rgr
7, B_AssaultPack_sgg
7, B_AssaultPack_blk
7, B_AssaultPack_cbr
7, B_AssaultPack_mcamo
5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr
7, B_AssaultPack_tna_F 

> CivilianVests
50, V_Rangemaster_belt
25, V_Press_F
25, V_TacVest_blk_POLICE

> CivilianHeadgear
5, H_Bandanna_surfer
5, H_Beret_blk_POLICE
5, H_Cap_blk
5, H_Cap_blk_Raven
5, H_Cap_blu
5, H_Cap_grn
5, H_Cap_headphones
5, H_Cap_oli
6, H_Cap_press
6, H_Cap_red
6, H_Cap_tan
6, H_Hat_blue
6, H_Hat_brown
6, H_Hat_checker
6, H_Hat_grey
6, H_Hat_tan
6, H_StrawHat
6, H_StrawHat_dark

//Guerilla

> GuerillaItems
25, Rangefinder
8, NVGoggles
8, O_NVGoggles_hex_F
8, O_NVGoggles_urb_F
8, O_NVGoggles_ghex_F
8, NVGoggles_tna_F
50, ItemCompass

> GuerillaClothing
16, U_IG_Guerilla1_1
16, U_IG_Guerilla2_1
16, U_IG_Guerilla2_2
16, U_IG_Guerilla2_3
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2
4, U_IG_leader
2, U_I_G_resistanceLeader_F
5, U_I_C_Soldier_Para_1_F           // Paramilitary Garb (Tee)
5, U_I_C_Soldier_Para_2_F           // Paramilitary Garb (Jacket)
5, U_I_C_Soldier_Para_3_F           // Paramilitary Garb (Shirt)
5, U_I_C_Soldier_Para_4_F           // Paramilitary Garb (Tank Top)
5, U_I_C_Soldier_Para_5_F           // Paramilitary Garb (Shorts)
5, U_I_C_Soldier_Camo_F             // Syndikat Uniform

> GuerillaBackpacks
14, B_FieldPack_blk
14, B_FieldPack_ocamo
14, B_FieldPack_oucamo
14, B_FieldPack_cbr
11, B_Bergen_sgg
11, B_Bergen_mcamo
11, B_Bergen_rgr
11, B_Bergen_blk
11, B_FieldPack_ghex_F 
11, B_ViperHarness_base_F         
11, B_ViperHarness_blk_F          
11, B_ViperHarness_ghex_F         
11, B_ViperHarness_hex_F          
11, B_ViperHarness_khk_F          
11, B_ViperHarness_oli_F          
11, B_ViperLightHarness_base_F    
11, B_ViperLightHarness_blk_F     
11, B_ViperLightHarness_ghex_F    
11, B_ViperLightHarness_hex_F     
11, B_ViperLightHarness_khk_F     
11, B_ViperLightHarness_oli_F    

> GuerillaVests
7, V_BandollierB_khk
7, V_BandollierB_cbr
7, V_BandollierB_rgr
7, V_BandollierB_blk
7, V_BandollierB_oli
5, V_Chestrig_khk
5, V_Chestrig_rgr
5, V_Chestrig_blk
5, V_Chestrig_oli
7, V_HarnessO_brn
7, V_HarnessOGL_brn
7, V_HarnessO_gry
7, V_HarnessOGL_gry
7, V_HarnessOSpec_brn
7, V_HarnessOSpec_gry
3, V_I_G_resistanceLeader_F

> GuerillaHeadgear
4, Exile_Headgear_GasMask
4, H_Booniehat_khk
4, H_Booniehat_indp
4, H_Booniehat_mcamo
4, H_Booniehat_grn
4, H_Booniehat_tan
4, H_Booniehat_dirty
4, H_Booniehat_dgtl
4, H_Booniehat_khk_hs
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_cbr
3, H_Bandanna_sgg
3, H_Bandanna_gry
3, H_Bandanna_camo
3, H_Bandanna_mcamo
3, H_BandMask_blk
1, H_Beret_blk
1, H_Beret_red
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_brn_SF
1, H_Beret_ocamo
1, H_Beret_02
1, H_Beret_Colonel
3, H_Hat_camo
3, H_Cap_brn_SPECOPS
3, H_Cap_tan_specops_US
3, H_Cap_khaki_specops_UK
3, H_Watchcap_blk
3, H_Watchcap_khk
2, H_Watchcap_camo
2, H_Watchcap_sgg
2, H_TurbanO_blk
2, H_Shemag_khk
2, H_Shemag_tan
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan  
2, H_MilCap_tna_F             
2, H_MilCap_ghex_F 
2, H_Booniehat_tna_F   
2, H_MilCap_gen_F             
2, H_Cap_oli_Syndikat_F       
2, H_Cap_tan_Syndikat_F       
2, H_Cap_blk_Syndikat_F       
2, H_Cap_grn_Syndikat_F       
2, H_FakeHeadgear_Syndikat_F    


//Military

> MilitaryClothing
5, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
5, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
5, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
5, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
5, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
5, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
4, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
4, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_O_Wetsuit						// Wetsuit [CSAT]
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
2, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
2, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)
2, U_O_V_Soldier_Viper_F            // Special Purpose Suit (Green Hex)
2, U_O_V_Soldier_Viper_hex_F        // Special Purpose Suit (Hex)
5, U_B_T_Soldier_AR_F               // Combat Fatigues (Tropic, Tee)
5, U_B_T_Soldier_SL_F               // Recon Fatigues (Tropic)
5, U_B_CTRG_Soldier_F               // CTRG Stealth Uniform
5, U_B_CTRG_Soldier_2_F             // CTRG Stealth Uniform (Tee)
5, U_B_CTRG_Soldier_3_F             // CTRG Stealth Uniform (Rolled-up)
5, U_B_CTRG_Soldier_urb_1_F         // CTRG Urban Uniform
5, U_B_CTRG_Soldier_urb_2_F         // CTRG Urban Uniform (Tee)
5, U_B_CTRG_Soldier_urb_3_F         // CTRG Urban Uniform (Rolled-up)
5, U_B_GEN_Soldier_F                // Gendarmerie Uniform
5, U_B_GEN_Commander_F              // Gendarmerie Commander Uniform
5, U_O_T_Soldier_F                  // Fatigues (Green Hex) [CSAT]
5, U_O_T_Officer_F                  // Officer Fatigues (Green Hex) [CSAT]

> MilitaryBackpacks
15, B_Carryall_ocamo
15, B_Carryall_oucamo
15, B_Carryall_mcamo
18, B_Carryall_oli
18, B_Carryall_khk
19, B_Carryall_cbr
19, B_Carryall_ghex_F  
6, B_Bergen_Base_F				
6, B_Bergen_mcamo_F              
6, B_Bergen_dgtl_F               
6, B_Bergen_hex_F                
6, B_Bergen_tna_F  

> MilitaryVests
10, V_PlateCarrier1_blk
10, V_PlateCarrier1_rgr
10, V_PlateCarrier2_rgr
10, V_PlateCarrier3_rgr
10, V_PlateCarrierGL_rgr
10, V_PlateCarrierIA1_dgtl
10, V_PlateCarrierIA2_dgtl
10, V_PlateCarrierIAGL_dgtl
10, V_PlateCarrierSpec_rgr
5, V_PlateCarrierL_CTRG
5, V_PlateCarrierH_CTRG

> MilitaryHeadgear
4, Exile_Headgear_GasMask
4, H_MilCap_ocamo
4, H_MilCap_mcamo
4, H_MilCap_oucamo
4, H_MilCap_blue
4, H_MilCap_rucamo
4, H_MilCap_dgtl
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
2, H_HelmetIA_net
2, H_HelmetIA_camo
2, H_HelmetB_grass
2, H_HelmetB_snakeskin
2, H_HelmetB_desert
2, H_HelmetB_black
2, H_HelmetB_sand
2, H_HelmetB_light_grass
2, H_HelmetB_light_snakeskin
2, H_HelmetB_light_desert
2, H_HelmetB_light_black
2, H_HelmetB_light_sand
1, H_HelmetCrew_B
1, H_HelmetCrew_O
1, H_HelmetCrew_I
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_O
1, H_PilotHelmetFighter_I
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_O
1, H_PilotHelmetHeli_I
1, H_HelmetB_camo
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_O
1, H_CrewHelmetHeli_I
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_BandMask_demon
1, H_HelmetO_oucamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetSpecO_ocamo
1, H_HelmetSpecO_blk
1, H_HelmetO_ocamo
1, H_HelmetLeaderO_ocamo
1, H_HelmetO_ghex_F 
2, H_Helmet_Skate    
2, H_HelmetB_Enh_tna_F        
2, H_HelmetB_Light_tna_F 	
2, H_Beret_gen_F  
2, H_HelmetB_tna_F   		 
2, H_HelmetSpecO_ghex_F       
2, H_HelmetLeaderO_ghex_F
2, H_HelmetCrew_O_ghex_F 
2, H_HelmetB_TI_tna_F   

> Ghillies
1, U_B_GhillieSuit			// Ghillie Suit [NATO]
1, U_O_GhillieSuit			// Ghillie Suit [CSAT]
1, U_I_GhillieSuit			// Ghillie Suit [AAF]

> DLCGhillies
1, U_B_FullGhillie_ard		
1, U_B_FullGhillie_lsh
1, U_B_FullGhillie_sard
1, U_O_FullGhillie_ard
1, U_O_FullGhillie_lsh
1, U_O_FullGhillie_sard
1, U_I_FullGhillie_ard
1, U_I_FullGhillie_lsh
1, U_I_FullGhillie_sard
5, U_B_T_Sniper_F                   // Ghillie Suit (Tropic) [NATO]
5, U_B_T_Soldier_F        			// Ghillie Suit (Tropic) [NATO]
5, U_B_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [NATO]
5, U_O_T_Sniper_F                   // Ghillie Suit (Green Hex) [CSAT]
5, U_O_T_FullGhillie_tna_F          // Full Ghillie (Jungle) [CSAT]

> DLCVests
1, V_PlateCarrierGL_blk
1, V_PlateCarrierGL_mtp
1, V_PlateCarrierGL_rgr
1, V_PlateCarrierIAGL_dgtl
1, V_PlateCarrierIAGL_oli
1, V_PlateCarrierSpec_blk
1, V_PlateCarrierSpec_mtp
1, V_PlateCarrierSpec_rgr
1, V_TacChestrig_grn_F         
1, V_TacChestrig_oli_F         
1, V_TacChestrig_cbr_F         
1, V_PlateCarrier1_tna_F       
1, V_PlateCarrier2_tna_F       
1, V_PlateCarrierSpec_tna_F    
1, V_PlateCarrierGL_tna_F      
1, V_HarnessO_ghex_F           
1, V_HarnessOGL_ghex_F         
1, V_BandollierB_ghex_F        
1, V_TacVest_gen_F             
1, V_PlateCarrier1_rgr_noflag_F
1, V_PlateCarrier2_rgr_noflag_F

> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
4, Exile_Item_InstaDoc
5, Exile_Item_Bandage
10, Exile_Item_Vishpirin
10, Exile_Item_Heatpack

> IndustrialItems
2, Exile_Item_ThermalScannerPro
2, Exile_Item_Knife
3, Exile_Item_Cement
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
6, Exile_Item_CamoTentKit
4, Exile_Item_MetalBoard
6, Exile_Item_Foolbox
4, Exile_Item_Sand
5, Exile_Item_Grinder
10, Exile_Item_MetalScrews
5, Exile_Melee_SledgeHammer
8, Exile_Item_ExtensionCord
9, Exile_Item_LightBulb
10, Exile_Item_WaterCanisterEmpty
2, Exile_Melee_Shovel
11, Exile_Item_JunkMetal
13, Exile_Item_Handsaw
13, Exile_Item_Pliers
13, Exile_Item_ScrewDriver
10, Exile_Melee_Axe
4, Exile_Item_Rope
3, Exile_Item_FireExtinguisher
3, Exile_Item_CordlessScrewdriver

> Vehicle
5, Exile_Item_FuelCanisterFull
15, Exile_Item_FuelCanisterEmpty
30, Exile_Item_DuctTape
10, Exile_Item_OilCanister
10, Exile_Item_Carwheel
5, Exile_Item_Wrench


// Throwables

> Chemlights
1, Chemlight_blue
1, Chemlight_green
1, Chemlight_red
1, Chemlight_yellow

> RoadFlares
1, FlareGreen_F
1, FlareRed_F
1, FlareWhite_F
1, FlareYellow_F

> SmokeGrenades
1, SmokeShell
1, SmokeShellRed
1, SmokeShellGreen
1, SmokeShellYellow
1, SmokeShellPurple
1, SmokeShellBlue
1, SmokeShellOrange

> Restraints
1, Exile_Item_ZipTie

> Electronics
1, Exile_Item_Laptop
1, Exile_Item_BaseCameraKit

 // Trash or items not currently being used

> Trash
4, Exile_Item_Can_Empty
4, Exile_Item_ToiletPaper
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
1, Exile_Item_Magazine01
1, Exile_Item_Magazine02
1, Exile_Item_Magazine03
1, Exile_Item_Magazine04

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Defibrillator
5, Exile_Item_Wrench
4, Exile_Item_Rope