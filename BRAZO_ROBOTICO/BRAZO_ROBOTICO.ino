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
void loop() {
Serial.println(servoderecha.read());
  val = Serial.read();
    
if(val=='a'){
servoderecha.write(0);
delay(20);}
  if(val=='q'){
  servoderecha.write(90);
  delay(20);}
    if(val=='w'){
    servoizquierda.write(0);
    delay(20);}
      
