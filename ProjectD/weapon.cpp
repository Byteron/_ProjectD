#include "weapon.h"

#include <iostream>

Weapon::Weapon() : Item() {
	damage_ = NULL;
	weapon_ = WEAPON::DAGGER;
	equip_ = EQUIP::NORMAL;
}

Weapon::Weapon(WEAPON weapon, EQUIP equip, std::string name, int damage, int value, RARITY rarity) : Item() {
	weapon_ = weapon;
	equip_ = equip;
	rarity_ = rarity;
	name_ = name;
	damage_ = damage;
	value_ = value;
}
Weapon::~Weapon() {}

int Weapon::getDamage() {
	return damage_;
}