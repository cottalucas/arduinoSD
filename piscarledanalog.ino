void setup(){  

    pinMode(1,OUTPUT);
   
}


void loop(){
    int pinoAnalog = A1;
    int valor;  

    valor = analogRead(pinoAnalog);    

    digitalWrite(1,1);
    delay(valor);

    digitalWrite(1,0);
    delay(valor);
}

- VU Volume

void setup(){
  int i;
  
    for(i=0; i<=13; i++){
    pinMode(i,OUTPUT);
  }
     pinMode(A0,INPUT);
}

void loop(){
  int i;
  int Pino = A0;
  int valor = analogRead(Pino);
  int limite = map(valor, 0, 1023, 0, 13);
  

  for(i=0; i<=limite; i++){
        digitalWrite(i,1);
    }
    
    for(i=13; i>=limite; i--){
        digitalWrite(i,0);
     }

}
