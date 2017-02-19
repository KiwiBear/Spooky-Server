disableSerialization;
while {true} do
{
	if (!isNull findDisplay 55) then 
	{ 
		_display55 = (findDisplay 55);
		_disp55controls = (allControls _display55);
		_voiceCtrl = "";
		{
			_cur = ctrlPosition _x;
			if (_cur select 0 > -1) then
			{
				_voiceCtrl = _x;
			};
		} foreach _disp55controls;
		if !(_voiceCtrl isEqualTo "") then
		{
			_voiceCtrl ctrlSetPosition [(0.9355 * safezoneW + safezoneX), (0.165 * safezoneH + safezoneY)];
			_voiceCtrl ctrlCommit 0;
		};		
	};
};