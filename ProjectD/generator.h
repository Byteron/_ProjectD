#pragma once
#include <string>
#include <vector>

#include "define.h"
#include "container.h"
#include "weapon.h"
#include "potion.h"
#include "trinket.h"
#include "armor.h"
#include "ability.h"
#include "log.h"

class Generator {
private:
public:
	void generateWeapons(Container& container, WEAPON weapon, EQUIP equip, std::vector<std::string> prefixes, std::string name, int damage, int value, int idamage = 2, int ivalue = 1);
	void generateArmor(Container& container, ARMOR armor, EQUIP equip, std::vector<std::string> prefixes, std::string name, int protection, int value, int iprotection = 2, int ivalue = 1);
	void generateTrinkets(Container& container, TRINKET trinket, std::vector<std::string> prefixes, std::string name, int value, int ivalue = 80, RARITY rarity = RARITY::COMMON);
	void generatePotions(Container& container, POTION potion, std::vector<std::string> prefixes, std::string name, int magnitude = 0, int value = 1, int imagnitude = 0, int ivalue = 1);
	void BasicItems(Container& container);
	void BasicAbilities(Container& container);
};
