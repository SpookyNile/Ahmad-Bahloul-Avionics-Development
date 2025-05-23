#include <Arduino.h>
#include <mpu.h>
#include <gps.h>

void setup()
{
  Serial.begin(115200); //Serial monitor
  setupMPU();
  setupGPS();

  delay(100);
}

void loop()
{
  loopMPU();
  loopGPS();
  delay(500);
}

