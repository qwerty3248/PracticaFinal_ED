
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
		cerr<<"ERROR: numero invalido de argumentos pruebe con: \n [programa] [arch paises] [imagen mapa] [fich banderas] [fichero con rutas] [imagen avion] [mascara avion]\n";
		exit(-1);
	}
	
	//argv[4] tiene las rutas
	
	Ruta y;
	
	cin>>y;
	cout<<y<<endl;
	
	Almacen_Rutas z;
	cin>>z;
	cout<<z<<endl;
	
	exit(1);
	Almacen_Rutas almacen;//creamos el almacen
	
	ifstream archivo (argv[4]);
	archivo >> almacen;//Le pasamos los datos
	
	cout<<almacen.GetRuta("R1")<<endl;
	
	cout << almacen;//Sacamos por pantalla los datos del almacen
	
	exit(1);
	
	string elegida;
	
	cin >> elegida;//una vez elegida la ruta
	
	Ruta elegida_user = almacen.GetRuta(elegida);//tenemos la ruta elegida por el usuario
	
	cout<<elegida_user<<endl;
	
	Imagen mapa;
	mapa.LeerImagen(argv[2]);//obtenemos el mapa
	Paises mundo;
	
	ifstream paises (argv[1]);
	paises >> mundo;//cogemos todos los paises

	cout<<"Hasta aqui \n";	
		
	string banderas = argv[3];
	Imagen avion;
	avion.LeerImagen(argv[5],argv[6]);
	
	
	int fils,cols;
	fils = mapa.num_filas();
	cols = mapa.num_cols();
	
	
	
	//Para pegar en una columna y en una fila 
	//columna = (totalcolumnas/360.0)*(180+longitud)
	//fila=(totalfilas/180.0)*(90-latitud)
	Ruta::iterator it_ruta = elegida_user.begin();
	while (it_ruta != --(elegida_user.end())){
		Punto p1,p2;//los puntos de la ruta
		//Pais c1,c2;
		p1 = *it_ruta;//obtenemos el primer punto
		++it_ruta;
		p2 = *it_ruta;//obtenemos el segundo punto
		string bandera1 = (*(mundo.find(p1))).GetBandera();
		string bandera2 = (*(mundo.find(p1))).GetBandera();
		Imagen bandera_p1;
		Imagen bandera_p2;
		string pathaux1 = banderas + '/' +bandera1;
		string pathaux2 = banderas + '/' +bandera2;
		const char *path1 = pathaux1.c_str();
		const char *path2 = pathaux2.c_str();
		bandera_p1.LeerImagen(path1);//leemos las banderas
		bandera_p2.LeerImagen(path2);
		double col1,col2,fil1,fil2;
		
		col1 = (cols/360.0)*(180+p1.GetLongitud());
		col2 = (cols/360.0)*(180+p2.GetLongitud());
		fil1 = (fils/180.0)*(90-p1.GetLatitud());
		fil2 = (fils/180.0)*(90-p2.GetLatitud());
		
		double angulo_rotar = atan2(col2-col1,fil2-fil1);//formula con la que rotamos un angulo
		
		mapa.PutImagen(fil1,col1,avion);//avion en p1
		mapa.PutImagen(fil2,col2,avion);//avion en p2
		mapa.PutImagen((fil1-fil2)/2,(col1-col2)/2,Rota(avion,angulo_rotar));//avion rotado entre medias
		mapa.PutImagen(fil1,col1,bandera_p1);//pegamos la bandera de c1
		mapa.PutImagen(fil2,col2,bandera_p2);//pegamos la bandera de c2
	
	}
	
	mapa.EscribirImagen("mapa_final.ppm");//escribimos la imagen al final



	return 0;
}
