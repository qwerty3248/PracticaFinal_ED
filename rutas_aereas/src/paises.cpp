#include "Paises.h"
using namespace std;

  
      Paises::Paises(){}
      void Paises::Insertar(const Pais &P){
	  ................
      }
      void Paises::Borrar(const Pais &P){
	  ................
      }
      
      class const_iterator;
	class iterator{
	private:
	    set<Pais>::iterator p;
	public:
	    ............
           ..............
	  .............
.	    .........    
	    friend class Paises;
	    friend class const_iterator;
	};    
	class const_iterator{
	private:
	    set<Pais>::const_iterator p;
	public:
	    ..........
            ...........
	    friend class Paises;
	   
	};
	Paises::iterator Paises::begin(){
	  iterator it;
	  it.p = datos.begin();
	  return it;
	}  
	
	Paises::const_iterator Paises::begin()const{
	  ...........
	}
	Paises::iterator Paises::end(){
	  iterator it;
	  it.p = datos.end();
	  return it;
	}
	Paises::const_iterator Paises::end()const{
	  ...........
	}
	Paises::iterator Paises::find(const Pais &p){
	    iterator it;
	    set<Pais>::iterator i;
	    for (i=datos.begin(); i!=datos.end() && !((*i)==p);++i);
	    it.p=i;
	    return it;
	}
	Paises::iterator Paises::find(const Punto &p){
	    .............
	}
	
	istream & operator>>(istream & is, Paises & R){
	      Paises rlocal;
	      //leemos el comentario
	      if (is.peek()=='#'){
		string a;
		getline(is,a);
	      }	
	      
	      Pais P;
	      while (is>>P){
		  rlocal.Insertar(P);
		  
	      }
	      R=rlocal;
	      return is;
	}
	
	ostream & operator<<(ostream & os, const Paises &R){
	  
	    Paises::const_iterator it;
	    for (it=R.begin(); it!=R.end(); ++it){
		os<<*it<<"\t";
	    }
	    return os;
	}

