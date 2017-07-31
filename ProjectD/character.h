#pragma once
#include "actor.h"

class Character : public Actor {
protected:
public:
	Character();
	Character(std::string name);
	~Character();
};