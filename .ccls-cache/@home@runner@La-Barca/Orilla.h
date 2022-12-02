#ifndef ORILLA_H
#define ORILLA_H

#include "Lugar.h"

#include <string>

using namespace std;

class Orilla: public Lugar
{
  private:
  string nombre;

  public:
  Orilla(string);

  virtual ~Orilla();

  virtual string  obtener_nombre();
};
  
#else
class Orilla;
#endif
