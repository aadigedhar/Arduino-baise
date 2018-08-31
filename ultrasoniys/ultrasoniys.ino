int trigpin = 13;
int echopin = 11;
float pingtime;
float speedofsound;
float targetdistance = 6;

void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  pingtime = pulseIn(echopin,HIGH);
  speedofsound = 2*targetdistance/pingtime;
  speedofsound = speedofsound/63360*1000000*3600;
  Serial.print("the speed of sound is :");
  Serial.print(speedofsound);
  Serial.print("miles per hours");
  delay(3000);
}
