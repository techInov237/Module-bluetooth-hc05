#include <SoftwareSerial.h>

int relais = PD7;
char messageRecu;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(relais, OUTPUT);
digitalWrite(relais, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()){
while(Serial.available()){
  delay(3);
  messageRecu = Serial.read();}
  }
    if(messageRecu == 1){
      digitalWrite(relais, HIGH);
      }
    if (messageRecu == 2){
      digitalWrite(relais, LOW);
      }
}
