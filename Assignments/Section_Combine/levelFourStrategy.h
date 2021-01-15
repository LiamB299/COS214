/*
 * levelFourStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELFOURSTRATEGY_H_
#define LEVELFOURSTRATEGY_H_

#include "PandemicStrategy.h"

class levelFourStrategy: public PandemicStrategy {
public:
	string takeAction();
	levelFourStrategy();
	virtual ~levelFourStrategy();
};

#endif /* LEVELFOURSTRATEGY_H_ */
