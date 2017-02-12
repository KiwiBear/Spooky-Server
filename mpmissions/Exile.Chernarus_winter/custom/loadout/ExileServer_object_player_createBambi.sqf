/**
 * ExileServer_object_player_createBambi
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_sessionID","_requestingPlayer","_spawnLocationMarkerName","_bambiPlayer","_accountData","_direction","_position","_spawnAreaPosition","_spawnAreaRadius","_clanID","_clanData","_clanGroup","_player","_devFriendlyMode","_devs","_parachuteNetID","_spawnType","_parachuteObject"];
_sessionID = _this select 0;
_requestingPlayer = _this select 1;
_spawnLocationMarkerName = _this select 2;
_bambiPlayer = _this select 3;
_accountData = _this select 4;
_direction = random 360;
if ((count ExileSpawnZoneMarkerPositions) isEqualTo 0) then
{
    _position = call ExileClient_util_world_findCoastPosition;
    if ((toLower worldName) isEqualTo "namalsk") then
    {
        while {(_position distance2D [76.4239, 107.141, 0]) < 100} do
        {
            _position = call ExileClient_util_world_findCoastPosition;
        };
    };
}
else
{
    _spawnAreaPosition = getMarkerPos _spawnLocationMarkerName;
    _spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
    _position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
    while {surfaceIsWater _position} do
    {
        _position = [_spawnAreaPosition, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
    };
};
_name = name _requestingPlayer;
_clanID = (_accountData select 3);
if !((typeName _clanID) isEqualTo "SCALAR") then
{
    _clanID = -1;
    _clanData = [];
}
else
{
    _clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
    if(isNull (_clanData select 5))then
    {
        _clanGroup = createGroup independent;
        _clanData set [5,_clanGroup];
        _clanGroup setGroupIdGlobal [_clanData select 0];
        missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
    }
    else
    {
        _clanGroup = (_clanData select 5);
    };
    [_player] joinSilent _clanGroup;
};
_bambiPlayer setPosATL [_position select 0,_position select 1,0];
_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true];
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0];
_bambiPlayer setVariable ["ExileName", _name];
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer];
_bambiPlayer setVariable ["ExileIsBambi", true];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];
_devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then
{
    _devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
    {
        if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith
        {
            if((name _requestingPlayer) isEqualTo (_x select 1))then
            {
                _bambiPlayer setVariable ["ExileMoney", 500000, true];
                _bambiPlayer setVariable ["ExileScore", 100000];
            };
        };
    }
    forEach _devs;
};
_parachuteNetID = "";

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
if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteSpawning")) isEqualTo 1) then
{
    _position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")];
    if ((getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "haloJump")) isEqualTo 1) then
    {
        _bambiPlayer addBackpackGlobal "B_Parachute";  
        _bambiPlayer setPosATL _position;
        _spawnType = 2;
    }
    else
    {
        _parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
        _parachuteObject setDir _direction;
        _parachuteObject setPosATL _position;
        _parachuteObject enableSimulationGlobal true;
        _parachuteNetID = netId _parachuteObject;
        _spawnType = 1;
    };
}
else
{
    _spawnType = 0;
};
//_bambiPlayer addWeaponGlobal "rds_weap_latarka_janta";
_bambiplayer addheadgear _bambihat;
_bambiplayer forceadduniform _bambiuniforms;
_bambiplayer addItem _bambifood;
_bambiplayer addItem _bambidrink;  
_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
[
    _sessionID,
    "createPlayerResponse",
    [
        _bambiPlayer,
        _parachuteNetID,
        str (_accountData select 0),
        (_accountData select 1),
        (_accountData select 2),
        100,
        100,
        0,
        (getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60,
        _clanData,
        _spawnType
    ]
]
call ExileServer_system_network_send_to;
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;
true