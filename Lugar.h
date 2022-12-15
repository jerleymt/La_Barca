/*
  Archivo: Lugar.h
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  CLASE: Lugar
  INTENCION: Sirve para definir en que instancia en que se encuntran los Individuos.
  RELACION: Es padre de la clase orilla y barca. Conoce la clase Individuo.
*/

#ifndef LUGAR_H
#define LUGAR_H

/**
  *Clases incluidas.
*/
#include "Individuo.h"

/**
  *Librerias incluidas.
*/
#include <string>
#include <vector>
#include <iostream>

/**
  *Métodos usados.   
*/
using namespace std;

class Lugar
{
  protected:

  /**
    *Variable para el nombre del objeto Lugar
  */
  string nombre;

  /**
    *Vector que almacna objetos de tipo individuo.
  */
  vector<Individuo>vector_individuo;

  /**
    *Vector que almacena objetos de tipo orilla.
  */
  vector<Lugar>vector_orilla;
  
  public:

  /**
    *Construye la clase Lugar.
  */
  Lugar(string nombre);

  /**
  *Destruye la clase Lugar; no hace nada.
  */
  virtual ~Lugar();

  /**
  *Muestra o devuelbe el nombre del objeto Lugar.
  */
  virtual string  ver_nombre();

  /**
  *Inserta un objeto de la clase Individuo en al vector_individuo.
  */
  virtual void insertar_individuo(Individuo individuo);

  /**
  *Recibe un entero para acceder a la posición del vector donde se encuentran los objetos de tipo individuo.
  */
  virtual string ver_individuo(int posicion);

  /**
  *Devuelbe la cantidad de elementos del vector donde se encuentran los objetos de tipo Individuo.
  */
  virtual int tamaño_vector();

  /**
  *Inserta una un objeto de la clase individuo a la orilla.
  */
  virtual void insertar_Orilla(Lugar individuo);

  /**
  *Recibe un entero para acceder a la posición del vector donde se encuentra la orilla.
  */
  virtual string ver_orilla(int posicion); 


};
  
#else
class Orilla;//Declaración anticipada
#endif
