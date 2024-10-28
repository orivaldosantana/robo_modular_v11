#include "l9110.h"

L9110 motoresRobo(11, 10, 13, 12);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int tempoParado = 2000;
  Serial.println("Frente");
  motoresRobo.frente(255,1000);
  motoresRobo.parar();
  delay(tempoParado);
  Serial.println("Re");
  motoresRobo.re(255,1000);
  motoresRobo.parar();
  delay(tempoParado);
  Serial.println("Esquerda");
  motoresRobo.esquerda(255,1000);
  motoresRobo.parar();
  delay(tempoParado);
  Serial.println("Direita");
  motoresRobo.direita(255,1000);
  motoresRobo.parar();
  delay(tempoParado);
  Serial.println("Parar");
  motoresRobo.parar();
  delay(tempoParado);
}