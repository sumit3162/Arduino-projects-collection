// Project 9: Simple Alarm System
// Uses a PIR motion sensor to detect motion and sound a buzzer.

int pirPin = 2;    // PIR sensor output
int buzzerPin = 8; // Buzzer pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    Serial.println("Motion detected!");
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  } else {
    Serial.println("No motion.");
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}
