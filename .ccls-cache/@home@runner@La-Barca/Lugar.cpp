#include "Lugar.h"

Lugar::Lugar(string _nombre)
{
  nombre = _nombre;
}

Lugar::~Lugar()
{
  
}

string  Lugar::obtener_nombre()
{
  return nombre;
}


