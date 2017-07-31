#pragma once
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "define.h"

class Form {
	// Variables
protected:
	size_t id_;
	std::string name_;
public:
	// Construktors
	Form();
	~Form();

	// Getters
	size_t getId();
	std::string getName();

	// Methods
	virtual void print() {
		using namespace std;
		cout << endl;
		cout << right << setbase(16) << setfill(' ') << setw(8) << id_;
		cout << " ";
		cout << left << setbase(10) << setfill(' ') << setw(30) << name_;
	}
};