#ifndef ORILLA_H
#define ORILLA_H

#include "Lugar.h"

using namespace std;

class Orilla: public Lugar
{
  public:
  Orilla(string);
  virtual ~Orilla();
  
};
  
#else
class Orilla;
#endif
