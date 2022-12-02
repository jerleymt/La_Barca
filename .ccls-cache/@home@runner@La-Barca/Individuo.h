#ifndef INDIVIDUO_H
#define INDIVIDUO_H

#include <vector>
#include <string>

using namespace std;

class Individuo
{
  private:
  string nombre;
  bool herbivoro = false;
  bool carnivoro = false;
  
  public:

  Individuo(string nombre, bool herbivoro, bool carnivoro);

  virtual ~Individuo();

  virtual string  obtener_nombre();

  virtual string dieta();
};
  
#else
class Individuo;
#endif