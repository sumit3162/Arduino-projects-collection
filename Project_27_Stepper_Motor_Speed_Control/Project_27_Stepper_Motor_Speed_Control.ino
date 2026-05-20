// Project 27: Stepper Motor Speed Control
// Controls the speed and direction of a stepper motor with a potentiometer.

#include <Stepper.h>

const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

int potPin = A0;

void setup() {
  // No setup needed
}

void loop() {
  int potValue = analogRead(potPin);
  
  // Map the potentiometer value to a speed range
  // The Stepper library's setSpeed() takes RPM (revolutions per minute)
  int motorSpeed = map(potValue, 0, 1023, 0, 15);
  
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    // Step 1/100 of a revolution
    myStepper.step(stepsPerRevolution / 100);
  }
}
