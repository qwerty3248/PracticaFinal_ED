/**
  * @file Rutas.h
  * @brief Fichero cabecera para la clase ruta
  *
  * Trabaja con un codigo y una lista de puntos
  *
  */

#ifndef RUTAS_H
#define RUTAS_H
#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include "Punto.h"
using namespace std;

/**
  * @brief Clase Ruta
  *
  *La clase ruta 
  *
  */

class Ruta{

	private:
		list<Punto> puntos;
		string code;
	public:
		
		/**
		* @brief Constructor sin parametros de la clase ruta
		*
		* 
		*/
		Ruta();
		/**
		* @brief Funcion que inserta un punto en una ruta
		*
		* 
		*/		
		void Insertar(const Punto &n);
		/**
		* @brief Funcion que borra un punto de una ruta
		*
		* 
		*/		
		void Borrar(const Punto &n);
		/**
		* @brief Funcion que devuelve el codigo de una ruta
		*
		* @return Devuelve el codigo de una ruta
		*/		
		string GetCode()const;
		/**
		* @brief Funcion que sobreescribe el codigo de una ruta
		*
		* @param codes El nuevo codigo de la ruta
		*/		
		void SetCode(const string &codes);
		/**
		* @brief Operador == de la clase ruta
		*
		* @param R ruta con la que vamos a comparar nuestra ruta
		* @retval true si son las dos rutas iguales
		* @retval false si las dos rutas son distintas
		*/		
		bool operator ==(const Ruta &R)const;
		/**
		* @brief Operador != de la clase ruta
		*
		* @param R ruta con la que vamos a comparar nuestra ruta
		* @retval true si son las dos rutas distintas
		* @retval false si las dos rutas son iguales
		*/		
		bool operator <(const Ruta &R)const;
		
		/**
	  	* @brief Clase iterator de rutas
	  	*
	  	*La clase iterator de rutas
	  	*
	  	*/
		
		
		class iterator{
			private:
				list<Punto>::iterator p;
			public:
				
				/**
				* @brief Constructor sin parametros de la clase iterator
				*
				* 
				*/
				iterator(){}
				/**
				* @brief operator ++ de la clase iterator
				*
				* @return Devuelve el iterator avanzado
				*/				
				iterator & operator ++(){
					++p;
					return *this;
				}
				/**
				* @brief operator -- de la clase iterator
				*
				* @return Devuelve el iterator retrocedido
				*/				
				iterator & operator--(){
					--p;
					return *this;
				}
				/**
				* @brief operator == de la clase iterator
				*
				* @param i el iterator con el que se va a comparar
				* @retval true si son iguales los iteradores
				* @retval false si son distintos los iteradores
				*/				
				bool operator==(const iterator &i)const{
					return i.p == p;
				
				}
				/**
				* @brief operator != de la clase iterator
				*
				* @param i el iterator con el que se va a comparar
				* @retval true si son distintos los iteradores
				* @retval false si son iguales los iteradores
				*/				
				bool operator != (const iterator &i)const{
					return i.p != p;
				}
				/**
				* @brief operator * de la clase iterator
				*
				* @return Devuelve el valor de la lista de puntos
				*/				
				Punto & operator*(){
					return *p;
				}
				
		
			friend class Ruta;
		};
		
		/**
	  	* @brief Clase const_iterator de rutas
	  	*
	  	*La clase const_iterator de rutas
	  	*
	  	*/
		
		class const_iterator{
			private:
				list<Punto>::const_iterator p;
			
			public:
				
				/**
				* @brief Constructor sin parametros de la clase const_iterator
				*
				* 
				*/
				const_iterator(){}
				/**
				* @brief operator ++ de la clase const_iterator
				*
				* @return Devuelve el iterator avanzado
				*/
				const_iterator & operator ++(){
					++p;
					return *this;
				}
				/**
				* @brief operator -- de la clase const_iterator
				*
				* @return Devuelve el iterator retrocedido
				*/
				const_iterator & operator--(){
					--p;
					return *this;
				}
				/**
				* @brief operator == de la clase const_iterator
				*
				* @param i el iterator con el que se va a comparar
				* @retval true si son iguales los iteradores
				* @retval false si son distintos los iteradores
				*/
				bool operator==(const_iterator &i)const{
					return i.p == p;
				
				}
				/**
				* @brief operator != de la clase const_iterator
				*
				* @param i el iterator con el que se va a comparar
				* @retval true si son distintos los iteradores
				* @retval false si son iguales los iteradores
				*/
				bool operator != (const_iterator &i)const{
					return i.p != p;
				}
				/**
				* @brief operator * de la clase const_iterator
				*
				* @return Devuelve el valor de la lista de puntos
				*/				
				const Punto & operator*(){
					return *p;
				}
		
			friend class Ruta;
		};
		/**
		* @brief Funcion begin
		*
		* @return Devuelve un iterador al principio de la lista de puntos de la ruta
		*/
		iterator begin();
		/**
		* @brief Funcion begin
		*
		* @return Devuelve un const_iterador al principio de la lista de puntos de la ruta
		*/		
		const_iterator begin()const;
		/**
		* @brief Funcion end
		*
		* @return Devuelve un iterador al final de la lista de puntos de la ruta
		*/		
		iterator end();
		/**
		* @brief Funcion end
		*
		* @return Devuelve un const_iterador al final de la lista de puntos de la ruta
		*/		
		const_iterator end()const;
		/**
		* @brief Funcion find
		* 
		* @param p Punto a buscar en la ruta
		* @return Devuelve un iterador donde se encuentra el punto p en la lista
		*/		
		iterator find(const Punto &p);
		/**
		* @brief Operator >> (flujo de entrada)
		*
		* @param is Flujo de entrada de datos
		* @param R Ruta a la que se le van a añadir los datos del flujo de entrada
		* @return Devuelve el flujo de entrada
		*/		
		friend istream & operator>>(istream &is, Ruta &R);
		/**
		* @brief Operator << (flujo de salida)
		*
		* @param os Flujo de salida de datos
		* @param R Ruta que va a sarle los datos al flujo de datos
		* @return Devuelve el flujo de salida
		*/		
		friend ostream & operator<<(ostream &os, const Ruta &R);



}

#endif
