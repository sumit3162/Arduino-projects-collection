// Project 10: Servo Motor Control
// Controls a servo motor with a potentiometer.

#include <Servo.h>

Servo myServo;   // Create a servo object
int potPin = A0; // Potentiometer connected to Analog Pin 0
int val;         // Variable to store the value from the potentiometer

void setup() {
  myServo.attach(9); // Attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potPin);           // Reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);    // Scale it to use it with the servo (value between 0 and 180)
  myServo.write(val);                 // Sets the servo position according to the scaled value
  delay(15);                          // Waits for the servo to get there
}
