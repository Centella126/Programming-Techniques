//Nombre: Imprimir nombre 100 veces
//Autor: Anah� Montserrat V�zquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int contador=1;

	
	while (contador<=100){
		cout<<contador<<" Anah� V�zquez"<<"\n";
		contador ++;
	}

	return 0;
}
