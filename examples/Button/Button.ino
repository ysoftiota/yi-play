/*
  Button example

 Turns on and off a light emitting diode(LED) D6 when pressing a pushbutton attached to pin 2.

 */
// set pin numbers:
const int buttonPin = 30;     // the number of the pushbutton pin
const int ledPin =  26;      // the number of the LED pin


int buttonState = 0;       

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
