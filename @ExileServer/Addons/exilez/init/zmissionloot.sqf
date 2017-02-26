// ExileZ 2.0 by Patrix87 of http:\\multi-jeux.quebec //

Private [
"_lootqte",
"_maxOfEach",
"_position",
"_items",
"_item",
"_cargoBox",
"_lootBox",
"_antiflag"
];

_lootqte = 20;
_maxOfEach = 1;
_position = _this select 0;

_items =[
"optic_Arco",
"optic_Hamr",
"optic_Aco",
"optic_ACO_grn",
"optic_Aco_smg",
"optic_ACO_grn_smg",
"optic_Holosight",
"optic_Holosight_smg",
"optic_SOS",
"optic_MRCO",
"optic_NVS",
"optic_DMS",
"optic_Yorris",
"optic_MRD",
"optic_LRPS",
"optic_AMS",
"optic_AMS_khk",
"optic_AMS_snd",
"optic_KHS_blk",
"optic_KHS_hex",
"optic_KHS_old",
"optic_KHS_tan",
"optic_Arco_blk_F",
"optic_Arco_ghex_F",
"optic_DMS_ghex_F",
"optic_Hamr_khk_F",
"optic_ERCO_blk_F",
"optic_ERCO_khk_F",
"optic_ERCO_snd_F",
"optic_SOS_khk_F",
"optic_LRPS_tna_F",
"optic_LRPS_ghex_F",
"optic_Holosight_blk_F",
"optic_Holosight_khk_F",
"optic_Holosight_smg_blk_F",
"CUP_optic_PSO_1",
"CUP_optic_PSO_3",
"CUP_optic_Kobra",
"CUP_optic_NSPU",
"CUP_optic_PechenegScope",
"CUP_optic_SB_3_12x50_PMII",
"CUP_optic_LeupoldMk4",
"CUP_optic_HoloBlack",
"CUP_optic_HoloWdl",
"CUP_optic_HoloDesert",
"CUP_optic_Eotech533",
"CUP_optic_Eotech533Grey",
"CUP_optic_CompM4",
"CUP_optic_SUSAT",
"CUP_optic_ACOG",
"CUP_optic_Leupold_VX3",
"CUP_optic_AN_PVS_10",
"CUP_optic_CompM2_Black",
"CUP_optic_CompM2_Woodland",
"CUP_optic_CompM2_Woodland2",
"CUP_optic_CompM2_Desert",
"CUP_optic_RCO",
"CUP_optic_RCO_desert",
"CUP_optic_LeupoldM3LR",
"CUP_optic_LeupoldMk4_10x40_LRT_Desert",
"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
"CUP_optic_ElcanM145",
"CUP_optic_LeupoldMk4_CQ_T",
"CUP_optic_ELCAN_SpecterDR",
"CUP_optic_LeupoldMk4_MRT_tan",
"CUP_optic_SB_11_4x20_PM",
"CUP_optic_ZDDot",
"CUP_optic_MRad",
"CUP_optic_TrijiconRx01_desert",
"CUP_optic_TrijiconRx01_blac",
"CUP_optic_AN_PVS_4",
"CUP_optic_Elcan",
"CUP_optic_Elcan_reflex",
"HLC_Optic_PSO1",
"HLC_Optic_1p29",
"hlc_optic_kobra",
"hlc_optic_suit",
"hlc_optic_PVS4FAL",
"HLC_Optic_G36dualoptic35x",
"HLC_Optic_G36dualoptic35x2d",
"HLC_Optic_G36Export35x",
"HLC_Optic_G36Export35x2d",
"HLC_Optic_G36Dualoptic15x",
"HLC_Optic_G36Dualoptic15x2d",
"HLC_Optic_G36Export15x",
"HLC_Optic_G36Export15x2d",
"HLC_Optic_ZFSG1",
"hlc_optic_accupoint_g3",
"hlc_optic_PVS4G3",
"hlc_optic_artel_m14",
"hlc_optic_PVS4M14",
"hlc_optic_LRT_m14",
"hlc_optic_Kern",
"hlc_optic_Kern2d"
];


_cargoBox = [

"B_CargoNet_01_ammo_F",
"O_CargoNet_01_ammo_F",
"I_CargoNet_01_ammo_F"
	
] call BIS_fnc_selectRandom;
	
	
/* DON'T EDIT BELOW ADVANCED USERS ONLY */
//////////////////////////////////////////


_lootBox = _cargoBox createvehicle _position;
_antiflag = "Exile_Construction_Flag_Static" createvehicle _position;

clearMagazineCargoGlobal _lootBox;
clearWeaponCargoGlobal _lootBox;
clearItemCargoGlobal _lootBox;
_lootBox enableRopeAttach false;
_lootBox setVariable ["permaLoot",true];
_lootBox allowDamage false;

for "_i" from 1 to _lootqte do {
	_item = _items call BIS_fnc_selectRandom;
	_lootBox addItemCargoGlobal [_item, (ceil random _maxOfEach)];
};
