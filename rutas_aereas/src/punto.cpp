#include "Punto.h"
#include <iostream>
#include <cstring>
#include <string>
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
		istream &operator >>(istream &is, Punto &p){
			string palabra1;
			is>>palabra1;
			p.SetLatitud(stod(palabra1));
			string palabra2;
			is>>palabra2;
			p.SetLongitud(stod(palabra2));
			return is;
		
		}
		ostream &operator <<(ostream &os, const Punto &p){
			
			os<<p.GetLatitud();
			os<<"   ";
			os<<p.GetLongitud();
		
			return os;
		}
		
		
		
		
