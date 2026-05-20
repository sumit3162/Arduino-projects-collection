// Project 65: Shift Register (74HC595)
// Controls 8 LEDs with only 3 Arduino pins using a shift register.

int latchPin = 8; // (ST_CP)
int clockPin = 12; // (SH_CP)
int dataPin = 11; // (DS)

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // Count from 0 to 255 and display the binary value on the LEDs
  for (int numberToDisplay = 0; numberToDisplay < 256; numberToDisplay++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);
    digitalWrite(latchPin, HIGH);
    delay(500);
  }
}
