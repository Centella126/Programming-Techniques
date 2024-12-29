//Nombre: Suma hasta el 10
//Autor: Anahí Montserrat Vázquez Padilla
//Fecha: 04/03/2022

#include <iostream>
#include <stdlib.h>

using namespace std;


int main() 
{
	setlocale(LC_ALL, "spanish");
	
	int contador=1, contadoral=10;

	
	while (contador<=10 && contadoral>=1){
		cout<<contador<<"\n";
		contador ++;
		if(contador>=10){
			cout<<contadoral<<"\n";
			contadoral --;
		}
	}
	
	
	return 0;
}
