#pragma once

#include "define.h"
#include "game.h"

class GameState {
protected:
	bool running_ = true;
public:
	// Public Variables
protected:
	virtual void initialize() {}
	virtual void frame() {}
	void quit() { running_ = false; }
public:
	GameState() {};
	virtual void run() {
		initialize();
		while (running_)
			frame();
	}
};
