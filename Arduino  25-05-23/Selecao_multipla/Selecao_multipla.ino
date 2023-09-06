/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Seleção multipla
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int led_vermelho = 13;			//
const int led_verde = 11;			//
const int led_amarelo = 12;			//
char led;					//

void setup() {
  pinMode(led_vermelho, OUTPUT);		//
  pinMode(led_verde, OUTPUT);			//
  pinMode(led_amarelo, OUTPUT);			//
  Serial.begin(115200); 			// Definição da velocide de transmissão em 115200 bps
}

void loop() {
  if (Serial.available()) {			//
    led = Serial.read();			//
    switch (led) {				//
      case 'R': digitalWrite(led_vermelho, HIGH);	// Acende led
        break;						//
      case 'r': digitalWrite(led_vermelho, LOW);	// Apaga led
        break;
      case 'G': digitalWrite(led_verde, HIGH);		// Acende led
        break;
      case 'g': digitalWrite(led_verde, LOW);		// Apaga led
        break;
      case 'Y': digitalWrite(led_amarelo, HIGH);	// Acende led
        break;
      case 'y': digitalWrite(led_amarelo, LOW);		// Apaga led
        break;
      default: Serial.println("Nenhum led selecionado!!!"); //
       break;
    }
  }
}
