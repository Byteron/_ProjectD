#pragma once

#include <iostream>

#include "form.h"

typedef std::vector<Form*> Objects;

class Container {
private:
	Objects objects_;
	Objects items_;
	Objects actors_;
	Objects spells_;
	Objects effects_;
public:
	// CONSTRUCTOR
	Container();
	~Container();

	// Methods
	void addObject(Form* obj);
	void addItem(Form* item);
	void addActor(Form* actor);
	void addSpell(Form* spell);
	void addEffect(Form* effect);

	Form* getObject(size_t id);
	Form* getObject(std::string name);

	void print();
};
