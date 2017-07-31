#pragma once

#include "form.h"

class Ability : public Form {
protected:
	EFFECT effect_;
	TARGET target_;
	SCHOOL school_;
	NATURE nature_;

	int magnitude_;
	int duration_;
	int range_;
	int area_;

	int ap_cost_;
	int mp_cost_;
	int mp_cost_pr_;

	bool percentage_;

public:
	Ability();
	Ability(EFFECT effect, TARGET target, SCHOOL school, NATURE nature, std::string name, int magnitude, int ap_cost, int duration = 0, int range = 0, int area = 0, int mp_cost = 0, int mp_cost_pr = 0, bool percentage = false);
	~Ability();

	virtual void print() { 
		using namespace std;
		Form::print();
		switch (effect_) {
		case EFFECT::ABSORB: cout << setfill(' ') << setw(12) << " Absorb: "; break;
		case EFFECT::HARM: cout << setfill(' ') << setw(12) << " Damage: "; break;
		case EFFECT::HEAL: cout << setfill(' ') << setw(12) << " Heal: "; break;
		case EFFECT::ALTER: 
			if (percentage_) { 
				cout << setfill(' ') << setw(12) << " Bonus(%): "; break; 
			}
			else {
				cout << setfill(' ') << setw(12) << " Bonus: "; break;
			}

		default: break; }
		cout << setw(4) << magnitude_;
		cout << setfill(' ') << setw(8) << " Range: ";
		cout << setw(4) << range_;
		cout << setfill(' ') << setw(7) << " Area: ";
		cout << setw(4) << area_;
		cout << setfill(' ') << setw(13) << " Duration: ";
		cout << setw(4) << duration_;
	}
};