#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>

// OLED display configuration for 0.42" SSD1306 (72x40)
// I2C pins for ESP32-C3
#define SDA_PIN 6
#define SCL_PIN 7

// Initialize u8g2 object for I2C communication
U8G2_SSD1306_72X40_ER_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  // Initialize serial for debugging
  Serial.begin(115200);
  delay(1000);
  Serial.println("\n\nFishtank Mini - Starting up...");
  
  // Initialize I2C and OLED display
  Wire.begin(SDA_PIN, SCL_PIN);
  u8g2.begin();
  
  // Display startup message
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_6x10_tf);  // Small font for 0.42" display
  u8g2.drawStr(0, 10, "Fish Tank");
  u8g2.drawStr(0, 20, "Mini");
  u8g2.drawStr(0, 30, "Starting...");
  u8g2.sendBuffer();
  
  Serial.println("Setup complete!");
}

void loop() {
  // Example: Update display with some info
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_6x10_tf);
  
  u8g2.drawStr(0, 10, "Status: OK");
  u8g2.drawStr(0, 20, "Temp: 25C");
  u8g2.drawStr(0, 30, "pH: 7.0");
  
  u8g2.sendBuffer();
  
  delay(1000);
}