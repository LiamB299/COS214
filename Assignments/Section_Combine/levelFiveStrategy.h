/*
 * levelFiveStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELFIVESTRATEGY_H_
#define LEVELFIVESTRATEGY_H_

#include "PandemicStrategy.h"

class levelFiveStrategy: public PandemicStrategy {
public:
	string takeAction();
	levelFiveStrategy();
	virtual ~levelFiveStrategy();
};

#endif /* LEVELFIVESTRATEGY_H_ */
