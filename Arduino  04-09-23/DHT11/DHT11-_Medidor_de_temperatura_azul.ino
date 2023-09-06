#include "DHT.h"

const int led = 13;

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);
}

void loop()
{
  float t = dht.readTemperature();
  Serial.println(t);
  
  if(t > 27)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
