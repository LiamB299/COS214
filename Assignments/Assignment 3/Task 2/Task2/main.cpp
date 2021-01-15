/*
 * main.cpp
 *
 *  Created on: 13 Sep 2020
 *      Author: liam
 */

#include "PrisonArea.h"
#include "Prisoner.h"

int main() {

	int width =9;
	int height =9;

	PrisonArea PA(width,height);

	Prisoner *p = PA.getprisoner();

	for(int x=0; x<width; x++) {
		for(int y=0; y<height; y++) {
			p->setX(y);
			p->setY(x);
			//p->runTowards("right");
			PA.print();
			cout << endl;
		}
	}

	return 0;
}

