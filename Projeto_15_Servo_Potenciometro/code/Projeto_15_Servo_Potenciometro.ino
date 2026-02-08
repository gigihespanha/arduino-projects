/*
 Projeto 15 - Controlando Servo Motor com Potenciômetro
*/

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {

  // Pulso para posicionar o servo
  digitalWrite(2, HIGH);
  delayMicroseconds(map(analogRead(A0), 0, 1023, 580, 2300));
  digitalWrite(2, LOW);

  // Tempo para completar o ciclo do servo
  delayMicroseconds(5000);
}
