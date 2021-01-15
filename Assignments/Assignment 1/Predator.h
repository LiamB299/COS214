/*
 * Predator.h
 *
 *  Created on: 15 Aug 2020
 *      Author: liam
 */

#ifndef PREDATOR_H_
#define PREDATOR_H_
#include "Prey.h"
#include "state.h"
#include "PredatorMemento.h"

class Predator {
private:
	double HP;
	double damage;
	double base_dam;
	bool spec;
	string hunt_meth;
	string specD;
	string type;
	state* genState();

	// primitives for template
		virtual bool catchPrey(Prey*)=0;
		virtual bool attack(Prey*)=0;
		virtual bool getAttacked(Prey*)=0;
		virtual void die()=0;
		virtual void speciality()=0;

public:
	// template method
	void hunt(Prey*);



	// setters, getters
	void setHP(double);
	double getHP();
	void setDam(double);
	double getDam();
	void setSpec();
	bool getSpec();
	void setHunt(string);
	string getHunt();
	void setSpecD(string);
	string getSpecD();
	void reset_dam();
	void setType(string s) {type = s;};
	string getType() {return type;};

	// constructor
	Predator();
	Predator(string hunt, string spc);
	Predator(double, double, string, string);

	// destructor
	virtual ~Predator();

	// momento
	PredatorMemento* createMemento();
	void ReInState(PredatorMemento* m);

	// toString summary
	string toString();

};

#endif /* PREDATOR_H_ */
