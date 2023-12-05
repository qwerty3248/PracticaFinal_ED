
#include <iostream>
#include "AlmacenRutas.h"
#include <pair>
using namespace std;

//dhacer los metodos

Almacen_Rutas::Almacen_Rutas(){
	rutas=map<string,Ruta>();
}
void Almacen_Rutas::Insertar(const Ruta &R){
	pair<string,Ruta> mypair;
	mypair.first = R.GetCode();
	mypair.second = R;
	rutas.emplace(mypair);

}
void Almacen_Rutas::Borrar(const Ruta &R){
	rutas.erase(R.GetCode());
}
Ruta Almacen_Rutas::GetRuta(const string &a){
	Ruta aux = *(rutas.find(a));
	return aux;
}
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
	      
	      //leemos el comentario
	      if (is.peek()=='#'){
		string a;
		getline(is,a);
	      }
	      
	      while (!is.eof()){
	        Ruta aux;
	        is>>aux;
	        string codigo= aux.GetCode();
	        pair<string,Ruta> myPair;
	        myPair.first = codigo;
	        myPair.second = aux;
	      	AR.rutas.insert(myPair);
	      }
	      

}
ostream & operator <<(ostream & os, Almacen_Rutas &R){
	 
	//int tam = R.rutas.size();
	const_iterator it = R.begin();
	while (it != R.end()){
		os<<it->second<<"\n";
		++it;
	}
	
	return os;
}





