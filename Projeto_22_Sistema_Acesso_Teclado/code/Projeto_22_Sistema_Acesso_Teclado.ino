#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Display LCD I2C
LiquidCrystal_I2C LCD1(0x26, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// Configuração do teclado
const byte Linhas = 4;
const byte Colunas = 4;

char matrizTeclado[Linhas][Colunas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinosLinhas[Linhas] = {9, 8, 7, 6};
byte pinosColunas[Colunas] = {5, 4, 3, 2};

Keypad teclado = Keypad(makeKeymap(matrizTeclado), pinosLinhas, pinosColunas, Linhas, Colunas);

const byte LED = 10;

String Senha = "1928";
String NumeroDigitado = "";
byte TamanhoDaSenha = 4;
byte TamanhoDoNumeroDigitado = 0;

void setup() {
  LCD1.begin(16, 2);
  pinMode(LED, OUTPUT);

  LCD1.setCursor(3, 0);
  LCD1.print("Sistema de");
  LCD1.setCursor(5, 1);
  LCD1.print("Acesso");
  delay(2000);
  LCD1.clear();
}

void loop() {
  obtemSenha();
}

void obtemSenha() {
  char tecla = teclado.getKey();

  if (tecla) {
    NumeroDigitado += tecla;
    TamanhoDoNumeroDigitado++;
  }

  LCD1.setCursor(1, 0);
  LCD1.print("Digite a Senha");
  LCD1.setCursor(6, 1);
  LCD1.print(NumeroDigitado);

  if (TamanhoDoNumeroDigitado >= TamanhoDaSenha) {
    if (NumeroDigitado == Senha) {
      senhaCorreta();
    } else {
      senhaErrada();
    }
    TamanhoDoNumeroDigitado = 0;
  }
}

void senhaCorreta() {
  LCD1.clear();
  LCD1.setCursor(0, 0);
  LCD1.print("Senha correta");
  LCD1.setCursor(0, 1);
  LCD1.print("Acesso permitido");
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  LCD1.clear();
  NumeroDigitado = "";
}

void senhaErrada() {
  LCD1.clear();
  LCD1.setCursor(0, 0);
  LCD1.print("Senha incorreta");
  LCD1.setCursor(0, 1);
  LCD1.print("Acesso negado");
  delay(1000);
  LCD1.clear();
  NumeroDigitado = "";
}
