#pragma once

#include "form.h"
#include "effect.h"

class Spell : public Form {
private:
	int rank = 1;
	int experience_ = 0;
	
	SCHOOL school_;
	TARGET target_;

	int range_;

	int cost_ap_;
	int cost_mp_;
	
	int cooldown_;
	
	std::vector<Effect*> effects_;

public:
	Spell();
	Spell(std::string name, TARGET target, int cost_ap, int cost_mp, int cooldown = 0);
	~Spell();

	// Getters
	int getRange() { return range_; }
	int getCostAp() { return cost_ap_; }
	int getCostMp() { return cost_mp_; }
	int getCooldown() { return cooldown_; }
	std::vector<Effect*> getEffects() { return effects_; }

	// Setters
	void addEffect(Effect* effect) { 
		effect->setTarget(target_); 
		effects_.push_back(effect); 
	}

	// Output
	virtual void print() {
		using namespace std;
		Form::print();
	}
};