/*
 * CheetahFactory.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef CHEETAHFACTORY_H_
#define CHEETAHFACTORY_H_

#include "PredatorFactory.h"
#include "Cheetah.h"

class CheetahFactory : public PredatorFactory {
public:
	Predator* createPredator(string huntingMethod, string speciality);
};

#endif /* CHEETAHFACTORY_H_ */
