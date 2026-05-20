// Project 59: Bluetooth Controlled Car
// Control a robot car using a Bluetooth serial app on a smartphone.

// Motor A
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B
int enB = 3;
int in3 = 5;
int in4 = 4;

char command;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  Serial.begin(9600); // For HC-05/HC-06
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    stopMotors(); // Stop first
    
    switch (command) {
      case 'F': // Forward
        moveForward();
        break;
      case 'B': // Backward
        moveBackward();
        break;
      case 'L': // Left
        turnLeft();
        break;
      case 'R': // Right
        turnRight();
        break;
    }
  }
}

void moveForward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
}

void moveBackward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
}

void turnLeft() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
}

void turnRight() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
}

void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
