/*
  Archivo: Jugador.h
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  CLASE: Jugador
  INTENCION: Se encarga de controlar la las otras clases.
  RELACION:Ninguna 
*/

#ifndef JUGADOR_H
#define JUGADOR_H

/**
  *Librerias incluidas.
*/
#include <string>

/**
  *Métodos usados.   
*/
using namespace std;

class Jugador
{
  private:

  /**
    *Variable para el nombre del objeto Jugador.
  */
  string nombre;

  public:

  /**
  *Constructor de la clase Jugador.
  */
  Jugador(string nombre);

  /**
  *Destructor de la clase Jugador.
  */
  virtual ~Jugador();

  /**
  *Devuelve el nombre del objetos Jugador.
  */
  virtual string obtener_nombre();

};

#else
class Jugador;  //Declaración anticipada
#endif