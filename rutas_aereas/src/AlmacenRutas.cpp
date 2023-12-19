
#include <iostream>
#include "AlmacenRutas.h"
using namespace std;

//dhacer los metodos

Almacen_Rutas::Almacen_Rutas(){
	rutas=unordered_map<string,Ruta>();
}
void Almacen_Rutas::Insertar(const Ruta &R){
	rutas.insert({R.GetCode(),R});

}
void Almacen_Rutas::Borrar(const Ruta &R){
	rutas.erase(R.GetCode());
}
Ruta Almacen_Rutas::GetRuta(const string &a){
	auto aux = rutas.find(a);
	return aux->second;
}
Almacen_Rutas::iterator Almacen_Rutas::begin(){
	Almacen_Rutas::iterator it;
	it.p = rutas.begin();
	return it;
}
Almacen_Rutas::const_iterator Almacen_Rutas::begin()const{
	Almacen_Rutas::const_iterator it;
	it.p = rutas.begin();
	return it;
}
Almacen_Rutas::iterator Almacen_Rutas::end(){
	Almacen_Rutas::iterator it;
	it.p = rutas.end();
	return it;
}
Almacen_Rutas::const_iterator Almacen_Rutas::end()const{
	Almacen_Rutas::const_iterator it;
	it.p = rutas.end();
	return it;
}
istream & operator >>(istream & is,Almacen_Rutas &AR){
	      
	   // Leer comentarios
	   while (is.peek() == '#') {
		string comment;
		getline(is, comment);
	   }
	      
		
	   while (!is.eof()) {

		Ruta aux;
		is >> aux;
		string codigo = aux.GetCode();
		pair<string, Ruta> myPair;
		myPair.first = codigo;
		myPair.second = aux;
		AR.rutas.insert(myPair);
	    }
	    
	    return is;
	      

}
ostream & operator <<(ostream & os, Almacen_Rutas &R){
	 

	unordered_map<string,Ruta>::const_iterator it = R.rutas.cbegin();
	bool primera = true;
	while (it != R.rutas.cend()){
		if (primera){
			os<<"#Rutas disponibles para elegir por el usuario\n";
			primera = false;
		}else{
			os<<it->second<<"\n";
		}
		++it;
	}
	
	return os;
}





