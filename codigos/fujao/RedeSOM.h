
#ifndef REDESOM_H
#define REDESOM_H
 
#include <Arduino.h>

#define SOM_MAX_L 6
#define SOM_MAX_C 6
#define SOM_MAX_F 3 


class RedeSOM
{
  public:
    SOMArduino( );
    void setup();
    char melhorResposta(int caracteristicas[SOM_MAX_F]);
    void melhorDistancia(int caracteristicas[SOM_MAX_F], int &melhorL, int &melhorC);
    float distancia(int caracteristicas[SOM_MAX_F], int i, int j); 
    char getLabel(int i, int j); 
 

  private:
    int matrizNeuronios[SOM_MAX_L][SOM_MAX_C][SOM_MAX_F] = 
      {
        { {19, 59, 19},  {25, 65, 19},  {49, 62, 25},  {65, 57, 29},  {67, 45, 33},  {67, 38, 34} },
        { {19, 46, 19},  {26, 52, 19},  {43, 55, 29},  {59, 51, 39},  {65, 50, 52},  {65, 28, 53} },
        { {19, 38, 19},  {23, 38, 19},  {35, 45, 31},  {47, 44, 46},  {51, 41, 54},  {52, 33, 55} },
        { {16, 22, 16},  {18, 19, 18},  {22, 24, 28},  {27, 31, 53},  {25, 35, 61},  {26, 31, 65} },
        { {11, 11, 11},  {14, 11, 14},  {17, 13, 22},  {16, 23, 46},  {14, 29, 60},  {11, 26, 66} },
        { {4, 1, 4},  {11, 3, 11},  {18, 3, 20},  {16, 17, 41},  {13, 28, 59},  {10, 34, 67} }
      };  

    char matrizLabels[SOM_MAX_L][SOM_MAX_C] =  
      {
        {'f', 'f', 'e', 'e', 'e', 'e'},
        {'r', 'r', 'f', 'f', 'f', 'e'},
        {'r', 'r', 'r', 'f', 'f', 'f'},
        {'r', 'r', 'r', 'f', 'f', 'f'},
        {'r', 'r', 'r', 'f', 'd', 'd'},
        {'r', 'r', 'r', 'r', 'd', 'd'}
      };  
  
}; 
 
#endif