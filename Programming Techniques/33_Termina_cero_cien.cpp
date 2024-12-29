//Nombre: Terminar porgrama al recibir 0 o 100
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	float num=1;

	while (num<=100 && num!=0){
		cout<<"Ingrese un número: ";
		cin>>num;
	}

	cout<<"Ahí nos vidrios";

	return 0;
}
