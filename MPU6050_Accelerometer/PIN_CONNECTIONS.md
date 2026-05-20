# Project 55: MPU-6050 Accelerometer & Gyroscope - Pin Connections

## Components Needed
- 1 x MPU-6050 Gyroscope/Accelerometer Module
- Jumper Wires

## Library Note
This project uses the `Wire` library for I2C communication directly. For more advanced applications, consider using a dedicated MPU-6050 library like the one from **Jeff Rowberg** or **Adafruit**.

## Connections (I2C)
-   **MPU-6050 Module** -> **Arduino Uno/Nano**
    -   **VCC** -> **5V**
    -   **GND** -> **GND**
    -   **SCL** (Serial Clock) -> **A5**
    -   **SDA** (Serial Data) -> **A4**
    -   **INT** (Interrupt) -> (not used in this project)
