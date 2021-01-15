/*
 * WildDog.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef WILDDOG_H_
#define WILDDOG_H_

#include "Predator.h"

class Wild_Dog: public Predator {
public:
	Wild_Dog(string hunt, string spc);
	Wild_Dog(double hp, double dam, string hunt, string spc);

private:
		// primitives to implement
		bool catchPrey(Prey*);
		bool attack(Prey*);
		bool getAttacked(Prey*);
		void die();
		void speciality();
};

#endif /* WILDDOG_H_ */
