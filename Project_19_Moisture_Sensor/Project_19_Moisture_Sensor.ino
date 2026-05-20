// Project 19: Moisture Sensor
// Reads the value from a soil moisture sensor.

int sensorPin = A0; // Soil moisture sensor output

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(sensorPin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureValue);
  delay(500);
}
