/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	= <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Banana.

	///////////////////////////////////////////////////////////////////////////////
	// Loot Tables
	///////////////////////////////////////////////////////////////////////////////

	Defines which item group spawns in which building type. The loot table itself
	is linked with a building in exile_server_config.pbo/config/CfgBuildings. Spawn
	chances work like for items.

	Syntax:
	> <Loot Table Name>
	<Spawn Chance Within Loot Table>,<Group Name>
*/



/*
	Loot Tables
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
60, Trash
10, Food
10, Drinks
20, Pistols
20, PistolAmmo
10, PistolAttachments
25, Shotguns
20, ShotgunAmmo
6, SMG
8, SMGAmmo
3, SMGAttachments
20, CivilianClothing
11, CivilianBackpacks
5, CivilianVests
20, CivilianHeadgear
20, CivilianItems
1, Restraints
10, Chemlights
10, RoadFlares
10, TRYKCivilianBackpacks
5, TRYKHeadgear
15, TRYKCivilianClothing
5, TRYKCivilianVests

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
40, Trash
28, Food
15, Drinks
20, Pistols
20, PistolAmmo
10, PistolAttachments
25, Shotguns
25, ShotgunAmmo
10, SMG
13, SMGAmmo
8, SMGAttachments
20, CivilianClothing
20, CivilianBackpacks
5, CivilianVests
20, CivilianHeadgear
10, CivilianItems
10, Chemlights
10, RoadFlares
1, Restraints
5, SmokeGrenades
20, TRYKCivilianBackpacks
10, TRYKHeadgear
20, TRYKCivilianClothing
10, TRYKCivilianVests

///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
30, Trash
30, Food
30, Drinks
15, Pistols
15, PistolAmmo
1, PistolAttachments
20, Shotguns
20, ShotgunAmmo
5, SMG
1, SMGAmmo
1, SMGAttachments
15, CivilianBackpacks
1, CivilianClothing
3, CivilianHeadgear
1, CivilianVests
7, CivilianItems
5, Chemlights
5, RoadFlares
4, SmokeGrenades
3, IndustrialItems
3, Restraints
13, MedicalItems
10, TRYKCivilianBackpacks
5, TRYKHeadgear
15, TRYKCivilianClothing
5, TRYKCivilianVests

///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
1, Food
1, Drinks
1, Electronics
30, Trash
40, IndustrialItems
15, Vehicle
15, RoadFlares
5, Restraints

///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
30, Vehicle
1, Electronics
40, Trash
50, IndustrialItems

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
30, Trash
25, IndustrialItems
40, Vehicle
15, RoadFlares
5, Restraints

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
5, Pistols
5, PistolAmmo
10, PistolAttachments
100, Trash
4, CivilianItems
6, GuerillaItems
3, HEGrenades
3, UGLFlares
3, UGLSmokes
3, HandGrenades
3, SmokeGrenades
2, Restraints
2, MedicalItems
5, GuerillaClothing
5, MilitaryClothing
4, GuerillaBackpacks
3, MilitaryBackpacks
3, GuerillaVests
2, MilitaryVests
5, GuerillaHeadgear
5, MilitaryHeadgear
1, Ghillies
1, Rebreathers
5, Rifles
3, RifleAmmo
7, RifleAttachments
3, LMG
3, LMGAmmo
2, Snipers
2, SniperAmmo
8, SniperAttachments
5, DLCAmmo
8, DLCOptics
1, DLCSupressor
4, Bipods
2, Explosives
2, BattleRifles
2, BattleRifleAmmo
5, BattleRifleAttachments
10, WinterGearMilitary
8, TRYKMilitaryClothing
8, TRYKMilitaryBackpacks
8, TRYKMilitaryVests

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc. (Does not spawn on Altis!)
///////////////////////////////////////////////////////////////////////////////
> Medical
30, Trash
70, MedicalItems

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
20, CivilianBackpacks
10, MilitaryBackpacks
10, MilitaryHeadgear
1, Ghillies
10, CivilianItems
4, HandGrenades
4, Restraints
4, MedicalItems
10, MilitaryClothing
10, GuerillaClothing
10, GuerillaBackpacks
5, GuerillaItems
10, Pistols
10, PistolAmmo
10, PistolAttachments

///////////////////////////////////////////////////////////////////////////////
// Ghost Hotel Buildings
///////////////////////////////////////////////////////////////////////////////
> Radiation
10, MilitaryBackpacks
10, MilitaryHeadgear
5, Ghillies
5, DLCGhillies
30, Snipers
2, SniperAmmo
2, SniperAttachments
30, DLCRifles
2, DLCAmmo
2, DLCOptics
2, DLCSupressor
4, HandGrenades
4, Restraints
4, MedicalItems
10, Explosives
4, EpicWeapons

///////////////////////////////////////////////////////////////////////////////
// Custom Crates
///////////////////////////////////////////////////////////////////////////////
> SuperCrate
5, EpicWeapons
5, DLCGhillies
5, Ghillies
20, EpicWeaponAmmo
20, DLCSupressor
10, DLCVests
60, Trash
20, DLCRifles
20, DLCOptics
30, WinterGearMilitary
20, BattleRifles
20, BattleRifleAmmo
10, Explosives



///////////////////////////////////////////////////////////////////////////////
// Chopper Crashes
///////////////////////////////////////////////////////////////////////////////

> ChopperCrash
1, EpicWeapons
1, EpicWeaponAmmo
10, Explosives
10, MilitaryBackpacks
20, GuerillaItems
10, Snipers
10, SniperAmmo
2, DLCVests
20, MilitaryClothing
3, Ghillies
10, MilitaryVests
30, Rifles
25, RifleAmmo
30, RifleAttachments
20, BattleRifles
20, BattleRifleAmmo
20, BattleRifleAttachments
30, WinterGearMilitary
20, TRYKMilitaryBackpacks
20, TRYKMilitaryClothing
20, TRYKMilitaryVests


///////////////////////////////////////////////////////////////////////////////
// Barns
///////////////////////////////////////////////////////////////////////////////

> BarnLoot
30, Trash
10, SMG
20, ShotgunAmmo
25, Shotguns
25, Pistols
20, PistolAmmo
10, CivilianHeadgear
40, BarnCustom
5, Food
5, Drinks
