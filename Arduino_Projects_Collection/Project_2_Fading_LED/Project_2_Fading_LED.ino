// Project 2: Fading LED
// This project demonstrates how to fade an LED using Pulse Width Modulation (PWM).

// The pin with the LED
int ledPin = 9; // Use a PWM pin (usually marked with a ~)

void setup() {
  // Nothing to set up
}

void loop() {
  // Fade in
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255)
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // Fade out
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255)
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
