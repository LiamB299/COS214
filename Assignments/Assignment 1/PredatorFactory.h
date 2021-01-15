/*
 * PredatorFactory.h
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#ifndef PREDATORFACTORY_H_
#define PREDATORFACTORY_H_
#include "Predator.h"

class PredatorFactory {
public:
	//PredatorFactory();
	virtual ~PredatorFactory() {};
	virtual Predator* createPredator(string, string)=0;
};

#endif /* PREDATORFACTORY_H_ */
