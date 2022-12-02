#include "Individuo.h"

Individuo::Individuo(string _nombre, bool _herbivoro, bool _carnivoro)
{
  nombre=_nombre;
  herbivoro=_herbivoro;
  carnivoro=_carnivoro;
}

Individuo::~Individuo() 
{
  
}

string Individuo::obtener_nombre() 
{
  return nombre; 
}

void Individuo::es_carnivoro()
{
  
}

void Individuo::es_herbivoro()
{
  
}


string Individuo::dieta() {
  if (herbivoro == false && carnivoro == false) {
    return " es un vegetal";
  } else if (herbivoro == false && carnivoro == true) {
    return " es carniboro";
  } else if (herbivoro == true && carnivoro == false) {
    return " es herbiboro";
  }
  return " es omniboro";
}
