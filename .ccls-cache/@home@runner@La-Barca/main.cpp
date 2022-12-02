/*
Archivo: main.ccp
Autor: Jose Erley Murillo Torres
Correo: jose.erley.murillo@correounivlle.edu.co
*/

/**
El juego consiste en lo siguiente: hay un robot que debe transportar un zorro, un conejo y
una lechuga desde un lado del río hasta la otra orilla, usando una barca. En la barca solo
cabe uno de los tres individuos, además del robot. El problema es que si el robot deja
solos al zorro y el conejo, el zorro se comerá el conejo. Y si deja solos al conejo y la
lechuga, el conejo se comerá la lechuga. El jugador debe controlar que órdenes dar, para
lograr que el robot transporte los tres individuos a la otra orilla, sanos y salvos.
*/

#include "Individuo.h"
#include "Barca.h"
#include "Orilla.h"
#include "Lugar.h"
#include "Jugador.h"

#include <iostream>
#include <string>

using namespace std;
int main()
{
  Individuo robot ("Robot", false, false);
  Individuo zorro ("Zorro", false, false);
  Individuo conejo ("Conejo", false, false);
  Individuo lachuga ("Lechuga", false, false);
  
  
  
  cout << "¡Si llego!" <<endl;
  return 0;
}