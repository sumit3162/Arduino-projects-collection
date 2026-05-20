// Project 5: Push Button LED Control
// Turns on and off an LED with a push button.

const int buttonPin = 2; // the number of the pushbutton pin
const int ledPin = 13;   // the number of the LED pin

int buttonState = 0; // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // turn LED on
  } else {
    digitalWrite(ledPin, LOW); // turn LED off
  }
}
