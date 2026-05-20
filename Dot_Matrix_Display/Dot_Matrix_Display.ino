// Project 47: Dot Matrix Display
// Scrolls text on an 8x8 MAX7219 Dot Matrix Display.
// Needs the "LedControl" library.

#include "LedControl.h"

// Pins: DIN, CLK, CS, Number of displays
LedControl lc = LedControl(12, 11, 10, 1);

void setup() {
  lc.shutdown(0, false);       // Wake up display
  lc.setIntensity(0, 8);       // Set brightness (0-15)
  lc.clearDisplay(0);          // Clear display
}

void loop() {
  scrollText("Hello World ");
}

void scrollText(char *text) {
  for (int i = 0; i < (strlen(text) * 8); i++) {
    lc.clearDisplay(0);
    writeText(text, i);
    delay(100);
  }
}

void writeText(char *text, int offset) {
  for (int i = 0; i < strlen(text); i++) {
    lc.setChar(0, 8 * i - offset, text[i], false);
  }
}
