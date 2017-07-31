#include "ability.h"

Ability::Ability() : Form() {
	name_ = "";
	magnitude_ = NULL;
	duration_ = NULL;
	range_ = NULL;
	area_ = NULL;
	ap_cost_ = NULL;
	mp_cost_ = NULL;
	mp_cost_pr_ = NULL;
	percentage_ = false;

	target_ = TARGET::SELF;
	school_ = SCHOOL::WARRIOR;
	nature_ = NATURE::PHYSICAL;
}

Ability::Ability(EFFECT effect, TARGET target, SCHOOL school, NATURE nature, std::string name, int magnitude, int ap_cost, int duration, int range, int area, int mp_cost, int mp_cost_pr, bool percentage) : Ability() {
	effect_ = effect;
	target_ = target;
	school_ = school;
	nature_ = nature;
	name_ = name;
	magnitude_ = magnitude;
	duration_ = duration;
	range_ = range;
	area_ = area;
	ap_cost_ = ap_cost;
	mp_cost_ = mp_cost;
	mp_cost_pr_ = mp_cost_pr;

	percentage_ = percentage;
}

Ability::~Ability() {}
