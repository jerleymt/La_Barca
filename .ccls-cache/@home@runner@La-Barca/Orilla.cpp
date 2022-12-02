#include "Orilla.h"

Orilla::Orilla(string _nombre)
{
nombre = _nombre;  
}

Orilla::~Orilla()
{
  
}

string Orilla::obtener_nombre()
{
  return nombre;
}
