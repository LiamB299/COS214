/*
 * BaseImage.cpp
 *
 *  Created on: 08 Sep 2020
 *      Author: liam
 */

#include "BaseImage.h"

BaseImage::BaseImage() {
}

BaseImage::~BaseImage() {
	ImageElement *e;
	for(int i=0; i<lines.size(); i++) {
		if(lines[i]!=0)
			delete lines[i];
	}
	lines.clear();
}

void BaseImage::drawPoster() {
	if (lines.size()==0)
		printEmpty();
	else {
		string bline="";
		bline.insert(0,getWidth()-2,getBord());
		bline = getBord() + bline + getBord();
		cout<< bline << endl;

		for (vector<ImageElement*>::iterator it = lines.begin(); it!= lines.end(); ++it) {
			(*it)->drawPoster();
		}
		cout<< bline << endl;
	}
}

void BaseImage::printEmpty() {
	string bline="";
	string space="";
	bline.insert(0,getWidth()-2,getBord());
	bline = getBord() + bline + getBord();
	space.insert(0, getWidth()-2, ' ');
	space = getBord() + space + getBord();
	cout<< bline << endl;
	for(int i=0; i<10; i++)
		cout<< space <<endl;
	cout<< bline <<endl;

}

void BaseImage::addElement(char* line, ImageAdditions* dec) {
	lines.push_back(new ImageElement(line, dec, getWidth(), getBord(), getfill()));
}

void BaseImage::styleElement(int pos, ImageAdditions* dec) {
	lines[pos]->setDecor(dec);
}



