# Project 53: NeoPixel Ring - Pin Connections

## Components Needed
- 1 x NeoPixel Ring (e.g., 16 or 24 pixel version)
- Jumper Wires

## Library Needed
- **Adafruit NeoPixel**: Install from the Arduino IDE's Library Manager.

## Connections
-   **NeoPixel Ring**:
    -   **VCC** or **5V** -> **5V** on Arduino
    -   **GND** -> **GND** on Arduino
    -   **DI** (Data In) -> **Pin 6** on Arduino

**Power Warning**: If you are driving many pixels (>20) or at high brightness, you should power the ring from a separate 5V power supply, not from the Arduino's 5V pin. Connect the grounds of the Arduino and the external power supply together.
