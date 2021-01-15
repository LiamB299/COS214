/*
 * LionFactory.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef LIONFACTORY_H_
#define LIONFACTORY_H_

#include "PredatorFactory.h"
#include "Lion.h"

class LionFactory: public PredatorFactory {
public:
	Predator* createPredator(string huntingMethod, string speciality);
};

#endif /* LIONFACTORY_H_ */
