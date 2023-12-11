/**
  * @file paises.h
  * @brief Fichero cabecera para la clase Paises
  *
  * Trabaja con un conjunto de paises
  *
  */

#ifndef PAISES_H
#define PAISES_H
#include "Pais.h"
#include <set>  
#include <iostream> 
using namespace std;  

/**
  * @brief Clase Paises
  *
  * La clase Paises
  */


class Paises{     
      private:
      	    set<Pais> datos;
      
      public:
     /**
      * @brief Constructor sin parametros de la clase paises
      *
      * 
      */             
      Paises();
     /**
      * @brief Funcion que inserta un pais a el conjunto de paises
      * 
      * @param P pais que se va a insertar al conjunto
      */      
      void Insertar(const Pais &P);
     /**
      * @brief Funcion que borra un pais del conjunto
      *
      * @param P pais que se va a borrar del conjunto
      */      
      void Borrar(const Pais &P);

       /**
        * @brief Clase iterator de la clase paises
        *
        * La clase iterator
        */      
	class iterator{
	private:
	    set<Pais>::iterator p;
	public:
	    //declaraciones
           /**
            * @brief Constructor de la clase iterator sin parametros
            *
            * 
            */ 	    
	    iterator (){}   
           /**
            * @brief  Operator ++ de la clase iterator
            *
            * @return Devuelve el iterator avanzado una posicion
            */	    
	    iterator & operator ++(){
	    	++p;
	    	return *this;
	    
	    }
           /**
            * @brief Operator -- de la clase iterator
            *
            * @return Devuelve el iterator una posicion retrasada
            */	    
	    iterator & operator --(){
	    	--p;
	    	return *this;
	    }
           /**
            * @brief Operator * de la clase iterator
            *
            * @return Devuelve el pais al que esta apuntando el operator
            */	    
	    const Pais &operator *(){
	    	return *p;
	    
	    }
	    
           /**
            * @brief Operator == de la clase iterator 
            *
            * @param i iterador con el que se va a comparar el iterator actual
            * @retval true si son iguales
            * @retval false si no son iguales
            */	    
	    bool operator == (const iterator &i)const {
	    	return i.p == p;
	    
	    
	    }
           /**
            * @brief Operator != de la clase iterator 
            *
            * @param i iterador con el que se va a comparar el iterator actual
            * @retval true si son distintos
            * @retval false si son iguales
            */		    
	    bool operator != (const iterator &i)const {
	    	return i.p != p;
	 
	    }
	    
	    friend class Paises;
	};    
	
       /**
        * @brief Clase const_iterator de la clase paises
        *
        * La clase const_iterator
        */	
	class const_iterator{
	private:
	    set<Pais>::const_iterator p;
	public:
	    //declaraciones
           /**
            * @brief Constructor de la clase const_iterator sin parametros
            *
            * 
            */ 	    
	    const_iterator (){}  
           /**
            * @brief  Operator ++ de la clase const_iterator
            *
            * @return Devuelve el iterator avanzado una posicion
            */		    
	    const_iterator & operator ++(){
	    	++p;
	    	return *this;
	    
	    }
           /**
            * @brief Operator -- de la clase const_iterator
            *
            * @return Devuelve el iterator una posicion retrasada
            */	
	    const_iterator & operator --(){
	    	--p;
	    	return *this;
	    }
           /**
            * @brief Operator * de la clase const_iterator
            *
            * @return Devuelve el pais al que esta apuntando el operator
            */	    
	    const Pais &operator *()const{
	    	return *p;
	    
	    }
           /**
            * @brief Operator == de la clase const_iterator 
            *
            * @param i iterador con el que se va a comparar el iterator actual
            * @retval true si son iguales
            * @retval false si no son iguales
            */	    
	    bool operator == (const const_iterator &i)const {
	    	return i.p == p;
	    
	    
	    }
           /**
            * @brief Operator != de la clase const_iterator 
            *
            * @param i iterador con el que se va a comparar el iterator actual
            * @retval true si son distintos
            * @retval false si son iguales
            */	    
	    bool operator != (const const_iterator &i)const {
	    	return i.p != p;
	 
	    }
	    friend class Paises;
	   
	};
       /**
        * @brief Funcion que devuelve el principio de el conjunto de paises
        *
        * @return Devuelve un iterator al principio del conjunto
        */  	
	iterator begin();
       /**
        * @brief Funcion que devuelve el principio de el conjunto de paises
        *
        * @return Devuelve un const_iterator al principio del conjunto
        */	
	const_iterator begin()const;
       /**
        * @brief Funcion que devuelve el final de el conjunto de paises
        *
        * @return Devuelve un iterator al final del conjunto
        */ 	
	iterator end();
       /**
        * @brief Funcion que devuelve el final de el conjunto de paises
        *
        * @return Devuelve un const_iterator al final del conjunto
        */	
	const_iterator end()const;
       /**
        * @brief Funcion que devuelve un iterator donde se encuentra un pais especifico
        *
        * @param p pais que se busca en el conjunto de paises
        * @return Devuelve un iterator donde esta el pais p
        */	
	iterator find(const Pais &p);
       /**
        * @brief Funcion que devuelve un iterator donde se encuentra un pais con un punto
        *
        * @param p punto que se busca en los paises
        * @return Devuelve un iterator donde esta el pais con ese punto
        */	
	iterator find(const Punto &p);
       /**
        * @brief Operator >> para paises
        *
        * @param is Flujo de entrada con los datos 
        * @param R paises a los cuales se les va a poner los datos
        * @return Devuelve el flujo de entrada 
        */	
	friend istream & operator>>(istream & is, Paises & R);
       /**
        * @brief Operator << para paises
        *
        * @param os flujo de salida con los datos de paises
        * @param R paises que le dan los datos al flujo
        * @return Devuelve el flujo de salida con la salida de paises
        */	
	friend ostream & operator<<(ostream & os, const Paises &R);
};
#endif

