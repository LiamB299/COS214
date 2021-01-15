/*
 * WildDogFactory.cpp
 *
 *  Created on: 16 Aug 2020
 *      Author: liam
 */

#include "WildDogFactory.h"

Predator* WildDogFactory::createPredator(string huntingMethod, string speciality) {
	return new Wild_Dog(6, 3, huntingMethod, speciality);
}
