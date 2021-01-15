/*
 * Prisoner.cpp
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#include "Prisoner.h"

Prisoner::Prisoner(int x, int y) : Human('X', x, y) {
	// TODO Auto-generated constructor stub

}

Prisoner::~Prisoner() {
	// TODO Auto-generated destructor stub
}

void Prisoner::setX(int x) {
	Human::setX(x);
	Subject::notify();
}


void Prisoner::setY(int y) {
	Human::setY(y);
	Subject::notify();
}


void Prisoner::runTowards(string move) {
	if(move=="up")
		setY(Human::getY()-1);
	else if(move=="down")
		setY(Human::getY()+1);
	else if(move=="left")
			setX(Human::getX()-1);
	else if(move=="right")
			setX(Human::getX()+1);
	else {
		cout << "No move" << endl;
		return;
	}
}
