// Project 38: Hall Effect Sensor
// Detects a magnetic field using a Hall Effect sensor.

int hallSensorPin = 2; // Digital output pin
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(hallSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int magnetState = digitalRead(hallSensorPin);

  if (magnetState == LOW) { // Magnet detected (output goes LOW)
    Serial.println("Magnet Detected");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("No Magnet");
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}
