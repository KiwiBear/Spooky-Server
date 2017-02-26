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
 
private["_sessionID","_parameters","_requestingPlayer","_spawnLocationMarkerName","_playerUID","_accountData","_bambiPlayer","_cargoType","_bambiClothes","_selectedClothes"];
_bambiClothes = [
"TRYK_U_B_Denim_T_WH",
"TRYK_U_B_RED_T_BR",
"TRYK_U_B_Denim_T_BK",
"TRYK_SUITS_BLK_F",
"TRYK_shirts_DENIM_BK",
"TRYK_shirts_DENIM_BL",
"TRYK_shirts_DENIM_BWH",
"TRYK_shirts_DENIM_od",
"TRYK_shirts_DENIM_R",
"TRYK_shirts_DENIM_RED2",
"TRYK_shirts_DENIM_WH",
"TRYK_shirts_DENIM_WHB",
"TRYK_shirts_DENIM_ylb",
"TRYK_shirts_TAN_PAD_YEL",
"TRYK_shirts_OD_PAD_YEL",
"TRYK_shirts_BLK_PAD_YEL",
"TRYK_shirts_PAD_YEL",
"TRYK_shirts_TAN_PAD_RED2",
"TRYK_shirts_OD_PAD_RED2",
"TRYK_shirts_BLK_PAD_RED2",
"TRYK_shirts_PAD_RED2",
"TRYK_shirts_TAN_PAD",
"TRYK_shirts_OD_PAD",
"TRYK_shirts_BLK_PAD",
"TRYK_shirts_PAD",
"TRYK_shirts_TAN_PAD_BLU3",
"TRYK_shirts_OD_PAD_BLU3",
"TRYK_shirts_BLK_PAD_BLU3",
"TRYK_shirts_PAD_BLU3",
"TRYK_shirts_TAN_PAD_BLW",
"TRYK_shirts_OD_PAD_BLW",
"TRYK_shirts_BLK_PAD_BLW",
"TRYK_shirts_PAD_BLW",
"TRYK_shirts_TAN_PAD_BL",
"TRYK_shirts_OD_PAD_BL",
"TRYK_shirts_BLK_PAD_BL",
"TRYK_shirts_PAD_BL"
];
_selectedClothes = selectRandom _bambiClothes;
_sessionID = _this select 0;
_parameters = _this select 1;
_requestingPlayer = _sessionID call ExileServer_system_session_getPlayerObject;
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
	removeHeadgear _bambiPlayer;
	removeUniform _bambiPlayer;
	_bambiPlayer forceAddUniform _selectedClothes;
	{
		_cargoType = _x call ExileClient_util_cargo_getType;
		switch (_cargoType) do
		{
			case 1: 	{ _bambiPlayer addItem _x; };
			case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
			case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
			case 4:		{ _bambiPlayer linkItem _x; };
			default 					{ _bambiPlayer addItem _x; };
		};
	}
	forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");
	[_sessionID, _requestingPlayer, _spawnLocationMarkerName, _bambiPlayer, _accountData] call ExileServer_object_player_createBambi;
}
catch
{
	_exception call ExileServer_util_log;
};