#include "Orilla.h"

Orilla::Orilla(string _nombre): Lugar(_nombre)
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
