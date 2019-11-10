#ifndef _H_CAR_CONTROL_
#define _H_CAR_CONTROL_

#include <Arduino.h>

//
// Entry System
//

// door control relay
#define DOOR_CONTROL 32
#define DIRECTION_CONTROL 33

void init_control() {
	pinMode(DOOR_CONTROL, OUTPUT);
	pinMode(DIRECTION_CONTROL, OUTPUT);
}

void door_lock_control(bool open_close) {
	// do we open the door or close it?
	// positive negative swap
	digitalWrite(DIRECTION_CONTROL, open_close);
	delay(500);
	// trigger door lock change
	digitalWrite(DOOR_CONTROL, true);
	delay(2000);
	// turn off both relays
	digitalWrite(DOOR_CONTROL, false);
	digitalWrite(DIRECTION_CONTROL, false);
}

#endif // _H_CAR_CONTROL_