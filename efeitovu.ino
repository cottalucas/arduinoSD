void setup(){
  int i;
  
    for(i=0; i<=13; i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  int x;
  
    for(x=0; x<=13; x++){
    digitalWrite(x,1);
    delay(100);
  }
  for(x=13; x>0; x--){
    digitalWrite(x,0);
    delay(100);
  }
}
