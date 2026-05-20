// Project 62: GPS Module Data Logger
// Reads NMEA sentences from a GPS module and prints them.

#include <SoftwareSerial.h>

// The GPS module is connected to pins 2 and 3
SoftwareSerial gpsSerial(2, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600); // GPS module default baud rate
  Serial.println("GPS Logger Started. Waiting for data...");
}

void loop() {
  // If there is data from the GPS module,
  if (gpsSerial.available() > 0) {
    // read it and send it to the main serial port.
    Serial.write(gpsSerial.read());
  }
}
