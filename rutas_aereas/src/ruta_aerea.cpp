
//Fichero: ruta_aerea.cpp
//Crea una imagen con una ruta aerea
//


#include "AlmacenRutas.h"
#include "Imagen.h"
#include "imagenES.h"
#include "Pais.h"
#include "paises.h"
#include "Punto.h"
#include "Rutas.h"
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

int main (int argc, char *argv[]){

	if (argc != 7){
		cerr<<"ERROR: numero invalido de argumentos pruebe con: \n [programa] [arch paises] [imagen mapa] [fich banderas] [fichero con rutas] [imagen avion] [mascara avion]\n"
		exit(-1);
	}
	
	//argv[4] tiene las rutas

	Almacen_Rutas almacen;//creamos el almacen
	
	argv[4] >> almacen;//Le pasamos los datos
	
	cout << almacen;//Sacamos por pantalla los datos del almacen
	
	string elegida;
	
	cin >> elegida;//una vez elegida la ruta
	
	











	return 0;
}
