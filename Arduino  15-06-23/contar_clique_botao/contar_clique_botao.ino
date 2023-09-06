/*************************************************************************
Colégio SATC
Curso Técnico em Informática
Disciplina: Sistemas Embarcados
Turma: 2137
Professor: Marcos Antonio Jeremias Coelho
Autor: Luan Zuchinali Zanardo
************************************************************************ */
const int pin_botao0 = 4;
const int pin_botao1 = 2;     

int contador = 0;
bool aux0 = 0;
bool aux1 = 0;

void setup() {       
  pinMode(pin_botao0, INPUT);
  pinMode(pin_botao1, INPUT);
  Serial.begin(115200);
}
void loop() {
  bool mais = digitalRead(pin_botao0);
  bool menos = digitalRead(pin_botao1);

  if (mais == true) {
    if (aux0 == false){
    contador++;
    Serial.print("Contador = ");
    Serial.println(contador);
    aux0 = 1;
    }
  }
  else  {
    aux0 = 0;
  }
    if (menos == true) {
    if (aux1 == false){
    contador--;
    Serial.print("Contador = ");
    Serial.println(contador);
    aux1 = 1;
    }
  }
  else  {
    aux1 = 0;
  }
}
  
