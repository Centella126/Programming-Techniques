//Nombre: Terminar porgrama al recibir 0 o 100 y preguntar si quiere continuar
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num=1;
	string respuesta="si";
	
	
	while(respuesta=="si" || respuesta=="Si" || respuesta=="SI"){
		while (num<=100 && num!=0){
			cout<<"Ingrese un número: ";
			cin>>num;
		}
		cout<<"\n¿Quieres continuar? ";
		cin>>respuesta;
		num=1;
		system("cls");
	}
	
	cout<<"Nos vemos";
	
	
	return 0;
}



