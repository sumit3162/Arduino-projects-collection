# Project 48: Bluetooth Module Control - Pin Connections

## Components Needed
- 1 x HC-05 or HC-06 Bluetooth Module
- Jumper Wires

## How to Use
1.  Wire the circuit and upload the code.
2.  On your smartphone, install a "Bluetooth Serial Terminal" app.
3.  Pair your phone with the HC-05/HC-06 module (default password is usually "1234" or "0000").
4.  Connect to the module from the app.
5.  Send '1' to turn the Arduino's onboard LED on, and '0' to turn it off.

## Connections
-   **HC-05/HC-06 Module** -> **Arduino Uno/Nano**
    -   **VCC** -> **5V**
    -   **GND** -> **GND**
    -   **TXD** (Transmit) -> **RX (Pin 0)** on Arduino
    -   **RXD** (Receive) -> **TX (Pin 1)** on Arduino

**Important**: You must disconnect the RX and TX wires while uploading the sketch to the Arduino, as they use the same serial port. Reconnect them after the upload is complete.
