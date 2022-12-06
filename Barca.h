#ifndef BARCA_H
#define BARCA_H

#include "Lugar.h"

using namespace std;

class Barca: public Lugar
{
  public:
  using Lugar::Lugar;
  virtual ~Barca();

};
  
#else
class Barca;
#endif
