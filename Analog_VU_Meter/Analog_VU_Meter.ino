// Project 66: Analog VU Meter
// Moves a servo like a classic analog VU (Volume Unit) meter based on sound level.

#include <Servo.h>

int soundSensorPin = A0;
Servo vuServo;

void setup() {
  vuServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(soundSensorPin);
  
  // Get the amplitude of the sound
  int soundLevel = abs(sensorValue - 512); // 512 is the "zero" point
  
  // Map the sound level to a servo angle
  // You will need to adjust the '100' based on your environment's noise level
  int servoAngle = map(soundLevel, 0, 100, 0, 180);
  
  // Constrain the angle to prevent servo damage
  servoAngle = constrain(servoAngle, 0, 180);
  
  vuServo.write(servoAngle);
  
  Serial.println(soundLevel);
  delay(10);
}
