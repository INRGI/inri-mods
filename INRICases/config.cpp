class CfgPatches
{
	class INRICases
	{
		units[] = {"Meme1_100", 
		"Meme2_200", "Meme3_300", "Meme4_500", "Meme5_1000"
	};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Containers"};
	};
};
class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;
	class Clothing_Base;
	class Clothing;
	class WorldContainer_Base;
	class SmallProtectorCase;
	class Meme1_100: SmallProtectorCase
	{
		scope = 2;
		displayName = "Micro Madness (100 slots)";
		descriptionShort = "A 100-slot case covered in memes — just cringe enough to make you smile.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,10};
		varWetMax = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"INRICases\data\Meme1_100.paa"};
	};
	class Meme2_200: SmallProtectorCase
	{
		scope = 2;
		displayName = "Mid Cringe (200 slots)";
		descriptionShort = "A 200-slot case covered in memes — just cringe enough to make you smile.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,20};
		varWetMax = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"INRICases\data\Meme2_200.paa"};
	};
	class Meme3_300: SmallProtectorCase
	{
		scope = 2;
		displayName = "Hard Rofl (300 slots)";
		descriptionShort = "A 300-slot case covered in memes — just cringe enough to make you smile.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,30};
		varWetMax = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"INRICases\data\Meme3_300.paa"};
	};
	class Meme4_500: SmallProtectorCase
	{
		scope = 2;
		displayName = "Cringe Overload (500 slots)";
		descriptionShort = "A 500-slot case covered in memes — just cringe enough to make you smile.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,50};
		varWetMax = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"INRICases\data\Meme4_500.paa"};
	};
	class Meme5_1000: SmallProtectorCase
	{
		scope = 2;
		displayName = "Hyper Reaction (1000 slots)";
		descriptionShort = "A 1000-slot case covered in memes — just cringe enough to make you smile.";
		itemSize[] = {3,3};
		itemsCargoSize[] = {10,100};
		varWetMax = 0;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"INRICases\data\Meme5_1000.paa"};
	};
};
