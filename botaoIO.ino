void setup (){
    pinMode(1,INPUT);
    pinMode(2,OUTPUT); 
   
}

void loop(){
    boolean valor = digitalRead(1);        //Lendo a entrada do pino 1
    digitalWrite(2, valor);

}
