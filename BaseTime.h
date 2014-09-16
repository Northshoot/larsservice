/*
 * BaseTime.h
 *
 *  Created on: Sep 15, 2014
 *      Author: lauril
 */

#ifndef BASETIME_H_
#define BASETIME_H_
#include "base_time.h"

class BleBaseTime {
public:
	BleBaseTime();
	virtual ~BleBaseTime();
	BaseTime getNow();

private:
	BaseTime datetime;
};

#endif /* BASETIME_H_ */
