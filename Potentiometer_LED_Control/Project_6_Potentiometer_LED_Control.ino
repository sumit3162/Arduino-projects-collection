// Project 6: Potentiometer LED Control
// Controls the brightness of an LED using a potentiometer.

int potPin = A0; // Potentiometer connected to Analog Pin 0
int ledPin = 9;  // LED connected to PWM Pin 9
int val = 0;     // Variable to store the value from the potentiometer

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);           // Read the potentiometer value (0-1023)
  val = map(val, 0, 1023, 0, 255);    // Map it to the PWM range (0-255)
  analogWrite(ledPin, val);           // Set the LED brightness
  delay(10);
}
