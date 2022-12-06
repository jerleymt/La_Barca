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
  Individuo robot        ("|Robot    |");
  Individuo zorro        ("|Zorro    |");  
  zorro.es_carnivoro();
  Individuo conejo       ("|Conejo   |");  
  conejo.es_herbivoro();
  Individuo lechuga      ("|Lechuga  |");

  Barca la_barca        ("\n|La Barca |");
  Orilla orilla_izquierda("\n|Izquierda|");
  Orilla orilla_derecha  ("\n|Derecha  |");
  Barca rio             ("\n|Rio      |");

  Lugar el_lugar("El lugar");

  Jugador player("Jugador");


  orilla_izquierda.insertar_individuo(robot);
  //orilla_izquierda.insertar_individuo(zorro);
  //orilla_izquierda.insertar_individuo(conejo);
  //orilla_izquierda.insertar_individuo(lechuga);

  // el_lugar.set_orilla(orilla_izquierda);
  // el_lugar.set_orilla(la_barca);
  // el_lugar.set_orilla(rio);
  // el_lugar.set_orilla(orilla_derecha);

  //Individuo* g= orilla_izquierda.ver_guardado(0);
  
//Pantalla
   cout << orilla_izquierda.ver_nombre()<<endl;
   //cout << orilla_izquierda.ver_guardado(0)->obtener_nombre<<endl;
   //cout << g->.obtener_nombre <<endl;
  // cout << orilla_izquierda.ver_guardado(2)<<endl;
  // cout << orilla_izquierda.ver_guardado(3)<<endl;

  // cout << la_barca.obtener_nombre()<<endl;
  // cout << la_barca.mostrar(0)<<endl;
  // cout << la_barca.mostrar(1)<<endl;
  // cout << la_barca.mostrar(2)<<endl;
  // cout << la_barca.mostrar(3)<<endl;

  // cout << rio.obtener_nombre()<<endl;
  // cout << rio.mostrar(0)<<endl;
  // cout << rio.mostrar(1)<<endl;
  // cout << rio.mostrar(2)<<endl;
  // cout << rio.mostrar(3)<<endl;
    
  // cout << orilla_derecha.obtener_nombre()<<endl;
  // cout << orilla_derecha.mostrar(0)<<endl;
  // cout << orilla_derecha.mostrar(1)<<endl;
  // cout << orilla_derecha.mostrar(2)<<endl;
  // cout << orilla_derecha.mostrar(3)<<endl;
  
  cout << "\nSi llego!" <<endl;
  
  return 0;
}