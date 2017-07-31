#include "spell.h"

Spell::Spell() {}

Spell::Spell(std::string name, TARGET target, int cost_ap, int cost_mp, int cooldown) {
	name_ = name;
	cost_ap_ = cost_ap;
	cost_mp_ = cost_mp;
	cooldown_ = cooldown;
	target_ = target;
}

Spell::~Spell() {}
