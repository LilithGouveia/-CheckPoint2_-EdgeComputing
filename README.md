# Sensor de Luminosidade, Temperatura e Humidade, com LCD
Desenvolvido pelo Grupo SoftForge em parceria com a FIAP em 2023.
O código também foi disponibilidado no [ThinkerCad](https://www.tinkercad.com/things/2qor2xkAKCt)

---

## Do que se trata:

O Grupo **SoftForge** está desenvolvendo um protótipo para auxiliar a Vinheria Agnello a manter seus vinhos corretamente climatizados, este projeto é constituído de um sensor de luminosidade que indica o nível da luminosidade do ambiente por um LED, com sua cor variando entre vermelho (Luz alta), amarelo (Luz moderada) e verde (Luz aceitável), e em caso de luz alta, dispara um alarme, A mesma lógica se aplica para controle e monitoramento da humidade e Temperatura.

---

## Dependências:

Para utilizar este protótipo é necessário:

* Possuir o protótipo
* Baixar arduíno IDE para rodar o código.
* Conexão com energia por meio de porta usb.
* Baixar as bibliotecas: **Adafruit_Sensor, DHT, DHT_U, LiquidCrystal_I2C**.

--- 

## Features implementadas:

* Enquanto o ambiente estiver escuro, o LED Verde deve ficar aceso; ​

* Enquanto o ambiente estiver a meia luz, o LED amarelo deve ficar aceso e mensagem de “Ambiente a meia luz” deve ser mostrado no Display; feito​

* Enquanto o ambiente estiver totalmente iluminado, o LED vermelho deve ficar aceso e a mensagem “Ambiente muito claro” deve ser mostrado no display; ​

* Enquanto o ambiente estiver totalmente iluminado, o Buzzer deve ficar ligado continuamente; ​

* Enquanto o ambiente estiver com uma temperatura entre 10°C e 15°C, o Display deve informar “Temperatura OK” e também mostrar o valor da temperatura;  ​

* Enquanto o ambiente estiver com uma umidade entre 50% e 70%, o Display deve informar “Umidade OK”, e também mostrar o valor da umidade; ​

* Os valores apresentados no display devem ser a média de pelo menos 5 leituras dos sensores, e os valores devem ser apresentados a cada 5 segundos; feito​

* Enquanto a temperatura estiver fora da faixa ideal, o LED Amarelo deve ficar aceso e o Buzzer deve ligar continuamente;​

* Enquanto o ambiente estiver com uma temperatura entre 10°C e 15°C, o Display deve informar “Temperatura OK” e também mostrar o valor da temperatura;  ​

* Enquanto o ambiente estiver com uma umidade entre 50% e 70%, o Display deve informar “Umidade OK”, e também mostrar o valor da umidade; ​

* Os valores apresentados no display devem ser a média de pelo menos 5 leituras dos sensores, e os valores devem ser apresentados a cada 5 segundos; feito​

* Enquanto a umidade estiver fora da faixa ideal, o LED Vermelho deve ficar aceso e o Buzzer deve ligar continuamente;​

* Enquanto a umidade estiver fora da faixa ideal, o Display deve informar “Umidade. Alta”, para valores acima de 70% e também mostrar a umidade;​

* Enquanto a umidade estiver fora da faixa ideal, o Display deve informar “Umidade. Baixa”, para valores abaixo de 50% e também mostrar a umidade;​

--- 

## Pessoas desenvolvedoras:

| Aluno  | Rm |
| ----------------- | ------------- |
| Gustavo Cristiano | 551924  |
| Luna Gouvea  | 550836  |
| Rony Ken Nagai  | 551549  |
| Sabrina Flores  | 550781  |
| Tomáz V Carballo | 551417  |

---

**Muito Obrigada!**


