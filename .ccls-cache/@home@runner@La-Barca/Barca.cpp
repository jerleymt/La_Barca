#include "Barca.h"

Barca::Barca(string _nombre)
{
  nombre=_nombre;  
}

Barca::~Barca()
{
  
}

string  Barca::obtener_nombre()
{
  return nombre;
}
