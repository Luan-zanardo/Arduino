#include <Servo.h>
Servo myservo;
const int sensorPin = A0;
int pos = 0;

void setup() {
  myservo.attach(9);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorVal = analogRead(sensorPin);
  int mapSensorVal = map(sensorVal,0,1023,0,180);
  myservo.write(mapSensorVal);
  delay(15);
}
