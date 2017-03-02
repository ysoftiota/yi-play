#include "Wire.h"
#include "I2Cdev.h"
#include "YiPlayRF.h"

#define Addr 0x28


byte data[3];

void setup() {
  Wire.begin();
  SerialUSB.begin(115200);
  //wait for serial connection
 // while (!SerialUSB);

  Wire.beginTransmission(Addr);
  Wire.write(0x20);
  Wire.write(0x07 | (0x02 << 4));
  Wire.endTransmission();
  
  setupRadio(66, 2, NULL);
}

void loop() {
  Wire.beginTransmission(Addr);
  Wire.write(0x28 | 0x80);
  // Stop I2C transmission
  Wire.endTransmission();
  delay(50); 

  Wire.requestFrom(Addr, 6);
  if (Wire.available() == 6)
  {
    Wire.read();
    data[0] = Wire.read(); 
    Wire.read();
    data[1] = Wire.read();
    Wire.read();
    data[2] = Wire.read(); 

    radioSend(1, data);    
  }


}
