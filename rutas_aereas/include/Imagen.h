/**
  * @file Imagen.h
  * @brief Fichero cabecera para la clase imagen
  *
  * Trabaja con un una imagen
  *
  */
#ifndef _IMAGEN_H
#define _IMAGEN_H
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include "imagenES.h"
#include <fstream>
#include <cstdlib>


/**
  * @brief Tipo de pegado
  *
  * Declara una serie de pegados para la imagen
  *
  * @see LeerTipoPegado
  */
enum Tipo_Pegado {OPACO, BLENDING};
using namespace std;
/**
  * @brief Estructura de pixeles
  *
  * Declara como debe de ser un pixel
  *
  * @see Pixel
  */
struct Pixel{
  unsigned char r,g,b;
  unsigned char transp; //0 no 255 si
}; 

/**
  * @brief Clase Imagen
  *
  *La clase imagen
  *
  */ 
class Imagen{
  private:
    Pixel ** data;
    int nf,nc;
    
   /**
    * @brief Funcion que borra la memoria de una imagen reservada
    *
    * 
    */    
    void Borrar();
    
   /**
    * @brief Funcion que copia una imagen en la actual
    *
    * @param I Imagen que se va a copiar
    */    
    void Copiar(const Imagen &I);

  public:
  
  /**
   * @brief Constructor sin parametros de la clase imagen
   *
   * 
   */
   Imagen();
  /**
   * @brief Constructor con parametros de la clase imagen
   *
   * @param f numeros de filas de la nueva imagen
   * @param c numero de columnas de la nueva imagen
   */   
   Imagen(int f,int c);
  /**
   * @brief Constructor de copia de la clase imagen
   *
   * @param I imagen que se va a copiar a la imagen actual
   */   
   Imagen(const Imagen & I);
  /**
   * @brief operador de igualdad sobrecargado
   *
   * @param I imagen que se va a copiar en la actual
   */   
   Imagen & operator=(const Imagen & I);
  /**
   * @brief Destructor de la clase imagen
   *
   * 
   */   
   ~Imagen();
   
   //set y get
   
  /**
   * @brief Funcion set de un pixel en la imagen
   *
   * @param p pixel que se va a añadir a la imagen 
   * @param i fila donde se va a añadir el pixel
   * @param j columna donde se va a añadir el pixel 
   */   
   void SetPixel(const Pixel p, int i, int j);
  /**
   * @brief Funcion get de un pixel de la imagen
   *
   * @param i fila de la que queremos obtener el pixel de la imagen
   * @param j columna de la que queremos obtener el pixel de la imagen
   * @return Devuelve el pixel de la fila i y la columna j
   */   
   Pixel GetPixel(int i , int j)const;
  /**
   * @brief Operador () de la clase imagen
   *
   * @param i fila de la que queremos el pixel
   * @param j columa de la que queremos el pixel
   * @return Devuelve el pixel de la fila i y la columna j
   */   
   Pixel & operator ()(int i,int j);
  /**
   * @brief Operador () de la clase imagen
   *
   * @param i fila de la que queremos el pixel
   * @param j columa de la que queremos el pixel
   * @return Devuelve el pixel de la fila i y la columna j
   */  
   const Pixel & operator ()(int i,int j)const;
  /**
   * @brief Funcion que escribe una imagen
   *
   * @param nombre Sitio del que se va a escribir una imagen
   */
   void EscribirImagen(const char * nombre);
  /**
   * @brief Funcion que lee una imagen
   *
   * @param nombre De donde se va a obtener la imagen
   * @param nombredelamascara el nombre que tiene la mascara para aplicar a la imagen
   */   
   void LeerImagen (const char *nombre,const string &nombremascara="");
  /**
   * @brief Funcion que limpia la transparencia de una imagen
   *
   * La funcion limpia la trasparencia de cada pixel 
   *
   */   
   void LimpiarTransp();
  /**
   * @brief Funcion que devuelve el numero de filas de una imagen
   *
   * @return Devuelve el numero de filas de una imagen
   */   
   int num_filas()const{return nf;}
  /**
   * @brief Funcion que devuelve el numero de columnas de una imagen
   *
   * @return Devuelve el numero de columnas de una imagen
   */   
   int num_cols()const{return nc;}
  /**
   * @brief Funcion que pone una imagen en otra
   *
   * @param posi fila donde pegamos la imagen
   * @param posj columa donde pegamos la imagen
   * @param I imagen a pegar 
   * @param tipopegado El tipo de pegado de la imagen, opaco o blending
   */   
   void PutImagen(int posi,int posj, const Imagen &I,Tipo_Pegado tippegado=OPACO);
  /**
   * @brief Operador () de la clase imagen
   *
   * @param posi fila de la que queremos la imagen
   * @param posj columa de la que queremos la imagen
   * @param dimi dimension de las filas de la nueva imagen extraida
   * @param imj dimension de las columnas de la nueva imagen extraida
   * @return Imagen extraida
   */   
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



