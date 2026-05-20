// Project 60: Nunchuk Controlled Servo
// Uses a Wii Nunchuk to control the pan and tilt of two servos.
// Needs the "ArduinoNunchuk" library.

#include <Wire.h>
#include <ArduinoNunchuk.h>

Servo panServo;
Servo tiltServo;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  nunchuk.init();
  panServo.attach(9);
  tiltServo.attach(10);
}

void loop() {
  if (nunchuk.update()) {
    int panAngle = map(nunchuk.analogX, 35, 225, 0, 180);
    int tiltAngle = map(nunchuk.analogY, 35, 220, 0, 180);

    panServo.write(panAngle);
    tiltServo.write(tiltAngle);

    Serial.print(panAngle);
    Serial.print(" | ");
    Serial.println(tiltAngle);
  }
  delay(50);
}
