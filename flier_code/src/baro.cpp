#include <Arduino.h>
#include <baro.h>

MS5611 baro(0x77);


void setupBarometer()
{
  Serial.begin(115200);
  while (!Serial);
  Serial.println();
  Serial.println(__FILE__);
  Serial.print("MS5611_LIB_VERSION: ");
  Serial.println(MS5611_LIB_VERSION);
  Serial.println();

  Wire.begin(22, 23);  //  adjust ESP32 pins if needed
  if (baro.begin() == true)
  {
    Serial.print("MS5611 found: ");
    Serial.println(baro.getAddress());
  }
  else
  {
    Serial.println("MS5611 not found. halt.");
    while (1);
  }
  Serial.println();
}


void loopBarometer()
{
  baro.read();           //  note no error checking => "optimistic".
  Serial.print("T:\t");
  Serial.print(baro.getTemperature(), 2);
  Serial.print("\tP:\t");
  Serial.print(baro.getPressure(), 2);
  Serial.println();
  delay(1000);
}
