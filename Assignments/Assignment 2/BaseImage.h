/*
 * BaseImage.h
 *
 *  Created on: 08 Sep 2020
 *      Author: liam
 */

#ifndef BASEIMAGE_H_
#define BASEIMAGE_H_

#include "Poster.h"
#include "ImageElement.h"
#include "ImageAdditions.h"

class BaseImage : public Poster {
private:
	vector<ImageElement *> lines;

public:
	BaseImage();
	BaseImage(int w, char b, char f) : Poster(w, b, f){};
	virtual ~BaseImage();

	// draw poster
	void drawPoster();
	void drawElement() {drawPoster();};
	void printEmpty();

	// design poster, but do not print yet
	void addElement(char*, ImageAdditions*);

	// pass in decorator to use
	void styleElement(int, ImageAdditions*);

	void RemLastElem() {lines.pop_back();};
};

#endif /* BASEIMAGE_H_ */
