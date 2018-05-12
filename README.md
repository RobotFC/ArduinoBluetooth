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

### [Versão 3]
- 2 Pontes H
- Sem armas
- SoftwareSerial (rx/tx nos pinos 7 e 8)
- PWM usado para suavizar as curvas

### [Versão 4]
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
