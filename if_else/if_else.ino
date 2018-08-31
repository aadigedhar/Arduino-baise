int a = 2;
int b = 3;
int c = 4;
int t;
int pin = A0;
int readvalue;
int writevalve;

void setup() {
  pinMode(pin,INPUT);
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("enter the integer number");
  while(Serial.available() == 0){   
  }
  t = Serial.parseInt();
  
   if(t ==3)
  {
    readvalue = analogRead(pin);
  writevalve = (255./1023.)*readvalue;
 
    analogWrite(a,writevalve);
    Serial.println(writevalve);
  }
  else if(t<3)
  {
    readvalue = analogRead(pin);
  writevalve = (255./1023.)*readvalue;
 
    analogWrite(b,writevalve);
    Serial.println(writevalve);
   }
  else
  {
    
    analogWrite(c,writevalve);
    Serial.println(writevalve);
  }
}
