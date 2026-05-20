// Project 44: Rotary Encoder
// Reads a rotary encoder and prints its position and direction.

int pinA = 2; // CLK
int pinB = 3; // DT
int encoderPosCount = 0;
int pinALast;
boolean bCW;

void setup() {
  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinALast = digitalRead(pinA);
  Serial.begin(9600);
  Serial.println("Rotary Encoder Test");
}

void loop() {
  int aVal = digitalRead(pinA);
  if (aVal != pinALast) { // Means the knob is rotating
    // If the B pin is different than the A pin, then the direction is counter-clockwise
    if (digitalRead(pinB) != aVal) {
      encoderPosCount--;
      bCW = false;
    } else {
      encoderPosCount++;
      bCW = true;
    }
    Serial.print("Position: ");
    Serial.print(encoderPosCount);
    Serial.print(" | Direction: ");
    if (bCW) {
      Serial.println("Clockwise");
    } else {
      Serial.println("Counter-Clockwise");
    }
  }
  pinALast = aVal;
}
