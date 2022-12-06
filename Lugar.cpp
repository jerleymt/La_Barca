#include "Lugar.h"

Lugar::Lugar(string nombre)
:nombre(nombre)
{
  
}

/**
*Construye la clase Lugar.
*/
Lugar::~Lugar()
{
  
}

/**
*Destruye la clase Lugar; no hace nada.
*/
string  Lugar::ver_nombre()
{
  return nombre;
}

/**
*Inserta un objeto de la clase Individuo en un vector.
*/
void Lugar::insertar_individuo(Individuo individuo)
{
  vector_lugar.push_back(individuo);
}

/**
*
*/
void Lugar::ver_individuo(int posicion)
{
   vector_lugar.at(posicion);
  
}
