/*
 * CheetahFactory.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "CheetahFactory.h"

Predator* CheetahFactory::createPredator(string huntingMethod, string speciality) {
	return new Cheetah(11, 4, huntingMethod, speciality);
}
