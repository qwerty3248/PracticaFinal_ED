#include "Punto.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;		
		
		Punto::Punto(){
			latitud=longitud=0;
		}
		
		
		Punto::Punto(double l, double L){
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
			        (longitud == p.GetLongitud()));
		
		}
		istream &operator >>(istream &is, Punto &p){
			
			/*
			char c = is.get();//(
			string palabra = "";
			c = is.get();
			//en c la primera letra
			while (c != ','){
				palabra.push_back(c);
				c=is.get();
			}
			string palabra2 = "";
			c=is.get();//saltamos la ,
			while(c != ')'){
				palabra2.push_back(c);
				c=is.get();
			}
			//c = )
			double aux1 = stod(palabra),
			       aux2 =stod(palabra2);     
			p.SetLatitud(aux1);
			p.SetLongitud(aux2);
			return is;
			
			*/
			
			/*char c = is.get();
			double primero,segundo;
			
			is >> primero;
			
			is.ignore();
			
			is >> segundo;

			p.SetLatitud(primero);
			p.SetLongitud(segundo);

			char parentesis;
			is >> parentesis;			
			
			return is;*/

			char c;
			double primero, segundo;

			// Ignorar espacios y otros caracteres no deseados
			while (isspace(c = is.get()) || c == '(');

			// Verificar si hemos alcanzado el final de la entrada
			if (c == EOF) {
				// Tratar el caso de EOF o fin de línea
				is.setstate(ios::failbit);
				return is;
			}

			// Verificar si hay un signo '-' para manejar números negativos
			if (c == '-') {
				is >> primero; // Leer el número negativo
				primero = -primero; // Negar el número
			} else {
				is.unget(); // Devolver el caracter leído
				is >> primero; // Leer el número
			}

			// Leer la coma
			if (!(is >> c) || c != ',') {
				is.setstate(ios::failbit);
				return is;
			}

			// Leer el segundo número
			is >> segundo;
	
			// Ignorar caracteres no deseados, incluyendo el paréntesis
			is >> ws;
				char indeseado;
				is >> indeseado;

				p.SetLatitud(primero);
				p.SetLongitud(segundo);

				return is;
		
		}
		ostream &operator <<(ostream &os, const Punto &p){
			
			os<<'('<<p.GetLatitud()<<','<<p.GetLongitud()<<')';
		
			return os;
		}
		
		
		
		
