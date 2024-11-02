#include "l9110.h"
#include "RedeSOM.h"
#include "Ultrassom.h"


L9110 motoresRobo(11, 10, 13, 12);

Ultrassom usd(3,2); // ultrassom  
Ultrassom use(7,6); // ultrassom  
Ultrassom usf(9,8); // ultrassom frente 

int vSensores[3]; 

RedeSOM som;

void setup()
{
  Serial.begin(9600);
  usf.setup();
  use.setup();
  usd.setup();
}

void executaMovimento(char resposta){
  if(resposta == 'f'){
    motoresRobo.frente(255,40);
  }else if(resposta == 'r'){
    motoresRobo.re(255,40);
  }else if(resposta == 'e'){
    motoresRobo.esquerda(255,30);
  }else if(resposta == 'd'){
    motoresRobo.direita(255,30);
  }else{
    motoresRobo.parar();
  }
}

void testeMelhorResposta() {
  int vc[] = {18, 68, 22}; 
  Serial.println(som.melhorResposta(vc)); 
}

void movimentaComRedeSOM(){
  vSensores[0] = use.dist();
  vSensores[1] = usf.dist(); 
  vSensores[2] = usd.dist(); 
  
  char c = som.melhorResposta(vSensores); 
  Serial.print("Sensores: ");  
  for( int i=0; i <3; i++) {
    Serial.print(vSensores[i]);
    Serial.print(" "); 
  }
  Serial.println(c);   
  
  Serial.println("Movimento: ");
  Serial.println(c);

  executaMovimento(c);
  
}

void loop()
{
  movimentaComRedeSOM();

}