#pragma once
#include "item.h"

class Node {
protected:
	unsigned short index_;
	NODE node_;
	Item* item_;

	// Flags
	bool disallowed_; // disallow nodes for specific actors (e.g. race specifics)
	bool occupied_; // occupied with an Item
	bool used_; // No item, but still used
public:
	Node();
	Node(unsigned short index, NODE node, bool used = false, bool is_occupied = false);
	~Node() {};

	//Getter
	Item* getItem();
	bool occupied();
	bool used();
	// Setter
	void setItem(Item* item);
	void setOccupied(bool occupied);
	void setUsed(bool used);
};
