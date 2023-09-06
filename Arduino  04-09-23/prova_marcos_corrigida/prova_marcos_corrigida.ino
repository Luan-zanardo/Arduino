#include "DHT.h"
#include <Ultrasonic.h>

#define DHTPIN 2
#define DHTTYPE DHT11

const int pin_vent = 6;
const int pin_vsaida = 7;
const int pin_aque = 8;
const int pin_visual = 9;
const int pin_sonoro = 10;

DHT joaozinho(DHTPIN, DHTTYPE);
Ultrassonic pedrinho(12, 13);

void setup(){
  joaozinho.begin();
  pinMode(pin_vent, OUTPUT);
  pinMode(pin_vsaida, OUTPUT);
  pinMode(pin_aque, OUTPUT);
  pinMode(pin_visual, OUTPUT);
  pinMode(pin_sonoro, OUTPUT);
}

void loop(){
  float t = joaozinho.readTemperature
  int distance = pedrinho.read();
  if(distance > 0){
    digitalWrite(pint_vent, HIGH)
  }else{
    digitalWrite(pint_vent, LOW)
  }

  if(distance < 60 && t > 25&& t < 27){
    digitalWrite(pin_vsaida, HIGH);
  }else{
    digitalWrite(pin_vsaida, LOW);
  }

  if(t < 25 && distance < 90){
    digitalWrite(pin_aque, HIGH);
  }else{
    digitalWrite(pin_aque, LOW);
  }

  if(distance > 80){
    digitalWrite(pin_visual, HIGH);
  }else{
    digitalWrite(pin_visual, LOW);
  }

  if(distance > 90){
    digitalWrite(pin_sonoro, HIGH);
  }else{
    digitalWrite(pin_sonoro, LOW);
  }
}
