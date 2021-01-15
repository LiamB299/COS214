/*
 * ImageElement.h
 *
 *  Created on: 08 Sep 2020
 *      Author: liam
 */

#ifndef IMAGEELEMENT_H_
#define IMAGEELEMENT_H_

#include "Poster.h"
#include "ImageAdditions.h"

// Two design considerations
// Have a line passed in to be decorated or have a line generated and decorated
// ImageElement will delete decorator anonymous object

class ImageElement: public Poster {
private:
	char *line;
	ImageAdditions *decor;
public:
	ImageElement();
	ImageElement(char *line, ImageAdditions *dec, int w, char b, char f);
	virtual ~ImageElement();
	char * getLine() {return line;};
	void setDecor(ImageAdditions *d) {decor=d;};

	virtual void drawPoster();
	virtual void drawElement();
};

#endif /* IMAGEELEMENT_H_ */
