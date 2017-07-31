#include "character.h"

// Constructor
Character::Character() : Actor() {}
Character::Character(std::string name) : Character() { name_ = name; }
Character::~Character() {}
