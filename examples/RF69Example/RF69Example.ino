 /*
  Example of RF69 usage.

  On SW3 button press, program starts sending temperafure over RF69.
*/
#include "YiPlayRF.h"
#include <Wire.h>
#include <i2cdetect.h>
#define Addr 0x40

const int buttonPin = 30;
const int ledPin =  26;
const int ledPin2 =  25;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  //configure radio - network 66, node 1
  setupRadio(66, 1, NULL);
  Wire.begin();
  Wire.beginTransmission(Addr);
  // Send temp measurement command, NO HOLD MASTER
  Wire.write(0xF3);
  // Stop I2C transmission
  Wire.endTransmission();
  Wire.requestFrom(Addr, 2);

  // Read 2 bytes of data
  // temp msb, temp lsb
  if (Wire.available() == 2)
  {
    Wire.read();
    Wire.read();
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED of:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED on and start sending temperature
    digitalWrite(ledPin, LOW);
    byte data[2];
    Wire.beginTransmission(Addr);
    // Send temp measurement command, NO HOLD MASTER
    Wire.write(0xF3);
    // Stop I2C transmission
    Wire.endTransmission();

    delay(200);
    // Request 2 bytes of data
    Wire.requestFrom(Addr, 2);

    // Read 2 bytes of data
    // temp msb, temp lsb
    if (Wire.available() == 2)
    {
      data[0] = Wire.read();
      data[1] = Wire.read();
    }
    // Convert the data
    float temp  = ((data[0] * 256.0) + data[1]);
    float ctemp = ((175.72 * temp) / 65536.0) - 46.85;

    //send data over radio
    if (radioSendTemp(2, data)) {
      //when recieved, blink
      digitalWrite(ledPin2, LOW);
      delay(100);
      digitalWrite(ledPin2, HIGH);
    }

  }
}
