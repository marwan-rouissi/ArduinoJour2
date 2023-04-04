#include <LiquidCrystal.h> 
int Vpin=A1;
float voltage;
float volts;
LiquidCrystal lcd(11, 12, 2, 3, 4, 5);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
}
void loop() {
voltage = analogRead(Vpin);
  volts = voltage/1023*5.0;
  Serial.println(volts);
  lcd.print("voltage = ");
  lcd.print(volts);
  delay(200);
  lcd.clear();
}