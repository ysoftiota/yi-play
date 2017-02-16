/*
 Temperature/humidity example.

 Read temp/hum values using I2C and send result over serial.
 
*/
#define Serial SerialUSB

#include <Wire.h>
#include <i2cdetect.h>

// SI7006-A20 I2C address is 0x40(64)
#define Addr 0x40


void setup() {
  Wire.begin();
  Serial.begin(115200);

  //wait for serial connection
  while (!Serial);

}

void loop() {

    unsigned int data[2];
  
    // Start I2C transmission
    Wire.beginTransmission(Addr);
    // Send humidity measurement command, NO HOLD MASTER
    Wire.write(0xF5);
    // Stop I2C transmission
    Wire.endTransmission();
    delay(500);
    
    // Request 2 bytes of data
    Wire.requestFrom(Addr, 2);
    // Read 2 bytes of data
    // humidity msb, humidity lsb 
    if(Wire.available() == 2)
    {
      data[0] = Wire.read();
      data[1] = Wire.read();
    }
    
    // Convert the data
    float humidity  = ((data[0] * 256.0) + data[3]);
    humidity = ((125 * humidity) / 65536.0) - 6;
    // Start I2C transmission
    Wire.beginTransmission(Addr);
    // Send temperature measurement command, NO HOLD MASTER
    Wire.write(0xF3);
    // Stop I2C transmission
    Wire.endTransmission();
    delay(500);
    
    // Request 2 bytes of data
    Wire.requestFrom(Addr, 2);
    // Read 2 bytes of data
    // temp msb, temp lsb
    if(Wire.available() == 2)
    {
      data[0] = Wire.read();
      data[1] = Wire.read();
    }
    // Convert the data
    float temp  = ((data[0] * 256.0) + data[1]);
    float ctemp = ((175.72 * temp) / 65536.0) - 46.85;
    float ftemp = ctemp * 1.8 + 32;
    
    // Output data to serial monitor
    Serial.print("Relative humidity : ");
    Serial.print(humidity);
    Serial.println(" % RH");
    Serial.print("Temperature in Celsius : ");
    Serial.print(ctemp);
    Serial.println(" C");
    Serial.print("Temperature in Fahrenheit : ");
    Serial.print(ftemp);
    Serial.println(" F");    
    Serial.println("-----------------------------------------");
    
    delay(500);
}

