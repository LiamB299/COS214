/*
 * RemoteControlPlane.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef REMOTECONTROLPLANE_H_
#define REMOTECONTROLPLANE_H_

#include "RemoteControlVehicle.h"

class RemoteControlPlane: public RemoteControlVehicle {
public:
	RemoteControlPlane(RemoteControlVehicle *n=nullptr);
	virtual ~RemoteControlPlane();

	void on();
	void off();
	void forward();
	void backward();

	void handleRequest(string sline);

};

#endif /* REMOTECONTROLPLANE_H_ */
