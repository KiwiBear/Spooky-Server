/**
 * ExileClient_gui_hud_toggleEarplugsIcon
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_earplugsIcon"];
disableSerialization;
_display = uiNamespace getVariable "RscExileHUD";
_earplugsIcon = _display displayCtrl 1004;
_earplugsIcon ctrlSetPosition [(0.9355 * safezoneW + safezoneX),(0.29 * safezoneH + safezoneY)];
_earplugsIcon ctrlCommit 0;
_earplugsIcon ctrlShow _this;
