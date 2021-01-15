/*
 * Predator.cpp
 *
 *  Created on: 15 Aug 2020
 *      Author: liam
 */

#include "Predator.h"

Predator::Predator(string hunt, string spc) {
	hunt_meth = hunt;
	specD = spc;
	spec = false;
	base_dam = damage = HP = 0;
}

void Predator::hunt(Prey* p) {
	while(HP>0 and p->getHP()>0) {
		if(HP <5 and HP>0) {
			speciality();
		}
		if (catchPrey(p)==true) {
			if (getAttacked(p)==true) {
				die();
			}
			else {
				attack(p);
			}
		}
		else {
			HP -= 1;
			if (HP<=0)
				die();
		}
	}
}

void Predator::setHP(double hp) {
	HP = hp;
}


double Predator::getHP() {
	return HP;
}

void Predator::setDam(double dam) {
	damage = dam;
}

double Predator::getDam() {
	return damage;
}

void Predator::setSpec() {
	if (spec == false)
		spec = true;
	else
		spec = false;
}

bool Predator::getSpec() {
	return spec;
}

void Predator::setHunt(string str) {
	hunt_meth = str;
}

string Predator::getHunt() {
	return hunt_meth;
}

void Predator::setSpecD(string spd) {
	specD = spd;
}

string Predator::getSpecD() {
	return specD;
}

void Predator::reset_dam() {
	damage = base_dam;
}

Predator::Predator() {
	HP =0;
	base_dam = damage =0;
	spec =false;
	hunt_meth ="";
	specD ="";
}

Predator::Predator(double hp, double dam, string hunt, string specd) {
	HP = hp;
	base_dam = damage = dam;
	spec = false;
	hunt_meth = hunt;
	specD = specd;
}

Predator::~Predator() {
}

PredatorMemento * Predator::createMemento() {
	PredatorMemento *m = new PredatorMemento();
	m->setState(genState());
	return m;
}

state* Predator::genState() {
	 return new state(HP, damage, base_dam, hunt_meth, specD, spec);
}

void Predator::ReInState(PredatorMemento* m) {
	state *_state = m->getState();
	HP = _state->getHP();
	damage = _state->getDam();
	base_dam = _state->getBase();
	hunt_meth = _state->getHunt();
	specD = _state->getSpec();
	spec = _state->getSpecb();
}

string Predator::toString() {
	return "Predator="+getType()+" HP ="+to_string(getHP())+" final damage="+to_string(getDam())+"\n";
}
