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
            
			// temp icon
			class TEMP_BKG: RscPicture {
                idc = 1212;
                text = "custom\hud\images\hud\status_bg.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.62 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class TEMP: RscPicture {
                idc = 1213;
                text = "custom\hud\images\hud\status_temp_border_CA.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.62 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class TEMP_CLR: RscPicture {
                idc = 1214;
                //text = "images\hud\status_temp_3_ca.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.62 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			
			
			// drink icon
			class THIRST_BKG: RscPicture {
                idc = 1209;
                text = "custom\hud\images\hud\status_bg.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.69 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class THIRST: RscPicture {
                idc = 1210;
                text = "custom\hud\images\hud\status_thirst_border_CA.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.69 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class THIRST_CLR: RscPicture {
                idc = 1211;
                //text = "images\hud\status_thirst_inside_3_ca.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.69 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			
			
			// blood icon
			class HEALTH_BKG: RscPicture {
                idc = 1200;
                text = "custom\hud\images\hud\status_bg.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.76 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class BLOOD: RscPicture {
                idc = 1201;
                text = "custom\hud\images\hud\status_blood_border_CA.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.76 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class BLOOD_CLR: RscPicture {
                idc = 1210;
                //text = "images\hud\status_blood_inside_3_ca.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.76 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
			
			
			// food icon
            class FOOD_BKG: RscPicture {
                idc = 1206;
                text = "custom\hud\images\hud\status_bg.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.83 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class FOOD: RscPicture {
                idc = 1207;
                text = "custom\hud\images\hud\status_food_border_CA.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.83 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };
            class FOOD_CLR: RscPicture {
                idc = 1208;

                //text = "images\hud\status_food_inside_2_ca.paa";
                x = 0.95 * safezoneW + safezoneX;
                y = 0.83 * safezoneH + safezoneY;
                w = 0.0257812 * safezoneW;
                h = 0.044 * safezoneH;
            };

    };
};