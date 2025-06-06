#pragma once // prevents "double inclusion" errors
#include <TinyGPSPlus.h>

extern TinyGPSPlus gps;

void setupGPS();
void loopGPS();