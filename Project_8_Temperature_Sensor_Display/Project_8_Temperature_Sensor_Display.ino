// Project 8: Temperature Sensor Display
// Reads temperature from a TMP36 sensor and displays it on the Serial Monitor.

int tempPin = A0; // TMP36 sensor connected to Analog Pin 0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(tempPin);

  // Converting the reading to voltage
  float voltage = reading * 5.0;
  voltage /= 1024.0;

  // Converting voltage to temperature in Celsius
  float temperatureC = (voltage - 0.5) * 100;

  // Converting Celsius to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  Serial.print(temperatureC);
  Serial.print(" degrees C, ");
  Serial.print(temperatureF);
  Serial.println(" degrees F");

  delay(1000); // Wait a second
}
