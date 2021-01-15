/*
 * WolfFactory.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef WOLFFACTORY_H_
#define WOLFFACTORY_H_

#include "PredatorFactory.h"
#include "Wolf.h"

class WolfFactory: public PredatorFactory {
public:
	Predator* createPredator(string huntingMethod, string speciality);
};

#endif /* WOLFFACTORY_H_ */
