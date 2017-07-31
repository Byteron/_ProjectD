#include "armor.h"

Armor::Armor() : Item() {
	armor_ = ARMOR::HELMET;
	equip_ = EQUIP::NONE;
	protection_ = NULL;
}

Armor::Armor(ARMOR armor, EQUIP equip, std::string name, int protection, int value, RARITY rarity) : Armor() {
	armor_ = armor;
	equip_ = equip;
	rarity_ = rarity;
	name_ = name;
	protection_ = protection;
	value_ = value;
}

Armor::~Armor() {}

int Armor::getProtection() { 
	return protection_; 
}