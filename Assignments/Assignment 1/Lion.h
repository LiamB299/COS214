/*
 * Lion.h
 *
 *  Created on: 15 Aug 2020
 *      Author: liam
 */

#ifndef LION_H_
#define LION_H_

#include <string>
#include "Predator.h"

class Lion: public Predator {
public:
	Lion(string hunt, string spc);
	Lion(double hp, double dam, string hunt, string spc);

private:
	// primitives to implement
	bool catchPrey(Prey*);
	bool attack(Prey*);
	bool getAttacked(Prey*);
	void die();
	void speciality();
};

#endif /* LION_H_ */
