class CfgPatches
{
	class INRISeaChests
	{
		units[]=
		{
			"INRISeaChest_200", "INRISeaChest_300", "INRISeaChest_400",
			"INRISeaChest_500", "INRISeaChest_600", "INRISeaChest_700",
			"INRISeaChest_800", "INRISeaChest_900", "INRISeaChest_1000"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class SeaChest;
	class INRISeaChest_200: SeaChest
	{
		scope=2;
		displayName="Sea Chest Brown";
		descriptionShort="A sturdy brown sea chest with 200 storage slots.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_brown.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,20};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_300: SeaChest
	{
		scope=2;
		displayName="Sea Chest Black";
		descriptionShort="A dark and durable sea chest with 300 storage slots.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_black.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_400: SeaChest
	{
		scope=2;
		displayName="Sea Chest Blue";
		descriptionShort="A sleek blue sea chest holding up to 400 slots.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_blue.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_500: SeaChest
	{
		scope=2;
		displayName="Sea Chest Green";
		descriptionShort="A weathered green sea chest with space for 500 items.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_green.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_600: SeaChest
	{
		scope=2;
		displayName="Sea Chest White";
		descriptionShort="A clean white sea chest offering 600 storage slots.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_white.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_700: SeaChest
	{
		scope=2;
		displayName="Sea Chest Pink";
		descriptionShort="A charming pink sea chest that holds 700 items.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_pink.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,70};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_800: SeaChest
	{
		scope=2;
		displayName="Sea Chest Purple";
		descriptionShort="A royal purple sea chest with 800 storage slots.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_purple.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,80};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_900: SeaChest
	{
		scope=2;
		displayName="Sea Chest Red";
		descriptionShort="A bold red sea chest capable of storing 900 items.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_red.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,90};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRISeaChest_1000: SeaChest
	{
		scope=2;
		displayName="Sea Chest Yellow";
		descriptionShort="A bright yellow sea chest with a massive 1000-slot capacity.";
		itemSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRISeaChests\data\seachest_yellow.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,100};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};
