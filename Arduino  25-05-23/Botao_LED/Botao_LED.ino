/* ************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Acionamento de LED por botão com Pull-Up interno 
Autor: Luan Zuchinali Zanardo
************************************************************************ */
const int led3 = 13;				//
const int led2 = 12;
const int led1 = 11;
const int pin_botao2 = 2;			//
const int pin_botao4 = 4;

void setup() {
  pinMode(led1, OUTPUT);				//
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pin_botao2, INPUT);		//
  pinMode(pin_botao4, INPUT);
}

void loop() {
  bool valor1 = digitalRead(pin_botao2);		//
  bool valor2 = digitalRead(pin_botao4);
  if ((valor1 == HIGH) && (valor2 == HIGH)) {				//
    digitalWrite(led1, HIGH); // Acende o led
  }
  else {					//
    digitalWrite(led1, LOW); 			// Apaga o led
 }
  if ((valor1 == HIGH) || (valor2 == HIGH)) {          //
    digitalWrite(led2, HIGH);              // Acende o led
  }
  else {
    digitalWrite(led2, LOW);       // Apaga o led
  }
  if ((!valor1 && valor2) || (valor1 && !valor2)) {          //
    digitalWrite(led3, HIGH);              // Acende o led
  }
   else {
    digitalWrite(led3, LOW);       // Apaga o led
  } 
 }
    
  
