/*
 * Wolf.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef WOLF_H_
#define WOLF_H_

#include "Predator.h"

class Wolf: public Predator {
public:
	Wolf(string hunt, string spc);
	Wolf(double hp, double dam, string hunt, string spc);

private:
		// primitives to implement
		bool catchPrey(Prey*);
		bool attack(Prey*);
		bool getAttacked(Prey*);
		void die();
		void speciality();
};

#endif /* WOLF_H_ */
