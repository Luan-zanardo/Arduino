#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13);

const int aquecimento = 12;
const int entrada = 11;
const int saida = 10;
const int alerta = 9;
const int alarme = 8;


void setup()
{
  Serial.begin(9600);
  pinMode(aquecimento, OUTPUT);
  pinMode(entrada, OUTPUT);
  pinMode(saida, OUTPUT);
  pinMode(alarme, OUTPUT);
  pinMode(alerta, OUTPUT);
}

void loop() 
{
  int distance = ultrasonic.read();
  Serial.println(distance);
  int x = map(distance, 0, 50, 0, 100);
  int y = map(distance, 0, 50, 0, 100);
  analogWrite(led1, x);
  analogWrite(led2, y);

  //tanque vazio, sensor lê 100 cm

  
  if(distance > 80) //alerta
  {
    digitalWrite(alerta, HIGH);
  }
  else
  {
    digitalWrite(alerta, LOW);
  }

  if(distance > 90) //alarme
  {
    digitalWrite(alarme, HIGH);
  }
  else
  {
    digitalWrite(alarme, LOW);
  }
}
