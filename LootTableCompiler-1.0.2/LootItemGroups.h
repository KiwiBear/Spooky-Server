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
7, hgun_ACPC2_F			// ACP-C2 .45
12, hgun_P07_F				// P07 9 mm
13, hgun_Rook40_F			// Rook-40 9 mm
15, hgun_Pistol_heavy_01_F	// 4-five .45
7, hgun_Pistol_heavy_02_F	// Zubr .45
3, hgun_Pistol_Signal_F	// Starter Pistol
5, Exile_Weapon_Colt1911   // Colt 1911
6, Exile_Weapon_Makarov	// Makarov
3, Exile_Weapon_Taurus		// Taurus
4, Exile_Weapon_TaurusGold	// Taurus (Gold)
13, hgun_Pistol_01_F		// PM 9 mm
13, hgun_P07_khk_F			// P07 9 mm (Khaki)
12, CUP_hgun_Duty_M3X
8, CUP_hgun_MicroUzi
13, CUP_hgun_SA61
18, CUP_hgun_Phantom
10, CUP_hgun_PB6P9_snds
15, hlc_smg_mp5k_PDW
15, hlc_smg_mp5k

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
20, hlc_30Rnd_9x19_B_MP5
18, hlc_30Rnd_9x19_GD_MP5

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
10, Exile_Weapon_M1014	//M1014
10, CUP_sgun_Saiga12K
15, Exile_Weapon_LeeEnfield
5, Exile_Weapon_CZ550
3, hlc_rifle_L1A1SLR
14, hlc_rifle_saiga12k
10, hlc_rifle_M1903A1


> ShotgunAmmo
10, Exile_Magazine_8Rnd_74Slug		//M1014
10, CUP_8Rnd_B_Saiga12_74Slug_M
10, CUP_8Rnd_B_Saiga12_74Pellets_M
10, Exile_Magazine_10Rnd_303
10, Exile_Magazine_5Rnd_22LR
4, hlc_20Rnd_762x51_B_fal
13, hlc_10rnd_12g_buck_S12
11, hlc_10rnd_12g_slug_S12
3, hlc_optic_kobra

> SMG
5, SMG_01_F		// Vermin SMG .45 ACP
5, SMG_02_F		// Sting 9 mm
10, SMG_05_F		// Protector 9mm
10, hgun_PDW2000_F	// PDW2000 9 mm
25, CUP_smg_bizon
15, CUP_smg_bizon_snds
15, CUP_smg_EVO
35, CUP_smg_MP5SD6
25, CUP_smg_MP5A5
30, hlc_rifle_hk53

> SMGAmmo
20, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
15, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG
50, 30Rnd_9x21_Mag_SMG_02					// Sting, Protector
20, 30Rnd_9x21_Mag_SMG_02_Tracer_Red        // Sting, Protector
20, 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow     // Sting, Protector
20, 30Rnd_9x21_Mag_SMG_02_Tracer_Green      // Sting, Protector
50, CUP_64Rnd_9x19_Bizon_M
50, CUP_30Rnd_9x19_MP5
50, CUP_30Rnd_9x19_EVO
30, hlc_30rnd_556x45_b_hk33
20, hlc_30rnd_556x45_t_hk33
15, hlc_30rnd_556x45_epr_hk33
55, hlc_30Rnd_9x19_B_MP5
50, hlc_30Rnd_9x19_GD_MP5

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
16, CUP_arifle_FNFAL_railed
10, CUP_srifle_M14
8, CUP_arifle_Mk17_STD_FG
8, CUP_arifle_Mk20
5, CUP_srifle_L129A1_HG
5, CUP_srifle_L129A1
15, CUP_srifle_M110
11, hlc_rifle_FAL5061
10, hlc_rifle_falosw
13, hlc_rifle_g3ka4
17, HLC_Rifle_g3ka4_GL
8,  hlc_rifle_c1A1
12, hlc_rifle_M14
12, hlc_rifle_m14dmr
13, hlc_rifle_m14sopmod
11, hlc_rifle_psg1
8, hlc_rifle_SLR
12, hlc_rifle_SLRchopmod
13, hlc_rifle_STG58F
10, hlc_rifle_STGW57
12, hlc_rifle_stgw57_RIS
11, hlc_rifle_stgw57_commando
12, hlc_rifle_sig5104
11, hlc_rifle_amt
13, hlc_rifle_PSG1A1_RIS





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
12, hlc_20rnd_762x51_b_G3
13, hlc_50rnd_762x51_M_G3
11, hlc_20rnd_762x51_T_G3
10, hlc_20Rnd_762x51_B_M14
8, hlc_50Rnd_762x51_B_M14
10, hlc_20Rnd_762x51_B_fal
8, hlc_50rnd_762x51_M_FAL


>BattleRifleAttachments
5, CUP_muzzle_snds_M110
10, CUP_muzzle_snds_M14
10, CUP_optic_SB_11_4x20_PM
10, CUP_optic_LeupoldM3LR
15, CUP_optic_ACOG
10, muzzle_snds_B
10, optic_SOS
10, optic_DMS
10, optic_LRPS
10, optic_AMS
10, optic_KHS_hex
10, optic_KHS_blk

> Rifles
// 3, arifle_Katiba_F			// Katiba 6.5 mm
// 4, arifle_Katiba_GL_F		// Katiba GL 6.5 mm
13, arifle_MXC_F				// MXC 6.5 mm
11, arifle_MX_F				// MX 6.5 mm
14, arifle_MX_GL_F			// MX 3GL 6.5 mm
6, arifle_MXM_F				// MXM 6.5 mm
4, arifle_MXM_Black_F		// MXM 6.5 mm (Black)
// 2, arifle_SDAR_F			// SDAR 5.56 mm
// 3, arifle_TRG21_F			// TRG-21 5.56 mm
// 3, arifle_TRG20_F			// TRG-20 5.56 mm
4, arifle_TRG21_GL_F		// TRG-21 EGLM 5.56 mm
// 3, arifle_Mk20_F			// Mk20 5.56 mm
3, arifle_Mk20C_F			// Mk20C 5.56 mm
4, arifle_Mk20_GL_F			// Mk20 EGLM 5.56 mm
3, arifle_MXC_Black_F		// MXC 6.5 mm (Black)
3, arifle_MX_Black_F		// MX 6.5 mm (Black)
3, arifle_MX_GL_Black_F		// MX 3GL 6.5 mm (Black)
10, Exile_Weapon_AK107	
10, Exile_Weapon_AK107_GL	
10, Exile_Weapon_AK74_GL
10, Exile_Weapon_AK74
10, Exile_Weapon_AK47				
3, Exile_Weapon_AKS_Gold	
5, Exile_Weapon_DMR		
12, Exile_Weapon_LeeEnfield
10, Exile_Weapon_CZ550
6, Exile_Weapon_SVD
6, Exile_Weapon_SVDCamo
6, Exile_Weapon_VSSVintorez
8, arifle_MX_khk_F   			// MX 6.5 mm (Khaki)
8, arifle_MX_GL_khk_F			// MX 3GL 6.5 mm (Khaki)
8, arifle_MXC_khk_F  			// MXC 6.5 mm (Khaki)
3, arifle_MXM_khk_F  			// MXM 6.5 mm (Khaki)
15, arifle_AK12_F          		// AK-12 7.62 mm
15, arifle_AK12_GL_F             // AK-12 GL 7.62 mm
15, arifle_AKM_F                 // AKM 7.62 mm
15, arifle_AKM_FL_F              // AKM 7.62 mm
17, arifle_AKS_F                 // AKS
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
15, arifle_SPAR_01_blk_F         // SPAR-16 5.56 mm (Black)
5, arifle_SPAR_01_khk_F         // SPAR-16 5.56 mm (Khaki)
5, arifle_SPAR_01_snd_F         // SPAR-16 5.56 mm (Sand)
5, arifle_SPAR_01_GL_blk_F      // SPAR-16 GL 5.56 mm (Black)
5, arifle_SPAR_01_GL_khk_F      // SPAR-16 GL 5.56 mm (Khaki)
5, arifle_SPAR_01_GL_snd_F      // SPAR-16 GL 5.56 mm (Sand)
5, arifle_SPAR_02_blk_F         // SPAR-16S 5.56 mm (Black)
5, arifle_SPAR_02_khk_F         // SPAR-16S 5.56 mm (Khaki)
5, arifle_SPAR_02_snd_F         // SPAR-16S 5.56 mm (Sand)
5, arifle_SPAR_03_blk_F         // SPAR-17 7.62 mm (Black)
15, arifle_SPAR_03_khk_F         // SPAR-17 7.62 mm (Khaki)
15, arifle_SPAR_03_snd_F         // SPAR-17 7.62 mm (Sand)
15, CUP_arifle_L86A2
5, CUP_arifle_L85A2_NG
3, CUP_arifle_L85A2_GL_SUSAT_Laser
10, CUP_arifle_L85A2_GL
15, CUP_arifle_G36A
15, CUP_arifle_G36C
4, CUP_arifle_G36C_camo_holo_snds
15, CUP_arifle_M16A2
14, CUP_arifle_M4A1
7, CUP_arifle_M4A1_camo
6, CUP_arifle_M4A3_desert
5, CUP_arifle_M4A1_camo_AIM_snds
15, CUP_arifle_XM8_Railed
5, CUP_arifle_M4A1_BUIS_camo_GL
16, CUP_arifle_AK74_GL
14, CUP_arifle_CZ805_GL
10, CUP_arifle_Mk16_CQC_EGLM
10, CUP_arifle_Mk16_STD_EGLM
10, CUP_arifle_CZ805_A1
10, CUP_arifle_CZ805_B
12, CUP_arifle_AK74
10, CUP_arifle_AK74M
10, CUP_arifle_AK107
18, CUP_arifle_AK107_GL
15, CUP_arifle_AKS74U
5, CUP_arifle_AK107_GL_kobra
5, CUP_arifle_AK107_GL_pso
5, CUP_arifle_AK107_kobra
17, CUP_arifle_Mk16_CQC
18, CUP_arifle_Mk16_CQC_FG
15, CUP_arifle_Mk16_SV
17, CUP_arifle_AK47
18, CUP_arifle_AKM
5, CUP_arifle_AKS_Gold
10, CUP_arifle_Sa58P
7, CUP_arifle_Sa58P_des
8, CUP_arifle_Sa58RIS1
8, CUP_arifle_Sa58RIS2_gl
7, CUP_arifle_Sa58RIS2_camo
8, CUP_arifle_Sa58RIS2_Arco_Laser
16, CUP_srifle_Mk12SPR
15, hlc_rifle_ak12
11, hlc_rifle_ak47
10, hlc_rifle_ak74
10, hlc_rifle_akm
10, hlc_rifle_akmgl
13, hlc_rifle_bcmjack
13, hlc_rifle_Bushmaster300
13, hlc_rifle_Colt727_GL
10, hlc_rifle_honeybadger
15, hlc_rifle_rpk
14, hlc_rifle_RU556
13, hlc_rifle_RU5562
16, hlc_rifle_SAMR
14, hlc_rifle_samr2
15, hlc_rifle_vendimus
15, hlc_rifle_aug                         
15, hlc_rifle_auga1_t
15, hlc_rifle_auga1_B
15, hlc_rifle_auga1carb
15, hlc_rifle_auga1carb_t
15, hlc_rifle_auga1carb_b
15, hlc_rifle_aughbar
15, hlc_rifle_aughbar_b
15, hlc_rifle_aughbar_t
15, hlc_rifle_augpara
15, hlc_rifle_augpara_b
15, hlc_rifle_augpara_t
15, hlc_rifle_auga2
15, hlc_rifle_auga2_b
15, hlc_rifle_auga2_t
15, hlc_rifle_auga2carb
15, hlc_rifle_auga2carb_t
15, hlc_rifle_auga2carb_b
15, hlc_rifle_auga2lsw
15, hlc_rifle_auga2lsw_t
15, hlc_rifle_auga2lsw_b
15, hlc_rifle_auga2para
15, hlc_rifle_auga2para_b
15, hlc_rifle_auga2para_t
15, hlc_rifle_augsr
15, hlc_rifle_augsr_b
15, hlc_rifle_augsr_t
15, hlc_rifle_augsrcarb
15, hlc_rifle_augsrcarb_t
15, hlc_rifle_augsrcarb_b
15, hlc_rifle_augsrhbar
15, hlc_rifle_augsrhbar_b
15, hlc_rifle_augsrhbar_t
15, hlc_rifle_auga3
15, hlc_rifle_auga3_bl
15, hlc_rifle_auga3_b
15, hlc_rifle_auga3_GL
15, hlc_rifle_auga3_GL_BL
15, hlc_rifle_auga3_GL_B



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
12, hlc_30Rnd_545x39_B_AK
11, hlc_30Rnd_545x39_T_AK
10, hlc_30Rnd_545x39_EP_AK
11, hlc_30Rnd_762x39_b_ak
10, hlc_45Rnd_545x39_t_rpk
10, hlc_30rnd_556x45_EPR
11, hlc_30rnd_556x45_SOST
12, hlc_50rnd_556x45_EPR
10, hlc_30rnd_556x45_SPR
13, hlc_75Rnd_762x39_m_rpk
13, hlc_45Rnd_762x39_m_rpk
11, HLC_45rnd_762x39_T_RPK
12, 29rnd_300BLK_STANAG
13, 29rnd_300BLK_STANAG_T
13, hlc_30Rnd_556x45_B_AUG
11, hlc_30Rnd_556x45_SOST_AUG
11, hlc_40Rnd_556x45_B_AUG
10, hlc_40Rnd_556x45_SOST_AUG
13, hlc_30rnd_556x45_EPR_G36
14, hlc_30rnd_556x45_SOST_G36
13, hlc_100rnd_556x45_EPR_G36
12, hlc_30Rnd_9x19_B_MP5
11, hlc_30Rnd_9x19_GD_MP5




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
// 20, arifle_MX_SW_Black_F	// MX SW 6.5 mm (Black)
// 15, arifle_MX_SW_F			// MX SW 6.5 mm
// 15, LMG_Mk200_F				// Mk200 6.5 mm
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
13, hlc_lmg_m60
15, hlc_lmg_M60E4



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
14, hlc_100Rnd_762x51_B_M60E4
13, hlc_100Rnd_762x51_M_M60E4

> Snipers
28, srifle_DMR_01_F			// Rahim 7.62 mm
28, srifle_EBR_F			// Mk18 ABR 7.62 mm
//10, srifle_GM6_F			// GM6 Lynx 12.7 mm
//15, srifle_LRR_F			// M320 LRR .408
//15, srifle_LRR_tna_F    	// M320 LRR .408 (Tropic)
//10, srifle_GM6_ghex_F   	// GM6 Lynx 12.7 mm (Green Hex)
17, srifle_DMR_07_blk_F     // CMR-76 6.5 mm (Black)
17, srifle_DMR_07_hex_F     // CMR-76 6.5 mm (Hex)
17, srifle_DMR_07_ghex_F    // CMR-76 6.5 mm (Green Hex)
15, CUP_srifle_CZ750
20, CUP_srifle_VSSVintorez
25, CUP_srifle_M40A3
25, CUP_srifle_M24_wdl
25, CUP_srifle_M24_des
13, CUP_srifle_G22_des
5, CUP_srifle_AWM_wdl
5, CUP_srifle_AWM_des
26, CUP_srifle_SVD
20, srifle_DMR_03_F				//MK1EMR
20, srifle_DMR_03_khaki_F		//MK1EMR
20, srifle_DMR_03_tan_F			//MK1EMR
20, srifle_DMR_03_woodland_F		//MK1EMR
20, srifle_DMR_06_camo_F			//Mk14
20, srifle_DMR_06_olive_F		//Mk14
10, hlc_rifle_awcovert
13, hlc_rifle_awcovert_BL
12, hlc_rifle_awcovert_FDE
8, hlc_rifle_awmagnum
8, hlc_rifle_awmagnum_BL
5, hlc_rifle_awMagnum_FDE_ghillie
10, hlc_rifle_awMagnum_OD_ghillie


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
18, hlc_5rnd_300WM_FMJ_AWM
18, hlc_5rnd_300WM_AP_AWM
23, hlc_5rnd_300WM_mk248_AWM
15, hlc_5rnd_300WM_BTSP_AWM



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
10, srifle_GM6_F			// GM6 Lynx 12.7 mm
15, srifle_LRR_F			// M320 LRR .408
15, srifle_LRR_tna_F    	// M320 LRR .408 (Tropic)
10, srifle_GM6_ghex_F   	// GM6 Lynx 12.7 mm (Green Hex)

> DLCAmmo
//18, 150Rnd_93x64_Mag		//Navid
//25, 130Rnd_338_Mag			//SPMG
//16, 10Rnd_338_Mag			//MAR10
15, 20Rnd_762x51_Mag		//MK1EMR
10, 10Rnd_127x54_Mag		//ASP1KIR
//16, 10Rnd_93x64_DMR_05_Mag	//CYRUS

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
8, CUP_glaunch_M32


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
6, CUP_6Rnd_HE_M203

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
30, CUP_6Rnd_HE_M203

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
// WinterGear
///////////////////////////////////////////////////////////////////////////////

> WinterGearCivilian

> WinterGearMilitary
1, TRYK_Winter_pack
1, TRYK_B_Coyotebackpack_WH
1, TRYK_V_ArmorVest_Winter
1, TRYK_H_Helmet_Winter
1, TRYK_H_Helmet_Winter_2
1, TRYK_U_B_Snow_CombatUniform
1, TRYK_U_B_Snowt
1, TRYK_U_B_PCUHsW
1, TRYK_U_B_PCUHsW2
1, TRYK_U_B_PCUHsW3nh
1, TRYK_U_B_PCUHsW4
1, TRYK_U_B_PCUHsW5
1, TRYK_U_B_PCUHsW6 


///////////////////////////////////////////////////////////////////////////////
// TRYK Gear
///////////////////////////////////////////////////////////////////////////////
//Glasses
// TRYK_US_ESS_Glasses
// TRYK_US_ESS_Glasses_WH
// TRYK_US_ESS_Glasses_BLK
// TRYK_US_ESS_Glasses_TAN
// TRYK_US_ESS_Glasses_TAN_BLK
// TRYK_SPGEAR_Glasses
// TRYK_headset_Glasses
// TRYK_SpsetG_Glasses
// TRYK_Spset_PHC1_Glasses
// TRYK_Spset_PHC2_Glasses
// TRYK_US_ESS_Glasses_H
// TRYK_US_ESS_Glasses_Cover
// TRYK_headset_glasses
// TRYK_headset2_glasses

//Glasses w/NVGS built in
// TRYK_US_ESS_Glasses_NV
// TRYK_US_ESS_Glasses_TAN_NV
// TRYK_ESS_BLKTAN_NV
// TRYK_ESS_BLKBLK_NV
// TRYK_G_Shades_Black_NV
// TRYK_G_Shades_Blue_NV
// TRYK_G_bala_ess_NV
// TRYK_bandana_NV
// TRYK_SPgearG_NV
// TRYK_SPgear_PHC1_NV
// TRYK_SPgear_PHC2_NV
// TRYK_G_bala_wh_NV
// TRYK_ESS_wh_NV

//HeadGear
> TRYKHeadgear
5, TRYK_ESS_CAP_OD
5, TRYK_ESS_CAP_tan
5, TRYK_R_CAP_BLK
5, TRYK_R_CAP_TAN
5, TRYK_R_CAP_OD_US
5, TRYK_r_cap_tan_Glasses
5, TRYK_r_cap_blk_Glasses
5, TRYK_r_cap_od_Glasses
5, TRYK_H_headsetcap_Glasses
5, TRYK_H_headsetcap_blk_Glasses
5, TRYK_H_headsetcap_od_Glasses
5, TRYK_TAC_EARMUFF_SHADE
5, TRYK_TAC_EARMUFF
5, TRYK_NOMIC_TAC_EARMUFF
5, TRYK_headset2
5, TRYK_TAC_EARMUFF_Gs
5, TRYK_TAC_SET_bn
5, TRYK_NOMIC_TAC_EARMUFF_Gs
5, TRYK_TAC_EARMUFF_SHADE_Gs
5, TRYK_TAC_SET_TAN
5, TRYK_TAC_SET_OD
4, TRYK_TAC_SET_WH
5, TRYK_TAC_SET_MESH
5, TRYK_TAC_SET_TAN_2
5, TRYK_TAC_SET_OD_2
5, TRYK_TAC_SET_WH_2
5, TRYK_TAC_SET_MESH_2
5, TRYK_bandana_g
5, TRYK_H_PASGT_BLK
5, TRYK_H_PASGT_OD
5, TRYK_H_PASGT_COYO
5, TRYK_H_PASGT_TAN
5, TRYK_H_Helmet_Snow
5, TRYK_H_WH
5, TRYK_H_GR
5, TRYK_H_AOR1
5, TRYK_H_AOR2
5, TRYK_H_EARMUFF
5, TRYK_H_TACEARMUFF_H
5, TRYK_H_Bandana_H
5, TRYK_H_Bandana_wig
5, TRYK_H_Bandana_wig_g
5, TRYK_H_wig
5, TRYK_H_headset2
5, TRYK_H_woolhat
5, TRYK_H_woolhat_CW
5, TRYK_H_woolhat_WH
5, TRYK_H_woolhat_br
5, TRYK_H_woolhat_cu
5, TRYK_H_woolhat_tan
5, TRYK_H_headsetcap
5, TRYK_H_headsetcap_blk
5, TRYK_H_headsetcap_od
5, TRYK_H_pakol
5, TRYK_H_pakol2
4, TRYK_H_LHS_HEL_G
2, TRYK_H_Helmet_Winter
2, TRYK_H_Helmet_Winter_2

//HeadGear w/NVGS built in
// TRYK_Headphone_NV
// TRYK_HRPIGEAR_NV
// TRYK_Headset_NV
// TRYK_TAC_boonie_SET_NV
// TRYK_TAC_SET_NV_TAN
// TRYK_TAC_SET_NV_OD
// TRYK_TAC_SET_NV_WH
// TRYK_TAC_SET_NV_MESH
// TRYK_TAC_SET_NV_TAN_2
// TRYK_TAC_SET_NV_OD_2
// TRYK_TAC_SET_NV_WH_2
// TRYK_TAC_SET_NV_MESH_2
// TRYK_H_DELTAHELM_NV

//NeckGear
> TRYKNeckGear
5, TRYK_Shemagh_shade_MESH
5, TRYK_Shemagh_shade_N
5, TRYK_Shemagh_shade_G_N
5, TRYK_Shemagh_shade_WH_N
5, TRYK_kio_balaclava_WH
5, TRYK_kio_balaclava_BLK
5, TRYK_kio_balaclavas
5, TRYK_kio_balaclava_BLK_ear
5, TRYK_kio_balaclava_ear
5, TRYK_kio_balaclava_ESS
5, TRYK_Shemagh
5, TRYK_Shemagh_mesh
5, TRYK_Shemagh_G
5, TRYK_Shemagh_WH
5, TRYK_Shemagh_shade
5, TRYK_Shemagh_shade_G
5, TRYK_Shemagh_shade_WH
5, TRYK_Shemagh_shade_MH
5, TRYK_Shemagh_ESS
5, TRYK_Shemagh_ESS_G
5, TRYK_Shemagh_ESS_WH
5, TRYK_Shemagh_EAR_TAN
5, TRYK_Shemagh_EAR_WH

//NeckGear w/NVGS built in
// TRYK_balaclava_BLACK_NV
// TRYK_balaclava_NV
// TRYK_balaclava_BLACK_EAR_NV
// TRYK_balaclava_EAR_NV
// TRYK_Shemagh_TAN_NV
// TRYK_Shemagh_MESH_NV
// TRYK_Shemagh_G_NV
// TRYK_Shemagh_WH_NV
// TRYK_Shemagh_EAR_NV
// TRYK_Shemagh_EAR_G_NV
// TRYK_Shemagh_EAR_WH_NV
// TRYK_ShemaghESSTAN_NV
// TRYK_ShemaghESSOD_NV
// TRYK_ShemaghESSWH_NV

//Uniforms
> TRYKMilitaryClothing
5, TRYK_HRP_UCP
5, TRYK_HRP_USMC
5, TRYK_HRP_khk
5, TRYK_U_B_OD_OD_CombatUniform
5, TRYK_U_B_OD_OD_R_CombatUniform
5, TRYK_U_B_TANTAN_CombatUniform
5, TRYK_U_B_TANTAN_R_CombatUniform
5, TRYK_U_B_BLKBLK_CombatUniform
5, TRYK_U_B_BLKBLK_R_CombatUniform
5, TRYK_U_B_GRYOCP_CombatUniform
5, TRYK_U_B_GRYOCP_R_CombatUniformTshirt
5, TRYK_U_B_TANOCP_CombatUniform
5, TRYK_U_B_TANOCP_R_CombatUniformTshirt
5, TRYK_U_B_BLKOCP_CombatUniform
5, TRYK_U_B_BLKOCP_R_CombatUniformTshirt
5, TRYK_U_B_BLKTAN_CombatUniform
5, TRYK_U_B_BLKTANR_CombatUniformTshirt
5, TRYK_U_B_ODTAN_CombatUniform
5, TRYK_U_B_ODTANR_CombatUniformTshirt
5, TRYK_U_B_GRTAN_CombatUniform
5, TRYK_U_B_GRTANR_CombatUniformTshirt
5, TRYK_U_B_wood_CombatUniform
5, TRYK_U_B_woodR_CombatUniformTshirt
5, TRYK_U_B_wood3c_CombatUniform
5, TRYK_U_B_wood3c_CombatUniformTshirt
8, TRYK_U_B_MARPAT_WOOD_CombatUniform
8, TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt
8, TRYK_U_B_WOOD_MARPAT_CombatUniform
5, TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt
5, TRYK_U_B_woodtan_CombatUniform
5, TRYK_U_B_woodtanR_CombatUniformTshirt
5, TRYK_U_B_JSDF_CombatUniform
5, TRYK_U_B_JSDF_CombatUniformTshirt
5, TRYK_U_B_3CD_Delta_BDU
5, TRYK_U_B_3CD_Delta_BDUTshirt
5, TRYK_U_B_3CD_Ranger_BDU
5, TRYK_U_B_3CD_Ranger_BDUTshirt
5, TRYK_U_B_wh_tan_Rollup_CombatUniform
5, TRYK_U_B_wh_OD_Rollup_CombatUniform
5, TRYK_U_B_wh_blk_Rollup_CombatUniform
5, TRYK_U_B_BLK_tan_Rollup_CombatUniform
5, TRYK_U_B_BLK_OD_Rollup_CombatUniform
5, TRYK_U_B_NATO_UCP_GRY_CombatUniform
5, TRYK_U_B_NATO_UCP_GRY_R_CombatUniform
5, TRYK_U_B_NATO_UCP_CombatUniform
5, TRYK_U_B_NATO_UCP_R_CombatUniform
5, TRYK_U_B_NATO_OCP_c_BLK_CombatUniform
5, TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform
5, TRYK_U_B_NATO_OCP_BLK_CombatUniform
5, TRYK_U_B_NATO_OCP_BLK_R_CombatUniform
5, TRYK_U_B_NATO_OCPD_CombatUniform
5, TRYK_U_B_NATO_OCPD_R_CombatUniform
5, TRYK_U_B_NATO_OCP_CombatUniform
5, TRYK_U_B_NATO_OCP_R_CombatUniform
5, TRYK_U_B_AOR1_Rollup_CombatUniform
5, TRYK_U_B_AOR2_Rollup_CombatUniform
5, TRYK_U_B_MTP_CombatUniform
5, TRYK_U_B_MTP_R_CombatUniform
5, TRYK_U_B_MTP_BLK_CombatUniform
5, TRYK_U_B_MTP_BLK_R_CombatUniform
5, TRYK_U_B_Woodland
5, TRYK_U_B_Woodland_Tshirt
5, TRYK_U_B_WDL_GRY_CombatUniform
5, TRYK_U_B_WDL_GRY_R_CombatUniform
5, TRYK_U_B_ARO1_GR_CombatUniform
5, TRYK_U_B_ARO1_GR_R_CombatUniform
5, TRYK_U_B_ARO1_GRY_CombatUniform
5, TRYK_U_B_ARO1_GRY_R_CombatUniform
5, TRYK_U_B_ARO1_CombatUniform
5, TRYK_U_B_ARO1R_CombatUniform
5, TRYK_U_B_ARO1_BLK_CombatUniform
5, TRYK_U_B_ARO1_BLK_R_CombatUniform
5, TRYK_U_B_ARO1_CBR_CombatUniform
5, TRYK_U_B_ARO1_CBR_R_CombatUniform
5, TRYK_U_B_ARO2_CombatUniform
5, TRYK_U_B_ARO2R_CombatUniform
5, TRYK_U_B_AOR2_BLK_CombatUniform
5, TRYK_U_B_AOR2_BLK_R_CombatUniform
5, TRYK_U_B_AOR2_OD_CombatUniform
5, TRYK_U_B_AOR2_OD_R_CombatUniform
5, TRYK_U_B_AOR2_GRY_CombatUniform
5, TRYK_U_B_AOR2_GRY_R_CombatUniform
5, TRYK_U_B_Snow_CombatUniform
5, TRYK_U_B_Snowt
5, TRYK_T_camo_tan
5, TRYK_T_camo_3c
5, TRYK_T_camo_Wood
5, TRYK_T_camo_wood_marpat
5, TRYK_T_camo_Desert_marpat
5, TRYK_T_camo_3c_BG
5, TRYK_T_camo_Wood_BG
5, TRYK_T_camo_wood_marpat_BG
5, TRYK_T_camo_desert_marpat_BG
3, TRYK_H_ghillie_over
3, TRYK_H_ghillie_top
3, TRYK_H_ghillie_top_headless
3, TRYK_H_ghillie_over_green
3, TRYK_H_ghillie_top_green
3, TRYK_H_ghillie_top_headless_green
8, TRYK_U_B_MARPAT_Wood
6, TRYK_U_B_MARPAT_Wood_Tshirt
6, TRYK_U_B_MARPAT_Desert
6, TRYK_U_B_MARPAT_Desert_Tshirt
6, TRYK_U_B_MARPAT_Desert2
6, TRYK_U_B_MARPAT_Desert2_Tshirt


//TRYKUniformsCivilian/////////
////////////////////////////////

> TRYKCivilianClothing
5,TRYK_U_B_3CD_BLK_BDUTshirt
5,TRYK_U_B_3CD_BLK_BDUTshirt2
5, TRYK_U_B_ACU
5, TRYK_U_B_ACUTshirt
5, TRYK_U_B_3c
5, TRYK_U_B_3cr
5, TRYK_U_B_Sage_Tshirt
5, TRYK_U_B_BLK3CD
5, TRYK_U_B_BLK3CD_Tshirt
5, TRYK_U_B_BLK
5, TRYK_U_B_BLK_Tshirt
5, TRYK_U_B_BLKTAN
5, TRYK_U_B_BLKTAN_Tshirt
5, TRYK_U_B_ODTAN
5, TRYK_U_B_ODTAN_Tshirt
5, TRYK_U_B_BLK_OD
5, TRYK_U_B_BLK_OD_Tshirt
5, TRYK_U_B_C01_Tsirt
5, TRYK_U_B_C02_Tsirt
5, TRYK_U_B_OD_BLK
5, TRYK_U_B_OD_BLK_2
5, TRYK_U_B_BLK_TAN_1
5, TRYK_U_B_BLK_TAN_2
5, TRYK_U_B_Denim_T_WH
5, TRYK_U_B_Denim_T_BK
5, TRYK_U_B_BLK_T_WH
5, TRYK_U_B_BLK_T_BK
5, TRYK_U_B_RED_T_BR
5, TRYK_U_B_Denim_T_BG_WH
5, TRYK_U_B_Denim_T_BG_BK
5, TRYK_U_B_BLK_T_BG_WH
5, TRYK_U_B_BLK_T_BG_BK
5, TRYK_U_B_RED_T_BG_BR
5, TRYK_U_B_fleece
5, TRYK_U_B_fleece_UCP
5, TRYK_U_B_UCP_PCUs
5, TRYK_U_B_GRY_PCUs
5, TRYK_U_B_Wood_PCUs
5, TRYK_U_B_PCUs
5, TRYK_U_B_UCP_PCUs_R
5, TRYK_U_B_GRY_PCUs_R
5, TRYK_U_B_Wood_PCUs_R
5, TRYK_U_B_PCUs_R
5, TRYK_U_B_PCUGs
5, TRYK_U_B_PCUODs
5, TRYK_U_B_PCUGs_gry
5, TRYK_U_B_PCUGs_BLK
5, TRYK_U_B_PCUGs_OD
5, TRYK_U_B_PCUGs_gry_R
5, TRYK_U_B_PCUGs_BLK_R
5, TRYK_U_B_PCUGs_OD_R
5, TRYK_U_Bts_GRYGRY_PCUs
5, TRYK_U_Bts_UCP_PCUs
5, TRYK_U_Bts_Wood_PCUs
5, TRYK_U_Bts_PCUs
5, TRYK_U_pad_j
5, TRYK_U_pad_j_blk
5, TRYK_U_pad_hood_Cl
5, TRYK_U_pad_hood_Cl_blk
5, TRYK_U_pad_hood_tan
5, TRYK_U_pad_hood_Blk
5, TRYK_U_pad_hood_CSATBlk
5, TRYK_U_pad_hood_Blod
5, TRYK_U_pad_hood_odBK
5, TRYK_U_pad_hood_BKT2
5, TRYK_hoodie_Blk
5, TRYK_hoodie_FR
5, TRYK_hoodie_Wood
5, TRYK_hoodie_3c
5, TRYK_T_PAD
5, TRYK_T_OD_PAD
5, TRYK_T_TAN_PAD
5, TRYK_T_BLK_PAD
5, TRYK_T_T2_PAD
5, TRYK_T_CSAT_PAD
5, TRYK_U_nohoodPcu_gry
5, TRYK_U_hood_nc
5, TRYK_U_hood_mc
5, TRYK_U_denim_hood_blk
5, TRYK_U_denim_hood_mc
5, TRYK_U_denim_hood_3c
5, TRYK_U_denim_hood_nc
5, TRYK_U_denim_jersey_blu
5, TRYK_U_denim_jersey_blk
5, TRYK_shirts_PAD
5, TRYK_shirts_OD_PAD
5, TRYK_shirts_TAN_PAD
5, TRYK_shirts_BLK_PAD
5, TRYK_shirts_PAD_BK
5, TRYK_shirts_OD_PAD_BK
5, TRYK_shirts_TAN_PAD_BK
5, TRYK_shirts_BLK_PAD_BK
5, TRYK_shirts_PAD_BLW
5, TRYK_shirts_OD_PAD_BLW
5, TRYK_shirts_TAN_PAD_BLW
5, TRYK_shirts_BLK_PAD_BLW
5, TRYK_shirts_PAD_YEL
5, TRYK_shirts_OD_PAD_YEL
5, TRYK_shirts_TAN_PAD_YEL
5, TRYK_shirts_BLK_PAD_YEL
5, TRYK_shirts_PAD_RED2
5, TRYK_shirts_OD_PAD_RED2
5, TRYK_shirts_TAN_PAD_RED2
5, TRYK_shirts_BLK_PAD_RED2
5, TRYK_shirts_PAD_BLU3
5, TRYK_shirts_OD_PAD_BLU3
5, TRYK_shirts_TAN_PAD_BLU3
5, TRYK_shirts_BLK_PAD_BLU3
5, TRYK_shirts_DENIM_R
5, TRYK_shirts_DENIM_BL
5, TRYK_shirts_DENIM_BK
5, TRYK_shirts_DENIM_WH
5, TRYK_shirts_DENIM_BWH
5, TRYK_shirts_DENIM_RED2
5, TRYK_shirts_DENIM_WHB
5, TRYK_shirts_DENIM_ylb
5, TRYK_shirts_DENIM_od
5, TRYK_shirts_DENIM_R_Sleeve
5, TRYK_shirts_DENIM_BL_Sleeve
5, TRYK_shirts_DENIM_BK_Sleeve
5, TRYK_shirts_DENIM_WH_Sleeve
5, TRYK_shirts_DENIM_BWH_Sleeve
5, TRYK_shirts_DENIM_RED2_Sleeve
5, TRYK_shirts_DENIM_WHB_Sleeve
5, TRYK_shirts_DENIM_ylb_Sleeve
5, TRYK_shirts_DENIM_od_Sleeve
5, TRYK_shirts_PAD_BL
5, TRYK_shirts_OD_PAD_BL
5, TRYK_shirts_TAN_PAD_BL
5, TRYK_shirts_BLK_PAD_BL
5, TRYK_U_taki_wh
5, TRYK_U_taki_COY
5, TRYK_U_taki_BL
5, TRYK_U_taki_BLK
5, TRYK_U_Bts_PCUGs
5, TRYK_U_Bts_PCUODs
5, TRYK_U_taki_G_WH
5, TRYK_U_taki_G_COY
5, TRYK_U_taki_G_BL
5, TRYK_U_taki_G_BLK
5, TRYK_U_B_PCUHs
5, TRYK_U_B_PCUGHs
5, TRYK_U_B_PCUODHs
5, TRYK_B_USMC_R
5, TRYK_B_USMC_R_ROLL
5, TRYK_ZARATAKI
5, TRYK_ZARATAKI2
5, TRYK_ZARATAKI3
5, TRYK_B_TRYK_UCP_T
5, TRYK_B_TRYK_3C_T
5, TRYK_B_TRYK_MTP_T
5, TRYK_B_TRYK_OCP_T
5, TRYK_B_TRYK_OCP_D_T
5, TRYK_DMARPAT_T
5, TRYK_C_AOR2_T
5, TRYK_U_B_Sage_T
5, TRYK_U_B_Wood_T
5, TRYK_U_B_BLTAN_T
5, TRYK_U_B_BLOD_T
5, TRYK_OVERALL_flesh
5, TRYK_OVERALL_nok_flesh
5, TRYK_OVERALL_SAGE_BLKboots
5, TRYK_OVERALL_SAGE_BLKboots_nk_blk
5, TRYK_OVERALL_SAGE_BLKboots_nk
5, TRYK_OVERALL_SAGE_BLKboots_nk_blk2
5, TRYK_OVERALL_SAGE
5, TRYK_SUITS_BLK_F
5, TRYK_SUITS_BR_F
5, TRYK_shoulder_armor_BK
5, TRYK_shoulder_armor_OD
5, TRYK_shoulder_armor_CY


//Vests
> TRYKMilitaryVests
5, TRYK_V_PlateCarrier_blk
5, TRYK_V_PlateCarrier_oli
5, TRYK_V_PlateCarrier_coyo
7, TRYK_V_PlateCarrier_wood
5, TRYK_V_PlateCarrier_ACU
5, TRYK_V_PlateCarrier_blk_L
5, TRYK_V_PlateCarrier_wood_L
5, TRYK_V_PlateCarrier_ACU_L
5, TRYK_V_PlateCarrier_coyo_L
5, TRYK_V_Bulletproof
5, TRYK_V_Bulletproof_BLK
5, TRYK_V_Bulletproof_BL
5, TRYK_V_IOTV_BLK
5, TRYK_V_tacv1M_BK
5, TRYK_V_tacv1MLC_BK
5, TRYK_V_tacv1
5, TRYK_V_tacv1_CY
5, TRYK_V_tacv1_BK
5, TRYK_V_tacv1_P_BK
5, TRYK_V_tacv1_SHERIFF_BK
5, TRYK_V_tacv1_FBI_BK
5, TRYK_V_tacv1LP_BK
5, TRYK_V_tacv1LSRF_BK
5, TRYK_V_tacv1LC_BK
5, TRYK_V_tacv1LC_CY
5, TRYK_V_tacv1LC_OD
5, TRYK_V_tacv1LC_FBI_BK
5, TRYK_V_tacv1LC_SRF_BK
5, TRYK_V_tacv1LC_SRF_OD
5, TRYK_V_tacv1LC_P_BK
5, TRYK_V_PlateCarrier_POLICE
5, TRYK_V_ArmorVest_HRT_B
5, TRYK_V_ArmorVest_HRT_OD
5, TRYK_V_ArmorVest_HRT2_B
5, TRYK_V_ArmorVest_HRT2_OD
8, TRYK_V_ArmorVest_Winter
5, TRYK_V_PlateCarrier_JSDF

> TRYKCivilianVests
12, TRYK_Hrp_vest_ucp
13, TRYK_Hrp_vest_od
5, TRYK_V_ArmorVest_AOR1
5, TRYK_V_ArmorVest_AOR2
5, TRYK_V_ArmorVest_coyo
5, TRYK_V_ArmorVest_Brown
5, TRYK_V_ArmorVest_CBR
5, TRYK_V_ArmorVest_khk
5, TRYK_V_ArmorVest_rgr
5, TRYK_V_ArmorVest_green
5, TRYK_V_ArmorVest_tan
5, TRYK_V_ArmorVest_Delta
5, TRYK_V_ArmorVest_Ranger
5, TRYK_V_ArmorVest_AOR1_2
5, TRYK_V_ArmorVest_AOR2_2
5, TRYK_V_ArmorVest_coyo2
5, TRYK_V_ArmorVest_Brown2
5, TRYK_V_ArmorVest_cbr2
5, TRYK_V_ArmorVest_khk2
5, TRYK_V_ArmorVest_rgr2
5, TRYK_V_ArmorVest_green2
5, TRYK_V_ArmorVest_tan2
5, TRYK_V_ArmorVest_Delta2
5, TRYK_V_ArmorVest_Ranger2
5, TRYK_V_TacVest_coyo
5, TRYK_V_harnes_blk_L
5, TRYK_V_harnes_od_L
5, TRYK_V_harnes_TAN_L
5, TRYK_V_ChestRig_L
5, TRYK_V_ChestRig
5, TRYK_V_Sheriff_BA_OD
5, TRYK_V_tacv10_BK
5, TRYK_V_tacv10_OD
5, TRYK_V_tacv10_TN
5, TRYK_V_tacv10LC_BK
5, TRYK_V_tacv10LC_OD
5, TRYK_V_tacv10LC_TN
5, TRYK_V_tacv1L_BK
5, TRYK_V_tacv1L_OD
5, TRYK_V_tacv1L_CY
5, TRYK_V_tacv1LC_FBI2_BK
5, TRYK_V_tacv1LC_SRF2_BK
5, TRYK_V_tacv1LC_SRF2_OD
5, TRYK_V_tacv1LC_P2_BK
5, TRYK_V_tacv1_MSL_BK
5, TRYK_V_tacv1_MSL_NV
5, TRYK_V_tacv1LMSL_BK
5, TRYK_V_tacv1LMSL_NV
5, TRYK_V_tacv1LC_MSL_BK
5, TRYK_V_tacv1LC_MSL_NV
5, TRYK_V_tacSVD_BK
5, TRYK_V_tacSVD_OD
5, TRYK_V_Sheriff_BA_TL
5, TRYK_V_Sheriff_BA_TBL
5, TRYK_V_Sheriff_BA_TCL
5, TRYK_V_Sheriff_BA_TL2
5, TRYK_V_Sheriff_BA_TBL2
5, TRYK_V_Sheriff_BA_TCL2
5, TRYK_V_Sheriff_BA_T
10, TRYK_V_Sheriff_BA_TB
7, TRYK_V_Sheriff_BA_T2
7, TRYK_V_Sheriff_BA_TB2
7, TRYK_V_Sheriff_BA_T3
5, TRYK_V_Sheriff_BA_TB3
5, TRYK_V_Sheriff_BA_T4
5, TRYK_V_Sheriff_BA_TB4
5, TRYK_V_Sheriff_BA_T5
5, TRYK_V_Sheriff_BA_TB5
5, TRYK_V_Sheriff_BA_TBL3_BK
5, TRYK_V_Sheriff_BA_TBL3_OD
5, TRYK_V_Sheriff_BA_TBL3_TN
12, TRYK_LOC_AK_chestrig_OD
8, TRYK_LOC_AK_chestrig_TAN

//BackPacks
> TRYKMilitaryBackpacks
10, TRYK_Winter_pack
5, TRYK_B_Carryall_blk
5, TRYK_B_Carryall_wh
5, TRYK_B_Carryall_wood
5, TRYK_B_Carryall_JSDF
5, TRYK_B_Coyotebackpack
5, TRYK_B_Coyotebackpack_OD
5, TRYK_B_Coyotebackpack_BLK
10, TRYK_B_Coyotebackpack_WH

> TRYKCivilianBackpacks
10, TRYK_B_AssaultPack_UCP
10, TRYK_B_AssaultPack_Type2camo
5, TRYK_B_AssaultPack_MARPAT_Desert
5, TRYK_B_AssaultPack_MARPAT_Wood
15, TRYK_B_Kitbag_Base
15, TRYK_B_Kitbag_blk
13, TRYK_B_Kitbag_aaf
12, TRYK_B_Kitbag_Base_JSDF
5, TRYK_B_Coyotebackpack
5, TRYK_B_Coyotebackpack_OD
5, TRYK_B_Coyotebackpack_BLK
3, TRYK_B_Coyotebackpack_WH
12, TRYK_B_Alicepack
8, TRYK_B_Medbag
8, TRYK_B_Medbag_OD
8, TRYK_B_Medbag_BK
8, TRYK_B_Medbag_ucp
15, TRYK_B_Belt
12, TRYK_B_Belt_BLK
13, TRYK_B_Belt_CYT
12, TRYK_B_Belt_tan
12, TRYK_B_Belt_br
12, TRYK_B_Belt_GR
11, TRYK_B_Belt_AOR1
11, TRYK_B_Belt_AOR2
12, TRYK_B_BAF_BAG_BLK
11, TRYK_B_BAF_BAG_CYT
11, TRYK_B_BAF_BAG_OD
8, TRYK_B_BAF_BAG_rgr
9, TRYK_B_BAF_BAG_mcamo
13, TRYK_B_tube_cyt
10, TRYK_B_tube_od
10, TRYK_B_tube_blk
12, TRYK_B_FieldPack_Wood


//Civilian//

> BarnCustom
30, ItemWatch
15, ItemRadio
30, Binocular
25, Exile_Item_Heatpack
35, ItemMap
5, Exile_Item_MobilePhone
30, ItemCompass
15, Chemlight_blue
15, Chemlight_green
15, Chemlight_red
15, Chemlight_yellow
15, FlareGreen_F
15, FlareRed_F
15, FlareWhite_F
15, FlareYellow_F
15, SmokeShell
15, SmokeShellRed
15, SmokeShellGreen
15, SmokeShellYellow
15, SmokeShellPurple
15, SmokeShellBlue
15, SmokeShellOrange
10, Exile_Melee_Axe
15, Exile_Item_Rope
18, Exile_Item_CamoTentKit
25, Exile_Item_Bandage
10, Exile_Item_ZipTie
10, Exile_Item_FuelCanisterFull
20, Exile_Item_FuelCanisterEmpty
15, Exile_Item_OilCanister
20, Exile_Item_Carwheel
23, Exile_Item_ExtensionCord
18, Exile_Item_WaterCanisterEmpty
15, Exile_Item_Hammer
10, Exile_Item_Wrench
20, Exile_Item_DuctTape

> CivilianItems
50, ItemWatch
30, ItemRadio
5, ItemGPS
30, Binocular
40, Exile_Item_Heatpack
35, ItemMap
5, Exile_Item_MobilePhone
30, ItemCompass

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