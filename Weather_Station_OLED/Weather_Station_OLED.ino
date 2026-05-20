// Project 52: Weather Station on OLED
// Displays temperature and humidity from a DHT sensor on an OLED display.

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define DHTPIN 2
#define DHTTYPE DHT11 // or DHT22

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  delay(2000); // Wait a few seconds between measurements.

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  display.clearDisplay();

  // Display temperature
  display.setCursor(0,0);
  display.print(F("Temp: "));
  display.print(t);
  display.print(F(" C"));

  // Display humidity
  display.setCursor(0, 20);
  display.print(F("Humidity: "));
  display.print(h);
  display.print(F(" %"));
  
  display.display();
}
