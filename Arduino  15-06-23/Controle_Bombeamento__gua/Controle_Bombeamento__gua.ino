/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int bombaA = 2;        
const int alarmeV = 3;
const int nivel_baixo = 11;     
const int nivel_alto  = 12;

void setup() {       
  pinMode(bombaA, OUTPUT);
  pinMode(alarmeV, OUTPUT);
  pinMode(nivel_baixo, INPUT);   
  pinMode(nivel_alto, INPUT);
}
void loop() {
  bool valor1 = digitalRead(nivel_baixo);
  bool valor2 = digitalRead(nivel_alto);
  if (!valor2) {                       
  digitalWrite(bombaA, HIGH);                
  }
  else {
    digitalWrite(bombaA,LOW);
  }
  if (!valor1) {
    digitalWrite(alarmeV, HIGH);
  }
  else {
    digitalWrite(alarmeV,LOW);
  }}
