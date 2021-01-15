/*
 * Subject.cpp
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#include "Subject.h"

Subject::Subject() {
	// TODO Auto-generated constructor stub

}

Subject::~Subject() {
	//for (vector<Observer*>::iterator it = mObservers.begin(); it != mObservers.end(); it++) {
	//	if((*it)!=nullptr)
	//		delete (*it);
	//	(*it) = nullptr;
	//}
	mObservers.clear();
}

void Subject::attach(Observer* obs) {
	mObservers.push_back(obs);
}

void Subject::notify() {
	for (vector<Observer*>::iterator it = mObservers.begin(); it != mObservers.end(); it++) {
		(*it)->update();
	}
}
