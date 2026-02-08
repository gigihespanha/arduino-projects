# Projeto 10 – Medição de Temperatura com LM35 usando AREF

## Descrição
Neste projeto, utilizei o sensor de temperatura **LM35** com o Arduino UNO, configurando a referência analógica externa (**AREF**) para aumentar a precisão das leituras.

A temperatura é lida através do conversor analógico-digital e exibida no **Monitor Serial**.

## Componentes utilizados
- Arduino UNO  
- Sensor de temperatura LM35  
- Protoboard  
- Resistores  
- Jumpers  

## Conceitos aplicados
- Leitura analógica com `analogRead()`
- Uso do pino **AREF**
- Cálculo de tensão e conversão para temperatura
- Comunicação Serial

## Funcionamento
O Arduino lê o valor analógico do LM35 no pino A0, converte a tensão para temperatura em graus Celsius e imprime o resultado no monitor serial a cada 1 segundo.

## Observação
Este projeto tem como objetivo demonstrar como a utilização do AREF pode melhorar a estabilidade e precisão das medições analógicas.
