disableSerialization;
// Wait until main display is available..
waitUntil
{
	!(isNull (findDisplay 46))
};

_display = "Fortex_hud" call BIS_fnc_rscLayer;
_display cutRsc ["Fortex_hud","PLAIN",1,false];

[
	2,
	fn_fortex_unload,
	[],
	true,
	false
]
call ExileClient_system_thread_addTask;

FORTEX_HUD_UPDATE_THREAD =
[
	3,
	fn_fortex_update,
	[],
	true,
	false
]
call ExileClient_system_thread_addTask;
