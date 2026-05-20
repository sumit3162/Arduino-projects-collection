// Project 34: Water Level Sensor
// Reads the value from a water level sensor and prints it to the Serial Monitor.

const int waterSensorPin = A0; // Sensor analog pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(waterSensorPin);
  
  Serial.print("Water Level: ");
  Serial.println(sensorValue);
  
  delay(500);
}
