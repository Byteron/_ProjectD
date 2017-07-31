#include "container.h"

Container::Container() {}

Container::~Container() {}

void Container::addObject(Form * form) { objects_.push_back(form); }
void Container::addItem(Form * item) { items_.push_back(item); }
void Container::addActor(Form * actor) { actors_.push_back(actor); }
void Container::addSpell(Form * spell) { spells_.push_back(spell); }
void Container::addEffect(Form * effect) { effects_.push_back(effect); }

Form * Container::getObject(size_t id)
{
	for (auto& obj : objects_)
	{
		if (obj->getId() == id)
			return obj;
		else
			std::cout << "Invalid ID" << std::endl;
	}
	for (auto& obj : items_)
	{
		if (obj->getId() == id)
			return obj;
		else
			std::cout << "Invalid ID" << std::endl;
	}
	for (auto& obj : actors_)
	{
		if (obj->getId() == id)
			return obj;
		else
			std::cout << "Invalid ID" << std::endl;
	}
}

Form * Container::getObject(std::string name)
{
	for (auto& obj : objects_)
	{
		if (obj->getName() == name)
			return obj;
		else
			std::cout << "Invalid Name" << std::endl;
	}
	for (auto& obj : items_)
	{
		if (obj->getName() == name)
			return obj;
		else
			std::cout << "Invalid Name" << std::endl;
	}
	for (auto& obj : actors_)
	{
		if (obj->getName() == name)
			return obj;
		else
			std::cout << "Invalid Name" << std::endl;
	}
}

void Container::print()
{
	using namespace std;
	cout << endl;
	cout << "Game Container: ";
	for (auto& obj : actors_)
		obj->print();
	for (auto& obj : items_)
		obj->print();
	for (auto& obj : objects_)
		obj->print();
	cout << endl;
}
