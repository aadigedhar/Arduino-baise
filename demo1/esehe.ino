#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,5,4,3,2);
int counter = 0;
String s = "Gedhar_ganga";

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("aaditya");
  
}

void loop() {
  int c = s.length();
  for(counter =0;counter<c;counter++)
  {
   lcd.setCursor(counter,1);
   //lcd.print("               ");
    lcd.print(s[counter]);
    delay(1000);
  }
}
