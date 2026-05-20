// Project 63: Logic Level Shifter
// Demonstrates using a logic level shifter to interface a 5V Arduino with a 3.3V device.

// This is a demonstration sketch. The "work" is done by the hardware wiring.
// We will blink an LED connected to a 3.3V supply, controlled by the 5V Arduino.

int controlPin = 7; // Pin on the 5V Arduino

void setup() {
  pinMode(controlPin, OUTPUT);
}

void loop() {
  digitalWrite(controlPin, HIGH);
  delay(1000);
  digitalWrite(controlPin, LOW);
  delay(1000);
}
