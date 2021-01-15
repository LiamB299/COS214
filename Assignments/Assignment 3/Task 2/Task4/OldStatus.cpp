/*
 * OldStatus.cpp
 *
 *  Created on: 15 Sep 2020
 *      Author: liam
 */

#include "OldStatus.h"

OldStatus::OldStatus(int maxStatus) {
	MaxStatus = maxStatus;
	numStatus =0;
	status = new string[MaxStatus];
}

OldStatus::~OldStatus() {
	delete [] status;
}

void OldStatus::save(string stat) {
	if(numStatus==MaxStatus)
		numStatus =0;
	status[numStatus] = stat;
	numStatus+=1;
}

string OldStatus::load(int index) {
	if(numStatus==0)
		return "None";

	while(index <0) {
		cout << "Choose status [0 - " << numStatus-1 <<"]" <<endl;
		cin >> index;
		if(index < 0 or index > (numStatus - 1))
			return "Invalid";
	}
	return status[index];
}

int OldStatus::getNumStatus() {
	return numStatus;
}
