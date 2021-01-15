/*
 * WildDog.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "WildDog.h"
#include <string>
#include <iostream>

Wild_Dog::Wild_Dog(string hunt, string spc) : Predator(hunt, spc) {setType("Wild Dog");};

Wild_Dog::Wild_Dog(double hp, double dam, string hunt, string spc) : Predator(hp, dam, hunt, spc) {
	setType("Wild Dog");
}

bool Wild_Dog::catchPrey(Prey* p) {
	cout << "The wild dog howls as it measures up the "+p->getType() <<endl;
	return p->run();
}

// only outputs if dealing damage
bool Wild_Dog::getAttacked(Prey* p) {
	int f = p->fight();
	if (f == 0) {
		return false;
	}
	else {
		cout << "The "+p->getType()+" rams into the wild dog removing "+ to_string(p->getDamage())+" health points." <<endl;
		setHP(getHP() - p->getDamage());
	}
	if (getHP() <=0)
		return true;
	else
		return false;
}

bool Wild_Dog::attack(Prey* p) {
	cout << "The wild dog's "+getHunt()+" pays off leaving it's " +p->getType()+" with "+to_string(getDam())+" health points less." << endl;
	if (p->takeDamage(this->getDam())<=0) {
		reset_dam();
		return true;
	}
	return false;
}

void Wild_Dog::die() {
	cout << "No more hunting for this old dog." <<endl;
}

void Wild_Dog::speciality() {
		cout << "The wild dog plays dead before using "+ getSpecD()+"." <<endl;
		setDam(getDam()*1.1);
}
