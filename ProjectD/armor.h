#pragma once
#include "item.h"

// ARMOUR
class Armor : public Item {
protected:
	int protection_;

	ARMOR armor_;
public:
	Armor();
	Armor(ARMOR armor, EQUIP equip, std::string name, int protection = 0, int value = 1, RARITY rarity = RARITY::COMMON);
	~Armor();

	int getProtection();
	virtual void print() {
		using namespace std;
		Item::print();
		cout << setfill(' ') << setw(13) << " Protection: ";
		cout << setw(4) << protection_;
	}
};
