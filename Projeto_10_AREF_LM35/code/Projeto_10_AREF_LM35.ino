/*
 Projeto 10 - Medição de Temperatura com LM35 usando AREF
*/

const int sensorLM35 = A0;
float temperatura = 0;

void setup() {
  Serial.begin(9600);

  // Define o uso da referência externa (AREF)
  analogReference(EXTERNAL);
}

void loop() {
  int valorADC = analogRead(sensorLM35);

  // Converte o valor lido para tensão
  float tensao = valorADC * (5.0 / 1023.0);

  // LM35: 10mV por grau Celsius
  temperatura = tensao * 100;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  delay(1000);
}
