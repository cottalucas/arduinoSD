void setup (){
    int x;
    for(x=0; x<=6; x++){  
    pinMode(x,INPUT);
    }

    int y;
    for(y=7; y<=13; y++){
    pinMode(y,OUTPUT); 
    }
   
}
void loop(){
    int i;
    int j;
    int w =7;
    for (i=0; i<=6; i++){
        boolean valor = digitalRead(i);        //Lendo a entrada do pino 1
        j = (w+i);
            digitalWrite(j, valor);
     }
    
}
