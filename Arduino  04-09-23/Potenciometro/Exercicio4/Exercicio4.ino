int valor, valor1, valor2, valor3;
int vermelho = 11;
int verde = 10;
int azul = 9;
int aux = 0;


void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0)
  {
    valor = Serial.parseInt();
    
    if(aux == 0)
    {
      valor1 = valor;
      aux = 1;
    }else if(aux == 1)
    {
      valor2 = valor;
      aux = 2;
    }else if(aux == 2)
    {
      valor3 = valor;
      aux = 0;
    }
    
    analogWrite(vermelho, valor1);
    analogWrite(verde, valor2);
    analogWrite(azul, valor3);
    
  }
}
