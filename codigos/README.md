
# Robô Fujão 

## Fotos 


<img src="https://github.com/user-attachments/assets/2784fc58-9e08-4a90-baff-bf03099f39f6" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/976c097d-568d-43c4-8eaf-c778bd85b558" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/fa619228-6c57-43da-a839-768b0796d353" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/8f52d818-617f-4ae6-b65e-2315c9801059" alt="Fujão" width="600" >




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

| Sensor de distância esquerdo | Arduino |
| --------------- | --------------- | 
| GND | GND  | 
| Trig  | 7 | 
| Echo  | 6 |
| Vcc | 5v | 


| Sensor de distância direito | Arduino |
| --------------- | --------------- | 
| GND | GND  | 
| Trig  | 3 | 
| Echo  | 2 |
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
