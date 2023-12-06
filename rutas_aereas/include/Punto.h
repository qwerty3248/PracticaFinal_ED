
/**
  * @file Punto.h
  * @brief Fichero cabecera para la clase punto
  *
  * Trabaja con las latitudes y longitudes de un punto
  *
  */



#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
using namespace std;


/**
  * @brief Clase Punto
  *
  *La clase punto 
  *
  */


class Punto{

	private:	
		double latitud,longitud;

	public:
		
		/**
		* @brief Constructor sin parametros de la clase punto
		*
		* 
		*/
		Punto();
		
		/**
	  	* @brief Constructor con parametros de la clase punto
	  	*
	  	* @param l longitud del punto
  		* @param L latitud del punto
  		*/
		Punto(double l, double L);
		
		/**
  		* @brief Funcion que devuelve una latitud
  		*
 	 	* @return Devuelve la latitud de un punto
  		*/
		double GetLatitud()const;
		/**
  		* @brief Funcion que devuelve una longitud
  		*
 	 	* @return Devuelve la longitud de un punto
  		*/		
		double GetLongitud()const;
		/**
  		* @brief Asigna una latitud al punto
  		*
  		* @param l Latitud a asignar.
  		*/		
		void SetLatitud(double l);
		/**
  		* @brief Asigna una longitud al punto
  		*
  		* @param l Longitud a asignar.
  		*/		
		void SetLongitud(double l);
		/**
  		* @brief Compara un punto con otro para ver si es más pequeño
  		*
  		* @param p Punto con el que se va a comparar nuestro punto
  		* @retval true nuestro punto es más pequeño que p
 	 	* @retval false si nuestro punto es más grande o igual a p
  		*/		
		bool operator < (const Punto &p)const;
		/**
  		* @brief Compara un punto con otro para ver si son iguales
  		*
  		* @param p Punto con el que se va a comparar nuestro punto
  		* @retval true nuestro punto es igual a p
 	 	* @retval false si nuestro punto es distinto a p
  		*/		
		bool operator == (const Punto &p)const;
		/**
  		* @brief flujo de entrada sobrecargado
  		*
  		* @param is Flujo de entrada donde se encuentran los datos
  		* @param p Punto al que se le van a añadir los datos del flujo
  		* @return Devuelve el flujo de entrada
  		*/		
		friend istream &operator >>(istream &is, Punto &p); 
		/**
  		* @brief flujo de salida sobrecargado
  		*
  		* @param os flujo donde se van a sacar los datos
  		* @param p Punto del que se van a extraer los datos
  		* @return Devuelve el flujo de salida
  		*/		
		friend ostream &operator <<(ostream &os, const Punto &p);
		
};



#endif


