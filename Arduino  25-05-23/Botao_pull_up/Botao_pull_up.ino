/* ************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Botão com Pull-up e envio serial
Autor: Luan Zuchinali Zanardo
************************************************************************ */

const int pin_botao = 8;			//
boolean botao = false;				//

void setup() {
  pinMode(pin_botao, INPUT);			//
  Serial.begin(115200); 			// Definição da velocide de transmissão em 115200 bps
}

void loop() {
  botao = digitalRead(botao);			//
  if (botao == false) {				//
    Serial.println("Botao pressionado!!!");	//
  }
}
