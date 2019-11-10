#include "car_control.h"
#include <Arduino.h>

void setup() {
	init_control();
	door_lock_control(false);
}

void loop() {
}