/*
 * levelThreeStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELTHREESTRATEGY_H_
#define LEVELTHREESTRATEGY_H_

#include "PandemicStrategy.h"

class levelThreeStrategy: public PandemicStrategy {
public:
	string takeAction();
	levelThreeStrategy();
	virtual ~levelThreeStrategy();
};

#endif /* LEVELTHREESTRATEGY_H_ */
