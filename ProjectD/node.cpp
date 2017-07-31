#include "node.h"

Node::Node() {
	index_ = NULL;
	node_ = NODE::FINGER;
	item_ = NULL;
	disallowed_ = false;
	occupied_ = false;
	used_ = false;
}

Node::Node(unsigned short index, NODE node, bool used, bool occupied) {
	index_ = index;
	node_ = node;
	occupied_ = occupied;
}

// Getter
Item * Node::getItem() { return item_; }
bool Node::occupied() { return occupied_; }
bool Node::used() { return used_; }

// Setter
void Node::setItem(Item * item) { 
	item_ = item; 
	occupied_ = true;
	used_ = true;
}

void Node::setOccupied(bool occupied) { occupied_ = occupied; }
void Node::setUsed(bool used) { used_ = used; }
