int porta = A0;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int valor;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(porta, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valor = analogRead(porta);
  Serial.println(valor);

  if(valor < 150)
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW);
    
  if(valor < 200)
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW);
    
  if(valor < 250)
    digitalWrite(led3, HIGH);
  else
    digitalWrite(led3, LOW);
    
  if(valor < 290)
    digitalWrite(led4, HIGH);
  else
    digitalWrite(led4, LOW);
}
