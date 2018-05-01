#include <Servo.h>
#define pinD 9
#define pinI 10
#define pinG 5
#define pinB 6
#define iniTD  90
#define iniTI 90
#define iniTG  90
#define iniTB  90

Servo D;//movimiento adelante atras
Servo I;//comprime el brazo adelante atras 
Servo G;//movimiento de la garra 
Servo B;//movimiento de la base 

void setup() {
  Serial.begin(9600);
  D.attach(pinD);
  I.attach(pinI);
  G.attach(pinB);
  B.attach(pinB);
  // put your setup code here, to run once:
}

void loop() {
  D = Serial.read();
  if(D=='W')
  { 
    D.write(30);
  }else
  {if()
    }
  
  I.write(30);
  G.write(30);
  B.write(30);
 
  // put your main code here, to run repeatedly:

}
