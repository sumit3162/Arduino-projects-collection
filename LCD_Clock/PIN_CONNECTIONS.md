# Project 25: LCD Clock - Pin Connections

## Components Needed
- 1 x 16x2 LCD Display
- 1 x 10kΩ Potentiometer
- Jumper Wires

## Connections
This project uses the same wiring as the "LCD Hello, World!" project (Project 23).

-   **LCD Pin 1 (VSS)** -> **GND**
-   **LCD Pin 2 (VDD)** -> **5V**
-   **LCD Pin 3 (VO/VEE)** -> **Center pin of 10kΩ Potentiometer**
-   **LCD Pin 4 (RS)** -> **Arduino Pin 12**
-   **LCD Pin 5 (R/W)** -> **GND**
-   **LCD Pin 6 (E)** -> **Arduino Pin 11**
-   **LCD Pin 11 (D4)** -> **Arduino Pin 5**
-   **LCD Pin 12 (D5)** -> **Arduino Pin 4**
-   **LCD Pin 13 (D6)** -> **Arduino Pin 3**
-   **LCD Pin 14 (D7)** -> **Arduino Pin 2**
-   **LCD Pin 15 (A/LED+)** -> **5V**
-   **LCD Pin 16 (K/LED-)** -> **GND**

-   **Potentiometer**:
    -   Outer pins to **5V** and **GND**.
    -   Center pin to **LCD Pin 3**.
