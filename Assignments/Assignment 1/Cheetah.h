/*
 * Cheetah.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef CHEETAH_H_
#define CHEETAH_H_

#include "Predator.h"

class Cheetah: public Predator {
public:
	Cheetah(string hunt, string spc);
	Cheetah(double hp, double dam, string hunt, string spc);

private:
		// primitives to implement
		bool catchPrey(Prey*);
		bool attack(Prey*);
		bool getAttacked(Prey*);
		void die();
		void speciality();
};

#endif /* CHEETAH_H_ */
