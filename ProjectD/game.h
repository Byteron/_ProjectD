#pragma once

#include <map>
#include <vector>
#include <string>
#include <iostream>

#include "define.h"

#include "log.h"
#include "container.h"
#include "potion.h"
#include "weapon.h"
#include "armor.h"
#include "trinket.h"
#include "ability.h"
#include "spell.h"
#include "character.h"
#include "generator.h"
#include "effect.h"

class Game {
private:
	Log LOG;
	Container CONTAINER;
	Generator GENERATOR;
	bool running_ = true;
public:
	// Public Variables
private:
	void initialize();
	void frame();
	void quit();

public:
	void run() {
		initialize();
		while (running_)
			frame();
		quit();
	}
};
