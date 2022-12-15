/*
  Archivo: main.cpp
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/


/**
  El juego consiste en lo siguiente: hay un robot que debe transportar un zorro, un conejo y
  una lechuga desde un lado del río hasta la otra orilla, usando una barca. En la barca solo
  cabe uno de los tres individuos, además del robot. El problema es que si el robot deja
  solos al zorro y el conejo, el zorro se comerá el conejo. Y si deja solos al conejo y la
  lechuga, el conejo se comerá la lechuga. El jugador debe controlar que órdenes dar, para
  lograr que el robot transporte los tres individuos a la otra orilla, sanos y salvos.
*/

/**
  *Clases incluidas.
*/
#include "Individuo.h"
#include "Barca.h"
#include "Orilla.h"
#include "Lugar.h"
#include "Jugador.h"

/**
  *Librerias usadas.   
*/
#include <iostream>
#include <string>

/**
  *Métodos usados.   
*/
using namespace std;

int main()
{
  //Creacion de los personaje.
  Individuo robot("|Robot    |");
  Individuo zorro("|Zorro    |");  
  Individuo conejo("|Conejo   |");  
  Individuo lechuga("|Lechuga  |");
  
  //Defino tipo alimentación para los personajes.
  zorro.es_carnivoro();
  conejo.es_herbivoro();
  
  //Creacion de las orillas la barca y el rio.
  Barca la_barca("|La Barca |");
  Orilla orilla_izquierda("|Izquierda|");
  Orilla orilla_derecha("|Derecha  |");
  Barca rio("|Rio      |");
  
  //Creacion del lugar.  
  Lugar el_lugar("El lug.ar");
  
  //Creacion del jugador
  Jugador player("Jugador");

  
  
  orilla_izquierda.insertar_individuo(robot);
  orilla_izquierda.insertar_individuo(zorro);
  orilla_izquierda.insertar_individuo(conejo);
  orilla_izquierda.insertar_individuo(lechuga);
  

  el_lugar.insertar_Orilla(orilla_izquierda);
  el_lugar.insertar_Orilla(la_barca);
  el_lugar.insertar_Orilla(rio);
  el_lugar.insertar_Orilla(orilla_derecha);
  
  //Pantalla
  cout << orilla_izquierda.ver_nombre();
  cout << la_barca.ver_nombre();
  cout << rio.ver_nombre();
  cout << orilla_derecha.ver_nombre()<<endl;
  
  cout << orilla_izquierda.ver_individuo(0);
  cout << la_barca.ver_individuo(0);
  cout << rio.ver_individuo(0);
  cout << orilla_derecha.ver_individuo(0)<<endl;
  
  cout << orilla_izquierda.ver_individuo(1);
  cout << la_barca.ver_individuo(1);
  cout << rio.ver_individuo(1);
  cout << orilla_derecha.ver_individuo(1)<<endl;  
  
  cout << orilla_izquierda.ver_individuo(2);
  cout << la_barca.ver_individuo(2);
  cout << rio.ver_individuo(2);
  cout << orilla_derecha.ver_individuo(2)<<endl;  
  
  cout << orilla_izquierda.ver_individuo(3);
  cout << la_barca.ver_individuo(3);
  cout << rio.ver_individuo(3);
  cout << orilla_derecha.ver_individuo(3)<<endl;  

  return 0;
}