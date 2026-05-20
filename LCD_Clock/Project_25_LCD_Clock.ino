// Project 25: LCD Clock
// A simple digital clock using an LCD.
// Note: This clock is not very accurate as it relies on millis().
// For an accurate clock, you would use a Real-Time Clock (RTC) module.

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  long totalSeconds = millis() / 1000;
  int seconds = totalSeconds % 60;
  int minutes = (totalSeconds / 60) % 60;
  int hours = (totalSeconds / 3600) % 24;

  lcd.setCursor(0, 0);
  lcd.print("Time: ");
  
  if (hours < 10) lcd.print("0");
  lcd.print(hours);
  lcd.print(":");
  
  if (minutes < 10) lcd.print("0");
  lcd.print(minutes);
  lcd.print(":");

  if (seconds < 10) lcd.print("0");
  lcd.print(seconds);

  delay(500);
}
