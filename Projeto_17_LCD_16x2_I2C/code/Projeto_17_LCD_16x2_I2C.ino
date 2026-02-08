#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Cria(instancia) o objeto, configura os pinos do display e o endereço 0x27
LiquidCrystal_I2C LCD1(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // Inicia a comunicação com o display e define 16 colunas e 2 linhas
  LCD1.begin(16, 2);
}

void loop() {
  LCD1.setBacklight(HIGH); // Liga a luz de fundo do display

  LCD1.setCursor(0, 0);    // Coluna 0, linha 0
  LCD1.print("Mestres do");

  LCD1.setCursor(0, 1);    // Coluna 0, linha 1
  LCD1.print("Arduino");

  delay(1000);

  LCD1.setBacklight(LOW);  // Desliga a luz de fundo
  delay(1000);
}
