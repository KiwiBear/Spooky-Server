
// 2 hunters, 2 humvees, 2 suvs, 10 uaz, 2 vs3, 12 ladas, 2 turbos, 3 offroaders, 6 pickup trucks, 2 pizza trucks
// 5 jeeps, 1 quelin, 1 prowler, 1 mtvr, 2 ural, 3 buses
// 8 atvs, 1 littelbird, 2 hueys, 1 civ mi-17, 1 armed mi17, 1 medical blackhawks, x pbx, y fishing boats

private["_vehicleIDs", "_vehicleSpawnLocations", "_vehicleClassNames", "_curVehicleID", "_curVehicleData", "_allVehicleData"];
_vehicleClassNames = [name1, name2, name3, name4, name5, name6];
_vehicleSpawnLocations = [[[x, y, z], [x, y, z], [x, y, z]], //classname1 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname2 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname3 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname4 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname5 locations
						  [[x, y, z], [x, y, z], [x, y, z]]];//classname6 locations
_allVehicleData = [];
_vehicleIDs = format ["loadVehicleIdPage:%1:%2", 0, 100] call ExileServer_system_database_query_selectFull;
{
	_curVehicleID = _x select 0;
	_curVehicleData = format ["loadVehicle:%1", _curVehicleID] call ExileServer_system_database_query_selectSingle;
	_allVehicleData append [_curVehicleData];
}
foreach _vehicleIDs;

_allVehicleData call ExileServer_util_log;