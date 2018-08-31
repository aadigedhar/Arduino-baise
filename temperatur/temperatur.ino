int pin = 0;

void setup() {
  Serial.begin(9600);
  
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
  delay(2000);
  Serial.println("----------------");
}
