#pragma once // prevents "double inclusion" errors
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

extern Adafruit_MPU6050 mpu;

void setupMPU();
void loopMPU();