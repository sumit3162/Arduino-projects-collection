// Project 17: Simon Says Game
// A simple memory game with 4 LEDs and 4 buttons.

// Pins for LEDs and buttons
const int ledPins[] = {2, 3, 4, 5};
const int buttonPins[] = {8, 9, 10, 11};

// Tones for each LED
const int tones[] = {262, 294, 330, 349};
const int buzzerPin = 12;

// Game variables
int sequence[100];
int sequenceLength = 0;
int playerTurn = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP); // Use internal pull-up resistors
  }
  pinMode(buzzerPin, OUTPUT);
  randomSeed(analogRead(0)); // Seed the random number generator
  Serial.begin(9600);
}

void loop() {
  if (sequenceLength == playerTurn) {
    // Computer's turn
    delay(1000);
    addToSequence();
    playSequence();
    playerTurn = 0;
  }
}

void addToSequence() {
  sequence[sequenceLength] = random(4);
  sequenceLength++;
}

void playSequence() {
  for (int i = 0; i < sequenceLength; i++) {
    flashLED(sequence[i]);
  }
}

void flashLED(int ledIndex) {
  digitalWrite(ledPins[ledIndex], HIGH);
  tone(buzzerPin, tones[ledIndex]);
  delay(500);
  digitalWrite(ledPins[ledIndex], LOW);
  noTone(buzzerPin);
  delay(250);
}

void checkPlayerInput() {
  int pressedButton = -1;
  for (int i = 0; i < 4; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      pressedButton = i;
      break;
    }
  }

  if (pressedButton != -1) {
    flashLED(pressedButton);
    if (pressedButton == sequence[playerTurn]) {
      playerTurn++;
    } else {
      // Game over
      gameOver();
    }
    // Wait for button release
    while(digitalRead(buttonPins[pressedButton]) == LOW);
  }
}

void gameOver() {
    Serial.println("Game Over!");
    // Flash all LEDs
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            digitalWrite(ledPins[j], HIGH);
        }
        tone(buzzerPin, 100);
        delay(500);
        for(int j=0; j<4; j++){
            digitalWrite(ledPins[j], LOW);
        }
        noTone(buzzerPin);
        delay(500);
    }
    // Reset game
    sequenceLength = 0;
    playerTurn = 0;
}

// In the main loop, you need to call checkPlayerInput()
void loop() {
  if (sequenceLength == playerTurn) {
    // Computer's turn
    delay(1000);
    addToSequence();
    playSequence();
    playerTurn = 0;
  } else {
    // Player's turn
    checkPlayerInput();
  }
}
