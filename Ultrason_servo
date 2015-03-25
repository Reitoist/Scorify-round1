#include <Servo.h>
int  trig =13, echo =12;
Servo s;
void setup() {
  s.attach(9);
  Serial.begin (9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trig, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= 180 || distance <= 0)
   s.write(0);
  else 
    s.write(distance);
  delay(500);
}
