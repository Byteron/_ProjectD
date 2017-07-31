#pragma once

#include "form.h"
#include "log.h"

class Actor;

class Effect : Form {
private:
	// Effect Data
	int magnitude_;
	int duration_;
	int area_;
	int accuracy_;
	
	// Effect Properties
	ARCHETYPE archetype_;
	TARGET target_;
	EFFECT effect_;
	NATURE nature_;
	TICK tick_;

	// Related Objects
	Actor** caster_;
	Actor** target_actor_;

	// Flags
	bool procentual_;

	bool no_nature_;
	bool no_tick_;
public:
	Effect();
	Effect(std::string name, ARCHETYPE archetype, EFFECT effect, NATURE nature, TICK tick, int magnitude, int duration, int area, int accuracy, bool no_tick = false, bool procentual = false, bool no_nature = false);
	~Effect();

	// Getter
	int getMagnitude() { return magnitude_; }
	int getDuration() { return duration_; }
	int getArea() { return area_; }
	int getAccuracy() { return accuracy_; }

	ARCHETYPE getArchetype() { return archetype_; }
	TARGET getTarget() { return target_; }
	EFFECT getEffect() { return effect_; }
	NATURE getNature() { return nature_; }
	TICK getTick() { return tick_; }

	// Setter
	void setTarget(TARGET target) { target_ = target; }
	void setCaster(Actor* &caster) { caster_ = &caster; }
	void setTargetActor(Actor* &target_actor) { target_actor_ = &target_actor; }

	void tick();
private:
	void tickSelf();
	void tickActor();
};
