#ifndef LUGAR_H
#define LUGAR_H

#include "Individuo.h"
#include <string>
#include <vector>

using namespace std;

class Lugar
{
  protected:
  string nombre;
  vector<Individuo>vector_lugar;
  
  public:
  Lugar(string nombre);  
  virtual ~Lugar();
  virtual string  ver_nombre();
  virtual void insertar_individuo(Individuo individuo);
  virtual void ver_individuo(int posicion);

};
  
#else
class Orilla;
#endif
