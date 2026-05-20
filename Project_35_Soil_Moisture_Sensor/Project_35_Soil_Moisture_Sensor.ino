// Project 35: Soil Moisture Sensor
// Reads the moisture level of soil and prints it.

const int soilSensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(soilSensorPin);
  
  // The raw value is higher when dry and lower when wet.
  // We can map it to a percentage to make it more intuitive.
  int moisturePercentage = map(sensorValue, 1023, 400, 0, 100); 
  // Note: You may need to calibrate the min/max values (1023, 400) for your specific sensor and soil.

  Serial.print("Raw Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisturePercentage);
  Serial.println("%");
  
  delay(1000);
}
