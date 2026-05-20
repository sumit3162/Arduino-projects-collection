# Project 20: Flex Sensor Glove - Pin Connections

## Components Needed
- 1 x Flex Sensor
- 1 x 10kΩ Resistor
- 1 x LED
- 1 x 220Ω Resistor
- Jumper Wires
- A glove to mount the sensor on

## Connections
-   **LED**:
    -   Anode -> 220Ω Resistor -> **Pin 9**
    -   Cathode -> **GND**
-   **Flex Sensor Circuit (Voltage Divider)**:
    -   One pin of the flex sensor to **5V**.
    -   The other pin of the flex sensor to **A0**.
    -   The same pin connected to A0 also connects to one end of the 10kΩ resistor. The other end of the resistor goes to **GND**.
