
Archivo: personaje.h
Autor: Jose Erley Murillo Torres
Correo: jose.erley.murillo@correounivlle.edu.co
*/

/**
Clase: Personaje
Intención: 
Relaciones:
*/
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>
using namespace std;

class Personaje
{
  private:
  bool en_la_barca;
  string nombre;
  public:
  Personaje(string);
  Personaje(bool);
  virtual ~Personaje();
  virtual bool sube_a_la_barca(bool);
  virtual bool en_tierra(bool);
  virtual bool al_otro_lado(bool);
  
};
#else
class Personaje;
#endif