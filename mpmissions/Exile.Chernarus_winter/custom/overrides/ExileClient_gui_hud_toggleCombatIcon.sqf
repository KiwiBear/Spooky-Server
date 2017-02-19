/**
 * ExileClient_gui_hud_toggleCombatIcon
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_ctrlNotInCombat", "_ctrlInCombat"];
disableSerialization;
_display = uiNamespace getVariable "Fortex_hud";
_ctrlNotInCombat = _display displayCtrl 1212;
_ctrlInCombat = _display displayCtrl 1213;
_ctrlNotInCombat ctrlShow !(_this);
_ctrlInCombat ctrlShow _this;


// _icon = _display displayCtrl 1008;
// _icon ctrlShow _this;
