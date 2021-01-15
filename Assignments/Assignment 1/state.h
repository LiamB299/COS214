/*
 * state.h
 *
 *  Created on: 22 Aug 2020
 *      Author: liam
 */

#ifndef STATE_H_
#define STATE_H_
#include <string>
using namespace std;

class state {
private:
	double HP, damage, base;
	string hunt, spec, type;
	bool speb;
public:
	state(double, double, string, string);
	state(double hp, double dam, double base, string hun, string spe, bool spec);
	state(int hp, int dam, string type);
	state(const state& s);
	double getHP();
	double getDam();
	double getBase();
	string getHunt();
	string getSpec();
	string getType();
	bool getSpecb();
};

#endif /* STATE_H_ */
