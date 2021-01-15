/*
 * PandemicStrategy.h
 *
 *  Created on: 29 Aug 2020
 *      Author: liam
 */

#ifndef PANDEMICSTRATEGY_H_
#define PANDEMICSTRATEGY_H_
#include <string>
using namespace std;

class PandemicStrategy {
public:
	virtual string takeAction()=0;
	PandemicStrategy();
	virtual ~PandemicStrategy();
};

#endif /* PANDEMICSTRATEGY_H_ */
