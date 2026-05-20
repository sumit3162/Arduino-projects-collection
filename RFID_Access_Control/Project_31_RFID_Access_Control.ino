// Project 31: RFID Access Control
// Grants access (green LED) for a specific RFID tag and denies access (red LED) for others.

#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
#define GREEN_LED 7
#define RED_LED 8

MFRC522 mfrc522(SS_PIN, RST_PIN);

// This is the UID of the master card that will be granted access.
// Replace it with the UID of your card.
String masterCard = " C4 24 3B 1B"; 

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  Serial.println("Scan your card...");
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial()) {
    delay(50);
    return;
  }

  String scannedUID = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    scannedUID.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    scannedUID.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  scannedUID.toUpperCase();

  Serial.print("Scanned UID: ");
  Serial.println(scannedUID);

  if (scannedUID.substring(1) == masterCard.substring(1)) { // Compare UIDs
    Serial.println("Access Granted!");
    digitalWrite(GREEN_LED, HIGH);
    delay(2000);
    digitalWrite(GREEN_LED, LOW);
  } else {
    Serial.println("Access Denied!");
    digitalWrite(RED_LED, HIGH);
    delay(2000);
    digitalWrite(RED_LED, LOW);
  }
}
