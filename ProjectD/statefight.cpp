#include "statefight.h"

void StateFight::initialize()
{
	active_actor_ = actors_->front();
	turnStart();
}

void StateFight::frame()
{
	using namespace std;

	cout << "Fight Begins!" << endl;
	
	for (auto& actor : *actors_) {
		actor->print();
	}
	cout << "Active Character:" << active_actor_->getName() << endl;
	cout << "(1)Attack";
	cout << "(2)Spellbook";
	cout << "(3)Inventory" << endl;
	cout << "(7)End Move";
	cout << "(8)End Turn";
	cout << "(0)Quit" << endl;
	cout << endl;
	cout << "Option:";
	cin >> option_;

	switch (option_)
	{
	case 1:
		cout << "Attack!" << endl;
		break;
	case 2:
		active_actor_->showSpellbook();
		break;
	case 3:
		active_actor_->showInventory();
		break;
	case 7:
		moveEnd();
		// 
		moveStart();
		break;
	case 8:
		turnEnd();
		//
		turnStart();
		break;
	case 0:
		quit();
		break;
	default:
		break;
	}
}

void StateFight::turnStart()
{
	for (auto& actor : *actors_)
	{	
		for (auto& effect : actor->getEffects()->active)
		{
			if (effect->getTick() == TICK::TURNSTART)
				effect->tick();
		}
	}
}

void StateFight::moveStart()
{
	for (auto& effect : active_actor_->getEffects()->active)
	{
		if (effect->getTick() == TICK::MOVESTART)
			effect->tick();
	}
}

void StateFight::moveEnd()
{
	for (auto& effect : active_actor_->getEffects()->active)
	{
		if (effect->getTick() == TICK::MOVESTART)
			effect->tick();
	}
}

void StateFight::turnEnd()
{
	for (auto& actor : *actors_)
	{
		for (auto& effect : actor->getEffects()->active)
		{
			if (effect->getTick() == TICK::TURNSTART)
				effect->tick();
		}
	}
}
