// Project 11: RGB LED Color Mixer
// Mix colors with an RGB LED and three potentiometers.

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

int redPotPin = A0;
int greenPotPin = A1;
int bluePotPin = A2;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int redValue = analogRead(redPotPin);
  int greenValue = analogRead(greenPotPin);
  int blueValue = analogRead(bluePotPin);

  // Map the potentiometer values (0-1023) to the PWM range (0-255)
  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  // Set the color
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);

  delay(10);
}
