void setup (){
int x;

for (x=1; x<=13; x++){ 
    pinMode(x,OUTPUT); //declaração do modo de saida
    }
}

void loop(){
int i;
y = 1;

for (i=1; i<=13; i++){
    digitalWrite(x,DOWN); //setando pinos em descida
    }

while(y<200){
    for (i=1; i<=13; i++){
    digitalWrite(i,1);
    delay(50);
    digitalWrite(i,0);
    }

    for (i=12; i>=0; i--){
    digitalWrite(i,1);
    delay(50);
    digitalWrite(i,0);
     }
    

    y++  //laço de repetição para não apagar tudo de novo
    }

}
