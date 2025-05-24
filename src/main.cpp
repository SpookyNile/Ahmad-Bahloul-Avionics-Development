#include <Arduino.h>
#include <mpu.h>
#include <gps.h>
#include <baro.h>

void setup()
{
  Serial.begin(115200); //Serial monitor
  setupMPU();
  setupGPS();
  setupBarometer();

  delay(100);
}

void loop()
{
  loopMPU();
  loopGPS();
  loopBarometer();
  delay(500);
}

