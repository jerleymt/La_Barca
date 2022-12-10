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
  vector<Lugar>vector_orilla;
  
  public:
  Lugar(string nombre);  
  virtual ~Lugar();
  virtual string  ver_nombre();
  virtual void insertar_individuo(Individuo individuo);
  virtual void insertar_Orilla(Lugar individuo);
  virtual string ver_individuo(int posicion);
  virtual string ver_orilla(int posicion);  
  virtual int tamaño_vector();

};
  
#else
class Orilla;
#endif
