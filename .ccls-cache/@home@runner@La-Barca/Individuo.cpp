/*
  Archivo: Individuo.cpp
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  *Clases incluidas.
*/
#include "Individuo.h"

Individuo::Individuo(string _nombre)
{
  nombre=_nombre;
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
  herbivoro = true;
}

void Individuo::es_herbivoro()
{
  carnivoro=true;
}


string Individuo::dieta() 
{
  if (herbivoro == false && carnivoro == false) 
  {
    return " es un vegetal";
  } 
  
  else if (herbivoro == false && carnivoro == true) 
  {
    return " es carniboro";
  } 
  
  else if (herbivoro == true && carnivoro == false) 
  
  {
    return " es herbiboro";
  }
  
  return " es omniboro";
}
