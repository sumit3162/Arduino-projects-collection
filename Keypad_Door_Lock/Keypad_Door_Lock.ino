// Project 46: Keypad Door Lock
// A simple door lock system using a keypad and a servo.

#include <Keypad.h>
#include <Servo.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
Servo lockServo;

String password = "1234";
String inputPassword;
int position = 0;

void setup() {
  Serial.begin(9600);
  lockServo.attach(10);
  lockServo.write(0); // Start in locked position
  Serial.println("Enter Password:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print(key);
    inputPassword += key;
    position++;

    if (position == 4) {
      if (inputPassword == password) {
        Serial.println("\nCorrect! Unlocking.");
        lockServo.write(90); // Unlock
        delay(3000);
        lockServo.write(0); // Re-lock
      } else {
        Serial.println("\nWrong Password!");
      }
      // Reset for next attempt
      inputPassword = "";
      position = 0;
      Serial.println("\nEnter Password:");
    }
  }
}
