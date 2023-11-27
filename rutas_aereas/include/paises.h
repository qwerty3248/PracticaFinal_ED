#ifndef PAISES_H
#define PAISES_H
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
      
	class iterator{
	private:
	    set<Pais>::iterator p;
	public:
	    //declaraciones
	    iterator (){}   
	    iterator & operator ++(){
	    	++p;
	    	return *this;
	    
	    }
	    
	    iterator & operator --(){
	    	--p;
	    	return *this;
	    }
	    
	    set<Pais> &operator *(){
	    	return *p;
	    
	    }
	    
	    bool operator == (const iterator &i)const {
	    	return i.p == p;
	    
	    
	    }
	    bool operator != (const iterator &i)const {
	    	return i.p != p;
	 
	    }
	    
	    friend class Paises;
	};    
	class const_iterator{
	private:
	    set<Pais>::const_iterator p;
	public:
	    //declaraciones
	    const_iterator (){}  
	    const_iterator & operator ++(){
	    	++p;
	    	return *this;
	    
	    }
	    
	    const_iterator & operator --(){
	    	--p;
	    	return *this;
	    }
	    
	    const set<Pais> &operator *(){
	    	return *p;
	    
	    }
	    
	    bool operator == (const const_iterator &i)const {
	    	return i.p == p;
	    
	    
	    }
	    bool operator != (const const_iterator &i)const {
	    	return i.p != p;
	 
	    }
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

