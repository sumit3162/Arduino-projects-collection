# Project 30: RFID Card Reader - Pin Connections

## Components Needed
- 1 x MFRC522 RFID Reader Module
- 1 x RFID Card or Tag (usually comes with the module)
- Jumper Wires

## Library Needed
- **MFRC522**: Install this library via the Arduino IDE's Library Manager. Look for the one by **GitHubCommunity**.

## Connections (SPI Interface)
-   **MFRC522 Module** -> **Arduino Uno/Nano**
    -   **SDA** (or SS) -> **Pin 10**
    -   **SCK** -> **Pin 13**
    -   **MOSI** -> **Pin 11**
    -   **MISO** -> **Pin 12**
    -   **RST** -> **Pin 9**
    -   **GND** -> **GND**
    -   **3.3V** -> **3.3V** (Important: Do NOT connect to 5V)
