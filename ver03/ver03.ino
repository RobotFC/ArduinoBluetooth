/*
 * RFC - Controle do robô
 * Versão simples - 2 pontes H, sem arma
 * Autor: Will Douglas
 *  
 * Equipamento Necessário:
 * - Arduino
 * - Módulo Bluetooth
 * - 2x Ponte H
 * - Jumpers, ferramentas
 */


const int ponteH01DIR = 10, ponteH01ESQ = 9,
          ponteH02DIR = 5,  ponteH02ESQ = 6,
          pwm = 130; // 0 - 255 => 0% - 100%

bool a = 0, b = 0;
char c, d;

void zero(){
  digitalWrite(ponteH01DIR, LOW);
  digitalWrite(ponteH02DIR, LOW);
  digitalWrite(ponteH01ESQ, LOW);
  digitalWrite(ponteH02ESQ, LOW);
}

void up(){
  zero();
  digitalWrite(ponteH01DIR, HIGH);
  digitalWrite(ponteH02DIR, HIGH);
}

void down(){
  zero();
  digitalWrite(ponteH01ESQ, HIGH);
  digitalWrite(ponteH02ESQ, HIGH);
}

void left(){
  zero();
  analogWrite(ponteH01ESQ, pwm);
  analogWrite(ponteH02DIR, pwm);
}

void righ(){
  zero();
  analogWrite(ponteH01DIR, pwm);
  analogWrite(ponteH02ESQ, pwm);
}

SoftwareSerial mySerial = SoftwareSerial(rx, tx);

void setup(){
  pinMode(ponteH01DIR, OUTPUT);
  pinMode(ponteH01ESQ, OUTPUT);
  pinMode(ponteH02DIR, OUTPUT);
  pinMode(ponteH02ESQ, OUTPUT);
  pinMode(rx, INPUT);
  pinMode(tx, OUTPUT);

  d = 'S';
  c = 'S';
}

void loop(){
  while (mySerial.available())
  {
    d = c;
    c = mySerial.read();
    
    if (c != d)
    {
      zero();
      delay(30);
    }
    
    switch(c)
    {
      case 'F':
        up();
        break;
      case 'B':
        down();
        break;
      case 'L':
        left();
        break;
      case 'R':
        righ();
        break;
      case 'S':
        zero();
        break;
      default:
        zero();
        break;
    }
  }
}