int saida = 11;
int entrada = A5;
int pontos = 500;
int tempo = 1;
int valor, k;
int led = 7;
float tensao;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(saida, OUTPUT);
  pinMode(entrada, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(saida, LOW);
  for (k=1; k<=pontos; k++) {
    valor = analogRead(entrada);
    tensao = float(valor)*5/1023;
    Serial.println(tensao);
    if(tensao < 4)
      digitalWrite(led, HIGH);
    delay(tempo);
  }
  
  digitalWrite(saida, HIGH);
  for (k=1; k<=pontos; k++) {
    valor = analogRead(entrada);
    tensao = float(valor)*5/1023;
    Serial.println(tensao);
    if(tensao > 4)
      digitalWrite(led, LOW);
    delay(tempo);
  }
}
