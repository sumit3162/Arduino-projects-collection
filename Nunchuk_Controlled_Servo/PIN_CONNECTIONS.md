# Project 60: Nunchuk Controlled Servo - Pin Connections

## Components Needed
- 1 x Wii Nunchuk Controller
- 1 x Nunchuk Adapter (or you can cut the cable)
- 2 x SG90 Servo Motors
- Jumper Wires

## Library Needed
- **ArduinoNunchuk**: Install from the Arduino IDE's Library Manager.

## Connections
-   **Nunchuk Adapter** -> **Arduino Uno/Nano**
    -   **VCC (3.3V)** -> **3.3V**
    -   **GND** -> **GND**
    -   **SDA** -> **A4**
    -   **SCL** -> **A5**
-   **Servos**:
    -   **Pan Servo**:
        -   Signal -> **Pin 9**
        -   VCC -> 5V
        -   GND -> GND
    -   **Tilt Servo**:
        -   Signal -> **Pin 10**
        -   VCC -> 5V
        -   GND -> GND
