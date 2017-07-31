#include "potion.h"

Potion::Potion() : Item() {
	potion_ = POTION::FOOD;
	magnitude_ = NULL;
	rarity_ = RARITY::COMMON;
}

Potion::Potion(POTION potion, std::string name, int magnitude, int value, RARITY rarity) : Potion() {
	potion_ = potion;
	name_ = name;
	magnitude_ = magnitude;
	value_ = value;
	rarity_ = rarity;
}

Potion::~Potion() {}