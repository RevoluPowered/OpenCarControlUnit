#include "car_control.h"
#include <Arduino.h>

void setup() {
	init_control();
	delay(500);
	door_lock_control(true);
	delay(1500);
	door_lock_control(false);
}

void loop() {
}