
# Documentação do Código

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

## Robô Fujão 

O robô fujão foi projeto para correr em área livres, quando ele encontra alguma barreira ele tenta se afastar. O seu código foi desenvolvido com base na rede neural SOM (https://github.com/ect-comp/ml/blob/master/aulas/som.md) e contem 36 neurônios. A sua estrutura física é constituida de basicamente dois moteres DC e três sensores ultrassonicos posicionados uma na frente, outra na lateral esquerda e outra na lateral direita. 

O princípio de funcionamento do código do Fujão é ler os valores dos sensores de distância, buscar na rede neural a experiência que melhor representa estas leituras e reagir de acordo com a experiência aprendida pela rede neural. O processo de treinamento da rede neural consistiu em coletar situações especificas (leituras dos sensores) e criar representações destas situações na rede neural SOM. Considerando que cada situação da base de treinamento possui uma ação associada, depois de treinanda, cada neurônio da rede foi associado a uma ações. A situação ou estado do robô é representado pela leitura dos sensores. As situações e as ações foram gravadas em uma base de dados (txt). A base foi organizada em 4 colunas, sendo as três primeiras para as leituras dos sensores e a quarta coluna para a ação do robô (andar para frente, girar para esquerda, girar para direita ou andar para trás). 



### Fotos 


<img src="https://github.com/user-attachments/assets/2784fc58-9e08-4a90-baff-bf03099f39f6" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/976c097d-568d-43c4-8eaf-c778bd85b558" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/fa619228-6c57-43da-a839-768b0796d353" alt="Fujão" width="600" >
<img src="https://github.com/user-attachments/assets/8f52d818-617f-4ae6-b65e-2315c9801059" alt="Fujão" width="600" >



