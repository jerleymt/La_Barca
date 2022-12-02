#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using namespace std;
class Jugador
{
  private:
  string nombre;

  public:
  Jugador(string nombre);

  virtual ~Jugador();

  virtual string obtener_nombre();

};

#else
class Jugador;  
#endif