# Arduino + Bluetooth

Tutorial de como controlar o robô usando Arduino, Bluetooth, e aplicativo Android.

## Versão do código

Escolha uma das versões abaixo, de acordo com o que o seu robô precisa, e faça o Upload do código para seu Arduino.

### [Versão 1](/ver01/ver01.ino)
- 2 Pontes H
- Sem armas
- Sem SoftwareSerial (rx/rx nos pinos 0 e 1)
- PWM usado para suavizar as curvas

### [Versão 2](/ver02/ver02.ino)
- 3 Pontes H
- Arma usando ponte H
- Sem SoftwareSerial
- PWM usado para suavizar as curvas

### [Versão 3](/ver03/ver03.ino)
- 2 Pontes H
- Sem armas
- SoftwareSerial (rx/tx nos pinos 7 e 8)
- PWM usado para suavizar as curvas

### [Versão 4](/ver04/ver04.ino)
- 3 Pontes H
- Arma usando ponte H
- SoftwareSerial (rx/tx nos pinos 7 e 8)
- PWM usado para suavizar as curvas

## Circuito

## Aplicativo Android

No seu Smartphone, procure e baixe o aplicativo [Arduino Bluetooth RC Car](https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller).

Essa é sua interface:
<p align="center">
  <img src="https://raw.githubusercontent.com/RobotFC/ArduinoBluetooth/master/static/01.jpg" width="598" height="336"/>
</p>

Ligue o Bluetooth no celular, clique na engrenagem, e na opção *Connect to car*. 
<p align="center">
  <img src="https://raw.githubusercontent.com/RobotFC/ArduinoBluetooth/master/static/02.jpg" width="598" height="336"/>
</p>

Com o código gravado no Arduino, Smartphone pareado com o módulo bluetooth, e circuito corretamente montado, tudo pronto! Você já deve conseguir controlar seu robô para a competição, utilizando bluetooth.

Você consegue controlar o robô para frente, para trás, e girar para a direita ou para a esquerda, o robô não anda em diagonais.

**Atenção**: Se você escolheu o código com **ponte H extra como arma**, os botões de carro ligam e desligam a arma para um sentido e para outro. O botão parte da frente do carro, quando acionado, acente uma luz azul, e a parte de trás, acende uma luz vermelha, dentro do aplicativo.


