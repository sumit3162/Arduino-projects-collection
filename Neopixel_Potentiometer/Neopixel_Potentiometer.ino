// Project 54: NeoPixel Potentiometer Control
// Control the color of a NeoPixel strip with three potentiometers (RGB).

#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 16

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int redPotPin = A0;
int greenPotPin = A1;
int bluePotPin = A2;

void setup() {
  pixels.begin();
}

void loop() {
  int redValue = analogRead(redPotPin);
  int greenValue = analogRead(greenPotPin);
  int blueValue = analogRead(bluePotPin);

  // Map the 10-bit analog value (0-1023) to an 8-bit color value (0-255)
  int redColor = map(redValue, 0, 1023, 0, 255);
  int greenColor = map(greenValue, 0, 1023, 0, 255);
  int blueColor = map(blueValue, 0, 1023, 0, 255);

  // Set all pixels to the new color
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));
  }
  pixels.show(); // Send the updated pixel colors to the hardware.
  
  delay(100);
}
