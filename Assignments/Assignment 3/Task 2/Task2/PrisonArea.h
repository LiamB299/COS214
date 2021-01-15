/*
 * PrisonArea.h
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#ifndef PRISONAREA_H_
#define PRISONAREA_H_
#include "Prisoner.h"
#include "BorderGuard.h"

class PrisonArea {
private:
	int mWidth;
	int mHeight;
	Prisoner *mprisoner;
	vector<BorderGuard*> mBorderGuard;
public:
	PrisonArea(int width, int height);
	virtual ~PrisonArea();

	int getWidth();
	int getHeight();
	Prisoner* getprisoner();
	void print();


};

#endif /* PRISONAREA_H_ */
