#include <Arduino.h>


#include <mpu.h>
#include <gps.h>
#include <baro.h>

int counter = 0;

void setup()
{
  Serial.begin(115200); //Serial monitor
  Serial.println("LoRa Sender");

  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }

  // setupMPU();
  // setupGPS();
  // setupBarometer();

  // delay(100);
  
}

void loop()
{
  Serial.print("Sending packet: ");
  Serial.println(counter);

  // send packet
  LoRa.beginPacket();
  LoRa.print("hello ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;

  // delay(5000);
  // loopMPU();
  // loopGPS();
  // loopBarometer();
  // delay(500);
}

