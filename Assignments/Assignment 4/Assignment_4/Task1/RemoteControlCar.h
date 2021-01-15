/*
 * RemoteControlCar.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef REMOTECONTROLCAR_H_
#define REMOTECONTROLCAR_H_

#include "RemoteControlVehicle.h"

class RemoteControlCar: public RemoteControlVehicle {
public:
	RemoteControlCar(RemoteControlVehicle *n=nullptr);
	virtual ~RemoteControlCar();

	void on();
	void off();
	void forward();
	void backward();

	void handleRequest(string sline);

};

#endif /* REMOTECONTROLCAR_H_ */
