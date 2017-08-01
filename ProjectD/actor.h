#pragma once
#include "form.h"
#include "node.h"
#include "spell.h"

class Actor : public Form {
public:
	// Data Structs
	struct Stat { int max = 100; int current = 100; };
	struct Attribute { int base = 100; float race_bonus = 1; int skill = 0; int current; };
	struct SchoolLevels { int warrior = 0; int hunter = 0; int rogue = 0; int mage = 0; int warlock = 0; int runemaster = 0; int deviner = 0; int druid = 0; int Shaman = 0; };
	struct Resistances { int physical = 100; int nature = 100; int arcane = 100; int heat = 100; int cold = 100; int holy = 100; int shadow = 100; };
	
	struct Effects { std::vector<Effect*> active; std::vector<Effect*> passive; };

protected:
	// Variables
	Stat hp_;
	Stat ap_;
	Stat mp_;

	Attribute stamina_;
	Attribute spirit_;
	Attribute stength_;
	Attribute instinct_;
	Attribute dexterity_;
	Attribute intelligence_;
	Attribute willpower_;
	Attribute spirituality_;

	SchoolLevels school_levels_;

	Resistances resistances_;

	std::vector<Node> nodes_;

	std::vector<Item*> inventory_;
	std::vector<Spell*> spellbook_;

	Effects effects_;
public:
	Actor();
	~Actor();

	// Getters
	Stat getHp() { return hp_; }
	std::vector<Item*> getInventory() { return inventory_; }
	std::vector<Spell*> getSpellbook() { return spellbook_; }

	Node getNode(unsigned short slot);
	float getResistanceModificator(NATURE nature);
	Spell* getSpell(size_t spell_index);
	Effects* getEffects() { return &effects_; }
	
	// Setter
	void setHp(int hp);

	// Add Methods
	void addItem(Item* item);
	void addSpell(Spell* spell);
	void addEquipment(Item* item, unsigned short slot);

	// Output Methods
	void showInventory();
	void showSpellbook();
	void showEpuipment();

	virtual void print() {
		using namespace std;
		Form::print();
		cout << setfill(' ') << setw(13) << "Inventory: ";
		cout << setw(4) << inventory_.size();
		cout << setfill(' ') << setw(13) << "Spellbook: ";
		cout << setw(4) << spellbook_.size();
		cout << setfill(' ') << setw(9) << "Effects: ";
		cout << "active:";
		cout << setw(4) << effects_.active.size();
		cout << "passive:";
		cout << setw(4) << effects_.passive.size();
	}

	// Methods
	void castSpell(size_t spell_index, Actor* target);
};
