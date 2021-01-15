/*
 * PredatorStore.h
 *
 *  Created on: 22 Aug 2020
 *      Author: liam
 */

#ifndef PREDATORSTORE_H_
#define PREDATORSTORE_H_

#include "PredatorMemento.h"

class PredatorStore {
	PredatorMemento *m;
public:
	PredatorStore();
	virtual ~PredatorStore();
	void store(PredatorMemento*i) {m=i;};
	PredatorMemento* getMom() {return m;};
};

#endif /* PREDATORSTORE_H_ */
