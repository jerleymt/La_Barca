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