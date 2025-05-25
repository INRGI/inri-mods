class CfgPatches
{
	class INRIBarrels
	{
          units[] = {
              "Barrel_SamuraiPurple",
              "Barrel_BlackRaven",
              "Barrel_SamuraiBlue",
              "Barrel_GravesGrey",
              "Barrel_GirlPink",
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Gear_Cooking",
			"DZ_Data",
			"DZ_Gear_Containers"
		};
	};
};

class CfgMods
{
	class INRIBarrels
	{
		dir = "INRIBarrels"; 								
		picture = "";	
		action = "";	
		hideName = 0;	
		hidePicture = 1;		
		name = "INRIBarrels";	
		author = "INRI";									
		authorID = "";	
		version = "1.5";
		extra = 0; 	
		type = "mod";
	};
};

class CfgVehicles
{
	class Barrel_ColorBase;
	class BarrelHoles_ColorBase; 

	class Barrel_SamuraiPurple: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel Samurai Purple";
		descriptionShort = "A sleek and durable storage barrel with a striking purple samurai design. Offers a massive 400-slot capacity, perfect for organizing and securing your gear in style.";
                color = "Purple";
		hiddenSelectionsTextures[] =
		{
			"INRIBarrels\data\samurai_barrel.paa"				
		};
		itemSize[] = {4,5};
		class Cargo
		{
			itemsCargoSize[] = {10,40};
		};
	};
        class Barrel_BlackRaven: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel Black Raven";
		descriptionShort = "A stealthy, reinforced storage barrel adorned with the emblem of a black raven. Designed for survivalists who prefer both capacity and discretion, offering 300 secure storage slots.";
                color = "Black";
		hiddenSelectionsTextures[] =
		{
			"INRIBarrels\data\black_raven.paa"				
		};
		itemSize[] = {4,5};
		class Cargo
		{
			itemsCargoSize[] = {10,30};
		};
	};
        class Barrel_SamuraiBlue: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel Samurai Blue";
		descriptionShort = "A robust storage barrel featuring a bold blue samurai design. Offers an impressive 500-slot capacity, combining strength, style, and utility for serious survivors.";
                color = "Blue";
		hiddenSelectionsTextures[] =
		{
			"INRIBarrels\data\blue_samurai.paa"				
		};
		itemSize[] = {4,5};
		class Cargo
		{
			itemsCargoSize[] = {10,50};
		};
	};
        class Barrel_GravesGrey: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel Graves Grey";
		descriptionShort = "A rugged grey storage barrel bearing a worn, grave-like aesthetic. With 600 slots, it's perfect for those who prefer a grim, utilitarian look without sacrificing space.";
                color = "Grey";
		hiddenSelectionsTextures[] =
		{
			"INRIBarrels\data\grey_graves.paa"				
		};
		itemSize[] = {4,5};
		class Cargo
		{
			itemsCargoSize[] = {10,60};
		};
	};
        class Barrel_GirlPink: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel Girl Pink";
		descriptionShort = "A bright pink barrel that proves style doesn’t mean weakness. With an enormous 1000-slot capacity, it’s the ultimate mix of flair and function — for survivors who carry everything and look good doing it.";
                color = "Pink";
		hiddenSelectionsTextures[] =
		{
			"INRIBarrels\data\pink_girl.paa"				
		};
		itemSize[] = {4,5};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
		};
	};
};
