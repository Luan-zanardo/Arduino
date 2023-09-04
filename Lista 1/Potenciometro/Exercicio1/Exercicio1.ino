const int pin_entrada = A0;
const int pin_azul = 11;
const int pin_verde = 12;
const int pin_vermelho = 13;
int valor;
float tensao;

void setup() {
  pinMode(pin_entrada, INPUT);
  pinMode(pin_azul, OUTPUT);
  pinMode(pin_verde, OUTPUT);
  pinMode(pin_vermelho, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  valor = analogRead(pin_entrada);
  tensao = float(valor)*5/1023;
  Serial.print("Tensao = ");
  Serial.print(tensao);
  Serial.println(" V");

  if (tensao < 0.5 ) {
    digitalWrite(pin_azul, 1);
    digitalWrite(pin_verde, 0);
    digitalWrite(pin_vermelho, 0);
  }
  else if (tensao <= 4.5) {
    digitalWrite(pin_azul, 0);
    digitalWrite(pin_verde, 1);
    digitalWrite(pin_vermelho, 0);
  }
  else {
    digitalWrite(pin_azul, 0);
    digitalWrite(pin_verde, 0);
    digitalWrite(pin_vermelho, 1);
  }
}
