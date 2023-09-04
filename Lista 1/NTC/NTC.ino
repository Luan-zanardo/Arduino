const int analogPin = A0;    // Pino analógico conectado ao NTC
const float refResistance = 10000;   // Resistência de referência do NTC a 25°C (Ohms)
const float refTemperature = 25.0;   // Temperatura de referência do NTC (°C)
const float betaValue = 3950;        // Coeficiente Beta do NTC

void setup() {
  Serial.
 
begin(9600);
}

void loop() {
  
 
int rawValue = analogRead(analogPin);  // Leitura do valor analógico
  float voltage = rawValue * (5.0 / 1023.0);  // Conversão para tensão (0-5V)
  
  // Cálculo da resistência do NTC usando o divisor de tensão
  float resistance = (5.0 * refResistance) / voltage - refResistance;
  
  
  
// Cálculo da temperatura em Kelvin usando a equação de Steinhart-Hart
  float steinhart = resistance / refResistance;  // R/Ro
  steinhart = log(steinhart);  // ln(R/Ro)
  steinhart /= betaValue;      
  steinhart /= betaValue;
// (1/B) * ln(R/Ro)
  steinhart += 
  steinhart
1.0 / (refTemperature + 273.15);  // + (1/To)
  
 
float temperature = 1.0 / steinhart;  // Inversão e conversão para Kelvin
  temperature -= 273.15;  // Conversão para Celsius
 
print("Temperatura: ");
  Serial.
 
print(temperature);
  Serial.println(" °C");
delay(1000);  // Espera de 1 segundo
}
