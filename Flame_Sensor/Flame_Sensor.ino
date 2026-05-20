// Project 37: Flame Sensor
// Detects a flame and turns on an LED.

int flameSensorPin = 2; // Digital output pin of the sensor
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(flameSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int flameState = digitalRead(flameSensorPin);

  if (flameState == LOW) { // Sensor detects a flame (output goes LOW)
    Serial.println("Flame detected!");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("No flame.");
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
