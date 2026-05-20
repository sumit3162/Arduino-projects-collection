// Project 33: RTC Temperature Logger
// Logs the date, time, and temperature from a DS3231 to the Serial Monitor.

#include <Wire.h>
#include "RTClib.h"

RTC_DS3231 rtc;

void setup () {
  Serial.begin(9600);

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  // The following line can be uncommented to set the time to the compile time.
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  
  Serial.println("Date,Time,Temperature(C)");
}

void loop () {
    DateTime now = rtc.now();
    
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(",");
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.print(",");

    // The DS3231 has a built-in temperature sensor
    Serial.println(rtc.getTemperature());

    delay(5000); // Log every 5 seconds
}
