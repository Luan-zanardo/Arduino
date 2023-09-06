/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int valvula = 5;
const int motor1 = 4;
const int motor2 = 3;
const int alarme = 2;
bool sensorA = 13;
bool sensorB = 12;
bool sensorC = 11;
bool sensorD = 10;

bool A = 0;
bool B = 0;
bool C = 0;
bool D = 0;

void setup() {
 pinMode(valvula,OUTPUT);
 pinMode(motor1,OUTPUT);
 pinMode(motor2,OUTPUT);
 pinMode(alarme,OUTPUT);
 pinMode(sensorA,INPUT);
 pinMode(sensorB,INPUT);
 pinMode(sensorC,INPUT);
 pinMode(sensorD,INPUT);
}

void loop() {
  bool A = digitalRead(sensorA);
  bool B = digitalRead(sensorB);
  bool C = digitalRead(sensorC);
  bool D = digitalRead(sensorD);

  if (( A == 1) && (B == 1) && (C == 1) && (D == 1)){
    digitalWrite(motor1, 1);
    digitalWrite(motor2, 1);
    digitalWrite(valvula, 0);
    digitalWrite(alarme, 0);
  }
  else {
    digitalWrite(motor1, 0);
    digitalWrite(motor2, 0);
    digitalWrite(valvula, 1);
    digitalWrite(alarme, 1);
  }
}
