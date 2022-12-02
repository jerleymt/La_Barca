#include "Orilla.h"

Orilla::Orilla(string _nombre)
{
  nombre = _nombre;  
}

Orilla::~Orilla()
{
  
}

void Orilla::subir(string dato)
{
  espacio.push_back(dato);
}

string Orilla::mostrar(int dato)
{
 if (espacio.size() < 0)
 {
   return "|         |";
 }
  else
  return espacio.at(dato);
}

string Orilla::obtener_nombre()
{
  return nombre;
}
