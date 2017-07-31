#pragma once

#include "Item.h"

class Trinket : public Item {
protected:
	TRINKET trinket_;
	EQUIP equip_;

public:
	Trinket();
	Trinket(TRINKET trinket, std::string name, int value = 20, RARITY rarity = RARITY::COMMON, EQUIP equip = EQUIP::NORMAL);
	
	~Trinket();

};
