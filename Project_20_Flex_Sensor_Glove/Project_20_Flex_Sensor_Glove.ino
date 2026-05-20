// Project 20: Flex Sensor Glove
// Controls an LED's brightness with a flex sensor.

int flexPin = A0;
int ledPin = 9; // PWM pin

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(flexPin);
  Serial.println(flexValue);

  // Map the flex sensor reading to the LED's brightness range
  // You will need to experiment to find the min and max values for your sensor
  int brightness = map(flexValue, 600, 900, 0, 255);
  
  // Constrain the value to be within the PWM range
  brightness = constrain(brightness, 0, 255);

  analogWrite(ledPin, brightness);
  delay(50);
}
