#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int lcdAddress = 0x27;
const int lcdColumns = 16;
const int lcdRows = 2;

LiquidCrystal_I2C lcd(lcdAddress, lcdColumns, lcdRows);

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging

  Serial.println("Initializing LCD...");

  lcd.begin(lcdColumns, lcdRows);
  lcd.backlight();  // Optional: Turn on backlight

  Serial.println("LCD initialized. Printing message...");

  lcd.print("Hello, Arduino!");

  Serial.println("Message printed. Setup complete.");
}

void loop() {
  // Additional code can go here

  delay(1000);
}
