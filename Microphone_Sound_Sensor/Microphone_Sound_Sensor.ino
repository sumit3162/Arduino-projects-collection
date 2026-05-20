// Project 43: Microphone Sound Sensor
// Detects sound above a certain level and lights up an LED.

int soundSensorPin = A0; // Analog pin for the sound sensor
int ledPin = 13;

int threshold = 50; // Threshold for sound detection, adjust as needed

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(soundSensorPin);
  
  // The sensor outputs a value around 512 with no sound.
  // We look for deviations from this center point.
  int soundLevel = abs(sensorValue - 512);

  Serial.println(soundLevel);

  if (soundLevel > threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(50);
}
