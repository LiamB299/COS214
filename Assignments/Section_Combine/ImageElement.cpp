/*
 * ImageElement.cpp
 *
 *  Created on: 08 Sep 2020
 *      Author: liam
 */

#include "ImageElement.h"

ImageElement::ImageElement() {
	line=0;
}

ImageElement::~ImageElement() {
	if (decor!=0) {
		delete decor;
		decor =0;
	}

}

void ImageElement::drawPoster() {
	drawElement();
}

void ImageElement::drawElement() {
	if(decor!=0)
		decor->drawElement(line);
	else
		cout << line << endl;
}

ImageElement::ImageElement(char *lines, ImageAdditions *dec, int w, char b, char f) : Poster(w, b, f) {
	line = lines;
	decor = dec;
}
