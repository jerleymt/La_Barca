#include "Lugar.h"
#include <iostream>

Lugar::Lugar(string nombre)
:nombre(nombre)
{
  
}

/**
*Construye la clase Lugar.
*/
Lugar::~Lugar()
{
  
}

/**
*Destruye la clase Lugar; no hace nada.
*/
string  Lugar::ver_nombre()
{
  return nombre;
}

/**
*Inserta un objeto de la clase Individuo en un vector.
*/
void Lugar::insertar_individuo(Individuo individuo)
{
  vector_lugar.push_back(individuo);
}

/**
*
*/
string Lugar::ver_individuo(int posicion)
{
  if (posicion >= vector_lugar.size())
  {
    return "|         |";
  }
  return vector_lugar.at(posicion).obtener_nombre();  
}

int Lugar::tamaño_vector()
{
  return vector_lugar.size();
  
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