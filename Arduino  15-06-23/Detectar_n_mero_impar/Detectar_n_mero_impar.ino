/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int led_verde = 11;        
const int botao_cinza = 2;     
const int botao_verde  = 4;
const int botao_vermelho  = 7;

void setup() {       
  pinMode(led_verde, OUTPUT);
  pinMode(botao_cinza, INPUT);   
  pinMode(botao_verde, INPUT);
  pinMode(botao_vermelho, INPUT);
}
void loop() {
  bool a = digitalRead(botao_cinza);
  bool b = digitalRead(botao_verde);
  bool c = digitalRead(botao_vermelho);
  if ((!a && !b && c)||(!a && b && !c)||(a && !b && !c)||(a && b && c)) {                       
  digitalWrite(led_verde, HIGH);                
  }
  else {
    digitalWrite(led_verde,LOW);
  }}
