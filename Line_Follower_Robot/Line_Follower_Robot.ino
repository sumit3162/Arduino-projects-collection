// Project 57: Line Follower Robot
// A simple robot that follows a black line on a white surface.

// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

// Sensor connections
int leftSensor = 2;
int rightSensor = 12;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
}

void loop() {
  int leftVal = digitalRead(leftSensor);
  int rightVal = digitalRead(rightSensor);

  // Assuming LOW means seeing the black line
  if (leftVal == LOW && rightVal == LOW) {
    // Move forward
    moveForward();
  } else if (leftVal == HIGH && rightVal == LOW) {
    // Turn right
    turnRight();
  } else if (leftVal == LOW && rightVal == HIGH) {
    // Turn left
    turnLeft();
  } else {
    // Stop
    stopMotors();
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

void turnRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH); // Motor A backwards
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);  // Motor B forwards
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  // Motor A forwards
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); // Motor B backwards
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
