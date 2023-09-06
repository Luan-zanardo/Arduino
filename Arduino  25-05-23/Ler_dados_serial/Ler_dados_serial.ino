/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Programa: Leitura de dados pela serial
Autor: Luan Zuchinali Zanardo
************************************************************************ */

int valor = 0;					// 

void setup() {
  Serial.begin(115200);  			// Definição da velocide de transmissão em 115200 bps
}

void loop() {
  Serial.println("Digite um numero ");		// 
  while (!Serial.available()) {
  }
  valor = Serial.read(); 			// leitura de dados do monitor serial
  Serial.print("O numero digitado foi ");	// 
  Serial.write(valor);				// 
  Serial.println();				// 
}
