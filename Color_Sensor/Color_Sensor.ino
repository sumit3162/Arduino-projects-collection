// Project 56: Color Sensor (TCS3200/TCS230)
// Detects the color of an object and prints the RGB values.

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Set frequency scaling to 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  
  Serial.begin(9600);
}

void loop() {
  // Read Red
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  redValue = pulseIn(sensorOut, LOW);
  
  // Read Green
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  greenValue = pulseIn(sensorOut, LOW);
  
  // Read Blue
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  blueValue = pulseIn(sensorOut, LOW);

  Serial.print("R = ");
  Serial.print(redValue);
  Serial.print(" | G = ");
  Serial.print(greenValue);
  Serial.print(" | B = ");
  Serial.println(blueValue);
  delay(500);
}
