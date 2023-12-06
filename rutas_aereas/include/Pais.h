/**
  * @file Pais.h
  * @brief Fichero cabecera para la clase Pais
  *
  * Trabaja con un pais
  *
  */

#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <string>
#include <cstring>
#include "Punto.h"
using namespace std;

/**
  * @brief Clase Pais
  *
  * La clase Pais
  */

class Pais{



	private:
		Punto p;
		string pais;
		string bandera;

	public:
				
	       /**
	    	* @brief Constructor sin parametros de la clase pais
	    	*
	    	* 
	    	*/ 		
		Pais();
	       /**
	    	* @brief Funcion que obtiene un punto del pais
	    	*
	    	* @return Punto del pais actual
	    	*/ 		
		Punto GetPunto()const;
	       /**
	    	* @brief Funcion que obtiene el pais(nombre) del pais actual
	    	*
	    	* @return obtiene el nombre del pais actual
	    	*/ 		
		string GetPais()const;
	       /**
	    	* @brief Funcion que obtiene la bandera del pais actual
	    	*
	    	* @return obtiene la bandera del pais actual
	    	*/ 		
		string GetBandera()const;
		//hemos añadido estos set
	       /**
	    	* @brief Funcion que asigna un punto a un pais
	    	*
	    	* @param P punto que se le va a asignar al pais
	    	*/ 		
		void SetPunto(const Punto P);
	       /**
	    	* @brief Funcion que asigna un pais(nombre) a un pais
	    	*
	    	* @param Pais el nombre que se le va a asignar al pais
	    	*/ 		 
		void SetPais(const string Pais);
	       /**
	    	* @brief Funcion que asigna una bandera a un pais
	    	*
	    	* @param Bandera bandera que se va a asignar al pais
	    	*/ 		
		void SetBandera(const string Bandera);
		//hemos añadido estos set
	       /**
	    	* @brief operator < dice si un pais es menor a otro a partir de las coordenadas
	    	*
	    	* @param P pais con el que se va a comparar
	    	* @retval true si el pais actual es más pequeño
	    	* @retval false si el pais actual es mayor o igual
	    	*/ 		
		bool operator <(const Pais &P)const;
	       /**
	    	* @brief Operator == para comparar si un pais es igual a otro
	    	*
	    	* @param P pais con el que se va a comparar
	    	* @retval true si los paises son iguales
	    	* @retval false si los paises son distintos
	    	*/ 		
		bool operator ==(const Pais &P)const;
	       /**
	    	* @brief Operator == para comparar si un pais es igual a un punto
	    	*
	    	* @param P punto con el que se va a comparar el pais
	    	* @retval true si los paises son iguales
	    	* @retval false si los paises son distintos
	    	*/		
		bool operator ==(const Punto &P)const;
	       /**
	    	* @brief Operator >> para el pais con los datos del pais
	    	*
	    	* @param is flujo de entrada de datos para el pais
	    	* @param p pais al que se le van a asignar los datos del flujo
	    	* @return Devuelve el flujo de entrada
	    	*/		
		friend istream & operator >>(istream & is, Pais &p);
	       /**
	    	* @brief Operator << para el pais con la salida del pais
	    	*
	    	* @param os flujo de salida del pais
	    	* @param P pais del que se van a extraer los datos
	    	* @return Devuelve el flujo de salida
	    	*/		
		friend ostream & operator <<(ostream & os, const Pais &P);


};

#endif


