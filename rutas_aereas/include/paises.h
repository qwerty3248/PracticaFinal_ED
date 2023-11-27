#ifndef Paises_h
#define Paises_h
#include "Pais.h"
#include <set>  
#include <iostream> 
using namespace std;  

class Paises{     
      private:
      	    set<Pais> datos;
      
      public:
      Paises();
      void Insertar(const Pais &P);
      void Borrar(const Pais &P);
      
      class const_iterator;
	class iterator{
	private:
	    set<Pais>::iterator p;
	public:
	    //declaraciones    
	    friend class Paises;
	    friend class const_iterator;
	};    
	class const_iterator{
	private:
	    set<Pais>::const_iterator p;
	public:
	    //declaraciones
	    friend class Paises;
	   
	};
	
	iterator begin();
	const_iterator begin()const;
	iterator end();
	const_iterator end()const
	iterator find(const Pais &p);
	iterator find(const Punto &p);
	friend istream & operator>>(istream & is, Paises & R);
	friend ostream & operator<<(ostream & os, const Paises &R);
};
#endif

