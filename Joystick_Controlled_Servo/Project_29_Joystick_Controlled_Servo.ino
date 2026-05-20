// Project 29: Joystick Controlled Servo
// Controls a servo's position using a joystick.

#include <Servo.h>

Servo myServo;
int joyXPin = A0; // Joystick X-axis
int servoPin = 9;

void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int joyValue = analogRead(joyXPin);
  
  // Map the joystick value (0-1023) to the servo angle (0-180)
  int servoAngle = map(joyValue, 0, 1023, 0, 180);
  
  myServo.write(servoAngle);
  
  Serial.print("Joystick: ");
  Serial.print(joyValue);
  Serial.print("  Servo: ");
  Serial.println(servoAngle);
  
  delay(15);
}
