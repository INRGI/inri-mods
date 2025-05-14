class CfgPatches
{
	class INRIWoodenCrates
	{
		units[]=
		{
			"INRICrate_200", "INRICrate_300", "INRICrate_400",
			"INRICrate_500", "INRICrate_600", "INRICrate_700",
			"INRICrate_800", "INRICrate_900", "INRICrate_1000"
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
	class WoodenCrate;
		class INRICrate_200: WoodenCrate
	{
		scope=2;
		displayName="Yellow Wooden Crate (200 slots)";
		descriptionShort="A compact yellow wooden crate for light storage.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\yellow_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,20};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_300: WoodenCrate
	{
		scope=2;
		displayName="Brown Wooden Crate (300 slots)";
		descriptionShort="A durable crate offering moderate storage space.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\brown_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_400: WoodenCrate
	{
		scope=2;
		displayName="Blue Wooden Crate (400 slots)";
		descriptionShort="Sturdy wooden crate painted blue, holds up to 400 items.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\blue_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_500: WoodenCrate
	{
		scope=2;
		displayName="Red Wooden Crate (500 slots)";
		descriptionShort="Reliable storage crate, perfect for small collections.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\red_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_600: WoodenCrate
	{
		scope=2;
		displayName="White Wooden Crate (600 slots)";
		descriptionShort="A reinforced wooden crate for extended storage.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\white_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,60};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_700: WoodenCrate
	{
		scope=2;
		displayName="Green Wooden Crate (700 slots)";
		descriptionShort="Spacious crate, ideal for storing a variety of supplies.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\green_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,70};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_800: WoodenCrate
	{
		scope=2;
		displayName="Black Wooden Crate (800 slots)";
		descriptionShort="Heavy-duty crate with ample room for gear and loot.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\black_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,80};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_900: WoodenCrate
	{
		scope=2;
		displayName="Purple Wooden Crate (900 slots)";
		descriptionShort="Large purple crate made for advanced storage needs.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\purple_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,90};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class INRICrate_1000: WoodenCrate
	{
		scope=2;
		displayName="Pink Wooden Crate (1000 slots)";
		descriptionShort="Massive crate designed to hold extensive supplies and gear.";
		itemSize[]={4,2};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"INRICrates\data\pink_crate.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,100};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};
