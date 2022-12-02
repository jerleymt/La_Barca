#include <vector>
#include <string>
using namespace std;

class Orilla
{
  private:
  string nombre;
  vector <void> tierra[4];
  
  public:
  Orilla(string nombre);
  ~Orilla();
  virtual string  cual_es_el_nombre();
  virtual void guardar();
};