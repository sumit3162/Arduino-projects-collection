// Project 49: WiFi Web Server
// Creates a simple web server using an ESP8266 module to control an LED.
// This code is for a standalone ESP8266 board (like NodeMCU or Wemos D1 Mini), not an Arduino Uno.

#include <ESP8266WiFi.h>

const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

WiFiServer server(80);

int ledPin = D4; // Built-in LED on many ESP8266 boards

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // Connect to WiFi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");

  // Start the server
  server.begin();
  Serial.println("Server started");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Check for clients
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // Wait for data
  while(!client.available()){
    delay(1);
  }

  // Read the request
  String request = client.readStringUntil('\r');
  client.flush();

  // Control the LED
  if (request.indexOf("/LED=ON") != -1)  {
    digitalWrite(ledPin, HIGH);
  }
  if (request.indexOf("/LED=OFF") != -1){
    digitalWrite(ledPin, LOW);
  }

  // Return an HTML response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); //  IMPORTANT
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<a href=\"/LED=ON\"\"><button>Turn On </button></a>");
  client.println("<a href=\"/LED=OFF\"\"><button>Turn Off </button></a><br />");
  client.println("</html>");
  delay(1);
}
