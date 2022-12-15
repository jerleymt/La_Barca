/*
  Archivo: Barca.h
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  CLASE: Barca
  INTENCION: Crea la barca donde se suben los individuos
  RELACION: Es un Lugar 
*/

#ifndef BARCA_H
#define BARCA_H

/**
  *Clases incluidas.
*/
#include "Lugar.h"

/**
  *Métodos usados.   
*/
using namespace std;

/**
   *La clase Barca es hija de la clase Lugar.
*/
class Barca: public Lugar
{
  public:

  //Los métodos destrucctor y  destructor no una clase padre no se heredan por loque es necesario declararlas en la clase hija o llamar a la función "using" para usar el método de la clase padre. 
  /**
  *Usa el constructor de la clase padre y sus agumentos.
  */
  using Lugar::Lugar;

  /**
  *Destructor de la clase Barca;
  */
  virtual ~Barca();

};
  
#else
class Barca; //Declaración anticipada
#endif
