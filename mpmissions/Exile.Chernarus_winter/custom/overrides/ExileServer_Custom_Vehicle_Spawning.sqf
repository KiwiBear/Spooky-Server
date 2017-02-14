
// 2 hunters, 2 humvees, 2 suvs, 10 uaz, 8 ladas, 4 datsun, 2 turbos, 3 offroaders, 6 pickup trucks, 2 pizza trucks
// 5 jeeps, 1 quelin, 1 prowler, 2 vs3,1 mtvr, 2 ural, 3 buses
// 8 atvs, 1 littelbird, 2 hueys, 1 civ mi-17, 1 armed mi17, 1 medical blackhawks, 2 planes
// x pbx, y fishing boats

private["_vehicleIDs", "_vehicleSpawnLocations", "_vehicleClassNames", "_spawnedVehicles", "_curVehicleID", "_curVehicleData", "_allVehicleData"];
_vehicleClassNames = [["B_MRAP_01_F", 2], // 0
					  ["Exile_Car_HMMWV_UNA_Green", 2], // 1
					  ["Exile_Car_SUVXL_Black", 2],     // 2
					  ["Exile_Car_UAZ_Green", 10], //3  
					  ["Exile_Car_Lada_Green", 8], //4
					  ["CUP_C_Datsun", 4], //5
					  ["Golf_Civ_Black", 2], //6
					  ["Exile_Car_LandRover_Green", 3], //7 
					  ["Exile_Car_Offroad_Guerilla09", 6], //8
					  ["CUP_C_Datsun_Covered", 2], //9
					  ["Exile_Car_MB4WD", 5], //10
					  ["Exile_Car_QilinUnarmed", 1], //11 
					  ["B_LSV_01_unarmed_F", 1], //12
					  ["Exile_Car_V3S_Open", 2], //13
					  ["CUP_B_MTVR_USMC", 1], //14
					  ["Ural_Civ_01", 2], //15
					  ["Ikarus_Civ_Base", 3], //16
					  ["Exile_Bike_QuadBike_Nato", 8],  //17
					  ["Exile_Chopper_Hummingbird_Green", 1], //18
					  ["Exile_Chopper_Huey_Armed_Green", 2],  //19
					  ["CUP_C_Mi17_Civilian_RU", 1], //20
					  ["CUP_O_Mi8_CHDKZ", 1], //21
					  ["CUP_B_UH60L_Unarmed_FFV_US", 1], //22
					  ["Exile_Plane_AN2_Green", 2], // 23
					  ["Exile_Boat_RubberDuck_Black", 5], //24 
					  ["CUP_C_Fishing_Boat_Chernarus", 3]]; //24
						// number of sets of spawn coords MUST be at least as large as the number of
						// that type of vehicle you want to spawn
_vehicleSpawnLocations = [[[x, y, z], [x, y, z], [x, y, z]], //classname1 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname2 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname3 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname4 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname5 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname6 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname7 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname8 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname9 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname10 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname11 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname12 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname13 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname14 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname15 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname16 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname17 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname18 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname19 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname20 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname21 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname22 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname23 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname24 locations
						  [[x, y, z], [x, y, z], [x, y, z]], //classname25 locations
						  [[x, y, z], [x, y, z], [x, y, z]]];//classname26 locations
_allVehicleData = [];
_spawnedVehicles = [];
// get an array of all the rows in the database's vehicle table
_vehicleIDs = format ["loadVehicleIdPage:%1:%2", 0, 150] call ExileServer_system_database_query_selectFull;
{
	_curVehicleID = _x select 0;
	_curVehicleData = format ["loadVehicle:%1", _curVehicleID] call ExileServer_system_database_query_selectSingle;
	_allVehicleData append [_curVehicleData];
}
foreach _vehicleIDs;

// create a counter array so we can figure out how many vehicles of each kind are already spawned
for "_i" from 0 to (count _vehicleClassNames - 1) do
{
	private _temp = [(_vehicleClassNames select _i) select 0, 0];
	_spawnedVehicles = _spawnedVehicles + _temp;
};

// populate counter array using data from _allVehicleData
for "_j" from 0 to (count _spawnedVehicles - 1) do
{
	private _curClassName = _spawnedVehicles select _j;
	for "_k" from 0 to (count _allVehicleData - 1) do
	{
		private _class = (_allVehicleData select _k) select 1;
		if (_class isEqualTo _curClassName) then
		{
			_spawnedVehicles set [_j, [(_spawnedVehicles select _j) select 0, ((_spawnedVehicles select _j) select 1) + 1]];
		};
	};
};

// spawn vehicles that need to be spawned
for "_h" from 0 to (count _spawnedVehicles - 1) do
{
	private _curClassName = (_spawnedVehicles select _h) select 0;
	private _numSpawned = (_spawnedVehicles select _h) select 1;
	private _numToBeSpawned = (_vehicleClassNames select _h) select 1;
	for [{_a = _numSpawned}, {_a < _numToBeSpawned}, {_a = _a + 1}] do
	{
		// pick location
		private _cont = true;
		private _locations = _vehicleSpawnLocations select _h;
		private _randLoc = [];
		while {_cont} do
		{
			_cont = false;
			_randLoc = selectRandom _locations;
			for [{_b = 0}, {_b < (count _allVehicleData)}, {_b = _b + 1}] do
			{
				private _curVehiclePos = [(_allVehicleData select _b) select 8, (_allVehicleData select _b) select 9, 0];
				private _distance = _randLoc distance2D _curVehiclePos;
				if (_distance < 200)
				{
					_cont = true;
					_vehicleSpawnLocations set [_h, (_vehicleSpawnLocations select _h) - _randLoc]; 
				}
				
			};
		};
		_vehicleSpawnLocations set [_h, (_vehicleSpawnLocations select _h) - _randLoc];
		_vehicle = [_curClassName, _randLoc, random 360, true, null] call ExileServer_object_vehicle_createPersistentVehicle;
		_hitpointsData = getAllHitPointsDamage _vehicle;
		if !(_hitpointsData isEqualTo []) then 
		{
			_hitpoints = _hitpointsData select 0;
			{
				if ((_x find "Wheel" > -1) && (random 1 < 0.5)) then
				{
					_vehicle setHitPointDamage [_x, 1];
				}
				else {
					_vehicle setHitPointDamage [_x, random 1];
				};
				
			}
			forEach _hitpoints;
		};
		_vehicle setFuel (random 0.2);
		// see if vehicle of same type is near that location
		// if so repeat until you have an empty location
		// remove that from list of possible locations
		// spawn vehicle there
	};
};

_allVehicleData call ExileServer_util_log;