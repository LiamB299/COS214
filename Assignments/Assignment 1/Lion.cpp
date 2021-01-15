/*
 * Lion.cpp
 *
 *  Created on: 15 Aug 2020
 *      Author: liam
 */

#include "Lion.h"
#include <string>
#include <iostream>

Lion::Lion(double hp, double dam, string hunt, string spc) : Predator(hp, dam, hunt, spc) {
	setType("Lion");
}

Lion::Lion(string hunt, string spc) : Predator(hunt, spc) {
	setType("Lion");
}

bool Lion::catchPrey(Prey* p) {
	cout << "The lion pounces into action to catch the "+p->getType()+"." <<endl;
	return p->run();
}

// only outputs if dealing damage
bool Lion::getAttacked(Prey* p) {
	int f = p->fight();
	if (f == 0) {
		return false;
	}
	else {
		cout << "The "+p->getType()+" stands on the lions tail inflicting "+ to_string(p->getDamage())+" damage!" <<endl;
		setHP(getHP() - p->getDamage());
	}
	if (getHP() <=0)
		return true;
	else
		return false;
}

bool Lion::attack(Prey* p) {
	cout << "The lion uses "+getHunt()+" to inflict "+ to_string(getDam()) +" damage on the "+p->getType()+"." << endl;
	if (p->takeDamage(this->getDam())<=0) {
		reset_dam();
		return true;
	}
	return false;
}

void Lion::die() {
	reset_dam();
	cout << "Long lived the King." <<endl;
}

void Lion::speciality() {
		cout << "The injured lion uses "+ getSpecD()+"." <<endl;
		setDam(getDam()*1.1);
}
