# Project 67: Sound Reactive LEDs - Pin Connections

## Components Needed
- 1 x Microphone Sound Sensor Module
- 1 x 12V LED Strip (single color)
- 1 x N-Channel MOSFET (e.g., IRLZ44N, TIP120)
- 1 x 12V Power Supply
- Jumper Wires

## Connections
-   **Sound Sensor Module**:
    -   **A0** -> **A0** on Arduino
    -   **VCC** -> **5V** on Arduino
    -   **GND** -> **GND** on Arduino
-   **MOSFET and LED Strip**:
    -   **MOSFET Gate** -> **Pin 9** on Arduino
    -   **MOSFET Drain** -> **Negative (-)** terminal of the LED strip.
    -   **MOSFET Source** -> **GND** of the 12V power supply AND **GND** on Arduino.
    -   **Positive (+)** terminal of the LED strip -> **Positive (+)** of the 12V power supply.
    -   **Negative (-)** of the 12V power supply -> **GND** on Arduino.

**IMPORTANT**: You must connect the ground of the Arduino to the ground of the external 12V power supply.
