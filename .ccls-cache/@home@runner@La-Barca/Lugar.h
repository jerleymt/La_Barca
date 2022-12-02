#ifndef LUGAR_H
#define LUGAR_H

#include "Barca.h"
#include "Orilla.h"

#include <string>
#include <vector>
using namespace std;

class Lugar
{
  private:
  string nombre;
  vector<string>espacio;

  public:

  Lugar(string );
  Lugar(Barca);
  Lugar(Orilla);


  virtual ~Lugar();

  virtual string  obtener_nombre();

};
  
#else
class Orilla;
#endif
