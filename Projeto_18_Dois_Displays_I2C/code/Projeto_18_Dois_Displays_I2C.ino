#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Instância dos dois displays com endereços diferentes
LiquidCrystal_I2C LCD1(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
LiquidCrystal_I2C LCD2(0x26, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  // Inicia comunicação dos dois displays
  LCD1.begin(16, 2);
  LCD2.begin(16, 2);
}

void loop() {
  LCD1.setBacklight(HIGH);
  LCD2.setBacklight(HIGH);

  LCD1.setCursor(0, 0);
  LCD1.print("LCD1");

  LCD2.setCursor(0, 0);
  LCD2.print("LCD2");

  delay(2000);

  LCD1.clear();
  LCD2.clear();
}
