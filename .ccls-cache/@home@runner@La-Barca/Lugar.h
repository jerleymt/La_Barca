#ifndef LUGAR_H
#define LUGAR_H

#include "Individuo.h"
#include <string>
#include <vector>
#include <iostream>

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
  virtual string ver_individuo();

};
  
#else
class Orilla;
#endif
