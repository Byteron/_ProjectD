#pragma once

#include "gamestate.h"

class StateFight : public GameState {
public:
	int option_;
private:
	std::vector<Actor*> *actors_;
	Actor *active_actor_;
public:
	StateFight() {}
	StateFight(std::vector<Actor*> &actors) { actors_ = &actors; }
	
	void initialize();
	void frame();

	void turnStart();
	void moveStart();
	void moveEnd();
	void turnEnd();

	void run() {
		initialize();
		while (running_)
			frame();
	}
};
