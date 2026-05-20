// Project 7: Photoresistor Light Detector
// Turns an LED on when it's dark.

int photoPin = A0; // Photoresistor connected to Analog Pin 0
int ledPin = 13;   // LED connected to Pin 13
int threshold = 500; // Adjust this value to set the darkness threshold

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // For debugging
}

void loop() {
  int lightValue = analogRead(photoPin);
  Serial.println(lightValue); // Print the value to the serial monitor

  if (lightValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
  delay(100);
}
