/**
 * ExileServer_system_network_event_onPlayerDisconnected
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
params ["_id","_uid","_name"];
_unit = objNull;
{
	if((_x getVariable["ExileOwnerUID","0"]) == _uid) exitWith {
		_unit = _x;
	};
} forEach allUnits;
[_unit,_id,_uid,_name] call ExileServer_system_network_event_onHandleDisconnect;
true