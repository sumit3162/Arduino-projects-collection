# Project 22: IR Remote Control - Pin Connections

## Components Needed
- 1 x IR Receiver (e.g., TSOP38238)
- 1 x IR Remote Control (any common remote will work)
- Jumper Wires

## Library Needed
- **IRremote**: You must install this library through the Arduino IDE's Library Manager. Search for "IRremote" and install the one by shirriff, z3t0, or a similar well-known version.

## Connections
-   **IR Receiver** (pinout may vary, check your datasheet):
    -   **VCC** or Power pin -> **5V**
    -   **GND** pin -> **GND**
    -   **Data** or Signal pin -> **Pin 7**
