/*
 * BorderGuard.h
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#ifndef BORDERGUARD_H_
#define BORDERGUARD_H_

#include "Human.h"
#include "Observer.h"
#include "Prisoner.h"

class BorderGuard: public Human, public Observer {
private:
	Prisoner* mprisoner;
public:
	BorderGuard(int, int, Prisoner*);
	virtual ~BorderGuard();
	void update();
};

#endif /* BORDERGUARD_H_ */
