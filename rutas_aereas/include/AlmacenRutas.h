/**
  * @file AlmacenRutas.h
  * @brief Fichero cabecera para la clase Almacen de rutas
  *
  * Trabaja con un map de rutas
  *
  */
#ifndef ALMACEN_RUTAS_H
#define ALMACEN_RUTAS_H
#include <iostream>
#include "Rutas.h"
#include <cstring>
#include <string>
#include <map>
using namespace std;

/**
  * @brief Clase AlmacenRutas
  *
  * La clase Almace_Rutas
  */


class Almacen_Rutas{


	private:

		map<string,Ruta> rutas;


	public:
               /**
                * @brief Constructor sin parametros de la clase Almacen_Rutas
                *
                * 
                */  
		Almacen_Rutas();
               /**
                * @brief Funcion que inserta una ruta en un map de rutas
                *
                * @param R ruta que se va a insertar
                */		
		void Insertar(const Rutas &R);
               /**
                * @brief Funcion que se va a borrar del map de rutas
                *
                * @param R ruta que se va a borrar del map de rutas
                */		
		void Borrar(const Ruta &R);
               /**
                * @brief Funcion que devuelve una ruta a partir de su clase
                *
                * @param a Clave con la que se va a buscar
                * @return Devuelve una ruta que concuerde con la clave
                */		
		Ruta GetRuta(const string &a);
		/**
		 * @brief Clase iterator de la clase Almacen_Rutas
		 * 
		 * La clase iterator
                 */
		class iterator{
			
			private:
				map<string,Ruta>::iterator p;
			
			public:
			       /**
				* @brief Constructor sin parametros de la clase iterator
				*
				* 
				*/
				iterator(){}
			       /**
				* @brief  Operator ++ de la clase iterator
				*
				* @return Devuelve el iterador avanzado
				*/				
				iterator & operator++(){
					++p;	
					return *this;
				}
			       /**
				* @brief  Operator -- de la clase iterator
				*
				* @return Devuelve el iterador retrasado
				*/				
				iterator & operator--(){
					--p;
					return *this;
				}
			       /**
				* @brief  Operator * de la clase iterator
				*
				* @return Devuelve el valor del iterador
				*/				
				pair<string,Ruta> &operator*(){
					return *p;
				}
			       /**
				* @brief  Operator == de la clase iterator
				*
				* @param i iterador con el que se va a comparar
				* @retval true si son iguales 
				* @retval false si no son iguales
				*/				
				bool operator ==(const iterator &i)const{
					return i.p == p;
				
				}
			       /**
				* @brief  Operator != de la clase iterator
				*
				* @param i iterador con el que se va a comparar
				* @retval true si son distintos 
				* @retval false si no son distintos
				*/				
				bool operator !=(const iterator &i)const{
					return i.p != p;
				}
				friend class Almacen_Rutas;
		
		
		
		};
		/**
		 * @brief Clase const_iterator de la clase Almacen_Rutas
		 * 
		 * La clase const_iterator
                 */		
		class const_iterator{
		
			private:
				map<string,Ruta>::const_iterator p;
				
			public:	
			       /**
				* @brief Constructor sin parametros de la clase const_iterator
				*
				* 
				*/				
				const_iterator(){}
			       /**
				* @brief  Operator ++ de la clase const_iterator
				*
				* @return Devuelve el iterador avanzado
				*/				
				const_iterator & operator++(){
					++p;	
					return *this;
				}
			       /**
				* @brief  Operator -- de la clase const_iterator
				*
				* @return Devuelve el iterador retrasado
				*/				
				const_iterator & operator--(){
					--p;
					return *this;
				}
			       /**
				* @brief  Operator * de la clase const_iterator
				*
				* @return Devuelve el valor del iterador
				*/				
				const pair<string,Ruta> &operator*(){
					return *p;
				}
			       /**
				* @brief  Operator == de la clase const_iterator
				*
				* @param i iterador con el que se va a comparar
				* @retval true si son iguales 
				* @retval false si no son iguales
				*/				
				bool operator ==(const iterator &i)const{
					return i.p == p;
				
				}
			       /**
				* @brief  Operator != de la clase const_iterator
				*
				* @param i iterador con el que se va a comparar
				* @retval true si son distintos 
				* @retval false si no son distintos
				*/				
				bool operator !=(const iterator &i)const{
					return i.p != p;
				}
				friend class Almacen_Rutas;	
		
		
		
		};
               /**
                * @brief Funcion que devuelve un iterator al principio del map
                *
                * @return Devuelve un iterator al principio del map
                */		
		iterator begin();
               /**
                * @brief Funcion que devuelve un const_iterator al principio del map
                *
                * @return Devuelve un const_iterator al principio del map
                */		
		const_iterator begin()const;
               /**
                * @brief Funcion que devuelve un iterator al final del map
                *
                * @return Devuelve un iterator al final del map
                */		
		iterator end();
               /**
                * @brief Funcion que devuelve un const_iterator al final del map
                *
                * @return Devuelve un const_iterator al final del map
                */		
		const_iterator end()const;
               /**
                * @brief Operator >> de la clase Almacen_Rutas
                *
                * @param is Flujo de salida con los datos para el almacen
                * @param AR Almacen de rutas al que se le daran los datos del flujo
                * @return Devuelve el flujo de entrada
                */		
		friend istream & operator >>(istream & is,Almacen_Rutas &AR);
               /**
                * @brief Operator << de la clase Almacen_Rutas
                *
                * @param os Flujo de salida con la salida del almacen de rutas
                * @param R El almacen de rutas del que salen los datos
                * @return Devuelve el flujo de salida 
                */		
		friend ostream & operator <<(ostream & os, Almacen_Rutas &R);
		

};

#endif
