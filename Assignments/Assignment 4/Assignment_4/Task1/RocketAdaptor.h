/*
 * RocketAdaptor.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef TASK1_ROCKETADAPTOR_H_
#define TASK1_ROCKETADAPTOR_H_

#include "RemoteControlVehicle.h"
#include "RemoteControlRocket.h"

class RocketAdaptor: public RemoteControlVehicle {
private :
	RemoteControlRocket *adaptee;
public:
	RocketAdaptor(RemoteControlRocket *ada);
	virtual ~RocketAdaptor();

	void on();
	void off();
	void forward();
	void backward();

	void handleRequest();
};

#endif /* TASK1_ROCKETADAPTOR_H_ */
