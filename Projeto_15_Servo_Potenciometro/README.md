# Projeto 15 – Controle de Servo Motor com Potenciômetro

## Descrição
Neste projeto, um servo motor é controlado por um potenciômetro sem o uso de bibliotecas específicas.
O controle do ângulo do servo é feito manualmente através da função `digitalWrite()` e `delayMicroseconds()`.

## Componentes Utilizados
- Arduino UNO  
- Servo motor  
- Potenciômetro (1kΩ a 50kΩ)  
- Protoboard  
- Jumpers  

## Funcionamento
O potenciômetro define a posição do servo motor.
O Arduino lê o valor analógico e converte em pulsos de tempo que determinam o ângulo do servo.

## Observação
Este projeto não utiliza a biblioteca Servo.h, permitindo entender o funcionamento do controle PWM manual.
