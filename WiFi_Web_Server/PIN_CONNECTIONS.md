# Project 49: WiFi Web Server - Board and Setup

## Board Needed
-   **ESP8266 Based Board**: This code is intended for a standalone ESP8266 board like a **NodeMCU** or **Wemos D1 Mini**, not for an Arduino Uno with a WiFi shield.

## Setup Instructions
1.  **Install ESP8266 Board Support**:
    -   In the Arduino IDE, go to `File > Preferences`.
    -   In "Additional Boards Manager URLs", add: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
    -   Go to `Tools > Board > Boards Manager...`.
    -   Search for "esp8266" and install the package.
2.  **Select Your Board**:
    -   Go to `Tools > Board` and select your specific ESP8266 board (e.g., "NodeMCU 1.0 (ESP-12E Module)").
3.  **Update WiFi Credentials**:
    -   In the `.ino` file, change `YOUR_WIFI_SSID` and `YOUR_WIFI_PASSWORD` to your actual WiFi network name and password.
4.  **Upload and Run**:
    -   Upload the code to your ESP8266 board.
    -   Open the Serial Monitor (set to 115200 baud).
    -   The board will connect to your WiFi and print its IP address.
    -   Enter that IP address into a web browser on the same network to see the control page.

## Connections
-   No external connections are needed. The code uses the built-in LED on the ESP8266 board (usually connected to pin D4).
