/*
    Project name : LCD 16x4 Display
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-lcd-16x4-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 4);
  // Print a message to the LCD
  lcd.setCursor(0, 0);
  lcd.print("Line 1: Hello");
  lcd.setCursor(0, 1);
  lcd.print("Line 2: World!");
  lcd.setCursor(0, 2);
  lcd.print("Line 3: Arduino");
  lcd.setCursor(0, 3);
  lcd.print("Line 4: Nano");
}

void loop() {
  // Example of how to change the display dynamically
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LCD 16x4 Display");
  lcd.setCursor(0, 1);
  lcd.print("Line 2 Updated");
  lcd.setCursor(0, 2);
  lcd.print("Line 3 Updated");
  lcd.setCursor(0, 3);
  lcd.print("Line 4 Updated");
  delay(2000);
  
  // Clear the display and print initial messages again
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Line 1: Hello");
  lcd.setCursor(0, 1);
  lcd.print("Line 2: World!");
  lcd.setCursor(0, 2);
  lcd.print("Line 3: Arduino");
  lcd.setCursor(0, 3);
  lcd.print("Line 4: Nano");
}
