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
	puntos.pop_back(n);

}
string Ruta::GetCode()const{
	return code;
}
void Ruta::SetCode(const string &code){
	code = code;
}
bool Ruta::operator ==(const Ruta &R)const{
	return (strcmp(R.GetCode(),GetCode())==0) && (*this.puntos == R.puntos);

}
bool Ruta::operator <(const Ruta &R)const{
	//la verdad que ni idea jefe

}
iterator Ruta::begin(){
	iterator it;
	it = puntos.begin();
	return it;

}
const_iterator Ruta::begin()const{
	const_iterator it = puntos.begin();
	return it;
}	
iterator Ruta::end(){
	iterator it = puntos.end();
	return it;

}
const_iterator Ruta::end()const{
	const_iterator it = puntos.end();
	return it;
}
iterator Ruta::find(const Punto &p){
	iterator it;
	list<Punto>::iterator i;
	for (i = puntos.begin(); i != puntos.end(); ++i){
		if((*i) == p){
			it = i;
			return it;
		}
	
	}
	return it;
}
istream & operator>>(istream &is, Ruta &R){
	//hay que implementarlo	
}
ostream & operator<<(ostream &os, const Ruta &R){
	//hay que implementarlo
}





