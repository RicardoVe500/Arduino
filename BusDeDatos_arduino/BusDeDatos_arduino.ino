#define BuscarLed 1
#define BuscarNumero 2

int Led = 0;
int Dato = 0;
int EstadoBusqueda = 0;
int boton = 2;


void setup() {
  Serial.begin(9600);
  Serial.println("Hola Mundo");
  pinMode(13,OUTPUT);
  pinMode(botob, INPUT);
}

void loop() {

  //AQUI >>_______<<
  if(digitalRead(boton) == 1){
    Serial,print("H");
    delay(500);
    }

    
 if(Serial.available()){
 char Letra = Serial.read();
 if(Letra == 'L'){
  EstadoBusqueda = BuscarLed;
  }
  else if(Letra == 'D'){
    EstadoBusqueda = BuscarNumero;
    }
    else if(Letra == '.'){
      analogWrite(Led, Dato);
      Serial.print("El led es: ");
      Serial.print(Led);
      Serial.print(" El Dato es: ");
      Serial.println(Dato);
      Led = 0;
      Dato = 0;
      EstadoBusqueda = 0;
      
      }
      else if(Letra >= '0' && Letra <= '9'){
        int NumeroActual = int (Letra - '0');
        if(EstadoBusqueda == BuscarLed){
          Led = Led * 10 + NumeroActual;
          }
          else if(EstadoBusqueda == BuscarNumero){
            Dato = Dato * 10 + NumeroActual;
            }
        }
 }
}
