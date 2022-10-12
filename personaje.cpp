/*
go
Archivo: personaje.ccp
Autor: Jose Erley Murillo Torres
Correo: jose.erley.murillo@correounivlle.edu.co
*/
#include "personaje.h"

Personaje::Personaje(string _nombre)
{
nombre = _nombre;
}
Personaje::Personaje(bool na)
{
  en_la_barca =false;
}
Personaje::~Personaje()
{
}
bool Personaje::sube_a_la_barca(bool salto)
{
  if (salto == true)
  {
    cout << "Puede saltar" << endl;
  }
  else
  {
     cout << "no Puede saltar" << endl;
  }
  return true;
}