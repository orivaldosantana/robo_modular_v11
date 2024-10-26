
#include "Ultrassom.h"

Ultrassom usd(3,2); // ultrassom  
Ultrassom use(7,6); // ultrassom  
Ultrassom usf(9,8); // ultrassom frente 

int vSensores[3]; 

void testeSensores(){
  vSensores[0] = use.dist();
  vSensores[1] = usf.dist(); 
  vSensores[2] = usd.dist(); 

  for( int i = 0; i <3; i++) {
    Serial.print(vSensores[i]);
    Serial.print(" "); 
  }
}

void setup() {
  Serial.begin(9600); 
  usf.setup();
  use.setup();
  usd.setup();
}

void loop() {
  delay(1000); 

  Serial.print("Teste Ultrassom (e f d): "); 
  testeSensores(); 
  Serial.println(""); 
 
}
