// Project 14: DC Motor Speed Control
// Controls the speed of a DC motor using a transistor and PWM.

int motorPin = 9; // Motor connected to PWM Pin 9
int potPin = A0;  // Potentiometer to control speed

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int speed = analogRead(potPin); // Read potentiometer value (0-1023)
  speed = map(speed, 0, 1023, 0, 255); // Map to PWM range
  analogWrite(motorPin, speed); // Set motor speed
}
