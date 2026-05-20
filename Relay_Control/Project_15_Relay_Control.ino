// Project 15: Relay Control
// Controls a high-power device (like a lamp) with a relay.

int relayPin = 7; // Relay control pin

void setup() {
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Turn the device on
  digitalWrite(relayPin, HIGH);
  delay(2000); // Keep it on for 2 seconds

  // Turn the device off
  digitalWrite(relayPin, LOW);
  delay(2000); // Keep it off for 2 seconds
}
