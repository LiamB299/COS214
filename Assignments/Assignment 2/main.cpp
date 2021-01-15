/*
 * main.cpp
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#include "Pandemic.h"

int main() {
	Pandemic *p = new Pandemic("Love");

	p->init_Pandemic(0);
	p->takeAction();

	for(int i=0; i<6; i++) {
		cout << "Level growing" <<endl;
		p->increaseLevel();
		// modified such that when the level changes, the action also is called, but may also be called manually
		//p->takeAction();
		cout <<endl;
	}
	cout << endl;

	for(int i=0; i<6; i++) {
		cout << "Level decreasing" <<endl;
		p->decreaseLevel();
		//p->takeAction();
		cout << endl;
		}





	delete p;
	return 0;
}

