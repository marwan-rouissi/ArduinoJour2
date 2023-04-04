// include the library code:

#include <LiquidCrystal.h>


// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(11, 12, 2, 3, 4, 5);


//----------------- store the custom characters in arrays ---------------------//

byte smile[8] = 

              {

                0b00000,

                0b00000,

                0b01010,

                0b00000,

                0b10001,

                0b01110,

                0b00000,

                0b00000

              };

void setup()

{

  //---- create custom characters ----//

  lcd.createChar(1, smile);


  lcd.setCursor(0, 1);

  lcd.write(" ");lcd.write(" ");lcd.write(" ");lcd.write(" ");lcd.write(" ");
  lcd.write(" ");lcd.write(" ");lcd.write(1);

}

void loop()

{}