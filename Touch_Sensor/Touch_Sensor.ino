// Project 39: Touch Sensor
// Toggles an LED on and off with a touch sensor.

int touchSensorPin = 2; // Digital pin for the touch sensor
int ledPin = 8;

boolean ledState = LOW;
boolean lastTouchState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  pinMode(touchSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int reading = digitalRead(touchSensorPin);

  if (reading != lastTouchState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading == HIGH) {
      ledState = !ledState; // Toggle the LED state
      digitalWrite(ledPin, ledState);
      // Wait for the finger to be removed to prevent multiple toggles
      while(digitalRead(touchSensorPin) == HIGH) {
        delay(10);
      }
    }
  }
  lastTouchState = reading;
}
