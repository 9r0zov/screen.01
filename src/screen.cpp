#include "Arduino.h"
#include <Wire.h>

#include <../lib/LiquidCrystal_I2C/LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);

  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("**Hello, world**");
  lcd.setCursor(0, 1);
  lcd.print("****************");
}

void loop() {

}
