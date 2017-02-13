


private["_vehicleIDs", "_vehicleSpawnLocations", "_vehicleClassNames", "_curVehicleID", "_curVehicleData", "_allVehicleData"];
_vehicleClassNames = [name1, name2, name3, name4, name5, name6];
_vehicleSpawnLocations = [[[x, y, z], [x, y, z], [x, y, z]], 
						  [[x, y, z], [x, y, z], [x, y, z]], 
						  [[x, y, z], [x, y, z], [x, y, z]], 
						  [[x, y, z], [x, y, z], [x, y, z]], 
						  [[x, y, z], [x, y, z], [x, y, z]], 
						  [[x, y, z], [x, y, z], [x, y, z]]];
_allVehicleData = [];
_vehicleIDs = format ["loadVehicleIdPage:%1:%2", 0, 100] call ExileServer_system_database_query_selectFull;
{
	_curVehicleID = _x select 0;
	_curVehicleData = format ["loadVehicle:%1", _curVehicleID] call ExileServer_system_database_query_selectSingle;
	_allVehicleData append [_curVehicleData];
}
foreach _vehicleIDs;

_allVehicleData call ExileServer_util_log;