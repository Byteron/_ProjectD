#include "actor.h"

Actor::Actor() : Form() {
	nodes_.push_back(Node(DHAND1, NODE::HAND));
	nodes_.push_back(Node(DHAND1, NODE::HAND));
	nodes_.push_back(Node(DHEAD, NODE::HEAD));
	nodes_.push_back(Node(DEAR1, NODE::EAR));
	nodes_.push_back(Node(DEAR2, NODE::EAR));
	nodes_.push_back(Node(DNECK, NODE::NECK));
	nodes_.push_back(Node(DFINGER1, NODE::FINGER));
	nodes_.push_back(Node(DFINGER2, NODE::FINGER));
	nodes_.push_back(Node(DSHOULDER, NODE::SHOULDER));
	nodes_.push_back(Node(DBACK, NODE::BACK));
	nodes_.push_back(Node(DCHEST, NODE::CHEST));
	nodes_.push_back(Node(DHANDS, NODE::HANDS));
	nodes_.push_back(Node(DFEET, NODE::FEET));
	nodes_.push_back(Node(DBAGPLACE1, NODE::BAGPLACE));
	nodes_.push_back(Node(DBAGPLACE2, NODE::BAGPLACE));
	nodes_.push_back(Node(DBAGPLACE3, NODE::BAGPLACE));
	nodes_.push_back(Node(DBAGPLACE4, NODE::BAGPLACE));
}

Actor::~Actor() {}

Node Actor::getNode(unsigned short slot) {
	return nodes_.at(slot);
}

float Actor::getResistanceModificator(NATURE nature) {
	float mod = 1.0f;
	return mod;
}

Spell* Actor::getSpell(size_t spell_index) {
	return spellbook_.at(spell_index);
}

void Actor::setHp(int hp) {
	hp_.current = hp;
	if (hp_.current > hp_.max)
		hp_.current = hp_.max;
}

// Methods
void Actor::addItem(Item* item) { inventory_.push_back(item); }
void Actor::addSpell(Spell* spell) { spellbook_.push_back(spell); }

void Actor::addEquipment(Item* item, unsigned short slot) {
	std::cout << "call AddEquipment()";
	if (!nodes_.at(slot).occupied() || !nodes_.at(slot).used()) {
			if (item->getEquip() == EQUIP::NORMAL)
				nodes_.at(slot).setItem(item);
	}
			
}

void Actor::showInventory()
{
	std::cout << "\nCharacter Inventory:";
	for (auto& item : inventory_)
	{
		item->print();
	}
	std::cout << "" << std::endl;
}

void Actor::showSpellbook()
{
	int index = 0;
	std::cout << "\nCharacter Spellbook:";
	for (auto& spell : spellbook_)
	{
		spell->print();
		std::cout << "Index: " << index;
		index++;
	}
	std::cout << "" << std::endl;
}

void Actor::showEpuipment()
{
	std::cout << "\nCharacter Eqpuipment:" << std::endl;
	for (auto& node : nodes_)
	{
		if (node.getItem()) {
			node.getItem()->print();
			std::cout << "" << std::endl;
		}
		else
			std::cout << "empty slot" << std::endl;
	}
}

void Actor::castSpell(size_t spell_index, Actor *target = NULL) {
	Log LOG;
	LOG.setLevel(DEBUGLEVEL);
	Spell* spell = getSpell(spell_index);
	Actor* caster = this;
	
	ap_.current -= spell->getCostAp();
	LOG.d("Spell Action Point Cost: " + std::to_string(spell->getCostAp()));
	
	mp_.current -= spell->getCostMp();
	LOG.d("Spell Mana Point Cost: " + std::to_string(spell->getCostMp()));
	
	for (auto& effect : spell->getEffects())
	{
		if (effect->getDuration() == 0) {
			if (effect->getTarget() == TARGET::SELF) {
				LOG.d("Instand Effect to Caster");
				effect->setCaster(caster);
				effect->tick();
			}
			if (effect->getTarget() == TARGET::ACTOR) {
				LOG.d("Instand Effect to Target Actor");
				effect->setCaster(caster);
				effect->setTargetActor(target);
				effect->tick();
			}
		}
		else if (effect->getDuration() > 1){
			if (effect->getTarget() == TARGET::SELF) {
				LOG.d("EoT Effect to Self");
				effect->setCaster(caster);
				effects_.active.push_back(effect);
			}
			if (effect->getTarget() == TARGET::ACTOR) {
				LOG.d("EoT Effect to Target Actor");
				effect->setCaster(caster);
				effect->setTargetActor(target);
				target->effects_.active.push_back(effect);
			}
		}
		
	}
}
