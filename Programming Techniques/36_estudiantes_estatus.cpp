//Nombre: estatus de los estudiantes
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int a=0, i=0, suma=0, sumb=0;
	string respuesta="si";
	
	cout<<"Ingrese [1] si está aprobado y [2] si está reprobado\n";
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		while (10>i){
			i++;
	
			cout<<"\nIngrese el estatus: ";
			cin>>a;
			
			if(a==1){
				suma=suma+a;
			}
			else{
				sumb=(sumb+a);
			}
		}
		sumb=sumb/2;
		cout<<"\nLos aprobados son: "<<suma;
		cout<<"\nLos reprobados son: "<<sumb;
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		suma=0;
		sumb=0;
		i=0;
		system("cls");
	}

	cout<<"Nos vemos";

	
	return 0;
}
