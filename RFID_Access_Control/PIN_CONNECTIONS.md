# Project 31: RFID Access Control - Pin Connections

## Components Needed
- 1 x MFRC522 RFID Reader Module
- RFID Cards/Tags
- 1 x Green LED
- 1 x Red LED
- 2 x 220Ω Resistors
- Jumper Wires

## How to Use
1.  First, upload **Project 30 (RFID Card Reader)** to your Arduino.
2.  Open the Serial Monitor and scan the card you want to use as the "master key".
3.  Copy the UID that is printed to the Serial Monitor.
4.  Open the code for this project (Project 31) and paste the UID into the `masterCard` variable, replacing the placeholder.
5.  Upload this project's code to the Arduino.

## Connections
-   **MFRC522 Module**: Same wiring as Project 30.
    -   SDA -> Pin 10
    -   SCK -> Pin 13
    -   MOSI -> Pin 11
    -   MISO -> Pin 12
    -   RST -> Pin 9
    -   GND -> GND
    -   3.3V -> 3.3V
-   **LEDs**:
    -   **Green LED**: Anode (+) -> 220Ω Resistor -> **Pin 7**
    -   **Red LED**: Anode (+) -> 220Ω Resistor -> **Pin 8**
    -   Both LED Cathodes (-) -> **GND**
