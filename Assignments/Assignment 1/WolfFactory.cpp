/*
 * WolfFactory.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "WolfFactory.h"

Predator* WolfFactory::createPredator(string huntingMethod, string speciality) {
	return new Wolf(8, 2, huntingMethod, speciality);
}
