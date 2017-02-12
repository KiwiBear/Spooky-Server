/**
 * ExileClient_object_player_stats_updateTemperature
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_timeElapsed","_forcedBodyTemperatureChangePerMinute","_wetnessChangePerMinute","_altitude","_isSwimming","_bodyTemperature","_bodyWetness","_temperatureConfig","_fromDayTimeTemperature","_toDayTimeTemperature","_environmentTemperature","_isFireNearby","_startPosition","_endPosition","_intersections","_isBelowRoof","_clothingColdProtection","_movementInfluence","_regulation","_environmentInfluence"];
_timeElapsed = _this;
_forcedBodyTemperatureChangePerMinute = 0;
_wetnessChangePerMinute = -0.1;
_altitude = ((getPosASL player) select 2) max 0;
_isSwimming = (_altitude < 0.1) || (underwater player);
_bodyTemperature = ExileClientPlayerAttributes select 5;
_bodyWetness = ExileClientPlayerAttributes select 6;
_temperatureConfig = missionConfigFile >> "CfgExileEnvironment" >> worldName >> "Temperature";
_fromDayTimeTemperature = (getArray (_temperatureConfig >> "daytimeTemperature")) select (date select 3);
_toDayTimeTemperature = (getArray (_temperatureConfig >> "daytimeTemperature")) select ((date select 3) + 1); 
_environmentTemperature = [_fromDayTimeTemperature, _toDayTimeTemperature, (date select 4) / 60] call ExileClient_util_math_lerp;
_environmentTemperature = _environmentTemperature + overcast * (getNumber (_temperatureConfig >> "overcast"));
_environmentTemperature = _environmentTemperature + rain * (getNumber (_temperatureConfig >> "rain"));
_environmentTemperature = _environmentTemperature + windStr * (getNumber (_temperatureConfig >> "wind"));
_environmentTemperature = _environmentTemperature + _altitude / 100 * (getNumber (_temperatureConfig >> "altitude"));
if (_isSwimming) then 
{
	_environmentTemperature = _environmentTemperature + (getNumber (_temperatureConfig >> "water"));
};
ExileClientEnvironmentTemperature = _environmentTemperature;
_playerIsInVehicle = false;
_playerVehicle = vehicle player;
if !(_playerVehicle isEqualTo player) then 
{
	try 
	{
		if (_playerVehicle isKindOf "Exile_Bike_QuadBike_Abstract") throw false;
		if (_playerVehicle isKindOf "Exile_Bike_OldBike") throw false;
		if (_playerVehicle isKindOf "Exile_Bike_MountainBike") throw false;
		throw true;
	}
	catch
	{
		_playerIsInVehicle = _exception;
	};
};
if (_playerIsInVehicle) then 
{
	if (isEngineOn _playerVehicle) then 
	{
		_forcedBodyTemperatureChangePerMinute = 0.5; 
		_wetnessChangePerMinute = -0.5; 
	}
	else 
	{
		_forcedBodyTemperatureChangePerMinute = 0.1; 
		_wetnessChangePerMinute = -0.2; 
	};
}
else 
{
	if (_isSwimming) then 
	{
		_wetnessChangePerMinute = 99999; 
	}
	else 
	{
		_isFireNearby = [ASLtoAGL (getPosASL player), 5] call ExileClient_util_world_isFireInRange;
		if (_isFireNearby) then 
		{
			_forcedBodyTemperatureChangePerMinute = 1; 
			_wetnessChangePerMinute = -0.5; 
		}
		else 
		{
			if (rain > 0.1) then 
			{
				_startPosition = getPosASL player;
				_endPosition = [_startPosition select 0, _startPosition select 1, (_startPosition select 2 ) + 10];
				_intersections = lineIntersectsSurfaces [_startPosition, _endPosition, player, objNull, false, 1, "GEOM", "VIEW"];
				_isBelowRoof = !(_intersections isEqualTo []);
				if !(_isBelowRoof) then 
				{
					_wetnessChangePerMinute = rain; 
				};
			};
		};
	};
};
_bodyWetness = ((_bodyWetness + _wetnessChangePerMinute / 60 * _timeElapsed) max 0) min 1;
if (ExileClientEnvironmentTemperature > 25) then 
{
	_forcedBodyTemperatureChangePerMinute = 0.5; 
};
if (_forcedBodyTemperatureChangePerMinute > 0) then 
{
	_bodyTemperature = _bodyTemperature + _forcedBodyTemperatureChangePerMinute / 60 *_timeElapsed;
}
else 
{
	// JohnO custom
	_veryWarmClothing = ["CUP_U_B_USMC_Ghillie_WDL","U_B_GhillieSuit","U_B_FullGhillie_lsh","U_B_FullGhillie_sard","U_B_FullGhillie_ard","U_O_FullGhillie_lsh","U_I_FullGhillie_ard","U_B_HeliPilotCoveralls","U_B_PilotCoveralls","U_I_HeliPilotCoveralls","U_I_pilotCoveralls","U_O_PilotCoveralls", "TRYK_U_B_Snow_CombatUniform", "TRYK_U_B_Snowt", "TRYK_U_B_fleece", "TRYK_U_B_fleece_UCP", "TRYK_U_B_UCP_PCUs", "TRYK_U_B_GRY_PCUs", "TRYK_U_B_Wood_PCUs", "TRYK_U_B_PCUs", "TRYK_U_B_PCUGs", "TRYK_U_B_PCUODs", "TRYK_U_B_PCUGs_gry", "TRYK_U_B_PCUGs_BLK", "TRYK_U_B_PCUGs_OD", "TRYK_U_Bts_GRYGRY_PCUs", "TRYK_U_Bts_Wood_PCUs", "TRYK_U_Bts_PCUs", "TRYK_U_B_PCUHs", "TRYK_U_B_PCUGHs", "TRYK_U_B_PCUODHs", "TRYK_U_B_PCUHsW", "TRYK_U_B_PCUHsW2", "TRYK_U_B_PCUHsW4", "TRYK_U_B_PCUHsW5", "TRYK_U_B_PCUHsW6", "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_O_RUS_Gorka_Partizan_A", "CUP_U_I_GUE_Flecktarn2", "CUP_U_I_GUE_Flecktarn3", "U_LIB_SOV_Strelok_w", "U_LIB_SOV_Sniper_w", "U_LIB_GER_Soldier_camo", "U_LIB_GER_Soldier_camo2", "U_LIB_GER_Soldier_camo3", "U_LIB_SOV_Strelok", "U_LIB_SOV_Strelok_summer"];
	_midlyWarmClothing = ["Exile_Uniform_Woodland","U_O_SpecopsUniform_ocamo","U_O_SpecopsUniform_blk","U_B_SpecopsUniform_sgg","U_BG_Guerilla_6_1", "U_O_OfficerUniform_ocamo","U_O_CombatUniform_oucamo","U_O_CombatUniform_ocamo","U_I_OfficerUniform","U_I_CombatUniform","U_B_CTRG_3","U_B_CTRG_1","U_B_CombatUniform_mcam_worn","U_B_CombatUniform_mcam_vest","U_B_CombatUniform_mcam", "TRYK_U_B_Woodland", "TRYK_U_B_WDL_GRY_CombatUniform", "TRYK_U_pad_hood_CSATBlk", "TRYK_U_pad_hood_Blod", "TRYK_U_pad_hood_odBK", "TRYK_U_pad_hood_BKT2", "TRYK_U_B_Sage_T", "TRYK_U_B_Wood_T", "TRYK_U_B_BLTAN_T", "TRYK_U_B_BLOD_T", "TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt", "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt", "U_BG_Guerilla3_1", "TRYK_U_B_OD_OD_CombatUniform", "TRYK_U_B_BLKBLK_CombatUniform", "TRYK_U_B_BLKTAN_CombatUniform", "TRYK_U_B_BLKOCP_CombatUniform", "TRYK_U_B_wood_CombatUniform", "TRYK_U_B_MARPAT_Wood_Tshirt", "TRYK_U_denim_hood_blk", "TRYK_U_denim_hood_mc", "TRYK_U_denim_hood_3c", "TRYK_U_denim_hood_nc", "TRYK_U_denim_jersey_blu", "TRYK_U_denim_jersey_blk", "TRYK_B_USMC_R", "TRYK_U_B_BLK", "TRYK_U_B_BLKTAN", "TRYK_U_B_ODTAN", "TRYK_U_B_BLK_OD", "rds_uniform_Woodlander3", "rds_uniform_Woodlander4", "TRYK_U_B_NATO_OCP_c_BLK_CombatUniform", "TRYK_OVERALL_flesh", "TRYK_OVERALL_nok_flesh", "TRYK_U_B_OD_BLK", "TRYK_U_B_MTP_BLK_CombatUniform", "TRYK_U_B_NATO_OCP_BLK_CombatUniform", "TRYK_OVERALL_SAGE_BLKboots", "TRYK_OVERALL_SAGE_BLKboots_nk_blk", "TRYK_OVERALL_SAGE_BLKboots_nk", "TRYK_OVERALL_SAGE_BLKboots_nk_blk2", "TRYK_OVERALL_SAGE", "CUP_U_O_RUS_Flora_1", "CUP_U_O_Partisan_TTsKO", "CUP_U_B_CDF_MNT_1", "CUP_U_B_CDF_FST_1", "CUP_U_I_GUE_Woodland1"];

	_veryWarmHeadGear = ["H_ShemagOpen_tan","H_ShemagOpen_khk","H_Shemag_tan","H_Shemag_olive_hs","H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_orange_F", "TRYK_H_ghillie_over_green", "TRYK_H_ghillie_over", "H_LIB_SOV_Ushanka2", "CUP_H_C_Ushanka_01", "CUP_H_C_Ushanka_02", "CUP_H_C_Ushanka_03", "CUP_H_C_Ushanka_04"];
	_midlyWarmHeadGear = ["CUP_H_C_Beanie_01", "CUP_H_C_Beanie_02", "CUP_H_C_Beanie_03", "CUP_H_C_Beanie_04", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_camo", "TRYK_H_woolhat_br", "TRYK_H_woolhat_cu"];

	// Original MAX clothing factor = 0.40
	// New MAX clothing factor = 0.47 but to reach this is more in depth

	_clothingColdProtection = 0;

	if !((uniform player) isEqualTo "") then 
	{
		_clothingColdProtection = _clothingColdProtection + 0.12; //Original : 0.25
		

		if ((uniform player) in _midlyWarmClothing) then
		{
			_clothingColdProtection = _clothingColdProtection + 0.22; //15
			
		}
		else
		{
			if ((uniform player) in _veryWarmClothing) then
			{
				_clothingColdProtection = _clothingColdProtection + 0.34; // 39
				
			};	
		};	

	};
	if !((headgear player) isEqualTo "") then 
	{
		_clothingColdProtection = _clothingColdProtection + 0.02; //Original : 0.05
		

		if ((headgear player) in _midlyWarmHeadGear) then
		{	
			_clothingColdProtection = _clothingColdProtection + 0.6; //8
			
		}
		else
		{	
			if ((headgear player) in _veryWarmHeadGear) then
			{
				_clothingColdProtection = _clothingColdProtection + 0.15; // 16
				
			};
		};		

	};
	if !((vest player) isEqualTo "") then 
	{
		_clothingColdProtection = _clothingColdProtection + 0.15; //Original : 0.10
		
	};		

	_clothingColdProtection = ((_clothingColdProtection * (1 - (_bodyWetness * 0.5))) max 0) min 1;
	_movementInfluence = 0;
	if ((getPos player) select 2 < 0.1) then 
	{
		_movementInfluence = (37 - _bodyTemperature) * (1 - (_bodyWetness * 0.5)) * 0.075 * (vectorMagnitude (velocity player))/6.4;
	};
	if (_bodyTemperature < 37) then 
	{
		_regulation = 0.1;
	}
	else 
	{
		_regulation = -0.1; 
	};
	_environmentInfluence = (1 - _clothingColdProtection) * (-0.2 + 0.008 * ExileClientEnvironmentTemperature);
	_bodyTemperature = _bodyTemperature + (_regulation + _movementInfluence + _environmentInfluence) / 60 *_timeElapsed;
};
_bodyTemperature = _bodyTemperature min 37;


if (_bodyTemperature < 35) then 
{
	player setDamage ((damage player) + 0.1/60*_timeElapsed);
};
	
ExileClientPlayerAttributes set [6, _bodyWetness];
ExileClientPlayerAttributes set [5, _bodyTemperature];