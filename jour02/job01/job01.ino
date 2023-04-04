#include <LiquidCrystal.h>

LiquidCrystal lcd(11, 12, 2, 3, 4, 5);

void setup()
{
  lcd.begin(16, 2);           // set up the LCD 16x2
  lcd.print("hello, world!"); // print a message to the LCD
}

void loop() {}