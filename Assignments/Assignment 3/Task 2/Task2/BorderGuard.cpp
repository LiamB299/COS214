/*
 * BorderGuard.cpp
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#include "BorderGuard.h"

BorderGuard::BorderGuard(int x, int y, Prisoner* p) : Human('X', x, y), Observer() {
	mprisoner = p;
}

BorderGuard::~BorderGuard() {
}

void BorderGuard::update() {
	if(Human::getX()==mprisoner->getX()) {
		// may be placed in own function like in sequence diagram
		cout << "Guards blows whistle, prisoner on X border: "<< to_string(Human::getX()) <<endl;

		if(mprisoner->getX()>0)
			mprisoner->setX(mprisoner->getX()-1);
		else
			mprisoner->setX(mprisoner->getX()+1);

		return;
	}

	if(Human::getY()==mprisoner->getY()) {
		cout << "Guards blows whistle, prisoner on Y border: "<< to_string(Human::getY()) <<endl;

		if(mprisoner->getY()>0)
			mprisoner->setY(mprisoner->getY()-1);
		else
			mprisoner->setY(mprisoner->getY()+1);

	}
}
