// Project 26: Stepper Motor Control
// Rotates a stepper motor one revolution clockwise, then one counter-clockwise.
// Uses the ULN2003 driver board.

#include <Stepper.h>

const int stepsPerRevolution = 2048; // Change this to fit the specifications of your motor

// Initialize the stepper library on pins 8 through 11
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // set the speed at 5 rpm:
  myStepper.setSpeed(5);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
