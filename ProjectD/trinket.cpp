#include "trinket.h"

// Constructors
Trinket::Trinket() : Item() {
	trinket_ = TRINKET::RING;
	equip_ = EQUIP::NORMAL;
}

Trinket::Trinket(TRINKET trinket, std::string name, int value, RARITY rarity, EQUIP equip) : Item() {
	trinket_ = trinket;
	equip_ = equip;
	rarity_ = rarity;
	name_ = name;
	value_ = value;
}

// Deconstructor
Trinket::~Trinket() {}
