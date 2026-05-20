// Project 48: Bluetooth Module Control
// Control an LED via Bluetooth using a serial monitor app on your phone.

int ledPin = 13;
char command;

void setup() {
  Serial.begin(9600); // Default baud rate for HC-05/HC-06
  pinMode(ledPin, OUTPUT);
  Serial.println("Bluetooth Control Ready. Send '1' to turn ON, '0' to turn OFF.");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    
    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED is ON");
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);
      Serial.println("LED is OFF");
    }
  }
}
