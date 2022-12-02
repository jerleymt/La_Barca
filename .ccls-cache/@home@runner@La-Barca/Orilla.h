#ifndef ORILLA_H
#define ORILLA_H

#include "Lugar.h"

#include <string>
#include <vector>

using namespace std;

class Orilla
{
  private:
  string nombre;
  vector<string>espacio;

  public:
  Orilla(string);

  virtual ~Orilla();

  virtual string  obtener_nombre();

  virtual void  subir(string);
  virtual string  mostrar(int);
  virtual int espacio_ocupado();

};
  
#else
class Orilla;
#endif
