///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

if (!hasInterface || isServer) exitWith {};

//Advanced repair
Bones_fnc_salvageAndRepairMenuHelo = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuHelo.sqf";
Bones_fnc_salvageAndRepairMenuCar = compileFinal preprocessFileLineNumbers "custom\advancedRepair\Bones_fnc_salvageAndRepairMenuCar.sqf";


// Altar Trader
_basicItemsTrader = 
[
    "Exile_Trader_Equipment",
	"Exile_Trader_Equipment",
    "WhiteHead_11",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [8103.819,9262.978,0],
    181
]
call ExileClient_object_trader_create;

_wasteDumpTrader = 
[
    "Exile_Trader_WasteDump",
	"Exile_Trader_WasteDump",
    "WhiteHead_17",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [8104.342,9238.757,0],
    359
]
call ExileClient_object_trader_create;

_territoryTrader = 
[
    "Exile_Trader_Office",
	"Exile_Trader_Office",
    "WhiteHead_19",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [8090.708,9251.729,0],
    82.639
]
call ExileClient_object_trader_create;

_traderGuard1 = 
[
    "Exile_Guard_01",
	"",
    "WhiteHead_19",
    ["InBaseMoves_patrolling1"],
    [8117.531,9241.470,6.911],
    91.148
]
call ExileClient_object_trader_create;

_traderGuard2 = 
[
    "Exile_Guard_02",
	"",
    "WhiteHead_19",
    ["InBaseMoves_patrolling2"],
    [8117.807,9260.574,6.929],
    91.148
]
call ExileClient_object_trader_create;

execVM "ChangeVOIPIconLocation.sqf";