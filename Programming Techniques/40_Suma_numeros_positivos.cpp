//Título: Suma de números positivos hasta que se digite uno negativo
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 14/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num=0, suma=0;
	string respuesta="si";
	
	while(respuesta=="Si" || respuesta=="SI" || respuesta=="si"){
		while(num>=0){
			suma=suma+num;
			
			cout<<"Ingrese un número: ";
			cin>>num;	
		}	
		cout<<"\nLa suma de los números positivos introducidos es de: "<<suma;
		
		cout<<"\n\n¿Quieres continuar? ";
		cin>>respuesta;
		num=0;
		suma=0;
		system("cls");
	}
	
	cout<<"Chao chao";
	
	return 0;
}
