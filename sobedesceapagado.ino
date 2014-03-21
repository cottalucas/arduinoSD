void setup(){
  int i;
  
    for(i=0; i<=13; i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  int x;
  y = 1;
  
    for(x=0; x<=13; x++){
    digitalWrite(x,HIGH); //manter pinos acessos
    }

    while (y<200){
    
    for(x=0; x<=13; x++){ //sobe
    digitalWrite(x,0);
    delay(50);
    digitalWrite(x,1);
    }

    for(x=12; x>=0; x--){ //desce
    digitalWrite(x,0);
    delay(50);
    digitalWrite(x,1);
     }
      
    y++; //laço de repetição para não acender tudo de novo

     
   }

}
