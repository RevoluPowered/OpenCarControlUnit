#ifndef _H_CAR_CONTROL_
#define _H_CAR_CONTROL_

#include <Arduino.h>

//
// Entry System
//

// door control relay
#define DOOR_CONTROL 32

//
// Ignition system
//

// starter relay
#define STARTER_CONTROL 33

// power from battery to car systems
// GPIO14/HS2_CLK - sd card nc without card... means no sd
#define IGNITION_CONTROL 14

//
// Power control systems
//

// emergency battery relay - used to start car when main batt dies.
// when relay powered circuit from main battery is tied
// optional 'bus tie mode'
// optional 'battery source'
#define EMER_BATT 99

void init_control() {
	pinMode(DOOR_CONTROL, OUTPUT);
	pinMode(STARTER_CONTROL, OUTPUT);
	pinMode(IGNITION_CONTROL, OUTPUT);
}

void door_lock_control(bool status) {
	digitalWrite(DOOR_CONTROL, true);
	delay(2000);
	digitalWrite(DOOR_CONTROL, false);
}

void start_car() {
	digitalWrite(STARTER_CONTROL, true);
	delay(2000);
	// check tachometer...
	// now we finish startup
	digitalWrite(STARTER_CONTROL, false);
}

#endif // _H_CAR_CONTROL_