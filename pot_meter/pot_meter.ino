

int ledpen = 3;
int potpan = A0;
int readValue;
int writevalue;

void setup() {
  Serial.begin(9600);
  pinMode(potpan,INPUT);
  pinMode(ledpen,OUTPUT);
}

void loop() {
  readValue = analogRead(potpan);
  writevalue  = (255./1023.)*readValue;
  analogWrite(ledpen,writevalue);
  Serial.println(writevalue);
 
}
