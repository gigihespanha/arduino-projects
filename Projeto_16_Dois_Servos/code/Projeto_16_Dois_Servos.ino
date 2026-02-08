#include <Servo.h>  // com essa biblioteca podemos criar até 12 servos

Servo Servo1;  // criar um objeto
Servo Servo2;  // criar outro objeto

void setup() {
  Servo1.attach(2);  // vinculei o servo 1 ao pino 2 do arduino
  Servo2.attach(3);  // vinculei o servo 2 ao pino 3 do arduino
}

void loop() {
  Servo1.write(90);   // vai para 90 graus
  Servo2.write(90);   // vai para 90 graus
  delay(1000);

  Servo1.write(180);  // vai para 180 graus
  Servo2.write(180);  // vai para 180 graus
  delay(1000);
}
