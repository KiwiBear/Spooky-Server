disableSerialization;

_display = uiNameSpace getVariable ["Fortex_hud", displayNull];

/*
		Controls..
*/

//_ctrlCash = _display displayCtrl 1003;

_ctrlTempInside = _display displayCtrl 1202;
_ctrlThirstInside = _display displayCtrl 1204;
_ctrlThirstBlinking = _display displayCtrl 1205;
_ctrlDamageInside = _display displayCtrl 1207;
_ctrlFoodInside = _display displayCtrl 1209;
_ctrlFoodBlinking = _display displayCtrl 1210;
_ctrlNotInCombat = _display displayCtrl 1212;
_ctrlInCombat = _display displayCtrl 1213;



/*
		Get the data (all the datas :^) )
*/

_food = (round (ExileClientPlayerAttributes select 2));
_thirst = (round (ExileClientPlayerAttributes select 3));
_health = round ((1 - (damage player)) * 100);
_bodytemp = round (ExileClientPlayerAttributes select 5);
/*
	Run some checks on the data to determine colours/images and all that stuff :^)
*/

_timage = 0;
if ( _thirst >= 85 )				 then { _timage = 4 };
if ( _thirst >= 70 && _thirst < 85 ) then { _timage = 3 };
if ( _thirst >= 40 && _thirst < 70 ) then { _timage = 2 };
if ( _thirst >= 10 && _thirst < 40 ) then { _timage = 1 };
if (_thirst < 10) then 
{ 
_timage = 0;
_ctrlThirstInside ctrlShow false;
_ctrlThirstBlinking ctrlShow true;
}
else
{
_ctrlThirstBlinking ctrlShow false;
_ctrlThirstInside ctrlShow true;

};
_thirstImage = "custom\hud\images\hud\status_thirst_inside_" + str(_timage) + "_ca.paa";

_thirstColour = HUD_COLOUR_DEFAULT;
if (_thirst >= 100) then {_thirstColour = HUD_COLOUR_101;};
if ((_thirst >= 90) && (_thirst < 100)) then {_thirstColour = HUD_COLOUR_102;};
if ((_thirst >= 80) && (_thirst < 90)) then {_thirstColour = HUD_COLOUR_103;};
if ((_thirst >= 70) && (_thirst < 80)) then {_thirstColour = HUD_COLOUR_104;};
if ((_thirst >= 60) && (_thirst < 70)) then {_thirstColour = HUD_COLOUR_105;};
if ((_thirst >= 50) && (_thirst < 60)) then {_thirstColour = HUD_COLOUR_106;};
if ((_thirst >= 40) && (_thirst < 50)) then {_thirstColour = HUD_COLOUR_107;};
if ((_thirst >= 30) && (_thirst < 40)) then {_thirstColour = HUD_COLOUR_108;};
if ((_thirst >= 20) && (_thirst < 30)) then {_thirstColour = HUD_COLOUR_20;};
if ((_thirst >= 10) && (_thirst < 20)) then {_thirstColour = HUD_COLOUR_10;};

_ctrlThirstInside ctrlSetText _thirstImage;
_ctrlThirstInside ctrlSetTextColor _thirstColour;

/*
		FOOD
*/

_fimage = 0;
if (_food >= 85)			           then { _fimage = 4 };
if (_food >= 60 && _food < 85)		   then { _fimage = 3 };
if (_food >= 50 && _food < 70)	   	   then { _fimage = 2 };
if (_food >= 10 && _food < 50)		   then { _fimage = 1 };
if (_food < 10) then 
{ 
_fimage = 0;
_ctrlFoodInside ctrlShow false;
_ctrlFoodBlinking ctrlShow true;
}
else
{
_ctrlFoodBlinking ctrlShow false;
_ctrlFoodInside ctrlShow true;

};
_foodImage =  "custom\hud\images\hud\status_food_inside_" + str(_fimage) + "_ca.paa";

_foodColour = HUD_COLOUR_DEFAULT;
if(_food >= 100) 					then{_foodColour = HUD_COLOUR_100;};
if((_food >= 90) && (_food < 100)) 	then {_foodColour =  HUD_COLOUR_90;};
if((_food >= 80) && (_food < 90))  	then {_foodColour =  HUD_COLOUR_80;};
if((_food >= 70) && (_food < 80)) 	then {_foodColour =  HUD_COLOUR_70;};
if((_food >= 60) && (_food < 70)) 	then {_foodColour =  HUD_COLOUR_60;};
if((_food >= 50) && (_food < 60)) 	then {_foodColour =  HUD_COLOUR_50;};
if((_food >= 40) && (_food < 50)) 	then {_foodColour =  HUD_COLOUR_40;};
if((_food >= 30) && (_food < 40)) 	then {_foodColour =  HUD_COLOUR_30;};
if((_food >= 20) && (_food < 30)) 	then {_foodColour =  HUD_COLOUR_20;};
if((_food >= 10) && (_food < 20)) 	then {_foodColour =  HUD_COLOUR_10;};
if((_food >= 1) && (_food < 10)) 	then {_foodColour =  HUD_COLOUR_0;};
if(_food < 1) then{_foodColour =  HUD_COLOUR_DEAD;};

_ctrlFoodInside ctrlSetText _foodImage;
_ctrlFoodInside ctrlSetTextColor _foodColour;


/*
		Damage
*/
_himage = 0;
if (_health >= 90)			           then { _himage = 5 };
if (_health >= 80 && _health < 90)	   then { _himage = 4 };
if (_health >= 60 && _health < 80)	   then { _himage = 3 };
if (_health >= 30 && _health < 60)	   then { _himage = 2 };
if (_health >= 3 && _health < 30)	   then { _himage = 1 };
if (_health < 3)			           then { _himage = 0 };
_healthImage =  "custom\hud\images\hud\status_blood_inside_" + str(_himage) + "_ca.paa";

_damageColour = HUD_COLOUR_0;
if(_health >= 100) then{_damageColour = HUD_COLOUR_0;};
if((_health >= 90) && (_health < 100)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 80) && (_health < 90)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 70) && (_health < 80)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 60) && (_health < 70)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 50) && (_health < 60)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 40) && (_health < 50)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 30) && (_health < 40)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 20) && (_health < 30)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 10) && (_health < 20)) then {_damageColour =  HUD_COLOUR_0;};
if((_health >= 1) && (_health < 10)) then {_damageColour =  HUD_COLOUR_0;};
if(_health < 1) then{_damageColour =  HUD_COLOUR_DEAD;};

_ctrlDamageInside ctrlSetText _healthImage;
_ctrlDamageInside ctrlSetTextColor _damageColour;

/*
		TEMP
*/
_teimage = 0;
if (_bodytemp >= 37)			           then { _teimage = 4 };
if (_bodytemp >= 36.4 && _bodytemp < 36.9)		   then { _teimage = 2 };
if (_bodytemp >= 35.8 && _bodytemp < 36.3)	   	   then { _teimage = 3 };
if (_bodytemp >= 35 && _bodytemp < 35.7)		   then { _teimage = 1 };
if (_bodytemp < 34.9)			               then { _teimage = 0 };
_tempImage =  "custom\hud\images\hud\status_temp_inside_" + str(_teimage) + "_ca.paa";

_tempColour = HUD_COLOUR_GR1;
if(_bodytemp >= 37) 					then{_tempColour = HUD_COLOUR_GR1;};
if((_bodytemp >= 36.4) && (_bodytemp < 36.9)) 	then {_tempColour =  HUD_COLOUR_GR2;};
if((_bodytemp >= 35.8) && (_bodytemp < 36.3)) 	then {_tempColour =  HUD_COLOUR_GR2;};
if((_bodytemp >= 35) && (_bodytemp < 35.7)) 	then {_tempColour =  HUD_COLOUR_GR2;};
if((_bodytemp >= 2) && (_bodytemp < 34)) 	then {_tempColour =  HUD_COLOUR_GR2;};
if(_bodytemp < 1) then{_tempColour =  HUD_COLOUR_DEAD;};

_ctrlTempInside ctrlSetText _tempImage;
_ctrlTempInside ctrlSetTextColor _tempColour;
