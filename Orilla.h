/*
  Archivo: Orilla.h
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  CLASE: Orilla
  INTENCION: Crea la orilla donde desembarcan los individuos.
  RELACION: Es un Lugar 
*/

#ifndef ORILLA_H
#define ORILLA_H

/**
  *Clases incluidas.
*/
#include "Lugar.h"

/**
  *Métodos usados.   
*/
using namespace std;

/**
   *La clase Orilla es hija de la clase Lugar.
*/
class Orilla: public Lugar
{
  public:
  
  /**
  *Construye el método orilla.
  */
  Orilla(string);

  /**
  *Método destructor, no hace nada.
  */
  virtual ~Orilla();
  
};
  
#else
class Orilla; //Declaración anticipada.
#endif
