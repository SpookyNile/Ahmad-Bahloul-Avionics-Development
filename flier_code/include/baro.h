#pragma once // prevents "double inclusion" errors
#include "MS5611.h"
#include <Wire.h>

extern MS5611 baro;

void setupBarometer();
void loopBarometer();