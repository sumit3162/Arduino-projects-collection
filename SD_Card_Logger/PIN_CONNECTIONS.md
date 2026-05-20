# Project 50: SD Card Logger - Pin Connections

## Components Needed
- 1 x MicroSD Card Adapter Module
- 1 x MicroSD Card (formatted as FAT16 or FAT32)
- 1 x Potentiometer or any other analog sensor (to provide data)
- Jumper Wires

## Connections
-   **MicroSD Card Module** -> **Arduino Uno/Nano**
    -   **CS** (Chip Select) -> **Pin 4**
    -   **SCK** (Clock) -> **Pin 13**
    -   **MOSI** (Master Out Slave In) -> **Pin 11**
    -   **MISO** (Master In Slave Out) -> **Pin 12**
    -   **VCC** -> **5V**
    -   **GND** -> **GND**
-   **Analog Sensor (e.g., Potentiometer)**:
    -   Signal/Wiper -> **A0**
    -   VCC -> **5V**
    -   GND -> **GND**
