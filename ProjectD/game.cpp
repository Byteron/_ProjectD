#include "game.h"

using namespace std;

void Game::frame()
{
	// CONTAINER.print();

	Character* player = new Character("Player");
	Character* enemy = new Character("Enemy");
	Effect* effect1 = new Effect("Heat Damage", ARCHETYPE::INSTANT, EFFECT::HARM, NATURE::HEAT, TICK::NONE, 120, 0, 0, 100, true);
	Effect* effect2 = new Effect("Heat DoT", ARCHETYPE::INSTANT, EFFECT::HARM, NATURE::HEAT, TICK::MOVESTART, 10, 4, 0, 50);
	
	Spell* spell = new Spell("Fireball", TARGET::ACTOR, 5, 12);
	spell->addEffect(effect1);
	spell->addEffect(effect2);

	player->addSpell(spell);
	player->showSpellbook();
	enemy->print();
	player->castSpell(0, enemy);
	enemy->print();
	cin.get();
	running_ = false;
}

void Game::quit() {}