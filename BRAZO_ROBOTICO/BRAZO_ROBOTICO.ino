#include <Servo.h>

Servo servoderecha;//servo lado derecho
Servo servoizquierda;//servo lado izquierdo
Servo servogarra;//servo de la garra
Servo servobase;//servo de la base


int val;    

void setup() {

  servoderecha.write(60);
  servogarra.attach(9);  
  servoderecha.attach(10);
  servoizquierda.attach(11);
  servoizquierda.write(0);
  servobase.attach(12);
  servobase.write(0);
  Serial.begin(9600);
}

