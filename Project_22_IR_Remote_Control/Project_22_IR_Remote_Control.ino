// Project 22: IR Remote Control
// Decodes and prints signals from an IR remote control.
// You need to install the "IRremote" library by shirriff, z3t0, or other contributors.
// You can install it from the Arduino IDE's Library Manager.

#include <IRremote.h>

const int RECV_PIN = 7; // The pin where the IR receiver is connected
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX); // Print the decoded value in hexadecimal
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
