// Script by Nic, locations by Chase9548


// 2 hunters, 2 humvees, 2 suvs, 10 uaz, 8 ladas, 4 datsun, 2 turbos, 3 offroaders, 6 pickup trucks, 2 pizza trucks
// 5 jeeps, 1 quelin, 1 prowler, 2 vs3,1 mtvr, 2 ural, 3 buses
// 8 atvs, 1 littelbird, 2 hueys, 1 civ mi-17, 1 armed mi17, 1 medical blackhawks, 2 planes
// x pbx, y fishing boats

private["_vehicleIDs", "_vehicleSpawnLocations", "_vehicleClassNames", "_spawnedVehicles", "_curVehicleID", 
        "_curVehicleData", "_allVehicleData", "_temp", "_j", "_curClassName", "_classNm", "_k", "_numSpawned", "_numShouldBeSpawned",
        "_numToBeSpawned", "_a", "_cont", "_locations", "_randLoc", "_curVehiclePos", "_distance", "_b", "_usePosATL", 
		"_vehicle", "_hitpoints", "_h", "_hitpointsData"];
/* _vehicleClassNames = [["B_MRAP_01_F", 2], // 0
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
					  // IF YOU ADD ANOTHER BOAT CLASS, MAKE SURE YOU ADD IT THE CUSTOM ARRAY BELOW IN THE CODE
						// number of sets of spawn coords MUST be at least as large as the number of
						// that type of vehicle you want to spawn
_vehicleSpawnLocations = [[[8543.555, 11988.373, 0], [2048.336, 7270.142, 0]], //classname0 locations
						  [[5571.843, 10070.483, 0], [13445.34, 12036.941, 0]], //classname1 locations
						  [[5919.627, 4733.802, 0], [8341.737, 5996.133, 0]], //classname2 locations
						  [[4752.367, 2638.57, 0], [3697.703, 5996.299, 0], [6278.627, 7854.885, 0], [11988.79, 12656.652, 0], [6528.396, 2513.330, 0], [8953.133, 4368.568, 0], [7191.911, 9348.322, 0], [9727.648, 8889.108, 0], [6034.568, 10396.346, 0], [4915.108, 12553.286, 0]], //classname3 locations
						  [[4980.137, 12553.837, 0], [6771.392, 2713.957, 0], [6916.297, 2359.271, 0], [1837.670, 2254.069, 0], [1715.558, 3909.806, 0], [3356.901, 3931.005, 0], [10752.053, 8098.113, 0], [13394.225, 6585.172, 0]], //classname4 locations
						  [[1600.571, 7794.176, 0], [3699.813, 5960.196, 0], [9656.371, 6560.6, 0], [4831.75, 10296.744, 0]], //classname5 locations
						  [[4725.740, 6779.8, 0], [2684.332, 9974.343, 0]], //classname6 locations
						  [[10517.076, 12840.455, 0], [5403.433, 8612.386, 0], [6863.054, 11427.246, 0]], //classname7 locations
						  [[7130.623, 7748.354, 0], [4066.61, 9157.562, 0], [4615.522, 9677.276, 0], [4480.254, 7970.08, 0], [3130.471, 7953.146, 0], [4533.612, 6477.768, 0]], //classname8 locations
						  [[8072.714, 3373.581, 0], [12098.795, 7233.579, 0]], //classname9 locations
						  [[7575.966, 5171.544, 0], [4917.416, 5654.565, 0], [6522.875, 6146.534, 0], [13169.703, 5439.328, 0], [11281.242, 4297.920, 0]], //classname10 locations
						  [[2061.615, 6098.428, 0]], //classname11 locations
						  [[980.993, 9216.238, 0]], //classname12 locations
						  [[1324.267, 13372.133, 0], [11464.932, 7532.471, 0]], //classname13 locations
						  [[12786.079, 9638.687, 0]], //classname14 locations
						  [[7107.777, 2703.893, 0], [5390.085, 8531.627, 0]], //classname15 locations
						  [[4471.074, 4585.625, 0], [6183.900, 7805.358, 0], [10388.007, 2003.267, 0]], //classname16 locations
						  [[11516.992, 11353.979, 0], [3306.14, 11265.606, 0], [10392.561, 2259.835, 0], [10597.138, 2528.796, 0], [5160.891, 2343.851, 0], [3200.09, 5179.14, 0], [8096.191, 8060.693, 0], [12944.619, 8072.919, 0]], //classname17 locations
						  [[6849.92, 11538.813, 0]], //classname18 locations
						  [[13700.29, 2896.453, 0], [12100.466, 12618.495, 0]], //classname19 locations
						  [[12047.469, 12680.968, 0]], //classname20 locations
						  [[4103.828, 10805.258, 0]], //classname21 locations
						  [[6433.630, 9452.833, 0]], //classname22 locations
						  [[4792.672, 9825.177, 0], [11834.939, 12806.489, 0]], //classname23 locations
						  [[13473.194, 13756.955, 2.550], [13935.132, 11668.684, 5.153], [13551.283, 6511.376, 16.002], [13411.197, 2879.345, 1.184], [2065.147, 2127.316, 1.036]], //classname24 locations
						  [[4269.708, 2176.087, 4.215], [7118.208, 2450.903, 14.986], [10435.37, 1779.646, 4.571]]];//classname25 locations
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
for [{_i = 0}, {_i < (count _vehicleClassNames)}, {_i = _i + 1}] do
{
	_temp = [(_vehicleClassNames select _i) select 0, 0];
	_spawnedVehicles append [_temp];
};

// populate counter array using data from _allVehicleData
if !(_allVehicleData isEqualTo []) then
{
	for [{_j = 0}, {_j < (count _spawnedVehicles)}, {_j = _j + 1}] do
	{
		_curClassName = (_spawnedVehicles select _j) select 0;
		for [{_k = 0}, {_k < (count _allVehicleData)}, {_k = _k + 1}] do
		{
			if !(_allVehicleData select _k isEqualTo []) then
			{
				_classNm = (_allVehicleData select _k) select 1;
				if (_classNm isEqualTo _curClassName) then
				{
					_spawnedVehicles set [_j, [(_spawnedVehicles select _j) select 0, ((_spawnedVehicles select _j) select 1) + 1]];
				};
			};
		};
	};
};

// spawn vehicles that need to be spawned
for [{_h = 0}, {_h < (count _spawnedVehicles)}, {_h = _h + 1}] do
{
	_curClassName = (_spawnedVehicles select _h) select 0;
	_numSpawned = (_spawnedVehicles select _h) select 1;
	_numShouldBeSpawned = (_vehicleClassNames select _h) select 1;
	_numToBeSpawned = _numShouldBeSpawned - _numSpawned;
	for [{_a = 0}, {_a < _numToBeSpawned}, {_a = _a + 1}] do
	{
		// pick location
		_cont = true;
		_locations = _vehicleSpawnLocations select _h;
		_randLoc = [];
		// loop until you find a spawn point where that vehicle is already not spawned
		while {_cont} do
		{
			_randLoc = selectRandom _locations;
			hint str _randLoc;
			hint "set randloc";
			if !(_allVehicleData isEqualTo []) then 
			{
				for [{_b = 0}, {_b < (count _allVehicleData)}, {_b = _b + 1}] do
				{
					if !(_allVehicleData select _b isEqualTo []) then
					{
						if ((_allVehicleData select _b) select 1 isEqualTo _curClassName) then 
						{
							_curVehiclePos = [(_allVehicleData select _b) select 8, (_allVehicleData select _b) select 9, 0];
							_distance = _randLoc distance2D _curVehiclePos;
							if (_distance > 200) then
							{
								_cont = false;
							};
						};
					}
					else 
					{
						_cont = false;
					};
				};
			}
			else
			{
				_cont = false;
			};
			_vehicleSpawnLocations set [_h, (_vehicleSpawnLocations select _h) - [_randLoc]]; 
		};
		
		// create that vehicle and set random damage and fuel
		_usePosATL = true;
		if ((_curClassName isEqualTo "CUP_C_Fishing_Boat_Chernarus") || (_curClassName isEqualTo "Exile_Boat_RubberDuck_Black")) then {
			_usePosATL = false;
		};
		_vehicle = [_curClassName, _randLoc, random 360, _usePosATL, null] call ExileServer_object_vehicle_createPersistentVehicle;
		"spawned a veh" call ExileServer_util_log;
		_hitpointsData = getAllHitPointsDamage _vehicle;
		if !(_hitpointsData isEqualTo []) then 
		{
			_hitpoints = _hitpointsData select 0;
			{
				if ((_x find "Wheel" > -1) && (random 1 < 0.5)) then // so about half of the wheel are completely gone
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
	};
}; */
"ran custom veh" call ExileServer_util_log;
true