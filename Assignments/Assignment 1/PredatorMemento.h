/*
 * PredatorMemento.h
 *
 *  Created on: 22 Aug 2020
 *      Author: liam
 */

#ifndef PREDATORMEMENTO_H_
#define PREDATORMEMENTO_H_

#include "state.h"

class PredatorMemento {
public:
	~PredatorMemento() {delete _state;};
private:
	friend class Predator;
	PredatorMemento() {_state=0;};
	state *_state;
	state* getState() const {return _state;};
	void setState(state* s) {_state =s;};
};

#endif /* PREDATORMEMENTO_H_ */
