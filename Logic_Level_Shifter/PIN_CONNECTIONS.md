# Project 63: Logic Level Shifter - Pin Connections

## Components Needed
- 1 x Bi-Directional Logic Level Shifter Module (4 or 8 channel)
- 1 x LED (as the 3.3V device)
- 1 x 220Ω Resistor
- Jumper Wires

## Connections
This component is essential when connecting a 5V microcontroller (like Arduino Uno) to a sensor or module that only works with 3.3V (like many modern GPS, SD card, and RFID modules).

-   **Logic Level Shifter Module**:
    -   **HV** (High Voltage) -> **5V** on Arduino
    -   **LV** (Low Voltage) -> **3.3V** on Arduino
    -   **GND** (near HV) -> **GND** on Arduino
    -   **GND** (near LV) -> **GND** on Arduino
-   **Arduino Side (High Voltage)**:
    -   **Arduino Pin 7** -> A high-voltage channel pin (e.g., **HV1**)
-   **Device Side (Low Voltage)**:
    -   The corresponding low-voltage channel pin (e.g., **LV1**) -> **Anode (+)** of the LED.
    -   **Cathode (-)** of the LED -> **220Ω Resistor** -> **GND** on Arduino.

Now, when Arduino Pin 7 (a 5V signal) goes HIGH, the shifter converts it to a 3.3V signal on the LV1 pin, turning on the LED.
