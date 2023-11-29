#include <isotream>
#include "Pais.h"
#include <string>
#include <cstring>
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
bool Pais::operator <(const Pais &P)const{
	return (p < P.GetPunto());

}
bool Pais::operator ==(const Pais &P)const{
	return (p == P.GetPunto());
}
bool Pais::operator ==(const Punto &P)const{
	return (p == P);

}
istream & operator >>(istream & is, Pais &p){}
ostream & operator <<(ostream & os, const Pais &P){}



