#include "Generator.h"

void Generator::generateWeapons(Container& container, WEAPON weapon, EQUIP equip, std::vector<std::string> prefixes, std::string name, int damage, int value, int idamage, int ivalue)
{
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	for (std::string prefix : prefixes)
	{
		std::string full_name = prefix + name;
		container.addItem(new Weapon(weapon, equip, full_name, damage, value));
		LOG.d("Added Weapon: " + full_name + " Value: " + std::to_string(value) + " Damage: " + std::to_string(damage));
		damage = damage + idamage;
		value = value + ivalue;
	}
}

void Generator::generateArmor(Container & container, ARMOR armor, EQUIP equip, std::vector<std::string> prefixes, std::string name, int protection, int value, int iprotection, int ivalue)
{
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	for (std::string prefix : prefixes)
	{
		std::string full_name = prefix + name;
		container.addItem(new Armor(armor, equip, full_name, protection, value));
		LOG.d("Added Armor: " + full_name + " Value: " + std::to_string(value) + " Protection: " + std::to_string(protection));
		protection = protection + iprotection;
		value = value + ivalue;
	}
}

void Generator::generateTrinkets(Container& container, TRINKET trinket, std::vector<std::string> prefixes, std::string name, int value, int ivalue, RARITY rarity) {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	for (std::string prefix : prefixes)
	{
		std::string full_name = prefix + name;
		container.addItem(new Trinket(trinket, full_name, value, rarity));
		LOG.d("Added Trinket: " + full_name + " Value: " + std::to_string(value));
		value = value + ivalue;
	}
}

void Generator::generatePotions(Container & container, POTION potion, std::vector<std::string> prefixes, std::string name, int magnitude, int value, int imagnitude, int ivalue) {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	for (std::string prefix : prefixes)
	{
		std::string full_name = prefix + name;
		container.addItem(new Potion(potion, full_name, magnitude, value));
		LOG.d("Added Potion: " + full_name + " Value: " + std::to_string(value) + " Magnitude: " + std::to_string(magnitude));
		magnitude = magnitude + imagnitude;
		value = value + ivalue;
	}
}

void Generator::BasicItems(Container & container) {

	container.addItem(new Item("Coin"));
}

void Generator::BasicAbilities(Container & container) {

}
