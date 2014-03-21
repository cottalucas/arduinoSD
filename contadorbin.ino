void setup(){  

    pinMode(1,OUTPUT);

     for(int i=0; i<=13; i++){ // inicializando variaveis de enrada
     pinMode(i, OUTPUT);
    }
     pinMode(A0,INPUT);
}


void loop(){

    int pinoAnalog = A0;    //pino analogico
    int valor; 
    int i;   

    int valor = analogRead(pinoAnalog); 
          
         for(i=0; i<=13; i++){
            digitalWrite(i, valor%2);
            valor = valor/2;
         }
}
