/*
Archivo: orilla.h
Autor: Jose Erley Murillo Torres
Correo: jose.erley.murillo@correounivlle.edu.co
*/

/**
Clase: Orilla 
Intención:
Relaciones:
*/
#ifndef BARCA_H
#define BARCA_H

#include "personaje.h"

class Barca 
{
private:
bool orilla;
public:
Barca();
virtual ~Barca();
virtual bool mover_barca();
};

#else
class Barca;
#endif
