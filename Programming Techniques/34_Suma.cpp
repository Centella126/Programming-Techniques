//Nombre: Suma de n�meros
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num=1, suma=0;
	string respuesta="si";
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		while (num!=0){
		cout<<"Ingrese un n�mero: ";
		cin>>num;
		suma=suma+num;
		}
		cout<<"Suma= "<<suma;
		cout<<"\n�Quieres continuar? ";
		cin>>respuesta;
		suma=0;
		num=1;
		system("cls");
	}

	cout<<"Nos vemos";
	
	return 0;
}
