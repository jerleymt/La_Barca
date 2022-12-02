/*
Archivo: main.ccp
Autor: Jose Erley Murillo Torres
Correo: jose.erley.murillo@correounivlle.edu.co
*/

/**
El juego consiste en lo siguiente: hay un robot que debe transportar un zorro, un conejo y
una lechuga desde un lado del río hasta la otra orilla, usando una barca. En la barca solo
cabe uno de los tres individuos, además del robot. El problema es que si el robot deja
solos al zorro y el conejo, el zorro se comerá el conejo. Y si deja solos al conejo y la
lechuga, el conejo se comerá la lechuga. El jugador debe controlar que órdenes dar, para
lograr que el robot transporte los tres individuos a la otra orilla, sanos y salvos.
*/

#include "Barca.h"
#include "Individuo.h"
#include "Orilla.h"
#include <iostream>
#include <string>

using namespace std;


string pantalla [4][4];

string vacio(int dato)
{ 
  string dato2;
  dato2= to_string(dato);
  string vacio0 = "|___0" ;
  string vacio1 = "|___" ;
  string vacio2 = "___|" ;
  string vacio3 = "|________|" ;
  if (dato>=0 && dato<=9)
  {
    return vacio0+dato2+vacio2;
  }
  else if(dato<=0);
  {
    return vacio3;
  }
  return vacio1+dato2+vacio2;
}

int mover(string move, int posicion)
{
  if (move=="d"&& posicion!=3)
  {
    posicion = posicion +1;
  }
  else if (move=="i"&& posicion!=0)
  {
    posicion = posicion -1;
  }

  
  return posicion;
}

int main() 
{  


  // Barca barca("barca_1");
    
  // Individuo robot("Robot");
  // Individuo zorro("Zorro");
  // zorro.es_carniboro();
  // Individuo conejo("Conejo");
  // conejo.es_herbiboro();
  // Individuo lechuga("Lechuga");
    
  int pos =0;

  for (int a=0;a<=3;a++)
  {
    for (int b=0;b<=3;b++)
    { 
      int cont = cont + 1;
      pantalla [a][b]=vacio(-1);    
    }
  }

  
  string play ="";
  while( play != "s")
  {  
    system("clear");
    
    
    cout << "Posicion vale... " << pos <<endl;    
    pos = mover(play,pos);
    pantalla[pos][0]="";
    pantalla[pos][1]="|Zorro___|";
    pantalla[pos][2]="|Conejo__|";
    pantalla[pos][3]="|Lechuga_|";

    cout <<"________________________________________" << endl;
    cout <<"|Orilla_A|                    |Orilla_B|" << endl;
    cout <<"|________|____________________|________|" << endl;
    for (int a=0; a<=3; a++)
    { 
      cout << pantalla [0][a]<< pantalla [1][a]<< pantalla [2][a]<< pantalla [3][a] << endl;  
    }

    cout << "\nPresiona 'D' para mover a la derecha y"<<endl; 
    cout << "presiona 'I' para mover a la izquierda"<<endl; 
    cin >> play;

    
    if (pos>0&&pos<=4&&play=="d")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2-1][0]=vacio(-1);
      pantalla[pos2-1][1]=vacio(-1);
      pantalla[pos2-1][2]=vacio(-1);
      pantalla[pos2-1][3]=vacio(-1);
    }
    else if (pos>=0&&pos<3&&play=="i")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2+1][0]=vacio(-1);
      pantalla[pos2+1][1]=vacio(-1);
      pantalla[pos2+1][2]=vacio(-1);
      pantalla[pos2+1][3]=vacio(-1);
    }
    else if(pos==1&&play=="d")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2-1][0]=vacio(-1);
      pantalla[pos2-1][1]=vacio(-1);
      pantalla[pos2-1][2]=vacio(-1);
      pantalla[pos2-1][3]=vacio(-1);      
    } 
    else if(pos==1&&play=="i")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2-1][0]=vacio(-1);
      pantalla[pos2-1][1]=vacio(-1);
      pantalla[pos2-1][2]=vacio(-1);
      pantalla[pos2-1][3]=vacio(-1);      
    } 
    else if(pos==2&&play=="d")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2+1][0]=vacio(-1);
      pantalla[pos2+1][1]=vacio(-1);
      pantalla[pos2+1][2]=vacio(-1);
      pantalla[pos2+1][3]=vacio(-1);      
    } 
    else if(pos==2&&play=="i")
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos2+1][0]=vacio(-1);
      pantalla[pos2+1][1]=vacio(-1);
      pantalla[pos2+1][2]=vacio(-1);
      pantalla[pos2+1][3]=vacio(-1);     
    } 
    else 
    {
      int pos2 = 0;
      pos2= pos;
      pantalla[pos][0]=vacio(-1);
      pantalla[pos][1]=vacio(-1);
      pantalla[pos][2]=vacio(-1);
      pantalla[pos][3]=vacio(-1);      
    } 
    
  }
  return 0;
}