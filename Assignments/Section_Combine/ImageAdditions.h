/*
 * ImageAdditions.h
 *
 *  Created on: 08 Sep 2020
 *      Author: liam
 */

#ifndef IMAGEADDITIONS_H_
#define IMAGEADDITIONS_H_

#include "Poster.h"
#include <termcolor/termcolor.hpp>

// praying for no name collisions
using namespace termcolor;


class ImageAdditions: public Poster {
public:
	ImageAdditions();
	ImageAdditions(int w, char b, char f) : Poster(w, b, f){};
	virtual ~ImageAdditions();

	virtual void drawElement(char*)=0;
};

#endif /* IMAGEADDITIONS_H_ */
