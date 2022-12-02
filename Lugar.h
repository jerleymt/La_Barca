#ifndef LUGAR_H
#define LUGAR_H

#include <string>

using namespace std;

class Lugar
{
  private:
  string nombre;

  public:

  Lugar(string nombre);

  virtual ~Lugar();

  virtual string  obtener_nombre();

};
  
#else
class Orilla;
#endif
