/*
 * levelOneStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef LEVELONESTRATEGY_H_
#define LEVELONESTRATEGY_H_

#include "PandemicStrategy.h"

class levelOneStrategy: public PandemicStrategy {
public:
	string takeAction();
	levelOneStrategy();
	virtual ~levelOneStrategy();
};

#endif /* LEVELONESTRATEGY_H_ */
