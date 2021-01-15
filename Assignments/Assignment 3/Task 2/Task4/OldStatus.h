/*
 * OldStatus.h
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#ifndef OLDSTATUS_H_
#define OLDSTATUS_H_

#include <string>
#include <iostream>
using namespace std;

class OldStatus {
private:
	int numStatus;
	int MaxStatus;
	string* status;
public:
	OldStatus(int maxStatus);
	virtual ~OldStatus();
	void save(string status);
	string load(int index = -1);
	int getNumStatus();
};

#endif /* OLDSTATUS_H_ */
