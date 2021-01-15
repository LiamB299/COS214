/*
 * levelTwoStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELTWOSTRATEGY_H_
#define LEVELTWOSTRATEGY_H_

#include "PandemicStrategy.h"

class levelTwoStrategy: public PandemicStrategy {
public:
	string takeAction();
	levelTwoStrategy();
	virtual ~levelTwoStrategy();
};

#endif /* LEVELTWOSTRATEGY_H_ */
