// Project 16: Tone Generator
// Creates simple tones with a piezo buzzer.

int buzzerPin = 8;

void setup() {
  // No setup needed
}

void loop() {
  tone(buzzerPin, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 second
  noTone(buzzerPin);    // Stop sound...
  delay(1000);        // ...for 1 second
}
