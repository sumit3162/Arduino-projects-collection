# Project 15: Relay Control - Pin Connections

## Components Needed
- 1 x 5V Relay Module
- Jumper Wires
- A device to control (e.g., a lamp with its power cord)

## Connections

**WARNING: This project involves working with mains voltage (120V/240V AC), which is extremely dangerous. If you are not experienced or comfortable with high voltage, DO NOT attempt this. Always unplug the device from the wall before making any connections.**

-   **Relay Module to Arduino**:
    -   **VCC** -> **5V** on Arduino
    -   **GND** -> **GND** on Arduino
    -   **IN** (or Signal) -> **Pin 7** on Arduino

-   **Relay to Device (Lamp)**:
    1.  Unplug the lamp.
    2.  Carefully cut one of the two wires of the lamp's power cord. **Do not cut both.**
    3.  Strip the insulation from the two cut ends.
    4.  Connect one cut end to the **COM** (Common) terminal of the relay.
    5.  Connect the other cut end to the **NO** (Normally Open) terminal of the relay.
    6.  Secure the connections with electrical tape or screw terminals.
