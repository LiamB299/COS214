/*
 * PrisonArea.cpp
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#include "PrisonArea.h"

PrisonArea::PrisonArea(int width, int height) {
	mWidth = width;
	mHeight = height;
	mprisoner = new Prisoner(width/2, height/2);

	// attached through the prisoner passed in
	mBorderGuard.push_back(new BorderGuard(0, 0, mprisoner));
	mBorderGuard.push_back(new BorderGuard(0, width-1, mprisoner));
	mBorderGuard.push_back(new BorderGuard(height-1, 0, mprisoner));
	mBorderGuard.push_back(new BorderGuard(width-1, height-1, mprisoner));

	for (vector<BorderGuard*>::iterator it = mBorderGuard.begin(); it != mBorderGuard.end(); it++)
		mprisoner->attach(*it);


}

PrisonArea::~PrisonArea() {
	delete mprisoner;
	mprisoner = nullptr;

	for (vector<BorderGuard*>::iterator it = mBorderGuard.begin(); it != mBorderGuard.end(); it++) {
			delete (*it);
			(*it) = nullptr;
		}
	mBorderGuard.clear();
}

int PrisonArea::getWidth() {
	return mWidth;
}

int PrisonArea::getHeight() {
	return mHeight;
}

Prisoner* PrisonArea::getprisoner() {
	return mprisoner;
}

void PrisonArea::print() {

	for (int y = 0 ; y < mHeight ; ++y ) {
		for (int x = 0 ; x < mWidth ; ++x ) {
			char value = ' ';
			if(x == mprisoner->getX() && y == mprisoner->getY()) {
				value= mprisoner->getValue();
			}
			else {
				for(int i = 0 ; i < mBorderGuard.size() ; ++i) {
					if( x == mBorderGuard[i]->getX() && y == mBorderGuard[i]->getY()) {
						value = mBorderGuard[i]->getValue();
						break;
					}
					else if (x == mBorderGuard[i]->getX() || y == mBorderGuard[i]->getY()) {
						value = '*';
					}
				}
			}
		cout << value;
		}
	cout << endl;
	}
}
