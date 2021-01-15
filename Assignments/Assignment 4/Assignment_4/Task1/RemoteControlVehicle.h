/*
 * RemoteControlVehicle.h
 *
 *  Created on: 03 Oct 2020
 *      Author: liam
 */

#ifndef REMOTECONTROLVEHICLE_H_
#define REMOTECONTROLVEHICLE_H_

#include <iostream>
#include <cstring>
using namespace std;

class RemoteControlVehicle {
private:
	bool on_state;
	RemoteControlVehicle *next;
public:
	RemoteControlVehicle(RemoteControlVehicle* n=nullptr);
	virtual ~RemoteControlVehicle();

	virtual void on()=0;
	virtual void off()=0;
	virtual void forward()=0;
	virtual void backward()=0;

	void flipState();
	bool getState();

	virtual void handleRequest(string sline);
	void setNext(RemoteControlVehicle *n);
	RemoteControlVehicle *getNext();

};

#endif /* REMOTECONTROLVEHICLE_H_ */
