/*
 * GlucoseService.h
 *
 *  Created on: Sep 15, 2014
 *      Author: lauril
 */

/***
 * https://developer.bluetooth.org/gatt/characteristics/Pages/CharacteristicViewer.aspx?u=org.bluetooth.characteristic.glucose_measurement.xml
 *
 */
#ifndef GLUCOSESERVICE_H_
#define GLUCOSESERVICE_H_
#include "glucose_service.h"

class GlucoseService {
public:
	GlucoseService();
	virtual ~GlucoseService();
};

#endif /* GLUCOSESERVICE_H_ */
