/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int eletrovalvulaR = 13;
const int nivel_baixo = 2;     
const int nivel_alto  = 4;

void setup() {       
  pinMode(eletrovalvulaR, OUTPUT);
  pinMode(nivel_baixo, INPUT);   
  pinMode(nivel_alto, INPUT);
}
void loop() {
  bool valorB = digitalRead(nivel_baixo);
  bool valorA = digitalRead(nivel_alto);
  if ((!valorA)&&(!valorB)) {
    digitalWrite(eletrovalvulaR,HIGH);
  }
  else  {
    digitalWrite(eletrovalvulaR,LOW);
  }}
