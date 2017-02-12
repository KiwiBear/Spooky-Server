HUD_COLOUR_DEFAULT 	=	 	[0.678,0.678,0.678,1];
HUD_COULUR_WHITE   =    [1,1,1,1],
HUD_COLOUR_108		= 		[1,0.439,0,1];
HUD_COLOUR_107		= 		[1,0.565,0,1];
HUD_COLOUR_106		= 		[1,0.733,0,1];
HUD_COLOUR_105		= 		[1,0.8,0,1];
HUD_COLOUR_104		= 		[0.506,0.8,0.867,1];
HUD_COLOUR_103		= 		[0.2,0.667,0.8,1];
HUD_COLOUR_102		= 		[0.2,0.533,0.8,1];
HUD_COLOUR_101		= 		[0.2,0.4,0.8,1];
HUD_COLOUR_100 		= 		[0.2,0.4,0,1];
HUD_COLOUR_90 		= 		[0.2,0.6,0,1];
HUD_COLOUR_80 		= 		[0.2,0.8,0,1];
HUD_COLOUR_70 		= 		[0.2,1,0,1];
HUD_COLOUR_60 		= 		[0.4,1,0,1];
HUD_COLOUR_50 		= 		[0.8,1,0,1];
HUD_COLOUR_40 		=		[0.8,0.8,0,1];
HUD_COLOUR_30 		= 		[0.8,0.6,0,1];
HUD_COLOUR_20 		= 		[0.8,0.4,0,1];
HUD_COLOUR_10 		= 		[0.8,0.2,0,1];
HUD_COLOUR_0 		= 		[0.8,0,0,1];
HUD_COLOUR_DEAD 	= 		[0,0,0,1];
//added
HUD_COLOUR_GR1 =        [0.784,0.996,0.18,1];
HUD_COLOUR_GR2 =         [0.949,0.961,0.663,1];

private ['_code', '_function', '_file'];
{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function, _code];
}
forEach
[
    ['fn_fortex_hud_load','custom\hud\Fortex_Hud\fn_fortex_hud_load.sqf'],
    ['fn_fortex_unload','custom\hud\Fortex_Hud\fn_fortex_unload.sqf'],
    ['fn_fortex_update','custom\hud\Fortex_Hud\fn_fortex_update.sqf']
];


call fn_fortex_hud_load;
