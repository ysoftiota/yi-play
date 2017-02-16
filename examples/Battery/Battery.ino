/*
  Battery sense example.
*/
#define Serial SerialUSB
#define BATTERY_SENSE_PIN A5  // select the input pin for the battery sense point

#define ANALOG_RES 12

void setup() {
  Serial.begin(115200);
  analogReadResolution(ANALOG_RES);
  analogReference(AR_INTERNAL1V0);

  //wait for serial connection
  while (!Serial);

}

void loop() {
  float sensorValue = (2474/604) * (float)analogRead(BATTERY_SENSE_PIN)/(4096);
  Serial.print("Battery sense value: ");
  Serial.println(sensorValue);

  delay(500);
}
