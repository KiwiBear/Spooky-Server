class deathHUD {
    idd = -1;
    duration = 999999;
    onLoad = "uiNamespace setVariable ['deathHUD', _this select 0];";
    onUnload = "uiNamespace setVariable ['deathHUD', objNull]";
    onDestroy = "uiNamespace setVariable ['deathHUD', objNull]";
    fadein = 0;
    fadeout = 0;
    text = "";
    class ControlsBackground {
		class death: RscPicture {
			idc = 1250;
			text = "custom\hud\images\hud\screen_death_ca.paa";
			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;
			colorBackground[] = {0,0,0,1};
		};
	};
};