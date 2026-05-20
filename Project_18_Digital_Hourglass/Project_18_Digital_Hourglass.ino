// Project 18: Digital Hourglass
// Simulates an hourglass with a series of LEDs.

const int ledPins[] = {2, 3, 4, 5, 6, 7}; // 6 LEDs
const int numLeds = 6;
const long interval = 1000; // 1 second per "grain of sand"

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn all LEDs on
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(500);

  // "Sand" flows down
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(interval);
  }

  delay(2000); // Wait before flipping
}
