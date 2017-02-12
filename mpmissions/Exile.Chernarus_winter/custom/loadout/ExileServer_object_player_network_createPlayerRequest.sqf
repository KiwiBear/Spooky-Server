/**
 * ExileServer_object_player_network_createPlayerRequest
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_parameters","_requestingPlayer","_spawnLocationMarkerName","_playerUID","_accountData","_bambiPlayer","_cargoType"];
_sessionID = _this select 0;
_parameters = _this select 1;
_requestingPlayer = _sessionID call ExileServer_system_session_getPlayerObject;

_bambihat = [
            "H_Cap_grn",
			"H_Cap_press",
			"H_Cap_police",
			"CUP_H_C_Ushanka_01",
			"CUP_H_C_Ushanka_04",
			"CUP_H_C_Beanie_01",
			"CUP_H_C_Beanie_02",
			"CUP_H_C_Beanie_03",
			"CUP_H_C_Beanie_04",
			"CUP_H_C_Policecap_01",
			"CUP_H_C_Fireman_Helmet_01",
			"CUP_H_NAPA_Fedora",
			"CUP_H_PMC_Cap_Grey",
			"CUP_H_PMC_Cap_Tan",
			"CUP_H_PMC_Cap_Burberry",
			"CUP_H_PMC_Cap_Back_Grey",
			"CUP_H_PMC_Cap_Back_Tan",
			"CUP_H_PMC_Cap_Back_Burberry",
			"H_Watchcap_blk",
			"H_Watchcap_cbr",
			"H_Watchcap_khk",
			"H_Watchcap_camo",
			"H_Shemag_olive",
			"H_LIB_SOV_Ushanka2"			
			
] call BIS_fnc_selectRandom;
 
_bambiuniforms = [    
			"U_BG_Guerilla2_1",
			"U_BG_Guerilla2_3",
			"U_BG_Guerilla3_1",
			"U_I_C_Soldier_Bandit_2_F",
			"CUP_U_C_Pilot_01",
			"CUP_U_C_Citizen_01",
			"CUP_U_C_Citizen_02",
			"CUP_U_C_Citizen_03",
			"CUP_U_C_Citizen_04",
			"CUP_U_C_Worker_01",
			"CUP_U_C_Worker_02",
			"CUP_U_C_Worker_03",
			"CUP_U_C_Worker_04",
			"CUP_U_C_Profiteer_01",
			"CUP_U_C_Profiteer_02",
			"CUP_U_C_Profiteer_03",
			"CUP_U_C_Profiteer_04",
			"CUP_U_C_Woodlander_01",
			"CUP_U_C_Woodlander_02",
			"CUP_U_C_Woodlander_03",
			"CUP_U_C_Woodlander_04",
			"CUP_U_C_Villager_01",
			"CUP_U_C_Villager_02",
			"CUP_U_C_Villager_03",
			"CUP_U_C_Villager_04",
			"CUP_U_C_Rocker_01",
			"CUP_U_C_Rocker_02",
			"CUP_U_C_Rocker_03",
			"CUP_U_C_Rocker_04",
			"CUP_U_C_Mechanic_01",
			"CUP_U_C_Mechanic_02",
			"CUP_U_C_Mechanic_03",
			"CUP_U_O_CHDKZ_Bardak",
			"CUP_U_O_CHDKZ_Lopotev",
			"CUP_U_I_GUE_Anorak_03",
			"CUP_U_B_USMC_Navy_Blue",
			"CUP_U_B_USMC_Navy_Brown",
			"CUP_U_B_USMC_Navy_Green",
			"CUP_U_B_USMC_Navy_Red",
			"CUP_U_B_USMC_Navy_Violet",
			"CUP_U_B_USMC_Navy_White",
			"CUP_U_B_USMC_Navy_Yellow",
			"CUP_U_C_Priest_01",
			"CUP_U_C_Policeman_01",
			"CUP_U_C_Fireman_01",
			"CUP_U_C_Rescuer_01"
			
] call BIS_fnc_selectRandom;
_bambifood = ["Exile_Item_Bandage"] call BIS_fnc_selectRandom;
_bambidrink = ["CUP_item_CDF_dogtags"] call BIS_fnc_selectRandom;
 
try
{
    if (isNull _requestingPlayer) then
    {
        throw format ["Session %1 requested a bambi character, but doesn't have a player object. Hacker or Monday?", _sessionID];
    };
    _spawnLocationMarkerName = _parameters select 0;
    _playerUID = getPlayerUID _requestingPlayer;
    if(_playerUID isEqualTo "")then
    {
        throw format ["Player: '%1' has no player UID. Arma/Steam sucks!.",name _requestingPlayer];
    };
    _accountData = format["getAccountStats:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
	_bambiPlayer = (createGroup independent) createUnit ["Exile_Unit_Player", [0,0,0], [], 0, "CAN_COLLIDE"];
	//_bambiPlayer addWeaponGlobal "rds_weap_latarka_janta";
	_bambiplayer addheadgear _bambihat;
	_bambiplayer forceadduniform _bambiuniforms;
    _bambiplayer addItem _bambifood;
    _bambiplayer addItem _bambidrink;
    //removeHeadgear _bambiPlayer;
    {
        _cargoType = _x call ExileClient_util_cargo_getType;
        switch (_cargoType) do
        {
            case 1:     { _bambiPlayer addItem _x; };
            case 2:     { _bambiPlayer addWeaponGlobal _x; };
            case 3:     { _bambiPlayer addBackpackGlobal _x; };
            case 4:     { _bambiPlayer linkItem _x; };
            default                     { _bambiPlayer addItem _x; };
        };
    }
    forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");
    [_sessionID, _requestingPlayer, _spawnLocationMarkerName, _bambiPlayer, _accountData] call ExileServer_object_player_createBambi;
}
catch
{
    _exception call ExileServer_util_log;
};