#include <iostream>
using namespace std;
#include "Rutas.h"

Ruta::Ruta(){
	puntos = list<Punto>();
	code="";

}
void Ruta::Insertar(const Punto &n){
	puntos.push_back(n);

}
void Ruta::Borrar(const Punto &n){
	auto it = puntos.begin();
	
	while (it != puntos.end()){
		if (*it == n){
			puntos.erase(it);
		}else{
			++it;
		
		}
	}

}
string Ruta::GetCode()const{
	return code;
}
void Ruta::SetCode(const string &codes){
	code = codes;
}
bool Ruta::operator ==(const Ruta &R)const{
	const char * aux = R.GetCode().c_str();
	const char * aux2 = GetCode().c_str();
	return ((strcmp(aux,aux2)==0) && (puntos == R.puntos));

}
bool Ruta::operator <(const Ruta &R)const{
	return code < R.code; 

}
Ruta::iterator Ruta::begin(){
	Ruta::iterator it;
	it.p = puntos.begin();
	return it;

}
Ruta::const_iterator Ruta::begin()const{
	const_iterator it;
	it.p = puntos.begin();
	return it;
}	
Ruta::iterator Ruta::end(){
	Ruta::iterator it;
	it.p = puntos.end();
	return it;

}
Ruta::const_iterator Ruta::end()const{
	Ruta::const_iterator it;
	it.p = puntos.end();
	return it;
}
Ruta::iterator Ruta::find(const Punto &p){
	Ruta::iterator it;
	list<Punto>::iterator i;
	for (i = puntos.begin(); i != puntos.end(); ++i){
		if((*i) == p){
			it.p = i;
			return it;
		}
	
	}
	return it;
}
istream & operator>>(istream &is, Ruta &R){
	is>>R.code;
	
	int num;
	is>>num;//saltamos el numero.
	
	for (int i = 0; i < num ; i++){
		Punto aux;
		is >> aux;
		R.Insertar(aux);	
	}	
	return is;
}
ostream & operator<<(ostream &os, const Ruta &R){
	os<<R.GetCode()<<"  "<<R.puntos.size()<<"  ";
	int tam = R.puntos.size();
	list<Punto>::const_iterator it = R.puntos.cbegin();
	while(it != R.puntos.cend()){
		os<<*it;
		++it;
	}
	return os;
}





