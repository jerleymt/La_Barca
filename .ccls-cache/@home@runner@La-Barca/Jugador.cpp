/*
  Archivo: Jugador.cpp
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  *Clases incluidas.
*/
#include "Jugador.h"

Jugador::Jugador(string _nombre)
{
  nombre=_nombre;
}

Jugador::~Jugador()
{

}

string Jugador::obtener_nombre()
{
  return nombre;
}