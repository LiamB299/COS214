/*
 * Wolf.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "Wolf.h"
#include <string>
#include <iostream>

Wolf::Wolf(string hunt, string spc) : Predator(hunt, spc) {setType("Wolf");};

Wolf::Wolf(double hp, double dam, string hunt, string spc) : Predator(hp, dam, hunt, spc) {
	setType("Wolf");
}

bool Wolf::catchPrey(Prey* p) {
	cout << "The wolf sneaks up to the "+p->getType() <<endl;
	return p->run();
}

// only outputs if dealing damage
bool Wolf::getAttacked(Prey* p) {
	int f = p->fight();
	if (f == 0) {
		return false;
	}
	else {
		cout << "The "+p->getType()+" spots the wolf, jumps onto it's back imposing "+ to_string(p->getDamage())+" damage." <<endl;
		setHP(getHP() - p->getDamage());
	}
	if (getHP() <=0)
		return true;
	else
		return false;
}

bool Wolf::attack(Prey* p) {
	cout << "The wolf's "+getHunt()+" caused " +to_string(getDam())+" damage to the "+p->getType()+"." << endl;
	if (p->takeDamage(this->getDam())<=0) {
		reset_dam();
		return true;
	}
	return false;
}

void Wolf::die() {
	reset_dam();
	cout << "Why so afraid of the big bad wolf?" <<endl;
}

void Wolf::speciality() {
		cout << "The wolf cunningly uses "+ getSpecD()+"." <<endl;
		setDam(getDam()*1.1);
}
