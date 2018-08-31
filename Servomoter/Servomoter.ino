#include <Servo.h>
int pos = 0;
int servopin = 9;
int servodelay =25;

Servo mypointer;

void setup() {
   Serial.begin(9600);
   mypointer.attach(servopin);
   
}

void loop() {
  Serial.println("what position");
  while(Serial.available() == 0){}
  pos = Serial.parseInt();
  mypointer.write(pos);
  
}
