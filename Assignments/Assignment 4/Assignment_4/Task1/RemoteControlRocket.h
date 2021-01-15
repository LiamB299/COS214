/*
 * RemoteControlRocket.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef REMOTECONTROLROCKET_H_
#define REMOTECONTROLROCKET_H_

#include "RemoteControlVehicle.h"
#include <iostream>
using namespace std;

class RemoteControlRocket {
public:
	RemoteControlRocket();
	virtual ~RemoteControlRocket();

	void takeOff();
	void stopLaunch();
	void increaseThrottle();
	void decreaseThrottle();
};

#endif /* TASK_4_REMOTECONTROLROCKET_H_ */
