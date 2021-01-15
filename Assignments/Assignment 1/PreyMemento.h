/*
 * PreyMemento.h
 *
 *  Created on: 23 Aug 2020
 *      Author: liam
 */

#ifndef PREYMEMENTO_H_
#define PREYMEMENTO_H_

#include "state.h"

class PreyMemento {
public:
	~PreyMemento() {delete _state;};
private:
	friend class Prey;
	state *_state;
	PreyMemento() {_state=0;};
	void setState(state*s) {_state = s;};
	state* getState() {return _state;};
};

#endif /* PREYMEMENTO_H_ */
