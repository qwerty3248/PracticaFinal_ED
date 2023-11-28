#ifndef ALMACEN_RUTAS_H
#define ALMACEN_RUTAS_H
#include <iostream>
#include "Rutas.h"
#include <cstring>
#include <string>
#include <map>
using namespace std;

class Almacen_Rutas{


	private:

		map<string,Ruta> rutas;


	public:

		Almacen_Rutas();
		void Insertar(const Rutas &R);
		void Borrar(const Ruta &R);
		Ruta GetRuta(const string &a);
		class iterator{
			
			private:
				map<string,Ruta>::iterator p;
			
			public:
				
				iterator(){}
				iterator & operator++(){
					++p;	
					return *this;
				}
				iterator & operator--(){
					--p;
					return *this;
				}
				pair<string,Ruta> &operator*(){
					return *p;
				}
				bool operator ==(const iterator &i)const{
					return i.p == p;
				
				}
				bool operator !=(const iterator &i)const{
					return i.p != p;
				}
				friend class Almacen_Rutas;
		
		
		
		};
		class const_iterator{
		
			private:
				map<string,Ruta>::const_iterator p;
				
			public:	
				const_iterator(){}
				const_iterator & operator++(){
					++p;	
					return *this;
				}
				const_iterator & operator--(){
					--p;
					return *this;
				}
				const pair<string,Ruta> &operator*(){
					return *p;
				}
				bool operator ==(const iterator &i)const{
					return i.p == p;
				
				}
				bool operator !=(const iterator &i)const{
					return i.p != p;
				}
				friend class Almacen_Rutas;	
		
		
		
		};
		
		iterator begin();
		const_iterator begin()const;
		iterator end();
		const_iterator end()const;
		friend istream & operator >>(istream & is,Almacen_Rutas &AR);
		friend ostream & operator <<(ostream & os, Almacen_Rutas &R);
		

};

#endif
