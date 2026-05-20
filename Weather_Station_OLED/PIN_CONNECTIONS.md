# Project 52: Weather Station on OLED - Pin Connections

## Components Needed
- 1 x 0.96" I2C OLED Display
- 1 x DHT11 or DHT22 Temperature and Humidity Sensor
- 1 x 10kΩ Resistor (for DHT sensor)
- Jumper Wires

## Libraries Needed
- **Adafruit GFX**
- **Adafruit SSD1306**
- **DHT sensor library** by Adafruit

## Connections
-   **OLED Display**: Same as Project 51.
    -   VCC -> 5V
    -   GND -> GND
    -   SDA -> A4
    -   SCL -> A5
-   **DHT Sensor**:
    -   Pin 1 (VCC) -> **5V**
    -   Pin 2 (Data) -> **10kΩ Resistor** -> **5V**
    -   Pin 2 (Data) -> **Arduino Pin 2**
    -   Pin 4 (GND) -> **GND**
    -   (Pin 3 is not used)
