/*
 * Cheetah.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "Cheetah.h"
#include <string>
#include <iostream>

Cheetah::Cheetah(string hunt, string spc) : Predator(hunt, spc) {setType("Cheetah");};

Cheetah::Cheetah(double hp, double dam, string hunt, string spc) : Predator(hp, dam, hunt, spc) {
	setType("Cheetah");
}

bool Cheetah::catchPrey(Prey* p) {
	cout << "The cheetah sprints forward with its eye on the "+p->getType() <<endl;
	return p->run();
}

// only outputs if dealing damage
bool Cheetah::getAttacked(Prey* p) {
	int f = p->fight();
	if (f == 0) {
		return false;
	}
	else {
		cout << "The "+p->getType()+" side steps the cheetah, kicks back and causes "+ to_string(p->getDamage())+" damage in the process." <<endl;
		setHP(getHP() - p->getDamage());
	}
	if (getHP() <=0)
		return true;
	else
		return false;
}

bool Cheetah::attack(Prey* p) {
	cout << "The cheetah causes "+to_string(getDam())+" damage to the " +p->getType()+" by using "+getHunt()+"." << endl;
	if (p->takeDamage(this->getDam())<=0) {
		reset_dam();
		return true;
	}
	return false;
}

void Cheetah::die() {
	reset_dam();
	cout << "The hunter becomes the hunted." <<endl;
}

void Cheetah::speciality() {
		cout << "The tired cheetah uses "+ getSpecD()+"." <<endl;
		setDam(getDam()*1.1);
}
