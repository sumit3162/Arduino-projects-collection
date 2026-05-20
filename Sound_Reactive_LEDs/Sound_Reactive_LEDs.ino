// Project 67: Sound Reactive LEDs
// Makes an LED strip react to the beat of music.

int soundSensorPin = A0; // Sound sensor analog output
int ledPin = 9; // PWM pin for the LED strip transistor

int threshold = 100; // Sound level threshold to trigger the light

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int totalSound = 0;
  // Take a quick sample of sound
  for(int i=0; i<10; i++) {
    totalSound += abs(analogRead(soundSensorPin) - 512);
    delay(2);
  }
  int soundLevel = totalSound / 10;

  Serial.println(soundLevel);

  if (soundLevel > threshold) {
    // Map the sound level to brightness
    int brightness = map(soundLevel, threshold, 500, 0, 255);
    brightness = constrain(brightness, 0, 255);
    analogWrite(ledPin, brightness);
  } else {
    analogWrite(ledPin, 0);
  }
}
