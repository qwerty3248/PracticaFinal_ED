#include "Paises.h"
using namespace std;

  
      Paises::Paises(){
      	set<Pais> datos = set<Pais>();
      }
      void Paises::Insertar(const Pais &P){
	  datos.insert(P);
      }
      void Paises::Borrar(const Pais &P){
	  datos.erase(P);
      }
      
      iterator Paises::begin(){
	  iterator it;
	  it.p = datos.begin();
	  return it;
	}  
       const_iterator Paises::begin()const{
	  const_iterator it;
	  it.p = datos.begin();
	  return it;
	}
       iterator Paises::end(){
	  iterator it;
	  it.p = datos.end();
	  return it;
	}
	
	const_iterator Paises::end()const{
	  const_iterator it;
	  it.p = datos.end();
	  return it;
	}
	iterator Paises::find(const Pais &p){
	    iterator it;
	    set<Pais>::iterator i;
	    for (i=datos.begin(); i!=datos.end() && !((*i)==p);++i);
	    it.p=i;
	    return it;
	}
	iterator Paises::find(const Punto &p){
	    iterator it;
	    set<Pais>::iterator i;
	    for (i = datos.begin(); i != datos.end(); ++i){
	    	if (*i == p){
	    		it.p = i;
	    		return it;
	    	}
	    
	    }
	    return it;
	    
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

