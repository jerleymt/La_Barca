/*
  Archivo: Individuo.h
  Correo: jose.erley.murillo@correounivalle.edu.co
  Autor: Jose Erley Murillo Torres
  Código: 2177964
*/

/**
  CLASE: Idividuos.
  INTENCION: Crea lo personajes que iteractuan en la barca y en las orillas.
  RELACION:Ninguna 
*/

#ifndef INDIVIDUO_H
#define INDIVIDUO_H

/**
  *Librerias incluidas.
*/
#include <vector>
#include <string>

/**
  *Métodos usados.   
*/
using namespace std;

class Individuo
{
  protected:

  /**
    *Variable para el nombre del objeto Individuo
  */
  string nombre;

  /**
    *Variable donde true = herbivoro, false = no es herbivoro.
  */
  bool herbivoro = false;

  /**
    *Variable donde true = carnivoro, false = no es carnivoro.
  */
  bool carnivoro = false;
  
  public:

  /**
  *Contructor del metodo Individuo, recibe como agumento un string.
  */
  Individuo(string nombre);

  /**
  *Destructor del método Individuo.
  */
  virtual ~Individuo();

  /**
  *Retorna el nombre del objeto individuo.
  */
  virtual string  obtener_nombre();

  /**
  *Este método define que el objeto individuo es herbivoro.
  */
  virtual void  es_herbivoro();

  /**
  *Este método define que el objeto individuo es carnivoro.
  */
  virtual void  es_carnivoro();

  /**
  *Devuelbe un string diciendo si el objeto individuao es carninoro o herbivoro.
  */
  virtual string dieta();
};
  
#else
class Individuo; //Declaración anticipada.
#endif