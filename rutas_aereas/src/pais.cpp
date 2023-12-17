#include <iostream>
#include "Pais.h"
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

Pais::Pais(){
	p=Punto();
	bandera=pais="";

}
Punto Pais::GetPunto()const{
	return p;

}
string Pais::GetPais()const{
	return pais;

}
string Pais::GetBandera()const{
	return bandera;

}
void Pais::SetPunto(const Punto P){
	p.SetLatitud(P.GetLatitud());
	p.SetLongitud(P.GetLongitud());
} 
void Pais::SetPais(const string Pais){
	pais = Pais;
}
void Pais::SetBandera(const string Bandera){
	bandera = Bandera;
}

bool Pais::operator <(const Pais &P)const{
	return (p < P.GetPunto());

}
bool Pais::operator ==(const Pais &P)const{
	return (p == P.GetPunto());
}
bool Pais::operator ==(const Punto &P)const{
	return (p == P);

}
istream & operator >>(istream & is, Pais &p){
	Punto aux;
	double pala1,pala;
	is>>pala1;
	is>>pala;
	aux.SetLatitud(pala1);
	aux.SetLongitud(pala);
	p.SetPunto(aux);
	string palabra1;
	is>>palabra1;
	string palabra2;
	is>>palabra2;
	p.SetBandera(palabra2);
	p.SetPais(palabra1);
	return is;

}
ostream & operator <<(ostream & os, const Pais &P){
	os<<setprecision(17)<<P.GetPunto().GetLatitud()<<"   "<<setprecision(17)<<P.GetPunto().GetLongitud();
	os<<"   ";
	os<<P.GetPais();
	os<<"   ";
	os<<P.GetBandera();
	return os;
	
}



