// Project 36: Gas Sensor Alarm
// Detects combustible gases with an MQ-2 sensor and sounds an alarm.

int gasSensorPin = A0;
int buzzerPin = 8;
int ledPin = 13;
int threshold = 400; // Adjust this threshold based on your sensor's readings in clean air

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(gasSensorPin);
  Serial.print("Gas Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
    tone(buzzerPin, 1000); // Sound the buzzer
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}
