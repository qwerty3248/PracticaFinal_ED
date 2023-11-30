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
	return ((strcmp(R.GetCode(),GetCode())==0) && (puntos == R.puntos));

}
bool Ruta::operator <(const Ruta &R)const{
	//la verdad que ni idea, hay que preguntarselo

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
	string paraules;
	is>>paraules;
	R.SetCode(paraules);
	is>>paraules;//saltamos el numero.
	Punto aux;
	while (is>>aux){
		R.Insertar(aux);	
	}
	return is;
}
ostream & operator<<(ostream &os, const Ruta &R){
	os<<R.GetCode()<<"  "<<R.puntos.size()<<"  ";
	int tam = R.puntos.size();
	iterator it = R.begin();
	while(it != R.end()){
		os<<*it;
		++it;
	}
	return os;
}





