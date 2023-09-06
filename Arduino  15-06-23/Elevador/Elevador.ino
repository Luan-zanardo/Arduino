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
const int botao_vermelho2  = 8;

void setup() {       
  pinMode(led_verde, OUTPUT);
  pinMode(botao_cinza, INPUT);   
  pinMode(botao_verde, INPUT);
  pinMode(botao_vermelho, INPUT);
  pinMode(botao_vermelho2, INPUT);
}
void loop() {
  bool f1 = digitalRead(botao_cinza);
  bool f2 = digitalRead(botao_verde);
  bool f3 = digitalRead(botao_vermelho);
  bool m = digitalRead(botao_vermelho2);
  if ((!m && !f1 && !f2 && f3)||(!m && !f1 && f2 && !f3)||(!m && f1 && !f2 && !f3)) {                       
  digitalWrite(led_verde, HIGH);                
  }
  else {
    digitalWrite(led_verde,LOW);
  }}
