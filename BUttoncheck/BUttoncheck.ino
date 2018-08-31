int led = 12;
int button = 4;

void setup() {
    pinMode(led,OUTPUT);
    pinMode(button,INPUT);
}

void loop() {
  if(digitalRead(button) == HIGH)
  {
    digitalWrite(led,HIGH); 
   delay(3000);
  }
 else if(digitalRead(button) == LOW)
  {
    digitalWrite(led,LOW); 
    
  }
}
