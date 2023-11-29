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
			bool menor = false;
			
			if (latitud != p.GetLatitud()){
				if (latitud < p.GetLatitud()){
					menor = true;
				
				}
				
			
			}else{//en el caso de que las latitudes iguales vamos con las longitudes
			
				if (longitud < p.GetLatitud()){
					menor = true;
				
				}
			
			}
			
			return menor;
			
			
		
		}
		bool Punto::operator == (const Punto &p)const{
			return ((latitud == p.GetLatitud()) &&
			        (longitud == p.GetLongitud));
		
		}
		istream &operator >>(istream &is, Punto &p); 
		ostream &operator <<(ostream &is, const Punto &p);
		
		
		
		
