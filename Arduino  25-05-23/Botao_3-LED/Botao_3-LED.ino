/* ************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Acionamento de LED por botão com Pull-Up interno 
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int ledR = 13;
const int ledY = 12;
const int ledG = 11;
const int pin_botao = 4;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(pin_botao, INPUT);
}

void loop() {
  int valor = digitalRead(pin_botao);		//
  if (valor == HIGH) {				//
    digitalWrite(ledR, HIGH); // Acende o led
    digitalWrite(ledY, HIGH); // Acende o led
    digitalWrite(ledG, HIGH); // Acende o led
  }
  else {					//
    digitalWrite(ledR, LOW); 			// Apaga o led
    digitalWrite(ledY, LOW);      // Apaga o led    
    digitalWrite(ledG, LOW);      // Apaga o led
  }
}
