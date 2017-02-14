/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 250;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{

class CraftFlag: Exile_AbstractCraftingRecipe
{
	name = "Craft Territory Flag";
	pictureItem = "Exile_Item_Flag";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_Flag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"},
		{1, "Exile_Item_Magazine03"},
		{1, "Exile_Item_Magazine04"}
	};
};

class CraftMetalTower: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Tower";
	pictureItem = "Land_Cargo_Patrol_V2_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Cargo_Patrol_V2_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{8, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftMetalHouse: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal House";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftMetalShed: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Shed";
	pictureItem = "Land_Metal_Shed_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftHBarrierWall: Exile_AbstractCraftingRecipe
{
	name = "Craft H-Barrier Wall";
	pictureItem = "Land_Hbarrier6_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_Hbarrier6_F_Kit"}
	};
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftHBarrierWallCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier Wall Corner";
	pictureItem = "Land_HBarrierWall_corner_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_HBarrierWall_corner_F_Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftHBarrierTower: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier Tower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"},
		{4, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftBunker: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbag Bunker";
	pictureItem = "Land_BagBunker_Tower_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"},
		{4, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_Rope"},
		{4, "Exile_Item_Sand"}
	};
};

class CraftSunshade: Exile_AbstractCraftingRecipe
{
	name = "Craft Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"}
	};
};

class CraftSunchair: Exile_AbstractCraftingRecipe
{
	name = "Craft Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"}
	};
};

class Craft9mmSilencer: Exile_AbstractCraftingRecipe
{
	name = "Craft 9mm Suppressor";
	pictureItem = "Exile_Item_Foolbox";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "muzzle_snds_L"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Grinder"
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftCodeLock: Exile_AbstractCraftingRecipe
{
	name = "Craft Code Lock";
	pictureItem = "Exile_Item_CodeLock";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_CodeLock"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Hammer",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"},
		{1, "Exile_Item_LightBulb"}
	};
};

class CraftScrew: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Screws";
	pictureItem = "Exile_Item_MetalScrews";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	returnedItems[] =
	{
		{1, "Exile_Item_MetalScrews"}
	};
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class ScrapExtinguisher: Exile_AbstractCraftingRecipe
{
	name = "Scrap Fire Extinguisher";
	pictureItem = "Exile_Item_FireExtinguisher";
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	components[] = 
	{
		{1, "Exile_Item_FireExtinguisher"}
	};
};

class TrimWood: Exile_AbstractCraftingRecipe
{
	name = "Trim Wood";
	pictureItem = "Exile_Item_WoodSticks";
	tools[] =
	{
		"Exile_Item_Knife"
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodSticks"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodLog"}
	};
};

class TrimStick: Exile_AbstractCraftingRecipe
{
	name = "Pluck Leaves";
	pictureItem = "Exile_Item_Leaves";
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Leaves"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodSticks"}
	};
};

class CraftSVDGhillie: Exile_AbstractCraftingRecipe
{
	name = "Craft SVD Ghillie";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "CUP_SVD_camo_g_half"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_WoodSticks"},
		{8, "Exile_Item_Leaves"}
	};
};

class CraftM24Ghillie: Exile_AbstractCraftingRecipe
{
	name = "Craft M24/M40 Ghillie";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "CUP_Mxx_camo_half"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_WoodSticks"},
		{8, "Exile_Item_Leaves"}
	};
};

class CraftGhillieSuit: Exile_AbstractCraftingRecipe
{
	name = "Craft Ghillie Suit";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "TRYK_H_ghillie_over_green"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{6, "Exile_Item_Rope"},
		{4, "Exile_Item_WoodSticks"},
		{12, "Exile_Item_Leaves"}
	};
};

class CraftVishpirin: Exile_AbstractCraftingRecipe
{
	name = "Craft Vishpirin";
	pictureItem = "Exile_Item_Vishpirin";
	returnedItems[] =
	{
		{1, "Exile_Item_Vishpirin"}
	};
	components[] = 
	{
		{3, "Exile_Item_Bandage"},
		{2, "Exile_Item_Beer"}
	};
};

class CraftKnifeCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	components[] = 
	{
		{1, "Exile_Item_Knife"},
		{1, "Exile_Item_ZipTie"}
	};
};

class CraftPlierCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	components[] = 
	{
		{1, "Exile_Item_Pliers"},
		{1, "Exile_Item_ZipTie"}
	};
};

class CraftTent: Exile_AbstractCraftingRecipe
{
	name = "Craft Tent";
	pictureItem = "Exile_Item_CamoTentKit";
	returnedItems[] =
	{
		{1, "Exile_Item_CamoTentKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_Rope"},
		{4, "Exile_Item_WoodSticks"},
		{6, "Exile_Item_Leaves"}
	};
};

class CraftRevolverAmmo: Exile_AbstractCraftingRecipe
{
	name = "Swap .45 Rounds";
	pictureItem = "Exile_Magazine_6Rnd_45ACP";
	returnedItems[] =
	{
		{1, "Exile_Magazine_6Rnd_45ACP"}
	};
	components[] = 
	{
		{1, "Exile_Magazine_7Rnd_45ACP"}
		
	};
};

class CraftWireBarrier: Exile_AbstractCraftingRecipe
{
	name = "Craft Barbed Wire Barrier";
	pictureItem = "Exile_Item_RazorWireKit";
	returnedItems[] =
	{
		{2, "Land_Razorwire_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_WoodPlank"}
	};
};

class CraftWire: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Wire";
	pictureItem = "Exile_Item_MetalWire";
	requiresFire = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot",
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class SmeltTags: Exile_AbstractCraftingRecipe
{
	name = "Smelt Dog Tags";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{5, "CUP_item_CDF_Dogtags"}
	};
};

class SmeltCans: Exile_AbstractCraftingRecipe
{
	name = "Smelt Empty Cans";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{4, "Exile_Item_Can_Empty"}
	};
};
	
class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"}
		
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Saw Window Port";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Handsaw"};
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
};
/////////////////////////////////////////////
//EXTENDED BASE MOD
/////////////////////////////////////////////
class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Craft Large Storage Rack";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Grinder"
	};
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Container";
};

class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Road Barrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	category = "Walls";
};

class PierLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Ladder";
	pictureItem = "PierLadder_F_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Grinder"};
	returnedItems[] = 
	{
		{1, "PierLadder_F_Kit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Misc";
};

class CNCWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Fence";
	pictureItem = "Land_Wall_Tin_4_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Hammer", "Exile_Item_Grinder"};	
	returnedItems[] = 
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Walls";
};

class Chair: Exile_AbstractCraftingRecipe
{
	name = "Craft Wooden Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Handsaw", "Exile_Item_Hammer"};
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Misc";
};

};


class CfgExileArsenal
{
	///////////////////////////////////////////////////////////////////////////////
	//IRON FRONT ITEMS
	///////////////////////////////////////////////////////////////////////////////
	class LIB_SVT_40								{ quality = 1; price = 50; };
	class LIB_G43									{ quality = 1; price = 50; };
	class LIB_M38									{ quality = 1; price = 50; };
	class LIB_FLARE_PISTOL							{ quality = 1; price = 50; };
	class LIB_1Rnd_flare_red						{ quality = 1; price = 50; };
	class LIB_TT33									{ quality = 1; price = 50; };
	class LIB_P38									{ quality = 1; price = 50; };
	class LIB_K98									{ quality = 1; price = 50; };
	class LIB_M1_Garand								{ quality = 1; price = 50; };
	class lib_8Rnd_762x25							{ quality = 1; price = 50; };
	class LIB_8Rnd_9x19								{ quality = 1; price = 50; };
	class LIB_5Rnd_792x57_t							{ quality = 1; price = 50; };
	class LIB_5Rnd_762x54							{ quality = 1; price = 50; };
	class LIB_10Rnd_762x54							{ quality = 1; price = 50; };
	class LIB_10Rnd_792x57							{ quality = 1; price = 50; };
	class LIB_8Rnd_762x63							{ quality = 1; price = 50; };
	class G_LIB_GER_Gloves2							{ quality = 1; price = 50; };
	class G_LIB_GER_Gloves3							{ quality = 1; price = 50; };
	class H_LIB_SOV_Ushanka2						{ quality = 1; price = 50; };
	class B_LIB_GER_Backpack						{ quality = 1; price = 50; };
	class B_LIB_SOV_RA_Rucksack						{ quality = 1; price = 50; };
	class B_LIB_SOV_RA_Rucksack_Green				{ quality = 1; price = 50; };
	class B_LIB_US_Backpack							{ quality = 1; price = 50; };
	class B_LIB_US_MGbag_Empty						{ quality = 1; price = 50; };
	class B_LIB_GER_Tonister34_cowhide				{ quality = 1; price = 50; };
	class V_LIB_WP_OfficerVest						{ quality = 1; price = 50; };
	class V_LIB_SOV_RA_OfficerVest					{ quality = 1; price = 50; };
	class V_LIB_GER_VestSTG							{ quality = 1; price = 50; };
	class V_LIB_GER_VestUnterofficer				{ quality = 1; price = 50; };
	class V_LIB_GER_FieldOfficer					{ quality = 1; price = 50; };
	class V_LIB_GER_PioneerVest						{ quality = 1; price = 50; };
	class V_LIB_SOV_RA_TankOfficerSet				{ quality = 1; price = 50; };
	class U_LIB_GER_Soldier_camo					{ quality = 1; price = 50; };
	class U_LIB_GER_Soldier_camo2					{ quality = 1; price = 50; };
	class U_LIB_GER_Soldier_camo3					{ quality = 1; price = 50; };
	class U_LIB_GER_Soldier_camo4					{ quality = 1; price = 50; };
	class U_LIB_GER_Soldier_camo5					{ quality = 1; price = 50; };
	class U_LIB_SOV_Strelok							{ quality = 1; price = 50; };
	class U_LIB_SOV_Strelok_summer					{ quality = 1; price = 50; };
	class U_LIB_SOV_Kapitan							{ quality = 1; price = 50; };
	class U_LIB_SOV_Kapitan_summer					{ quality = 1; price = 50; };
	class U_LIB_SOV_Razvedchik_am					{ quality = 1; price = 50; };
	class U_LIB_US_Cap								{ quality = 1; price = 50; };
	class V_LIB_SOV_IShBrVestMG						{ quality = 1; price = 50; };
	class H_LIB_SOV_RA_Helmet						{ quality = 1; price = 50; };
	class H_LIB_SOV_RA_PrivateCap					{ quality = 1; price = 50; };
	class H_LIB_SOV_RA_OfficerCap					{ quality = 1; price = 50; };
	class H_LIB_SOV_RA_Ushanka2						{ quality = 1; price = 50; };
	class H_LIB_NKVD_PrivateCap						{ quality = 1; price = 50; };
	class H_LIB_NKVD_OfficerCap						{ quality = 1; price = 50; };
		
	///////////////////////////////////////////////////////////////////////////////
	// CUP WEAPONS
	///////////////////////////////////////////////////////////////////////////////
	class CUP_launch_M136							{ quality = 1; price = 1500; };
	class CUP_M136_M								{ quality = 1; price = 250; };
	class CUP_srifle_LeeEnfield						{ quality = 1; price = 130; };
	class CUP_srifle_CZ550_rail						{ quality = 1; price = 130; };
	class CUP_10x_303_M								{ quality = 1; price = 20; };
	class CUP_5x_22_LR_17_HMR_M						{ quality = 1; price = 20; };
	class CUP_hgun_Glock17							{ quality = 1; price = 50; };
	class CUP_hgun_M9								{ quality = 1; price = 50; };
	class CUP_hgun_MicroUZI							{ quality = 1; price = 75; };
	class CUP_hgun_SA61								{ quality = 1; price = 75; };
	class CUP_sgun_M1014							{ quality = 1; price = 130; };
	class CUP_smg_bizon								{ quality = 1; price = 130; };
	class CUP_srifle_LeeEnfield_rail				{ quality = 1; price = 130; };
	class CUP_arifle_L85A2							{ quality = 1; price = 225; };
	class CUP_arifle_L85A2_G						{ quality = 1; price = 225; };
	class CUP_arifle_L85A2_NG						{ quality = 1; price = 225; };
	class CUP_lmg_PKM								{ quality = 1; price = 600; };
	class CUP_lmg_Pecheneg							{ quality = 1; price = 600; };
	class CUP_srifle_M24_wdl						{ quality = 1; price = 350; };
	class CUP_srifle_M40A3							{ quality = 1; price = 350; };
	class CUP_srifle_ksvk							{ quality = 1; price = 800; };
	class CUP_srifle_SVD							{ quality = 1; price = 350; };
	class CUP_srifle_M14							{ quality = 1; price = 350; };
	class CUP_srifle_M14_DMR						{ quality = 1; price = 450; };
	class CUP_srifle_VSSVintorez					{ quality = 1; price = 230; };
	class CUP_srifle_Mk12SPR						{ quality = 1; price = 230; };
	class CUP_srifle_AS50							{ quality = 1; price = 950; };
	class CUP_srifle_M107_Base						{ quality = 1; price = 950; };
	class CUP_muzzle_snds_L85						{ quality = 1; price = 125; };
	class CUP_muzzle_snds_M9						{ quality = 1; price = 100; };
	class CUP_muzzle_snds_MicroUzi					{ quality = 1; price = 100; };
	class CUP_optic_CompM2_Black					{ quality = 1; price = 50; };
	class CUP_optic_RCO								{ quality = 1; price = 125; };
	class CUP_optic_LeupoldMk4						{ quality = 1; price = 200; };
	class CUP_optic_CompM4							{ quality = 1; price = 50; };
	class CUP_optic_ACOG							{ quality = 1; price = 125; };
	class CUP_optic_Elcan_reflex					{ quality = 1; price = 125; };
	class CUP_optic_PechenegScope					{ quality = 1; price = 125; };
	class CUP_optic_LeupoldM3LR						{ quality = 1; price = 200; };
	class CUP_optic_ZDDot							{ quality = 1; price = 50; };
	class CUP_optic_SB_3_12x50_PMII					{ quality = 1; price = 200; };
	class CUP_optic_AN_PVS_4						{ quality = 1; price = 350; };
	class CUP_NVG_PVS7								{ quality = 1; price = 450; };
	class CUP_5Rnd_762x51_M24						{ quality = 1; price = 45; };
	class CUP_5Rnd_127x108_KSVK_M					{ quality = 1; price = 150; };
	class CUP_10Rnd_762x54_SVD_M					{ quality = 1; price = 50; };
	class CUP_20Rnd_9x39_SP5_VSS_M					{ quality = 1; price = 30; };
	class CUP_5Rnd_127x99_as50_M					{ quality = 1; price = 175; };
	class CUP_10Rnd_127x99_M107						{ quality = 1; price = 175; };
	class CUP_8Rnd_B_Beneli_74Pellets				{ quality = 1; price = 20; };
	class CUP_30Rnd_9x19_UZI						{ quality = 1; price = 30; };
	class CUP_64Rnd_9x19_Bizon_M					{ quality = 1; price = 35; };
	class CUP_17Rnd_9x19_glock17					{ quality = 1; price = 20; };
	class CUP_15Rnd_9x19_M9							{ quality = 1; price = 20; };
	class CUP_20Rnd_B_765x17_Ball_M					{ quality = 1; price = 30; };
	class CUP_item_Money							{ quality = 1; price = 1500; };
	class CUP_item_CDF_Dogtags						{ quality = 1; price = 5; };  
	class CUP_srifle_M110							{ quality = 1; price = 375; };
	class CUP_20Rnd_762x51_B_M110					{ quality = 1; price = 50; };
	class CUP_20Rnd_762x51_DMR						{ quality = 1; price = 50; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR	{ quality = 1; price = 50; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR		{ quality = 1; price = 50; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR		{ quality = 1; price = 50; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR		{ quality = 1; price = 50; };
	class CUP_B_ACRPara_m95							{ quality = 1; price = 75; };  
	class CUP_B_ACRScount_m95						{ quality = 1; price = 75; };  
	class CUP_B_CivPack_WDL							{ quality = 1; price = 75; };  
	class CUP_B_RPGPack_Khaki						{ quality = 1; price = 75; };  
	class CUP_B_AlicePack_Khaki						{ quality = 1; price = 75; };  
	class CUP_B_AlicePack_Bedroll					{ quality = 1; price = 75; };  
	class CUP_B_AssaultPack_Coyote					{ quality = 1; price = 75; };  
	class CUP_B_AssaultPack_ACU						{ quality = 1; price = 75; };  
	class CUP_B_AssaultPack_Black					{ quality = 1; price = 75; };  
	class CUP_B_HikingPack_Civ						{ quality = 1; price = 75; };  
	class CUP_B_SLA_Medicbag						{ quality = 1; price = 75; }; 
	
	///////////////////////////////////////////////////////////////////////////////
	// CUP Equipment
	///////////////////////////////////////////////////////////////////////////////
	class CUP_U_C_Pilot_01							{ quality = 1; price = 40; };
	class CUP_U_C_Citizen_01						{ quality = 1; price = 40; };
	class CUP_U_C_Citizen_02						{ quality = 1; price = 40; };
	class CUP_U_C_Citizen_03						{ quality = 1; price = 40; };
	class CUP_U_C_Citizen_04						{ quality = 1; price = 40; };
	class CUP_U_C_Worker_01							{ quality = 1; price = 40; };
	class CUP_U_C_Worker_02							{ quality = 1; price = 40; };
	class CUP_U_C_Worker_03							{ quality = 1; price = 40; };
	class CUP_U_C_Worker_04							{ quality = 1; price = 40; };
	class CUP_U_C_Profiteer_01						{ quality = 1; price = 40; };
	class CUP_U_C_Profiteer_02						{ quality = 1; price = 40; };
	class CUP_U_C_Profiteer_03						{ quality = 1; price = 40; };
	class CUP_U_C_Profiteer_04						{ quality = 1; price = 40; };
	class CUP_U_C_Woodlander_01						{ quality = 1; price = 40; };
	class CUP_U_C_Woodlander_02						{ quality = 1; price = 40; };
	class CUP_U_C_Woodlander_03						{ quality = 1; price = 40; };
	class CUP_U_C_Woodlander_04						{ quality = 1; price = 40; };
	class CUP_U_C_Villager_01						{ quality = 1; price = 40; };
	class CUP_U_C_Villager_02						{ quality = 1; price = 40; };
	class CUP_U_C_Villager_03						{ quality = 1; price = 40; };
	class CUP_U_C_Villager_04						{ quality = 1; price = 40; };
	class CUP_U_C_Rocker_01							{ quality = 1; price = 40; };
	class CUP_U_C_Rocker_02							{ quality = 1; price = 40; };
	class CUP_U_C_Rocker_03							{ quality = 1; price = 40; };
	class CUP_U_C_Rocker_04							{ quality = 1; price = 40; };
	class CUP_U_C_Mechanic_01						{ quality = 1; price = 40; };
	class CUP_U_C_Mechanic_02						{ quality = 1; price = 40; };
	class CUP_U_C_Mechanic_03						{ quality = 1; price = 40; };
	class CUP_U_O_CHDKZ_Bardak						{ quality = 1; price = 40; };
	class CUP_U_O_CHDKZ_Lopotev						{ quality = 1; price = 40; };
	class CUP_U_I_GUE_Anorak_01						{ quality = 1; price = 40; };
	class CUP_U_I_GUE_Anorak_03						{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Blue					{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Brown					{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Green					{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Red						{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Violet					{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_White					{ quality = 1; price = 40; };
	class CUP_U_B_USMC_Navy_Yellow					{ quality = 1; price = 40; };
	class CUP_U_C_Priest_01							{ quality = 1; price = 40; };
	class CUP_U_C_Policeman_01						{ quality = 1; price = 40; };
	class CUP_U_C_Fireman_01						{ quality = 1; price = 40; };
	class CUP_U_C_Rescuer_01						{ quality = 1; price = 40; };
	class CUP_V_I_Guerilla_Jacket					{ quality = 1; price = 45; };
	class CUP_V_OI_TKI_Jacket1_04					{ quality = 1; price = 45; };
	class CUP_V_OI_TKI_Jacket1_05					{ quality = 1; price = 45; };
	class CUP_V_OI_TKI_Jacket1_06					{ quality = 1; price = 45; };
	class CUP_V_OI_TKI_Jacket4_05					{ quality = 1; price = 45; };
	class CUP_V_OI_TKI_Jacket4_06					{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Blue						{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Brown						{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Green						{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Red						{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Violet					{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_White						{ quality = 1; price = 45; };
	class CUP_V_B_LHDVest_Yellow					{ quality = 1; price = 55; };
	class CUP_H_C_Ushanka_01						{ quality = 1; price = 15; };
	class CUP_H_C_Ushanka_02						{ quality = 1; price = 15; };
	class CUP_H_C_Ushanka_03						{ quality = 1; price = 15; };
	class CUP_H_C_Ushanka_04						{ quality = 1; price = 15; };
	class CUP_H_C_Beanie_01							{ quality = 1; price = 15; };
	class CUP_H_C_Beanie_02							{ quality = 1; price = 15; };
	class CUP_H_C_Beanie_03							{ quality = 1; price = 15; };
	class CUP_H_C_Beanie_04							{ quality = 1; price = 15; };
	class CUP_H_C_Policecap_01						{ quality = 1; price = 15; };
	class CUP_H_C_Fireman_Helmet_01					{ quality = 1; price = 15; };
	class CUP_H_NAPA_Fedora							{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Grey						{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Tan							{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Burberry					{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Back_Grey					{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Back_Tan					{ quality = 1; price = 15; };
	class CUP_H_PMC_Cap_Back_Burberry				{ quality = 1; price = 15; };
	class CUP_U_I_GUE_Flecktarn2					{ quality = 1; price = 60; };
	class CUP_U_I_GUE_Flecktarn3					{ quality = 1; price = 60; };
	class CUP_U_I_GUE_Woodland1						{ quality = 1; price = 60; };
	class CUP_U_O_CHDKZ_Kam_04						{ quality = 1; price = 60; };
	class CUP_U_O_RUS_Flora_1						{ quality = 1; price = 60; };
	class CUP_U_O_RUS_Gorka_Partizan				{ quality = 1; price = 60; };
	class CUP_U_O_RUS_Gorka_Partizan_A				{ quality = 1; price = 60; };
	class CUP_U_O_Partisan_TTsKO					{ quality = 1; price = 60; };
	class CUP_U_B_CDF_MNT_1							{ quality = 1; price = 60; };
	class CUP_U_B_CDF_FST_1							{ quality = 1; price = 60; };
	class CUP_V_I_RACS_Carrier_Vest_wdl				{ quality = 1; price = 75; };
	class CUP_V_O_SLA_Flak_Vest01					{ quality = 1; price = 75; };
	class CUP_V_O_SLA_Flak_Vest02					{ quality = 1; price = 75; };
	class CUP_V_O_SLA_Flak_Vest03					{ quality = 1; price = 75; };
	class CUP_V_B_Interceptor_Rifleman				{ quality = 1; price = 75; };
	class CUP_V_B_RRV_TL							{ quality = 1; price = 75; };
	class CUP_V_B_RRV_Officer						{ quality = 1; price = 75; };
	class CUP_V_B_RRV_Scout2						{ quality = 1; price = 75; };
	class CUP_V_B_RRV_Scout3						{ quality = 1; price = 75; };
	class CUP_V_CDF_6B3_1_FST						{ quality = 1; price = 75; };
	class CUP_V_CDF_6B3_1_MNT						{ quality = 1; price = 75; };
	class CUP_V_CDF_6B3_1_Green						{ quality = 1; price = 75; };
	class CUP_H_BAF_Helmet_Pilot					{ quality = 1; price = 90; };
	class CUP_H_BAF_Helmet_4_DPM					{ quality = 1; price = 90; };
	class CUP_H_BAF_Helmet_4_MTP					{ quality = 1; price = 90; };
	class CUP_H_RACS_Helmet_olive					{ quality = 1; price = 90; };
	class CUP_H_RACS_Helmet_tan						{ quality = 1; price = 90; };
	class CUP_H_RUS_6B27_NVG						{ quality = 1; price = 90; };
	class CUP_H_RUS_6B27_NVG_olive					{ quality = 1; price = 90; };
	class CUP_H_RUS_6B27							{ quality = 1; price = 90; };
	class CUP_H_RUS_6B27_olive						{ quality = 1; price = 90; };
	class CUP_H_RUS_ZSH_1_Goggles					{ quality = 1; price = 90; };
	class CUP_H_SLA_Helmet							{ quality = 1; price = 90; };
	class CUP_H_TK_TankerHelmet						{ quality = 1; price = 90; };
	class CUP_H_TK_Helmet							{ quality = 1; price = 90; };
	class CUP_H_TK_PilotHelmet						{ quality = 1; price = 90; };
	class CUP_H_USArmy_HelmetMICH_wdl				{ quality = 1; price = 90; };
	class CUP_H_USMC_Helmet_Pilot					{ quality = 1; price = 90; };
	class CUP_H_CDF_H_PASGT_UN						{ quality = 1; price = 90; };
	class CUP_H_CDF_Beret_UN						{ quality = 1; price = 90; };
	class CUP_H_CDF_H_PASGT_MNT						{ quality = 1; price = 90; };
	class CUP_H_CDF_H_PASGT_FST						{ quality = 1; price = 90; };
	class CUP_H_USArmy_Helmet_ECH1_Green			{ quality = 1; price = 90; };
	class CUP_H_SLA_Pilot_Helmet					{ quality = 1; price = 90; };
	class CUP_H_SLA_OfficerCap						{ quality = 1; price = 15; };
	class CUP_U_I_Ghillie_Top						{ quality = 1; price = 150; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Enhanced Base Mod
	///////////////////////////////////////////////////////////////////////////////
	class Land_ChairWood_F_Kit						{ quality = 1; price = 30; };
	class Land_Wall_Tin_4_Kit						{ quality = 1; price = 150; };
	class Land_CncBarrierMedium_F_Kit				{ quality = 1; price = 250; };
	class Land_Cargo_addon02_V2_F_Kit				{ quality = 1; price = 50; };
	class PierLadder_F_Kit							{ quality = 1; price = 125; };
	class Land_CncBarrier_F_Kit						{ quality = 1; price = 75; };
	class Land_Metal_wooden_rack_F_Kit				{ quality = 5; price = 850; };
	class Land_Sun_chair_F_Kit						{ quality = 1; price = 40; };
	class Land_Sunshade_04_F_Kit					{ quality = 1; price = 40; };
	class Land_Sleeping_bag_F_Kit					{ quality = 1; price = 45; };
	class Land_CampingChair_V1_F_Kit				{ quality = 1; price = 60; };
	class Land_CampingChair_V2_F_Kit				{ quality = 1; price = 60; };
	class Land_CampingTable_F_Kit					{ quality = 1; price = 60; };
	class Land_TentDome_F_Kit						{ quality = 1; price = 150; };
	class Land_Razorwire_F_Kit						{ quality = 1; price = 75; };
	class Land_BarGate_F_Kit						{ quality = 1; price = 150; };
	class Land_PlasticCase_01_medium_F_Kit			{ quality = 1; price = 1250; };
	
	//everything else
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };
	//class rzinfection_antivirus_pills				{ quality = 3; price = 300; };
	//class rzinfection_antivirus_injector			{ quality = 5; price = 850; };
	class Exile_Item_Flag							{ quality = 5; price = 5000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Grips & Barrels
	///////////////////////////////////////////////////////////////////////////////
	class hlc_acc_Surefiregrip						{ quality = 1; price = 20; };
	class hlc_barrel_standard						{ quality = 1; price = 69; };
	class hlc_barrel_carbine						{ quality = 1; price = 69; };
	class hlc_barrel_hbar							{ quality = 1; price = 69; };
	class hlc_barrel_9mm							{ quality = 1; price = 69; };
	
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK HeadGear
    ///////////////////////////////////////////////////////////////////////////////
	
	class TRYK_H_MARPAT_Wood                            { quality = 1; price = 140; };
    class TRYK_ESS_CAP_OD                               { quality = 1; price = 6; };
    class TRYK_ESS_CAP_tan                              { quality = 1; price = 6; };
    class TRYK_R_CAP_BLK                                { quality = 1; price = 6; };
    class TRYK_R_CAP_TAN                                { quality = 1; price = 6; };
    class TRYK_R_CAP_OD_US                              { quality = 1; price = 6; };
    class TRYK_r_cap_tan_Glasses                        { quality = 1; price = 6; };
    class TRYK_r_cap_blk_Glasses                        { quality = 1; price = 6; };
    class TRYK_r_cap_od_Glasses                         { quality = 1; price = 6; };
    class TRYK_H_headsetcap_Glasses                     { quality = 1; price = 6; };
    class TRYK_H_headsetcap_blk_Glasses                 { quality = 1; price = 6; };
    class TRYK_H_headsetcap_od_Glasses                  { quality = 1; price = 6; };
    class TRYK_TAC_SET_bn                               { quality = 1; price = 6; };
    class TRYK_TAC_SET_TAN                              { quality = 1; price = 6; };
    class TRYK_TAC_SET_OD                               { quality = 1; price = 6; };
    class TRYK_TAC_SET_WH                               { quality = 1; price = 6; };
    class TRYK_TAC_SET_MESH                             { quality = 1; price = 6; };
    class TRYK_TAC_SET_TAN_2                            { quality = 1; price = 6; };
    class TRYK_TAC_SET_OD_2                             { quality = 1; price = 6; };
    class TRYK_TAC_SET_WH_2                             { quality = 1; price = 6; };
    class TRYK_TAC_SET_MESH_2                           { quality = 1; price = 6; };
    class TRYK_H_PASGT_BLK                              { quality = 1; price = 100; };
    class TRYK_H_PASGT_OD                               { quality = 1; price = 100; };
    class TRYK_H_PASGT_COYO                             { quality = 1; price = 100; };
    class TRYK_H_PASGT_TAN                              { quality = 1; price = 100; };
    class TRYK_H_ghillie_over                           { quality = 1; price = 150; };
    class TRYK_H_ghillie_over_green                     { quality = 1; price = 150; };
    class TRYK_H_woolhat                                { quality = 1; price = 6; };
    class TRYK_H_woolhat_br                             { quality = 1; price = 6; };
    class TRYK_H_woolhat_cu                             { quality = 1; price = 6; };
    class TRYK_H_woolhat_tan                            { quality = 1; price = 6; };
    class TRYK_H_pakol                                  { quality = 1; price = 6; };
    class TRYK_H_pakol2                                 { quality = 1; price = 6; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK NeckGear
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_Shemagh_shade_MESH                       { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_N                          { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_G_N                        { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_WH_N                       { quality = 1; price = 6; };
    class TRYK_kio_balaclava_WH                         { quality = 1; price = 6; };
    class TRYK_kio_balaclava_BLK                        { quality = 1; price = 6; };
    class TRYK_kio_balaclavas                           { quality = 1; price = 6; };
    class TRYK_kio_balaclava_BLK_ear                    { quality = 1; price = 6; };
    class TRYK_kio_balaclava_ear                        { quality = 1; price = 6; };
    class TRYK_kio_balaclava_ESS                        { quality = 1; price = 6; };
    class TRYK_Shemagh                                  { quality = 1; price = 6; };
    class TRYK_Shemagh_mesh                             { quality = 1; price = 6; };
    class TRYK_Shemagh_G                                { quality = 1; price = 6; };
    class TRYK_Shemagh_WH                               { quality = 1; price = 6; };
    class TRYK_Shemagh_shade                            { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_G                          { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_WH                         { quality = 1; price = 6; };
    class TRYK_Shemagh_shade_MH                         { quality = 1; price = 6; };
    class TRYK_Shemagh_ESS                              { quality = 1; price = 6; };
    class TRYK_Shemagh_ESS_G                            { quality = 1; price = 6; };
    class TRYK_Shemagh_ESS_WH                           { quality = 1; price = 6; };
    class TRYK_Shemagh_EAR_TAN                          { quality = 1; price = 6; };
    class TRYK_Shemagh_EAR_WH                           { quality = 1; price = 6; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK Uniforms
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_HRP_UCP                                  { quality = 1; price = 80; };
    class TRYK_HRP_USMC                                 { quality = 1; price = 80; };
    class TRYK_HRP_khk                                  { quality = 1; price = 80; };
    class TRYK_U_B_OD_OD_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_OD_OD_R_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_TANTAN_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_TANTAN_R_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_BLKBLK_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_BLKBLK_R_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_GRYOCP_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_GRYOCP_R_CombatUniformTshirt         { quality = 1; price = 80; };
    class TRYK_U_B_TANOCP_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_TANOCP_R_CombatUniformTshirt         { quality = 1; price = 80; };
    class TRYK_U_B_BLKOCP_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_BLKOCP_R_CombatUniformTshirt         { quality = 1; price = 80; };
    class TRYK_U_B_BLKTAN_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_BLKTANR_CombatUniformTshirt          { quality = 1; price = 80; };
    class TRYK_U_B_ODTAN_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_ODTANR_CombatUniformTshirt           { quality = 1; price = 80; };
    class TRYK_U_B_GRTAN_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_GRTANR_CombatUniformTshirt           { quality = 1; price = 80; };
    class TRYK_U_B_wood_CombatUniform                   { quality = 1; price = 80; };
    class TRYK_U_B_woodR_CombatUniformTshirt            { quality = 1; price = 80; };
    class TRYK_U_B_wood3c_CombatUniform                 { quality = 1; price = 80; };
    class TRYK_U_B_wood3c_CombatUniformTshirt           { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_WOOD_CombatUniform            { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_WOOD_CombatUniformTshirt      { quality = 1; price = 80; };
    class TRYK_U_B_WOOD_MARPAT_CombatUniform            { quality = 1; price = 80; };
    class TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt      { quality = 1; price = 80; };
    class TRYK_U_B_woodtan_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_woodtanR_CombatUniformTshirt         { quality = 1; price = 80; };
    class TRYK_U_B_JSDF_CombatUniform                   { quality = 1; price = 80; };
    class TRYK_U_B_JSDF_CombatUniformTshirt             { quality = 1; price = 80; };
    class TRYK_U_B_3CD_Delta_BDU                        { quality = 1; price = 80; };
    class TRYK_U_B_3CD_Delta_BDUTshirt                  { quality = 1; price = 80; };
    class TRYK_U_B_3CD_Ranger_BDU                       { quality = 1; price = 80; };
    class TRYK_U_B_3CD_Ranger_BDUTshirt                 { quality = 1; price = 80; };
    class TRYK_U_B_3CD_BLK_BDUTshirt                    { quality = 1; price = 80; };
    class TRYK_U_B_3CD_BLK_BDUTshirt2                   { quality = 1; price = 80; };
    class TRYK_U_B_ACU                                  { quality = 1; price = 80; };
    class TRYK_U_B_ACUTshirt                            { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Wood                          { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Wood_Tshirt                   { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Desert                        { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Desert_Tshirt                 { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Desert2                       { quality = 1; price = 80; };
    class TRYK_U_B_MARPAT_Desert2_Tshirt                { quality = 1; price = 80; };
    class TRYK_U_B_3c                                   { quality = 1; price = 80; };
    class TRYK_U_B_3cr                                  { quality = 1; price = 80; };
    class TRYK_U_B_Sage_Tshirt                          { quality = 1; price = 80; };
    class TRYK_U_B_BLK3CD                               { quality = 1; price = 80; };
    class TRYK_U_B_BLK3CD_Tshirt                        { quality = 1; price = 80; };
    class TRYK_U_B_BLK                                  { quality = 1; price = 80; };
    class TRYK_U_B_BLK_Tshirt                           { quality = 1; price = 80; };
    class TRYK_U_B_BLKTAN                               { quality = 1; price = 80; };
    class TRYK_U_B_BLKTAN_Tshirt                        { quality = 1; price = 80; };
    class TRYK_U_B_ODTAN                                { quality = 1; price = 80; };
    class TRYK_U_B_ODTAN_Tshirt                         { quality = 1; price = 80; };
    class TRYK_U_B_BLK_OD                               { quality = 1; price = 80; };
    class TRYK_U_B_BLK_OD_Tshirt                        { quality = 1; price = 80; };
    class TRYK_U_B_C01_Tsirt                            { quality = 1; price = 80; };
    class TRYK_U_B_C02_Tsirt                            { quality = 1; price = 80; };
    class TRYK_U_B_OD_BLK                               { quality = 1; price = 80; };
    class TRYK_U_B_OD_BLK_2                             { quality = 1; price = 80; };
    class TRYK_U_B_BLK_TAN_1                            { quality = 1; price = 80; };
    class TRYK_U_B_BLK_TAN_2                            { quality = 1; price = 80; };
    class TRYK_U_B_wh_tan_Rollup_CombatUniform          { quality = 1; price = 80; };
    class TRYK_U_B_wh_OD_Rollup_CombatUniform           { quality = 1; price = 80; };
    class TRYK_U_B_wh_blk_Rollup_CombatUniform          { quality = 1; price = 80; };
    class TRYK_U_B_BLK_tan_Rollup_CombatUniform         { quality = 1; price = 80; };
    class TRYK_U_B_BLK_OD_Rollup_CombatUniform          { quality = 1; price = 80; };
    class TRYK_U_B_NATO_UCP_GRY_Combatniform            { quality = 1; price = 80; };
    class TRYK_U_B_NATO_UCP_GRY_R_CombatUniform         { quality = 1; price = 80; };
    class TRYK_U_B_NATO_UCP_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_NATO_UCP_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_c_BLK_CombatUniform         { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform       { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_BLK_CombatUniform           { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_BLK_R_CombatUniform         { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCPD_CombatUniform              { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCPD_R_CombatUniform            { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_NATO_OCP_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_AOR1_Rollup_CombatUniform            { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_Rollup_CombatUniform            { quality = 1; price = 80; };
    class TRYK_U_B_MTP_CombatUniform                    { quality = 1; price = 80; };
    class TRYK_U_B_MTP_R_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_MTP_BLK_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_MTP_BLK_R_CombatUniform              { quality = 1; price = 80; };
    class TRYK_U_B_Woodland                             { quality = 1; price = 80; };
    class TRYK_U_B_Woodland_Tshirt                      { quality = 1; price = 80; };
    class TRYK_U_B_WDL_GRY_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_WDL_GRY_R_CombatUniform              { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_GR_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_GR_R_CombatUniform              { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_GRY_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_GRY_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_CombatUniform                   { quality = 1; price = 80; };
    class TRYK_U_B_ARO1R_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_BLK_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_BLK_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_CBR_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_ARO1_CBR_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_ARO2_CombatUniform                   { quality = 1; price = 80; };
    class TRYK_U_B_ARO2R_CombatUniform                  { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_BLK_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_BLK_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_OD_CombatUniform                { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_OD_R_CombatUniform              { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_GRY_CombatUniform               { quality = 1; price = 80; };
    class TRYK_U_B_AOR2_GRY_R_CombatUniform             { quality = 1; price = 80; };
    class TRYK_U_B_Snow_CombatUniform                   { quality = 1; price = 80; };
    class TRYK_U_B_Snowt                                { quality = 1; price = 80; };
    class TRYK_U_B_Denim_T_WH                           { quality = 1; price = 80; };
    class TRYK_U_B_Denim_T_BK                           { quality = 1; price = 80; };
    class TRYK_U_B_BLK_T_WH                             { quality = 1; price = 80; };
    class TRYK_U_B_BLK_T_BK                             { quality = 1; price = 80; };
    class TRYK_U_B_RED_T_BR                             { quality = 1; price = 80; };
    class TRYK_U_B_Denim_T_BG_WH                        { quality = 1; price = 80; };
    class TRYK_U_B_Denim_T_BG_BK                        { quality = 1; price = 80; };
    class TRYK_U_B_BLK_T_BG_WH                          { quality = 1; price = 80; };
    class TRYK_U_B_BLK_T_BG_BK                          { quality = 1; price = 80; };
    class TRYK_U_B_RED_T_BG_BR                          { quality = 1; price = 80; };
    class TRYK_U_B_fleece                               { quality = 1; price = 80; };
    class TRYK_U_B_fleece_UCP                           { quality = 1; price = 80; };
    class TRYK_U_B_UCP_PCUs                             { quality = 1; price = 80; };
    class TRYK_U_B_GRY_PCUs                             { quality = 1; price = 80; };
    class TRYK_U_B_Wood_PCUs                            { quality = 1; price = 80; };
    class TRYK_U_B_PCUs                                 { quality = 1; price = 80; };
    class TRYK_U_B_UCP_PCUs_R                           { quality = 1; price = 80; };
    class TRYK_U_B_GRY_PCUs_R                           { quality = 1; price = 80; };
    class TRYK_U_B_Wood_PCUs_R                          { quality = 1; price = 80; };
    class TRYK_U_B_PCUs_R                               { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs                                { quality = 1; price = 80; };
    class TRYK_U_B_PCUODs                               { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_gry                            { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_BLK                            { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_OD                             { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_gry_R                          { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_BLK_R                          { quality = 1; price = 80; };
    class TRYK_U_B_PCUGs_OD_R                           { quality = 1; price = 80; };
    class TRYK_U_Bts_GRYGRY_PCUs                        { quality = 1; price = 80; };
    class TRYK_U_Bts_UCP_PCUs                           { quality = 1; price = 80; };
    class TRYK_U_Bts_Wood_PCUs                          { quality = 1; price = 80; };
    class TRYK_U_Bts_PCUs                               { quality = 1; price = 80; };
    class TRYK_U_pad_j                                  { quality = 1; price = 80; };
    class TRYK_U_pad_j_blk                              { quality = 1; price = 80; };
    class TRYK_U_pad_hood_Cl                            { quality = 1; price = 80; };
    class TRYK_U_pad_hood_Cl_blk                        { quality = 1; price = 80; };
    class TRYK_U_pad_hood_tan                           { quality = 1; price = 80; };
    class TRYK_U_pad_hood_Blk                           { quality = 1; price = 80; };
    class TRYK_U_pad_hood_CSATBlk                       { quality = 1; price = 80; };
    class TRYK_U_pad_hood_Blod                          { quality = 1; price = 80; };
    class TRYK_U_pad_hood_odBK                          { quality = 1; price = 80; };
    class TRYK_U_pad_hood_BKT2                          { quality = 1; price = 80; };
    class TRYK_hoodie_Blk                               { quality = 1; price = 80; };
    class TRYK_hoodie_FR                                { quality = 1; price = 80; };
    class TRYK_hoodie_Wood                              { quality = 1; price = 80; };
    class TRYK_hoodie_3c                                { quality = 1; price = 80; };
    class TRYK_T_camo_tan                               { quality = 1; price = 80; };
    class TRYK_T_camo_3c                                { quality = 1; price = 80; };
    class TRYK_T_camo_Wood                              { quality = 1; price = 80; };
    class TRYK_T_camo_wood_marpat                       { quality = 1; price = 80; };
    class TRYK_T_camo_Desert_marpat                     { quality = 1; price = 80; };
    class TRYK_T_camo_3c_BG                             { quality = 1; price = 80; };
    class TRYK_T_camo_Wood_BG                           { quality = 1; price = 80; };
    class TRYK_T_camo_wood_marpat_BG                    { quality = 1; price = 80; };
    class TRYK_T_camo_desert_marpat_BG                  { quality = 1; price = 80; };
    class TRYK_T_PAD                                    { quality = 1; price = 80; };
    class TRYK_T_OD_PAD                                 { quality = 1; price = 80; };
    class TRYK_T_TAN_PAD                                { quality = 1; price = 80; };
    class TRYK_T_BLK_PAD                                { quality = 1; price = 80; };
    class TRYK_T_T2_PAD                                 { quality = 1; price = 80; };
    class TRYK_T_CSAT_PAD                               { quality = 1; price = 80; };
    class TRYK_U_nohoodPcu_gry                          { quality = 1; price = 80; };
    class TRYK_U_hood_nc                                { quality = 1; price = 80; };
    class TRYK_U_hood_mc                                { quality = 1; price = 80; };
    class TRYK_U_denim_hood_blk                         { quality = 1; price = 80; };
    class TRYK_U_denim_hood_mc                          { quality = 1; price = 80; };
    class TRYK_U_denim_hood_3c                          { quality = 1; price = 80; };
    class TRYK_U_denim_hood_nc                          { quality = 1; price = 80; };
    class TRYK_U_denim_jersey_blu                       { quality = 1; price = 80; };
    class TRYK_U_denim_jersey_blk                       { quality = 1; price = 80; };
    class TRYK_shirts_PAD                               { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD                            { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD                           { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD                           { quality = 1; price = 40; };
    class TRYK_shirts_PAD_BK                            { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_BK                         { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_BK                        { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_BK                        { quality = 1; price = 40; };
    class TRYK_shirts_PAD_BLW                           { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_BLW                        { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_BLW                       { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_BLW                       { quality = 1; price = 40; };
    class TRYK_shirts_PAD_YEL                           { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_YEL                        { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_YEL                       { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_YEL                       { quality = 1; price = 40; };
    class TRYK_shirts_PAD_RED2                          { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_RED2                       { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_RED2                      { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_RED2                      { quality = 1; price = 40; };
    class TRYK_shirts_PAD_BLU3                          { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_BLU3                       { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_BLU3                      { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_BLU3                      { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_R                           { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BL                          { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BK                          { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_WH                          { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BWH                         { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_RED2                        { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_WHB                         { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_ylb                         { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_od                          { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_R_Sleeve                    { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BL_Sleeve                   { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BK_Sleeve                   { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_WH_Sleeve                   { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_BWH_Sleeve                  { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_RED2_Sleeve                 { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_WHB_Sleeve                  { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_ylb_Sleeve                  { quality = 1; price = 40; };
    class TRYK_shirts_DENIM_od_Sleeve                   { quality = 1; price = 40; };
    class TRYK_shirts_PAD_BL                            { quality = 1; price = 40; };
    class TRYK_shirts_OD_PAD_BL                         { quality = 1; price = 40; };
    class TRYK_shirts_TAN_PAD_BL                        { quality = 1; price = 40; };
    class TRYK_shirts_BLK_PAD_BL                        { quality = 1; price = 40; };
    class TRYK_U_taki_wh                                { quality = 1; price = 80; };
    class TRYK_U_taki_COY                               { quality = 1; price = 80; };
    class TRYK_U_taki_BL                                { quality = 1; price = 80; };
    class TRYK_U_taki_BLK                               { quality = 1; price = 80; };
    class TRYK_U_Bts_PCUGs                              { quality = 1; price = 80; };
    class TRYK_U_Bts_PCUODs                             { quality = 1; price = 80; };
    class TRYK_U_taki_G_WH                              { quality = 1; price = 80; };
    class TRYK_U_taki_G_COY                             { quality = 1; price = 80; };
    class TRYK_U_taki_G_BL                              { quality = 1; price = 80; };
    class TRYK_U_taki_G_BLK                             { quality = 1; price = 80; };
    class TRYK_U_B_PCUHs                                { quality = 1; price = 80; };
    class TRYK_U_B_PCUGHs                               { quality = 1; price = 80; };
    class TRYK_U_B_PCUODHs                              { quality = 1; price = 80; };
    class TRYK_B_USMC_R                                 { quality = 1; price = 80; };
    class TRYK_B_USMC_R_ROLL                            { quality = 1; price = 80; };
    class TRYK_ZARATAKI                                 { quality = 1; price = 80; };
    class TRYK_ZARATAKI2                                { quality = 1; price = 80; };
    class TRYK_ZARATAKI3                                { quality = 1; price = 80; };
    class TRYK_B_TRYK_UCP_T                             { quality = 1; price = 80; };
    class TRYK_B_TRYK_3C_T                              { quality = 1; price = 80; };
    class TRYK_B_TRYK_MTP_T                             { quality = 1; price = 80; };
    class TRYK_B_TRYK_OCP_T                             { quality = 1; price = 80; };
    class TRYK_B_TRYK_OCP_D_T                           { quality = 1; price = 80; };
    class TRYK_DMARPAT_T                                { quality = 1; price = 80; };
    class TRYK_C_AOR2_T                                 { quality = 1; price = 80; };
    class TRYK_U_B_Sage_T                               { quality = 1; price = 80; };
    class TRYK_U_B_Wood_T                               { quality = 1; price = 80; };
    class TRYK_U_B_BLTAN_T                              { quality = 1; price = 80; };
    class TRYK_U_B_BLOD_T                               { quality = 1; price = 80; };
    class TRYK_OVERALL_flesh                            { quality = 1; price = 40; };
    class TRYK_OVERALL_nok_flesh                        { quality = 1; price = 40; };
    class TRYK_OVERALL_SAGE_BLKboots                    { quality = 1; price = 40; };
    class TRYK_OVERALL_SAGE_BLKboots_nk_blk             { quality = 1; price = 40; };
    class TRYK_OVERALL_SAGE_BLKboots_nk                 { quality = 1; price = 40; };
    class TRYK_OVERALL_SAGE_BLKboots_nk_blk2            { quality = 1; price = 40; };
    class TRYK_OVERALL_SAGE                             { quality = 1; price = 40; };
    class TRYK_SUITS_BLK_F                              { quality = 1; price = 40; };
    class TRYK_SUITS_BR_F                               { quality = 1; price = 40; };
    class TRYK_H_ghillie_top_headless3glass             { quality = 1; price = 6; };
    class TRYK_shoulder_armor_BK                        { quality = 1; price = 60 };
    class TRYK_shoulder_armor_OD                        { quality = 1; price = 60; };
    class TRYK_shoulder_armor_CY                        { quality = 1; price = 60; };
    class TRYK_H_ghillie_top_headless3                  { quality = 1; price = 60; };
    class TRYK_U_B_PCUHsW                               { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW2                              { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW3                              { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW3nh                            { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW4                              { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW5                              { quality = 1; price = 80; };
    class TRYK_U_B_PCUHsW6                              { quality = 1; price = 80; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK Vests
    ///////////////////////////////////////////////////////////////////////////////
 
    class TRYK_V_ArmorVest_CBR                          { quality = 3; price = 134; };
    class TRYK_V_ArmorVest_khk                          { quality = 3; price = 134; };
    class TRYK_V_ArmorVest_Ranger                       { quality = 3; price = 184; };
    class TRYK_V_ArmorVest_cbr2                         { quality = 5; price = 100; };
    class TRYK_V_ArmorVest_khk2                         { quality = 5; price = 100; };
    class TRYK_V_ArmorVest_Ranger2                      { quality = 5; price = 100; };
    class TRYK_V_PlateCarrier_blk                       { quality = 5; price = 104; };
    class TRYK_V_PlateCarrier_coyo                      { quality = 5; price = 104; };
    class TRYK_V_PlateCarrier_wood                      { quality = 5; price = 104; };
    class TRYK_V_PlateCarrier_blk_L                     { quality = 3; price = 108; };
    class TRYK_V_PlateCarrier_wood_L                    { quality = 3; price = 108; };
    class TRYK_V_PlateCarrier_coyo_L                    { quality = 3; price = 108; };
    class TRYK_V_Bulletproof                            { quality = 5; price = 150; };
    class TRYK_V_Bulletproof_BLK                        { quality = 5; price = 150; };
    class TRYK_V_Bulletproof_BL                         { quality = 5; price = 150; };
    class TRYK_V_tacSVD_BK                              { quality = 3; price = 120; };
    class TRYK_V_tacSVD_OD                              { quality = 3; price = 120; };
    class TRYK_LOC_AK_chestrig_OD                       { quality = 1; price = 90; };
    class TRYK_LOC_AK_chestrig_TAN                      { quality = 1; price = 90; };
 
    ///////////////////////////////////////////////////////////////////////////////
    // TRYK BackPacks
    ///////////////////////////////////////////////////////////////////////////////
   
    class TRYK_B_AssaultPack_UCP                        { quality = 1; price = 100; };
    class TRYK_B_AssaultPack_Type2camo                  { quality = 1; price = 100; };
    class TRYK_B_AssaultPack_MARPAT_Desert              { quality = 1; price = 100; };
    class TRYK_B_AssaultPack_MARPAT_Wood                { quality = 1; price = 100; };
    class TRYK_B_Kitbag_Base                            { quality = 1; price = 100; };
    class TRYK_B_Kitbag_blk                             { quality = 1; price = 100; };
    class TRYK_B_Kitbag_aaf                             { quality = 1; price = 100; };
    class TRYK_B_Carryall_blk                           { quality = 1; price = 120; };
    class TRYK_B_Carryall_wh                            { quality = 1; price = 120; };
    class TRYK_B_Carryall_wood                          { quality = 1; price = 120; };
    class TRYK_B_Carryall_JSDF                          { quality = 1; price = 120; };
    class TRYK_B_Kitbag_Base_JSDF                       { quality = 1; price = 100; };
    class TRYK_B_Coyotebackpack                         { quality = 1; price = 100; };
    class TRYK_B_Coyotebackpack_OD                      { quality = 1; price = 100; };
    class TRYK_B_Coyotebackpack_BLK                     { quality = 1; price = 100; };
    class TRYK_B_Coyotebackpack_WH                      { quality = 1; price = 100; };
    class TRYK_B_Alicepack                              { quality = 1; price = 100; };
    class TRYK_B_Medbag                                 { quality = 1; price = 100; };
    class TRYK_B_Medbag_OD                              { quality = 1; price = 100; };
    class TRYK_B_Medbag_BK                              { quality = 1; price = 100; };
    class TRYK_B_Medbag_ucp                             { quality = 1; price = 100; };
    class TRYK_B_BAF_BAG_BLK                            { quality = 1; price = 100; };
    class TRYK_B_BAF_BAG_CYT                            { quality = 1; price = 100; };
    class TRYK_B_BAF_BAG_OD                             { quality = 1; price = 100; };
    class TRYK_B_BAF_BAG_rgr                            { quality = 1; price = 100; };
    class TRYK_B_BAF_BAG_mcamo                          { quality = 1; price = 100; };
    class TRYK_B_tube_cyt                               { quality = 1; price = 100; };
    class TRYK_B_tube_od                                { quality = 1; price = 100; };
    class TRYK_B_tube_blk                               { quality = 1; price = 100; };
    class TRYK_B_FieldPack_Wood                         { quality = 1; price = 100; };
	class TRYK_Winter_pack                            { quality = 1; price = 100; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Civillian Clothing
	///////////////////////////////////////////////////////////////////////////////
	class U_C_Journalist 							{ quality = 1; price = 25; };
	class U_C_Poloshirt_blue 						{ quality = 1; price = 25; };
	class U_C_Poloshirt_burgundy 					{ quality = 1; price = 25; };
	class U_C_Poloshirt_salmon 						{ quality = 1; price = 25; };
	class U_C_Poloshirt_stripped 					{ quality = 1; price = 25; };
	class U_C_Poloshirt_tricolour 					{ quality = 1; price = 25; };
	class U_C_Poor_1 								{ quality = 1; price = 25; };
	class U_C_Poor_2 								{ quality = 1; price = 25; };
	class U_C_Poor_shorts_1 						{ quality = 1; price = 25; };
	class U_C_Scientist 							{ quality = 1; price = 25; };
	class U_OrestesBody 							{ quality = 1; price = 25; };
	class U_Rangemaster 							{ quality = 1; price = 25; };
	class U_NikosAgedBody 							{ quality = 1; price = 25; };
	class U_NikosBody 								{ quality = 1; price = 25; };
	class U_Competitor 								{ quality = 1; price = 25; };
	class U_I_C_Soldier_Bandit_1_F    				{ quality = 1; price = 25; };
	class U_I_C_Soldier_Bandit_2_F    				{ quality = 1; price = 25; };
	class U_I_C_Soldier_Bandit_3_F    				{ quality = 1; price = 25; };
	class U_I_C_Soldier_Bandit_4_F    				{ quality = 1; price = 25; };
	class U_I_C_Soldier_Bandit_5_F    				{ quality = 1; price = 25; };
	class U_I_C_Soldier_Camo_F        				{ quality = 1; price = 25; };
	class U_C_man_sport_1_F           				{ quality = 1; price = 25; };
	class U_C_man_sport_2_F           				{ quality = 1; price = 25; };
	class U_C_man_sport_3_F           				{ quality = 1; price = 25; };
	class U_C_Man_casual_1_F          				{ quality = 1; price = 25; };
	class U_C_Man_casual_2_F          				{ quality = 1; price = 25; };
	class U_C_Man_casual_3_F          				{ quality = 1; price = 25; };
	class U_C_Man_casual_4_F          				{ quality = 1; price = 25; };
	class U_C_Man_casual_5_F          				{ quality = 1; price = 25; };
	class U_C_Man_casual_6_F          				{ quality = 1; price = 25; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Soldier Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_B_CombatUniform_mcam 					{ quality = 1; price = 80; };
	class U_B_CombatUniform_mcam_tshirt 			{ quality = 1; price = 80; };
	class U_B_CombatUniform_mcam_vest 				{ quality = 1; price = 80; };
	class U_B_CombatUniform_mcam_worn 				{ quality = 1; price = 80; };
	class U_B_CTRG_1 								{ quality = 1; price = 80; };
	class U_B_CTRG_2 								{ quality = 1; price = 80; };
	class U_B_CTRG_3								{ quality = 1; price = 80; };
	class U_I_CombatUniform 						{ quality = 1; price = 80; };
	class U_I_CombatUniform_shortsleeve				{ quality = 1; price = 80; };
	class U_I_CombatUniform_tshirt					{ quality = 1; price = 80; };
	class U_I_OfficerUniform						{ quality = 1; price = 80; };
	class U_O_CombatUniform_ocamo 					{ quality = 1; price = 80; };
	class U_O_CombatUniform_oucamo 					{ quality = 1; price = 80; };
	class U_O_OfficerUniform_ocamo 					{ quality = 1; price = 80; };
	class U_B_SpecopsUniform_sgg 					{ quality = 1; price = 80; };
	class U_O_SpecopsUniform_blk 					{ quality = 1; price = 80; };
	class U_O_SpecopsUniform_ocamo 					{ quality = 1; price = 80; };
	class U_I_G_Story_Protagonist_F 				{ quality = 1; price = 80; };
	class Exile_Uniform_Woodland 					{ quality = 3; price = 100; };
	class U_B_T_Soldier_F             				{ quality = 1; price = 80; };
	class U_B_T_Soldier_AR_F          				{ quality = 1; price = 80; };
	class U_B_T_Soldier_SL_F          				{ quality = 1; price = 80; };
	class U_B_CTRG_Soldier_F          				{ quality = 1; price = 80; };
	class U_B_CTRG_Soldier_2_F        				{ quality = 1; price = 80; };
	class U_B_CTRG_Soldier_3_F        				{ quality = 1; price = 80; };
	class U_B_GEN_Soldier_F           				{ quality = 1; price = 80; };
	class U_B_GEN_Commander_F         				{ quality = 1; price = 80; };
	class U_O_T_Soldier_F             				{ quality = 1; price = 80; };
	class U_O_T_Officer_F             				{ quality = 1; price = 80; };
	class U_O_V_Soldier_Viper_F       				{ quality = 1; price = 400; };
	class U_O_V_Soldier_Viper_hex_F   				{ quality = 1; price = 400; };
	class U_B_CTRG_Soldier_urb_1_F    				{ quality = 1; price = 80; };
	class U_B_CTRG_Soldier_urb_2_F    				{ quality = 1; price = 80; };
	class U_B_CTRG_Soldier_urb_3_F    				{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Guerilla Uniforms
	///////////////////////////////////////////////////////////////////////////////
	class U_C_HunterBody_grn						{ quality = 1; price = 60; };
	class U_IG_Guerilla1_1							{ quality = 1; price = 60; };
	class U_IG_Guerilla2_1							{ quality = 1; price = 60; };
	class U_IG_Guerilla2_2							{ quality = 1; price = 60; };
	class U_IG_Guerilla2_3							{ quality = 1; price = 60; };
	class U_IG_Guerilla3_1							{ quality = 1; price = 60; };
	class U_BG_Guerilla2_1							{ quality = 1; price = 60; };
	class U_IG_Guerilla3_2							{ quality = 1; price = 60; };
	class U_BG_Guerrilla_6_1						{ quality = 1; price = 60; };
	class U_BG_Guerilla1_1							{ quality = 1; price = 60; };
	class U_BG_Guerilla2_2							{ quality = 1; price = 60; };
	class U_BG_Guerilla2_3							{ quality = 1; price = 60; };
	class U_BG_Guerilla3_1							{ quality = 1; price = 60; };
	class U_BG_leader								{ quality = 1; price = 60; };
	class U_IG_leader								{ quality = 1; price = 60; };
	class U_I_G_resistanceLeader_F					{ quality = 1; price = 60; };
	class U_I_C_Soldier_Para_1_F     				{ quality = 1; price = 60; };
	class U_I_C_Soldier_Para_2_F     				{ quality = 1; price = 60; };
	class U_I_C_Soldier_Para_3_F     				{ quality = 1; price = 60; };
	class U_I_C_Soldier_Para_4_F     				{ quality = 1; price = 60; };
	class U_I_C_Soldier_Para_5_F     				{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Ghillie Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_B_FullGhillie_ard						{ quality = 5; price = 360; };
	class U_B_FullGhillie_lsh						{ quality = 5; price = 360; };
	class U_B_FullGhillie_sard						{ quality = 5; price = 360; };
	class U_B_GhillieSuit							{ quality = 5; price = 260; };
	class U_I_FullGhillie_ard						{ quality = 5; price = 360; };
	class U_I_FullGhillie_lsh						{ quality = 5; price = 360; };
	class U_I_FullGhillie_sard						{ quality = 5; price = 360; };
	class U_I_GhillieSuit							{ quality = 5; price = 260; };
	class U_O_FullGhillie_ard						{ quality = 5; price = 360; };
	class U_O_FullGhillie_lsh						{ quality = 5; price = 360; };
	class U_O_FullGhillie_sard						{ quality = 5; price = 360; };
	class U_O_T_FullGhillie_tna_F   			  	{ quality = 5; price = 360; };
	class U_B_T_Sniper_F              				{ quality = 5; price = 260; };
	class U_B_T_FullGhillie_tna_F     				{ quality = 5; price = 360; };
	class U_O_GhillieSuit							{ quality = 5; price = 260; };
	class U_O_T_Sniper_F             				{ quality = 5; price = 260; };

	///////////////////////////////////////////////////////////////////////////////
	// Wet Suits
	///////////////////////////////////////////////////////////////////////////////
	class U_I_Wetsuit								{ quality = 5; price = 180; };
	class U_O_Wetsuit								{ quality = 5; price = 180; };
	class U_B_Wetsuit								{ quality = 5; price = 180; };
	class U_B_survival_uniform						{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandolliers
	///////////////////////////////////////////////////////////////////////////////
	class V_BandollierB_blk							{ quality = 1; price = 80; };
	class V_BandollierB_cbr							{ quality = 1; price = 80; };
	class V_BandollierB_khk							{ quality = 1; price = 80; };
	class V_BandollierB_oli							{ quality = 1; price = 80; };
	class V_BandollierB_rgr							{ quality = 1; price = 80; };
	class V_BandollierB_ghex_F        				{ quality = 1; price = 80; };

	///////////////////////////////////////////////////////////////////////////////
	// Chestrigs
	///////////////////////////////////////////////////////////////////////////////
	class V_Chestrig_blk 							{ quality = 1; price = 140; };
	class V_Chestrig_khk 							{ quality = 1; price = 140; };
	class V_Chestrig_oli 							{ quality = 1; price = 140; };
	class V_Chestrig_rgr 							{ quality = 1; price = 140; };
	class V_TacChestrig_grn_F        				{ quality = 1; price = 140; };
	class V_TacChestrig_oli_F        				{ quality = 1; price = 140; };
	class V_TacChestrig_cbr_F        				{ quality = 1; price = 140; };

	///////////////////////////////////////////////////////////////////////////////
	// Vests
	///////////////////////////////////////////////////////////////////////////////
	class V_Press_F									{ quality = 1; price = 88; };
	class V_Rangemaster_belt						{ quality = 1; price = 40; };
	class V_TacVest_blk								{ quality = 2; price = 124; };
	class V_TacVest_blk_POLICE						{ quality = 2; price = 136; };
	class V_TacVest_brn								{ quality = 2; price = 124; };
	class V_TacVest_camo							{ quality = 2; price = 124; };
	class V_TacVest_khk								{ quality = 2; price = 124; };
	class V_TacVest_oli								{ quality = 2; price = 124; };
	class V_TacVestCamo_khk							{ quality = 2; price = 124; };
	class V_TacVestIR_blk							{ quality = 2; price = 164; };
	class V_TacVest_gen_F            				{ quality = 2; price = 136; };
	class V_I_G_resistanceLeader_F					{ quality = 1; price = 50; };

	///////////////////////////////////////////////////////////////////////////////
	// Harnesses
	///////////////////////////////////////////////////////////////////////////////
	class V_HarnessO_brn							{ quality = 1; price = 160; };
	class V_HarnessO_gry							{ quality = 1; price = 160; };
	class V_HarnessOGL_brn							{ quality = 1; price = 120; };
	class V_HarnessOGL_gry							{ quality = 1; price = 120; };
	class V_HarnessOSpec_brn						{ quality = 1; price = 160; };
	class V_HarnessOSpec_gry						{ quality = 1; price = 160; };
	class V_HarnessO_ghex_F          				{ quality = 1; price = 160; };
	class V_HarnessOGL_ghex_F        				{ quality = 1; price = 120; };

	///////////////////////////////////////////////////////////////////////////////
	// Plate Carriers
	///////////////////////////////////////////////////////////////////////////////
	class V_PlateCarrier1_blk 						{ quality = 3; price = 184; };
	class V_PlateCarrier1_rgr 						{ quality = 3; price = 184; };
	class V_PlateCarrier1_tna_F      				{ quality = 3; price = 184; };
	class V_PlateCarrier1_rgr_noflag_F				{ quality = 3; price = 184; };
	class V_PlateCarrier2_rgr 						{ quality = 5; price = 200; };
	class V_PlateCarrier2_blk 						{ quality = 5; price = 200; };
	class V_PlateCarrier2_tna_F      				{ quality = 5; price = 200; };
	class V_PlateCarrier2_rgr_noflag_F				{ quality = 5; price = 200; };
	class V_PlateCarrierL_CTRG 						{ quality = 3; price = 184; };
	class V_PlateCarrierH_CTRG 						{ quality = 5; price = 200; };
	class V_PlateCarrierIA1_dgtl 					{ quality = 3; price = 168; };
	class V_PlateCarrierIA2_dgtl 					{ quality = 5; price = 184; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_Cap_blk 								{ quality = 1; price = 6; };
	class H_Cap_blk_Raven 							{ quality = 1; price = 6; };
	class H_Cap_blu 								{ quality = 1; price = 6; };
	class H_Cap_brn_SPECOPS 						{ quality = 1; price = 6; };
	class H_Cap_grn 								{ quality = 1; price = 6; };
	class H_Cap_headphones 							{ quality = 1; price = 6; };
	class H_Cap_khaki_specops_UK 					{ quality = 1; price = 6; };
	class H_Cap_oli 								{ quality = 1; price = 6; };
	class H_Cap_press 								{ quality = 1; price = 6; };
	class H_Cap_red 								{ quality = 1; price = 6; };
	class H_Cap_tan 								{ quality = 1; price = 6; };
	class H_Cap_tan_specops_US 						{ quality = 1; price = 6; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	class G_Spectacles			 		{ quality = 1; price = 6; };
	class G_Spectacles_Tinted			{ quality = 1; price = 6; };
	class G_Combat			 			{ quality = 1; price = 6; };
	class G_Lowprofile			 		{ quality = 1; price = 6; };
	class G_Shades_Black			 	{ quality = 1; price = 6; };
	class G_Shades_Green			 	{ quality = 1; price = 6; };
	class G_Shades_Red			 		{ quality = 1; price = 6; };
	class G_Squares			 			{ quality = 1; price = 6; };
	class G_Squares_Tinted			 	{ quality = 1; price = 6; };
	class G_Sport_BlackWhite			{ quality = 1; price = 6; };
	class G_Sport_Blackyellow			{ quality = 1; price = 6; };
	class G_Sport_Greenblack			{ quality = 1; price = 6; };
	class G_Sport_Checkered			 	{ quality = 1; price = 6; };
	class G_Sport_Red			 		{ quality = 1; price = 6; };
	class G_Tactical_Black			 	{ quality = 1; price = 6; };
	class G_Aviator			 			{ quality = 1; price = 6; };
	class G_Lady_Mirror			 		{ quality = 1; price = 6; };
	class G_Lady_Dark			 		{ quality = 1; price = 6; };
	class G_Lady_Red			 		{ quality = 1; price = 6; };
	class G_Lady_Blue			 		{ quality = 1; price = 6; };
	class G_Diving			 			{ quality = 1; price = 6; };
	class G_B_Diving			 		{ quality = 1; price = 6; };
	class G_O_Diving			 		{ quality = 1; price = 6; };
	class G_I_Diving			 		{ quality = 1; price = 6; };
	class G_Goggles_VR			 		{ quality = 1; price = 6; };
	class G_Balaclava_blk			 	{ quality = 3; price = 6; };
	class G_Balaclava_oli			 	{ quality = 3; price = 6; };
	class G_Balaclava_combat			{ quality = 3; price = 6; };
	class G_Balaclava_lowprofile		{ quality = 3; price = 6; };
	class G_Bandanna_blk			 	{ quality = 1; price = 6; };
	class G_Bandanna_oli			 	{ quality = 1; price = 6; };
	class G_Bandanna_khk			 	{ quality = 1; price = 6; };
	class G_Bandanna_tan			 	{ quality = 1; price = 6; };
	class G_Bandanna_beast			 	{ quality = 1; price = 6; };
	class G_Bandanna_shades			 	{ quality = 1; price = 6; };
	class G_Bandanna_sport			 	{ quality = 1; price = 6; };
	class G_Bandanna_aviator			{ quality = 1; price = 6; };
	class G_Shades_Blue			 		{ quality = 1; price = 6; };
	class G_Sport_Blackred			 	{ quality = 1; price = 6; };
	class G_Tactical_Clear			 	{ quality = 1; price = 6; };
	class G_Balaclava_TI_blk_F			{ quality = 5; price = 6; };
	class G_Balaclava_TI_tna_F			{ quality = 5; price = 6; };
	class G_Balaclava_TI_G_blk_F		{ quality = 5; price = 6; };
	class G_Balaclava_TI_G_tna_F		{ quality = 5; price = 6; };
	class G_Combat_Goggles_tna_F		{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Military Caps
	///////////////////////////////////////////////////////////////////////////////
	class H_MilCap_blue 							{ quality = 1; price = 6; };
	class H_MilCap_dgtl 							{ quality = 1; price = 6; };
	class H_MilCap_mcamo 							{ quality = 1; price = 6; };
	class H_MilCap_ocamo 							{ quality = 1; price = 6; };
	class H_MilCap_oucamo 							{ quality = 1; price = 6; };
	class H_MilCap_rucamo 							{ quality = 1; price = 6; };
	class H_MilCap_tna_F              				{ quality = 1; price = 6; };
	class H_MilCap_ghex_F             				{ quality = 1; price = 6; };
	class H_Booniehat_tna_F           				{ quality = 1; price = 6; };
	class H_Beret_gen_F               				{ quality = 1; price = 6; };
	class H_MilCap_gen_F              				{ quality = 1; price = 6; };
	class H_Cap_oli_Syndikat_F        				{ quality = 1; price = 6; };
	class H_Cap_tan_Syndikat_F        				{ quality = 1; price = 6; };
	class H_Cap_blk_Syndikat_F        				{ quality = 1; price = 6; };
	class H_Cap_grn_Syndikat_F        				{ quality = 1; price = 6; };
	class H_FakeHeadgear_Syndikat_F   				{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Beanies
	///////////////////////////////////////////////////////////////////////////////
	class H_Watchcap_blk 							{ quality = 1; price = 6; };
	class H_Watchcap_camo 							{ quality = 1; price = 6; };
	class H_Watchcap_khk 							{ quality = 1; price = 6; };
	class H_Watchcap_sgg 							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Bandannas
	///////////////////////////////////////////////////////////////////////////////
	class H_Bandanna_camo							{ quality = 1; price = 6; };
	class H_Bandanna_cbr							{ quality = 1; price = 6; };
	class H_Bandanna_gry							{ quality = 1; price = 6; };
	class H_Bandanna_khk							{ quality = 1; price = 6; };
	class H_Bandanna_khk_hs							{ quality = 1; price = 6; };
	class H_Bandanna_mcamo							{ quality = 1; price = 6; };
	class H_Bandanna_sgg							{ quality = 1; price = 6; };
	class H_Bandanna_surfer							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Boonie Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Booniehat_dgtl							{ quality = 1; price = 6; };
	class H_Booniehat_dirty							{ quality = 1; price = 6; };
	class H_Booniehat_grn							{ quality = 1; price = 6; };
	class H_Booniehat_indp							{ quality = 1; price = 6; };
	class H_Booniehat_khk							{ quality = 1; price = 6; };
	class H_Booniehat_khk_hs						{ quality = 1; price = 6; };
	class H_Booniehat_mcamo							{ quality = 1; price = 6; };
	class H_Booniehat_tan							{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Hats
	///////////////////////////////////////////////////////////////////////////////
	class H_Hat_blue								{ quality = 1; price = 6; };
	class H_Hat_brown								{ quality = 1; price = 6; };
	class H_Hat_camo								{ quality = 1; price = 6; };
	class H_Hat_checker								{ quality = 1; price = 6; };
	class H_Hat_grey								{ quality = 1; price = 6; };
	class H_Hat_tan									{ quality = 1; price = 6; };
	class H_StrawHat								{ quality = 1; price = 6; };
	class H_StrawHat_dark							{ quality = 1; price = 6; };
	class Exile_Headgear_SantaHat					{ quality = 1; price = 100; };
	class Exile_Headgear_SafetyHelmet				{ quality = 1; price = 20; };

	///////////////////////////////////////////////////////////////////////////////
	// Berets
	///////////////////////////////////////////////////////////////////////////////
	class H_Beret_02								{ quality = 1; price = 6; };
	class H_Beret_blk								{ quality = 1; price = 6; };
	class H_Beret_blk_POLICE						{ quality = 1; price = 6; };
	class H_Beret_brn_SF							{ quality = 1; price = 6; };
	class H_Beret_Colonel							{ quality = 1; price = 8; };
	class H_Beret_grn								{ quality = 1; price = 6; };
	class H_Beret_grn_SF							{ quality = 1; price = 6; };
	class H_Beret_ocamo								{ quality = 1; price = 6; };
	class H_Beret_red								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Shemags
	///////////////////////////////////////////////////////////////////////////////
	class H_Shemag_khk								{ quality = 1; price = 6; };
	class H_Shemag_olive							{ quality = 1; price = 6; };
	class H_Shemag_olive_hs							{ quality = 1; price = 6; };
	class H_Shemag_tan								{ quality = 1; price = 6; };
	class H_ShemagOpen_khk							{ quality = 1; price = 6; };
	class H_ShemagOpen_tan							{ quality = 1; price = 6; };
	class H_TurbanO_blk								{ quality = 1; price = 6; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetB_light							{ quality = 1; price = 80; };
	class H_HelmetB_light_black						{ quality = 1; price = 80; };
	class H_HelmetB_light_desert					{ quality = 1; price = 80; };
	class H_HelmetB_light_grass						{ quality = 1; price = 80; };
	class H_HelmetB_light_sand						{ quality = 1; price = 80; };
	class H_HelmetB_light_snakeskin					{ quality = 1; price = 80; };
	class H_HelmetB_Light_tna_F       				{ quality = 1; price = 80; };
	class H_RacingHelmet_1_F       					{ quality = 1; price = 60; };
	class H_RacingHelmet_2_F       					{ quality = 1; price = 60; };
	class H_RacingHelmet_3_F       					{ quality = 1; price = 60; };
	class H_RacingHelmet_4_F       					{ quality = 1; price = 60; };
	class H_RacingHelmet_1_black_F       			{ quality = 1; price = 60; };
	class H_RacingHelmet_1_blue_F       			{ quality = 1; price = 60; };
	class H_RacingHelmet_1_green_F       			{ quality = 1; price = 60; };
	class H_RacingHelmet_1_red_F       				{ quality = 1; price = 60; };
	class H_RacingHelmet_1_white_F       			{ quality = 1; price = 60; };
	class H_RacingHelmet_1_yellow_F       			{ quality = 1; price = 60; };
	class H_RacingHelmet_1_orange_F       			{ quality = 1; price = 60; };

	///////////////////////////////////////////////////////////////////////////////
	// Helmets
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetIA								{ quality = 3; price = 120; };
	class H_HelmetIA_camo							{ quality = 3; price = 120; };
	class H_HelmetIA_net							{ quality = 3; price = 120; };
	class H_HelmetB									{ quality = 3; price = 120; };
	class H_HelmetB_black							{ quality = 3; price = 120; };
	class H_HelmetB_camo							{ quality = 3; price = 120; }; // This one is awesome!
	class H_HelmetB_desert							{ quality = 3; price = 120; };
	class H_HelmetB_grass							{ quality = 3; price = 120; };
	class H_HelmetB_paint							{ quality = 3; price = 120; };
	class H_HelmetB_plain_blk						{ quality = 3; price = 120; };
	class H_HelmetB_sand							{ quality = 3; price = 120; };
	class H_HelmetB_snakeskin						{ quality = 3; price = 120; };
	class H_Helmet_Skate              				{ quality = 3; price = 25; };
	class H_HelmetB_TI_tna_F          				{ quality = 3; price = 120; };
	class H_HelmetB_tna_F             				{ quality = 3; price = 120; };
	class TRYK_H_Helmet_WOOD             			{ quality = 3; price = 120; };
	class TRYK_H_Helmet_MARPAT_WOOD             	{ quality = 3; price = 120; };

	///////////////////////////////////////////////////////////////////////////////
	// enhanced helmet
	///////////////////////////////////////////////////////////////////////////////
	class H_HelmetSpecB								{ quality = 5; price = 200; };
	class H_HelmetSpecB_blk							{ quality = 5; price = 200; };
	class H_HelmetSpecB_paint1						{ quality = 5; price = 200; };
	class H_HelmetSpecB_paint2						{ quality = 5; price = 200; };
	class H_HelmetSpecB_snakeskin					{ quality = 5; price = 200; };
	class H_HelmetSpecB_sand						{ quality = 5; price = 200; };
	class H_HelmetB_Enh_tna_F         				{ quality = 5; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// Pointer Attachments
	///////////////////////////////////////////////////////////////////////////////
	class acc_flashlight 							{ quality = 1; price = 25; };
	class acc_pointer_IR 							{ quality = 1; price = 75; };

	///////////////////////////////////////////////////////////////////////////////
	// Bitpod Attachments
	///////////////////////////////////////////////////////////////////////////////
	class bipod_01_F_blk	 						{ quality = 3; price = 45; };
	class bipod_01_F_mtp	 						{ quality = 3; price = 45; };
	class bipod_01_F_snd	 						{ quality = 3; price = 45; };
	class bipod_02_F_blk	 						{ quality = 3; price = 45; };
	class bipod_02_F_hex	 						{ quality = 3; price = 45; };
	class bipod_02_F_tan	 						{ quality = 3; price = 45; };
	class bipod_03_F_blk	 						{ quality = 3; price = 45; };
	class bipod_03_F_oli	 						{ quality = 3; price = 45; };
	class bipod_01_F_khk             				{ quality = 3; price = 45; };

	///////////////////////////////////////////////////////////////////////////////
	// Muzzle Attachments
	///////////////////////////////////////////////////////////////////////////////
	class muzzle_snds_338_black 					{ quality = 1; price = 175; };
	class muzzle_snds_338_green 					{ quality = 1; price = 175; };
	class muzzle_snds_338_sand 						{ quality = 1; price = 175; };
	class muzzle_snds_93mmg 						{ quality = 1; price = 175; };
	class muzzle_snds_93mmg_tan 					{ quality = 1; price = 175; };
	class muzzle_snds_acp 							{ quality = 1; price = 50; };
	class muzzle_snds_B 							{ quality = 1; price = 150; };
	class muzzle_snds_H 							{ quality = 1; price = 125; };
	class muzzle_snds_H_MG 							{ quality = 1; price = 125; };
	class muzzle_snds_H_SW 							{ quality = 1; price = 125; };
	class muzzle_snds_L 							{ quality = 1; price = 50; };
	class muzzle_snds_M 							{ quality = 1; price = 100; };
	class muzzle_snds_H_khk_F        				{ quality = 1; price = 125; };
	class muzzle_snds_H_snd_F        				{ quality = 1; price = 125; };
	class muzzle_snds_58_blk_F       				{ quality = 1; price = 125; };
	class muzzle_snds_m_khk_F        				{ quality = 1; price = 100; };
	class muzzle_snds_m_snd_F        				{ quality = 1; price = 100; };
	class muzzle_snds_B_khk_F        				{ quality = 1; price = 150; };
	class muzzle_snds_B_snd_F        				{ quality = 1; price = 150; };
	class muzzle_snds_58_wdm_F       				{ quality = 1; price = 125; };
	class muzzle_snds_65_TI_blk_F    				{ quality = 1; price = 125; };
	class muzzle_snds_65_TI_hex_F    				{ quality = 1; price = 125; };
	class muzzle_snds_65_TI_ghex_F   				{ quality = 1; price = 125; };
	class muzzle_snds_H_MG_blk_F     				{ quality = 1; price = 125; };
	class muzzle_snds_H_MG_khk_F     				{ quality = 1; price = 125; };
	class hlc_muzzle_545SUP_AK						{ quality = 1; price = 100; };
	class hlc_muzzle_762SUP_AK						{ quality = 1; price = 150; };
	class hlc_muzzle_556NATO_KAC					{ quality = 1; price = 100; };
	class hlc_muzzle_300blk_KAC						{ quality = 1; price = 150; };
	class hlc_muzzle_snds_AUG						{ quality = 1; price = 100; };
	class hlc_muzzle_snds_a6AUG						{ quality = 1; price = 100; };
	class hlc_muzzle_snds_M14						{ quality = 1; price = 150; };
	class hlc_muzzle_Agendasix						{ quality = 1; price = 125; };
	class hlc_muzzle_Tundra							{ quality = 1; price = 125; };
	class hlc_muzzle_Agendasix10mm					{ quality = 1; price = 125; };

	///////////////////////////////////////////////////////////////////////////////
	// UAVS
	///////////////////////////////////////////////////////////////////////////////
	class I_UavTerminal								{ quality = 5; price = 250; };
	class I_UAV_01_backpack_F						{ quality = 5; price = 1250; };

	///////////////////////////////////////////////////////////////////////////////
	// Static MGs
	///////////////////////////////////////////////////////////////////////////////
	class O_HMG_01_weapon_F 						{ quality = 5; price = 1250; };
	class O_HMG_01_support_F 						{ quality = 5; price = 250; };
	// Does not seem to work with HMG01, only the lower version does
	//class O_HMG_01_support_high_F 				{ quality = QUALITY_LEVEL_9000; price = 5000; };

	///////////////////////////////////////////////////////////////////////////////
	// Optic Attachments
	///////////////////////////////////////////////////////////////////////////////
	class optic_Aco									{ quality = 1; price = 50; };
	class optic_ACO_grn								{ quality = 1; price = 50; };
	class optic_ACO_grn_smg							{ quality = 1; price = 50; };
	class optic_Aco_smg								{ quality = 1; price = 50; };
	class optic_AMS									{ quality = 1; price = 150; };
	class optic_AMS_khk								{ quality = 1; price = 150; };
	class optic_AMS_snd								{ quality = 1; price = 150; };
	class optic_Arco								{ quality = 1; price = 100; };
	class optic_DMS									{ quality = 1; price = 125; };
	class optic_Hamr								{ quality = 1; price = 100; };
	class optic_Holosight							{ quality = 1; price = 50; };
	class optic_Holosight_smg						{ quality = 1; price = 50; };
	class optic_KHS_blk								{ quality = 1; price = 150; };
	class optic_KHS_hex								{ quality = 1; price = 150; };
	class optic_KHS_old								{ quality = 1; price = 150; };
	class optic_KHS_tan								{ quality = 1; price = 150; };
	class optic_LRPS								{ quality = 1; price = 250; };
	class optic_MRCO								{ quality = 1; price = 100; };
	class optic_MRD									{ quality = 1; price = 15; };
	class optic_Nightstalker						{ quality = 1; price = 350; };
	class optic_NVS									{ quality = 1; price = 350; };
	class optic_SOS									{ quality = 1; price = 150; };
	//class optic_tws								{ quality = QUALITY_LEVEL_9000; price = 1500; };
	//class optic_tws_mg							{ quality = QUALITY_LEVEL_9000; price = 1500; };
	class optic_Yorris								{ quality = 1; price = 15; };
	class optic_Arco_blk_F            				{ quality = 1; price = 100; };
	class optic_Arco_ghex_F           				{ quality = 1; price = 100; };
	class optic_DMS_ghex_F            				{ quality = 1; price = 125; };
	class optic_Hamr_khk_F            				{ quality = 1; price = 100; };
	class optic_ERCO_blk_F            				{ quality = 1; price = 100; };
	class optic_ERCO_khk_F            				{ quality = 1; price = 100; };
	class optic_ERCO_snd_F            				{ quality = 1; price = 100; };
	class optic_SOS_khk_F             				{ quality = 1; price = 150; };
	class optic_LRPS_tna_F            				{ quality = 1; price = 250; };
	class optic_LRPS_ghex_F           				{ quality = 1; price = 250; };
	class optic_Holosight_blk_F       				{ quality = 1; price = 50; };
	class optic_Holosight_khk_F       				{ quality = 1; price = 50; };
	class optic_Holosight_smg_blk_F   				{ quality = 1; price = 50; };
	class HLC_Optic_PSO1							{ quality = 1; price = 150; };
	class HLC_Optic_1p29							{ quality = 1; price = 125; };
	class hlc_optic_kobra							{ quality = 1; price = 50; };
	//class hlc_optic_goshawk							{ quality = 2; price = 1; };
	class hlc_optic_PVS4FAL							{ quality = 1; price = 350; };
	class hlc_optic_suit							{ quality = 1; price = 125; };
	class HLC_Optic_ZFSG1							{ quality = 1; price = 150; };
	class hlc_optic_accupoint_g3					{ quality = 1; price = 125; };
	class HLC_Optic_G36dualoptic35x					{ quality = 1; price = 69; };
	class HLC_Optic_G36dualoptic35x2d				{ quality = 1; price = 69; };
	class HLC_Optic_G36Export35x					{ quality = 1; price = 69; };
	class HLC_Optic_G36Export35x2d					{ quality = 1; price = 69; };
	class HLC_Optic_G36Dualoptic15x	         		{ quality = 1; price = 69; };
	class HLC_Optic_G36Dualoptic15x2d	     		{ quality = 1; price = 69; };
	class HLC_Optic_G36Export15x	         		{ quality = 1; price = 69; };
	class HLC_Optic_G36Export15x2d	         		{ quality = 1; price = 69; };
	class hlc_optic_artel_m14                		{ quality = 1; price = 125; };
	class hlc_optic_LRT_m14	                 		{ quality = 1; price = 150; };
	class hlc_optic_Kern                     		{ quality = 1; price = 125; };
	class hlc_optic_Kern2d	                 		{ quality = 1; price = 125; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Rope							{ quality = 1; price = 20; };
	class Exile_Item_DuctTape						{ quality = 1; price = 110; };
	class Exile_Item_ExtensionCord					{ quality = 1; price = 40; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 1; price = 50; };
	class Exile_Item_FuelCanisterFull				{ quality = 1; price = 69; };
	class Exile_Item_JunkMetal						{ quality = 1; price = 100; };
	class Exile_Item_LightBulb						{ quality = 1; price = 25; };
	class Exile_Item_MetalBoard						{ quality = 3; price = 200; };
	class Exile_Item_MetalHedgehogKit				{ quality = 3; price = 150; };
	class Exile_Item_SafeKit						{ quality = 5; price = 5000; };
	class Exile_Item_CodeLock						{ quality = 3; price = 2500; };
	class Exile_Item_Laptop							{ quality = 1; price = 500; };
	class Exile_Item_BaseCameraKit					{ quality = 1; price = 450; };
	class Exile_Item_CamoTentKit					{ quality = 1; price = 75; };
	class Exile_Item_MetalPole						{ quality = 3; price = 200; };
	class Exile_Item_MetalScrews					{ quality = 3; price = 120; };
	class Exile_Item_MetalWire						{ quality = 3; price = 50; };
	class Exile_Item_Cement							{ quality = 1; price = 30; };
	class Exile_Item_Sand							{ quality = 1; price = 25; };
	class Exile_Item_CarWheel						{ quality = 1; price = 125; };
	class Exile_Item_Magazine01						{ quality = 2; price = 50; };
	class Exile_Item_Magazine02						{ quality = 2; price = 50; };
	class Exile_Item_Magazine03						{ quality = 2; price = 50; };
	class Exile_Item_Magazine04						{ quality = 2; price = 50; };
	class Exile_Item_PortableGeneratorKit			{ quality = 1; price = 150; };
	class Exile_Item_FloodLightKit					{ quality = 1; price = 75; };
	class Exile_Item_ThermalScannerPro				{ quality = 3; price = 250; };
	class Exile_Item_WaterCanisterEmpty				{ quality = 1; price = 15; };
	class Exile_Item_WaterCanisterDirtyWater		{ quality = 1; price = 15; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_EMRE							{ quality = 3; price = 75; }; //75, 60
	class Exile_Item_GloriousKnakworst				{ quality = 1; price = 60; }; //60, 30
	class Exile_Item_Surstromming					{ quality = 1; price = 55; }; //55, 25
	class Exile_Item_SausageGravy					{ quality = 1; price = 50; }; //50, 25
	class Exile_Item_Catfood						{ quality = 1; price = 40; }; //40, 40
	class Exile_Item_ChristmasTinner				{ quality = 1; price = 40; }; //40, 60
	class Exile_Item_BBQSandwich					{ quality = 1; price = 40; }; //40, 60
	class Exile_Item_MacasCheese					{ quality = 1; price = 40; }; //40, 60
	class Exile_Item_Dogfood						{ quality = 1; price = 30; }; //30, 30
	class Exile_Item_BeefParts						{ quality = 1; price = 30; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 1; price = 30; }; //30, 30
	class Exile_Item_Noodles						{ quality = 1; price = 25; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 1; price = 20; }; //20, 40
	class Exile_Item_Raisins						{ quality = 1; price = 15; }; //15, 30
	class Exile_Item_Moobar							{ quality = 1; price = 10; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 1; price = 40; }; //5, 10
	class Exile_Item_Can_Empty						{ quality = 1; price = 10; };
	class Exile_Item_GloriousKnakworst_Cooked		{ quality = 1; price = 80; }; //60, 30
	class Exile_Item_Surstromming_Cooked			{ quality = 1; price = 85; }; //55, 25
	class Exile_Item_SausageGravy_Cooked			{ quality = 1; price = 80; }; //50, 25
	class Exile_Item_Catfood_Cooked					{ quality = 1; price = 80; }; //40, 40
	class Exile_Item_ChristmasTinner_Cooked			{ quality = 1; price = 80; }; //40, 60
	class Exile_Item_BBQSandwich_Cooked				{ quality = 1; price = 80; }; //40, 60
	class Exile_Item_MacasCheese_Cooked				{ quality = 1; price = 80; }; //40, 60
	class Exile_Item_Dogfood_Cooked					{ quality = 1; price = 80; }; //30, 30
	class Exile_Item_DsNuts							{ quality = 1; price = 30; }; //30, 30

	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_PlasticBottleCoffee	 		{ quality = 1; price = 50; };//100, 60
	class Exile_Item_PowerDrink						{ quality = 1; price = 50; }; //95, 10
	class Exile_Item_PlasticBottleFreshWater 		{ quality = 1; price = 10; }; //80, 15
	class Exile_Item_Beer 							{ quality = 1; price = 35; }; //75, 30
	class Exile_Item_EnergyDrink					{ quality = 1; price = 35; }; //75, 20
	class Exile_Item_ChocolateMilk					{ quality = 1; price = 35; }; //75, 20
	class Exile_Item_MountainDupe					{ quality = 1; price = 69; }; //50, 20
	class Exile_Item_PlasticBottleEmpty				{ quality = 1; price = 4; };
	class Exile_Item_PlasticBottleDirtyWater		{ quality = 1; price = 4; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////	
	class Exile_Item_InstaDoc                       { quality = 5; price = 550; };
	class Exile_Item_Vishpirin						{ quality = 3; price = 175; };
	class Exile_Item_Bandage	                    { quality = 1; price = 50; };
	class Exile_Item_Heatpack	                    { quality = 1; price = 15; };
	class Exile_Item_Defibrillator					{ quality = 5; price = 900; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_Matches 						{ quality = 1; price = 25; };
	class Exile_Item_CookingPot						{ quality = 1; price = 40; };
	class Exile_Melee_Axe							{ quality = 1; price = 100; };
	class Exile_Melee_SledgeHammmer					{ quality = 1; price = 100; };
	class Exile_Item_CanOpener						{ quality = 2; price = 80; };
	class Exile_Item_Handsaw						{ quality = 3; price = 140; };
	class Exile_Item_Pliers							{ quality = 3; price = 75; };
	class Exile_Item_Grinder						{ quality = 3; price = 300; };
	class Exile_Item_Foolbox						{ quality = 3; price = 525; };
	class Exile_Item_CordlessScrewdriver			{ quality = 3; price = 110; };
	class Exile_Item_FireExtinguisher				{ quality = 3; price = 140; };
	class Exile_Item_Hammer							{ quality = 3; price = 125; };
	class Exile_Item_OilCanister					{ quality = 3; price = 250; };
	class Exile_Item_Screwdriver					{ quality = 3; price = 75; };
	class Exile_Melee_Shovel						{ quality = 3; price = 100; };
	class Exile_Item_Wrench							{ quality = 3; price = 75; };
	class Exile_Item_SleepingMat					{ quality = 3; price = 450; };
	class Exile_Item_ToiletPaper					{ quality = 3; price = 12; };
	class Exile_Item_ZipTie							{ quality = 3; price = 80; };
	class Exile_Item_Knife							{ quality = 3; price = 120; };
	class Exile_Item_Exile_Item_FortificationUpgrade	{ quality = 5; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	class ItemWatch									{ quality = 1; price = 5; };	
	class ItemGPS									{ quality = 1; price = 120; };
	class ItemMap									{ quality = 1; price = 15; };
	class ItemCompass								{ quality = 1; price = 10; };
	class ItemRadio									{ quality = 1; price = 12; };
	class Binocular									{ quality = 1; price = 50; };
	class Rangefinder								{ quality = 3; price = 150; };
	class Laserdesignator							{ quality = 5; price = 500; };
	class Laserdesignator_02						{ quality = 5; price = 500; };
	class Laserdesignator_03						{ quality = 5; price = 500; };
	class NVGoggles									{ quality = 5; price = 450; };
	class NVGoggles_INDEP							{ quality = 5; price = 450; };
	class NVGoggles_OPFOR							{ quality = 5; price = 450; };
	class Exile_Item_XM8							{ quality = 1; price = 12; };
	class Exile_Item_MobilePhone					{ quality = 3; price = 69; };
	class O_NVGoggles_hex_F           				{ quality = 5; price = 450; };
	class O_NVGoggles_urb_F           				{ quality = 5; price = 450; };
	class O_NVGoggles_ghex_F          				{ quality = 5; price = 450; };
	class NVGoggles_tna_F             				{ quality = 5; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Headgear_GasMask					{ quality = 3; price = 600; };

	///////////////////////////////////////////////////////////////////////////////
	// Rebreather
	///////////////////////////////////////////////////////////////////////////////
	class V_RebreatherB								{ quality = 2; price = 250; };
	class V_RebreatherIA							{ quality = 2; price = 250; };
	class V_RebreatherIR							{ quality = 2; price = 250; };

	///////////////////////////////////////////////////////////////////////////////
	// Pilot Stuff
	///////////////////////////////////////////////////////////////////////////////
	class B_Parachute								{ quality = 3; price = 100; };
	class H_CrewHelmetHeli_B						{ quality = 1; price = 200; };
	class H_CrewHelmetHeli_I						{ quality = 1; price = 200; };
	class H_CrewHelmetHeli_O						{ quality = 1; price = 200; };
	class H_HelmetCrew_I							{ quality = 3; price = 160; };
	class H_HelmetCrew_B							{ quality = 3; price = 160; };
	class H_HelmetCrew_O							{ quality = 3; price = 160; };
	class H_PilotHelmetHeli_B						{ quality = 3; price = 240; };
	class H_PilotHelmetHeli_I						{ quality = 3; price = 240; };
	class H_PilotHelmetHeli_O						{ quality = 3; price = 240; };
	class U_B_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_B_PilotCoveralls						{ quality = 1; price = 80; };
	class U_I_HeliPilotCoveralls					{ quality = 1; price = 80; };
	class U_I_pilotCoveralls						{ quality = 1; price = 80; };
	class U_O_PilotCoveralls						{ quality = 1; price = 80; };
	class H_PilotHelmetFighter_B					{ quality = 5; price = 350; };
	class H_PilotHelmetFighter_I					{ quality = 5; price = 350; };
	class H_PilotHelmetFighter_O					{ quality = 5; price = 350; };

	///////////////////////////////////////////////////////////////////////////////
	// Backpacks
	///////////////////////////////////////////////////////////////////////////////
	class B_HuntingBackpack							{ quality = 1; price = 120; };
	class B_OutdoorPack_blk							{ quality = 1; price = 120; };
	class B_OutdoorPack_blu							{ quality = 1; price = 120; };
	class B_OutdoorPack_tan							{ quality = 1; price = 120; };
	class B_AssaultPack_blk							{ quality = 1; price = 160; };
	class B_AssaultPack_cbr							{ quality = 1; price = 160; };
	class B_AssaultPack_dgtl						{ quality = 1; price = 160; };
	class B_AssaultPack_khk							{ quality = 1; price = 160; };
	class B_AssaultPack_mcamo						{ quality = 1; price = 160; };
	class B_AssaultPack_rgr							{ quality = 1; price = 160; };
	class B_AssaultPack_sgg							{ quality = 1; price = 160; };
	class B_FieldPack_blk							{ quality = 1; price = 200; };
	class B_FieldPack_cbr							{ quality = 1; price = 200; };
	class B_FieldPack_ocamo							{ quality = 1; price = 200; };
	class B_FieldPack_oucamo						{ quality = 1; price = 200; };
	class B_FieldPack_khk							{ quality = 1; price = 200; };
	class B_TacticalPack_blk						{ quality = 1; price = 240; };
	class B_TacticalPack_rgr						{ quality = 1; price = 240; };
	class B_TacticalPack_ocamo						{ quality = 1; price = 240; };
	class B_TacticalPack_mcamo						{ quality = 1; price = 240; };
	class B_TacticalPack_oli						{ quality = 1; price = 240; };
	class B_Kitbag_cbr								{ quality = 1; price = 280; };
	class B_Kitbag_mcamo							{ quality = 1; price = 280; };
	class B_Kitbag_sgg								{ quality = 1; price = 280; };
	class B_Bergen_blk								{ quality = 1; price = 280; };
	class B_Bergen_mcamo							{ quality = 1; price = 280; };
	class B_Bergen_rgr								{ quality = 1; price = 280; };
	class B_Bergen_sgg								{ quality = 1; price = 280; };
	class B_Carryall_cbr							{ quality = 1; price = 320; };
	class B_Carryall_khk							{ quality = 1; price = 320; };
	class B_Carryall_mcamo							{ quality = 1; price = 320; };
	class B_Carryall_ocamo							{ quality = 1; price = 320; };
	class B_Carryall_oli							{ quality = 1; price = 320; };
	class B_Carryall_oucamo							{ quality = 1; price = 320; };
	class B_Bergen_Base_F							{ quality = 1; price = 480; };
	class B_Bergen_mcamo_F                  		{ quality = 1; price = 480; };
	class B_Bergen_dgtl_F                   		{ quality = 1; price = 480; };
	class B_Bergen_hex_F                    		{ quality = 1; price = 480; };
	class B_Bergen_tna_F                    		{ quality = 1; price = 480; };
	class B_AssaultPack_tna_F               		{ quality = 1; price = 160; };
	class B_Carryall_ghex_F                 		{ quality = 1; price = 320; };
	class B_FieldPack_ghex_F                		{ quality = 1; price = 200; };
	class B_ViperHarness_base_F             		{ quality = 1; price = 300; };
	class B_ViperHarness_blk_F              		{ quality = 1; price = 300; };
	class B_ViperHarness_ghex_F             		{ quality = 1; price = 300; };
	class B_ViperHarness_hex_F              		{ quality = 1; price = 300; };
	class B_ViperHarness_khk_F              		{ quality = 1; price = 300; };
	class B_ViperHarness_oli_F              		{ quality = 1; price = 300; };
	class B_ViperLightHarness_base_F        		{ quality = 1; price = 260; };
	class B_ViperLightHarness_blk_F         		{ quality = 1; price = 260; };
	class B_ViperLightHarness_ghex_F        		{ quality = 1; price = 260; };
	class B_ViperLightHarness_hex_F         		{ quality = 1; price = 260; };
	class B_ViperLightHarness_khk_F         		{ quality = 1; price = 260; };
	class B_ViperLightHarness_oli_F         		{ quality = 1; price = 260; };

	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class 100Rnd_65x39_caseless_mag 				{ quality = 1; price = 90; };
	class 100Rnd_65x39_caseless_mag_Tracer 			{ quality = 1; price = 90; };
	class 10Rnd_127x54_Mag 							{ quality = 1; price = 120; };
	class 10Rnd_338_Mag 							{ quality = 1; price = 80; };
	class 10Rnd_762x54_Mag 							{ quality = 1; price = 80; };
	class 10Rnd_93x64_DMR_05_Mag 					{ quality = 1; price = 80; };
	class 11Rnd_45ACP_Mag 							{ quality = 1; price = 20; };
	class 150Rnd_762x54_Box 						{ quality = 1; price = 130; };
	class 150Rnd_762x54_Box_Tracer 					{ quality = 1; price = 130; };
	class 16Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 200Rnd_65x39_cased_Box 					{ quality = 1; price = 110; };
	class 200Rnd_65x39_cased_Box_Tracer 			{ quality = 1; price = 110; };
	class 150Rnd_93x64_Mag 							{ quality = 1; price = 200; };
	class 130Rnd_338_Mag 							{ quality = 1; price = 200; };
	class 20Rnd_556x45_UW_mag 						{ quality = 1; price = 30; };
	class 20Rnd_762x51_Mag 							{ quality = 1; price = 50; };
	class 30Rnd_45ACP_Mag_SMG_01 					{ quality = 1; price = 30; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green 		{ quality = 1; price = 30; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow		{ quality = 1; price = 30; };
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red			{ quality = 1; price = 30; };
	class 30Rnd_556x45_Stanag 						{ quality = 1; price = 40; };
	class 30Rnd_556x45_Stanag_Tracer_Green 			{ quality = 1; price = 40; };
	class 30Rnd_556x45_Stanag_green  				{ quality = 1; price = 40; };
	class 30Rnd_556x45_Stanag_Tracer_Red 			{ quality = 1; price = 40; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow 		{ quality = 1; price = 40; };
	class 30Rnd_556x45_Stanag_red 					{ quality = 1; price = 40; };
	class 30Rnd_65x39_caseless_green 				{ quality = 1; price = 50; };
	class 30Rnd_65x39_caseless_green_mag_Tracer 	{ quality = 1; price = 50; };
	class 30Rnd_65x39_caseless_mag 					{ quality = 1; price = 50; };
	class 30Rnd_65x39_caseless_mag_Tracer 			{ quality = 1; price = 50; };
	class 30Rnd_9x21_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_9x21_Yellow_Mag						{ quality = 1; price = 20; };
	class 30Rnd_9x21_Green_Mag						{ quality = 1; price = 20; };
	class 30Rnd_9x21_Red_Mag						{ quality = 1; price = 20; };
	class 5Rnd_127x108_APDS_Mag 					{ quality = 1; price = 180; };
	class 5Rnd_127x108_Mag 							{ quality = 1; price = 120; };
	class 6Rnd_45ACP_Cylinder 						{ quality = 1; price = 20; };
	class 6Rnd_GreenSignal_F 						{ quality = 1; price = 20; };
	class 6Rnd_RedSignal_F 							{ quality = 1; price = 20; };
	class 7Rnd_408_Mag 								{ quality = 1; price = 120; };
	class 9Rnd_45ACP_Mag 							{ quality = 1; price = 20; };
	class 30Rnd_9x21_Mag_SMG_02						{ quality = 1; price = 30; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red          { quality = 1; price = 30; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow       { quality = 1; price = 30; };
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green        { quality = 1; price = 30; };
	class 30Rnd_580x42_Mag_F                        { quality = 1; price = 45; };
	class 30Rnd_580x42_Mag_Tracer_F                 { quality = 1; price = 45; };
	class 100Rnd_580x42_Mag_F                       { quality = 1; price = 80; };
	class 100Rnd_580x42_Mag_Tracer_F                { quality = 1; price = 80; };
	class 20Rnd_650x39_Cased_Mag_F                  { quality = 1; price = 40; };
	class 10Rnd_50BW_Mag_F                          { quality = 1; price = 120; };
	class 150Rnd_556x45_Drum_Mag_F                  { quality = 1; price = 70; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F           { quality = 1; price = 70; };
	class 30Rnd_762x39_Mag_F                        { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Green_F                  { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Tracer_F                 { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Tracer_Green_F           { quality = 1; price = 50; };
	class 30Rnd_545x39_Mag_F                        { quality = 1; price = 40; };
	class 30Rnd_545x39_Mag_Green_F                  { quality = 1; price = 40; };
	class 30Rnd_545x39_Mag_Tracer_F                 { quality = 1; price = 40; };
	class 30Rnd_545x39_Mag_Tracer_Green_F           { quality = 1; price = 40; };
	class 200Rnd_556x45_Box_F                       { quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Red_F                   { quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_F                { quality = 1; price = 90; };
	class 200Rnd_556x45_Box_Tracer_Red_F            { quality = 1; price = 90; };
	class 10Rnd_9x21_Mag							{ quality = 1; price = 20; };
	class hlc_30Rnd_545x39_B_AK	                    { quality = 1; price = 40; };
	class hlc_30Rnd_545x39_T_AK	                    { quality = 1; price = 40; };
	class hlc_30Rnd_545x39_EP_AK	                { quality = 1; price = 40; };
	class hlc_45Rnd_545x39_t_rpk	                { quality = 1; price = 40; };
	class hlc_60Rnd_545x39_t_rpk	                { quality = 1; price = 40; };
	class hlc_30Rnd_762x39_b_ak	                    { quality = 1; price = 50; };
	class hlc_30Rnd_762x39_t_ak	                    { quality = 1; price = 50; };
	class hlc_45Rnd_762x39_t_rpk	                { quality = 1; price = 60; };
	class hlc_45Rnd_762x39_m_rpk	                { quality = 1; price = 60; };
	class hlc_75rnd_762x39_m_rpk	                { quality = 1; price = 70; };
	class hlc_10rnd_12g_buck_S12	                { quality = 1; price = 20; };
	class hlc_10rnd_12g_slug_S12	                { quality = 1; price = 20; };
	class 29rnd_300BLK_STANAG                       { quality = 1; price = 50; };
	class 29rnd_300BLK_STANAG_T                     { quality = 1; price = 50; };
	class 29rnd_300BLK_STANAG_S                     { quality = 1; price = 50; };
	class hlc_30rnd_556x45_EPR                      { quality = 1; price = 40; };
	class hlc_30rnd_556x45_SOST                     { quality = 1; price = 40; };
	class hlc_30rnd_556x45_SPR	                    { quality = 1; price = 40; };
	class hlc_30Rnd_556x45_B_AUG                    { quality = 1; price = 40; };
	class hlc_30Rnd_556x45_SOST_AUG                 { quality = 1; price = 40; };
	class hlc_30Rnd_556x45_SPR_AUG                  { quality = 1; price = 40; };
	class hlc_30Rnd_556x45_T_AUG                    { quality = 1; price = 40; };
	class hlc_40Rnd_556x45_B_AUG                    { quality = 1; price = 40; };
	class hlc_40Rnd_556x45_SOST_AUG                 { quality = 1; price = 40; };
	class hlc_40Rnd_556x45_SPR_AUG                  { quality = 1; price = 40; };
	class hlc_25Rnd_9x19mm_M882_AUG                 { quality = 1; price = 40; };
	class hlc_25Rnd_9x19mm_JHP_AUG                  { quality = 1; price = 40; };
	class hlc_25Rnd_9x19mm_subsonic_AUG	            { quality = 1; price = 40; };
	class hlc_5rnd_300WM_FMJ_AWM                    { quality = 1; price = 75; };
	class hlc_5rnd_300WM_AP_AWM                     { quality = 1; price = 75; };
	class hlc_5rnd_300WM_BTSP_AWM                   { quality = 1; price = 75; };
	class hlc_5rnd_300WM_mk248_AWM                  { quality = 1; price = 75; };
	class hlc_5rnd_300WM_SBT_AWM                    { quality = 1; price = 75; };
	class hlc_20Rnd_762x51_B_fal                    { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_t_fal                    { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_S_fal                    { quality = 1; price = 60; };
	class hlc_50rnd_762x51_M_FAL	                { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_B_G3                     { quality = 1; price = 60; };
	class hlc_20rnd_762x51_T_G3                     { quality = 1; price = 60; };
	class hlc_50rnd_762x51_M_G3	                    { quality = 1; price = 80; };
	class hlc_30rnd_556x45_EPR_G36                  { quality = 1; price = 40; };
	class hlc_30rnd_556x45_SOST_G36                 { quality = 1; price = 40; };
	class hlc_30rnd_556x45_SPR_G36                  { quality = 1; price = 40; };
	class hlc_100rnd_556x45_EPR_G36	                { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_B_M14                    { quality = 1; price = 50; };
	class hlc_20rnd_762x51_T_M14                    { quality = 1; price = 50; };
	class hlc_50rnd_762x51_M_M14	                { quality = 1; price = 80; };
	class hlc_100Rnd_762x51_B_M60E4                 { quality = 1; price = 110; };
	class hlc_100Rnd_762x51_T_M60E4                 { quality = 1; price = 110; };
	class hlc_100Rnd_762x51_M_M60E4	                { quality = 1; price = 110; };
	class hlc_30Rnd_9x19_B_MP5                      { quality = 1; price = 20; };
	class hlc_30Rnd_9x19_GD_MP5                     { quality = 1; price = 20; };
	class hlc_30Rnd_9x19_SD_MP5                     { quality = 1; price = 20; };
	class hlc_30Rnd_10mm_B_MP5                      { quality = 1; price = 20; };
	class hlc_30Rnd_10mm_JHP_MP5	                { quality = 1; price = 20; };
	class hlc_200rnd_556x45_M_SAW                   { quality = 1; price = 80; };
	class hlc_200rnd_556x45_T_SAW                   { quality = 1; price = 80; };
	class hlc_200rnd_556x45_B_SAW	                { quality = 1; price = 80; };
	class hlc_24Rnd_75x55_B_stgw                    { quality = 1; price = 60; };
	class hlc_24Rnd_75x55_ap_stgw                   { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_b_amt                    { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_mk316_amt                { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_bball_amt                { quality = 1; price = 60; };
	class hlc_20Rnd_762x51_T_amt                    { quality = 1; price = 60; };
	class hlc_24Rnd_75x55_T_stgw	                { quality = 1; price = 60; };
	class hlc_5rnd_3006_1903	                    { quality = 1; price = 20; };
	//class HLC_AK_ammobox	                  		{ quality = 6; price = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	class Chemlight_blue							{ quality = 1; price = 5; };
	class Chemlight_green							{ quality = 1; price = 5; };
	class Chemlight_red								{ quality = 1; price = 5; };
	class FlareGreen_F								{ quality = 1; price = 10; };
	class FlareRed_F								{ quality = 1; price = 10; };
	class FlareWhite_F								{ quality = 1; price = 10; };
	class FlareYellow_F								{ quality = 1; price = 10; };
	class UGL_FlareGreen_F							{ quality = 2; price = 10; };
	class UGL_FlareRed_F							{ quality = 2; price = 10; };
	class UGL_FlareWhite_F							{ quality = 2; price = 10; };
	class UGL_FlareYellow_F							{ quality = 2; price = 10; };
	class 3Rnd_UGL_FlareGreen_F						{ quality = 3; price = 15*3; };
	class 3Rnd_UGL_FlareRed_F						{ quality = 3; price = 15*3; };
	class 3Rnd_UGL_FlareWhite_F						{ quality = 3; price = 15*3; };
	class 3Rnd_UGL_FlareYellow_F					{ quality = 3; price = 15*3; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	class SmokeShell								{ quality = 1; price = 5; };
	class SmokeShellBlue							{ quality = 1; price = 5; };
	class SmokeShellGreen							{ quality = 1; price = 5; };
	class SmokeShellOrange							{ quality = 1; price = 5; };
	class SmokeShellPurple							{ quality = 1; price = 5; };
	class SmokeShellRed								{ quality = 1; price = 5; };
	class SmokeShellYellow							{ quality = 1; price = 5; };
	class 1Rnd_Smoke_Grenade_shell					{ quality = 2; price = 10; };
	class 1Rnd_SmokeBlue_Grenade_shell				{ quality = 2; price = 10; };
	class 1Rnd_SmokeGreen_Grenade_shell				{ quality = 2; price = 10; };
	class 1Rnd_SmokeOrange_Grenade_shell			{ quality = 2; price = 10; };
	class 1Rnd_SmokePurple_Grenade_shell			{ quality = 2; price = 10; };
	class 1Rnd_SmokeRed_Grenade_shell				{ quality = 2; price = 10; };
	class 1Rnd_SmokeYellow_Grenade_shell			{ quality = 2; price = 10; };
	class 3Rnd_Smoke_Grenade_shell					{ quality = 3; price = 10*3; };
	class 3Rnd_SmokeBlue_Grenade_shell				{ quality = 3; price = 10*3; };
	class 3Rnd_SmokeGreen_Grenade_shell				{ quality = 3; price = 10*3; };
	class 3Rnd_SmokeOrange_Grenade_shell			{ quality = 3; price = 10*3; };
	class 3Rnd_SmokePurple_Grenade_shell			{ quality = 3; price = 10*3; };
	class 3Rnd_SmokeRed_Grenade_shell				{ quality = 3; price = 10*3; };
	class 3Rnd_SmokeYellow_Grenade_shell			{ quality = 3; price = 10*3; };
	class hlc_GRD_White                            	{ quality = 1; price = 10; };
	class hlc_GRD_red                              	{ quality = 1; price = 10; };
	class hlc_GRD_green                            	{ quality = 1; price = 10; };
	class hlc_GRD_blue                             	{ quality = 1; price = 10; };
	class hlc_GRD_orange                           	{ quality = 1; price = 10; };
	class hlc_GRD_purple                           	{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	class HandGrenade								{ quality = 3; price = 75; };
	class MiniGrenade								{ quality = 3; price = 40; };
	class B_IR_Grenade								{ quality = 1; price = 69; };
	class O_IR_Grenade								{ quality = 1; price = 69; };
	class I_IR_Grenade								{ quality = 1; price = 69; };
	class 1Rnd_HE_Grenade_shell						{ quality = 3; price = 75; };
	class 3Rnd_HE_Grenade_shell						{ quality = 3; price = 75*3; };
	class APERSBoundingMine_Range_Mag				{ quality = 3; price = 300; };
	class APERSMine_Range_Mag						{ quality = 3; price = 300; };
	class APERSTripMine_Wire_Mag					{ quality = 3; price = 300; };
	class ClaymoreDirectionalMine_Remote_Mag		{ quality = 3; price = 300; };
	class DemoCharge_Remote_Mag						{ quality = 5; price = 750; };
	class IEDLandBig_Remote_Mag						{ quality = 3; price = 600; };
	class IEDLandSmall_Remote_Mag					{ quality = 3; price = 300; };
	class IEDUrbanBig_Remote_Mag					{ quality = 3; price = 600; };
	class IEDUrbanSmall_Remote_Mag					{ quality = 3; price = 300; };
	class SatchelCharge_Remote_Mag					{ quality = 5; price = 1500; };
	class SLAMDirectionalMine_Wire_Mag				{ quality = 3; price = 600; };
	class hlc_VOG25_AK								{ quality = 3; price = 75; };

	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	class hgun_ACPC2_F 								{ quality = 1; price = 75; };
	class hgun_P07_F 								{ quality = 1; price = 50; };
	class hgun_Pistol_heavy_01_F 					{ quality = 1; price = 75; };
	class hgun_Pistol_heavy_02_F 					{ quality = 1; price = 75; };
	class hgun_Pistol_Signal_F 						{ quality = 1; price = 50; };
	class hgun_Rook40_F 							{ quality = 1; price = 50; };
	class hgun_Pistol_01_F            				{ quality = 1; price = 50; };
	class hgun_P07_khk_F             				{ quality = 1; price = 50; };
	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class hgun_PDW2000_F 							{ quality = 1; price = 100; };
	class SMG_01_F 									{ quality = 1; price = 100; };
	class SMG_02_F 									{ quality = 1; price = 100; };
	class SMG_05_F									{ quality = 1; price = 100; };
	class hlc_smg_mp5k_PDW                    		{ quality = 1; price = 100; };
	class hlc_smg_mp5k                        		{ quality = 1; price = 100; };
	class hlc_smg_mp5a2                       		{ quality = 1; price = 100; };
	class hlc_smg_mp5a3                       		{ quality = 1; price = 100; };
	class hlc_smg_mp5a4                       		{ quality = 1; price = 100; };
	class hlc_smg_mp5n                        		{ quality = 1; price = 100; };
	class hlc_smg_mp510                       		{ quality = 1; price = 100; };
	class hlc_smg_mp5sd5                      		{ quality = 1; price = 100; };
	class hlc_smg_mp5sd6                      		{ quality = 1; price = 100; };
	class hlc_smg_9mmar                       		{ quality = 1; price = 100; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MX_SW_Black_F						{ quality = 1; price = 275; };
	class arifle_MX_SW_F							{ quality = 1; price = 275; };
	class LMG_Mk200_F								{ quality = 1; price = 375; };
	class LMG_Zafir_F								{ quality = 1; price = 450; };
	class MMG_01_hex_F								{ quality = 1; price = 500; };
	class MMG_01_tan_F								{ quality = 1; price = 500; };
	class MMG_02_black_F							{ quality = 1; price = 500; };
	class MMG_02_camo_F								{ quality = 1; price = 500; };
	class MMG_02_sand_F								{ quality = 1; price = 500; };
	class LMG_03_F									{ quality = 1; price = 325; };
	class hlc_lmg_M60E4                       		{ quality = 1; price = 450; };
	class hlc_lmg_m60                         		{ quality = 1; price = 450; };
	class hlc_lmg_minimipara                  		{ quality = 1; price = 325; };
	class hlc_lmg_minimi                      		{ quality = 1; price = 325; };
	class hlc_lmg_minimi_railed               		{ quality = 1; price = 325; };
	class hlc_lmg_m249para                    		{ quality = 1; price = 325; };
	class hlc_lmg_M249E2                      		{ quality = 1; price = 325; };
	class hlc_m249_pip1                       		{ quality = 1; price = 325; };
	class hlc_m249_pip2                       		{ quality = 1; price = 325; };
	class hlc_m249_pip3                       		{ quality = 1; price = 325; };
	class hlc_m249_pip4                       		{ quality = 1; price = 325; };
	class hlc_lmg_mk48                        		{ quality = 1; price = 450; };

	///////////////////////////////////////////////////////////////////////////////
	// Assault Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_Katiba_C_F							{ quality = 1; price = 250; };
	class arifle_Katiba_F							{ quality = 1; price = 250; };
	class arifle_Katiba_GL_F						{ quality = 1; price = 250; };
	class arifle_Mk20_F								{ quality = 1; price = 200; };
	class arifle_Mk20_GL_F							{ quality = 1; price = 200; };
	class arifle_Mk20_GL_plain_F					{ quality = 1; price = 200; };
	class arifle_Mk20_plain_F						{ quality = 1; price = 200; };
	class arifle_Mk20C_F							{ quality = 1; price = 200; };
	class arifle_Mk20C_plain_F						{ quality = 1; price = 200; };
	class arifle_MX_Black_F							{ quality = 1; price = 250; };
	class arifle_MX_F								{ quality = 1; price = 250; };
	class arifle_MX_GL_Black_F						{ quality = 1; price = 250; };
	class arifle_MX_GL_F							{ quality = 1; price = 250; };
	class arifle_MXC_Black_F						{ quality = 1; price = 250; };
	class arifle_MXC_F								{ quality = 1; price = 250; };
	class arifle_SDAR_F								{ quality = 1; price = 250; };
	class arifle_TRG20_F							{ quality = 1; price = 200; };
	class arifle_TRG21_F							{ quality = 1; price = 200; };
	class arifle_TRG21_GL_F							{ quality = 1; price = 200; };
	class arifle_MX_khk_F            				{ quality = 1; price = 250; };
	class arifle_MX_GL_khk_F         				{ quality = 1; price = 250; };
	class arifle_MXC_khk_F           				{ quality = 1; price = 250; };
	class arifle_AK12_F              				{ quality = 1; price = 250; };
	class arifle_AK12_GL_F           				{ quality = 1; price = 250; };
	class arifle_AKM_F               				{ quality = 1; price = 250; };
	class arifle_AKM_FL_F            				{ quality = 1; price = 250; };
	class arifle_AKS_F               				{ quality = 1; price = 250; };
	class arifle_ARX_blk_F           				{ quality = 1; price = 250; };
	class arifle_ARX_ghex_F          				{ quality = 1; price = 250; };
	class arifle_ARX_hex_F           				{ quality = 1; price = 250; };
	class arifle_CTAR_blk_F          				{ quality = 1; price = 250; };
	class arifle_CTAR_hex_F          				{ quality = 1; price = 250; };
	class arifle_CTAR_ghex_F         				{ quality = 1; price = 250; };
	class arifle_CTAR_GL_blk_F       				{ quality = 1; price = 250; };
	class arifle_CTARS_blk_F         				{ quality = 1; price = 250; };
	class arifle_CTARS_ghex_F        				{ quality = 1; price = 250; };
	class arifle_CTARS_hex_F         				{ quality = 1; price = 250; };
	class arifle_SPAR_01_blk_F       				{ quality = 1; price = 200; };
	class arifle_SPAR_01_khk_F       				{ quality = 1; price = 200; };
	class arifle_SPAR_01_snd_F       				{ quality = 1; price = 200; };
	class arifle_SPAR_01_GL_blk_F    				{ quality = 1; price = 200; };
	class arifle_SPAR_01_GL_khk_F    				{ quality = 1; price = 200; };
	class arifle_SPAR_01_GL_snd_F    				{ quality = 1; price = 200; };
	class arifle_SPAR_02_blk_F       				{ quality = 1; price = 200; };
	class arifle_SPAR_02_khk_F       				{ quality = 1; price = 200; };
	class arifle_SPAR_02_snd_F       				{ quality = 1; price = 200; };
	//ak
	class hlc_rifle_ak74							{ quality = 1; price = 225; };
	class hlc_rifle_ak74_MTK                        { quality = 1; price = 225; };
	class hlc_rifle_ak74_dirty                      { quality = 1; price = 225; };
	class hlc_rifle_ak74_dirty2                     { quality = 1; price = 225; };
	class hlc_rifle_aks74                           { quality = 1; price = 225; };
	class hlc_rifle_aks74_MTK                       { quality = 1; price = 225; };
	class hlc_rifle_aks74u                          { quality = 1; price = 225; };
	class hlc_rifle_aks74u_MTK                      { quality = 1; price = 225; };
	class hlc_rifle_ak47                            { quality = 1; price = 225; };
	class hlc_rifle_akm                             { quality = 1; price = 225; };
	class hlc_rifle_akm_MTK                         { quality = 1; price = 225; };
	class hlc_rifle_rpk                             { quality = 1; price = 250; };
	class hlc_rifle_ak12                            { quality = 1; price = 225; };
	class hlc_rifle_aku12                           { quality = 1; price = 225; };
	class hlc_rifle_rpk12                           { quality = 1; price = 250; };
	class hlc_rifle_rpk74n                          { quality = 1; price = 225; };
	class hlc_rifle_ak12gl                          { quality = 1; price = 225; };
	class hlc_rifle_akmgl                           { quality = 1; price = 225; };
	class hlc_rifle_aks74_GL                        { quality = 1; price = 225; };
	class hlc_rifle_saiga12k                        { quality = 1; price = 225; };
	class hlc_rifle_aek971                          { quality = 1; price = 225; };
	class hlc_rifle_aek971_mtk                      { quality = 1; price = 225; };
	class hlc_rifle_RK62                            { quality = 1; price = 225; };
	class hlc_rifle_slr107u                         { quality = 1; price = 225; };
	class hlc_rifle_slr107u_MTK                     { quality = 1; price = 225; };
	class hlc_rifle_ak74m                           { quality = 1; price = 225; };
	class hlc_rifle_ak74m_gl                        { quality = 1; price = 225; };
	class hlc_rifle_ak74m_MTK	                    { quality = 1; price = 225; };
	//ar15
	class hlc_rifle_CQBR                           { quality = 1; price = 250; };
	class hlc_rifle_M4								{ quality = 1; price = 250; };
	class hlc_rifle_m4m203                         { quality = 1; price = 250; };
	class hlc_rifle_RU556                          { quality = 1; price = 250; };
	class hlc_rifle_RU5562                         { quality = 1; price = 250; };
	class hlc_rifle_Colt727                        { quality = 1; price = 250; };
	class hlc_rifle_Colt727_GL                     { quality = 1; price = 250; };
	class hlc_rifle_bcmjack                        { quality = 1; price = 350; };
	class hlc_rifle_Bushmaster300                  { quality = 1; price = 350; };
	class hlc_rifle_vendimus                       { quality = 1; price = 350; };
	class hlc_rifle_SAMR                           { quality = 1; price = 250; };
	class hlc_rifle_samr2                          { quality = 1; price = 250; };
	class hlc_rifle_honeybadger                    { quality = 1; price = 350; };
	//aug
	class hlc_rifle_aug                           { quality = 1; price = 250; };
	class hlc_rifle_auga1_t                       { quality = 1; price = 250; };
	class hlc_rifle_auga1_B                       { quality = 1; price = 250; };
	class hlc_rifle_auga1carb                     { quality = 1; price = 250; };
	class hlc_rifle_auga1carb_t                   { quality = 1; price = 250; };
	class hlc_rifle_auga1carb_b                   { quality = 1; price = 250; };
	class hlc_rifle_aughbar                       { quality = 1; price = 250; };
	class hlc_rifle_aughbar_b                     { quality = 1; price = 250; };
	class hlc_rifle_aughbar_t                     { quality = 1; price = 250; };
	class hlc_rifle_augpara                       { quality = 1; price = 250; };
	class hlc_rifle_augpara_b                     { quality = 1; price = 250; };
	class hlc_rifle_augpara_t                     { quality = 1; price = 250; };
	class hlc_rifle_auga2                         { quality = 1; price = 250; };
	class hlc_rifle_auga2_b                       { quality = 1; price = 250; };
	class hlc_rifle_auga2_t                       { quality = 1; price = 250; };
	class hlc_rifle_auga2carb                     { quality = 1; price = 250; };
	class hlc_rifle_auga2carb_t                   { quality = 1; price = 250; };
	class hlc_rifle_auga2carb_b                   { quality = 1; price = 250; };
	class hlc_rifle_auga2lsw                      { quality = 1; price = 250; };
	class hlc_rifle_auga2lsw_t                    { quality = 1; price = 250; };
	class hlc_rifle_auga2lsw_b                    { quality = 1; price = 250; };
	class hlc_rifle_auga2para                     { quality = 1; price = 250; };
	class hlc_rifle_auga2para_b                   { quality = 1; price = 250; };
	class hlc_rifle_auga2para_t                   { quality = 1; price = 250; };
	class hlc_rifle_augsr                         { quality = 1; price = 250; };
	class hlc_rifle_augsr_b                       { quality = 1; price = 250; };
	class hlc_rifle_augsr_t                       { quality = 1; price = 250; };
	class hlc_rifle_augsrcarb                     { quality = 1; price = 250; };
	class hlc_rifle_augsrcarb_t                   { quality = 1; price = 250; };
	class hlc_rifle_augsrcarb_b                   { quality = 1; price = 250; };
	class hlc_rifle_augsrhbar                     { quality = 1; price = 250; };
	class hlc_rifle_augsrhbar_b                   { quality = 1; price = 250; };
	class hlc_rifle_augsrhbar_t                   { quality = 1; price = 250; };
	class hlc_rifle_auga3                         { quality = 1; price = 250; };
	class hlc_rifle_auga3_bl                      { quality = 1; price = 250; };
	class hlc_rifle_auga3_b                       { quality = 1; price = 250; };
	class hlc_rifle_auga3_GL                      { quality = 1; price = 250; };
	class hlc_rifle_auga3_GL_BL                   { quality = 1; price = 250; };
	class hlc_rifle_auga3_GL_B                    { quality = 1; price = 250; };
	//fal
	class hlc_rifle_l1a1slr                       { quality = 1; price = 350; };
	class hlc_rifle_SLR                           { quality = 1; price = 350; };
	class hlc_rifle_STG58F                        { quality = 1; price = 350; };
	class hlc_rifle_FAL5061                       { quality = 1; price = 350; };
	class hlc_rifle_FAL5061Rail                   { quality = 1; price = 350; };
	class hlc_rifle_FAL5000                       { quality = 1; price = 350; };
	class hlc_rifle_FAL5000Rail                   { quality = 1; price = 350; };
	class hlc_rifle_c1A1                          { quality = 1; price = 350; };
	class hlc_rifle_LAR                           { quality = 1; price = 350; };
	class hlc_rifle_SLRchopmod                    { quality = 1; price = 350; };
	class hlc_rifle_falosw                        { quality = 1; price = 350; };
	class hlc_rifle_osw_GL	                      { quality = 1; price = 350; };
	//g3
	class hlc_rifle_g3sg1                        { quality = 1; price = 350; };
	class hlc_rifle_g3a3                         { quality = 1; price = 350; };
	class hlc_rifle_g3a3ris                      { quality = 1; price = 350; };
	class hlc_rifle_g3ka4                        { quality = 1; price = 350; };
	class HLC_Rifle_g3ka4_GL                     { quality = 1; price = 350; };
	class hlc_rifle_hk51                         { quality = 1; price = 350; };
	class hlc_rifle_hk53                         { quality = 1; price = 350; };
	class hlc_rifle_hk53RAS                      { quality = 1; price = 350; };
	class hlc_rifle_hk33a2                       { quality = 1; price = 350; };
	class hlc_rifle_hk33a2RIS                    { quality = 1; price = 350; };
	class hlc_rifle_g3a3v	                     { quality = 1; price = 350; };
	class hlc_rifle_G36A1                        { quality = 1; price = 250; };
	class hlc_rifle_G36A1AG36                    { quality = 1; price = 250; };
	class hlc_rifle_G36KA1                       { quality = 1; price = 250; };
	class hlc_rifle_G36C                         { quality = 1; price = 250; };
	class hlc_rifle_G36E1                        { quality = 1; price = 250; };
	class hlc_rifle_G36E1AG36                    { quality = 1; price = 250; };
	class hlc_rifle_G36KE1                       { quality = 1; price = 250; };
	class hlc_rifle_G36V                         { quality = 1; price = 250; };
	class hlc_rifle_G36KV                        { quality = 1; price = 250; };
	class hlc_rifle_G36CV                        { quality = 1; price = 250; };
	class hlc_rifle_G36VAG36                     { quality = 1; price = 250; };
	class hlc_rifle_G36TAC                       { quality = 1; price = 250; };
	class hlc_rifle_G36KTAC                      { quality = 1; price = 250; };
	class hlc_rifle_G36CTAC                      { quality = 1; price = 250; };
	class hlc_rifle_G36MLIC                      { quality = 1; price = 250; };
	class hlc_rifle_G36KMLIC                     { quality = 1; price = 250; };
	class hlc_rifle_G36CMLIC                     { quality = 1; price = 250; };
	class hlc_rifle_G36MLIAG36                   { quality = 1; price = 250; };
	class hlc_rifle_MG36	                     { quality = 1; price = 250; };
	//sg510
	class hlc_rifle_STGW57         				 { quality = 1; price = 300; };
	class hlc_rifle_stgw57_RIS     				 { quality = 1; price = 300; };
	class hlc_rifle_stgw57_commando				 { quality = 1; price = 300; };
	class hlc_rifle_sig5104        				 { quality = 1; price = 300; };
	class hlc_rifle_amt            				 { quality = 1; price = 300; };


	///////////////////////////////////////////////////////////////////////////////
	// Sniper Rifles
	///////////////////////////////////////////////////////////////////////////////
	class arifle_MXM_Black_F 						{ quality = 1; price = 275; };
	class arifle_MXM_F 								{ quality = 1; price = 275; };
	class srifle_DMR_01_F 							{ quality = 1; price = 300; };
	class srifle_DMR_02_camo_F 						{ quality = 1; price = 425; };
	class srifle_DMR_02_F 							{ quality = 1; price = 425; };
	class srifle_DMR_02_sniper_F 					{ quality = 1; price = 425; };
	class srifle_DMR_03_F 							{ quality = 1; price = 425; };
	class srifle_DMR_03_khaki_F 					{ quality = 1; price = 425; };
	class srifle_DMR_03_multicam_F 					{ quality = 1; price = 425; };
	class srifle_DMR_03_tan_F 						{ quality = 1; price = 425; };
	class srifle_DMR_03_woodland_F 					{ quality = 1; price = 425; };
	class srifle_DMR_04_F 							{ quality = 1; price = 425; };
	class srifle_DMR_04_Tan_F 						{ quality = 1; price = 425; };
	class srifle_DMR_05_blk_F 						{ quality = 1; price = 425; };
	class srifle_DMR_05_hex_F 						{ quality = 1; price = 425; };
	class srifle_DMR_05_tan_f 						{ quality = 1; price = 425; };
	class srifle_DMR_06_camo_F 						{ quality = 1; price = 300; };
	class srifle_DMR_06_olive_F 					{ quality = 1; price = 300; };
	class srifle_EBR_F 								{ quality = 1; price = 300; };
	class srifle_GM6_camo_F 						{ quality = 1; price = 650; };
	class srifle_GM6_F 								{ quality = 1; price = 650; };
	class srifle_LRR_camo_F 						{ quality = 1; price = 650; };
	class srifle_LRR_F 								{ quality = 1; price = 650; };
	class arifle_SPAR_03_blk_F        				{ quality = 1; price = 300; };
	class arifle_SPAR_03_khk_F        				{ quality = 1; price = 300; };
	class arifle_SPAR_03_snd_F        				{ quality = 1; price = 300; };
	class arifle_MXM_khk_F            				{ quality = 1; price = 300; };
	class srifle_LRR_tna_F            				{ quality = 1; price = 650; };
	class srifle_GM6_ghex_F           				{ quality = 1; price = 650; };
	class srifle_DMR_07_blk_F         				{ quality = 1; price = 300; };
	class srifle_DMR_07_hex_F         				{ quality = 1; price = 300; };
	class srifle_DMR_07_ghex_F        				{ quality = 1; price = 300; };
	//awp
	class hlc_rifle_awcovert            			{ quality = 1; price = 550; };
	class hlc_rifle_awcovert_BL         			{ quality = 1; price = 550; };
	class hlc_rifle_awcovert_FDE        			{ quality = 1; price = 550; };
	class hlc_rifle_awmagnum            			{ quality = 1; price = 500; };
	class hlc_rifle_awmagnum_BL         			{ quality = 1; price = 500; };
	class hlc_rifle_awmagnum_FDE        			{ quality = 1; price = 500; };
	class hlc_rifle_awMagnum_FDE_ghillie			{ quality = 1; price = 525; };
	class hlc_rifle_awMagnum_BL_ghillie 			{ quality = 1; price = 525; };
	class hlc_rifle_awMagnum_OD_ghillie				{ quality = 1; price = 525; };
	class hlc_rifle_M14                       		{ quality = 1; price = 325; };
	class hlc_rifle_M21                       		{ quality = 1; price = 325; };
	class hlc_rifle_M14DMR                    		{ quality = 1; price = 325; };
	class hlc_rifle_m14sopmod	              		{ quality = 1; price = 350; };
	//springfield		
	class hlc_rifle_M1903A1_unertl            		{ quality = 1; price = 175; };
	class hlc_rifle_M1903A1                   		{ quality = 1; price = 125; };
	class hlc_rifle_M1903A1OMR				  		{ quality = 1; price = 125; };
	class hlc_rifle_psg1                        	{ quality = 1; price = 350; };
	class hlc_rifle_psg1A1                       	{ quality = 1; price = 350; };
	class hlc_rifle_PSG1A1_RIS                   	{ quality = 1; price = 350; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Exile Weapons
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Weapon_LeeEnfield					{ quality = 1; price = 125; };
	class Exile_Weapon_CZ550						{ quality = 1; price = 125; };
	class Exile_Weapon_VSSVintorez					{ quality = 1; price = 125; };
	class Exile_Weapon_PK							{ quality = 1; price = 450; };
	class Exile_Weapon_PKP							{ quality = 1; price = 450; };
	class Exile_Weapon_Colt1911						{ quality = 1; price = 75; };
	class Exile_Weapon_Makarov						{ quality = 1; price = 75; };
	class Exile_Weapon_Taurus						{ quality = 1; price = 75; };
	class Exile_Weapon_TaurusGold					{ quality = 1; price = 75; };
	class Exile_Weapon_M1014						{ quality = 1; price = 100; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Exile Ammunition
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Magazine_10Rnd_303						{ quality = 1; price = 20; };
	class Exile_Magazine_100Rnd_762x54_PK_Green			{ quality = 1; price = 75; };
	class Exile_Magazine_7Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_9x18						{ quality = 1; price = 20; };
	class Exile_Magazine_6Rnd_45ACP						{ quality = 1; price = 20; };
	class Exile_Magazine_5Rnd_22LR						{ quality = 1; price = 20; };
	class Exile_Magazine_10Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_20Rnd_9x39						{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Slug					{ quality = 1; price = 20; };
	class Exile_Magazine_8Rnd_74Pellets					{ quality = 1; price = 20; }; // broken?
	
	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 5; price = 5000;  sellPrice = 5000;  };   
	class Exile_Item_FlagStolen2						{ quality = 5; price = 7000;  sellPrice = 7000;  };     
	class Exile_Item_FlagStolen3						{ quality = 5; price = 10000; sellPrice = 10000; };   
	class Exile_Item_FlagStolen4						{ quality = 5; price = 14000; sellPrice = 14000; };   
	class Exile_Item_FlagStolen5						{ quality = 5; price = 19000; sellPrice = 19000; };   
	class Exile_Item_FlagStolen6						{ quality = 5; price = 25000; sellPrice = 25000; };   
	class Exile_Item_FlagStolen7						{ quality = 5; price = 32000; sellPrice = 32000; };   
	class Exile_Item_FlagStolen8						{ quality = 5; price = 40000; sellPrice = 40000; };   
	class Exile_Item_FlagStolen9						{ quality = 5; price = 49000; sellPrice = 49000; };   
	class Exile_Item_FlagStolen10						{ quality = 5; price = 59000; sellPrice = 59000; };   
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	//Snow updates
	ExileClient_system_snow_thread_update = "custom\overrides\ExileClient_system_snow_thread_update.sqf";
	//Temperature
	ExileClient_object_player_stats_updateTemperature = "custom\overrides\ExileClient_object_player_stats_updateTemperature.sqf";
	//Random Spawn
	ExileClient_gui_selectSpawnLocation_show = "custom\overrides\ExileClient_gui_selectSpawnLocation_show.sqf";
	//Party ESP GPS
	ExileClient_gui_hud_renderPartyESP = "custom\overrides\ExileClient_gui_hud_renderPartyESP.sqf";
	//Random Spawn Outfit
	ExileServer_object_player_createBambi = "custom\loadout\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest = "custom\loadout\ExileServer_object_player_network_createPlayerRequest.sqf";
	
	// loot spawn fixe
	ExileClient_system_lootManager_thread_spawn = "custom\overrides\ExileClient_system_lootManager_thread_spawn.sqf";
	
	//Waste Dump Cargo Only
	ExileClient_gui_wasteDumpDialog_show = "custom\overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	
	// Fix Vehicle Trader Spawns
	ExileServer_system_trading_network_purchaseVehicleRequest = "Fixes\TraderFixes\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	
	// Custom vehicle spawns
	ExileServer_world_spawnVehicles = "custom\overrides\ExileServer_Custom_Vehicle_Spawning.sqf";
	
	// Arma 1.66 Fixes
	ExileClient_gui_postProcessing_initialize = "Fixes\A166Fixes\ExileClient_gui_postProcessing_initialize.sqf";
	ExileClient_gui_postProcessing_reset = "Fixes\A166Fixes\ExileClient_gui_postProcessing_reset.sqf";
	ExileClient_gui_postProcessing_toggleDialogBackgroundBlur = "Fixes\A166Fixes\ExileClient_gui_postProcessing_toggleDialogBackgroundBlur.sqf";
	ExileClient_object_player_death_startBleedingOut = "Fixes\A166Fixes\ExileClient_object_player_death_startBleedingOut.sqf";
	ExileClient_object_player_event_onKilled = "Fixes\A166Fixes\ExileClient_object_player_event_onKilled.sqf";
	ExileServer_system_network_event_onPlayerDisconnected = "Fixes\A166Fixes\ExileServer_system_network_event_onPlayerDisconnected.sqf";
	ExileServer_system_network_setupEventHandlers = "Fixes\A166Fixes\ExileServer_system_network_setupEventHandlers.sqf";
	
};
class CfgExileEnvironment
{
	class Chernarus_winter
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 6;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			/*
				Defines contaminated zones in a specific map. 
				You can define multiple zones per map. The format
				of the zones is:

				[Position ASL(!), Full Radiation Radius, Maximum Radius]

				The radius works as follows:

	            |-------------------------------------------------------|
	                                Maximum Radius
				
				|------------------------|
				  Full Radiation Radius   

				Within the full radiation radius, radiation factor is
				always at a maximum. Outside of this, it lowers down
				to no radiation smoothly.

				Radiation:

	            |------------------------|------------------------------|
	            1        1      1        1     0.75    0.5     0.25    0
			*/
			contaminatedZones[] = {};
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {10.93,10.89,10.42,20.40,30.68,20.10,30.48,20.63,30.40,30.66,40.32,40.80,40.80,50.32,40.66,40.40,30.63,30.48,30.10,20.68,20.40,20.42,10.89,10.93,10.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -5;

			// Temperature change in °C when it is 100% raining
			rain = 3;

			// Temperature change in °C when it is 100% windy
			wind = -3;

			// Temperature change per 100m altitude in °C
			altitude = -5;

			// Difference from the daytime temperature to the water temperature
			water = -15;
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 20;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 3;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 1;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 60;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 15;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{

	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			//class ScanLock: ExileAbstractAction
			//{
			//	title = "Scan Lock";
			//	condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
			//	action = "_this call ExileClient_object_lock_scan";
			//};
            //
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			//Bones Custom Vehicle Repairs

		class Repair: ExileAbstractAction
			{
				title = "Repair/Salvage";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuCar";
			};
			
			//// Repairs a vehicle to 100%. Requires Duckttape
			//class Repair: ExileAbstractAction
			//{
			//	title = "Repair";
			//	condition = "true";
			//	action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			//};

			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			//class ScanLock: ExileAbstractAction
			//{
			//	title = "Scan Lock";
			//	condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
			//	action = "_this call ExileClient_object_lock_scan";
			//};
            //
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Bones Custom Air Repairs
			class Repair: ExileAbstractAction
				{
					title = "Repair/Salvage";
					condition = "true";
					action = "_this call Bones_fnc_salvageAndRepairMenuHelo";
				};
			
			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			//// Repairs a vehicle to 100%. Requires Duckttape
			//class Repair: ExileAbstractAction
			//{
			//	title = "Repair";
			//	condition = "true";
			//	action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
			class PayProtectionFlag: ExileAbstractAction
			{
				title = "Pay Flag Maintenance";
				condition = "true";
				action = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show";
			};
			class PayRansomFlag: ExileAbstractAction
			{
				title = "Pay Flag Ransom";
				condition = "true";
				action = "_this call ExileClient_gui_payFlagRansomDialog_show";
			};
			class RegisterFamily: ExileAbstractAction
			{
				title = "Register Family";
				condition = "true";
				action = "_this call ExileClient_gui_registerClanDialog_show";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Repairs a vehicle to 100%. Requires Duckttape
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Push Boat (Stand Back)";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Bury Body";
				condition = "!(alive ExileClientInteractionObject)"; // && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"a_fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			"ind_tanksmall.p3d",
			"fuel_tank_big.p3d",
			"ind_tanksmall2.p3d",
			"fuel_tank_stairs.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 10000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 3.0;

	// Health regen if over BOTH
	thirstRegen = 70;
	hungerRegen = 70;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 1;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					15,			30 					}, // Level 1
		{2000,					30,			40					}, // Level 2 
		{3000,					45,			50 					}, // Level 3
		{4000,					60,			60					}, // Level 4
		{5000,					75,			70					}, // Level 5
		{6000,					90,			80					}, // Level 6
		{7000,					105,		90					}, // Level 7
		{8000,					120,		100					}, // Level 8
		{9000,					135,		130					}, // Level 9
		{10000,					150,		150					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 325; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1500;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 10;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 125;
};
class CfgTraderCategories 
{
	class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"U_C_Journalist"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Press_F"
		};
	};

	class Weapons 
	{
		name = "Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"CUP_srifle_LeeEnfield",
			"hlc_VOG25_AK",
			"hlc_optic_kobra",
			"optic_Aco",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Weapon_Makarov",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_10x_303_M",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Weapon_Taurus",
			"CUP_8Rnd_B_Beneli_74Pellets",
			"CUP_sgun_M1014"
		};
	};

class Equipment 
	{
		name = "Equipment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"G_Balaclava_TI_G_blk_F",
			"TRYK_Shemagh_G",
			"H_RacingHelmet_3_F",
			"TRYK_SUITS_BLK_F",
			"V_TacVest_blk_POLICE",
			"H_Watchcap_blk",
			"TRYK_B_tube_cyt",
			"B_HuntingBackpack",
			"TRYK_shirts_DENIM_ylb",
			"TRYK_hoodie_FR",
			"TRYK_V_tacSVD_BK",
			"Exile_Headgear_GasMask",
			"V_RebreatherB",
			"TRYK_U_denim_hood_blk",
			"TRYK_U_denim_hood_mc",
			"TRYK_U_denim_hood_3c",
			"TRYK_U_denim_hood_nc",
			"H_Shemag_olive"
		};
	};

	class Supplies 
	{
		name = "Supplies";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_Sand",
			"Exile_Item_CanOpener",
			"Exile_Item_Bandage",
			"Exile_Item_SeedAstics",
			"Exile_Item_Hammer",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_CodeLock",
			"Exile_Melee_Axe",
			"Land_CampingTable_F_Kit",
			"Land_Sun_chair_F_Kit",
			"Land_Sunshade_04_F_Kit",
			"Exile_Item_XM8",
			"ItemMap",
			"Binocular",
			"Exile_Item_ZipTie",
			"ItemCompass",
			"Exile_Item_MetalScrews",
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CarWheel",
			"Exile_Item_Knife",
			"Exile_Item_LightBulb",
			"Exile_Item_ExtensionCord",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_FloodLightKit",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk"
		};
	};

	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	};

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",
			"optic_ACO_grn",
			"optic_ACO_grn_smg",
			"optic_Aco_smg",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_Arco",
			"optic_DMS",
			"optic_Hamr",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"optic_LRPS",
			"optic_MRCO",
			"optic_MRD",
			"optic_Nightstalker",
			"optic_NVS",
			"optic_SOS",
			//"optic_tws",
			//"optic_tws_mg",
			"optic_Yorris",
			//Apex
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F"
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
			
			/*
			--Not for Sale--
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			--Unused--
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		*/
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_Moobar",
			"Exile_Item_InstantCoffee"
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_ChocolateMilk",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty"
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",

			/*
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",	
			"Exile_Item_ToiletPaper",			
			"Exile_Item_ZipTie",
			*/

			"Binocular",
			"Rangefinder",
			/*
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			*/
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_XM8",
			
			//Apex
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F"
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_InstaDoc",
			"Exile_Item_Bandage",
			"Exile_Item_Vishpirin",
			"Exile_Item_Heatpack"

			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving"			
		};
	};

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] = 
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			//"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"
		};
	};

	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	};

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"hgun_ACPC2_F",
			"hgun_P07_F",
			"hgun_Pistol_heavy_01_F",
			"hgun_Pistol_heavy_02_F",
			"hgun_Pistol_Signal_F",
			"hgun_Rook40_F",
			"Exile_Weapon_Colt1911",
			"Exile_Weapon_Makarov",
			"Exile_Weapon_Taurus",
			"Exile_Weapon_TaurusGold",
			//Apex
			"hgun_Pistol_01_F",
			"hgun_P07_khk_F"
		};
	};

	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"

			/*
			"MMG_01_hex_F",
			"MMG_01_tan_F",
			"MMG_02_black_F",
			"MMG_02_camo_F",
			"MMG_02_sand_F"
			*/
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",			
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F"
		};
	};
	
	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};

	class Diving 
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	};
};

class CfgTraders
{
	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "RickGrimes";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Weapons",
			"Equipment",
			"Supplies"
			
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};
class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] = 
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};