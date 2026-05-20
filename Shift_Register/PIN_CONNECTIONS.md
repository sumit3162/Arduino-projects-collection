# Project 65: Shift Register (74HC595) - Pin Connections

## Components Needed
- 1 x 74HC595 Shift Register IC
- 8 x LEDs
- 8 x 220Ω Resistors
- Jumper Wires
- Breadboard

## Connections
-   **74HC595 IC**:
    -   **Pin 16 (VCC)** -> **5V**
    -   **Pin 10 (MR)** -> **5V**
    -   **Pin 8 (GND)** -> **GND**
    -   **Pin 13 (OE)** -> **GND**
-   **Arduino to 74HC595**:
    -   **Arduino Pin 11** -> **Pin 14 (DS / Data)**
    -   **Arduino Pin 12** -> **Pin 11 (SH_CP / Clock)**
    -   **Arduino Pin 8** -> **Pin 12 (ST_CP / Latch)**
-   **LEDs to 74HC595**:
    -   **Pin 15 (Q0)** -> 220Ω Resistor -> LED 1
    -   **Pin 1 (Q1)** -> 220Ω Resistor -> LED 2
    -   **Pin 2 (Q2)** -> 220Ω Resistor -> LED 3
    -   **Pin 3 (Q3)** -> 220Ω Resistor -> LED 4
    -   **Pin 4 (Q4)** -> 220Ω Resistor -> LED 5
    -   **Pin 5 (Q5)** -> 220Ω Resistor -> LED 6
    -   **Pin 6 (Q6)** -> 220Ω Resistor -> LED 7
    -   **Pin 7 (Q7)** -> 220Ω Resistor -> LED 8
    -   Connect all LED cathodes (-) to **GND**.
-   **Daisy Chaining (for more outputs)**:
    -   Connect **Pin 9 (Q7S)** of the first shift register to **Pin 14 (DS)** of the next one.
    -   Connect the Clock and Latch pins in parallel to all shift registers.
