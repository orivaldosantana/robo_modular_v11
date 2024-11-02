
## Configuração dos Pinos 

### Ponte H 

| Ponte H L9110  | Arduino | 
| --------------- | --------------- | 
| B-1A | 13 | 
| B-1B | 12 |
| G  | GND  | 
| VCC | Vin (5v) | 
| A-1A | 11 | 
| A-1B | 10 | 

Motor A - Esquerdo  
* Velocidade PWM do Motor A --> A_IA  --> 11 
* Direção do Motor A        --> A_IB  --> 10

Motor B - Direito 
* Velocidade PWM do Motor B --> B_IA  -->  13
* Direção do Motor B        --> B_IB  -->  12 

### Sensor de distância (Ultrassom) 

| Sensor de distância frontal | Arduino |
| --------------- | --------------- | 
| GND | GND  | 
| Trig  | 9 | 
| Echo  | 8 |
| Vcc | 5v | 

### Sensores de Linha 

| Sensor de Linha Esquerdo | Arduino |
| --------------- | --------------- | 
| G  | GND  | 
| V+ | 5v | 
| S  | 4 | 


| Sensor de Linha Direito | Arduino |
| --------------- | --------------- | 
| G  | GND  | 
| V+ | 5v | 
| S  | 5 | 
