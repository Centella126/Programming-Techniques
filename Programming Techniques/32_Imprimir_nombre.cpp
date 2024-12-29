//Nombre: Imprimir nombre 100 veces
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int contador=1;

	
	while (contador<=100){
		cout<<contador<<" Anahí Vázquez"<<"\n";
		contador ++;
	}

	return 0;
}
