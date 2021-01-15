/*
 * Prisoner.h
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#ifndef PRISONER_H_
#define PRISONER_H_

#include "Human.h"
#include "Subject.h"

class Prisoner: public Human, public Subject {
public:
	Prisoner(int, int);
	virtual ~Prisoner();

	// SetX and Y can be private due to the nature of runTowards,
	// I left them public to be easier used in the test main.
	void setX(int x) override;
	void setY(int y) override;
	void runTowards(string);
};

#endif /* PRISONER_H_ */
