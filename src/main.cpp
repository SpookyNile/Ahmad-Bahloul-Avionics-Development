#include <Arduino.h>
#include <HardwareSerial.h>
#include <TinyGPS++.h>
#include <MPU.cpp>


#define RXD2 16 //Defining the pins
#define TXD2 17


HardwareSerial SerialGPS(2); //accessing UART 2 with the HardwareSerial Library
TinyGPSPlus gps;

void setup(){

 setupMPU();
 Serial.begin(9600); // Start serial communication with the PC and initialize Serial Monitor
 SerialGPS.begin(9600,SERIAL_8N1,RXD2,TXD2);  //Start serial communication with the GPS module with UART2, RXD2=GPIO 16, TXD2=GPIO 17
}

void loop() { //Choose Serial1 or Serial2 as required
  // while (SerialGPS.available() >0) {
  //   gps.encode(SerialGPS.read());
  //   //Serial.print(char(SerialGPS.read())); //Problem was here, we were printing data in Serial0 (our serial Monitor) from 'Serial2' instead of the defined object 'SerialGPS'. Never caught it because Serial2 was defined within HardwareSerial so it never gave an error.
  // }

  // Serial.print("LAT=");  Serial.println(gps.location.lat(), 6);
  // Serial.print("SAT="); Serial.println(gps.satellites.value());
  // Serial.print("LONG="); Serial.println(gps.location.lng(), 6);
  // Serial.print("ALT=");  Serial.println(gps.altitude.meters());
  // Serial.print("HDOP="); Serial.println(gps.hdop.value());
  // delay(1000); //delay for 1000 milliseconds

  MPU();
}