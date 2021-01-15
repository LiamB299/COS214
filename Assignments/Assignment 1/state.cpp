/*
 * state.cpp
 *
 *  Created on: 22 Aug 2020
 *      Author: liam
 */

#include "state.h"

state::state(double hp, double dam, string hun, string spe) {
	HP = hp;
	damage = base = dam;
	hunt = hun;
	spec = spe;
	speb=false;
	type="";
}

state::state(double hp, double dam, double based, string hun, string spe, bool specb) {
	HP = hp;
	damage = dam;
	hunt = hun;
	spec = spe;
	base = based;
	speb = specb;
	type="";
}

state::state(int hp, int dam, string type) {
	HP = hp;
	damage = dam;
	this->type = type;
}

state::state(const state& s) {
	HP = s.HP;
	damage = s.damage;
	hunt = s.hunt;
	spec = s.spec;
	base = s.base;
	speb= s.speb;
}

double state::getHP() {
	return HP;
}

double state::getDam() {
	return damage;
}

double state::getBase() {
	return base;
}

string state::getHunt() {
	return hunt;
}

string state::getSpec() {
	return spec;
}

bool state::getSpecb() {
	return speb;
}

string state::getType() {
	return type;
}
