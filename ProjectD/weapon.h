#pragma once
#include "item.h"

// WEAPONS
class Weapon : public Item {
public:
protected:
	int damage_;

	WEAPON weapon_;
	EQUIP equip_;
public:
	Weapon();
	Weapon(WEAPON weapon_, EQUIP equip, std::string name, int damage = 1, int value = 1, RARITY rarity = RARITY::COMMON);
	~Weapon();

	int getDamage();

	virtual void print() {
		using namespace std;
		Item::print();
		cout << setfill(' ') << setw(13) << " Damage: ";
		cout << setw(4) << damage_;
	}
};