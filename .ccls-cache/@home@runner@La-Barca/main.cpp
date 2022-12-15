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
  Individuo robot("|Robot    |");
  Individuo zorro("|Zorro    |");  
  zorro.es_carnivoro();
  Individuo conejo("|Conejo   |");  
  conejo.es_herbivoro();
  Individuo lechuga("|Lechuga  |");

  Barca la_barca("\n|La Barca |");
  Orilla orilla_izquierda("\n|Izquierda|");
  Orilla orilla_derecha("\n|Derecha  |");
  Barca rio("\n|Rio      |");

  Lugar el_lugar("El lugar");
  
  Jugador player("Jugador");

  
  
  orilla_izquierda.insertar_individuo(robot);
  orilla_izquierda.insertar_individuo(zorro);
  orilla_izquierda.insertar_individuo(conejo);
  rio.insertar_individuo(lechuga);
  

  el_lugar.insertar_Orilla(orilla_izquierda);
  el_lugar.insertar_Orilla(la_barca);
  el_lugar.insertar_Orilla(rio);
  el_lugar.insertar_Orilla(orilla_derecha);
  
  //Pantalla
  cout << orilla_izquierda.ver_nombre()<<endl;
  cout << orilla_izquierda.ver_individuo(0)<<endl;
  cout << orilla_izquierda.ver_individuo(1)<<endl;
  cout << orilla_izquierda.ver_individuo(2)<<endl;
  cout << orilla_izquierda.ver_individuo(3)<<endl;
  
  cout << la_barca.ver_nombre()<<endl;
  cout << la_barca.ver_individuo(0)<<endl;
  cout << la_barca.ver_individuo(1)<<endl;
  cout << la_barca.ver_individuo(2)<<endl;
  cout << la_barca.ver_individuo(3)<<endl;

  cout << rio.ver_nombre()<<endl;
  cout << rio.ver_individuo(0)<<endl;
  cout << rio.ver_individuo(1)<<endl;
  cout << rio.ver_individuo(2)<<endl;
  cout << rio.ver_individuo(3)<<endl;
    
  cout << orilla_derecha.ver_nombre()<<endl;
  cout << orilla_derecha.ver_individuo(0)<<endl;
  cout << orilla_derecha.ver_individuo(1)<<endl;
  cout << orilla_derecha.ver_individuo(2)<<endl;
  cout << orilla_derecha.ver_individuo(3)<<endl;
  
  cout << "\nSi llego!" <<endl;

  return 0;
}