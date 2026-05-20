# Project 23: LCD "Hello, World!" - Pin Connections

## Components Needed
- 1 x 16x2 LCD Display
- 1 x 10kΩ Potentiometer (for contrast)
- Jumper Wires

## Connections
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
-   **LCD Pin 15 (A/LED+)** -> **5V** (through a 220Ω resistor if needed, some LCDs have it built-in)
-   **LCD Pin 16 (K/LED-)** -> **GND**

-   **Potentiometer**:
    -   The two outer pins connect to **5V** and **GND**.
    -   The center pin connects to **LCD Pin 3**.
