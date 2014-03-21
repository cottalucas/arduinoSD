void setup(){  
    pinMode(1,OUTPUT);
}

void loop(){
    digitalWrite(1,1);
    delay(300);

    digitalWrite(1,0);
    delay(300);
}
