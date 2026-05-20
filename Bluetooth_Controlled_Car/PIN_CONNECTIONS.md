# Project 59: Bluetooth Controlled Car - Pin Connections

## Components Needed
- 1 x Robot Chassis with 2 DC Motors
- 1 x L298N Motor Driver Module
- 1 x HC-05 or HC-06 Bluetooth Module
- 1 x Power Source
- Jumper Wires

## How to Use
1.  Wire the circuit and upload the code. **Disconnect BT module TX/RX pins while uploading.**
2.  On your smartphone, install a "Bluetooth RC Car" or similar app that sends character commands (e.g., 'F', 'B', 'L', 'R').
3.  Pair your phone with the HC-05/HC-06 module.
4.  Connect to the module from the app and control the car.

## Connections
-   **L298N Motor Driver**:
    -   **ENA** -> Arduino Pin 9
    -   **IN1** -> Arduino Pin 8
    -   **IN2** -> Arduino Pin 7
    -   **ENB** -> Arduino Pin 3
    -   **IN3** -> Arduino Pin 5
    -   **IN4** -> Arduino Pin 4
    -   **OUT1 & OUT2** -> Left Motor
    -   **OUT3 & OUT4** -> Right Motor
    -   **12V** -> Battery Pack (+)
    -   **GND** -> Battery Pack (-) AND Arduino GND
-   **Bluetooth Module (HC-05/06)**:
    -   VCC -> 5V on Arduino
    -   GND -> GND on Arduino
    -   TXD -> **Arduino RX (Pin 0)**
    -   RXD -> **Arduino TX (Pin 1)**
