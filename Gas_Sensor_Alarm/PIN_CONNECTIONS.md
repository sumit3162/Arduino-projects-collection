# Project 36: Gas Sensor Alarm - Pin Connections

## Components Needed
- 1 x MQ-2 Gas Sensor Module
- 1 x Piezo Buzzer
- 1 x LED (optional, the onboard LED on pin 13 is used in the code)
- Jumper Wires

## Connections
-   **MQ-2 Gas Sensor Module**:
    -   **A0** (Analog Output) -> **A0** on Arduino
    -   **VCC** -> **5V** on Arduino
    -   **GND** -> **GND** on Arduino
-   **Buzzer**:
    -   Positive (+) leg -> **Pin 8**
    -   Negative (-) leg -> **GND**
-   **LED**:
    -   The code uses the built-in LED on **Pin 13**. No external LED is required unless you want to add one.
