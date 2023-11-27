#include "Punto.h"
#include <iostream>
using namespace std;		
		
		Punto::Punto(){
			latitud=longitud=0;
		}
		
		
		Punto::Punto(double l, double L, const string & d){
			latitud=l;
			longitud=L;
		}
		double Punto::GetLatitud()const{
		
			return latitud;
		}
		double Punto::GetLongitud()const{
			return longitud;
		
		}
		void Punto::SetLatitud(double l){
			latitud = l;
		}
		void Punto::SetLongitud(double l){
			longitud = l;
		}
		bool Punto::operator < (const Punto &p)const{
				
		
		}
		bool Punto::operator == (const Punto &p)const;
		istream &operator >>(istream &is, Punto &p); 
		ostream &operator <<(ostream &is, const Punto &p);
		
		
		
		
