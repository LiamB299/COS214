/*
 * WildDogFactory.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef WILDDOGFACTORY_H_
#define WILDDOGFACTORY_H_

#include "PredatorFactory.h"
#include "WildDog.h"

class WildDogFactory: public PredatorFactory {
public:
	Predator* createPredator(string huntingMethod, string speciality);
};

#endif /* WILDDOGFACTORY_H_ */
