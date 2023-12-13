/**
  * @file imagenES.cpp
  * @brief Fichero con definiciones para la E/S de imágenes
  *
  * Permite la E/S de archivos de tipo PGM,PPM
  *
  */

#include <fstream>
#include <string>
#include "Imagen.h"
#include "imagenES.h"
#include "Punto.h"
using namespace std;

/**
 * @brief Funcion que dice de que tipo va a ser la imagen
 *
 * @param f de entrada donde debe estar el tipo de la imagen 
 * @return Devuelve de que tipo es la imagen
 * @see TipoImagen
 */


TipoImagen LeerTipo(ifstream& f)
{
  char c1,c2;
  TipoImagen res= IMG_DESCONOCIDO;

  if (f) {
    c1=f.get();
    c2=f.get();
    if (f && c1=='P')
      switch (c2) {
        case '5': res= IMG_PGM; break;
        case '6': res= IMG_PPM; break;
        default: res= IMG_DESCONOCIDO;
      }
  }
  return res;
}

// _____________________________________________________________________________

/**
  * @brief Consulta el tipo de imagen del archivo
  *
  * @param nombre indica el nombre del archivo de disco a consultar
  * @return Devuelve el tipo de la imagen en el archivo
  *
  * @see TipoImagen
  */

TipoImagen LeerTipoImagen(const char nombre[])
{
  ifstream f(nombre);
  return LeerTipo(f);
}


// _____________________________________________________________________________

/**
 * @brief Funcion que salta los separadares
 *
 * @param f de entrada de los archivos  
 * @return Devuelve la letra ya sin separadores
 */


char SaltarSeparadores (ifstream& f)
{
  char c;
  do {
    c= f.get();
  } while (isspace(c));
  f.putback(c);
  return c;
}

// _____________________________________________________________________________

/**
 * @brief Funcion que lee las cabeceras
 *
 * @param f de entrada de los archivos
 * @param filas las filas de las cabeceras
 * @param  columnas las columnas de las cabeceras
 * @return Devuelve si se han podido saltar los separadores
 */


bool LeerCabecera (ifstream& f, int& filas, int& columnas)
{
    int maxvalor;

    while (SaltarSeparadores(f)=='#')
      f.ignore(10000,'\n');

    f >> columnas >> filas >> maxvalor;
    
    if (/*str &&*/ f && filas>0 && filas <5000 && columnas >0 && columnas<5000) {
        f.get(); // Saltamos separador
        return true;
    }
    else return false;
}

// _____________________________________________________________________________

TipoImagen LeerTipoImagen(const char nombre[], int& filas, int& columnas)
{
  TipoImagen tipo;
  filas=columnas=0;
  ifstream f(nombre);

  tipo=LeerTipo(f);
  if (tipo!=IMG_DESCONOCIDO)
    if (!LeerCabecera(f,filas,columnas)) {
      tipo=IMG_DESCONOCIDO;
    }

  return tipo;
}


// _____________________________________________________________________________

bool LeerImagenPPM (const char nombre[], int& filas, int& columnas, unsigned char buffer[])
{
  bool exito= false;
  filas=0;
  columnas=0;
  ifstream f(nombre);
  
  if (LeerTipo(f)==IMG_PPM)
    if (LeerCabecera (f, filas, columnas))
	if (f.read(reinterpret_cast<char *>(buffer),filas*columnas*3))
	  exito= true;
  
  return exito;
}


// _____________________________________________________________________________

bool LeerImagenPGM (const char nombre[], int& filas, int& columnas, unsigned char buffer[])
{
  bool exito= false;
  filas=0;
  columnas=0;
  ifstream f(nombre);
  
  if (LeerTipo(f)==IMG_PGM)
    if (LeerCabecera (f, filas, columnas))
	if (f.read(reinterpret_cast<char *>(buffer),filas*columnas))
	  exito= true;
  
  return exito;
}


// _____________________________________________________________________________

bool EscribirImagenPPM (const char nombre[], const unsigned char datos[], int filas, int columnas)
{
  ofstream f(nombre);
  bool res= true;
  
  if (f) {
    f << "P6" << endl;
    f << columnas << ' ' << filas << endl;
    f << 255 << endl;
    f.write(reinterpret_cast<const char *>(datos),filas*columnas*3);
    if (!f) res=false;
  }
  return res;
}
// _____________________________________________________________________________

bool EscribirImagenPGM (const char nombre[], const unsigned char datos[], int filas, int columnas)
{
  ofstream f(nombre);
  bool res= true;
  
  if (f) {
    f << "P5" << endl;
    f << columnas << ' ' << filas << endl;
    f << 255 << endl;
    f.write(reinterpret_cast<const char *>(datos),filas*columnas);
    if (!f) res=false;
  }
  return res;
}


/* Fin Fichero: imagenES.cpp */

