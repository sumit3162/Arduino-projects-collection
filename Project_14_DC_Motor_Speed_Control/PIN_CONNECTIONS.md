# Project 14: DC Motor Speed Control - Pin Connections

## Components Needed
- 1 x DC Motor
- 1 x NPN Transistor (e.g., TIP120 or 2N2222)
- 1 x 1N4001 Diode (flyback diode)
- 1 x 1kΩ Resistor
- 1 x 10kΩ Potentiometer
- Jumper Wires
- External Power Supply for the motor (e.g., 9V battery)

## Connections
-   **Potentiometer**:
    -   Wiper -> **A0**
    -   Outer pins to **5V** and **GND** of Arduino.
-   **Motor Control Circuit**:
    -   Arduino **Pin 9** -> 1kΩ Resistor -> **Base** of Transistor.
    -   **Emitter** of Transistor -> **GND** of Arduino and **GND** of external power supply.
    -   **Collector** of Transistor -> One terminal of the DC Motor.
    -   The other terminal of the DC Motor -> **Positive (+)** of the external power supply.
    -   Connect the **Diode** across the motor terminals. The cathode (striped end) should be connected to the positive side of the power supply, and the anode to the collector of the transistor. This is crucial to protect your circuit from voltage spikes.
    -   **Important**: Connect the Arduino's GND to the external power supply's GND.
