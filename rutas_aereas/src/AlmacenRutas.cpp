
#include <iostream>
#include "AlmacenRutas.h"
using namespace std;

//dhacer los metodos

Almacen_Rutas::Almacen_Rutas(){
	rutas=map<string,Ruta>();
}
void Almacen_Rutas::Insertar(const Rutas &R){
	rutas.insert(R);

}
void Almacen_Rutas::Borrar(const Ruta &R){
	rutas.erase(R);
}
Ruta Almacen_Rutas::GetRuta(const string &a){
	Ruta aux = rutas.find(a);
	return aux;
}//ni idea si está bien
iterator Almacen_Rutas::begin(){
	iterator it;
	it = rutas.begin();
	return it;
}
const_iterator Almacen_Rutas::begin()const{
	const_iterator it;
	it = rutas.begin();
	return it;
}
iterator Almacen_Rutas::end(){
	iterator it;
	it = rutas.end();
	return it;
}
const_iterator Almacen_Rutas::end()const{
	const_iterator it;
	it = rutas.end();
	return it;
}
istream & operator >>(istream & is,Almacen_Rutas &AR){
	//preguntarle a carlos       
	      Ruta aux;
	      //leemos el comentario
	      if (is.peek()=='#'){
		string a;
		getline(is,a);
	      }
	      while (is>>aux){
	      	AR.rutas.insert(aux);
	      }
	      

}
ostream & operator <<(ostream & os, Almacen_Rutas &R);





