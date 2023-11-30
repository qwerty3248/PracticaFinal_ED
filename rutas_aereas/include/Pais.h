#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <string>
#include <cstring>
#include "Punto.h"
using namespace std;

class Pais{



	private:
		Punto p;
		string pais;
		string bandera;

	public:

		Pais();
		Punto GetPunto()const;
		string GetPais()const;
		string GetBandera()const;
		//hemos añadido estos set
		void SetPunto(const Punto P); 
		void SetPais(const string Pais);
		void SetBandera(const string Bandera);
		//hemos añadido estos set
		bool operator <(const Pais &P)const;
		bool operator ==(const Pais &P)const;
		bool operator ==(const Punto &P)const;
		friend istream & operator >>(istream & is, Pais &p);
		friend ostream & operator <<(ostream & os, const Pais &P);


};

#endif


