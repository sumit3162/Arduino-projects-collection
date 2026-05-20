// Project 50: SD Card Logger
// Logs analog sensor readings to a file on an SD card.

#include <SPI.h>
#include <SD.h>

const int chipSelect = 4; // CS pin for the SD card module
int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.print("Initializing SD card...");

  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    while (1); // Don't do anything more
  }
  Serial.println("card initialized.");
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  // Open the file. Note that only one file can be open at a time,
  // so you have to close this one before opening another.
  File dataFile = SD.open("datalog.txt", FILE_WRITE);

  // if the file is available, write to it:
  if (dataFile) {
    dataFile.print(millis());
    dataFile.print(",");
    dataFile.println(sensorValue);
    dataFile.close();
    // print to the serial port too:
    Serial.print(millis());
    Serial.print(",");
    Serial.println(sensorValue);
  } else {
    // if the file isn't open, pop up an error:
    Serial.println("error opening datalog.txt");
  }
  
  delay(1000);
}
