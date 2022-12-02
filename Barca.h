#ifndef BARCA_H
#define BARCA_H

#include "Lugar.h"

#include <string>

using namespace std;

class Barca: public Lugar
{
  private:
  string nombre;
  
  public:
  Barca(string nombre);

  virtual ~Barca();

  virtual string  obtener_nombre();

};
  
#else
class Barca;
#endif
