
#ifndef _IMAGEN_H
#define _IMAGEN_H
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include "imagenES.h"
#include <fstream>
#include <cstdlib>



enum Tipo_Pegado {OPACO, BLENDING};
using namespace std;
struct Pixel{
  unsigned char r,g,b;
  unsigned char transp; //0 no 255 si
};  
class Imagen{
  private:
    Pixel ** data;
    int nf,nc;
    void Borrar();
    void Copiar(const Imagen &I);

  public:
    Imagen();
   
   Imagen(int f,int c);
   
   Imagen(const Imagen & I);
   
   Imagen & operator=(const Imagen & I);
   
   ~Imagen();
   
   //set y get
   
   void SetPixel(const Pixel p, int i, int j);
   
   Pixel GetPixel(int i , int j)const;
   
   Pixel & operator ()(int i,int j);
   
   const Pixel & operator ()(int i,int j)const;
   
   void EscribirImagen(const char * nombre);
   
   void LeerImagen (const char *nombre,const string &nombremascara="");
   void LimpiarTransp();
   int num_filas()const{return nf;}
   int num_cols()const{return nc;}
   void PutImagen(int posi,int posj, const Imagen &I,Tipo_Pegado tippegado=OPACO);
   Imagen ExtraeImagen(int posi,int posj,int dimi,int dimj);
};   

/** 
 * @brief Obtiene una nueva imagen que es la versión rotada de una imagen de entrada
 * @param Io: imagen de entrada
 * @param angulo: angulo a rotar la imagen de entrada. Debe estar en radianes.
 * @return Una nueva imagen que es la versión rotada de Io.
 * */

Imagen Rota(const Imagen & Io,double angulo);



/** 
 * @brief Pinta una imagen
 * @param f1: Limite inferior de la fila
 * @param f2: Limite superior de la fila
 * @param c1: Limite inferior de la columna
 * @param c2: Limite superior de la columna
 * @param I: La imagen donde se va a pintar
 * @param avion: EL avion que se va a pintar en la imagen
 * @param mindisf: El minimo de las filas
 * @param mindisc: El minimo de las columnas
 * */

void Pintar( int f1,int f2,int c1,int c2,Imagen &I, const Imagen &avion,int mindisf,int mindisc);



#endif



