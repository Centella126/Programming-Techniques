//T�tulo: Suma de n�meros positivos hasta que se digite uno negativo
//Autor: Anah� Montserrat V�zquez Padilla
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
			
			cout<<"Ingrese un n�mero: ";
			cin>>num;	
		}	
		cout<<"\nLa suma de los n�meros positivos introducidos es de: "<<suma;
		
		cout<<"\n\n�Quieres continuar? ";
		cin>>respuesta;
		num=0;
		suma=0;
		system("cls");
	}
	
	cout<<"Chao chao";
	
	return 0;
}
