int potPen=A0;
int readValue;
float voltage;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPen,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(potPen);
  voltage = (5.0/1023.0)*readValue;
  Serial.println(voltage);
  delay(1000);

}
