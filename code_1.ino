
// Declaration de nos 6 LED
int LED2=2,LED3=3, LED4=4, LED5=5, LED6=6, LED7=7;
// tableau qui declare nos 6 LEDs
int bargraph[6] = {LED2, LED3, LED4, LED5, LED6, LED7};
//declare le message recu par le module
char msg_recu;

void setup() {
Serial.begin(9600);
for (int i=2; i<=7; i++) {
  pinMode(i, OUTPUT);
}
            }

void loop(){

  if(Serial.available()){
    while(Serial.available()){
      delay(3);
      msg_recu = Serial.read(); // Lire l'entree
      Serial.println(msg_recu);}
  }
  if(msg_recu == 1){
  for(int i=0; i<=5; i++){
  digitalWrite(bargraph[i], HIGH);
  delay(100);
  digitalWrite(bargraph[i], LOW);
  }
  } 
  if(msg_recu == 2){      
  for(int i=5; i>=0; i--){
  digitalWrite(bargraph[i], HIGH);
  delay(100);
  digitalWrite(bargraph[i], LOW);
  }
  } 
}
  
