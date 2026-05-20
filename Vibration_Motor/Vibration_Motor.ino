// Project 41: Vibration Motor
// Pulses a small vibration motor.

int motorPin = 9; // Must be a PWM pin

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Vibrate with increasing intensity
  for (int i = 0; i <= 255; i++) {
    analogWrite(motorPin, i);
    delay(10);
  }

  // Vibrate with decreasing intensity
  for (int i = 255; i >= 0; i--) {
    analogWrite(motorPin, i);
    delay(10);
  }
  
  delay(1000);
}
