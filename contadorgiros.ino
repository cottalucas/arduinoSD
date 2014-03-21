void setup (){
    pinMode (1,OUTPUT); 
     
}

void loop(){
        int pinoAnalog = A0;
            int Janela = 0;

        Janela = analogRead(pinoAnalog)
 
          digitalWrite(1, 1);
        delay(Janela);
           digitalWrite(1, 0);
        delay(Janela);
               digitalWrite(1, 1);
        delay(Janela);
           digitalWrite(1, 0);
        delay(Janela);

}

- Contador de Giros

int pinoAnalog = A0;  //usado pra criar o delay 
int saidaAnalog = 9;     // usado como saída analógica
int Delay = 0;
int contador = 0;
float Janela = 0;
int zm = 1; //controle do tempo


void setup (){
    pinMode (1,OUTPUT);  //LED
    pinMode (9,OUTPUT);  //saída analógica
     
}

void loop(){
 	Janela = 0 ;
	contador = 0;
	
	
	while (Janela <=  60000){	
         
		Delay = analogRead(pinoAnalog) //delay <- valor analógico
     
          digitalWrite(1, 1);
          contador = digitalRead(1) + contador   //contador de 'giros'
        delay(Delay);
          digitalWrite(1, 0);
        delay(Delay);
            
                
         analogWrite(saidaAnalog, contador); //escrita analógica

	  Janela = millis()/zm; //janela de tempo



}

print(Janela);

zm = zm + 1;

}
