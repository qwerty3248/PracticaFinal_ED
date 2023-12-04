#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
using namespace std;

class Punto{

	private:	
		double latitud,longitud;

	public:
		Punto();
		Punto(double l, double L);
		double GetLatitud()const;
		double GetLongitud()const;
		void SetLatitud(double l);
		void SetLongitud(double l);
		bool operator < (const Punto &p)const;
		bool operator == (const Punto &p)const;
		friend istream &operator >>(istream &is, Punto &p); 
		friend ostream &operator <<(ostream &os, const Punto &p);
		
};



#endif


