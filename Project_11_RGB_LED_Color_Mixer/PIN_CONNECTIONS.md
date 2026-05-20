# Project 11: RGB LED Color Mixer - Pin Connections

## Components Needed
- 1 x Common Cathode RGB LED
- 3 x 220Ω Resistors
- 3 x 10kΩ Potentiometers
- Jumper Wires

## Connections
-   **RGB LED**:
    -   Red Pin -> 220Ω Resistor -> **Pin 11** (PWM)
    -   Green Pin -> 220Ω Resistor -> **Pin 10** (PWM)
    -   Blue Pin -> 220Ω Resistor -> **Pin 9** (PWM)
    -   Common Cathode -> **GND**
-   **Potentiometers**:
    -   **Red Control Potentiometer**:
        -   Wiper -> **A0**
        -   One outer pin to **5V**, the other to **GND**.
    -   **Green Control Potentiometer**:
        -   Wiper -> **A1**
        -   One outer pin to **5V**, the other to **GND**.
    -   **Blue Control Potentiometer**:
        -   Wiper -> **A2**
        -   One outer pin to **5V**, the other to **GND**.
