#include "item.h"

// Constructor
Item::Item() : Form() {
	equip_ = EQUIP::NONE;
	node_ = NODE::NONE;
	rarity_ = RARITY::POOR;
	value_ = NULL;
}

Item::Item(std::string name, int value, RARITY rarity) : Item() {
	rarity_ = rarity;
	name_ = name;
	value_ = value;
}

Item::~Item() {}

// Getter
int Item::getValue() { return value_; }
EQUIP Item::getEquip() { return equip_; }
NODE Item::getNode() { return node_; }
