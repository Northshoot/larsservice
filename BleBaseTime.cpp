/*
 * BleBaseTime.cpp
 *
 *  Created on: Sep 15, 2014
 *      Author: lauril
 */

#include <Time.h>
#include "RTClib.h"
#include <Wire.h>
#include "BaseTime.h"

BleBaseTime::BleBaseTime() {
	// TODO Auto-generated constructor stub
	  Serial.begin(9600);
	  setSyncProvider(RTC.get);   // the function to get the time from the RTC
	  if(timeStatus()!= timeSet)
	     Serial.println("Unable to sync with the RTC");
	  else
	     Serial.println("RTC has set the system time");
	datetime = {0};
	datetime.year=2014;
	datetime.month = NOV;

}

BaseTime
BleBaseTime::getNow(){
	datetime.day = day();

}
BleBaseTime::~BleBaseTime() {
	// TODO Auto-generated destructor stub

}

