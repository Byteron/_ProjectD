#include "game.h"

void Game::initialize()
{
	// INITIALIZE
	LOG.setLevel(DEBUGLEVEL);
	LOG.d("Initialize game content");

	// CHARACTER
	CONTAINER.addActor(new Character("Aaron"));

	// BASIC
	GENERATOR.BasicItems(CONTAINER);
	GENERATOR.BasicAbilities(CONTAINER);

	// POTIONS
	CONTAINER.addItem(new Potion(POTION::FOOD, "Bread"));
	CONTAINER.addItem(new Potion(POTION::POISON, "Spider Venom", 20, 20));
	CONTAINER.addItem(new Potion(POTION::POTION, "Small Potion", 20, 20));

	// WEAPONS
	GENERATOR.generateWeapons(CONTAINER, WEAPON::DAGGER, EQUIP::NORMAL, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Dagger", 6, 4);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::SWORD, EQUIP::NORMAL, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Sword", 8, 6);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::AXE, EQUIP::NORMAL, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Axe", 8, 6);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::MACE, EQUIP::NORMAL, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Mace", 8, 6);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::GREATSWORD, EQUIP::TWOHANDS, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Greatsword", 16, 7, 4, 2);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::GREATAXE, EQUIP::TWOHANDS, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", "Dragonglass" }, " Greataxe", 16, 7, 4, 2);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::WARHAMMER, EQUIP::TWOHANDS, { "Iron" , "Steel" , "Orc" , "Dwarvish" }, " Warhammer", 16, 7, 4, 2);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::STAFF, EQUIP::TWOHANDS, { "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Staff", 16, 7, 4, 2);

	GENERATOR.generateWeapons(CONTAINER, WEAPON::BOW, EQUIP::BOTHHANDS, { "Long" , "Hunting" , "Orc" , "Dwarcish" , "Elvish" , "Dragonglass" }, " Bow", 6, 6, 3, 2);
	GENERATOR.generateWeapons(CONTAINER, WEAPON::ARROW, EQUIP::NONE, { "Iron","Steel", "Orc" , "Dwarvish" , "Elvish" , "Dragonglass" , "Ebony" }, " Arrow", 6, 1);

	// ARMOR
	GENERATOR.generateArmor(CONTAINER, ARMOR::GLOVES, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Gloves", 4, 3);
	GENERATOR.generateArmor(CONTAINER, ARMOR::HELMET, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Helmet", 5, 4);
	GENERATOR.generateArmor(CONTAINER, ARMOR::BREASTPLATE, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Armor", 12, 8);
	GENERATOR.generateArmor(CONTAINER, ARMOR::BOOTS, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish", }, " Boots", 5, 4);
	GENERATOR.generateArmor(CONTAINER, ARMOR::PANTS, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Pants", 10, 6);
	GENERATOR.generateArmor(CONTAINER, ARMOR::SHIELD, EQUIP::NORMAL, { "Wooden" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Shield", 16, 6, 4, 2);
	GENERATOR.generateArmor(CONTAINER, ARMOR::PAULDRON, EQUIP::NORMAL, { "Fur", "Pelt" , "Leather" ,  "Iron" , "Steel" , "Orc" , "Dwarvish" , "Elvish" }, " Pauldrons", 10, 6);

	// TRINKETS
	GENERATOR.generateTrinkets(CONTAINER, TRINKET::RING, { "Iron" , "Silver", "Gold", "Ruby", "Sapphire", "Diamant" }, " Ring", 20, 40);
	GENERATOR.generateTrinkets(CONTAINER, TRINKET::EARRING, { "Iron" , "Silver", "Gold", "Ruby", "Sapphire", "Diamant" }, " Ear Ring", 12, 26);
	GENERATOR.generateTrinkets(CONTAINER, TRINKET::DIADEM, { "Iron" , "Silver", "Gold", "Ruby", "Sapphire", "Diamant" }, " Diadem", 32, 60);
	GENERATOR.generateTrinkets(CONTAINER, TRINKET::NECKLESS, { "Iron" , "Silver", "Gold", "Ruby", "Sapphire", "Diamant" }, " Neckless", 28, 50);

	// POTIONS
	GENERATOR.generatePotions(CONTAINER, POTION::POTION, { "Small" , "Normal", "Good", "Great" }, " Potion", 60, 20, 40, 20);
}