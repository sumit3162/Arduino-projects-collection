# Project 58: Obstacle Avoiding Robot - Pin Connections

## Components Needed
- 1 x Robot Chassis with 2 DC Motors
- 1 x L298N Motor Driver Module
- 1 x HC-SR04 Ultrasonic Sensor
- 1 x Power Source (e.g., 4xAA battery pack)
- Jumper Wires

## Connections
-   **L298N Motor Driver**:
    -   **ENA** -> **Arduino Pin 9**
    -   **IN1** -> **Arduino Pin 8**
    -   **IN2** -> **Arduino Pin 7**
    -   **ENB** -> **Arduino Pin 3**
    -   **IN3** -> **Arduino Pin 5**
    -   **IN4** -> **Arduino Pin 4**
    -   **OUT1 & OUT2** -> Left Motor
    -   **OUT3 & OUT4** -> Right Motor
    -   **12V** -> Positive terminal of your battery pack.
    -   **GND** -> Negative terminal of your battery pack AND **GND** on Arduino.
-   **Ultrasonic Sensor (HC-SR04)**:
    -   VCC -> 5V on Arduino
    -   Trig -> **Arduino Pin 11**
    -   Echo -> **Arduino Pin 10**
    -   GND -> GND on Arduino
