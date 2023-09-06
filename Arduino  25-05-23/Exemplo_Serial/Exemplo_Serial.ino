/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Exemplo de comunicação serial
Autor: Luan Zuchinali Zanardo
************************************************************************ */

void setup() {
  Serial.begin(57600); 			// Definição da velocide de transmissão em 57600 bps
}

void loop() {
  Serial.println("Ola, seu nome, seja bem vindo ao maravilhoso mundo do Arduino");	// Imprime na serial
}
