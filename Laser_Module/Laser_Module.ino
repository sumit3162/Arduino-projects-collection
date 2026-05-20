// Project 40: Laser Module
// Turns a laser module on and off.

int laserPin = 8;

void setup() {
  pinMode(laserPin, OUTPUT);
}

void loop() {
  digitalWrite(laserPin, HIGH); // Turn the laser on
  delay(2000);                  // Keep it on for 2 seconds
  
  digitalWrite(laserPin, LOW);  // Turn the laser off
  delay(2000);                  // Keep it off for 2 seconds
}
