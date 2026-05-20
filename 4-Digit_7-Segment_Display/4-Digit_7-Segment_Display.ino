// Project 64: 4-Digit 7-Segment Display
// Displays a counting number on a 4-digit 7-segment display using a TM1637 driver.
// Needs the "TM1637" library.

#include <TM1637Display.h>

#define CLK 2
#define DIO 3

TM1637Display display(CLK, DIO);

void setup() {
  display.setBrightness(0x0f); // Set max brightness
}

void loop() {
  for(int i = 0; i <= 9999; i++) {
    display.showNumberDec(i, false); // Display number, no leading zeros
    delay(100);
  }
}
