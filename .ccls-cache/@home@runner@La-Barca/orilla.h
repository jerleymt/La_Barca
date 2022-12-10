#ifndef ORILLA_H
#define ORILLA_H

#include <string>

using namespace std;

class Orilla
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
