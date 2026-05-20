# Project 41: Vibration Motor - Pin Connections

## Components Needed
- 1 x Small Vibration Motor (e.g., from an old phone)
- 1 x NPN Transistor (e.g., 2N2222, BC547)
- 1 x 1kΩ Resistor
- 1 x Diode (e.g., 1N4001)
- Jumper Wires

## Connections
-   **Arduino Pin 9** -> **1kΩ Resistor** -> **Base** of the NPN transistor.
-   **Emitter** of the transistor -> **GND** on Arduino.
-   **Collector** of the transistor -> One terminal of the **vibration motor**.
-   The other terminal of the **vibration motor** -> **5V** on Arduino.
-   Place the **diode** in parallel with the motor, with the cathode (stripe) connected to 5V and the anode connected to the transistor's collector. This is a flyback diode to protect the transistor from voltage spikes.
