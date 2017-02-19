class RscPictureFX {
    access = 0;
    type = 0;
    idc = -1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "TahomaB";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    style = "0x30 + 0x100";
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
};
class Fortex_hud {
    idd = -3;
    duration = 999999;
    onLoad = "uiNamespace setVariable ['Fortex_hud', _this select 0];";
    onUnload = "uiNamespace setVariable ['Fortex_hud', objNull]";
    onDestroy = "uiNamespace setVariable ['Fortex_hud', objNull]";
    fadein = 0;
    fadeout = 0;
    text = "";
    class ControlsBackground {
		    class tempBorder: RscPicture {
                idc = 1201;
                text = "custom\hud\images\hud\status_temp_border_CA.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.57 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class tempInside: RscPicture {
                idc = 1202;
                // text = "custom\hud\images\hud\status_temp_inside_0_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.57 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			class thirstBorder: RscPicture {
                idc = 1203;
                text = "custom\hud\images\hud\status_thirst_border_CA.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.64 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class thirstInside: RscPicture {
                idc = 1204;
                // text = "custom\hud\images\hud\status_thirst_inside_0_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.64 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			class thirstInsideBlinking: RscPicture {
                idc = 1205;
                text = "custom\hud\images\hud\status_thirst_inside_0_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.64 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
				colorText[] = {0.8,0,0,1};
				blinkingPeriod = 0.75;
				show = false;
            };
            class bloodBorder: RscPicture {
                idc = 1206;
                text = "custom\hud\images\hud\status_blood_border_CA.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.71 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class bloodInside: RscPicture {
                idc = 1207;
                // text = "custom\hud\images\hud\status_blood_inside_4_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.71 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class foodBorder: RscPicture {
                idc = 1208;
                text = "custom\hud\images\hud\status_food_border_CA.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.78 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class foodInside: RscPicture {
                idc = 1209;
                // text = "custom\hud\images\hud\status_food_inside_0_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.78 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
				colorText[] = {0.8,0,0,1};
            };
			class foodInsideBlinking: RscPicture {
                idc = 1210;
                text = "custom\hud\images\hud\status_food_inside_0_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.78 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
				colorText[] = {0.8,0,0,1};
				blinkingPeriod = 0.75;
				show = false;
            };
			class combatBorder: RscPicture {
                idc = 1211;
                text = "custom\hud\images\hud\status_combat_border_CA.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.50 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			class combatInside: RscPicture {
                idc = 1212;
                text = "custom\hud\images\hud\status_combat_inside_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.50 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
				h = 0.044 * safezoneH;
				colorText[] = {0.2,0.4,0,1};
                
            };
				class combatInsideBlinking: RscPicture {
                idc = 1213;
                text = "custom\hud\images\hud\status_combat_inside_ca.paa";
                x = 0.94 * safezoneW + safezoneX;
                y = 0.50 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
				blinkingPeriod = 0.75;
				colorText[] = {0.8,0,0,1};
				show = false;
            };

    };
};