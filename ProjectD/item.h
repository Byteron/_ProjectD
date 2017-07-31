#pragma once
#include"form.h"

class Item : public Form {
public:
	// Variables
protected:
	int value_;
	EQUIP equip_;
	NODE node_;
	RARITY rarity_;

	// Flags
	bool stackable_; // TODO: Implement stackable Items
public:
	// *struktors
	Item();
	Item(std::string name, int value = 1, RARITY rarity = RARITY::COMMON);
	~Item();

	// Getter
	int getValue();
	EQUIP getEquip();
	NODE getNode();
	// Methods
	virtual void print() {
		using namespace std;
		Form::print();
		cout << setbase(10) << setfill(' ') << setw(12) << getRarityString(rarity_);
		cout << setfill(' ') << setw(8) << " Value: ";
		cout << left << setfill(' ') << setw(5) << value_;
	}
};