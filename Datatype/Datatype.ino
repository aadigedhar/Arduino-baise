int a;
float b;
String c;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("enter your");
  a = Serial.parseInt();
  b = Serial.parseFloat();
  c = Serial.readString();
  Serial.println(a);
  Serial.println(b);
  Serial.println(c); 
}
