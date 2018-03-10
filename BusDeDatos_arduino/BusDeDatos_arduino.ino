void setup() {
  Serial.begin(9600);
  Serial.println("Hola Mundo");
}

void loop() {
 if(Serial.available()){
   char Letra = Serial.read();
   Serial.print(Letra);
   if(Letra =='H'){
    digitalWrite(13,1);
   }
   else if(Letra == 'L'){
    digitalWrite(13,0);
   }
 }
}
