/*
 * PreyStore.h
 *
 *  Created on: 23 Aug 2020
 *      Author: liam
 */

#ifndef PREYSTORE_H_
#define PREYSTORE_H_

#include "PreyMemento.h"

class PreyStore {
	PreyMemento* store;
public:
	void setStore(PreyMemento*s) {store=s;};
	PreyMemento* getStore() {return store;};
};

#endif /* PREYSTORE_H_ */
