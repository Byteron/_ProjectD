#include "effect.h"
#include "actor.h"

Effect::Effect() {}
Effect::Effect(std::string name, ARCHETYPE archetype, EFFECT effect, NATURE nature, TICK tick, int magnitude, int duration, int area, int accuracy, bool no_tick, bool procentual, bool no_nature) {
	name_ = name;
	
	archetype_ = archetype;
	effect_ = effect;
	nature_ = nature;
	tick_ = tick;

	magnitude_ = magnitude;
	duration_ = duration;
	area_ = area;
	accuracy_ = accuracy;
	
	procentual_ = procentual;
	no_nature_ = no_nature;
	no_tick_ = no_tick;
}
Effect::~Effect() {}

void Effect::tick() {
	switch (target_) 
	{
	case TARGET::SELF:
		tickSelf();
		break;
	case TARGET::ACTOR:
		tickActor();
		break;
	//case TARGET::CONTACT:
	//	break;
	//case TARGET::LOCATION:
	//	break;
	default:
		break;
	}
	duration_--;
}

void Effect::tickSelf() {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	switch (effect_) {
	case EFFECT::HARM: 
		(*caster_)->setHp((*caster_)->getHp().current - magnitude_); 
		LOG.d( std::to_string(magnitude_) + " Damage to Caster");
		break;
	case EFFECT::HEAL: 
		(*caster_)->setHp((*caster_)->getHp().current + magnitude_); 
		LOG.d( std::to_string(magnitude_) + " Heal to Caster");
		break;
	case EFFECT::ALTER:
		break;
	default:
		break;
	}
}

void Effect::tickActor() {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);

	switch (effect_) {
	case EFFECT::ABSORB:
		(*target_actor_)->setHp((*target_actor_)->getHp().current - magnitude_);
		(*caster_)->setHp((*caster_)->getHp().current + (magnitude_ / 2));
		LOG.d( std::to_string(magnitude_) + " Damage to Target Actor and Drain Heal to Caster");
		break;
	case EFFECT::HARM: 
		(*target_actor_)->setHp((*target_actor_)->getHp().current - magnitude_); 
		LOG.d( std::to_string(magnitude_) + " Damage to Target Actor");
		break;
	case EFFECT::HEAL: 
		(*target_actor_)->setHp((*target_actor_)->getHp().current + magnitude_);
		LOG.d(std::to_string(magnitude_) + " Heal to Target Actor");
		break;
	case EFFECT::ALTER:
		break;
	default:
		break;
	}
}
