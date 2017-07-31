#pragma once

#include "item.h"

class Potion : public Item {
protected:
	int magnitude_;
	POTION potion_;

public:
	Potion();
	Potion(POTION potion, std::string name, int magnitude = 0, int value = 1, RARITY rarity = RARITY::COMMON);
	~Potion();

	virtual void print() {
		using namespace std;
		Item::print();
		cout << setfill(' ') << setw(13) << " Magnitude: ";
		cout << setw(4) << magnitude_;
	}
};