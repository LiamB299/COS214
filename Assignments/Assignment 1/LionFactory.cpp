/*
 * LionFactory.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "LionFactory.h"

Predator* LionFactory::createPredator(string huntingMethod, string speciality) {
	return new Lion(13, 5, huntingMethod, speciality);
}
