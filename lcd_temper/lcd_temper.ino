#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,5,4,3,2);
int counter = 0;
int pin = 7;

void setup() {
   Serial.begin(9600);
   digitalWrite(pin,OUTPUT);
   lcd.begin(16,2);
   lcd.setCursor(0,0);
   lcd.print("traget distance");
 
}

void loop() {
  int value = analogRead(pin);
  float m = (value/1024.0)*5000;
  float c = m/10;
  lcd.setCursor(0,1);
 lcd.print("               ");
  lcd.setCursor(0,1);
  lcd.print(c);
  delay(2000);
}
