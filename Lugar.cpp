#include "Lugar.h"

Lugar::Lugar(string dato_entrada)
{
  espacio.push_back(dato_entrada);
}


Lugar::~Lugar()
{
  
}

string  Lugar::obtener_nombre()
{
  return nombre;
}


