// Project 21: Tilt Sensor Alarm
// Sounds an alarm when a tilt sensor is activated.

int tiltPin = 2;
int buzzerPin = 8;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP); // Use internal pull-up resistor
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int tiltState = digitalRead(tiltPin);

  if (tiltState == LOW) { // Sensor is tilted
    tone(buzzerPin, 500);
  } else {
    noTone(buzzerPin);
  }
  delay(100);
}
