void setup (){
    pinMode (6,OUTPUT);
}

void loop(){
    for (int i=0; i <= 255; i+5){ //5 volts
        analogWrite(6, i);
        delay(30);
    }

}
