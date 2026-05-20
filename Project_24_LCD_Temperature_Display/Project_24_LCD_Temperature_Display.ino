// Project 24: LCD Temperature Display
// Shows the temperature from a TMP36 sensor on an LCD.

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int tempPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temperature:");
}

void loop() {
  int reading = analogRead(tempPin);
  float voltage = reading * 5.0 / 1024.0;
  float temperatureC = (voltage - 0.5) * 100;

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C");
  
  delay(1000);
}
