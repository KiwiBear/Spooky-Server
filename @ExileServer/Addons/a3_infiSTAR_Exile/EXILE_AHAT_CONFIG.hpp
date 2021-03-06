	/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	
	Copyright infiSTAR - 2011 - 2016. All rights reserved.
	Christian (Chris) L. (infiSTAR23@gmail.com) Developer of infiSTAR
	
	Description:
	Arma AntiHack & AdminTools - infiSTAR.de
	
	UPDATEEMAIL for http://update.infiSTAR.de is:
	'jason@sopko.net'
	
	Last download was on:
	'11-Feb-2017 04-06-25';
*/
class Cfg_infiSTAR_settings {
/*
	"serverCommandPassword" is serverCommandPassword - in your servers config.cfg
	if your config.cfg does not have serverCommandPassword yet, simply add it in a new line:
	serverCommandPassword = "changeme";
	
	This is   VERY IMPORTANT   as it is needed to KICK & BAN people.
	
	It will try to get this password from "@ExileServer\addons\exile_server_config" first. If you did not set a password there (config.cpp),
	then it will take what you put here.
*/
serverCommandPassword = "18657436";

/*
	"passwordAdmin" is passwordAdmin - in your servers config.cfg, needed for servercommands from client
	
	This is used to be able to use the "login" function ingame. Will log you in as Arma "Admin".
*/
passwordAdmin = "820e2";
/* serverCommandPassword and passwordAdmin should always be different passwords or it could cause problems! */


/* "_OPEN_ADMIN_MENU_KEY": Key to open the menu (google DIK_KeyCodes (0x3B is F1))   */
OPEN_ADMIN_MENU_KEY = 0x3B;
HIDE_FROM_PLAYERS = "false";				/* So no normal can see it :)! */
announce_adminstate_changed = "false";	/* whenever you type !admin as an admin it will announce that you logged out or in to all players on the server! */
use_html_load_on_adminmenu = "true";		/* default and recommended is "true". infiSTAR updates and news are announced in the top right corner when you open the AdminMenu if this is "true"! */



/* "LogAdminActions": Sends actions done by each admin to the server to log it to the .txt file (if infiSTAR dlls are used) and .rpt file + sends it back to all other admins. */
LogAdminActions = "true";
enableIngameLogs = "true";

/* 
	if you set "needAdminNameTag" to "true", this string needs to be a part of the admins name, or he can't use infiSTAR Admin Menu!
	example names: "[Admin] infiSTAR" or "infiSTAR [Admin]"
	note: this is case sensitive as well, meaning "infiSTAR [admin]" would not work as we set it in our example to "[Admin]"
*/
needAdminNameTag = "false";
AdminNameTag = "[Admin]";

/*
	Noficiations shown to all players on the server. Could be used to replace BEC messages.
	{first occurrence after x min, show again after x min, show message for x seconds, font size (recommended is 0.6), xpos, ypos,text color, font, text (<br/> is a linebreak)}
	
	if you want the client to see a message only once when logging in, you put the first and second entry in the array to -1.
	Example:	
	{-1, -1, 4, 0.6, 0, 0, "#ff0000", "OrbitronLight", "Welcome to our server"}
	
	xpos and ypos need to be within your monitor. to high numbers and you simply won't see the text..
	~ x-range is between -0.7 to +1
	~ y-range is between -0.4 to +1
	
	Arma Fonts:
		PuristaLight
		PuristaMedium
		PuristaSemiBold
		PuristaBold
		LucidaConsoleB
		EtelkaMonospacePro
		EtelkaMonospaceProBold
		EtelkaNarrowMediumPro
		TahomaB

	Exile Fonts:
		OrbitronLight
		OrbitronMedium
		PressStart2P
		RobotoMedium
		RobotoRegular
NOTE: do not use " within the text.
*/


ENABLE_NOTIFICATION_MESSAGES = "true";
NOTIFY_MSG_ARRAY[] =
{
	{-1, -1, 6, 0.6, 0, 0, "#ff0000", "OrbitronLight", "Press 6 then turn on XM8 by clicking X at bottom"},
	{-1, -1, 4, 0.6, 0, 0, "#1900FF", "OrbitronLight", "Click on Server Rules on the bottom of your XM8"}
};

/*
	{chatCommand (text typed in chat), color, size, font, text shown to player}
	only triggers if the EXACT text is typed!
NOTE: do not use " within the text.

chatCommands[] =
{
	{"!ts","#2784D6","1","OrbitronMedium","ts.mycommunity.com"},
	{"!website","#2784D6","1","OrbitronMedium","www.mycommunity.com"},
	{"!admin","#2784D6","1","OrbitronMedium","please visit ts.mycommunity.com"}
};
*/

/*
	{chatCommand (text typed in chat) partitial, color, size, font, text shown to player}
	"Hello, why is there no loot on this map?" <- will trigger the example below!
NOTE: do not use " within the text.

chatCommandsP[] =
{
	{"no loot","#2784D6","1","OrbitronMedium","You cannot loot from non arma buildings in this map, you must move around - check the shipping yards for best loot"}
};
*/






/*
	If admin has rights to "Create Billboard", he will have new options to create a Billboard ingame with one of the following textures
	{"name shown in adminmenu","path to texture"}
	
	should be looking somewhat like this:
	{"example picture","\mpmissions\Exile.Altis.pbo\example.paa"}
	
	the picture has to be available on EACH client AND the server.
	So you either need a client-side mod for it or you need to put it in the MPMission
*/
pathToCustomBillBoardTextures[] =
{
	{"Doggy","exile_assets\texture\flag\flag_mate_21dmd_co.paa"},
	{"Spawny","exile_assets\texture\flag\flag_mate_spawny_co.paa"},
	{"Dickbutt","exile_assets\texture\flag\flag_misc_dickbutt_co.paa"},
	{"Vish","exile_assets\texture\flag\flag_mate_vish_co.paa"}
};


/* "startAsNormal": if you add admin UIDs in here as well, they will start as almost "normal" player instead of with admin menu and such. */
startAsNormal[] =
{
	"UID1","UID2","UID3","..."
};

/* "hiddenSuperAdmin": These admins are seen as normal players by normal admins, their actions are not logged either (to keep an eye out on your admins) */
hiddenSuperAdmin[] =
{
	"UID1","UID2","UID3","..."
};

adminUIDandAccess[] =
{
	{
		{"76561198011269083","76561198152566352","76561198087835245","76561198081486367"},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",
			
			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",
			
			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",
			
			"AdminConsole",
			"DebugConsole",
			"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",
			
			"Change Money on Player","Change Money on Bank","Change Respect",
			
			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",	// Adds Arsenal to the mousewheel actions if you press "," on the Numpad!
			"Unconscious","Remove Unconscious",
			"Light",	// Zeus like Lighting from the Air strikes down at selected player / target / location - use ctrl+1 or the menu to use it!
			
			"Spawn Zombie on Target Location!",	// This only works when you are using ExilZ / RyanZombies
			
			""
		}
	},
	{
		{"UID1","UID2","UID3","..."},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",
			
			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",
			
			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",
			
			"AdminConsole",
			"DebugConsole",
			"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",
			
			"Change Money on Player","Change Money on Bank","Change Respect",
			
			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",	// Adds Arsenal to the mousewheel actions if you press "," on the Numpad!
			"Unconscious","Remove Unconscious",
			"Light",	// Zeus like Lighting from the Air strikes down at selected player / target / location - use ctrl+1 or the menu to use it!
			
			"Spawn Zombie on Target Location!",	// This only works when you are using ExilZ / RyanZombies
			
			""
		}
	},
	{
		{"UID1","UID2","UID3","..."},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target",
			"Teleport In Facing Direction (10m steps)","Drag and drop units on the map",
			"spectating","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze","UnFreeze","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","Items spawn menu",
			"Remove Gear","Revive","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Player ESP","Player ESP (safezone style)","AI ESP","Dead ESP","Loot ESP",
			"Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","God Mode (no stats change)","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","Change Time","Spawn Support-Boxes","Create Billboard","Change ViewDistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo",
			"UnlockLockVehicle","Copy Worldspace(coords) to RPT & Chat",
			
			"Spawn Vehicles","Spawn Persistent Vehicles","Trader Menu",
			
			"Kill","Explode","Force Disconnect",
			"Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)","TempBan (Silent)","TempBan (Announce)",
			
			"AdminConsole",
			"DebugConsole",
			"Execute code on server (DebugConsole)","Execute code global (DebugConsole)","Execute code local (DebugConsole)",
			"Lock Server (DebugConsole)","UnLock Server (DebugConsole)","Ban (DebugConsole)","Kick (DebugConsole)",
			
			"Change Money on Player","Change Money on Bank","Change Respect",
			
			"MapIcons",
			"MapIcons: Buildings","MapIcons: Flags",
			"MapIcons: Player","MapIcons: DeadPlayer","MapIcons: Vehicles",
			"MapIcons: Vehicle Types","MapIcons: Vehicle lockstate","MapIcons: DeadVehicles",
			"MapIcons: AI",
			"Arsenal",	// Adds Arsenal to the mousewheel actions if you press "," on the Numpad!
			"Unconscious","Remove Unconscious",
			"Light",	// Zeus like Lighting from the Air strikes down at selected player / target / location - use ctrl+1 or the menu to use it!
			
			"Spawn Zombie on Target Location!",	// This only works when you are using ExilZ / RyanZombies
			
			""
		}
	}
};



/****************************************************************************************************/
/********************OPTIONS BELOW REQUIRE CHANGES TO YOUR EXILE SERVER DATABASE!********************/
/****************************************************************************************************/
/*
	Use Database WhiteList?
	if "USE_DATABASE_WHITELIST = "true";", UIDs that are not whitelisted in your exile server database, will be kicked on connect.
	
	To use this, you need to use what I've added to "infiSTAR.de_Exile\SERVER_ARMA3_FOLDER\db_related_changes"
*/
USE_DATABASE_WHITELIST = "false";

/*
	Use Log to database?
	if "USE_LOG_TO_DATABASE = "true";", infiSTAR will log to your exile server database! (yes I know this is great!)
	
	To use this, you need to use what I've added to "infiSTAR.de_Exile\SERVER_ARMA3_FOLDER\db_related_changes"
*/
USE_LOG_TO_DATABASE = "true";
/****************************************************************************************************/
/********************OPTIONS ABOVE REQUIRE CHANGES TO YOUR EXILE SERVER DATABASE!********************/
/****************************************************************************************************/
/*
	ARMA_LOG.dll SETTINGS
	LOG_PATH = ""; is the Arma3Server directory
	LOG_PATH = "infiSTAR_Logs/"; would be a folder called "infiSTAR_Logs" within your Arma3Server directory.
	You need to create the defined folder if it doesn't exist. If you don't create it - the DLL won't be able to write any Log files ! ! !
*/
LOG_PATH = "";
WRITE_LOG_FILES = "true";


/*
	What is this?
	infiSTAR has a global ban system so hackers don't jump around servers and learn how to bypass infiSTAR.

	There was a situation where a group of people asked why their friend could not join the server.
	Well he was globally banned for hacking.. anyways - if you as a server admin want him to get in even tho he is globally banned,
	just ask for his UID and add the UID in the array below.
*/
UID_SKIP_GLOBAL_BAN_CHECK[] =
{
	"UID1","UID2","UID3","..."
};








/*
	Use UID WhiteList?
	if "USE_UID_WHITELIST = "true";", UIDs that are not in "UID_WHITELIST" array, will be kicked on connect.
	This even counts for Admins!
*/
USE_UID_WHITELIST = "false";
UID_WHITELIST[] =
{
	"UID1","UID2","UID3","..."
};

ExileDevFriendlyMode = "false";	/* adds Exile Devs to your AdminList - makes it easier for them to debug their mod live */


/* What ESCAPE Menu shows */
ESCMNUTOP = "TS dfw01.mainvoice.net:8178";
ESCMNUBOT = "DayZ Exile";
BRIEFING_MSG = "false";	/* use mission briefing message: if   "BRIEFING_MSG = "false";"   then the message will be replaced by infiSTAR */
HTML_LOAD_URL = "";		/* HTML_LOAD_URL = ""; == disabled and if you set a url it will be shown in ESCAPE menu. HTML in Arma/this is limited. Try it :) example: "http://goo.gl/gb0o7b" */
ENABLE_PRIVATE_CHAT_MENU = "true";		/* players can open it by typing !chat in chat or by  custom controls -> "Use Action 3" */
PRIVATE_CHAT_MENU_8GNETWORK = "false";	/* if this is "true" - players will only be able to use private chat if they enable 8GNetwork in their xm8 */




/* show time left to next restart */
USE_RESTART_TIMER = "false";

USE_RESTART_TIMES_ARRAY = "false";
/* if USE_RESTART_TIMES_ARRAY = "true"; -> {hour,minute} .. put in the times when your server restarts (server real world time) */
RESTART_TIMES[] =
{
	{00,00},
	{03,00},
	{06,10},
	{09,00},
	{12,00},
	{15,00},
	{18,00},
	{21,00}
};

/* if USE_RESTART_TIMES_ARRAY = "false"; -> restart time in minutes (default: 180min == 3 hours) */
RESTART_TIME_IN_M = 180;
TIME_FUNCTION_USED = "diag_tickTime";	// diag_tickTime (starts with arma3server.exe), time (starts with mpmission init)

/* show restart announcement message x min before restart -> SERVER RESTART IN: X MINS  |  (calculated from RESTART_TIMES[])*/
RESTART_ANNOUNCE_X_MIN[] = {1,3,5,10,15,30,60,120};

/* SERVER_END_FUNCTION -> #shutdown or #restartserver */
SERVER_END_FUNCTION = "#shutdown";
USE_RESTART_TIMER_SHUTDOWN = "true";
RESTART_WARNING_SOUND = "Alarm";	// for example: Alarm or air_raid







/* Allow Player to vote Day/Night by typing vote day / vote night in Chat*/
DayNightVote = "false";
MRV = 0.3;	/* if "DayNightVote = "true";" - Minimum votes required. Percentage of players needed to pass the vote. */
MVP = 0.51;	/* if "DayNightVote = "true";" - Minimum vote percentage. A setting that dictates the minimum vote percentage that needs to be reached for the vote to pass. */
VCT = 300;	/* if "DayNightVote = "true";" - Time (in seconds) to wait until nex vote is possible. */


/* Allow players to type !pee to start peeing */
allowPee = "true";

/* Enable jumping instead of GetOver function (infiSTAR jumping is a custom jump animation :P) */
enableJump = "true";



/*
	The following 4 options can be disabled by putting the value to -1. For example "TGV = -1;"
	
	TGV: if set to 50 grass will be very low for better client FPS.. default is 25. ~35 is good performance and grass :)
	
	old infiSTAR default values were:
	TGV = 40;	
	VDV = 1000;
	VOV = 800;
	SVD = 50;
*/
/* Terrain Grid Value   */ TGV = -1;	
/* ViewDistance Value   */ VDV = -1;
/* ObjectViewDistance   */ VOV = -1;
/* ShadowViewDistance   */ SVD = -1;


/*
	This will set your vehicle back if you try to ram somebody within the safeZone
*/
block_safeZone_ramming = "false";
/****************************************************************************************************/
/***************************FIXES DUE TO ARMA BEING BROKEN - BELOW***********************************/
/****************************************************************************************************/
/*
	*readded new old uniform and vest check since some people asked for it.
	http://www.exilemod.com/topic/14179-miss-uniform_and_vest_check/
	the game is still broken and sometimes you can see people naked when they are not.
	I did not add the old check back in, I made a new one making use of new functions :)
*/
fix_uniform_and_vest = "false";


/*
	So far only checking for duped backpacks and not taking any actions besides logging. Need to test more before It will start to remove duped items.
*/
experimental_dupe_check = "true";


/*
	re-assigning "InventoryOpened" eventhandler to stop glitch open a locked safe
*/
stopSafeGlitchAndCorpseDupe = "true";


/*
	checks if player tries to dupe using the "disconnect trick" -> sends a ping to the server whenever a player opens the escape menu
*/
disconnect_dupe_check = "true";


/*
	there is a way for players to dupe items if they drive a vehicle close to a trader, open the trader menu and then have a friend sit in the driver of the vehicle.
	Now they can sell the same item unlimited times and it won't vanish from the vehicle..
	That issue is fixed with this check!
*/
fix_trader_dupe = "true";

/*
	server side check for the famous "wastedump dupe" as well as client side cooldown
*/
fix_wastedump_dupe = "true";

/*
	several people standing infront of the same corpse and pressing all take-all the same time, would dupe the loot.
	This fixes it.
*/
fix_takeall_dupe = "true";




/*
	if a player is near a flag where he has no buildrights, he can't vault/getover/lean close to buildingparts (to prevent glitching!)
*/
block_glitch_actions = "true";


/*
	checks if a players tries to glitch through a wall (if player is allowed to build in that territory, it will not be logged.)
*/
wall_glitch_object = "true";
wall_glitch_revert = "true";	//	Teleport player back to last safe postion
/*
	If a player model intersects with a wall, the player will be teleport back to where he was before he intersected with it..

extra punishments possible:
	0 - no punishment
	1 - knockout for 60 seconds
	2 - kill

	hardcore punishments
	3 - handcuff
	4 - kick
	5 - ban (not recommended)
*/
wall_glitch_punish = 1;



/*
	stops players from glitching into bases using "eject" or "getout" of a vehicle..
*/
wall_glitch_vehicle = "true";
/****************************************************************************************************/
/***************************FIXES DUE TO ARMA BEING BROKEN - ABOVE***********************************/
/****************************************************************************************************/
/* ********************************************************************************* */
/*            many checks should be set to "true" instead of "false".                    */
/* ********************************************************************************* */
CAP = "false";		/* Check Actions Plr - "Actions: xxx/xxx possible scroll menu hack (or you added custom actions..)" */

/*
	NEW! Recommended to use!
	The allowed lists below need the "title" of the action!
	
	Only logs BadActions (and removes them) but does not kick or ban.
*/
BadActionCheck = "false";
allowedActions_player[] = {"Break free","Use AutoLockPicker","Craft Vehicle"};
allowedActions_object[] = {"UnLock","Select vehicle to tow","Tow Selected vehicle","Untow vehicle","Unselect selected vehicle"};


KCM = "false";		/* Just close ALL CommandingMenus */
CMC = "false";		/* Check for CommandingMenus that are not in the allowedCommandingMenus array */
allowedCommandingMenus[] = {"#USER:ASL_Show_Repair_Options_Menu_Array"};


task_force_radio = "false";				/* put this to "true" if you allow task force radio on your server! */
reset_inGameUIEventHandler = "true";	/* reset inGameUIEventHandler */
checkFilePatchingEnabled = "true";		/* checks if filepatching is enabled on the client (if it is, the client could inject any script based hack easily) */
checkCfgPatches = "true";				/* checks serve side Cfg Patches vs Client side (logs as "Bad Class found in CfgPatches >> xxx") */
check_Notifications = "false";			/* checks if BIS_fnc_showNotification was used, as it is used with many hacks - some custom addons however use them too. */
check_doors_n_gates = "true";			/* Fixes Hatches (so when they are locked, they stay closed..) and closes every door that's locked + keeps closing it in case somebody tries to hack open it! */
attach_to_check = "true";				/* logs and detaches attached vehicles that are close.. basically completely disallow attaching of vehicles! */
slingload_check = "false";				/* forbid sling loading / rope attaching a vehicle with a crew */


checkPopTabIncrease = "true";
LogPopTabIncrease = 15000;			/* Only if checkPopTabIncrease = "true"; logs if PopTabs increased by x within ~50 seconds */
BanPopTabIncrease = 250000;			/* Only if checkPopTabIncrease = "true"; bans a player if PopTabs increase by more than x within ~50 seconds */

checkRespectIncrease = "true";
LogRespectIncrease = 5000;			/* Only if checkRespectIncrease = "true"; logs if respect increased by x within ~50 seconds */
BanRespectIncrease = 25000;			/* Only if checkRespectIncrease = "true"; bans a player if respect increases by more than x within ~50 seconds */



/* Check for Map Menu & Map Sub-Menu */
CMM = "true";
maxMapMenuEntries = 6;	/* "Map Menu has been changed x entries found - Texts: y" incase you want to add some briefing to your map menu. Only matters if you have CMM = "true"; */

/* if steam api.steampowered.com is working, this might be a nice feature */
check_steam_ban = "false";	/* will announce and log steambanned players - using GetPlayerBans v1 */
ban_for_steam_ban = "false";	/* if "check_steam_ban = "true";" then steambanned players will get banned from your Arma server! */


/*
	This set to "true" will create a log of players being hit on your server
*/
MPH = "true";


/*
	This will check from serverside if a playerobject received damage but did not take it
*/
GodModeCheck = "true";



/*
	Anti Teleport
	UAT = "false"; To disable Anti Teleport
	Arrays below show position & radius where Teleporting is allowed.
	Mainly for the Traders (because when you purchase a vehicle, it teleports you into the vehicle)
	
	You can white-list "Teleport Zones" by adding them like below:
	class allowTP {
		custom[] = {
			{{0,0,0},1},
			{{1,1,1},1},
			{{2,2,2},1}
		};
	};
	Trading zones are white-listed by default.
*/
UAT = "true";	
class allowTP {
	custom[] = {};
};



/*  Check Drawing on the Map (global channel) */
CHECK_DRAWING = "true";	/* logs & deletes global drawing */


/*  Check Global Markers */
CGM = "false";	/* you may need to disable this check for A.I. Missions - or whitelist the used Markers in the aLocalM Array beneath */

/*  Check Local Markers  */
CLM = "false";	/* "false" if you do not want LocalMarker to be checked. */

/*  Use aLocalM array    */
UMW = "false";	/* use allowed marker array from below (for example AltisLife uses house_ and others in there) or A.I. Missions */
/* aLocalM: if "CLM" && UMW - this array of names will be allowed */
aLocalM[] = {"MissionMarker"};


/*
	Not allowed Chat words on server.
	Example:
		badkickChat[] = {"blue"}; or badbanChat[] = {"blue"};
	will log and kick or ban if somebody writes "blue goat" or "blues" in the chat (not case sensitive).
	
	Example 2:
	This will most likely stop people from writing Cyrillic (Russian) (I've been asked for this)
	badkickChat[] = {"й","д","и","б","ь","т"};
*/
badkickChat[] = {};
badbanChat[] = {};


/* Not allowed Names on server. Example: badNamesFull[] = {"THE"}; would kick all players that are named "THE", it would NOT kick players named "THE CAR" (not case sensitive) */
badNamesFull[] = {};

/* Not allowed Names on server. Example: badNamesPartial[] = {"THE"}; would kick all players with names like "the car" as it includes "THE" (not case sensitive) */
badNamesPartial[] = {};


/* Not allowed Group Names on server. Example: badGroupNames[] = {"THE"}; would rename all groups with names like "the car" as it includes "THE" (not case sensitive) */
badGroupNames[] = {"admin"};



/*
	if somebody talks on one of the following channels, his channel will be switched to "direct" channel
	0 = Global
	1 = Side
	2 = Command
	3 = Group
	4 = Vehicle
	5 = Direct <-- this is where people get switched too if they talk in one of the blacklisted channels!
	6-15 = Custom Radio (see radioChannelCreate)
*/
disAllowVon[] = {1,2};


/*
	This will check the buttoncode on most buttons.. if there is something that needs to be white-listed. Let me know!
*/
use_suspicious_button_check = "false";

/* badIDDsToKick will be checked before badIDDsToClose, badIDDsToClose will be checked before allowedIDDs */
/* badIDDsToKick: Forbidden Idds that will get you Kicked by the AH */
badIDDsToKick[] =
{
	-1338,-1337,-1341,17,19,30,32,45,56,59,62,64,69,71,110,125,
	132,133,155,156,165,166,167,312,313,
	1320,1321,1340,1341,1342,1343,1344,1345,1346,1347,
	2727,2928,2929,3030,316000,9899,0110,
	6900,552266
};

/* badIDDsToClose: Forbidden Idds that will get closed by the AH */
badIDDsToClose[] =
{
	-1,2,3,7,17,19,25,26,27,28,29,30,31,32,37,40,41,43,44,45,51,52,53,56,74,85,
	106,126,127,132,146,147,150,151,152,153,154,155,159,162,164,262,
	314,632,1320,2121,148,163,129,169,157,69,156,165,166,167,312,1321,2727,
	-1341,1341
};

/* Use IDD White-List ? */ UDW = "true";
/* allowedIDDs: Insert IDDs here to prevent them from being closed! */
allowedIDDs[] =
{
	/* default idds */
	-1,0,4,5,6,8,12,18,24,49,54,55,70,101,160,174,177,999,131,63,602,301,

	/* exile idds */
	24001,24002,20023,24005,24004,24010,24025,20021,20017,24012,24027,
	20019,20016,24007,20024,20018,24008,24011,24015,24000,24006,24014,
	20020,24026,

	24033,24030,24029,24028,24031,24034,

	4004,21000,	// Bounty system and MarXet
	8457,	// http://www.exilemod.com/topic/9040-xm8-apps/
	65431,	// r3f menu fix
	6666,	// Paintshop
	0711,	// Advanced Banking
	0720,	// Virtual Garage
	5501,5502,5503,5504,5505,5506,5507,	// BRAma Cookbook
	-1339,-1340,	// custom infiSTAR dialogs (some editor & a private chat menu)

	/* main idd - never delete it */
	46
};



/*
	important check to make sure certain variables are set and have the correct type!
*/
variableTypeChecks[] =
{
	{'ExileIsPlayingRussianRoulette',"false"},
	{'ExileClientIsHandcuffed',"false"},
	{'ExilePlayerInSafezone',"false"},
	{'ExileClientIsAutoRunning',"false"},
	{'ExileCurrentBreachingObject',objNull},
	{'ExileClientInteractionObject',objNull},
	{'ExileClientConstructionObject',objNull},
	{'HTML_LOAD_URL3',''},
	{'infiSTAR_lastJumptime',0},
	{'PLAYER_IN_VEHICLE',"false"},
	{'ExileSystemSpawnThread',[]}
};


/*
	it is highly recommended to have this check turned on (useBlacklistedVariableCheck = "true";)
	shows "BadVariable in xxxxxxxx " in the logs.
*/
useBlacklistedVariableCheck = "true";
blacklistedVariables[] =
{
	"BIS_DEBUG_CAM",
	"arsenalOpened","BIS_fnc_arsenal_fullArsenal","babecore_escM_mousepos",
	"BIS_fnc_dbg_reminder_value","BIS_fnc_dbg_reminder","BIS_MENU_GroupCommunication","BIS_fnc_addCommMenuItem_menu",
	"rscspectator","rscspectator_hints","rscspectator_display","rscspectator_playericon",
	"rscspectator_view","rscspectator_map","rscspectator_vision","rscspectator_keys",
	"rscspectator_interface","bis_fnc_camera_target","andy_loopz","InitFileOne","finiE_S_P",
	"time","serverTime","myplayeruid","hhahaaaaar","CharlieSheenkeybinds","KickOFF","yolo","runonce","notakeybind","action1","Supa_Licenses","autokick","wallaisseikun","MainMenu",
	"GEFClose","GEFWhite","GEFRed","GEFGreen","GEFCyan","FirstHint","new_queued","fn_Exec","FND_fnc_select","fnx3","ANTIHACKKICK","tele","dmap","GOLDENS_GLOBAL_SHIT_YEAH","GLASS911_Run",
	"gearDialog_create","lystoKeypress","ThirtySix","LY_SwaggerLikeUs","Jkeyszz","n2","boxofmagic","MainScripts","DMC_fnc_4danews","INFISTARBYPASS","EXEC_TEXT","vehicle_dblclick","init_main",
	"ESP_Count","Nute_Dat_Bomber","s_cash100k","XposPlayer","ly_re_onetime","SKAR_checkA","MainScriptsV4","ViewDistance","check_load","already_load","meins","f1","Dummy","Plane_Jump",
	"c_player","MouseClickEH","distp","nec2","Menu_I_Run_Color_LP","GLASSv1nce_BindHandler","thecar","FastAnimes","GetinPassenger","iaimon","DMC_Re_onetime","func_execOnServer","fnc_serverKickNice",
	"Kick_Admins","DASMOKEON","hovering","r_kelly_be_flying","VinceLOL_ALTISLIFE","life_fnc_byassSkaroAH","AH_fnc_MP","jayRE","fn_newsbanner","Hack_News","TrollFuncs",
	"Fanatic_InfiPass","keybindings_xxx","AndysClosed","UserFuncs","AltisFuncs","RemExe","BB_nofatigue","bis_fnc_diagkey_var_code","First_PAGE","Get_in_D","i_t_s__m_e_o","smissles","Whippy_ESP",
	"TargetFuncs2","life_fnc_antiFreeeeze","LY_keyForward","TY_re_onetime","life_fnc_XaAxAA","mein1","GodDamnVehiclesXD","Mystic_FNC_ESP_distance","Esp_Id_setter","DummyMen","whipbut","UserFuncs",
	"KrohdoFreedom","selectedPlayer","Lmenu1","ggplayer","throx_menu_item","lvl1","Init_Menu_Slew","D_B_R_T_Y_Slew","V6_GEF","xasfjisisafudmmyx","kekse","UPDATED_RE_36","first","second",
	"SNI_PRZ_ZZZ_TargetPlayer","healit","O_fnc_ArmA","MLRN_EXEC","running_threads","catchemall4360","killtarget","GMToggle","t1","FUCK_ME_keyp","CheatCurator"
};

/*
	due to new hacking methods it is necessary to check variables on objects.. 
	since most server have 50.000+ objects this can cost a lot client fps but it should still be used.. for the greater good!
*/
useObjectVariableCheck = "false";



UVC_adminspawn = "false";	/* use vehicle check(s) on vehicles spawned by infiSTAR.de admin? */
/*
	Use vehicle white list? (everything not on white-list will be flagged as BadVehicle and deleted!)
	"EXILE" vehicles are white-listed by default!
*/
VehicleWhiteList_check = "false";
VehicleWhiteList[] =
{
	"B_Parachute","B_Parachute_02_F","O_Parachute_02_F","Steerable_Parachute_F",
	"I_UAV_01_F","B_HMG_01_high_F","O_HMG_01_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","O_MRAP_02_gmg_F","O_static_AT_F","Land_Camping_Light_F"
};

/*
	Use forbidden vehicle check? (everything in the ForbiddenVehicles will be flagged as BadVehicle and deleted (even when it is on the white-list)!)
*/
ForbiddenVehicles_check = "true";
ForbiddenVehicles[] =
{
	"B_MBT_01_arty_F"
};

/*
	If you use VehicleWhiteList_check or ForbiddenVehicles_check then the vehicle check automatically checks for locally created vehicles.
	Locally created vehicles are these that get created by a player and not the server. E.g. when a player assambles a UAV or a static weapon!
	Also some public posted scripts for example the "bike script" are creating the vehicle (the bike) locally (so the type of the vehicle needs to get added to the array below!).
*/
LocalWhitelist[] =
{
	"O_HMG_01_weapon_F","O_HMG_01_F","O_HMG_01_support_F","I_UavTerminal","I_UAV_01_backpack_F",
	"Exile_Bike_OldBike","B_HMG_01_F","B_HMG_01_high_F","O_HMG_01_high_F"
};




UFI = "false";	/* Use "ForbiddenItems"/Item Check(s) */
UIW = "false";	/* if "UIW = "true";" then it checks if the items the individual player has are in "ItemWhiteList" */
ItemWhiteList[] =
{
	"AllowThisItem1","AllowThisItem2"
};
ForbiddenItems[] =
{
	"autocannon_Base_F","autocannon_30mm","autocannon_35mm","autocannon_40mm_CTWS","autocannon_30mm_CTWS","Bomb_04_Plane_CAS_01_F",
	"Bomb_03_Plane_CAS_02_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","gatling_20mm",
	"gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GMG_20mm","GMG_40mm","GMG_UGV_40mm","HMG_127_MBT",
	"HMG_127","HMG_127_APC","HMG_01","HMG_M2","HMG_NSVT","LMG_Minigun2","LMG_RCWS","LMG_M200","LMG_Minigun","LMG_Minigun_heli","LMG_coax",
	"Missile_AGM_02_Plane_CAS_01_F","Missile_AA_04_Plane_CAS_01_F","Missile_AA_03_Plane_CAS_02_F","Missile_AGM_01_Plane_CAS_02_F","missiles_DAGR",
	"missiles_DAR","missiles_ASRAAM","missiles_SCALPEL","missiles_titan","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_82mm",
	"mortar_155mm_AMOS","rockets_Skyfire","rockets_230mm_GAT","Rocket_04_HE_Plane_CAS_01_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_03_HE_Plane_CAS_02_F",
	"Rocket_03_AP_Plane_CAS_02_F","Twin_Cannon_20mm"
};



/*
	custom Box content:
	just an item like it is in the example with   "ItemMap"   will put the item once in the box.
	if an array is used like the   {"ItemGPS",5}   example, well I assume you could guess what it will do.
	
	You can just define as many as you want.
	{
		"BOX NAME",	// function name in the admin menu
		{
			"Item1","Item2",	// one per just item in a string
			{"Item1",5},{"Item2",10}	// second entry in each array defiens how many of items of the first entry are wanted.
		}
	}
	
	The last closing bracket in an array can not have a "," afterwards. So make sure to have no syntax errors here.
*/
allSupportBoxes[] =
{
	{
		"Support-Box1",
		{
			"Exile_Item_Flag","Exile_Item_CookingPot",
			{"Exile_Item_Codelock",5},{"Exile_Item_DuctTape",10},{"Exile_Item_InstaDoc",10},
			{"Exile_Item_Energydrink",10},{"Exile_Item_ExtensionCord",5},{"Exile_Item_FloodLightKit",5},
			{"Exile_Item_FortificationUpgrade",5},{"Exile_Item_FuelCanisterFull",5},{"Exile_Item_GloriousKnakworst_Cooked",10},
			{"Exile_Item_LightBulb",5},{"Exile_Item_Matches",5},{"Exile_Item_MetalBoard",5},
			{"Exile_Item_MetalPole",5},{"Exile_Item_PlasticBottleFreshWater",10},{"Exile_Item_PortableGeneratorKit",5},
			{"Exile_Item_Rope",15},{"Exile_Item_SafeKit",15},{"Exile_Magazine_Battery",15}
		}
	},
	{
		"Support-Box2",
		{
			"Exile_Item_Flag",
			{"Exile_Item_WoodDoorKit",15},{"Exile_Item_WoodDoorwayKit",15},{"Exile_Item_WoodDrawBridgeKit",15},
			{"Exile_Item_WoodFloorKit",15},{"Exile_Item_WoodFloorPortKit",15},{"Exile_Item_WoodGateKit",15},
			{"Exile_Item_WoodLog",15},{"Exile_Item_WoodPlank",15},{"Exile_Item_WoodStairsKit",15},
			{"Exile_Item_WoodSupportKit",15},{"Exile_Item_WoodWallHalfKit",15},{"Exile_Item_WoodWallKit",15},
			{"Exile_Item_WoodWindowKit",15},{"Exile_Item_WorkBenchKit",15}
		}
	},
	{
		"Support-Box3",
		{
			{"Exile_Item_Flag",5},{"Exile_Item_WoodDoorKit",15},{"Exile_Item_WoodWallKit",15},
			{"Exile_Item_WoodWindowKit",15},{"Exile_Item_WoodFloorKit",15},{"Exile_Item_SafeKit",5}
		}
	},
	{
		"Support-Box4",
		{
			"ItemMap",{"ItemGPS",5},"ItemWatch"
		}
	}
};
};