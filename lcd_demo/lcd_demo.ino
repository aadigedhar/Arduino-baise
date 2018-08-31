#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,5,4,3,2);
int pin = 0;


void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Temperatur");
  delay(2000);
}

void loop() {
  int value = analogRead(pin);
  Serial.print(value);
  Serial.print(" > ");
  float m = (value/1024.0)*5000;
  float c = m/10;
  Serial.print(c);
  Serial.print("degrees Celsius");
  Serial.print((c*9)/5+32);
  Serial.print("degree frhrenheit");
  
  Serial.println("----------------");
  lcd.setCursor(0,1);
 lcd.print(c);
 lcd.print(" Degrees");
 delay(1000);
}
