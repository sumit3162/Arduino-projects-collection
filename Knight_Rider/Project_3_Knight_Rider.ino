// Project 3: Knight Rider
// This project creates the scanning eye effect from the Knight Rider TV show.

int ledPins[] = {2, 3, 4, 5, 6, 7}; // An array of pin numbers to which LEDs are attached
int pinCount = 6; // The number of pins (and LEDs)

void setup() {
  // Loop through the pins and set them all to output
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  // Loop from the lowest pin to the highest
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // Turn the pin on
    digitalWrite(ledPins[thisPin], HIGH);
    delay(100); // Wait for 100ms
    // Turn the pin off
    digitalWrite(ledPins[thisPin], LOW);
  }

  // Loop from the highest pin to the lowest
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    // Turn the pin on
    digitalWrite(ledPins[thisPin], HIGH);
    delay(100); // Wait for 100ms
    // Turn the pin off
    digitalWrite(ledPins[thisPin], LOW);
  }
}
