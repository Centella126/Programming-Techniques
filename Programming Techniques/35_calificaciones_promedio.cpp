//Nombre: promedio de calificaciones
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 11/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float promedio=0, cal=0, suma=0;
	int  i=0;
	string respuesta= "si";
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		while (10>i){
			i++;
			cout<<"Ingrese la calificación "<<i<<": ";
			cin>>cal;
			
			suma=suma+cal;
		}
		promedio=suma/10;
		cout<<"\nEl promedio de las calificaciones es: "<<promedio;
		
		cout<<"\n\n¿Quieres seguir sumando? ";
		cin>>respuesta;
		suma=0;
		i=0;			
		system("cls");
	}
	
	cout<<"\nAdios";
	
	return 0;
}
