/*
  Archivo: Lugar.cpp
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  *Clases incluidas.
*/
#include "Lugar.h"

/**
  *Librerias incluidas.
*/
#include <iostream>

Lugar::Lugar(string nombre)
  :nombre(nombre)
{
  
}

Lugar::~Lugar()
{
  
}

string  Lugar::ver_nombre()
{
  return nombre;
}

void Lugar::insertar_individuo(Individuo individuo)
{
  vector_individuo.push_back(individuo);
}

string Lugar::ver_individuo(int posicion)
{
  if (posicion >= vector_individuo.size())
  {
    return "|         |";
  }
  return vector_individuo.at(posicion).obtener_nombre();  
}

int Lugar::tamaño_vector()
{
  return vector_individuo.size();  
}

void Lugar::insertar_Orilla(Lugar _lugar)
{
  vector_orilla.push_back(_lugar);
}

string Lugar::ver_orilla(int posicion)
{
  string acumulado="";
  
  for(int b=0; b<=vector_orilla.at(posicion).tamaño_vector(); b++)
  {      
    acumulado = vector_orilla.at(posicion).ver_individuo(b);   
    acumulado=acumulado+"\n";
  }
  return acumulado;
}