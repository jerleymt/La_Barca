#ifndef BARCA_H
#define BARCA_H

//#include <vector>
#include <string>
//#include "Individuo.h"
using namespace std;

class Barca
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
