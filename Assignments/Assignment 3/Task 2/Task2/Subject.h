/*
 * Subject.h
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_
#include <vector>
#include "Observer.h"
#include <string>
using namespace std;
class Subject {
private:
	vector<Observer*> mObservers;
public:
	Subject();
	virtual ~Subject();

	void attach(Observer*);
	void notify();
};

#endif /* SUBJECT_H_ */
