// include the library code:

#include <LiquidCrystal.h>


// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(11, 12, 2, 3, 4, 5);

byte i;
byte time = 0;
byte timemax = 60;


void setup()

{

  for(i=time; i<=timemax; i++) { pinMode(i, OUTPUT); }

  // definition du nombre de colonnes et de lignes
  lcd.begin(16, 2);

  // selection de la colonne et de la ligne sur laquelle commencer à afficher 
  lcd.setCursor(2, 0);
  lcd.print("AKSHANESREAL");


}


void loop(){
  
  for(i=time; i<=timemax; i++) { 
    
    if (digitalRead(13) == HIGH) {
      lcd.setCursor(7, 1);  
      lcd.print(i);
      delay(1000); // espacement d'une seconde
    }
}
}