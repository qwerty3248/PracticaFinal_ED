#ifndef RUTAS_H
#define RUTAS_H
#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include "Punto.h"
using namespace std;
class Ruta{

	private:
		list<Punto> puntos;
		string code;
	public:
		
		Ruta();
		void Insertar(const Punto &n);
		void Borrar(const Punto &n);
		string GetCode()const;
		void SetCode(const string &codes);
		bool operator ==(const Ruta &R)const;
		bool operator <(const Ruta &R)const;
		
		class iterator{
			private:
				list<Punto>::iterator p;
			public:
				iterator(){}
				iterator & operator ++(){
					++p;
					return *this;
				}
				iterator & operator--(){
					--p;
					return *this;
				}
				bool operator==(const iterator &i)const{
					return i.p == p;
				
				}
				bool operator != (const iterator &i)const{
					return i.p != p;
				}
				Punto & operator*(){
					return *p;
				}
				
		
			friend class Ruta;
		};
		
		class const_iterator{
			private:
				list<Punto>::const_iterator p;
			
			public:
				const_iterator(){}
				const_iterator & operator ++(){
					++p;
					return *this;
				}
				const_iterator & operator--(){
					--p;
					return *this;
				}
				bool operator==(const_iterator &i)const{
					return i.p == p;
				
				}
				bool operator != (const_iterator &i)const{
					return i.p != p;
				}
				const Punto & operator*(){
					return *p;
				}
		
			friend class Ruta;
		};
		
		iterator begin();
		const_iterator begin()const;
		iterator end();
		const_iterator end()const;
		iterator find(const Punto &p);
		friend istream & operator>>(istream &is, Ruta &R);
		friend ostream & operator<<(ostream &os, const Ruta &R);



}

#endif
