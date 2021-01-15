/*
 * Observer.h
 *
 *  Created on: 12 Sep 2020
 *      Author: liam
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

class Observer {
public:
	Observer();
	virtual ~Observer();
	virtual void update()=0;

};

#endif /* OBSERVER_H_ */
