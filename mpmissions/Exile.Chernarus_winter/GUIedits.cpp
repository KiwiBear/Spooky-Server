class RscDisplayVoiceChat
{
	onLoad="uiNamespace setVariable ['ExileIsUsingVON', true];";
	onUnload="uiNamespace setVariable ['ExileIsUsingVON', false];";
	class controls
	{
		class Background: RscText
		{
			idc=-1;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class Picture: RscText
		{
			idc=101;
			x=-1;
			y=-1;
			w=0;
			h=0;
		};
		class ExilePicture: RscPicture
		{
			idc=-1;
			x= 0.9355 * safezoneW + safezoneX;
			y= 0.15 * safezoneH + safezoneY;
			w="64 * pixelW";
			h="64 * pixelH";
			text="\exile_assets\texture\hud\hud_icon_voice_ca.paa";
			colorText[]={1,1,1,1};
			shadow=0;
		};
	};
};
class RscPendingInvitation
{
	textureConnectionQualityPoor="\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad="\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow="\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh="\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[]={1,1,1,1};
	x= 0.9355 * safezoneW + safezoneX;
	y= 0.08 * safezoneH + safezoneY;
	w="64 * pixelW";
	h="64 * pixelH";
	shadow=0;
	timeout=10;
	blinkingPeriod=2;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor="\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureConnectionQualityBad="\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	textureDesyncLow="\exile_assets\texture\hud\hud_icon_connection_yellow_ca.paa";
	textureDesyncHigh="\exile_assets\texture\hud\hud_icon_connection_red_ca.paa";
	color[]={1,1,1,1};
	x= 0.9355 * safezoneW + safezoneX;
	y= 0.08 * safezoneH + safezoneY;
	w="64 * pixelW";
	h="64 * pixelH";
	shadow=0;
	timeout=10;
	blinkingPeriod=2;
};