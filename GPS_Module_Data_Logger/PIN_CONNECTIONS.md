# Project 62: GPS Module Data Logger - Pin Connections

## Components Needed
- 1 x GPS Module (e.g., NEO-6M)
- Jumper Wires

## Library Note
This basic example uses `SoftwareSerial` to read the raw NMEA data. For easier parsing of GPS data (like getting just the latitude and longitude), consider using the **TinyGPS++** library by Mikal Hart.

## Connections
-   **GPS Module (NEO-6M)** -> **Arduino Uno/Nano**
    -   **VCC** -> **5V**
    -   **GND** -> **GND**
    -   **TX** (Transmit) -> **Arduino Pin 2 (RX)**
    -   **RX** (Receive) -> **Arduino Pin 3 (TX)**
